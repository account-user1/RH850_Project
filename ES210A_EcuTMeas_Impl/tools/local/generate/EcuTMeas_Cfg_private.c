/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   EcuTMeas_Cfg_private.c
* Module Description: Configurable Parameter definitions for EcuTMeas component
* Project           : CBD
* Author            : Shruthi Raghavan
* Generator         : artt 2.1.2.0
* Generation Time   : 16.10.2017 14:26:45
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date         Rev     Author    Change Description                                                            SCR#
* ---------  ------   ---------   ------------------------------------------------------------------------- ----------
* 08/07/17  	1      Shruthi   Initial Version                                                            EA4#12359
* 09/26/17      2      BRB       Updated float32 to fixed point conversion logic                            
**********************************************************************************************************************/


#include "EcuTMeas_Cfg_private.h"

/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define EcuTMeas_START_SEC_CODE
#include "EcuTMeas_MemMap.h"

CONST(float32, EcuTMeas_CODE) ECUTMEAS_DFTT_DEGCGRD_F32 = (60.0000F);
CONST(float32, EcuTMeas_CODE) ECUTMEAS_FILTAU_HZ_F32    = (100.0000F);

CONST(float32, EcuTMeas_CODE) ECUTMEAS_RNGDIAGCMAX_DEGCGRD_F32  = (145.0000F);
CONST(float32, EcuTMeas_CODE) ECUTMEAS_RNGDIAGCMIN_DEGCGRD_F32  = (-45.0000F);

CONST(uint16 , EcuTMeas_CODE) ECUTMEAS_NTC0X045FAILSTEP_CNT_U16 = 3000U;
CONST(uint16 , EcuTMeas_CODE) ECUTMEAS_NTC0X045PASSSTEP_CNT_U16 = 3000U;

CONST(uint16 , EcuTMeas_CODE) ECUTMEAS_ECUTX_VOLT_U3P13[NROFSNSRXYPT_CNT_U08] = { 0U, 34865U, 21053U, 24576U, 32768U, 40960U, 0U, 0U};
CONST(sint16 , EcuTMeas_CODE) ECUTMEAS_ECUTY_DEGCGRD_S8P7[NROFSNSRXYPT_CNT_U08] = { 0, -331, -6400, 19200, 0, 0, 0, 0};

#define EcuTMeas_STOP_SEC_CODE
#include "EcuTMeas_MemMap.h"
