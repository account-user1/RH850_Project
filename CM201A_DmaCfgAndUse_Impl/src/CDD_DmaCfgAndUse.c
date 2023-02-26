/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_DmaCfgAndUse.c
 *        Config:  E:/EA4NewTemplate/CM201A_DmaCfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_DmaCfgAndUse
 *  Generated at:  Fri Jan  5 10:22:30 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_DmaCfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2017, 2018 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_DmaCfgAndUse.c
 * Module Description: Configuration and use of the DMA
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          4 %
 * %derived_by:       rzk04c %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 07/27/17  1        KByrski   Initial version                                                               EA4#13238
 * 09/07/17  2        KByrski   Updated as per Design_1.1.0, changed value of register DTFR1 to 0x87          EA4#15200
 * 10/04/17  3        KByrski   Updated as per Design_1.1.1                                                   EA4#15715
 * 01/05/18  4        AJM       Corrected SPID value for DMAC 1-6 and changed display variable to PIM         EA4#18046
                                Corrected polyspace warning for unreachable code 
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Port Prototypes:
 * ================
 * ReadErrInjReg
 *   Read BRAMDAT2
 *
 *
 * Runnable Entities:
 * ==================
 * DmaCfgAndUseInit1
 *   DMA Configuration and Usage
 *
 *
 * Per-Instance Memory:
 * ====================
 * DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi
 *   Display variable used to help understand the Maximum Dma Transfer time
 *
 * DmaCfgAndUse2MilliSecAdcStrtTi
 *   ADC Conversion transfer start time
 *
 * d2MilliSecAdcActDmaTrfTi
 *   Display variable used to help understand the Actual Dma Transfer time
 *
 *********************************************************************************************************************/

#include "Rte_CDD_DmaCfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_DmaCfgAndUse.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "McuErrInj.h"
#include "Os.h"
#include "NxtrMath.h"
#include "ADCF0_RegDefns.h"
#include "ADCF1_RegDefns.h"
#include "DMACH_RegDefns.h"
#include "DMACM_RegDefns.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.1]: Cast of a register address to an integer type is required for writing a register address to a register. */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]: Cast of a variable address to an integer type is required for writing a variable address to a register. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon; Rte generation adds standard return type but no error information is returned
  Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(), Rte_Call_GetRefTmr1MicroSec32bit_Oper(), Rte_Call_ReadErrInjReg_Oper() & Rte_Call_StrtErrInjCntr_Oper() */
  
/********************************************* Embedded Local Constants **********************************************/
#define DMACFGANDUSE_MAXWAIT_MICROSEC_U32 (400U) /* Max wait time allowed for ADC transfer Complete */


#define DM01CM_CNT_U32   (0x0000200CU)   /* UM = 0, SPID = 3, PEID = 1 */
#define DTC1_CNT_U32     (0x00000003U)   /* Transfer count = 3, Address reload count = 0 */
#define DTCT1_CNT_U32    (0x04006611U)   /* TRM = 1, DS = 128 bits, SACM = 0, DACM = 0, RLD1M = 3, RLD2M = 0, MLE = 1, TCE = 1, DRS = 1 */
#define DRTC1_CNT_U32    (0x00000003U)   /* Reload transfer count = 3, Reload address reload count = 0 */
#define DTCC1_CNT_U32    (0x00000000U)   /* Transfer count compare = 0 */
#define DTFR1_CNT_U32    (0x00000087U)   /* REQEN = 1, REQSEL = 67 */

#define DM11CM_CNT_U32   (0x00002016U)   /* UM = 1, SPID = 5, PEID = 1 */
#define DTCT9_CNT_U32    (0x04000611U)   /* TRM = 1, DS = 128 bits, SACM = 0, DACM = 0, RLD1M = 3, RLD2M = 0, DRS = 1 */
#define DTCC9_CNT_U32    (0x00000000U)   /* Transfer count compare = 0 */
#define DTFR9_CNT_U32    (0x00000069U)   /* REQEN = 1, REQSEL = 52 */

#define DM16CM_CNT_U32   (0x0000200EU)   /* UM = 1, SPID = 3, PEID = 1 */
#define DTC14_CNT_U32    (0x00000003U)   /* Transfer count = 3, Address reload count = 0 */
#define DTCT14_CNT_U32   (0x041D0611U)   /* TRM = 1, DS = 128 bits, SACM = 0, DACM = 0, RLD1M = 3, RLD2M = 0, CHNE = 1, CHNSEL = 7, DRS = 1 */
#define DRTC14_CNT_U32   (0x00000003U)   /* Reload transfer count = 3, Reload address reload count = 0 */
#define DTCC14_CNT_U32   (0x00000000U)   /* Transfer count compare = 0 */
#define DTFR14_CNT_U32   (0x00000093U)   /* REQEN = 1, REQSEL = 73 */

