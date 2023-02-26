/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_FlsMemNonRte.c
* Module Description: Flash Memory Complex Driver NonRte Functionality
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/10/17  1        AJM       Initial Version                                                                 EA4#13211
* 03/11/18  2        AJM       Removed check for code flash ecc overflow as its handled in a FENMI handler     EA4#21563
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_FlsMem.h"
#include "CDD_FlsMem_Cfg_private.h"
#include "Rte_CDD_FlsMem.h" 
#include "CDD_SyncCrc.h"
#include "CDD_NxtrTi.h"
#include "CDD_ExcpnHndlg.h"
#include "NxtrDtsCh_RegDefns.h"
#include "DTSCTL_RegDefns.h"
#include "ECCFLIC_RegDefns.h"
#include "NxtrMcuSuprtLib.h"
#include "Os.h"

#define CDD_FlsMemNonRte_START_SEC_VAR_INIT_128
#include "CDD_FlsMemNonRte_MemMap.h"

VAR(uint32, AUTOMATIC) HwCrcCalcdRes_C[HWCRCRESARYSIZE_CNT_U08] = {0U,0U,0U,0U,0U,0U,0U,0U};
    
#define CDD_FlsMemNonRte_STOP_SEC_VAR_INIT_128
#include "CDD_FlsMemNonRte_MemMap.h"


/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]    Cast of a variable address to an integer type required for writing a variable address to a register. */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.3]: Cast of an integer to a pointer is required for reading from computed addresses */
/********************************************* Embedded Local Constants **********************************************/

#define CPU1PEID_CNT_U32                    ((uint32)0x01U)
#define CODFLSTOCRCSPID_CNT_U32             ((uint32)0x04U)                 /* Code Flash to CRC Peripheral SPID = 4U */
#define CRCTOLCLRAMSPID_CNT_U32             ((uint32)0x03U)                 /* CRC Peripheral to Local RAM SPID = 3U */
#define USRMODDIS_CNT_U32                   ((uint32)0x0U)                  /* User Mode Bit : 1: User Mode Access Disabled */
#define FLSBLKLEN_CNT_U32                   ((uint32)0x0003FFFCU)           /* Max Transfer is 0xFFFF * 4 bytes per transfer */
#define DTSDATALEN_CNT_U32                  ((uint32)4U)

#define READADRCASE0_CNT_U08                ((uint8)0U)
#define READADRCASE1_CNT_U08                ((uint8)1U)
#define READADRCASE2_CNT_U08                ((uint8)2U)
#define READADRCASE3_CNT_U08                ((uint8)3U)
#define ERRADRMASK_CNT_U32                  ((uint32)0x80UL)
#define NROFADRCHK_CNT_U08                  ((uint8)4U)

/******************************************** Module Specific Variables **********************************************/
#define CDD_FlsMem_START_SEC_CONST_UNSPECIFIED
#include "CDD_FlsMem_MemMap.h"

static const uint32 CrcClrData_M = 0U;    /* Clear variable for the CRC HW */

#define CDD_FlsMem_STOP_SEC_CONST_UNSPECIFIED
#include "CDD_FlsMem_MemMap.h"

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_FlsMem_START_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

/**********************************************************************************************************************
  * Name        : FlsMemInit2
  * Description : Non-RTE Function to Initilaize the DTS after allocating a CRC hardware
  * Inputs      : NONE
  * Outputs     : NONE
  * Usage Notes : To be called from Startup Sequence
  ********************************************************************************************************************/
