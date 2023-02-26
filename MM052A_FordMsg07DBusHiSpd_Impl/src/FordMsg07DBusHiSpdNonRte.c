/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg07DBusHiSpdNonRte.c
* Module Description: FordMsg07DBusHiSpdNonRte - MM052A
* Project           : CBD
* Author            : Guru Seshadhri(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/10/18   1       GS(TATA)  Initial version																EA4#20111 
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg07DBusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg07DBusHiSpd_START_SEC_CODE
#include "FordMsg07DBusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

/*****************************************************************************
  * Name            : ComIPduCallout_BrakeSnData_4_FD1_Oper
  * Description     : Implementation of ComIPduCallout_BrakeSnData_4_FD1 subsystem in the model.
  * Inputs          : PduId, PduInfoPtr
  * Outputs         : Callback function return status always TRUE.
  * Usage Notes     : NA.
*****************************************************************************/   
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BrakeSnData_4_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
	*Rte_Pim_FordVehMsg07DMiss() = FALSE;
	return TRUE;
}

/*****************************************************************************
  * Name            : ComTimeoutNotification_BrkTot_Tq_Actl_Oper
  * Description     : Implementation of ComTimeoutNotification_BrkTot_Tq_Actl subsystem in the model.
  * Inputs          : None.
  * Outputs         : None.
  * Usage Notes     : NA.
*****************************************************************************/
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_BrkTot_Tq_Actl_Oper(void)
{   	
	*Rte_Pim_FordVehMsg07DMiss() = TRUE;
}

#define FordMsg07DBusHiSpd_STOP_SEC_CODE
#include "FordMsg07DBusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 