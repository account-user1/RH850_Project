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
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordInvldMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_FordTrlrBackUpAssiEnad;
extern VAR(Ford_Ignition_Status, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_Ford_Ignition_Status1;
extern VAR(Ford_LifeCycMde_D_Actl, AUTOMATIC) FordMsg3B3BusHiSpd_Ip_Ford_LifeCycMde_D_Actl1;

/* Outputs */
extern VAR(Ford_Ignition_Status, AUTOMATIC) FordMsg3B3BusHiSpd_Op_FordVehIgnSts;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Op_FordVehIgnStsVld;
extern VAR(Ford_LifeCycMde_D_Actl, AUTOMATIC) FordMsg3B3BusHiSpd_Op_FordVehLifeCycMod;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdInvldSigFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdInvldSigPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdMissMsgFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehIgnStsInvldSigFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehIgnStsInvldSigPassdRefTi;
extern VAR(Ford_Ignition_Status, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehIgnStsPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehIgnStsVldPrev;
extern VAR(Ford_LifeCycMde_D_Actl, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehLifeCycModPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehMsg3B3Miss;
extern VAR(boolean, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_FordVehMsg3B3Rxd;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_IgnStsVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_IgnStsVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_IgnStsVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg3B3BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordInvldMsgDiagcInhb_Val
# undef Rte_Read_FordInvldMsgDiagcInhb_Val
#endif
#define Rte_Read_FordInvldMsgDiagcInhb_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordInvldMsgDiagcInhb)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_FordTrlrBackUpAssiEnad_Logl
# undef Rte_Read_FordTrlrBackUpAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = FordMsg3B3BusHiSpd_Ip_FordTrlrBackUpAssiEnad)

#ifdef Rte_Read_Ford_Ignition_Status1_Val
# undef Rte_Read_Ford_Ignition_Status1_Val
#endif
#define Rte_Read_Ford_Ignition_Status1_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_Ford_Ignition_Status1)

#ifdef Rte_Read_Ford_LifeCycMde_D_Actl1_Val
# undef Rte_Read_Ford_LifeCycMde_D_Actl1_Val
#endif
#define Rte_Read_Ford_LifeCycMde_D_Actl1_Val(data) (*(data) = FordMsg3B3BusHiSpd_Ip_Ford_LifeCycMde_D_Actl1)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehIgnSts_Val
# undef Rte_Write_FordVehIgnSts_Val
#endif
#define Rte_Write_FordVehIgnSts_Val(data) (FordMsg3B3BusHiSpd_Op_FordVehIgnSts = (data))

#ifdef Rte_Write_FordVehIgnStsVld_Logl
# undef Rte_Write_FordVehIgnStsVld_Logl
#endif
#define Rte_Write_FordVehIgnStsVld_Logl(data) (FordMsg3B3BusHiSpd_Op_FordVehIgnStsVld = (data))

#ifdef Rte_Write_FordVehLifeCycMod_Val
# undef Rte_Write_FordVehLifeCycMod_Val
#endif
#define Rte_Write_FordVehLifeCycMod_Val(data) (FordMsg3B3BusHiSpd_Op_FordVehLifeCycMod = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldFaildThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldFaildThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldMissThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldMissThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdIgnStsVldPassdThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdIgnStsVldPassdThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdInvldSigFaildThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdInvldSigFaildThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdInvldSigPassdThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdInvldSigPassdThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdMissMsgFaildThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg3B3BusHiSpdMissMsgPassdThd_Val() (FordMsg3B3BusHiSpd_Cal_FordMsg3B3BusHiSpdMissMsgPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg3B3BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg3B3BusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehIgnStsInvldSigFaildRefTi
# undef Rte_Pim_FordVehIgnStsInvldSigFaildRefTi
#endif
#define Rte_Pim_FordVehIgnStsInvldSigFaildRefTi() (&FordMsg3B3BusHiSpd_Pim_FordVehIgnStsInvldSigFaildRefTi)

#ifdef Rte_Pim_FordVehIgnStsInvldSigPassdRefTi
# undef Rte_Pim_FordVehIgnStsInvldSigPassdRefTi
#endif
#define Rte_Pim_FordVehIgnStsInvldSigPassdRefTi() (&FordMsg3B3BusHiSpd_Pim_FordVehIgnStsInvldSigPassdRefTi)

#ifdef Rte_Pim_FordVehIgnStsPrev
# undef Rte_Pim_FordVehIgnStsPrev
#endif
#define Rte_Pim_FordVehIgnStsPrev() (&FordMsg3B3BusHiSpd_Pim_FordVehIgnStsPrev)

#ifdef Rte_Pim_FordVehIgnStsVldPrev
# undef Rte_Pim_FordVehIgnStsVldPrev
#endif
#define Rte_Pim_FordVehIgnStsVldPrev() (&FordMsg3B3BusHiSpd_Pim_FordVehIgnStsVldPrev)

#ifdef Rte_Pim_FordVehLifeCycModPrev
# undef Rte_Pim_FordVehLifeCycModPrev
#endif
#define Rte_Pim_FordVehLifeCycModPrev() (&FordMsg3B3BusHiSpd_Pim_FordVehLifeCycModPrev)

#ifdef Rte_Pim_FordVehMsg3B3Miss
# undef Rte_Pim_FordVehMsg3B3Miss
#endif
#define Rte_Pim_FordVehMsg3B3Miss() (&FordMsg3B3BusHiSpd_Pim_FordVehMsg3B3Miss)

#ifdef Rte_Pim_FordVehMsg3B3Rxd
# undef Rte_Pim_FordVehMsg3B3Rxd
#endif
#define Rte_Pim_FordVehMsg3B3Rxd() (&FordMsg3B3BusHiSpd_Pim_FordVehMsg3B3Rxd)

#ifdef Rte_Pim_IgnStsVldFaildRefTi
# undef Rte_Pim_IgnStsVldFaildRefTi
#endif
#define Rte_Pim_IgnStsVldFaildRefTi() (&FordMsg3B3BusHiSpd_Pim_IgnStsVldFaildRefTi)

#ifdef Rte_Pim_IgnStsVldMissRefTi
# undef Rte_Pim_IgnStsVldMissRefTi
#endif
#define Rte_Pim_IgnStsVldMissRefTi() (&FordMsg3B3BusHiSpd_Pim_IgnStsVldMissRefTi)

#ifdef Rte_Pim_IgnStsVldPassdRefTi
# undef Rte_Pim_IgnStsVldPassdRefTi
#endif
#define Rte_Pim_IgnStsVldPassdRefTi() (&FordMsg3B3BusHiSpd_Pim_IgnStsVldPassdRefTi)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg3B3BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg3B3BusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
