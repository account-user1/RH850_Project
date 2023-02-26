/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotAgCmp_MotCtrl_MemMap.h
* Module Description: Motor Angle Compensation Motor Control MemMap
* Project           : CBD
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/04/15	1   	 SB			initial version							                                    	EA4#337
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#ifdef MotAgCmp_MotCtrl_START_SEC_CODE
    # undef MotAgCmp_MotCtrl_START_SEC_CODE
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef MotAgCmp_MotCtrl_STOP_SEC_CODE
    # undef MotAgCmp_MotCtrl_STOP_SEC_CODE
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif


