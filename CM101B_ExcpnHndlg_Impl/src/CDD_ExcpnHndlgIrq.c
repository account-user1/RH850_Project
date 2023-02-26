/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlgIrq.c 
* Module Description: Implements the interrupt handling and exception handling functionality of CM101B Exception Handling RH850
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 11/21/17  1        AJM       Initial Version                                                                EA4#12706
* 03/11/18  2        AJM       Moved BACKUPRAM2 update before the call to NxtrSwRstFromExcpn                  EA4#21569
**********************************************************************************************************************/
#include <v800_ghs.h> /* for LDSR, STSR intrinsics */ 
#include "Rte_CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg_private.h"
#include "SEG_RegDefns.h" /* for SEGFLAG */
#include "ECCPE1_RegDefns.h" /* for ECC bank and address registers etc */
#include "ERRSLV0_RegDefns.h" 
#include "ERRSLV1_RegDefns.h" 
#include "ERRSLV2_RegDefns.h" 
#include "ERRSLV3_RegDefns.h" 
#include "ERRSLV4_RegDefns.h" 
#include "BECCPBA_RegDefns.h" 
#include "HBG_RegDefns.h" 
#include "CFGSIC_RegDefns.h" 
#include "CFGPE1_RegDefns.h" 
#include "ECCFLIC_RegDefns.h" 
#include "GRGDSIC_RegDefns.h" 
#include "GRGDPE1_RegDefns.h" 
#include "GRGDHBS_RegDefns.h" 
#include "ECCGRC_RegDefns.h" 
#include "NxtrMcuSuprtLib.h" /* for NxtrSwRstFromExcpn() */

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 2.1 [NXTRDEV 2.1.1]: Deviation allowed for Renesas P1M exception handler errata syncp workaround - 
                                          for readability, the assembly language statements are placed near the definition 
                                          of the handler that needs the workaround */

#define FPUINVLDOPERSTSBIT_CNT_U32      ((uint32)(0x00004000U))
#define FPUDIVBYZEROSTSBIT_CNT_U32      ((uint32)(0x00002000U))
#define FPUOVFSTSBIT_CNT_U32            ((uint32)(0x00001000U))

#define MEMERRINFOREADWRBIT_CNT_U32     ((uint32)(0x00000001U))
#define WORDSHIFT_CNT_U08               ((uint8)16U)

/* SEGFLAG bit masks */
#define SEGVPGFMASK_CNT_U16        ((uint16)(0x0200U))   /* VPGF is bit 9 of SEGFLAG */
#define SEGVCRFMASK_CNT_U16        ((uint16)(0x0100U))   /* VCRF is bit 8 of SEGFLAG */
#define SEGTCMFMASK_CNT_U16        ((uint16)(0x0040U))   /* TCMF is bit 6 of SEGFLAG */
#define SEGROMFMASK_CNT_U16        ((uint16)(0x0020U))   /* ROMF is bit 5 of SEGFLAG */
#define SEGVCIFMASK_CNT_U16        ((uint16)(0x0010U))   /* VCIF is bit 4 of SEGFLAG */

/* system register register IDs and selection IDs */
#define FPSRREGID_CNT_S32           6    /* register ID of FPSR */
#define FPSRSELNID_CNT_S32          0    /* selection ID of FPSR */

#define FPEPCREGID_CNT_S32          7    /* register ID of FPEPC */
#define FPEPCSELNID_CNT_S32         0    /* selection ID of FPEPC */

#define MEIREGID_CNT_S32            8    /* register ID of MEI */
#define MEISELNID_CNT_S32           2    /* selection ID of MEI */

#define MEAREGID_CNT_S32            6    /* register ID of MEA */
#define MEASELNID_CNT_S32           2    /* selection ID of MEA */

#define FEICREGID_CNT_S32           14   /* register ID of FEIC */
#define FEICSELNID_CNT_S32          0    /* selection ID of FEIC */

#define HISPDBUSRESDAREAUPPRADR_CNT_U32             (0XF2FFFFFFU)
#define HISPDBUSRESDAREALOWRADR_CNT_U32             (0x10000000U)
#define IPGREGAREAUPPRADR_CNT_U32                   (0XFFFEE000U)
#define IPGREGAREALOWRADR_CNT_U32                   (0xFFFEE024U)
#define SEGREGAREAUPPRADR_CNT_U32                   (0xFFFEE98BU)
#define SEGREGAREALOWRADR_CNT_U32                   (0xFFFEE980U)
#define PRPHLRESDAREALOWRADR_CNT_U32                (0xFF000000U)
#define CODFLSINSTRFETCHERRFEICREGVAL_CNT_U32       (0x11U)

