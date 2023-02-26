/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl2.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl2_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl2_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl2_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl2_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl2_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl2_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl2_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl2_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl2_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl2_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl2_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl2_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl2_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl2_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl2_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl2_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl2_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl2_Stub(void)
{
    DiagcMgrProxyAppl2Init1();
    DiagcMgrProxyAppl2Per1();
    GetDiagcDataAppl2_Oper(&DiagcMgrProxyAppl2_Cli_GetDiagcDataAppl2_DiagcData);
    DiagcMgrProxyAppl2_Cli_GetNtcActv2_Return = GetNtcActv2_Oper(DiagcMgrProxyAppl2_Cli_GetNtcActv2_NtcNr, &DiagcMgrProxyAppl2_Cli_GetNtcActv2_NtcActv);
    GetNtcDebCntrAppl2_Oper(DiagcMgrProxyAppl2_Cli_GetNtcDebCntrAppl2_DebCntrIdx, &DiagcMgrProxyAppl2_Cli_GetNtcDebCntrAppl2_DebCntr);
    GetNtcInfoAppl2_Oper(DiagcMgrProxyAppl2_Cli_GetNtcInfoAppl2_NtcInfoIdx, &DiagcMgrProxyAppl2_Cli_GetNtcInfoAppl2_NtcInfo);
    DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_Return = GetNtcQlfrSts2_Oper(DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_NtcNr, &DiagcMgrProxyAppl2_Cli_GetNtcQlfrSts2_NtcQlfr);
    DiagcMgrProxyAppl2_Cli_GetNtcSts2_Return = GetNtcSts2_Oper(DiagcMgrProxyAppl2_Cli_GetNtcSts2_NtcNr, &DiagcMgrProxyAppl2_Cli_GetNtcSts2_NtcInfoSts);
    DiagcMgrProxyAppl2_Cli_SetNtcSts2_Return = SetNtcSts2_Oper(DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcNr, DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcStInfo, DiagcMgrProxyAppl2_Cli_SetNtcSts2_NtcSts, DiagcMgrProxyAppl2_Cli_SetNtcSts2_DebStep);
    DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_Return = SetNtcStsAndSnpshtData2_Oper(DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcNr, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcStInfo, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_NtcSts, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_DebStep, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData0, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData1, DiagcMgrProxyAppl2_Cli_SetNtcStsAndSnpshtData2_SpclSnpshtData2);
}

