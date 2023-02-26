/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017,2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg41EBusHiSpdNonRte.c
* Module Description: FordMsg41EBusHiSpdNonRte - MM079A
* Project           : CBD 
* Author            : Nexteer ISC
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 11/20/17  1        GS(TATA)  Initial Version                                                             EA4#17256
* 04/17/18   2       TM(ISC)   Design updated based on Requirement 5.0										 EA4#20148
							   Removed 'FordMfgDiagcInhb', 'FordMissMsgDiagcInhb' and 'FordInvldMsgDiagcInhb' inputs.
							   Changed data type of inputs 'FordSelDrvModEnad' and 'FordCanDtcInhb' from uint8 to boolean.
							   Name of Client/Server is changed from 'ComIPduCallout_BrakeSysFeatures_3_HS2'  to 
							   ComIPduCallout_BrakeSysFeatures_3_FD1'.
							   Removed "FordVehMsg41ERxd" PIM.    
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg41EBusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg41EBusHiSpd_START_SEC_CODE
#include "FordMsg41EBusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSysFeatures_3_FD1(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComIPduCallout_BrakeSysFeatures_3_HS2_Oper
*********************************************************************************************************************/    

 *Rte_Pim_FordVehMsg41EMiss() = FALSE;

  
  return TRUE;
	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(void, COM_APPL_CODE) ComTimeoutNotification_SelDrvMdeChassis2_D_Rq(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: ComTimeoutNotification_SelDrvMdeChassis2_D_Rq_Oper
*********************************************************************************************************************/    
	
 *Rte_Pim_FordVehMsg41EMiss() = TRUE;

 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define FordMsg41EBusHiSpd_STOP_SEC_CODE
#include "FordMsg41EBusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 