FUNC(void, CDD_FlsMem_CODE) FlsMemInit2(void)
{

    VAR (uint32, AUTOMATIC) CrcHwIdxInReg_T_u32 = (uint32)0U;
    VAR (uint32, AUTOMATIC) CrcHwIdxOutReg_T_u32 = (uint32)0U;
    VAR (Std_ReturnType, AUTOMATIC) RetVal_T_enum;
    VAR(boolean,AUTOMATIC) ExecStrtUpTest_Cnt_T_logl; 
    
    *Rte_Pim_dFlsMemVrfyCrcInitCmpl() = FALSE;
    
    (void)ChkForStrtUpTest_Oper(&ExecStrtUpTest_Cnt_T_logl);
    if(ExecStrtUpTest_Cnt_T_logl == TRUE)
    {
        *Rte_Pim_CrcHwIdxKey() = 0U;
    
        RetVal_T_enum = ResvCrcHwUnit_Oper(CRCHWRESVMOD_RESV, CRCHWRESVCFG_32BITCRC32BITWIDTH, &CrcHwIdxInReg_T_u32, &CrcHwIdxOutReg_T_u32, 0u, Rte_Pim_CrcHwIdxKey());

        if( RTE_E_OK == RetVal_T_enum )
        {
            /* DTS_Init is called as a trusted function */
            Call_DtsInin(CrcHwIdxInReg_T_u32,CrcHwIdxOutReg_T_u32);
        }
        
        /* capture the system time and store to PIM */
        GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CodFlsCrcChkStrtTi());
    }
    else
    {
        *Rte_Pim_PwrOnRstCrcChkCmpl() = TRUE;
    }

}

/**********************************************************************************************************************
  * Name        : DtsInin
  * Description : DTS Register Setup Function
  * Inputs      : CrcHwIdxInReg,CrcHwIdxOutReg
  * Outputs     : NONE
  * Usage Notes : To be called from FlsMemInit2
                  Need to run in Supervisor mode
  ********************************************************************************************************************/
