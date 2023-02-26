/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg3CABusHiSpdNonRte.c
* Module Description: FordMsg3CABusHiSpdNonRte - MM073A
* Project           : CBD
* Author            : Guru Seshadhri(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/19/18   1       GS(TATA)  Initial version																EA4#20124 
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg3CABusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg3CABusHiSpd_START_SEC_CODE
#include "FordMsg3CABusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
*********************************************************************************************************************/ 

/*****************************************************************************
  * Name            : ComIPduCallout_Lane_Assist_Data1_FD1_Oper
  * Description     : Implementation of ComIPduCallout_Lane_Assist_Data1_FD1 subsystem in the model.
  * Inputs          : PduId, PduInfoPtr
  * Outputs         : Callback function return status always TRUE.
  * Usage Notes     : NA.
*****************************************************************************/  
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Lane_Assist_Data1_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{   
	*Rte_Pim_FordVehMsg3CAMiss() = FALSE;
  
	return TRUE;
}


/*****************************************************************************
  * Name            : ComTimeoutNotification_LaCurvature_No_Calc_Oper
  * Description     : Implementation of ComTimeoutNotification_LaCurvature_No_Calc subsystem in the model.
  * Inputs          : None.
  * Outputs         : None.
  * Usage Notes     : NA.
*****************************************************************************/  
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LaCurvature_No_Calc_Oper(void)
{    
	*Rte_Pim_FordVehMsg3CAMiss() = TRUE;
}

#define FordMsg3CABusHiSpd_STOP_SEC_CODE
#include "FordMsg3CABusHiSpd_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 