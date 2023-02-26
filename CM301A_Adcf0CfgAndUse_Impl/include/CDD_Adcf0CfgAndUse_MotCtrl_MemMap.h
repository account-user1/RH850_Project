/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_Adcf0CfgAndUse_MotCtrl_MemMap.h
* Module Description: Adcf0CfgAndUse component Motor Control MemMap
* Project           : CBD
* Author            : Mateusz Bartocha
***********************************************************************************************************************
* Version Control:
* %version:           %
* %derived_by:        %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/09/16	1   	 MB	   			Initial version							                                    EA4#10924
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/


/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#ifdef CDD_Adcf0CfgAndUse_MotCtrl_START_SEC_CODE
    # undef CDD_Adcf0CfgAndUse_MotCtrl_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#ifdef CDD_Adcf0CfgAndUse_MotCtrl_STOP_SEC_CODE
    # undef CDD_Adcf0CfgAndUse_MotCtrl_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif
