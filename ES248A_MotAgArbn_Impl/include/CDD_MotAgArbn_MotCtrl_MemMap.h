/**********************************************************************************************************************
* Copyright 2015,2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotAgArbn_MotCtrl_MemMap.h
* Module Description: Motor Angle Arbitration Motor Control MemMap
* Project           : CBD
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*  Date       Rev     Author    Change Description                                                             SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 06/04/15   1        SB       Initial version                                                              EA4#845
* 09/27/17   2        SR       Updated MISRA-C deviation comment wording to match EA4 process documents     EA4#15132
**********************************************************************************************************************/

/**[File Level MISRA-C Rule Deviation Comments]**/
/* MISRA-C:2004 Rule 19.6  [NXTRDEV 19.6.1 ]: AUTOSAR requires deviation from this rule in Memory Mapping header files */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule in Memory Mapping header files */


#ifdef MotAgArbn_MotCtrl_START_SEC_CODE
    # undef MotAgArbn_MotCtrl_START_SEC_CODE
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef MotAgArbn_MotCtrl_STOP_SEC_CODE
    # undef MotAgArbn_MotCtrl_STOP_SEC_CODE
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif


