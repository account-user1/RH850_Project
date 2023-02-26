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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl4_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Pim_DiagcData4;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl4_Pim_DiagcMgrNtcInfo4Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl4_Pim_DiagcMgrNtcInfo4DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Pim_PrevClrNtcFlg4;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Pim_ProxySetNtcData4;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetDiagcDataAppl4_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcActv4_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcActv4_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcActv4_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcDebCntrAppl4_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcDebCntrAppl4_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcInfoAppl4_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcInfoAppl4_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcSts4_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcSts4_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Cli_GetNtcSts4_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcSts4_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcSts4_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl4_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl4_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData4
# undef Rte_Pim_DiagcData4
#endif
#define Rte_Pim_DiagcData4() (&DiagcMgrProxyAppl4_Pim_DiagcData4)

#ifdef Rte_Pim_DiagcMgrNtcInfo4Ary
# undef Rte_Pim_DiagcMgrNtcInfo4Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo4Ary() (&(DiagcMgrProxyAppl4_Pim_DiagcMgrNtcInfo4Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo4DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo4DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo4DebCntrAry() (&(DiagcMgrProxyAppl4_Pim_DiagcMgrNtcInfo4DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg4
# undef Rte_Pim_PrevClrNtcFlg4
#endif
#define Rte_Pim_PrevClrNtcFlg4() (&DiagcMgrProxyAppl4_Pim_PrevClrNtcFlg4)

#ifdef Rte_Pim_ProxySetNtcData4
# undef Rte_Pim_ProxySetNtcData4
#endif
#define Rte_Pim_ProxySetNtcData4() (&DiagcMgrProxyAppl4_Pim_ProxySetNtcData4)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl4_Stub(void);


#endif
