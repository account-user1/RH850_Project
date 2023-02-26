/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg216BusHiSpdNonRte.c
* Module Description: FordMsg216BusHiSpdNonRte - MM064A
* Project           : CBD 
* Author            : Kathirkamu A(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 04/25/18   1       AKK(TATA)  Initial version																EA4#20120
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg216BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg216BusHiSpd_START_SEC_CODE
#include "FordMsg216BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

/*****************************************************************************
  * Name            : ComIPduCallout_WheelData_FD1_Oper
  * Description     : Implementation of ComIPduCallout_WheelData_FD1 subsystem in the model.
  * Inputs          : PduId, PduInfoPtr
  * Outputs         : Callback function return status always TRUE.
  * Usage Notes     : NA.
*****************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_WheelData_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{   
	*Rte_Pim_FordVehMsg064Miss() = FALSE;
	return  TRUE;
}

/*****************************************************************************
  * Name            : ComTimeoutNotification_WhlDirFl_D_Actl_Oper
  * Description     : Implementation of ComTimeoutNotification_WhlDirFl_D_Actl subsystem in the model.
  * Inputs          : None.
  * Outputs         : None.
  * Usage Notes     : NA.
*****************************************************************************/
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_WhlDirFl_D_Actl_Oper(void)
{ 
	*Rte_Pim_FordVehMsg064Miss() = TRUE;
}

#define FordMsg216BusHiSpd_STOP_SEC_CODE
#include "FordMsg216BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 