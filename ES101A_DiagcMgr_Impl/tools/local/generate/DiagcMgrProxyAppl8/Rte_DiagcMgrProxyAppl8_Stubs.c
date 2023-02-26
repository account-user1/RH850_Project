/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl8.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl8_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl8_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl8_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl8_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl8_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl8_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl8_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl8_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl8_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl8_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl8_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl8_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl8_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl8_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl8_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl8_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl8_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl8_Stub(void)
{
    DiagcMgrProxyAppl8Init1();
    DiagcMgrProxyAppl8Per1();
    GetDiagcDataAppl8_Oper(&DiagcMgrProxyAppl8_Cli_GetDiagcDataAppl8_DiagcData);
    DiagcMgrProxyAppl8_Cli_GetNtcActv8_Return = GetNtcActv8_Oper(DiagcMgrProxyAppl8_Cli_GetNtcActv8_NtcNr, &DiagcMgrProxyAppl8_Cli_GetNtcActv8_NtcActv);
    GetNtcDebCntrAppl8_Oper(DiagcMgrProxyAppl8_Cli_GetNtcDebCntrAppl8_DebCntrIdx, &DiagcMgrProxyAppl8_Cli_GetNtcDebCntrAppl8_DebCntr);
    GetNtcInfoAppl8_Oper(DiagcMgrProxyAppl8_Cli_GetNtcInfoAppl8_NtcInfoIdx, &DiagcMgrProxyAppl8_Cli_GetNtcInfoAppl8_NtcInfo);
    DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_Return = GetNtcQlfrSts8_Oper(DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_NtcNr, &DiagcMgrProxyAppl8_Cli_GetNtcQlfrSts8_NtcQlfr);
    DiagcMgrProxyAppl8_Cli_GetNtcSts8_Return = GetNtcSts8_Oper(DiagcMgrProxyAppl8_Cli_GetNtcSts8_NtcNr, &DiagcMgrProxyAppl8_Cli_GetNtcSts8_NtcInfoSts);
    DiagcMgrProxyAppl8_Cli_SetNtcSts8_Return = SetNtcSts8_Oper(DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcNr, DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcStInfo, DiagcMgrProxyAppl8_Cli_SetNtcSts8_NtcSts, DiagcMgrProxyAppl8_Cli_SetNtcSts8_DebStep);
    DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_Return = SetNtcStsAndSnpshtData8_Oper(DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcNr, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcStInfo, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_NtcSts, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_DebStep, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData0, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData1, DiagcMgrProxyAppl8_Cli_SetNtcStsAndSnpshtData8_SpclSnpshtData2);
}

