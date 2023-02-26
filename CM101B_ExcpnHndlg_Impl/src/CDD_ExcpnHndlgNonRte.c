/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlgNonRte.c 
* Module Description: Implements the non-RTE functionality of CM101B Exception Handling RH850
*                     Includes SetMcuDiagcIdnData and GetMcuDiagcIdnData server runnables
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  ----------------------------------------------------------------------------- ---------
* 11/21/17  1        AJM       Initial Version                                                               EA4#12706,EA4#16355
**********************************************************************************************************************/
#include <v800_ghs.h> /* for LDSR, STSR intrinsics */  
#include "Rte_CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg_private.h"
#include "CDD_ExcpnHndlg_Cfg.h"
#include "PEG_RegDefns.h"
#include "ECCGTM0_RegDefns.h"
#include "ECCGTM1_RegDefns.h"
#include "ECCPE1_RegDefns.h"
#include "ECCGRC_RegDefns.h"
#include "ECCFLIC_RegDefns.h"
#include "ECCFLX0_RegDefns.h"
#include "ECCFLX0T0_RegDefns.h"
#include "ECCFLX0T1_RegDefns.h"
#include "ECCCSIH0_RegDefns.h"
#include "ECCCSIH1_RegDefns.h"
#include "ECCCSIH2_RegDefns.h"
#include "ECCCSIH3_RegDefns.h"
#include "DMACH_RegDefns.h"
#include "ECCTTCAN0_RegDefns.h"
#include "ECCMCAN0_RegDefns.h"
#include "ECCMCAN1_RegDefns.h"
#include "WdgM.h"
#include "WdgM_PBcfg.h" /* for declarations needed in distinguishing program flow, deadline monitor, and alive monitor faults */
#include "NxtrMcuSuprtLib.h" /* for NxtrSwRstFromExcpn(), WrProtdRegSys_u32() */

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define FPCFGININVAL_CNT_T_U32    0x0000001CU /* enable invalid operation, divide by zero, and overflow FPU exceptions */

/* system register register IDs and selection IDs */
#define FPCFGREGID_CNT_S32          10  /* register ID of FPCFG */
#define FPCFGSELNID_CNT_S32         0   /* selection ID of FPCFG */
#define REGFEPCREGID_CNT_S32        2   /* register ID of FEPC */
#define REGFEPCSELNID_CNT_S32       0   /* selection ID of FEPC */
#define MEAREGID_CNT_S32            6   /* register ID of MEA */
#define MEASELNID_CNT_S32           2   /* selection ID of MEA */

#define CDD_ExcpnHndlg_START_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"

/*****************************************************************************************************************
 * Name        :   ExcpnHndlgInit1
 * Description :   Pre-OS initialization for the CM101B ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Non-RTE function because it needs to be called before the OS is started - so
 *                 that floating point exceptions can be enabled before anything uses floating point
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ExcpnHndlgInit1(void)
{
    /* configure floating point exceptions */
    __LDSR (FPCFGREGID_CNT_S32, FPCFGSELNID_CNT_S32, FPCFGININVAL_CNT_T_U32);

}

/*****************************************************************************************************************
* Name        :   FeNmiEcmMstChkrErr
* Description :   ECM Master checker compare error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiEcmMstChkrErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_ECMMSTCHKRERR, 0U);
}

/*****************************************************************************************************************
 * Name        :   FeNmiWdgErr
 * Description :   Watchdog Exception Handler callback for the CM101B ExcpnHandlg component 
 * Inputs      :   None
 * Outputs     :   None
 * Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiWdgErr(void)
{
    VAR (P1mcDiagc1, AUTOMATIC) FltVal_Cnt_T_enum;
    VAR (uint32, AUTOMATIC) FltInfo_Cnt_T_u32;
    P2CONST (WdgM_ConfigType, AUTOMATIC, CDD_ExcpnHndlg_APPL_CONST) WdgCfgPtr_T_rec; 
    VAR (WdgM_SupervisedEntityIdType, AUTOMATIC) NumOfWdgMgrEnty; 
    VAR (WdgM_SupervisedEntityIdType, AUTOMATIC) EntyId; 
    P2CONST (WdgM_SupervisedEntityType, AUTOMATIC, CDD_ExcpnHndlg_APPL_CONST) EntyPtr_T_rec; 

    WdgCfgPtr_T_rec = &WDGMCFG_REC; 
    NumOfWdgMgrEnty = WdgCfgPtr_T_rec->NrOfSupervisedEntities;
    
    /* default to P1MCDIAGC_FENMIWDG if no other violations found */
    FltVal_Cnt_T_enum = P1MCDIAGC_FENMIWDG;
    FltInfo_Cnt_T_u32 = 0U;
    
    EntyId = 0U;
    
    /* For all configured Entities or until fault cause is found */
    while ((EntyId < NumOfWdgMgrEnty) && (FltVal_Cnt_T_enum == P1MCDIAGC_FENMIWDG))
    {
        EntyPtr_T_rec  = &WdgCfgPtr_T_rec->WdgMSupervisedEntityRef[EntyId];
        if (EntyPtr_T_rec->EntityStatusGRef->ProgramFlowViolationCnt != 0U)
        {
            FltVal_Cnt_T_enum = P1MCDIAGC_FENMIPROGFLOW;
            FltInfo_Cnt_T_u32 = (uint32)EntyId;
        }
        else if (EntyPtr_T_rec->EntityStatusGRef->FailedSupervisionRefCycles != 0U)
        {
            FltVal_Cnt_T_enum = P1MCDIAGC_FENMIALVMONR;
            FltInfo_Cnt_T_u32 = (uint32)EntyId;
        }
        else if (EntyPtr_T_rec->EntityStatusGRef->DeadlineViolationCnt != 0U)
        {
            FltVal_Cnt_T_enum = P1MCDIAGC_FENMIDEADLINEMONR;
            FltInfo_Cnt_T_u32 = (uint32)EntyId;
        }
        else
        {
            /* do nothing */
        }
        EntyId++;
    }
    
    NxtrSwRstFromExcpn(FltVal_Cnt_T_enum, FltInfo_Cnt_T_u32);
}

