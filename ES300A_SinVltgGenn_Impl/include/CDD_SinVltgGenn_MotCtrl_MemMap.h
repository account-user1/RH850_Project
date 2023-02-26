/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_SinVltgGenn_MotCtrl_MemMap.h
* Module Description: Sine Voltage Generation header
* Project           : CBD
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/11/15  1        SV        Initial Version                                                                 EA4#462                                                                 
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#ifdef CDD_SinVltgGenn_MotCtrl_START_SEC_CODE
    # undef CDD_SinVltgGenn_MotCtrl_START_SEC_CODE	
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef CDD_SinVltgGenn_MotCtrl_STOP_SEC_CODE
    # undef CDD_SinVltgGenn_MotCtrl_STOP_SEC_CODE	
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif

