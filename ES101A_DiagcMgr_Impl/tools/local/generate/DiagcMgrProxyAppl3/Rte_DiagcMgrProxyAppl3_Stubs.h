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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl3_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Pim_DiagcData3;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl3_Pim_DiagcMgrNtcInfo3Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl3_Pim_DiagcMgrNtcInfo3DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Pim_PrevClrNtcFlg3;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Pim_ProxySetNtcData3;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetDiagcDataAppl3_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcActv3_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcActv3_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcActv3_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcDebCntrAppl3_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcDebCntrAppl3_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcInfoAppl3_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcInfoAppl3_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcSts3_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcSts3_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Cli_GetNtcSts3_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcSts3_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcSts3_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl3_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl3_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData3
# undef Rte_Pim_DiagcData3
#endif
#define Rte_Pim_DiagcData3() (&DiagcMgrProxyAppl3_Pim_DiagcData3)

#ifdef Rte_Pim_DiagcMgrNtcInfo3Ary
# undef Rte_Pim_DiagcMgrNtcInfo3Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo3Ary() (&(DiagcMgrProxyAppl3_Pim_DiagcMgrNtcInfo3Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo3DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo3DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo3DebCntrAry() (&(DiagcMgrProxyAppl3_Pim_DiagcMgrNtcInfo3DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg3
# undef Rte_Pim_PrevClrNtcFlg3
#endif
#define Rte_Pim_PrevClrNtcFlg3() (&DiagcMgrProxyAppl3_Pim_PrevClrNtcFlg3)

#ifdef Rte_Pim_ProxySetNtcData3
# undef Rte_Pim_ProxySetNtcData3
#endif
#define Rte_Pim_ProxySetNtcData3() (&DiagcMgrProxyAppl3_Pim_ProxySetNtcData3)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl3_Stub(void);


#endif
