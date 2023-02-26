/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H

#include "math_stubs.h"

/*** Extern Statements ***/

/* Inputs */
extern VAR(uint8, AUTOMATIC) FordMsg41ABusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg41ABusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Ip_Ford_Outside_Air_Temp_Stat;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg41ABusHiSpd_Op_FordVehOutdAirT;
extern VAR(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Op_FordVehOutdAirTRaw;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Cal_FordMsg41ABusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Cal_FordMsg41ABusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg41ABusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg41ABusHiSpd_Pim_FordVehMsg41AMiss;
extern VAR(float32, AUTOMATIC) FordMsg41ABusHiSpd_Pim_FordVehOutdAirTPrev;
extern VAR(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Pim_FordVehOutdAirTRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg41ABusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41ABusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg41ABusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg41ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg41ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg41ABusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg41ABusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg41ABusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg41ABusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg41ABusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