/*****************************************************************************************************************
* Name        :   SetMcuDiagcIdnData
* Description :   Implementation of SetMcuDiagcIdnData special function 
*                 Sets the reset reason and supporting information
* Inputs      :   McuDiagcData0_Arg - data to be saved in BACKUPRAM0
*             :   McuDiagcData1_Arg - data to be saved in BACKUPRAM1
* Outputs     :   BACKUPRAM0 - global output - backup RAM used to save the reset reason
*             :   BACKUPRAM1 - global output - backup RAM used to save additional supporting information
* Usage Notes :   This is a server runnable which may be called from both RTE and non-RTE functions, but calls 
*                 from RTE functions will look like library calls, i.e. will not use a client/server port.
*                 May be called multiple times but only updates data once per reset, except when setting
*                 a flash programming request which will always update the data
****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) SetMcuDiagcIdnData(P1mcDiagc1 McuDiagcData0_Arg, 
                                                    uint32 McuDiagcData1_Arg)
{
    VAR(P1mcDiagc1, AUTOMATIC) RstInfo_Cnt_T_enum; 
    
    RstInfo_Cnt_T_enum = (P1mcDiagc1)BACKUPRAM0;  /* copy current reset info from backup RAM */
    
    if ((McuDiagcData0_Arg == P1MCDIAGC_FLSPROGMREQ) || 
        (RstInfo_Cnt_T_enum == P1MCDIAGC_PWRONRST) ||
        (RstInfo_Cnt_T_enum == P1MCDIAGC_DBGRST) ||
        (RstInfo_Cnt_T_enum == P1MCDIAGC_FLSPROGMCMPL) ||
        (RstInfo_Cnt_T_enum == P1MCDIAGC_HARDRST) ||
        (RstInfo_Cnt_T_enum == P1MCDIAGC_SOFTRST) ||
        (RstInfo_Cnt_T_enum == P1MCDIAGC_QUICKIGNRST ))
    {
        BACKUPRAM0 = McuDiagcData0_Arg;
        BACKUPRAM1 = McuDiagcData1_Arg;
    }
}

