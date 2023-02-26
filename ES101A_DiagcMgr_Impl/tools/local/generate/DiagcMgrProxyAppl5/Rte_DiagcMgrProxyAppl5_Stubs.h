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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl5_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Pim_DiagcData5;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl5_Pim_DiagcMgrNtcInfo5Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl5_Pim_DiagcMgrNtcInfo5DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Pim_PrevClrNtcFlg5;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Pim_ProxySetNtcData5;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetDiagcDataAppl5_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcActv5_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcActv5_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcActv5_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcDebCntrAppl5_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcDebCntrAppl5_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcInfoAppl5_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcInfoAppl5_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcSts5_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcSts5_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Cli_GetNtcSts5_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcSts5_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcSts5_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl5_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl5_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData5
# undef Rte_Pim_DiagcData5
#endif
#define Rte_Pim_DiagcData5() (&DiagcMgrProxyAppl5_Pim_DiagcData5)

#ifdef Rte_Pim_DiagcMgrNtcInfo5Ary
# undef Rte_Pim_DiagcMgrNtcInfo5Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo5Ary() (&(DiagcMgrProxyAppl5_Pim_DiagcMgrNtcInfo5Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo5DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo5DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo5DebCntrAry() (&(DiagcMgrProxyAppl5_Pim_DiagcMgrNtcInfo5DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg5
# undef Rte_Pim_PrevClrNtcFlg5
#endif
#define Rte_Pim_PrevClrNtcFlg5() (&DiagcMgrProxyAppl5_Pim_PrevClrNtcFlg5)

#ifdef Rte_Pim_ProxySetNtcData5
# undef Rte_Pim_ProxySetNtcData5
#endif
#define Rte_Pim_ProxySetNtcData5() (&DiagcMgrProxyAppl5_Pim_ProxySetNtcData5)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl5_Stub(void);


#endif
