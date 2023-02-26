 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg415BusHiSpdNonRte.c
* Module Description: FordMsg415BusHiSpdNonRte -  MM077A
* Project           : CBD 
* Author            : Kathirkamu Annakamu
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/22/17  1        AKK(TATA)       Initial Version                                                          EA4#17250      
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg415BusHiSpd.h"/* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

#define FordMsg415BusHiSpd_START_SEC_CODE
#include "FordMsg415BusHiSpd_MemMap.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSysFeatures_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_BrakeSysFeatures_HS2_Oper
*********************************************************************************************************************/   
 *Rte_Pim_FordVehMsg415Rxd() = TRUE;
 *Rte_Pim_FordVehMsg415Miss() = FALSE;
 
 return  TRUE;
 
 /**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 ********************************************************************************************************************/
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Veh_V_ActlBrk_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_Veh_V_ActlBrk_Oper
*********************************************************************************************************************/   
 *Rte_Pim_FordVehMsg415Rxd() = FALSE;
 *Rte_Pim_FordVehMsg415Miss() = TRUE;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#define FordMsg415BusHiSpd_STOP_SEC_CODE
#include "FordMsg415BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/