#define CDD_ExcpnHndlg_START_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"

/**********************************************************************************************************************
*   Patched_SysErrIrq:
*   This section provides the SYNCP workaround for the SYSERR exception (see Renesas Technical Update TN-RH8-S001A/E)
**********************************************************************************************************************/
__asm("   .align  4");
__asm("   .globl  _Patched_SysErrIrq");
__asm("   .extern _SysErrIrq");
__asm("_Patched_SysErrIrq:");
__asm("   syncp");
__asm("   jr    _SysErrIrq");

/*****************************************************************************************************************
 * Name        :   SysErrIrq
 * Description :   Implementation of SYSERR Exception Handling 
 *                 Saves information about the SYSERR cause and performs software reset
 * Inputs      :   Registers containing SYSERR cause information
 * Outputs     :   None
 * Usage Notes :   Called on SYSERR exception occurring after the change from RBASE to EBASE
 *                 SYSERR is an exception with FE "Saved Resource"
 ****************************************************************************************************************/
/* Use GreenHills pragma for creating an interrupt service routine.  
   The (FE) argument is for RH850 FE level exceptions */
#pragma ghs interrupt(FE)  
FUNC(void, CDD_ExcpnHndlg_CODE) SysErrIrq(void)
{
    VAR (P1mcDiagc1, AUTOMATIC) TmpSrc_Cnt_T_enum;
    VAR (uint32, AUTOMATIC) TmpData_Cnt_T_u32;
    VAR (uint16, AUTOMATIC) Segflag_Cnt_T_u16; 
    VAR (uint16, AUTOMATIC) ErrTyp_Cnt_T_u16 = 0U; 
    VAR (uint16, AUTOMATIC) ErrAcsInfo_Cnt_T_u16 = 0U; 
    VAR (uint32, AUTOMATIC) SegAddr_Cnt_T_u32; 
    VAR (uint32, AUTOMATIC) FeicRegVal_Cnt_T_u32;

    Segflag_Cnt_T_u16 = SEGFLAG; /* copy register to local variable to avoid MISRA Rule 12.2 and/or 12.4 warning */
    SegAddr_Cnt_T_u32 = SEGADDR; /* copy register to local variable to avoid MISRA Rule 12.2 and/or 12.4 warning */
    FeicRegVal_Cnt_T_u32 = __STSR (FEICREGID_CNT_S32, FEICSELNID_CNT_S32);

    /* Determine source of error from the SEGFLAG bits and indicate in BRAMDAT0 */
    if ((Segflag_Cnt_T_u16 & SEGVPGFMASK_CNT_U16) != 0U)
    {
        TmpSrc_Cnt_T_enum = P1MCDIAGC_PRPHLBUSGUARDWRERR;
        ErrTyp_Cnt_T_u16 = SEGTYPE;
        ErrAcsInfo_Cnt_T_u16 = SEGSIDE;
    }
    else if ((Segflag_Cnt_T_u16 & SEGVCRFMASK_CNT_U16) != 0U)
    {
        TmpSrc_Cnt_T_enum = P1MCDIAGC_INTPRPHLGUARDERR;
        ErrAcsInfo_Cnt_T_u16 = SEGSIDE;
    }
    else if ((Segflag_Cnt_T_u16 & SEGTCMFMASK_CNT_U16) != 0U)
    {
        /* Identify bank that failed to get address information from the correct register */
        if(LRDERSTR_PE1 != 0U)
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_LCLRAMDBLBIT;            
        }
        else
        {
            /*Access to invalid RAM area caused the error*/
            TmpSrc_Cnt_T_enum = P1MCDIAGC_INVLDRAMAREA; 
        }
        ErrTyp_Cnt_T_u16 = SEGTYPE;
        ErrAcsInfo_Cnt_T_u16 = SEGSIDE;
    }
    else if ((Segflag_Cnt_T_u16 & SEGVCIFMASK_CNT_U16) != 0U)  
    {
        if(0U != (ERRSLVSTAT_PFSS0 | ERRSLVSTAT_PFSS1 | ERRSLV1STAT | ERRSLV2STAT | ERRSLV3STAT | ERRSLV4STAT))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_PRPHLBUSGUARDREADERR;
        }
        else if(0U != (APERSTR_PFSS & 0x00C2U))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_PRPHLBUSADRDATAECCERR;
        }
        else if(0U != (ERRSLVF0STAT | ERRSLVF1STAT | ERRSLVE0STAT | ERRSLVE1STAT | ERRSLVM0STAT))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_HISPDBUSGUARDERR;
        }
        else if(0U != (MGDCFSTAT_VCI2CFB | MGDCFSTAT_PE1))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_CODFLSGUARDERR;
        }
        else if(0U != UCFDERSTR)
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_CODFLSADRPARORDATAECCERR;
        }
        else if(0U != (MGDGRSSTAT_VCI2GRAM | MGDGRSSTAT_PE1 | MGDGRSSTAT_AXI2GRAM))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_GBLRAMGUARDERR;
        }
        else if(0U != UGRDERSTR)
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_GBLRAMECCERR;
        }
        /* Address of IPG Setting Registers */
        else if((SegAddr_Cnt_T_u32 >= IPGREGAREAUPPRADR_CNT_U32) && (SegAddr_Cnt_T_u32 <= IPGREGAREALOWRADR_CNT_U32))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_INTPRPHLGUARDPROTNREGWRINUSRMODE;
        }
        /* Address of SEG Setting Registers */
        else if((SegAddr_Cnt_T_u32 >= SEGREGAREAUPPRADR_CNT_U32) && (SegAddr_Cnt_T_u32 <= SEGREGAREAUPPRADR_CNT_U32))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_SYSERRGENREGWRINUSRMODE;
    }  
        /* Address of Peripheral Unmapped area  */
        else if(SegAddr_Cnt_T_u32 >= PRPHLRESDAREALOWRADR_CNT_U32)
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_PRPHLUMAPDAREA;
        }
        /* Address of H Bus area */
        else if((SegAddr_Cnt_T_u32 <= HISPDBUSRESDAREAUPPRADR_CNT_U32) && (SegAddr_Cnt_T_u32 >= HISPDBUSRESDAREALOWRADR_CNT_U32))
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_HISPDBUSUMAPDAREAERR;
        }
        else
        {
            TmpSrc_Cnt_T_enum = P1MCDIAGC_INTPRPHLGUARDERR;
        }
        
        ErrTyp_Cnt_T_u16 = SEGTYPE;
        ErrAcsInfo_Cnt_T_u16 = SEGSIDE;
        
    }
    else if(FeicRegVal_Cnt_T_u32 == CODFLSINSTRFETCHERRFEICREGVAL_CNT_U32)
    {
        /* Instruction fetch error from code flash */
        TmpSrc_Cnt_T_enum = P1MCDIAGC_CODFLSINSTRFETCHERR;
        ErrAcsInfo_Cnt_T_u16 = (uint16)FeicRegVal_Cnt_T_u32;
    }
    else /* Assume instruction fetch error drove SYSERR */
    {
        /* Instruction fetch error from non code flash */
        TmpSrc_Cnt_T_enum = P1MCDIAGC_NONCODFLSINSTRFETCHERR;
        ErrAcsInfo_Cnt_T_u16 = (uint16)FeicRegVal_Cnt_T_u32;
    }
    TmpData_Cnt_T_u32 = (((uint32)ErrTyp_Cnt_T_u16 << WORDSHIFT_CNT_U08) | ((uint32)ErrAcsInfo_Cnt_T_u16));
    BACKUPRAM2 = SegAddr_Cnt_T_u32;
    /* Issue software reset */
    NxtrSwRstFromExcpn(TmpSrc_Cnt_T_enum, TmpData_Cnt_T_u32);
}