FUNC(void, CDD_FlsMem_CODE) DtsInin(uint32 CrcHwIdxInReg, uint32 CrcHwIdxOutReg) 
{
 
    VAR (uint8, AUTOMATIC) NrOfChPerRegn_Cnt_T_u08 = (uint8)0U;
    VAR (uint8, AUTOMATIC) Loop_Cnt_T_u08 = (uint8)0U;
    VAR (uint8, AUTOMATIC) ChNr_Cnt_T_u08  = (uint8)0U;
    VAR (uint8, AUTOMATIC) NrOfCrcRegn_Cnt_T_u08 ;
    VAR (sint32, AUTOMATIC) TempCrcFlsBlkLen_Cnt_T_s32;
    
    for (NrOfCrcRegn_Cnt_T_u08 = 0U; NrOfCrcRegn_Cnt_T_u08 < NROFFLSCRCREGNS_CNT_U08; NrOfCrcRegn_Cnt_T_u08++)
    {
        TempCrcFlsBlkLen_Cnt_T_s32 = (sint32)FLSCFGTBL[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkLen;
        
        while(TempCrcFlsBlkLen_Cnt_T_s32 > 0)
        {
            NrOfChPerRegn_Cnt_T_u08++;
            TempCrcFlsBlkLen_Cnt_T_s32 -= (sint32)FLSBLKLEN_CNT_U32;
        }
        
        while(0U < NrOfChPerRegn_Cnt_T_u08 )
        {
            DTSMstrCfg[ChNr_Cnt_T_u08].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 29)
                                                        | ((uint32)CODFLSTOCRCSPID_CNT_U32 << 18)
                                                        | ((uint32)USRMODDIS_CNT_U32 << 17);
            /* Clear the DTSFSL transfer request bit */
            DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT._DRQC = (uint32)1U;
        
            /* Start address of the block */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = (uint32)((FLSCFGTBL[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkStrtAdr+
                                                        (Loop_Cnt_T_u08 * FLSBLKLEN_CNT_U32))) ;
            
            /* Destination address is the CRC input register address which shall be 
            returned by the Reserve CRC function */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = CrcHwIdxInReg;
            
            /* Set the count register with 0xFFFF if there is a chain down for the 
            block of flash. If not get the length of the transfer block in the 
            last chain and set it in the transfer count register */
            if(1U == NrOfChPerRegn_Cnt_T_u08 )
            {
                DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = 
                                (uint32)((FLSCFGTBL[NrOfCrcRegn_Cnt_T_u08].CrcFlsBlkLen - (Loop_Cnt_T_u08 *FLSBLKLEN_CNT_U32))/DTSDATALEN_CNT_U32);
            }
            else
            {
                DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = 
                                (uint32)(FLSBLKLEN_CNT_U32/DTSDATALEN_CNT_U32);
            }
            
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 = ((uint32)0x00U << 28)                   /* Reserved */
                                            |    ((uint32)0x00U << 27)                          /* DMA transfer when transfer errored */
                                            |    (((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)   /* Next Channel in Chain */
                                            |    ((uint32)0x01U << 16))                         /* Chain Enable: Chain at last Transfer */
                                            |    ((uint32)0x00U << 15)                          /* Disable - Transfer count match interrupt  */
                                            |    ((uint32)0x00U << 14)                          /* Disable - Transfer completion interrupt  */
                                            |    ((uint32)0x00U << 11)                          /* Disable -Reload function 2 */
                                            |    ((uint32)0x00U << 9)                           /* Disable- Reload Function 1 */
                                            |    ((uint32)0x02U << 7)                           /* Fixed -Destinable address count direction */
                                            |    ((uint32)0x00U << 5)                           /* Increment - Source Address count direction */
                                            |    ((uint32)0x02U << 2)                           /* Transfer Data Size - 32 bits */
                                            |    ((uint32)0x01U << 0);                          /* Block transfer 1 by transfer count */

            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRSA.UINT32 = (uint32)0U;                             /* Setup reload source address  */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRDA.UINT32 = (uint32)0U;                             /* Setup reload destination address  */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRTC.UINT32 = (uint32)0U;                             /* Setup reload transfer count  */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCC.UINT32 = (uint32)0U;                             /* Setup transfer count compare  */
            
            /* Enable - Channel Operation */
            DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT._REQEN = (uint32)1U;
            
            NrOfChPerRegn_Cnt_T_u08--;
            /* Next Chain in DTS */
            ChNr_Cnt_T_u08++;
            
            Loop_Cnt_T_u08++;
        }
        
        Loop_Cnt_T_u08 = 0U;
        
        /* DTS to transfer the Data from the CRC module to the local RAM*/
        DTSMstrCfg[ChNr_Cnt_T_u08 ].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 29)
                                                | ((uint32)CRCTOLCLRAMSPID_CNT_U32 << 18)
                                                | ((uint32)USRMODDIS_CNT_U32 << 17);
        /* Clear the DTSFSL transfer request bit */
        DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT._DRQC = (uint32)1U;

        /* Start address of the DTS transfer is the CRC HW output address*/
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = CrcHwIdxOutReg;   
        
        /* Destination address is the destination register address where 
        the calculated CRC shall be saved */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = (uint32)&(HwCrcCalcdRes_C[NrOfCrcRegn_Cnt_T_u08]);
        
        /* Transfer Count is one 32 bit CRC data */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = (uint32)0x1U;
        
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 =     ((uint32)0x00U << 28)                   /* Reserved */
                                            |    ((uint32)0x00U << 27)                          /* DMA transfer when transfer errored */
                                            |    ((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)    /* Next Channel in Chain */
                                            |    ((uint32)0x01U << 16)                          /* Chain Enable */
                                            |    ((uint32)0x00U << 15)                          /* Disable - Transfer count match interrupt  */
                                            |    ((uint32)0x00U << 14)                          /* Disable - Transfer completion interrupt  */
                                            |    ((uint32)0x00U << 11)                          /* Disable -Reload function 2 */
                                            |    ((uint32)0x00U << 9)                           /* Disable- Reload Function 1 */
                                            |    ((uint32)0x02U << 7)                           /* Fixed -Destinable address count direction */
                                            |    ((uint32)0x00U << 5)                           /* Increment - Source Address count direction */
                                            |    ((uint32)0x02U << 2)                           /* Transfer Data Size - 32 bits */
                                            |    ((uint32)0x01U << 0);                          /* Block transfer 1 by transfer count */

        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRSA.UINT32 = (uint32)0U;                             /* Setup reload source address  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRDA.UINT32 = (uint32)0U;                             /* Setup reload destination address  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRTC.UINT32 = (uint32)0U;                             /* Setup reload transfer count  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCC.UINT32 = (uint32)0U;                             /* Setup transfer count compare  */
        
        /* Enable - Channel Operation */    
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT._REQEN = (uint32)1U;
        /* Next Chain in DTS */
        ChNr_Cnt_T_u08 ++;

        /* DTS to clear the CRC hardware registers by transferring data from 
        a Zero Array to the CRC registers*/
        DTSMstrCfg[ChNr_Cnt_T_u08 ].DTSnnnCM.UINT32 = ((uint32)CPU1PEID_CNT_U32 << 29)
                    | ((uint32)CODFLSTOCRCSPID_CNT_U32 << 18)
                    | ((uint32)USRMODDIS_CNT_U32 << 17);
        /* Clear the DTSFSL transfer request bit */
        DTSCfg[ChNr_Cnt_T_u08].DMASSDTFSC.BIT._DRQC = (uint32)1U;
                    
        /* Start address of the DTS transfer is the Zero Constant address*/
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTSA.UINT32 = (uint32)&(CrcClrData_M);  
        
        /* Destination address is the output CRC Register Address */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTDA.UINT32 = CrcHwIdxOutReg;    
        
        /* Transfer Count is 1 for the Output Register of the CRC HW */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTC.UINT32 = (uint32)0x1U;
        
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCT.UINT32 =     ((uint32)0x00U << 28)                   /* Reserved */
                                            |    ((uint32)0x00U << 27)                          /* DMA transfer when transfer errored */
                                            |    ((uint32)((uint32)ChNr_Cnt_T_u08 +1U)<< 18)    /* Next Channel in Chain */
                                            |    ((uint32)0x01U << 16)                          /* Chain Enable */
                                            |    ((uint32)0x00U << 15)                          /* Disable - Transfer count match interrupt  */
                                            |    ((uint32)0x00U << 14)                          /* Disable - Transfer completion interrupt  */
                                            |    ((uint32)0x00U << 11)                          /* Disable -Reload function 2 */
                                            |    ((uint32)0x00U << 9)                           /* Disable- Reload Function 1 */
                                            |    ((uint32)0x02U << 7)                           /* Fixed -Destinable address count direction */
                                            |    ((uint32)0x00U << 5)                           /* Increment - Source Address count direction */
                                            |    ((uint32)0x02U << 2)                           /* Transfer Data Size - 32 bits */
                                            |    ((uint32)0x01U << 0);                          /* Block transfer 1 by transfer count */

        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRSA.UINT32 = (uint32)0U;                             /* Setup reload source address  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRDA.UINT32 = (uint32)0U;                             /* Setup reload destination address  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTRTC.UINT32 = (uint32)0U;                             /* Setup reload transfer count  */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTTCC.UINT32 = (uint32)0U;                             /* Setup transfer count compare  */
            
        /* Enable - Channel Operation */
        DTSCfg[ChNr_Cnt_T_u08 ].DMASSDTFSL.BIT._REQEN = 1U;
        /* Next Chain in DTS */
        ChNr_Cnt_T_u08++;
    }

    DTSCfg[ChNr_Cnt_T_u08  -1U].DMASSDTTCT.UINT32 &= ~(((uint32)0x3U <<16) | ((uint32)0x7FU << 18));            /* Chain Disable */

    DTSCfg[ChNr_Cnt_T_u08 - 1U ].DMASSDTTCT.UINT32  |= (uint32)((uint32)1U << 14);
    
    /* Clear the DTS Interrupt flag */
    PINTCLR0 = 0xFFFFFFFFU;
    /* Start transfer from the first chain */
    DTSCfg[0U].DMASSDTFSS.BIT._DRQS = 1U;
}

/**********************************************************************************************************************
  * Name:        CodFlsSngBitEcc
  * Description: Code flash Ecc Single bit error handler
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called from MCAL for handling code flash single bit ECC errors
  ********************************************************************************************************************/
FUNC(void, CDD_FlsMem_CODE) CodFlsSngBitEcc(void) 
{
    VAR(uint32, AUTOMATIC) CodFlsErrAdr_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) RegVal_Cnt_T_u32;
    VAR(uint8, AUTOMATIC)  LoopCntr_Cnt_T_u08;
    P2VAR(uint32, AUTOMATIC, AUTOMATIC)ChkAdr_Cnt_T_u32;
    VAR(boolean, AUTOMATIC) SkipRead_Cnt_T_logl = FALSE;
    
    SuspendAllInterrupts();

    *Rte_Pim_CodFlsSngBitErr() = TRUE;

    /* Code Flash ECC SED error source is ECM error no. 51. Clear the ECM error flag */
    RegVal_Cnt_T_u32 = 0x00080000U;
    WrProtdRegEcm0_u32 (RegVal_Cnt_T_u32, &ECM0ESSTC1);
        
    /* Check SED status register. It is possible to catch up to 4 different ECC 1 bit Code Flash errors */
    if((UCFSERSTR & 0x00000001UL) != 0U)
    {
        /* Get SED address. UCF0SEDADDR represents bits 24-4 of address.
        * P1M-C valid(mapped) Code Flash Area: 0x0000_0000 - 0x001F_FFFF
        * P1M-C Code Flash Area (including reserved space): 0x0000_0000 - 0x0FFF_FFFF
        */
        CodFlsErrAdr_Cnt_T_u32 = (UCF1SEDADR & 0x01FFFFF0U);

        /* Clear Code Flash ECC SED error. Clears UCFSERSTR, UCFnSEDADDR and UCFOVFSTR */
        UCFSERSTCLR |= 0x00000001UL;
    }
    else if((UCFSERSTR & 0x00000002UL) != 0U)
    {
        CodFlsErrAdr_Cnt_T_u32 = (UCF2SEDADR & 0x01FFFFF0U);

        /* Clear Code Flash ECC SED error. Clears UCFSERSTR, UCFnSEDADDR and UCFOVFSTR */
        UCFSERSTCLR |= 0x00000002UL;
    }
    else if ((UCFSERSTR & 0x00000004UL) != 0U)
    {
        CodFlsErrAdr_Cnt_T_u32 = (UCF3SEDADR & 0x01FFFFF0U);

        /* Clear Code Flash ECC SED error. Clears UCFSERSTR, UCFnSEDADDR and UCFOVFSTR */
        UCFSERSTCLR |= 0x00000004UL;
    }
    else if ((UCFSERSTR & 0x00000008UL) != 0U)
    {
        CodFlsErrAdr_Cnt_T_u32 = (UCF4SEDADR & 0x01FFFFF0U);

        /* Clear Code Flash ECC SED error. Clears UCFSERSTR, UCFnSEDADDR and UCFOVFSTR */
        UCFSERSTCLR |= 0x00000008UL;
    }
    else
    {
        SkipRead_Cnt_T_logl = TRUE;
    }
    
    if(SkipRead_Cnt_T_logl == FALSE)
    {
        /* Read back memories from addresses having the same word line (bits 20-9) and different 
        * column line (bits 8-4) as the SED address (Caution: exclude SED address itself)
        * Address generation form SED address: XOR with 0x80, 0x40, 0x20, 0x10 */
        for (LoopCntr_Cnt_T_u08 = 0U;LoopCntr_Cnt_T_u08 < NROFADRCHK_CNT_U08 ; LoopCntr_Cnt_T_u08++)
        {
            ChkAdr_Cnt_T_u32 = (uint32*)(CodFlsErrAdr_Cnt_T_u32 ^ (ERRADRMASK_CNT_U32 >> LoopCntr_Cnt_T_u08));
            switch (LoopCntr_Cnt_T_u08)
            {
                case READADRCASE0_CNT_U08:
                    *Rte_Pim_CodFlsDummyRead1() = *ChkAdr_Cnt_T_u32;
                break;

                case READADRCASE1_CNT_U08:
                    *Rte_Pim_CodFlsDummyRead2() = *ChkAdr_Cnt_T_u32;
                break;

                case READADRCASE2_CNT_U08:
                    *Rte_Pim_CodFlsDummyRead3() = *ChkAdr_Cnt_T_u32;
                break;
                
                default: /* case READADRCASE3_CNT_U08 */
                    *Rte_Pim_CodFlsDummyRead4() = *ChkAdr_Cnt_T_u32;
                break;
            }
        }
        /* Check SED status register.*/
        if (UCFSERSTR != 0U)
        {
            /* Clear all possible SED errors we could latch */
            UCFSERSTCLR |=  (uint32)(UCFSERSTR & 0x000000FFU);

        }
        else
        {
          /* Do nothing here */
        } 

    }
    else
    {
        /* Do Nothing */
    }
    ResumeAllInterrupts();

}

#define CDD_FlsMem_STOP_SEC_CODE
#include "CDD_FlsMem_MemMap.h"

