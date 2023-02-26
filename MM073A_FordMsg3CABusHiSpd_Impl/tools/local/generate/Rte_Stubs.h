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
extern VAR(uint8, AUTOMATIC) FordMsg3CABusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg3CABusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Ip_Ford_LaCurvature_No_Calc;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Ip_Ford_LaRefAng_No_Req;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneAssiImgProcgModlAVld;
extern VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneDetnWarnInten;
extern VAR(Ford_LdwActvStats_D_Req, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneDetnWarnSts;
extern VAR(float32, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysCrvt;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysCrvtRaw;
extern VAR(Ford_LaRampType_B_Req, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysRampTyp;
extern VAR(float32, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysReqdAg;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysReqdAgRaw;
extern VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC) FordMsg3CABusHiSpd_Op_FordVehLaneKeepSysSts;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Cal_FordMsg3CABusHiSpdMissMsgPassdTiThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg3CABusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneAssiImgProcgModlAVldPrev;
extern VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneDetnWarnIntenPrev;
extern VAR(Ford_LdwActvStats_D_Req, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneDetnWarnStsPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysCrvtPrev;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysCrvtRawPrev;
extern VAR(Ford_LaRampType_B_Req, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysRampTypPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysReqdAgPrev;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysReqdAgRawPrev;
extern VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehLaneKeepSysStsPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3CABusHiSpd_Pim_FordVehMsg3CAMiss;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_LaneAssiImgProcgModlAVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_LaneAssiImgProcgModlAVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_LaneKeepSysReqdAgInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3CABusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg3CABusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg3CABusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg3CABusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg3CABusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg3CABusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
