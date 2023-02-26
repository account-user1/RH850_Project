/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg414BusHiSpdNonRte.c
* Module Description: FordMsg414BusHiSpdNonRte - MM070A
* Project           : CBD 
* Author            : Sheeja R(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 01/05/18   1       SR(TATA)  Initial version																EA4#17244
* 04/03/18   2       SNH  	   Changed the name of ComIPduCallout Non-RTE function
*							   and removed a PIM							        						EA4#20143
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg414BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg414BusHiSpd_START_SEC_CODE
#include "FordMsg414BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 


FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_6_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_BrakeSnData_6_FD1_Oper
*********************************************************************************************************************/    
	
 *Rte_Pim_FordVehMsg414Miss() = FALSE;
 
  return  TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Ford_StePinOffst_D_Stat_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_Ford_StePinOffst_D_Stat_Oper
*********************************************************************************************************************/    
 *Rte_Pim_FordVehMsg414Miss() = TRUE;

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define FordMsg414BusHiSpd_STOP_SEC_CODE
#include "FordMsg414BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 