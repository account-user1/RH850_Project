/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DiagcMgrProxyAppl1.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl1_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl1_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl1_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl1_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl1_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl1_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl1_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl1_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl1_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl1_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl1_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl1_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl1_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl1_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl1_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl1_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl1_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl1_Stub(void)
{
    DiagcMgrProxyAppl1Init1();
    DiagcMgrProxyAppl1Per1();
    GetDiagcDataAppl1_Oper(&DiagcMgrProxyAppl1_Cli_GetDiagcDataAppl1_DiagcData);
    DiagcMgrProxyAppl1_Cli_GetNtcActv1_Return = GetNtcActv1_Oper(DiagcMgrProxyAppl1_Cli_GetNtcActv1_NtcNr, &DiagcMgrProxyAppl1_Cli_GetNtcActv1_NtcActv);
    GetNtcDebCntrAppl1_Oper(DiagcMgrProxyAppl1_Cli_GetNtcDebCntrAppl1_DebCntrIdx, &DiagcMgrProxyAppl1_Cli_GetNtcDebCntrAppl1_DebCntr);
    GetNtcInfoAppl1_Oper(DiagcMgrProxyAppl1_Cli_GetNtcInfoAppl1_NtcInfoIdx, &DiagcMgrProxyAppl1_Cli_GetNtcInfoAppl1_NtcInfo);
    DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_Return = GetNtcQlfrSts1_Oper(DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_NtcNr, &DiagcMgrProxyAppl1_Cli_GetNtcQlfrSts1_NtcQlfr);
    DiagcMgrProxyAppl1_Cli_GetNtcSts1_Return = GetNtcSts1_Oper(DiagcMgrProxyAppl1_Cli_GetNtcSts1_NtcNr, &DiagcMgrProxyAppl1_Cli_GetNtcSts1_NtcInfoSts);
    DiagcMgrProxyAppl1_Cli_SetNtcSts1_Return = SetNtcSts1_Oper(DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcNr, DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcStInfo, DiagcMgrProxyAppl1_Cli_SetNtcSts1_NtcSts, DiagcMgrProxyAppl1_Cli_SetNtcSts1_DebStep);
    DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_Return = SetNtcStsAndSnpshtData1_Oper(DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcNr, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcStInfo, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_NtcSts, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_DebStep, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData0, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData1, DiagcMgrProxyAppl1_Cli_SetNtcStsAndSnpshtData1_SpclSnpshtData2);
}

