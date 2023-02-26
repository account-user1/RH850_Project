/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl6.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl6_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl6_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl6_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl6_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl6_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl6_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl6_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl6_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl6_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl6_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl6_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl6_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl6_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl6_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl6_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl6_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl6_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl6_Stub(void)
{
    DiagcMgrProxyAppl6Init1();
    DiagcMgrProxyAppl6Per1();
    GetDiagcDataAppl6_Oper(&DiagcMgrProxyAppl6_Cli_GetDiagcDataAppl6_DiagcData);
    DiagcMgrProxyAppl6_Cli_GetNtcActv6_Return = GetNtcActv6_Oper(DiagcMgrProxyAppl6_Cli_GetNtcActv6_NtcNr, &DiagcMgrProxyAppl6_Cli_GetNtcActv6_NtcActv);
    GetNtcDebCntrAppl6_Oper(DiagcMgrProxyAppl6_Cli_GetNtcDebCntrAppl6_DebCntrIdx, &DiagcMgrProxyAppl6_Cli_GetNtcDebCntrAppl6_DebCntr);
    GetNtcInfoAppl6_Oper(DiagcMgrProxyAppl6_Cli_GetNtcInfoAppl6_NtcInfoIdx, &DiagcMgrProxyAppl6_Cli_GetNtcInfoAppl6_NtcInfo);
    DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_Return = GetNtcQlfrSts6_Oper(DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_NtcNr, &DiagcMgrProxyAppl6_Cli_GetNtcQlfrSts6_NtcQlfr);
    DiagcMgrProxyAppl6_Cli_GetNtcSts6_Return = GetNtcSts6_Oper(DiagcMgrProxyAppl6_Cli_GetNtcSts6_NtcNr, &DiagcMgrProxyAppl6_Cli_GetNtcSts6_NtcInfoSts);
    DiagcMgrProxyAppl6_Cli_SetNtcSts6_Return = SetNtcSts6_Oper(DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcNr, DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcStInfo, DiagcMgrProxyAppl6_Cli_SetNtcSts6_NtcSts, DiagcMgrProxyAppl6_Cli_SetNtcSts6_DebStep);
    DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_Return = SetNtcStsAndSnpshtData6_Oper(DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcNr, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcStInfo, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_NtcSts, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_DebStep, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData0, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData1, DiagcMgrProxyAppl6_Cli_SetNtcStsAndSnpshtData6_SpclSnpshtData2);
}

