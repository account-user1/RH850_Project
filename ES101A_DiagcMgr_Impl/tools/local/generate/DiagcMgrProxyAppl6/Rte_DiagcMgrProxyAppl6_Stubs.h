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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl6_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Pim_DiagcData6;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl6_Pim_DiagcMgrNtcInfo6Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl6_Pim_DiagcMgrNtcInfo6DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Pim_PrevClrNtcFlg6;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Pim_ProxySetNtcData6;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetDiagcDataAppl6_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcActv6_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcActv6_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcActv6_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcDebCntrAppl6_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcDebCntrAppl6_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcInfoAppl6_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcInfoAppl6_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcSts6_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcSts6_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Cli_GetNtcSts6_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcSts6_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcSts6_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl6_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl6_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData6
# undef Rte_Pim_DiagcData6
#endif
#define Rte_Pim_DiagcData6() (&DiagcMgrProxyAppl6_Pim_DiagcData6)

#ifdef Rte_Pim_DiagcMgrNtcInfo6Ary
# undef Rte_Pim_DiagcMgrNtcInfo6Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo6Ary() (&(DiagcMgrProxyAppl6_Pim_DiagcMgrNtcInfo6Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo6DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo6DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo6DebCntrAry() (&(DiagcMgrProxyAppl6_Pim_DiagcMgrNtcInfo6DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg6
# undef Rte_Pim_PrevClrNtcFlg6
#endif
#define Rte_Pim_PrevClrNtcFlg6() (&DiagcMgrProxyAppl6_Pim_PrevClrNtcFlg6)

#ifdef Rte_Pim_ProxySetNtcData6
# undef Rte_Pim_ProxySetNtcData6
#endif
#define Rte_Pim_ProxySetNtcData6() (&DiagcMgrProxyAppl6_Pim_ProxySetNtcData6)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl6_Stub(void);


#endif
