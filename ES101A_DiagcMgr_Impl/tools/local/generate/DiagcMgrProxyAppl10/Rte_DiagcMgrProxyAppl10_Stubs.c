/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl10.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl10_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl10_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl10_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl10_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl10_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl10_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl10_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl10_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl10_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl10_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl10_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl10_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl10_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl10_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl10_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl10_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl10_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl10_Stub(void)
{
    DiagcMgrProxyAppl10Init1();
    DiagcMgrProxyAppl10Per1();
    GetDiagcDataAppl10_Oper(&DiagcMgrProxyAppl10_Cli_GetDiagcDataAppl10_DiagcData);
    DiagcMgrProxyAppl10_Cli_GetNtcActv10_Return = GetNtcActv10_Oper(DiagcMgrProxyAppl10_Cli_GetNtcActv10_NtcNr, &DiagcMgrProxyAppl10_Cli_GetNtcActv10_NtcActv);
    GetNtcDebCntrAppl10_Oper(DiagcMgrProxyAppl10_Cli_GetNtcDebCntrAppl10_DebCntrIdx, &DiagcMgrProxyAppl10_Cli_GetNtcDebCntrAppl10_DebCntr);
    GetNtcInfoAppl10_Oper(DiagcMgrProxyAppl10_Cli_GetNtcInfoAppl10_NtcInfoIdx, &DiagcMgrProxyAppl10_Cli_GetNtcInfoAppl10_NtcInfo);
    DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_Return = GetNtcQlfrSts10_Oper(DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_NtcNr, &DiagcMgrProxyAppl10_Cli_GetNtcQlfrSts10_NtcQlfr);
    DiagcMgrProxyAppl10_Cli_GetNtcSts10_Return = GetNtcSts10_Oper(DiagcMgrProxyAppl10_Cli_GetNtcSts10_NtcNr, &DiagcMgrProxyAppl10_Cli_GetNtcSts10_NtcInfoSts);
    DiagcMgrProxyAppl10_Cli_SetNtcSts10_Return = SetNtcSts10_Oper(DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcNr, DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcStInfo, DiagcMgrProxyAppl10_Cli_SetNtcSts10_NtcSts, DiagcMgrProxyAppl10_Cli_SetNtcSts10_DebStep);
    DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_Return = SetNtcStsAndSnpshtData10_Oper(DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcNr, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcStInfo, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_NtcSts, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_DebStep, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData0, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData1, DiagcMgrProxyAppl10_Cli_SetNtcStsAndSnpshtData10_SpclSnpshtData2);
}

