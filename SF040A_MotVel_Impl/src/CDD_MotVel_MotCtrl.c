/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotVel_MotCtrl.c
* Module Description: Implementation of calculation of Motor Velocity
* Project           : CBD 
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/11/16   1       Rijvi       Initial Version                                                                EA4#4987
* 12/06/16   2       KK          Updated to version 2.1.0 Design                                                EA4#7903
**********************************************************************************************************************/


/************************************MISRA deviations*********************************************************************/
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


 /**********************************************************************************************************************
 *                     << Start of include and declaration area >>        
 *********************************************************************************************************************/

#include "Rte_CDD_MotVel.h"
#include "CDD_MotVel.h"
#include "CDD_MotVel_private.h"
#include "CDD_MotCtrlMgr_Data.h"


/********************************************* Embedded Local Constants **********************************************/

/******************************************** Local Function Prototypes **********************************************/
                                                               
/**********************************************************************************************************************
 *                           << End of include and declaration area >>         
 *********************************************************************************************************************/



#define CDD_MOTVEL_MOTCTRL_START_SEC_CODE
#include "CDD_MotVel_MotCtrl_MemMap.h" 

 /*****************************************************************************
  * Name:   MotVelPer1
  * Description: Created for calculation of Motor velocity for various motor position signals
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate MtrCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_MotVel_CODE) MotVelPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
   MOTCTRLMGR_MotCtrlMotAgBuf[*Rte_Pim_MotAgBufIdxPrim()]    =   MOTCTRLMGR_MotCtrlMotAgMecl ; 
   MOTCTRLMGR_MotCtrlMotAgTiBuf[*Rte_Pim_MotAgBufIdxPrim()]  =   MOTCTRLMGR_MotCtrlMotAgMeasTi ; 
   MOTCTRLMGR_MotCtrlMotAgBufIdx                       		 =   *Rte_Pim_MotAgBufIdxPrim();
	
   *Rte_Pim_MotAgBufIdxPrim() = (*Rte_Pim_MotAgBufIdxPrim() + 1U) & (BUFSIZE_CNT_U08-1U);
	
}

#define CDD_MOTVEL_MOTCTRL_STOP_SEC_CODE
#include "CDD_MotVel_MotCtrl_MemMap.h" 
