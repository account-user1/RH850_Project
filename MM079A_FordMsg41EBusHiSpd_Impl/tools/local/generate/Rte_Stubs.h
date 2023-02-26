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
extern VAR(uint8, AUTOMATIC) FordMsg41EBusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg41EBusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Ip_FordSelDrvModEnad;
extern VAR(Ford_SelDrvMdeChassis2_D_Rq, AUTOMATIC) FordMsg41EBusHiSpd_Ip_Ford_SelDrvMdeChassis2_D_Rq1;

/* Outputs */
extern VAR(Ford_SelDrvMdeChassis2_D_Rq, AUTOMATIC) FordMsg41EBusHiSpd_Op_FordVehPenSelDrvMod;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Op_FordVehSelDrvModChassisVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldMissFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldSigFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldSigPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdInvldMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdInvldMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_SelnDrvgModMapSteerModY[32];
extern CONST(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Cal_SelnDrvgModSelDrvModChassis2X[32];

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg41EBusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehMsg41EMiss;
extern VAR(Ford_SelDrvMdeChassis2_D_Rq, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehPenSelDrvModPrev;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_InvldMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_InvldMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg41EBusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg41EBusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg41EBusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg41EBusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg41EBusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg41EBusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg41EBusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Logl
# undef Rte_Read_FordCanDtcInhb_Logl
#endif
#define Rte_Read_FordCanDtcInhb_Logl(data) (*(data) = FordMsg41EBusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg41EBusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordSelDrvModEnad_Logl
# undef Rte_Read_FordSelDrvModEnad_Logl
#endif
#define Rte_Read_FordSelDrvModEnad_Logl(data) (*(data) = FordMsg41EBusHiSpd_Ip_FordSelDrvModEnad)

#ifdef Rte_Read_Ford_SelDrvMdeChassis2_D_Rq1_Val
# undef Rte_Read_Ford_SelDrvMdeChassis2_D_Rq1_Val
#endif
#define Rte_Read_Ford_SelDrvMdeChassis2_D_Rq1_Val(data) (*(data) = FordMsg41EBusHiSpd_Ip_Ford_SelDrvMdeChassis2_D_Rq1)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehPenSelDrvMod_Val
# undef Rte_Write_FordVehPenSelDrvMod_Val
#endif
#define Rte_Write_FordVehPenSelDrvMod_Val(data) (FordMsg41EBusHiSpd_Op_FordVehPenSelDrvMod = (data))

#ifdef Rte_Write_FordVehSelDrvModChassisVld_Logl
# undef Rte_Write_FordVehSelDrvModChassisVld_Logl
#endif
#define Rte_Write_FordVehSelDrvModChassisVld_Logl(data) (FordMsg41EBusHiSpd_Op_FordVehSelDrvModChassisVld = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdChassisVldMissFaildThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldMissFaildThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdChassisVldSigFaildThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldSigFaildThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdChassisVldSigPassdThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdChassisVldSigPassdThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdInvldMsgFaildThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdInvldMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdInvldMsgFaildThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdInvldMsgFaildThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdInvldMsgPassdThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdInvldMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdInvldMsgPassdThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdInvldMsgPassdThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdMissMsgFaildThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg41EBusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg41EBusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg41EBusHiSpdMissMsgPassdThd_Val() (FordMsg41EBusHiSpd_Cal_FordMsg41EBusHiSpdMissMsgPassdThd)

#ifdef Rte_Prm_SelnDrvgModMapSteerModY_Ary1D
# undef Rte_Prm_SelnDrvgModMapSteerModY_Ary1D
#endif
#define Rte_Prm_SelnDrvgModMapSteerModY_Ary1D() (&(FordMsg41EBusHiSpd_Cal_SelnDrvgModMapSteerModY[0]))

#ifdef Rte_Prm_SelnDrvgModSelDrvModChassis2X_Ary1D
# undef Rte_Prm_SelnDrvgModSelDrvModChassis2X_Ary1D
#endif
#define Rte_Prm_SelnDrvgModSelDrvModChassis2X_Ary1D() (&(FordMsg41EBusHiSpd_Cal_SelnDrvgModSelDrvModChassis2X[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg41EBusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg41EBusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehMsg41EMiss
# undef Rte_Pim_FordVehMsg41EMiss
#endif
#define Rte_Pim_FordVehMsg41EMiss() (&FordMsg41EBusHiSpd_Pim_FordVehMsg41EMiss)

#ifdef Rte_Pim_FordVehPenSelDrvModPrev
# undef Rte_Pim_FordVehPenSelDrvModPrev
#endif
#define Rte_Pim_FordVehPenSelDrvModPrev() (&FordMsg41EBusHiSpd_Pim_FordVehPenSelDrvModPrev)

#ifdef Rte_Pim_FordVehSelDrvModChassisVldFaildRefTi
# undef Rte_Pim_FordVehSelDrvModChassisVldFaildRefTi
#endif
#define Rte_Pim_FordVehSelDrvModChassisVldFaildRefTi() (&FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldFaildRefTi)

#ifdef Rte_Pim_FordVehSelDrvModChassisVldMissRefTi
# undef Rte_Pim_FordVehSelDrvModChassisVldMissRefTi
#endif
#define Rte_Pim_FordVehSelDrvModChassisVldMissRefTi() (&FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldMissRefTi)

#ifdef Rte_Pim_FordVehSelDrvModChassisVldPassdRefTi
# undef Rte_Pim_FordVehSelDrvModChassisVldPassdRefTi
#endif
#define Rte_Pim_FordVehSelDrvModChassisVldPassdRefTi() (&FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldPassdRefTi)

#ifdef Rte_Pim_FordVehSelDrvModChassisVldPrev
# undef Rte_Pim_FordVehSelDrvModChassisVldPrev
#endif
#define Rte_Pim_FordVehSelDrvModChassisVldPrev() (&FordMsg41EBusHiSpd_Pim_FordVehSelDrvModChassisVldPrev)

#ifdef Rte_Pim_InvldMsgFaildRefTi
# undef Rte_Pim_InvldMsgFaildRefTi
#endif
#define Rte_Pim_InvldMsgFaildRefTi() (&FordMsg41EBusHiSpd_Pim_InvldMsgFaildRefTi)

#ifdef Rte_Pim_InvldMsgPassdRefTi
# undef Rte_Pim_InvldMsgPassdRefTi
#endif
#define Rte_Pim_InvldMsgPassdRefTi() (&FordMsg41EBusHiSpd_Pim_InvldMsgPassdRefTi)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg41EBusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg41EBusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
