/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_EcmOutpAndDiagc.c
 *        Config:  C:/_EA4SynWrkgCpy/CM104B_EcmOutpAndDiagc_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_EcmOutpAndDiagc
 *  Generated at:  Tue Nov 14 11:21:07 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_EcmOutpAndDiagc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017,2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_EcmOutpAndDiagc.c
* Module Description: Error Control Module Output and Diagnostics Complex Driver RTE Functionality
* Project           : CBD 
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:            4 %
* %derived_by:         rzk04c %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author         Change Description                                                       SCR #
* -------   ------  ----------  --------------------------------------------------------------------------  -----------
* 11/02/17   1         SR       Initial Implementation                                                      EA4#13212
* 01/04/18   2         SR       Update ECM Error Pin Clear Procedure (Wait for 30 cycles)                   EA4#18879
* 02/06/18   3         SR       Implement fixes for anomaly EA4#19053.                                      EA4#20098
* 02/06/18   4         AJM      Removed compiler warning                                                    EA4#21605
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_EcmOutpAndDiagc.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CDD_EcmOutpAndDiagc.h"
#include "NxtrMcuSuprtLib.h"
#include "ECM0_RegDefns.h"
#include "ECMM0_RegDefns.h"
#include "ECMC0_RegDefns.h"
#include "Mcu.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define ECMERRSETTRIGREGSTSCLRMASK_CNT_U32 ((uint32)0x40000000U) /* 1<< 30 : mask for Bit30 */
#define ECMERROUTZPINSTSBITPOS_CNT_U08     ((uint8 )31U) /* ECMmSSE231 */
#define NUMWAITCYC_CNT_U08                 ((uint8)30U)
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
 * boolean: Boolean (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * TrigReg1: Enumeration of integer in interval [0...255] with enumerators
 *   TRIGREG_MST (85U)
 *   TRIGREG_CHKR (170U)
 *   TRIGREG_MSTANDCHKR (255U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_dEcmVrfyErrOutpCtrlCmpl(void)
 *   boolean *Rte_Pim_dEcmVrfyIntrptGennCmpl(void)
 *
 *********************************************************************************************************************/


#define CDD_EcmOutpAndDiagc_START_SEC_CODE
#include "CDD_EcmOutpAndDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CtrlErrOut_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CtrlErrOut>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CtrlErrOut_Oper_doc
 *********************************************************************************************************************/
 /* Function implementation does not  protect against unintented use like interruption from parallel code execution.
    Design assumes that this function is called only once in cold init and at a 2ms rate in warm init state by the
    Temporal monitor function (ES005A) only */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_EcmOutpAndDiagc_CODE) CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CtrlErrOut_Oper
 *********************************************************************************************************************/
  VAR(uint32, AUTOMATIC) Ecm0PsdoErrMaskReg_Cnt_T_u32;
  
  static volatile VAR(uint32, AUTOMATIC) ErrOutPinSts_Cnt_T_u32;

  /* Save context */
  Ecm0PsdoErrMaskReg_Cnt_T_u32 = ECM0PEM;

  /* Mask ECM Compare Error Register : Bit0:MSKC, Bit1:MSKM */
  ECM0PEM = ((uint32)1U << 0) |
            ((uint32)1U << 1);

  if(PinSt_Arg == STD_LOW)
  {
    if(TrigReg_Arg == TRIGREG_MSTANDCHKR)
    {
      /* Drive ERROROUTZ pin low by Master & checker unit writes */
      WrProtdRegEcmm0_u32((uint32)0x01U, &ECMM0ESET);
      WrProtdRegEcmc0_u32((uint32)0x01U, &ECMC0ESET);
    }
    else if(TrigReg_Arg == TRIGREG_MST)
    {
      /* Drive ERROROUTZ pin low by Master unit write */
      WrProtdRegEcmm0_u32((uint32)0x01U, &ECMM0ESET);
    }
    else if(TrigReg_Arg == TRIGREG_CHKR)
    {
      /* Drive ERROROUTZ pin low by Master unit write */
      WrProtdRegEcmc0_u32((uint32)0x01U, &ECMC0ESET);
    }
    else
    {
      /* Invalid Trigger Register Argument : Do Nothing*/
    }
  }
  else /* PinSt_Arg is STD_HIGH */
  {
    WrProtdRegEcm0_u32(ECMERRSETTRIGREGSTSCLRMASK_CNT_U32 , &ECM0ESSTC2);

    /* Driver ERROROUTZ pin high */
    Mcu_EcmReleaseErrorOutPin(); /* Call depends on MCU : Refer Integration Manual */
  }

  /* Restore ECM compare error context */
  ECM0PEM = Ecm0PsdoErrMaskReg_Cnt_T_u32;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EcmOutpAndDiagcInit2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: EcmOutpAndDiagcInit2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_EcmOutpAndDiagc_CODE) EcmOutpAndDiagcInit2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: EcmOutpAndDiagcInit2
 *********************************************************************************************************************/

    /* Empty initialization function to provide memory mapping for component */
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_EcmOutpAndDiagc_STOP_SEC_CODE
#include "CDD_EcmOutpAndDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