/*****************************************************************************************************************
* Name        :   GetMcuDiagcIdnData
* Description :   Implementation of GetMcuDiagcIdnData special function 
*                 Gets the reset reason/pre-os error code
* Inputs      :   BACKUPRAM0
* Outputs     :   *McuDiagcData0_Arg - reset reason / pre-os error code
* Usage Notes :   This is a server runnable which may be called from both RTE and non-RTE functions, but calls 
*                 from RTE functions will look like library calls, i.e. will not use a client/server port.
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcIdnData(P2VAR(P1mcDiagc1, AUTOMATIC, ExcpnHndlg_APPL_VAR) McuDiagcData0_Arg) 
{
        *McuDiagcData0_Arg = BACKUPRAM0;
}

/*****************************************************************************************************************
* Name        :   ProcUkwnExcpnErr
* Description :   Implementation of Process Unknown Exception Error
*                 Handles reaction to Unknown Exception
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcUkwnExcpnErr(uint32 McuDiagcData1_Arg) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_UKWNEXCPN, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcMpuExcpnErr
* Description :   Implementation of Process MPU Exception Error
*                 Handles reaction to Memory Protection Violation
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcMpuExcpnErr(uint32 McuDiagcData1_Arg) 
{
    VAR(uint32, AUTOMATIC) MpuExcpnErrAdr; 
    BACKUPRAM2 = McuDiagcData1_Arg;
    BACKUPRAM3 = __STSR(REGFEPCREGID_CNT_S32,REGFEPCSELNID_CNT_S32);
    MpuExcpnErrAdr = __STSR(MEAREGID_CNT_S32,MEASELNID_CNT_S32);
    NxtrSwRstFromExcpn(P1MCDIAGC_MPUEXCPNERR, MpuExcpnErrAdr);
}

/*****************************************************************************************************************
* Name        :   ProcPrvlgdInstrExcpnErr
* Description :   Implementation of Process Privileged Instruction Exception Error
*                 Handles reaction to Privileged Instruction Exception
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrvlgdInstrExcpnErr(uint32 McuDiagcData1_Arg) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_PRVLGDINSTREXCPN, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcPrmntOsErr
* Description :   Implementation of Process Permanent OS Error
*                 Handles reaction to Permanent OS Errors
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   None
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcPrmntOsErr(uint32 McuDiagcData1_Arg) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_PRMNTOSERR, McuDiagcData1_Arg);
}

/*****************************************************************************************************************
* Name        :   ProcNonCritOsErr
* Description :   Implementation of Process Non Critical OS Error
*                 Handles reaction to Non Critical OS Errors
* Inputs      :   McuDiagcData1_Arg - fault error code argument
* Outputs     :   ExcpnHndlgOsErrCod_C - error code variable polled in a periodic function
* Usage Notes :   This is a server runnable which is expected to be called by the Os Error Handler (non-RTE context)
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) ProcNonCritOsErr(uint32 McuDiagcData1_Arg) 
{
    ExcpnHndlgOsErrCod_C = (uint16)McuDiagcData1_Arg;
}

/*****************************************************************************************************************
* Name        :   FeNmiDmaLockStepErrOrGblRamWrBufErr
* Description :   Dma Lockstep Or Global RAM Write through buffer error exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaLockStepErrOrGblRamWrBufErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_DMALOCKSTEPORGBLRAMWRBUFERR,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiBusBrdgErr
* Description :   Bus arbiter error exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiBusBrdgErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_BUSBRDGERR,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiProcrLockStepErr
* Description :   Compare error of Safety Mechanism with redundancy exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
 FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiProcrLockStepErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_PROCRLOCKSTEPERR,0U);
}


/*****************************************************************************************************************
* Name        :   FeNmiClkMonr0RtErr
* Description :   Clock Monitor 0 Runtime Failure exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr0RtErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CLKMONR0RTFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr1RtErr
* Description :   Clock Monitor 1 Runtime Failure exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr1RtErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CLKMONR1RTFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr2RtErr
* Description :   Clock Monitor 2 Runtime Failure exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr2RtErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CLKMONR2RTFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr3RtErr
* Description :   Clock Monitor 3 Runtime Failure exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr3RtErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CLKMONR3RTFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiClkMonr5RtErr
* Description :   Clock Monitor 5 Runtime Failure exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiClkMonr5RtErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CLKMONR5RTFLT,0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiGtmRamDblBitEccErr
* Description :   GTM Ram double bit exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGtmRamDblBitEccErr(void) 
{
    /* Check if a GTM0 RAM double bit ECC error was detected */
    if((ECCGTM0CTL & 0x00020004U) != 0U)
    {
        NxtrSwRstFromExcpn(P1MCDIAGC_GTMRAMDBLBITECCERR, ECCGTM0CTL);
    }
    /* GTM1 RAM double bit ECC error was detected */
    else
    {
        NxtrSwRstFromExcpn(P1MCDIAGC_GTMRAMDBLBITECCERR, ECCGTM1CTL);
    }
}

