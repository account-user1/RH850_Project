/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgSwCal_MotCtrl_MemMap.h
* Module Description: Motor Angle Software Calibration Component MotorControl Memory Map file
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 08/11/17	1   	 SR			Initial Version							                                    EA4#12616
**********************************************************************************************************************/

/* MISRA-C:2004 Rule 19.6  [NXTRDEV 19.6.1] : AUTOSAR requires deviation from this rule in Memory Mapping header files */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule in Memory Mapping header files */


#ifdef MotAgSwCal_MotCtrl_START_SEC_CODE
    # undef MotAgSwCal_MotCtrl_START_SEC_CODE
	#define MotCtrl_START_SEC_CODE
	#include "MemMap.h"	
#endif

#ifdef MotAgSwCal_MotCtrl_STOP_SEC_CODE
    # undef MotAgSwCal_MotCtrl_STOP_SEC_CODE
	#define MotCtrl_STOP_SEC_CODE
	#include "MemMap.h"
#endif


