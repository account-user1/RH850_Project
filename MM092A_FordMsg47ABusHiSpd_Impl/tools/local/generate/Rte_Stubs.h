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
extern VAR(uint8, AUTOMATIC) FordMsg47ABusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg47ABusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Ip_FordTrlrBackupAssiEnad;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Op_FordVehTrlrBackupAssiKnobPosnVld;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Op_FordVehTrlrBackupAssiKnobVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdMissMsgPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Cal_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg47ABusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FirstTranTrlrAidKnobBtnVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FirstTranTrlrAidKnobPosVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehMsg47Miss;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehMsg47Rxd;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi;
extern VAR(Ford_TrlrAidSwtch_D_RqDrv, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobBtnPrev;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi;
extern VAR(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Pim_FordVehTrlrAidKnobPosnPrev;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_MissMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobBtnVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobBtnVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobBtnVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobBtnVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobPosVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobPosVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobPosVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg47ABusHiSpd_Pim_TrlrAidKnobPosVldPrev;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg47ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg47ABusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg47ABusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
