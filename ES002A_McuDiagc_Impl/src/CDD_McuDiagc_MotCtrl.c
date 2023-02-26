/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_McuDiagc_MotCtrl.c
* Module Description: Implementation of  Motor Control part Mcu Diagnostics
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version          :1 %
* %derived_by       : nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/28/16  1        Selva        Initial Version                                                              EA4#4913
* 06/21/16	2		 AJM		  Implement the slow loop diagnostics                                          EA4#6243,EA4#6090
* 09/27/16  3        AJM          Removed the requirement tags                                                 EA4#7609
**********************************************************************************************************************/


/************************************MISRA deviations*********************************************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


 /**********************************************************************************************************************
 *                     << Start of include and declaration area >>        
 *********************************************************************************************************************/

#include "Rte_CDD_McuDiagc.h"
#include "CDD_McuDiagc.h"
#include "CDD_MotCtrlMgr_Data.h"

/******************************************** Local Function Prototypes **********************************************/
                                                               
/**********************************************************************************************************************
 *                           << End of include and declaration area >>         
 *********************************************************************************************************************/



#define CDD_McuDiagc_MotCtrl_START_SEC_CODE
#include "CDD_McuDiagc_MotCtrl_MemMap.h" 

/*****************************************************************************
  * Name:   McuDiagcPer1
  * Description: Created for Increment ISR Based Accumulator 
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MtrCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_McuDiagc_CODE) McuDiagcPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    *Rte_Pim_FastLoopCntrPrev() = *Rte_Pim_FastLoopCntrPrev() + 1U; /*Roll Over intentional*/ 
	/************No range limiting output needed as output goes full range************/
    MOTCTRLMGR_MotCtrlFastLoopCntr = *Rte_Pim_FastLoopCntrPrev(); 
	
	MOTCTRLMGR_MotCtrlSlowLoopCntr = MOTCTRLMGR_MotCtrlLoopCntr2MilliSec;
}


#define CDD_McuDiagc_MotCtrl_STOP_SEC_CODE
#include "CDD_McuDiagc_MotCtrl_MemMap.h" 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
