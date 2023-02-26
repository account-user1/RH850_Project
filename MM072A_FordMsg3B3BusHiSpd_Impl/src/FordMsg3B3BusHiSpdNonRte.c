 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg3B3BusHiSpdNonRte.c
* Module Description: FordMsg3B3BusHiSpdNonRte - MM072A
* Project           : CBD 
* Author            : Kathirkamu Annakamu
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz4qtt %
*------------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author           Change Description                                                         SCR #
* -------   -------  --------      ---------------------------------------------------------------------------  --------
* 11/22/17  1        AKK(TATA)     Initial Version                                                              EA4#17274      
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg3B3BusHiSpd.h"/* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

#define FordMsg3B3BusHiSpd_START_SEC_CODE
#include "FordMsg3B3BusHiSpd_MemMap.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BodyInfo_3_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_BodyInfo_3_HS2_Oper
*********************************************************************************************************************/   
 *Rte_Pim_FordVehMsg3B3Rxd() = TRUE;
 *Rte_Pim_FordVehMsg3B3Miss() = FALSE;
 
 return  TRUE;
 
 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Ignition_Status_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_Ignition_Status_Oper
*********************************************************************************************************************/ 
 *Rte_Pim_FordVehMsg3B3Miss() = TRUE;
 *Rte_Pim_FordVehMsg3B3Rxd() = FALSE;
 
 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#define FordMsg3B3BusHiSpd_STOP_SEC_CODE
#include "FordMsg3B3BusHiSpd_MemMap.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/