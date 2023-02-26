/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg217BusHiSpdNonRte.c
* Module Description: FordMsg217BusHiSpdNonRte - MM065A
* Project           : CBD 
* Author            : Guru Seshadhri (TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 11/28/17  1        GS(TATA)  Initial Version                                                             EA4#17241
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg217BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg217BusHiSpd_START_SEC_CODE
#include "FordMsg217BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_WheelSpeed_HS2_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_WheelSpeed_HS2_Oper
*********************************************************************************************************************/    
 *Rte_Pim_FordVehMsg217Rxd()  = TRUE;
 *Rte_Pim_FordVehMsg217Miss() = FALSE;

  return TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(void, FordMsg217BusHiSpd_CODE) ComTimeoutNotification_WhlFl_W_Meas_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_WhlFl_W_Meas_Oper
*********************************************************************************************************************/    
	
 *Rte_Pim_FordVehMsg217Miss() = TRUE;
 *Rte_Pim_FordVehMsg217Rxd()  = FALSE;
 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define FordMsg217BusHiSpd_STOP_SEC_CODE
#include "FordMsg217BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 