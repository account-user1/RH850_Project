/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg077BusHiSpdNonRte.c
* Module Description: FordMsg077BusHiSpdNonRte - MM124A
* Project           : CBD
* Author            : Shishir Holenarasipura
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/28/18   1       SNH		Initial version																EA4#20138 
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg077BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg077BusHiSpd_START_SEC_CODE
#include "FordMsg077BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
*********************************************************************************************************************/ 

/*****************************************************************************
  * Name            : ComIPduCallout_BrakeSnData_3_FD1_Oper
  * Description     : Implementation of ComIPduCallout_BrakeSnData_3_FD1 subsystem in the model.
  * Inputs          : PduId, PduInfoPtr
  * Outputs         : Callback function return status always TRUE.
  * Usage Notes     : NA.
*****************************************************************************/  
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_3_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{   
	*Rte_Pim_FordVehMsg77Miss() = FALSE;
  
	return TRUE;
}


/*****************************************************************************
  * Name            : ComTimeoutNotification_VehLatComp_A_Actl_Oper
  * Description     : Implementation of ComTimeoutNotification_VehLatComp_A_Actl subsystem in the model.
  * Inputs          : None.
  * Outputs         : None.
  * Usage Notes     : NA.
*****************************************************************************/  
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_VehLatComp_A_Actl_Oper(void)
{    
	*Rte_Pim_FordVehMsg77Miss() = TRUE;
}

#define FordMsg077BusHiSpd_STOP_SEC_CODE
#include "FordMsg077BusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 