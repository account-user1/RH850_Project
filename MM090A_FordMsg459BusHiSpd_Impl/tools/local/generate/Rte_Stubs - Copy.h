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


/*** Extern Statements ***/

/* Inputs */
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordTrlrBackupAssiEnad;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_HitchToVehAxle_L_Calc;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrAidTrgtId_No_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrAid_An3_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrAid_AnRate2_Actl;
extern VAR(Ford_TrlrAid_D2_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrAid_D2_Stat;
extern VAR(Ford_TrlrRvrse_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrRvrse_D_Stat;
extern VAR(Ford_TrlrTrgtAcquire_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Ip_Ford_TrlrTrgtAcquire_D_Stat;

/* Outputs */
extern VAR(Ford_TrlrTrgtAcquire_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidAcqSts;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidHitchAg;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidHitchAgRate;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidIdnVal;
extern VAR(Ford_TrlrAid_D2_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidTrakgSt;
extern VAR(Ford_TrlrRvrse_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrAidTrlrRvsGuidcSts;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrBallToAxle;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrHitchAgVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrHitchRateVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrTarVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrTrakgStVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_TrlrAidStsThreePrsntInt;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdDiagMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTarVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTarVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459Miss;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459MissTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459RxdTmr;
extern VAR(Ford_TrlrTrgtAcquire_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidAcqStsPrev;
extern VAR(Ford_TrlrRvrse_D_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidGuidcRevsStsPrev;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidHitchAgPrev;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidHitchAgRatePrev;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidIdnValPrev;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStPassdTmr;
extern VAR(Ford_TrlrAid_D2_Stat1, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStPrev;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrBallToAxlePrev;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgPassdTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRateFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRatePassdTmr;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchRateVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrTarVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrTrackStVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_TrlrAidStsThreePrsntIntPrev;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Logl
# undef Rte_Read_FordCanDtcInhb_Logl
#endif
#define Rte_Read_FordCanDtcInhb_Logl(data) (*(data) = FordMsg459BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Logl
# undef Rte_Read_FordEpsLifeCycMod_Logl
#endif
#define Rte_Read_FordEpsLifeCycMod_Logl(data) (*(data) = FordMsg459BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordTrlrBackupAssiEnad_Logl
# undef Rte_Read_FordTrlrBackupAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackupAssiEnad_Logl(data) (*(data) = FordMsg459BusHiSpd_Ip_FordTrlrBackupAssiEnad)

#ifdef Rte_Read_Ford_HitchToVehAxle_L_Calc_Val
# undef Rte_Read_Ford_HitchToVehAxle_L_Calc_Val
#endif
#define Rte_Read_Ford_HitchToVehAxle_L_Calc_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_HitchToVehAxle_L_Calc)

#ifdef Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Val
# undef Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Val
#endif
#define Rte_Read_Ford_TrlrAidTrgtId_No_Actl_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrAidTrgtId_No_Actl)

#ifdef Rte_Read_Ford_TrlrAid_An3_Actl_Val
# undef Rte_Read_Ford_TrlrAid_An3_Actl_Val
#endif
#define Rte_Read_Ford_TrlrAid_An3_Actl_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrAid_An3_Actl)

#ifdef Rte_Read_Ford_TrlrAid_AnRate2_Actl_Val
# undef Rte_Read_Ford_TrlrAid_AnRate2_Actl_Val
#endif
#define Rte_Read_Ford_TrlrAid_AnRate2_Actl_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrAid_AnRate2_Actl)

#ifdef Rte_Read_Ford_TrlrAid_D2_Stat_Val
# undef Rte_Read_Ford_TrlrAid_D2_Stat_Val
#endif
#define Rte_Read_Ford_TrlrAid_D2_Stat_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrAid_D2_Stat)

#ifdef Rte_Read_Ford_TrlrRvrse_D_Stat_Val
# undef Rte_Read_Ford_TrlrRvrse_D_Stat_Val
#endif
#define Rte_Read_Ford_TrlrRvrse_D_Stat_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrRvrse_D_Stat)

#ifdef Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Val
# undef Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Val
#endif
#define Rte_Read_Ford_TrlrTrgtAcquire_D_Stat_Val(data) (*(data) = FordMsg459BusHiSpd_Ip_Ford_TrlrTrgtAcquire_D_Stat)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehTrlrAidAcqSts_Val
# undef Rte_Write_FordVehTrlrAidAcqSts_Val
#endif
#define Rte_Write_FordVehTrlrAidAcqSts_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidAcqSts = (data))

#ifdef Rte_Write_FordVehTrlrAidHitchAg_Val
# undef Rte_Write_FordVehTrlrAidHitchAg_Val
#endif
#define Rte_Write_FordVehTrlrAidHitchAg_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidHitchAg = (data))

#ifdef Rte_Write_FordVehTrlrAidHitchAgRate_Val
# undef Rte_Write_FordVehTrlrAidHitchAgRate_Val
#endif
#define Rte_Write_FordVehTrlrAidHitchAgRate_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidHitchAgRate = (data))

#ifdef Rte_Write_FordVehTrlrAidIdnVal_Val
# undef Rte_Write_FordVehTrlrAidIdnVal_Val
#endif
#define Rte_Write_FordVehTrlrAidIdnVal_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidIdnVal = (data))

#ifdef Rte_Write_FordVehTrlrAidTrakgSt_Val
# undef Rte_Write_FordVehTrlrAidTrakgSt_Val
#endif
#define Rte_Write_FordVehTrlrAidTrakgSt_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidTrakgSt = (data))

#ifdef Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val
# undef Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val
#endif
#define Rte_Write_FordVehTrlrAidTrlrRvsGuidcSts_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrAidTrlrRvsGuidcSts = (data))

#ifdef Rte_Write_FordVehTrlrBallToAxle_Val
# undef Rte_Write_FordVehTrlrBallToAxle_Val
#endif
#define Rte_Write_FordVehTrlrBallToAxle_Val(data) (FordMsg459BusHiSpd_Op_FordVehTrlrBallToAxle = (data))

#ifdef Rte_Write_FordVehTrlrHitchAgVld_Logl
# undef Rte_Write_FordVehTrlrHitchAgVld_Logl
#endif
#define Rte_Write_FordVehTrlrHitchAgVld_Logl(data) (FordMsg459BusHiSpd_Op_FordVehTrlrHitchAgVld = (data))

#ifdef Rte_Write_FordVehTrlrHitchRateVld_Logl
# undef Rte_Write_FordVehTrlrHitchRateVld_Logl
#endif
#define Rte_Write_FordVehTrlrHitchRateVld_Logl(data) (FordMsg459BusHiSpd_Op_FordVehTrlrHitchRateVld = (data))

#ifdef Rte_Write_FordVehTrlrTarVld_Logl
# undef Rte_Write_FordVehTrlrTarVld_Logl
#endif
#define Rte_Write_FordVehTrlrTarVld_Logl(data) (FordMsg459BusHiSpd_Op_FordVehTrlrTarVld = (data))

#ifdef Rte_Write_FordVehTrlrTrakgStVld_Logl
# undef Rte_Write_FordVehTrlrTrakgStVld_Logl
#endif
#define Rte_Write_FordVehTrlrTrakgStVld_Logl(data) (FordMsg459BusHiSpd_Op_FordVehTrlrTrakgStVld = (data))

#ifdef Rte_Write_TrlrAidStsThreePrsntInt_Logl
# undef Rte_Write_TrlrAidStsThreePrsntInt_Logl
#endif
#define Rte_Write_TrlrAidStsThreePrsntInt_Logl(data) (FordMsg459BusHiSpd_Op_TrlrAidStsThreePrsntInt = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdDiagMsgMissTmrThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdDiagMsgMissTmrThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldFaildThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldFaildThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdHitchAgInvldPassdThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldPassdThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldFaildThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldFaildThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdHitchAgRateInvldPassdThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldPassdThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrackStInvldFaildThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldFaildThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrackStInvldPassdThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldPassdThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTarVldThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTarVldThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrTarVldMissMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTarVldMissMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd)

#ifdef Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val
# undef Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val
#endif
#define Rte_Prm_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd_Val() (FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg459BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg459BusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehMsg459Miss
# undef Rte_Pim_FordVehMsg459Miss
#endif
#define Rte_Pim_FordVehMsg459Miss() (&FordMsg459BusHiSpd_Pim_FordVehMsg459Miss)

#ifdef Rte_Pim_FordVehMsg459MissTmr
# undef Rte_Pim_FordVehMsg459MissTmr
#endif
#define Rte_Pim_FordVehMsg459MissTmr() (&FordMsg459BusHiSpd_Pim_FordVehMsg459MissTmr)

#ifdef Rte_Pim_FordVehMsg459RxdTmr
# undef Rte_Pim_FordVehMsg459RxdTmr
#endif
#define Rte_Pim_FordVehMsg459RxdTmr() (&FordMsg459BusHiSpd_Pim_FordVehMsg459RxdTmr)

#ifdef Rte_Pim_FordVehTrlrAidAcqStsPrev
# undef Rte_Pim_FordVehTrlrAidAcqStsPrev
#endif
#define Rte_Pim_FordVehTrlrAidAcqStsPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidAcqStsPrev)

#ifdef Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev
# undef Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev
#endif
#define Rte_Pim_FordVehTrlrAidGuidcRevsStsPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidGuidcRevsStsPrev)

#ifdef Rte_Pim_FordVehTrlrAidHitchAgPrev
# undef Rte_Pim_FordVehTrlrAidHitchAgPrev
#endif
#define Rte_Pim_FordVehTrlrAidHitchAgPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidHitchAgPrev)

#ifdef Rte_Pim_FordVehTrlrAidHitchAgRatePrev
# undef Rte_Pim_FordVehTrlrAidHitchAgRatePrev
#endif
#define Rte_Pim_FordVehTrlrAidHitchAgRatePrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidHitchAgRatePrev)

#ifdef Rte_Pim_FordVehTrlrAidIdnValPrev
# undef Rte_Pim_FordVehTrlrAidIdnValPrev
#endif
#define Rte_Pim_FordVehTrlrAidIdnValPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidIdnValPrev)

#ifdef Rte_Pim_FordVehTrlrAidTrackStFaildTmr
# undef Rte_Pim_FordVehTrlrAidTrackStFaildTmr
#endif
#define Rte_Pim_FordVehTrlrAidTrackStFaildTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStFaildTmr)

#ifdef Rte_Pim_FordVehTrlrAidTrackStPassdTmr
# undef Rte_Pim_FordVehTrlrAidTrackStPassdTmr
#endif
#define Rte_Pim_FordVehTrlrAidTrackStPassdTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStPassdTmr)

#ifdef Rte_Pim_FordVehTrlrAidTrackStPrev
# undef Rte_Pim_FordVehTrlrAidTrackStPrev
#endif
#define Rte_Pim_FordVehTrlrAidTrackStPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStPrev)

#ifdef Rte_Pim_FordVehTrlrBallToAxlePrev
# undef Rte_Pim_FordVehTrlrBallToAxlePrev
#endif
#define Rte_Pim_FordVehTrlrBallToAxlePrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrBallToAxlePrev)

#ifdef Rte_Pim_FordVehTrlrHitchAgFaildTmr
# undef Rte_Pim_FordVehTrlrHitchAgFaildTmr
#endif
#define Rte_Pim_FordVehTrlrHitchAgFaildTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgFaildTmr)

#ifdef Rte_Pim_FordVehTrlrHitchAgPassdTmr
# undef Rte_Pim_FordVehTrlrHitchAgPassdTmr
#endif
#define Rte_Pim_FordVehTrlrHitchAgPassdTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgPassdTmr)

#ifdef Rte_Pim_FordVehTrlrHitchAgRateFaildTmr
# undef Rte_Pim_FordVehTrlrHitchAgRateFaildTmr
#endif
#define Rte_Pim_FordVehTrlrHitchAgRateFaildTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRateFaildTmr)

#ifdef Rte_Pim_FordVehTrlrHitchAgRatePassdTmr
# undef Rte_Pim_FordVehTrlrHitchAgRatePassdTmr
#endif
#define Rte_Pim_FordVehTrlrHitchAgRatePassdTmr() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRatePassdTmr)

#ifdef Rte_Pim_FordVehTrlrHitchAgVldPrev
# undef Rte_Pim_FordVehTrlrHitchAgVldPrev
#endif
#define Rte_Pim_FordVehTrlrHitchAgVldPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgVldPrev)

#ifdef Rte_Pim_FordVehTrlrHitchRateVldPrev
# undef Rte_Pim_FordVehTrlrHitchRateVldPrev
#endif
#define Rte_Pim_FordVehTrlrHitchRateVldPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrHitchRateVldPrev)

#ifdef Rte_Pim_FordVehTrlrTarVldPrev
# undef Rte_Pim_FordVehTrlrTarVldPrev
#endif
#define Rte_Pim_FordVehTrlrTarVldPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrTarVldPrev)

#ifdef Rte_Pim_FordVehTrlrTrackStVldPrev
# undef Rte_Pim_FordVehTrlrTrackStVldPrev
#endif
#define Rte_Pim_FordVehTrlrTrackStVldPrev() (&FordMsg459BusHiSpd_Pim_FordVehTrlrTrackStVldPrev)

#ifdef Rte_Pim_TrlrAidStsThreePrsntIntPrev
# undef Rte_Pim_TrlrAidStsThreePrsntIntPrev
#endif
#define Rte_Pim_TrlrAidStsThreePrsntIntPrev() (&FordMsg459BusHiSpd_Pim_TrlrAidStsThreePrsntIntPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
