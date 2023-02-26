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
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Ip_ClrDiagcFlgProxy;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgrProxyAppl2_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Pim_DiagcData2;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl2_Pim_DiagcMgrNtcInfo2Ary[65535];
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl2_Pim_DiagcMgrNtcInfo2DebCntrAry[512];
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Pim_PrevClrNtcFlg2;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Pim_ProxySetNtcData2;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Srv_GetNtcStsCore_NtcInfoSts;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Srv_SetNtcStsCore_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetDiagcDataAppl2_DiagcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcActv2_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcActv2_NtcActv;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcActv2_Return;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcDebCntrAppl2_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcDebCntrAppl2_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcInfoAppl2_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcInfoAppl2_NtcInfo;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcSts2_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcSts2_NtcInfoSts;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Cli_GetNtcSts2_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcSts2_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcSts2_Return;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_DebStep;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = DiagcMgrProxyAppl2_Ip_ClrDiagcFlgProxy)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgrProxyAppl2_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcData2
# undef Rte_Pim_DiagcData2
#endif
#define Rte_Pim_DiagcData2() (&DiagcMgrProxyAppl2_Pim_DiagcData2)

#ifdef Rte_Pim_DiagcMgrNtcInfo2Ary
# undef Rte_Pim_DiagcMgrNtcInfo2Ary
#endif
#define Rte_Pim_DiagcMgrNtcInfo2Ary() (&(DiagcMgrProxyAppl2_Pim_DiagcMgrNtcInfo2Ary[0]))

#ifdef Rte_Pim_DiagcMgrNtcInfo2DebCntrAry
# undef Rte_Pim_DiagcMgrNtcInfo2DebCntrAry
#endif
#define Rte_Pim_DiagcMgrNtcInfo2DebCntrAry() (&(DiagcMgrProxyAppl2_Pim_DiagcMgrNtcInfo2DebCntrAry[0]))

#ifdef Rte_Pim_PrevClrNtcFlg2
# undef Rte_Pim_PrevClrNtcFlg2
#endif
#define Rte_Pim_PrevClrNtcFlg2() (&DiagcMgrProxyAppl2_Pim_PrevClrNtcFlg2)

#ifdef Rte_Pim_ProxySetNtcData2
# undef Rte_Pim_ProxySetNtcData2
#endif
#define Rte_Pim_ProxySetNtcData2() (&DiagcMgrProxyAppl2_Pim_ProxySetNtcData2)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl2_Stub(void);


#endif
