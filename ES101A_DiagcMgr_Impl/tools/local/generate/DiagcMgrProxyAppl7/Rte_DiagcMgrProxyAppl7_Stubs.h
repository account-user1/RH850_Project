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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl7_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Pim_DiagcData7;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl7_Pim_DiagcMgrNtcInfo7Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl7_Pim_DiagcMgrNtcInfo7DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Pim_PrevClrNtcFlg7;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Pim_ProxySetNtcData7;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetDiagcDataAppl7_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcActv7_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcActv7_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcActv7_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcDebCntrAppl7_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcDebCntrAppl7_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcInfoAppl7_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcInfoAppl7_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcSts7_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcSts7_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Cli_GetNtcSts7_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcSts7_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcSts7_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl7_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl7_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData7
# undef Rte_Pim_DiagcData7
#endif
#define Rte_Pim_DiagcData7() (&DiagcMgrProxyAppl7_Pim_DiagcData7)

#ifdef Rte_Pim_DiagcMgrNtcInfo7Ary
# undef Rte_Pim_DiagcMgrNtcInfo7Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo7Ary() (&(DiagcMgrProxyAppl7_Pim_DiagcMgrNtcInfo7Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo7DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo7DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo7DebCntrAry() (&(DiagcMgrProxyAppl7_Pim_DiagcMgrNtcInfo7DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg7
# undef Rte_Pim_PrevClrNtcFlg7
#endif
#define Rte_Pim_PrevClrNtcFlg7() (&DiagcMgrProxyAppl7_Pim_PrevClrNtcFlg7)

#ifdef Rte_Pim_ProxySetNtcData7
# undef Rte_Pim_ProxySetNtcData7
#endif
#define Rte_Pim_ProxySetNtcData7() (&DiagcMgrProxyAppl7_Pim_ProxySetNtcData7)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl7_Stub(void);


#endif
