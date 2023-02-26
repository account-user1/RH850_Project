/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg41ABusHiSpdNonRte.c
* Module Description: FordMsg41ABusHiSpdNonRte - MM078A
* Project           : CBD 
* Author            : Nexteer ISC
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 11/27/17  1        SR(TATA)  Initial Version                                                             EA4#17253
* 04/19/18  2        TM                Version                                                             EA4#20147
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg41ABusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg41ABusHiSpd_START_SEC_CODE
#include "FordMsg41ABusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Climate_Control_Data_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_Climate_Control_Data_HS2_Oper
*********************************************************************************************************************/    
 *Rte_Pim_FordVehMsg41AMiss() = FALSE;

  return TRUE;
        

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Outside_Air_Temp_Stat_Oper(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_Outside_Air_Temp_Stat_Oper
*********************************************************************************************************************/    
        
 *Rte_Pim_FordVehMsg41AMiss() = TRUE;

 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#define FordMsg41ABusHiSpd_STOP_SEC_CODE
#include "FordMsg41ABusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 
