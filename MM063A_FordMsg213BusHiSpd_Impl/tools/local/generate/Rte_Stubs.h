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
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg213BusHiSpd_Ip_FordLkaEnad;
extern VAR(Ford_AbsActv_B_Actl, AUTOMATIC) FordMsg213BusHiSpd_Ip_Ford_AbsActv_B_Actl1;
extern VAR(Ford_CmbbBrkDis_B_Actl, AUTOMATIC) FordMsg213BusHiSpd_Ip_Ford_CmbbBrkDis_B_Actl1;
extern VAR(Ford_CmbbDeny_B_ActlBrk, AUTOMATIC) FordMsg213BusHiSpd_Ip_Ford_CmbbDeny_B_ActlBrk1;
extern VAR(Ford_CmbbBrkDis_B_Actl, AUTOMATIC) FordMsg213BusHiSpd_Ip_Ford_StabCtlBrkActv_B_Actl1;

/* Outputs */
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Op_FordVehAbsActv;
extern VAR(boolean, AUTOMATIC) FordMsg213BusHiSpd_Op_FordVehAbsEscStsVld;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Op_FordVehCllsnMtgtnByBrkgDenied;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Op_FordVehCllsnMtgtnByBrkgDisad;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Op_FordVehEscActv;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg213BusHiSpd_Cal_FordMsg213BusHiSpdAbsActvVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg213BusHiSpd_Cal_FordMsg213BusHiSpdAbsActvVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg213BusHiSpd_Cal_FordMsg213BusHiSpdEvasSteerAssiEnadThd;
extern CONST(uint16, AUTOMATIC) FordMsg213BusHiSpd_Cal_FordMsg213BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg213BusHiSpd_Cal_FordMsg213BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Pim_AbsActvVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Pim_AbsActvVldPassdRefTi;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg213BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehAbsActvPrev;
extern VAR(boolean, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehAbsEscStsVldPrev;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgDeniedPrev;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgDisadPrev;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehEscActvPrev;
extern VAR(boolean, AUTOMATIC) FordMsg213BusHiSpd_Pim_FordVehMsg213Miss;
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg213BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg213BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg213BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg213BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg213BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg213BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
