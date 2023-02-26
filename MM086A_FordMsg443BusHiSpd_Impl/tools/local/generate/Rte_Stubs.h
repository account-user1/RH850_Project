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
extern VAR(uint8, AUTOMATIC) FordMsg443BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg443BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg443BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg443BusHiSpd_Ip_FordTrlrBackUpAssiEnad;
extern VAR(Ford_TrlrLampCnnct_B_Actl, AUTOMATIC) FordMsg443BusHiSpd_Ip_Ford_TrlrLampCnnct_B_Actl1;

/* Outputs */
extern VAR(Ford_TrlrLampCnnct_B_Actl, AUTOMATIC) FordMsg443BusHiSpd_Op_FordVehTrlrLampCnctnStsRaw;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg443BusHiSpd_Cal_FordMsg443BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg443BusHiSpd_Cal_FordMsg443BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg443BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg443BusHiSpd_Pim_FordVehMsg443Miss;
extern VAR(Ford_TrlrLampCnnct_B_Actl, AUTOMATIC) FordMsg443BusHiSpd_Pim_FordVehTrlrLampCnctnStsRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg443BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg443BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg443BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg443BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg443BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg443BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg443BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg443BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg443BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg443BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg443BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Logl
# undef Rte_Read_FordCanDtcInhb_Logl
#endif
#define Rte_Read_FordCanDtcInhb_Logl(data) (*(data) = FordMsg443BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg443BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordTrlrBackUpAssiEnad_Logl
# undef Rte_Read_FordTrlrBackUpAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = FordMsg443BusHiSpd_Ip_FordTrlrBackUpAssiEnad)

#ifdef Rte_Read_Ford_TrlrLampCnnct_B_Actl1_Val
# undef Rte_Read_Ford_TrlrLampCnnct_B_Actl1_Val
#endif
#define Rte_Read_Ford_TrlrLampCnnct_B_Actl1_Val(data) (*(data) = FordMsg443BusHiSpd_Ip_Ford_TrlrLampCnnct_B_Actl1)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehTrlrLampCnctnStsRaw_Val
# undef Rte_Write_FordVehTrlrLampCnctnStsRaw_Val
#endif
#define Rte_Write_FordVehTrlrLampCnctnStsRaw_Val(data) (FordMsg443BusHiSpd_Op_FordVehTrlrLampCnctnStsRaw = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg443BusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg443BusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg443BusHiSpdMissMsgFaildThd_Val() (FordMsg443BusHiSpd_Cal_FordMsg443BusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg443BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg443BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg443BusHiSpdMissMsgPassdThd_Val() (FordMsg443BusHiSpd_Cal_FordMsg443BusHiSpdMissMsgPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg443BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FordVehMsg443Miss
# undef Rte_Pim_FordVehMsg443Miss
#endif
#define Rte_Pim_FordVehMsg443Miss() (&FordMsg443BusHiSpd_Pim_FordVehMsg443Miss)

#ifdef Rte_Pim_FordVehTrlrLampCnctnStsRawPrev
# undef Rte_Pim_FordVehTrlrLampCnctnStsRawPrev
#endif
#define Rte_Pim_FordVehTrlrLampCnctnStsRawPrev() (&FordMsg443BusHiSpd_Pim_FordVehTrlrLampCnctnStsRawPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg443BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg443BusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