/**********************************************************************************************************************
*   Patched_FpuErrIrq:
*   This section provides the SYNCP workaround for the Floating Point exception (see Renesas Technical Update TN-RH8-S001A/E)
**********************************************************************************************************************/
__asm("   .align  4");
__asm("   .globl  _Patched_FpuErrIrq");
__asm("   .extern _FpuErrIrq");
__asm("_Patched_FpuErrIrq:");
__asm("   syncp");
__asm("   jr    _FpuErrIrq");

/*****************************************************************************************************************
 * Name        :   FpuErrIrq
 * Description :   Implementation of Floating Point Unit Exception (Imprecise) Handling 
 *                 Saves information about the FPU exception cause and performs software reset
 * Inputs      :   Registers containing FPU exception information
 * Outputs     :   None
 * Usage Notes :   Called on FPU exception (imprecise) (FPI)
 *                 FPI is an exception with EI "Saved Resource"
 ****************************************************************************************************************/
/* Use GreenHills pragma for creating an interrupt service routine.  
   The default is for RH850 EI level exceptions */
#pragma ghs interrupt
FUNC(void, CDD_ExcpnHndlg_CODE) FpuErrIrq(void)
{
    VAR (uint32, AUTOMATIC) FpuExcpnProgCntr_Cnt_T_u32;
    VAR (uint32, AUTOMATIC) FpuStsReg_Cnt_T_u32;
    VAR (P1mcDiagc1, AUTOMATIC) McuDiagcData0_Cnt_T_enum;
    
    FpuExcpnProgCntr_Cnt_T_u32 = __STSR (FPEPCREGID_CNT_S32, FPEPCSELNID_CNT_S32);
    FpuStsReg_Cnt_T_u32 = __STSR (FPSRREGID_CNT_S32, FPSRSELNID_CNT_S32);
    
    if ((FpuStsReg_Cnt_T_u32 & FPUINVLDOPERSTSBIT_CNT_U32) != 0U)
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_FPUERRINVLDOPER;
    }
    else if ((FpuStsReg_Cnt_T_u32 & FPUDIVBYZEROSTSBIT_CNT_U32) != 0U)
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_FPUERRDIVBYZERO;
    }
    else if ((FpuStsReg_Cnt_T_u32 & FPUOVFSTSBIT_CNT_U32) != 0U)
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_FPUERROVF;
    }
    else
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_FPUERRUKWN;
    }
    /* Issue software reset */
    NxtrSwRstFromExcpn(McuDiagcData0_Cnt_T_enum, FpuExcpnProgCntr_Cnt_T_u32);    
}

