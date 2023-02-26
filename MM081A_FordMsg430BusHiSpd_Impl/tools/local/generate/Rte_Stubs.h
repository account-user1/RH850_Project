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
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Ip_Ford_OdometerMasterValue;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg430BusHiSpd_Op_FordVehOdom;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg430BusHiSpd_Cal_FordMsg430BusHiSpdMissMsgFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg430BusHiSpd_Cal_FordMsg430BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg430BusHiSpd_Pim_FordVehMsg430Miss;
extern VAR(boolean, AUTOMATIC) FordMsg430BusHiSpd_Pim_FordVehMsg430Rxd;
extern VAR(float32, AUTOMATIC) FordMsg430BusHiSpd_Pim_FordVehOdomPrev;
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg430BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg430BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg430BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg430BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg430BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg430BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_Ford_OdometerMasterValue_Val
# undef Rte_Read_Ford_OdometerMasterValue_Val
#endif
#define Rte_Read_Ford_OdometerMasterValue_Val(data) (*(data) = FordMsg430BusHiSpd_Ip_Ford_OdometerMasterValue)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehOdom_Val
# undef Rte_Write_FordVehOdom_Val
#endif
#define Rte_Write_FordVehOdom_Val(data) (FordMsg430BusHiSpd_Op_FordVehOdom = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg430BusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg430BusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg430BusHiSpdMissMsgFaildThd_Val() (FordMsg430BusHiSpd_Cal_FordMsg430BusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg430BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg430BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg430BusHiSpdMissMsgPassdThd_Val() (FordMsg430BusHiSpd_Cal_FordMsg430BusHiSpdMissMsgPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg430BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FordVehMsg430Miss
# undef Rte_Pim_FordVehMsg430Miss
#endif
#define Rte_Pim_FordVehMsg430Miss() (&FordMsg430BusHiSpd_Pim_FordVehMsg430Miss)

#ifdef Rte_Pim_FordVehMsg430Rxd
# undef Rte_Pim_FordVehMsg430Rxd
#endif
#define Rte_Pim_FordVehMsg430Rxd() (&FordMsg430BusHiSpd_Pim_FordVehMsg430Rxd)

#ifdef Rte_Pim_FordVehOdomPrev
# undef Rte_Pim_FordVehOdomPrev
#endif
#define Rte_Pim_FordVehOdomPrev() (&FordMsg430BusHiSpd_Pim_FordVehOdomPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg430BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg430BusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
