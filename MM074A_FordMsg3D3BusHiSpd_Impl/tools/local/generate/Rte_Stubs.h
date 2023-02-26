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
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_FordLaneCentrAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_FordTrfcJamAssiEnad;
extern VAR(Ford_HandsOffCnfm_B_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_HandsOffCnfm_B_Rq1;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlCurv_NoRate_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlCurv_No_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlPathOffst_L_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlPath_An_Actl;
extern VAR(Ford_LatCtlPrecision_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlPrecision_D_Rq1;
extern VAR(Ford_LatCtlRampType_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlRampType_D_Rq1;
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtlRng_L_Max;
extern VAR(Ford_LatCtl_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Ip_Ford_LatCtl_D_Rq1;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlCrvt;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlCrvtRate;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlCrvtRateRaw;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlCrvtRaw;
extern VAR(Ford_HandsOffCnfm_B_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlHandsOffDetnTqStimlsReq;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlImgProcrModlAVld;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlPah;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlPahOffs;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlPahOffsRaw;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlPahRaw;
extern VAR(Ford_LatCtlPrecision_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlPrcsn;
extern VAR(Ford_LatCtlRampType_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlRampTyp;
extern VAR(Ford_LatCtl_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlReq;
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Op_FordVehLatCtrlRingMax;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Cal_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Cal_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Cal_FordMsg3D3BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Cal_FordMsg3D3BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlCrvtPrev;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlCrvtRatePrev;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlCrvtRateRawPrev;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlCrvtRawPrev;
extern VAR(Ford_HandsOffCnfm_B_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlImgProcrModlAVldPrev;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlPahOffsPrev;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlPahOffsRawPrev;
extern VAR(float32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlPahPrev;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlPahRawPrev;
extern VAR(Ford_LatCtlPrecision_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlPrcsnPrev;
extern VAR(Ford_LatCtlRampType_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlRampTypPrev;
extern VAR(Ford_LatCtl_D_Rq, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlReqPrev;
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehLatCtrlRingMaxPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_FordVehMsg3D3Miss;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_ImgProcrModlAVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_ImgProcrModlAVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg3D3BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
