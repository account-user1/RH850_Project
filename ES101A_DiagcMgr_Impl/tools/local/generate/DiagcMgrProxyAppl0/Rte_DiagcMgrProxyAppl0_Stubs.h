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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl0_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Pim_DiagcData0;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl0_Pim_DiagcMgrNtcInfo0Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl0_Pim_DiagcMgrNtcInfo0DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Pim_PrevClrNtcFlg0;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Pim_ProxySetNtcData0;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetDiagcDataAppl0_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcActv0_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcActv0_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcActv0_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcDebCntrAppl0_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcDebCntrAppl0_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcInfoAppl0_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcInfoAppl0_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcSts0_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcSts0_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Cli_GetNtcSts0_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcSts0_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcSts0_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl0_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl0_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData0
# undef Rte_Pim_DiagcData0
#endif
#define Rte_Pim_DiagcData0() (&DiagcMgrProxyAppl0_Pim_DiagcData0)

#ifdef Rte_Pim_DiagcMgrNtcInfo0Ary
# undef Rte_Pim_DiagcMgrNtcInfo0Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo0Ary() (&(DiagcMgrProxyAppl0_Pim_DiagcMgrNtcInfo0Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo0DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo0DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo0DebCntrAry() (&(DiagcMgrProxyAppl0_Pim_DiagcMgrNtcInfo0DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg0
# undef Rte_Pim_PrevClrNtcFlg0
#endif
#define Rte_Pim_PrevClrNtcFlg0() (&DiagcMgrProxyAppl0_Pim_PrevClrNtcFlg0)

#ifdef Rte_Pim_ProxySetNtcData0
# undef Rte_Pim_ProxySetNtcData0
#endif
#define Rte_Pim_ProxySetNtcData0() (&DiagcMgrProxyAppl0_Pim_ProxySetNtcData0)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl0_Stub(void);


#endif
