/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg4B0BusHiSpdNonRte.c
* Module Description: FordMsg4B0BusHiSpdNonRte - MM089A
* Project           : CBD 
* Author            : Kathirkamu A(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 04/04/18   1       AKK(TATA)  Initial version																EA4#20133
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_FordMsg4B0BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */

#include "Appl_Cbk.h"
#include "Com_Cot.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define FordMsg4B0BusHiSpd_START_SEC_CODE
#include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

/*****************************************************************************
  * Name            : ComIPduCallout_ABS_BrkBst_Data_FD1_Oper
  * Description     : Implementation of ComIPduCallout_ABS_BrkBst_Data_FD1 subsystem in the model.
  * Inputs          : PduId, PduInfoPtr
  * Outputs         : Callback function return status always TRUE.
  * Usage Notes     : NA.
*****************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_ABS_BrkBst_Data_FD1_Oper(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{    
	
	*Rte_Pim_FordMsg4B0Miss() = FALSE;
 
	return  TRUE;
}

/*****************************************************************************
  * Name            : ComTimeoutNotification_YawStabilityIndex_Oper
  * Description     : Implementation of ComTimeoutNotification_YawStabilityIndex subsystem in the model.
  * Inputs          : None.
  * Outputs         : None.
  * Usage Notes     : NA.
*****************************************************************************/
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_YawStabilityIndex_Oper(void)
{   
	*Rte_Pim_FordMsg4B0Miss() = TRUE;
}

#define FordMsg4B0BusHiSpd_STOP_SEC_CODE
#include "FordMsg4B0BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 