#define DM17CM_CNT_U32   (0x00002016U)   /* UM = 1, SPID = 5, PEID = 1 */
#define DTCT15_CNT_U32   (0x00002611U)   /* TRM = 1, DS = 128 bits, SACM = 0, DACM = 0, RLD1M = 3, RLD2M = 0, MLE = 1 */
#define DTCC15_CNT_U32   (0x00000000U)   /* Transfer count compare = 0 */
#define DTFR15_CNT_U32   (0x00000000U)   /* REQEN = 0, REQSEL = 0 */

#define UNDEFDAR_CNT_U32 (0xFEBFFFFCU)   /* Undefined RAM area */
#define TRFSIZE_CNT_U32  (16U)           /* Transfer data size: 128 bit */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi(void)
 *   uint32 *Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(void)
 *   uint32 *Rte_Pim_d2MilliSecAdcActDmaTrfTi(void)
 *
 *********************************************************************************************************************/


#define CDD_DmaCfgAndUse_START_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUseInit1
 *********************************************************************************************************************/

    /* Configure the DMA Registers */
    Call_DmaRegInin();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaCfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaCfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaCfgAndUsePer1
 *********************************************************************************************************************/

    DTFRRQC14_DRQC = TRUE; /* Clear the Hardware DMA Transfer Request Flag, */
    DCSTC14_TCC    = TRUE; /* Clear Transfer Complete Flag */
    DCEN14_DTE     = TRUE; /* Channel Operation Enable */

    /* Enable ADC1 Hardware End of Conversion  */
    (void) Rte_Call_Adc1CfgAndUseAdc1EnaCnvn_Oper();

    /* Start Time */
    (void) Rte_Call_GetRefTmr1MicroSec32bit_Oper(Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi()); /* Get Start Time */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaEna2MilliSecToMotCtrlTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaEna2MilliSecToMotCtrlTrf>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ReadErrInjReg_Oper(uint32 *ErrId_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StrtErrInjCntr_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DmaEna2MilliSecToMotCtrlTrf_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaEna2MilliSecToMotCtrlTrf_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_DmaCfgAndUse_CODE) DmaEna2MilliSecToMotCtrlTrf_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaEna2MilliSecToMotCtrlTrf_Oper
 *********************************************************************************************************************/

#if MCUDIAGCERRINJ == STD_ON
    VAR(uint32, AUTOMATIC) ErrId_Cnt_T_u32 = 0U;

    DTFR9         = 0x0U;         /* Disable Hardware Trigger */
    DTFRRQC9_DRQC = TRUE;         /* Clear the hardware DMA Transfer Request Flag */
    DCSTC9_TCC    = TRUE;         /* Clear Transfer Complete Flag */

    /* Read the Fault Injection Register */
    (void) Rte_Call_ReadErrInjReg_Oper(&ErrId_Cnt_T_u32);

    if (ErrId_Cnt_T_u32 == MCUERRINJ_NTC002BBIT01CASE01_CNT_U32)
    {
        /* Start the Error Injection Counter */
        (void) Rte_Call_StrtErrInjCntr_Oper();
    }
    else
    {
        DCEN9_DTE = TRUE;             /* Channel Operation Enable */
        DTFR9     = DTFR9_CNT_U32;    /* Hardware DMA Transfer */
    }
