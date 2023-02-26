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
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Ip_Ford_VehGGCCData;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg40ABusHiSpd_Op_FordVehGlbRealTi;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Op_FordVehIdnNr;
extern VAR(float32, AUTOMATIC) FordMsg40ABusHiSpd_Op_FordVehTireCircum;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg40ABusHiSpd_Cal_FordMsg40ABusHiSpdMissMsgFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg40ABusHiSpd_Cal_FordMsg40ABusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordClrDiagcFlgProxyPrev;
extern VAR(float32, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehGlbRealTiPrev;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehIdnNrC100Prev[6];
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehIdnNrC101Prev[6];
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehIdnNrC102Prev[5];
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehIdnNrPrev[17];
extern VAR(boolean, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehMsg40AMiss;
extern VAR(boolean, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehMsg40ARxd;
extern VAR(float32, AUTOMATIC) FordMsg40ABusHiSpd_Pim_FordVehTireCircumPrev;
extern VAR(uint32, AUTOMATIC) FordMsg40ABusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg40ABusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg40ABusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg40ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg40ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg40ABusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg40ABusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg40ABusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg40ABusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg40ABusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_Ford_VehGGCCData_Val
# undef Rte_Read_Ford_VehGGCCData_Val
#endif
#define Rte_Read_Ford_VehGGCCData_Val(data) (*(data) = FordMsg40ABusHiSpd_Ip_Ford_VehGGCCData)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehGlbRealTi_Val
# undef Rte_Write_FordVehGlbRealTi_Val
#endif
#define Rte_Write_FordVehGlbRealTi_Val(data) (FordMsg40ABusHiSpd_Op_FordVehGlbRealTi = (data))

#ifdef Rte_Write_FordVehIdnNr_Val
# undef Rte_Write_FordVehIdnNr_Val
#endif
#define Rte_Write_FordVehIdnNr_Val(data) (FordMsg40ABusHiSpd_Op_FordVehIdnNr = (data))

#ifdef Rte_Write_FordVehTireCircum_Val
# undef Rte_Write_FordVehTireCircum_Val
#endif
#define Rte_Write_FordVehTireCircum_Val(data) (FordMsg40ABusHiSpd_Op_FordVehTireCircum = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val() (FordMsg40ABusHiSpd_Cal_FordMsg40ABusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val() (FordMsg40ABusHiSpd_Cal_FordMsg40ABusHiSpdMissMsgPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FordClrDiagcFlgProxyPrev
# undef Rte_Pim_FordClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_FordClrDiagcFlgProxyPrev() (&FordMsg40ABusHiSpd_Pim_FordClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FordVehGlbRealTiPrev
# undef Rte_Pim_FordVehGlbRealTiPrev
#endif
#define Rte_Pim_FordVehGlbRealTiPrev() (&FordMsg40ABusHiSpd_Pim_FordVehGlbRealTiPrev)

#ifdef Rte_Pim_FordVehIdnNrC100Prev
# undef Rte_Pim_FordVehIdnNrC100Prev
#endif
#define Rte_Pim_FordVehIdnNrC100Prev() (&(FordMsg40ABusHiSpd_Pim_FordVehIdnNrC100Prev[0]))

#ifdef Rte_Pim_FordVehIdnNrC101Prev
# undef Rte_Pim_FordVehIdnNrC101Prev
#endif
#define Rte_Pim_FordVehIdnNrC101Prev() (&(FordMsg40ABusHiSpd_Pim_FordVehIdnNrC101Prev[0]))

#ifdef Rte_Pim_FordVehIdnNrC102Prev
# undef Rte_Pim_FordVehIdnNrC102Prev
#endif
#define Rte_Pim_FordVehIdnNrC102Prev() (&(FordMsg40ABusHiSpd_Pim_FordVehIdnNrC102Prev[0]))

#ifdef Rte_Pim_FordVehIdnNrPrev
# undef Rte_Pim_FordVehIdnNrPrev
#endif
#define Rte_Pim_FordVehIdnNrPrev() (&(FordMsg40ABusHiSpd_Pim_FordVehIdnNrPrev[0]))

#ifdef Rte_Pim_FordVehMsg40AMiss
# undef Rte_Pim_FordVehMsg40AMiss
#endif
#define Rte_Pim_FordVehMsg40AMiss() (&FordMsg40ABusHiSpd_Pim_FordVehMsg40AMiss)

#ifdef Rte_Pim_FordVehMsg40ARxd
# undef Rte_Pim_FordVehMsg40ARxd
#endif
#define Rte_Pim_FordVehMsg40ARxd() (&FordMsg40ABusHiSpd_Pim_FordVehMsg40ARxd)

#ifdef Rte_Pim_FordVehTireCircumPrev
# undef Rte_Pim_FordVehTireCircumPrev
#endif
#define Rte_Pim_FordVehTireCircumPrev() (&FordMsg40ABusHiSpd_Pim_FordVehTireCircumPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg40ABusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg40ABusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