/*****************************************************************************************************************
* Name        :   FeNmiBusSngBitEccErr
* Description :   ECC errors in the data transfer path exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiBusSngBitEccErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_BUSSNGBITECCERR, 0);
}

/*****************************************************************************************************************
* Name        :   FeNmiLclRamEccAdrOvfErr
* Description :   ECC overflow errors in the local ram exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiLclRamEccAdrOvfErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_LCLRAMECCERRADROVF, LROVFSTR_PE1);
}

/*****************************************************************************************************************
* Name        :   FeNmiGlbRamEccAdrOvfErr
* Description :   ECC overflow errors in the global ram exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGlbRamEccAdrOvfErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_GLBRAMECCERRADROVF, UGROVFSTR);
}

/*****************************************************************************************************************
* Name        :   FeNmiCodFlsEccAdrOvfErr
* Description :   ECC overflow errors in the code flash exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiCodFlsEccAdrOvfErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CODFLSECCERRADROVF, UCFOVFSTR);
}

/*****************************************************************************************************************
* Name        :   FeNmiPrphlRamEccAdrOvfErr
* Description :   ECC overflow errors in the peripheral ram exception handler callback for the CM101B 
                  ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiPrphlRamEccAdrOvfErr(void) 
{
    if((ECCFLX0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_FRRAMECCERROVF, ECCFLX0CTL);
    }
    else if ((ECCFLX0T0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_FRRAMECCERROVF, ECCFLX0T0CTL);
    }
    else if ((ECCFLX0T1CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_FRRAMECCERROVF, ECCFLX0T1CTL);
    }
    else if ((ECCCSIH0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CSIHRAMECCERROVF, ECCCSIH0CTL);
    }
    else if ((ECCCSIH1CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CSIHRAMECCERROVF, ECCCSIH1CTL);
    }
    else if ((ECCCSIH2CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CSIHRAMECCERROVF, ECCCSIH2CTL);
    }
    else if ((ECCCSIH3CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CSIHRAMECCERROVF, ECCCSIH3CTL);
    }
    else if ((ECCTTCAN0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CANRAMECCERROVF, ECCTTCAN0CTL);
    }
    else if ((ECCMCAN0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CANRAMECCERROVF, ECCMCAN0CTL);
    }
    else if ((ECCMCAN1CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_CANRAMECCERROVF, ECCMCAN1CTL);
    }
    else if ((ECCGTM0CTL & 0x00000800U) != 0U)
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_GTMRAMECCERROVF, ECCGTM0CTL);
    }
    else
    {
        NxtrSwRstFromExcpn (P1MCDIAGC_GTMRAMECCERROVF, ECCGTM1CTL);
    }
}

/*****************************************************************************************************************
* Name        :   FeNmiDtsRamDblBitEccErr
* Description :   Dts Ram double bit error callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDtsRamDblBitEccErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_DTSRAMDBLBITECCERR, DTSER2);
}

/*****************************************************************************************************************
* Name        :   FeNmiPegErr
* Description :   Peg Access error exception handler callback for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiPegErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_PEGERR, PGERRSTAT_PE1);
}

/*****************************************************************************************************************
* Name        :   FeNmiGblRamIllglAcsByProcr
* Description :   Global Ram illegal access by processor callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGblRamIllglAcsByProcr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_GBLRAMILLGLACSBYPROCR, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiCodFlsIllglAcsBySysBus
* Description :   Code Flash illegal access by System bus callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiCodFlsIllglAcsBySysBus(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_CODFLSILLGLACSBYSYSBUS, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiGblRamIllglAcsBySysBus
* Description :   Global RAM illegal access by System bus callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiGblRamIllglAcsBySysBus(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_GBLRAMILLGLACSBYSYSBUS, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiResdAreaIllglAcsByHiSpdBus
* Description :   Reserved Area illegal access by High Speed bus callback function for the CM101B ExcpnHandlg 
                  component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiResdAreaIllglAcsByHiSpdBus(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_RESDAREAILLGLACSBYHISPDBUS, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiDmaTrfErr
* Description :   Dma transfer error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaTrfErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_DMATRFERR, DMACER);
    BACKUPRAM2 = DTSER1 ;
}

/*****************************************************************************************************************
* Name        :   FeNmiDmaIllglAcsErr
* Description :   Dma Illegal Access error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiDmaIllglAcsErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_DMAILLGLACSERR, DMACER);
    BACKUPRAM2 = DTSER1 ;
}

/*****************************************************************************************************************
* Name        :   FeNmiFlsSeqErr
* Description :   Flash Sequencer callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiFlsSeqErr(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_FLSSEQERR, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiModErrUsrModInactv
* Description :   User mode deactivation error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrUsrModInactv(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_MODERRUSRMODINACTV, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiModErrProgmModActv
* Description :   Unintended activation of code flash programming mode error callback function for the 
                  CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrProgmModActv(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_MODERRPROGMMODACTV, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiModErrDbgActv
* Description :   Unintended debug mode activation error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrDbgActv(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_MODERRDBGACTV, 0U);
}

/*****************************************************************************************************************
* Name        :   FeNmiModErrTestModActv
* Description :   Unintended debug mode activation error callback function for the CM101B ExcpnHandlg component.
* Inputs      :   None
* Outputs     :   None
* Usage Notes :   Called from Mcu FENMI interrupt handler MCU_FEINT_ISR
 ****************************************************************************************************************/
FUNC(void, CDD_ExcpnHndlg_CODE) FeNmiModErrTestModActv(void) 
{
    NxtrSwRstFromExcpn(P1MCDIAGC_MODERRTESTMODACTV, 0U);
}


#define CDD_ExcpnHndlg_STOP_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"