#else
    DTFR9         = 0x0U;             /* Disable Hardware Trigger */
    DTFRRQC9_DRQC = TRUE;             /* Clear the hardware DMA Transfer Request Flag */
    DCSTC9_TCC    = TRUE;             /* Clear Transfer Complete Flag */
    DCEN9_DTE     = TRUE;             /* Channel Operation Enable */
    DTFR9         = DTFR9_CNT_U32;    /* Hardware DMA Transfer */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DmaWaitForMotCtrlTo2MilliSecTrf_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <DmaWaitForMotCtrlTo2MilliSecTrf>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaWaitForMotCtrlTo2MilliSecTrf_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_DmaCfgAndUse_CODE) DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DmaWaitForMotCtrlTo2MilliSecTrf_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) StdRtn_Cnt_T_enum;
    VAR(uint32,         AUTOMATIC) TiSpan_MicroSec_T_u32 = 0U;
    VAR(boolean,        AUTOMATIC) DmaTrfCplFlg_Cnt_T_logl;

    /* Wait until DMA transfer is done or timeout occurs */
    do
    {
        (void) Rte_Call_GetTiSpan1MicroSec32bit_Oper(*Rte_Pim_DmaCfgAndUse2MilliSecAdcStrtTi(), &TiSpan_MicroSec_T_u32);
        DmaTrfCplFlg_Cnt_T_logl = (boolean) DCST15_TC; /* Read TC flag */
    }
    while ((DmaTrfCplFlg_Cnt_T_logl == FALSE) && (TiSpan_MicroSec_T_u32 < DMACFGANDUSE_MAXWAIT_MICROSEC_U32));

    *Rte_Pim_d2MilliSecAdcActDmaTrfTi() = TiSpan_MicroSec_T_u32;
    *Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi() = Max_u32(TiSpan_MicroSec_T_u32, *Rte_Pim_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi());

    /* DMA Transfer Complete Flag status check */
    if (DmaTrfCplFlg_Cnt_T_logl == TRUE)
    {
        StdRtn_Cnt_T_enum = E_OK;
        DCSTC15_TCC = TRUE;        /* Set TCC flag */
    }
    else
    {
        StdRtn_Cnt_T_enum = E_NOT_OK;
    }

    return StdRtn_Cnt_T_enum;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_DmaCfgAndUse_STOP_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CDD_DmaCfgAndUse_START_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        DmaRegInin
 * Description: DMA Register Initialization
 * Inputs:      NONE
 * Outputs:     NONE
 * Usage Notes: To be configured as a trusted function because it needs to run in supervisor mode
 *********************************************************************************************************************/
FUNC(void, CDD_DmaCfgAndUse_CODE) DmaRegInin(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    /* DMAC0 channel 1 */
    /* ADCF0 Data Read: ADCF0 output register (ADCF0) to Local RAM (Motor Control)*/
    DM01CM     = DM01CM_CNT_U32;                                                 /* DMAC Channel Master Setting */
    DSA1       = (uint32) &ADCF0DR00;                                            /* DMAC Source Address Register */
    DDA1       = (uint32) &MOTCTRLMGR_MotCtrlAdc0RawRes;                         /* DMAC Destination Address Register */
    DTC1       = DTC1_CNT_U32;                                                   /* DMAC Transfer Count Register */
    DTCT1      = DTCT1_CNT_U32;                                                  /* DMAC Transfer Control Register */
    DRSA1      = (uint32) &ADCF0DR00;                                            /* Reload Source Address Register */
    DRDA1      = (uint32) &MOTCTRLMGR_MotCtrlAdc0RawRes;                         /* Reload Destination Address Register */
    DRTC1      = DRTC1_CNT_U32;                                                  /* Reload Transfer Count Register */
    DTCC1      = DTCC1_CNT_U32;                                                  /* DMAC Transfer Count Compare Register */
    DTFR1      = DTFR1_CNT_U32;                                                  /* Hardware DMA Setting Register */
    DCEN1_DTE  = TRUE;                                                           /* DMAC Channel Operation Enable Setting Register */

    /* DMAC1 channel 1 */
    /* 2mSec to MotCtrl: Local Ram to Local RAM */
    DM11CM     = DM11CM_CNT_U32;                                                /* DMAC Channel Master Setting */
    DSA9       = (uint32) &MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;                 /* DMAC Source Address Register */
    DDA9       = (uint32) &MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;               /* DMAC Destination Address Register */
    DTC9       = sizeof(MotCtrlMgr_TwoMilliSecToMotCtrl_Rec) / TRFSIZE_CNT_U32; /* DMAC Transfer Count Register */
    DTCT9      = DTCT9_CNT_U32;                                                 /* DMAC Transfer Control Register */
    DRSA9      = (uint32) &MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;                 /* Reload Source Address Register */
    DRDA9      = (uint32) &MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;               /* Reload Destination Address Register */
    DRTC9      = sizeof(MotCtrlMgr_TwoMilliSecToMotCtrl_Rec) / TRFSIZE_CNT_U32; /* Reload Transfer Count Register */
    DTCC9      = DTCC9_CNT_U32;                                                 /* DMAC Transfer Count Compare Register */
    DTFR9      = DTFR9_CNT_U32;                                                 /* Hardware DMA Setting Register */
    DCEN9_DTE  = TRUE;                                                          /* DMAC Channel Operation Enable Setting Register */

    /* DMAC1 channel 6 */
    /* ADCF1 Data Read: ADCF1 output register (ADCF1) to Local RAM (Motor Control) */
    DM16CM     = DM16CM_CNT_U32;                                                /* DMAC Channel Master Setting */
    DSA14      = (uint32) &ADCF1DR00;                                           /* DMAC Source Address Register */
    DDA14      = (uint32) &MOTCTRLMGR_MotCtrlAdc1RawRes;                        /* DMAC Destination Address Register */
    DTC14      = DTC14_CNT_U32;                                                 /* DMAC Transfer Count Register */
    DTCT14     = DTCT14_CNT_U32;                                                /* DMAC Transfer Control Register */
    DRSA14     = (uint32) &ADCF1DR00;                                           /* Reload Source Address Register */
    DRDA14     = (uint32) &MOTCTRLMGR_MotCtrlAdc1RawRes;                        /* Reload Destination Address Register */
    DRTC14     = DRTC14_CNT_U32;                                                /* Reload Transfer Count Register */
    DTCC14     = DTCC14_CNT_U32;                                                /* DMAC Transfer Count Compare Register */
    DTFR14     = DTFR14_CNT_U32;                                                /* Hardware DMA Setting Register */
    DCEN14_DTE = TRUE;                                                          /* DMAC Channel Operation Enable Setting Register */

    /* DMAC1 channel 7 */
    /* MotCtrl to 2mSec: Local Ram to Local RAM */
    DM17CM     = DM17CM_CNT_U32;                                                /* DMAC Channel Master Setting */
    DSA15      = (uint32) &MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;                 /* DMAC Source Address Register */
    DDA15      = (uint32) &MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;               /* DMAC Destination Address Register */
    DTC15      = sizeof(MotCtrlMgr_MotCtrlToTwoMilliSec_Rec) / TRFSIZE_CNT_U32; /* DMAC Transfer Count Register */
    DTCT15     = DTCT15_CNT_U32;                                                /* DMAC Transfer Control Register */
    DRSA15     = (uint32) &MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;                 /* Reload Source Address Register */
    DRDA15     = (uint32) &MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;               /* Reload Destination Address Register */
    DRTC15     = sizeof(MotCtrlMgr_MotCtrlToTwoMilliSec_Rec) / TRFSIZE_CNT_U32; /* Reload Transfer Count Register */
    DTCC15     = DTCC15_CNT_U32;                                                /* DMAC Transfer Count Compare Register */
    DTFR15     = DTFR15_CNT_U32;                                                /* Hardware DMA Setting Register */
    DCEN15_DTE = TRUE;                                                          /* DMAC Channel Operation Enable Setting Register */
}

