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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl1_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Pim_DiagcData1;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl1_Pim_DiagcMgrNtcInfo1Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl1_Pim_DiagcMgrNtcInfo1DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Pim_PrevClrNtcFlg1;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Pim_ProxySetNtcData1;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetDiagcDataAppl1_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcActv1_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcActv1_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcActv1_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcDebCntrAppl1_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcDebCntrAppl1_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcInfoAppl1_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcInfoAppl1_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcSts1_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcSts1_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Cli_GetNtcSts1_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcSts1_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcSts1_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl1_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl1_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData1
# undef Rte_Pim_DiagcData1
#endif
#define Rte_Pim_DiagcData1() (&DiagcMgrProxyAppl1_Pim_DiagcData1)

#ifdef Rte_Pim_DiagcMgrNtcInfo1Ary
# undef Rte_Pim_DiagcMgrNtcInfo1Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo1Ary() (&(DiagcMgrProxyAppl1_Pim_DiagcMgrNtcInfo1Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo1DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo1DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo1DebCntrAry() (&(DiagcMgrProxyAppl1_Pim_DiagcMgrNtcInfo1DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg1
# undef Rte_Pim_PrevClrNtcFlg1
#endif
#define Rte_Pim_PrevClrNtcFlg1() (&DiagcMgrProxyAppl1_Pim_PrevClrNtcFlg1)

#ifdef Rte_Pim_ProxySetNtcData1
# undef Rte_Pim_ProxySetNtcData1
#endif
#define Rte_Pim_ProxySetNtcData1() (&DiagcMgrProxyAppl1_Pim_ProxySetNtcData1)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl1_Stub(void);


#endif
