/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl9.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl9_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl9_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl9_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl9_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl9_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl9_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl9_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl9_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl9_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl9_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl9_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl9_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl9_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl9_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl9_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl9_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl9_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl9_Stub(void)
{
    DiagcMgrProxyAppl9Init1();
    DiagcMgrProxyAppl9Per1();
    GetDiagcDataAppl9_Oper(&DiagcMgrProxyAppl9_Cli_GetDiagcDataAppl9_DiagcData);
    DiagcMgrProxyAppl9_Cli_GetNtcActv9_Return = GetNtcActv9_Oper(DiagcMgrProxyAppl9_Cli_GetNtcActv9_NtcNr, &DiagcMgrProxyAppl9_Cli_GetNtcActv9_NtcActv);
    GetNtcDebCntrAppl9_Oper(DiagcMgrProxyAppl9_Cli_GetNtcDebCntrAppl9_DebCntrIdx, &DiagcMgrProxyAppl9_Cli_GetNtcDebCntrAppl9_DebCntr);
    GetNtcInfoAppl9_Oper(DiagcMgrProxyAppl9_Cli_GetNtcInfoAppl9_NtcInfoIdx, &DiagcMgrProxyAppl9_Cli_GetNtcInfoAppl9_NtcInfo);
    DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_Return = GetNtcQlfrSts9_Oper(DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_NtcNr, &DiagcMgrProxyAppl9_Cli_GetNtcQlfrSts9_NtcQlfr);
    DiagcMgrProxyAppl9_Cli_GetNtcSts9_Return = GetNtcSts9_Oper(DiagcMgrProxyAppl9_Cli_GetNtcSts9_NtcNr, &DiagcMgrProxyAppl9_Cli_GetNtcSts9_NtcInfoSts);
    DiagcMgrProxyAppl9_Cli_SetNtcSts9_Return = SetNtcSts9_Oper(DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcNr, DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcStInfo, DiagcMgrProxyAppl9_Cli_SetNtcSts9_NtcSts, DiagcMgrProxyAppl9_Cli_SetNtcSts9_DebStep);
    DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_Return = SetNtcStsAndSnpshtData9_Oper(DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcNr, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcStInfo, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_NtcSts, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_DebStep, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData0, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData1, DiagcMgrProxyAppl9_Cli_SetNtcStsAndSnpshtData9_SpclSnpshtData2);
}

