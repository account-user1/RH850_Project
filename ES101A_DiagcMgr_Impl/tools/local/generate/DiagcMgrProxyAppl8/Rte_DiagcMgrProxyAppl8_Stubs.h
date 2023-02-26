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

#include "Dem.h"

/*** Extern Statements ***/

/* Inputs */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl8_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Pim_DiagcData8;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl8_Pim_DiagcMgrNtcInfo8Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl8_Pim_DiagcMgrNtcInfo8DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Pim_PrevClrNtcFlg8;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Pim_ProxySetNtcData8;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetDiagcDataAppl8_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcActv8_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcActv8_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcActv8_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcDebCntrAppl8_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcDebCntrAppl8_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcInfoAppl8_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcInfoAppl8_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcSts8_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcSts8_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Cli_GetNtcSts8_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcSts8_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcSts8_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl8_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl8_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData8
# undef Rte_Pim_DiagcData8
#endif
#define Rte_Pim_DiagcData8() (&DiagcMgrProxyAppl8_Pim_DiagcData8)

#ifdef Rte_Pim_DiagcMgrNtcInfo8Ary
# undef Rte_Pim_DiagcMgrNtcInfo8Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo8Ary() (&(DiagcMgrProxyAppl8_Pim_DiagcMgrNtcInfo8Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo8DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo8DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo8DebCntrAry() (&(DiagcMgrProxyAppl8_Pim_DiagcMgrNtcInfo8DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg8
# undef Rte_Pim_PrevClrNtcFlg8
#endif
#define Rte_Pim_PrevClrNtcFlg8() (&DiagcMgrProxyAppl8_Pim_PrevClrNtcFlg8)

#ifdef Rte_Pim_ProxySetNtcData8
# undef Rte_Pim_ProxySetNtcData8
#endif
#define Rte_Pim_ProxySetNtcData8() (&DiagcMgrProxyAppl8_Pim_ProxySetNtcData8)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl8_Stub(void);


#endif
