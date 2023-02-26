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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl10_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Pim_DiagcData10;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl10_Pim_DiagcMgrNtcInfo10Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl10_Pim_DiagcMgrNtcInfo10DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Pim_PrevClrNtcFlg10;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Pim_ProxySetNtcData10;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetDiagcDataAppl10_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcActv10_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcActv10_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcActv10_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcDebCntrAppl10_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcDebCntrAppl10_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcInfoAppl10_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcInfoAppl10_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcSts10_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcSts10_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Cli_GetNtcSts10_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcSts10_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcSts10_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl10_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl10_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData10
# undef Rte_Pim_DiagcData10
#endif
#define Rte_Pim_DiagcData10() (&DiagcMgrProxyAppl10_Pim_DiagcData10)

#ifdef Rte_Pim_DiagcMgrNtcInfo10Ary
# undef Rte_Pim_DiagcMgrNtcInfo10Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo10Ary() (&(DiagcMgrProxyAppl10_Pim_DiagcMgrNtcInfo10Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo10DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo10DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo10DebCntrAry() (&(DiagcMgrProxyAppl10_Pim_DiagcMgrNtcInfo10DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg10
# undef Rte_Pim_PrevClrNtcFlg10
#endif
#define Rte_Pim_PrevClrNtcFlg10() (&DiagcMgrProxyAppl10_Pim_PrevClrNtcFlg10)

#ifdef Rte_Pim_ProxySetNtcData10
# undef Rte_Pim_ProxySetNtcData10
#endif
#define Rte_Pim_ProxySetNtcData10() (&DiagcMgrProxyAppl10_Pim_ProxySetNtcData10)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl10_Stub(void);


#endif