/*****************************************************************************************************************
 * Name        :   AlgnErrIrq
 * Description :   Implementation of Misalignment  Exception Handling 
 *                 Saves information about the misalignment exception cause and performs software reset
 * Inputs      :   Registers containing misalignment exception information
 * Outputs     :   None
 * Usage Notes :   Called on misalignment exception (MAE)
 *                 MAE is an exception with FE "Saved Resource"
 ****************************************************************************************************************/
/* Use GreenHills pragma for creating an interrupt service routine.  
   The (FE) argument is for RH850 FE level exceptions */
#pragma ghs interrupt(FE)
FUNC(void, CDD_ExcpnHndlg_CODE) AlgnErrIrq(void)
{
    VAR (uint32, AUTOMATIC) MemErrInfo_Cnt_T_u32;
    VAR (uint32, AUTOMATIC) MemErrAdr_Cnt_T_u32;
    VAR (P1mcDiagc1, AUTOMATIC) McuDiagcData0_Cnt_T_enum;
    
    MemErrInfo_Cnt_T_u32 = __STSR (MEIREGID_CNT_S32, MEISELNID_CNT_S32);
    MemErrAdr_Cnt_T_u32 = __STSR (MEAREGID_CNT_S32, MEASELNID_CNT_S32);
    
    if ((MemErrInfo_Cnt_T_u32 & MEMERRINFOREADWRBIT_CNT_U32) == MEMERRINFOREADWRBIT_CNT_U32)
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_ALGNWR;
    }
    else
    {
        McuDiagcData0_Cnt_T_enum = P1MCDIAGC_ALGNREAD;
    }
    /* Issue software reset */
    NxtrSwRstFromExcpn(McuDiagcData0_Cnt_T_enum, MemErrAdr_Cnt_T_u32);    
}

/*****************************************************************************************************************
 * Name        :   ResdOperIrq
 * Description :   Implementation of Reserved Operation (reserved instruction) Exception Handling 
 *                 Saves information about the exception cause and performs software reset
 * Inputs      :   FEPC - FE exception program counter
 * Outputs     :   None
 * Usage Notes :   Called on reserved instruction exception (RIE)
 *                 RIE is an exception with FE "Saved Resource"
 ****************************************************************************************************************/
/* Use GreenHills pragma for creating an interrupt service routine.  
   The (FE) argument is for RH850 FE level exceptions */
#pragma ghs interrupt(FE)
FUNC(void, CDD_ExcpnHndlg_CODE) ResdOperIrq(void)
{
    /* Issue software reset */
    NxtrSwRstFromExcpn(P1MCDIAGC_RESDOPER, 0U);    
}

#define CDD_ExcpnHndlg_STOP_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"
