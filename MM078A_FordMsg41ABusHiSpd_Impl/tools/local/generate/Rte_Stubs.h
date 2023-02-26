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
extern VAR(uint8, AUTOMATIC) FordMsg41ABusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg41ABusHiSpd_Ip_FordCanDtcInhb;
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


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg41ABusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Logl
# undef Rte_Read_FordCanDtcInhb_Logl
#endif
#define Rte_Read_FordCanDtcInhb_Logl(data) (*(data) = FordMsg41ABusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg41ABusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_Ford_Outside_Air_Temp_Stat_Val
# undef Rte_Read_Ford_Outside_Air_Temp_Stat_Val
#endif
#define Rte_Read_Ford_Outside_Air_Temp_Stat_Val(data) (*(data) = FordMsg41ABusHiSpd_Ip_Ford_Outside_Air_Temp_Stat)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehOutdAirT_Val
# undef Rte_Write_FordVehOutdAirT_Val
#endif
#define Rte_Write_FordVehOutdAirT_Val(data) (FordMsg41ABusHiSpd_Op_FordVehOutdAirT = (data))

#ifdef Rte_Write_FordVehOutdAirTRaw_Val
# undef Rte_Write_FordVehOutdAirTRaw_Val
#endif
#define Rte_Write_FordVehOutdAirTRaw_Val(data) (FordMsg41ABusHiSpd_Op_FordVehOutdAirTRaw = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg41ABusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg41ABusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg41ABusHiSpdMissMsgFaildThd_Val() (FordMsg41ABusHiSpd_Cal_FordMsg41ABusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg41ABusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg41ABusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg41ABusHiSpdMissMsgPassdThd_Val() (FordMsg41ABusHiSpd_Cal_FordMsg41ABusHiSpdMissMsgPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg41ABusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FordVehMsg41AMiss
# undef Rte_Pim_FordVehMsg41AMiss
#endif
#define Rte_Pim_FordVehMsg41AMiss() (&FordMsg41ABusHiSpd_Pim_FordVehMsg41AMiss)

#ifdef Rte_Pim_FordVehOutdAirTPrev
# undef Rte_Pim_FordVehOutdAirTPrev
#endif
#define Rte_Pim_FordVehOutdAirTPrev() (&FordMsg41ABusHiSpd_Pim_FordVehOutdAirTPrev)

#ifdef Rte_Pim_FordVehOutdAirTRawPrev
# undef Rte_Pim_FordVehOutdAirTRawPrev
#endif
#define Rte_Pim_FordVehOutdAirTRawPrev() (&FordMsg41ABusHiSpd_Pim_FordVehOutdAirTRawPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg41ABusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg41ABusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