#if (MCUDIAGCERRINJ == STD_ON)
/**********************************************************************************************************************
 * Name:        InjDmaErr
 * Description: Function to inject DMA error
 * Inputs:      NONE
 * Outputs:     NONE
 * Usage Notes: Called from McuDiagcErrInj periodic
 *********************************************************************************************************************/
FUNC(void, CDD_DmaCfgAndUse_CODE) InjDmaErr(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    VAR(uint32, AUTOMATIC) ErrId_Cnt_T_u32 = 0U;

    /* Read the Fault Injection Register */
    ReadErrInjReg_Oper(&ErrId_Cnt_T_u32);

    if (ErrId_Cnt_T_u32 == MCUERRINJ_NTC0036BIT01CASE01_CNT_U32)
    {
        ClrErrInjReg_Oper();          /* Clear the Fault Injection Register */
        DM11CM_UM = FALSE;            /* Clear the user mode bit */
    }

    if (ErrId_Cnt_T_u32 == MCUERRINJ_NTC0036BIT00CASE01_CNT_U32)
    {
        ClrErrInjReg_Oper();          /* Clear the Fault Injection Register */
        DCEN1_DTE = FALSE;            /* Disable the channel */
        DDA1      = UNDEFDAR_CNT_U32; /* Transfer error from an undefined RAM area */
        DRDA1     = UNDEFDAR_CNT_U32; /* Transfer error from an undefined RAM area */
        DCEN1_DTE = TRUE;             /* Enable the channel */
    }
}

/**********************************************************************************************************************
 * Name:        InjMcuDiagcErr
 * Description: Function to inject NTC0x2B error by stopping DMA transfer
 * Inputs:      NONE
 * Outputs:     NONE
 * Usage Notes: Called from McuDiagcErrInj periodic
 *********************************************************************************************************************/
FUNC(void, CDD_DmaCfgAndUse_CODE) InjMcuDiagcErr(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    VAR(uint32, AUTOMATIC) ErrId_Cnt_T_u32 = 0U;

    /* Read the Fault Injection Register */
    ReadErrInjReg_Oper(&ErrId_Cnt_T_u32);

    if (ErrId_Cnt_T_u32 == MCUERRINJ_NTC002BBIT00CASE01_CNT_U32)
    {
        ClrErrInjReg_Oper(); /* Clear the Fault Injection Register */
        DCEN15_DTE = FALSE;  /* Disable DMA channel 15 */
    }
}
#endif

#define CDD_DmaCfgAndUse_STOP_SEC_CODE
#include "CDD_DmaCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
