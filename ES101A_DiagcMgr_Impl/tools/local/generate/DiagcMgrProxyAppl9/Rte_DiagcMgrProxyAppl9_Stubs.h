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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl9_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Pim_DiagcData9;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl9_Pim_DiagcMgrNtcInfo9Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl9_Pim_DiagcMgrNtcInfo9DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Pim_PrevClrNtcFlg9;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Pim_ProxySetNtcData9;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetDiagcDataAppl9_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcActv9_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcActv9_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcActv9_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcDebCntrAppl9_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcDebCntrAppl9_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcInfoAppl9_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcInfoAppl9_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcSts9_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcSts9_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Cli_GetNtcSts9_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcSts9_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcSts9_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl9_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl9_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData9
# undef Rte_Pim_DiagcData9
#endif
#define Rte_Pim_DiagcData9() (&DiagcMgrProxyAppl9_Pim_DiagcData9)

#ifdef Rte_Pim_DiagcMgrNtcInfo9Ary
# undef Rte_Pim_DiagcMgrNtcInfo9Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo9Ary() (&(DiagcMgrProxyAppl9_Pim_DiagcMgrNtcInfo9Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo9DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo9DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo9DebCntrAry() (&(DiagcMgrProxyAppl9_Pim_DiagcMgrNtcInfo9DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg9
# undef Rte_Pim_PrevClrNtcFlg9
#endif
#define Rte_Pim_PrevClrNtcFlg9() (&DiagcMgrProxyAppl9_Pim_PrevClrNtcFlg9)

#ifdef Rte_Pim_ProxySetNtcData9
# undef Rte_Pim_ProxySetNtcData9
#endif
#define Rte_Pim_ProxySetNtcData9() (&DiagcMgrProxyAppl9_Pim_ProxySetNtcData9)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl9_Stub(void);


#endif
