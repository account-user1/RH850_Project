/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl5.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl5_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl5_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl5_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl5_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl5_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl5_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl5_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl5_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl5_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl5_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl5_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl5_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl5_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl5_Stub(void)
{
    DiagcMgrProxyAppl5Init1();
    DiagcMgrProxyAppl5Per1();
    GetDiagcDataAppl5_Oper(&DiagcMgrProxyAppl5_Cli_GetDiagcDataAppl5_DiagcData);
    DiagcMgrProxyAppl5_Cli_GetNtcActv5_Return = GetNtcActv5_Oper(DiagcMgrProxyAppl5_Cli_GetNtcActv5_NtcNr, &DiagcMgrProxyAppl5_Cli_GetNtcActv5_NtcActv);
    GetNtcDebCntrAppl5_Oper(DiagcMgrProxyAppl5_Cli_GetNtcDebCntrAppl5_DebCntrIdx, &DiagcMgrProxyAppl5_Cli_GetNtcDebCntrAppl5_DebCntr);
    GetNtcInfoAppl5_Oper(DiagcMgrProxyAppl5_Cli_GetNtcInfoAppl5_NtcInfoIdx, &DiagcMgrProxyAppl5_Cli_GetNtcInfoAppl5_NtcInfo);
    DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_Return = GetNtcQlfrSts5_Oper(DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_NtcNr, &DiagcMgrProxyAppl5_Cli_GetNtcQlfrSts5_NtcQlfr);
    DiagcMgrProxyAppl5_Cli_GetNtcSts5_Return = GetNtcSts5_Oper(DiagcMgrProxyAppl5_Cli_GetNtcSts5_NtcNr, &DiagcMgrProxyAppl5_Cli_GetNtcSts5_NtcInfoSts);
    DiagcMgrProxyAppl5_Cli_SetNtcSts5_Return = SetNtcSts5_Oper(DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcNr, DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcStInfo, DiagcMgrProxyAppl5_Cli_SetNtcSts5_NtcSts, DiagcMgrProxyAppl5_Cli_SetNtcSts5_DebStep);
    DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_Return = SetNtcStsAndSnpshtData5_Oper(DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcNr, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcStInfo, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_NtcSts, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_DebStep, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData0, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData1, DiagcMgrProxyAppl5_Cli_SetNtcStsAndSnpshtData5_SpclSnpshtData2);
}

