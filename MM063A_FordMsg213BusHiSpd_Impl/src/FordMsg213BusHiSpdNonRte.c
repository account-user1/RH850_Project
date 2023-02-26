/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg213BusHiSpdNonRte.c
* Module Description: FordMsg213BusHiSpdNonRte - MM063A
* Project           : CBD
* Author            : Guru Seshadhri(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/17/18   1       GS(TATA)  Initial version																EA4#20119 
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg213BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg213BusHiSpd_START_SEC_CODE
#include "FordMsg213BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_DesiredTorqBrk_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_DesiredTorqBrk_FD1_Oper
*********************************************************************************************************************/    

 *Rte_Pim_FordVehMsg213Miss() = FALSE;
  return TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_CmbbDeny_B_ActlBrk_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_CmbbDeny_B_ActlBrk_Oper
*********************************************************************************************************************/    
	
 *Rte_Pim_FordVehMsg213Miss() = TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define FordMsg213BusHiSpd_STOP_SEC_CODE
#include "FordMsg213BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 