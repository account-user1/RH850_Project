/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl4.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl4_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl4_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl4_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl4_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl4_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl4_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl4_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl4_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl4_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl4_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl4_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl4_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl4_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl4_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl4_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl4_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl4_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl4_Stub(void)
{
    DiagcMgrProxyAppl4Init1();
    DiagcMgrProxyAppl4Per1();
    GetDiagcDataAppl4_Oper(&DiagcMgrProxyAppl4_Cli_GetDiagcDataAppl4_DiagcData);
    DiagcMgrProxyAppl4_Cli_GetNtcActv4_Return = GetNtcActv4_Oper(DiagcMgrProxyAppl4_Cli_GetNtcActv4_NtcNr, &DiagcMgrProxyAppl4_Cli_GetNtcActv4_NtcActv);
    GetNtcDebCntrAppl4_Oper(DiagcMgrProxyAppl4_Cli_GetNtcDebCntrAppl4_DebCntrIdx, &DiagcMgrProxyAppl4_Cli_GetNtcDebCntrAppl4_DebCntr);
    GetNtcInfoAppl4_Oper(DiagcMgrProxyAppl4_Cli_GetNtcInfoAppl4_NtcInfoIdx, &DiagcMgrProxyAppl4_Cli_GetNtcInfoAppl4_NtcInfo);
    DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_Return = GetNtcQlfrSts4_Oper(DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_NtcNr, &DiagcMgrProxyAppl4_Cli_GetNtcQlfrSts4_NtcQlfr);
    DiagcMgrProxyAppl4_Cli_GetNtcSts4_Return = GetNtcSts4_Oper(DiagcMgrProxyAppl4_Cli_GetNtcSts4_NtcNr, &DiagcMgrProxyAppl4_Cli_GetNtcSts4_NtcInfoSts);
    DiagcMgrProxyAppl4_Cli_SetNtcSts4_Return = SetNtcSts4_Oper(DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcNr, DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcStInfo, DiagcMgrProxyAppl4_Cli_SetNtcSts4_NtcSts, DiagcMgrProxyAppl4_Cli_SetNtcSts4_DebStep);
    DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_Return = SetNtcStsAndSnpshtData4_Oper(DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcNr, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcStInfo, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_NtcSts, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_DebStep, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData0, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData1, DiagcMgrProxyAppl4_Cli_SetNtcStsAndSnpshtData4_SpclSnpshtData2);
}

