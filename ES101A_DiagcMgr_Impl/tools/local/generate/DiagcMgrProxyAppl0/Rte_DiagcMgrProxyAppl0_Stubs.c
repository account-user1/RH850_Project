/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DiagcMgrProxyAppl0.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl0_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl0_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl0_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl0_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl0_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl0_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl0_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl0_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl0_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl0_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl0_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl0_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl0_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl0_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl0_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl0_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl0_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl0_Stub(void)
{
    DiagcMgrProxyAppl0Init1();
    DiagcMgrProxyAppl0Per1();
    GetDiagcDataAppl0_Oper(&DiagcMgrProxyAppl0_Cli_GetDiagcDataAppl0_DiagcData);
    DiagcMgrProxyAppl0_Cli_GetNtcActv0_Return = GetNtcActv0_Oper(DiagcMgrProxyAppl0_Cli_GetNtcActv0_NtcNr, &DiagcMgrProxyAppl0_Cli_GetNtcActv0_NtcActv);
    GetNtcDebCntrAppl0_Oper(DiagcMgrProxyAppl0_Cli_GetNtcDebCntrAppl0_DebCntrIdx, &DiagcMgrProxyAppl0_Cli_GetNtcDebCntrAppl0_DebCntr);
    GetNtcInfoAppl0_Oper(DiagcMgrProxyAppl0_Cli_GetNtcInfoAppl0_NtcInfoIdx, &DiagcMgrProxyAppl0_Cli_GetNtcInfoAppl0_NtcInfo);
    DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_Return = GetNtcQlfrSts0_Oper(DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_NtcNr, &DiagcMgrProxyAppl0_Cli_GetNtcQlfrSts0_NtcQlfr);
    DiagcMgrProxyAppl0_Cli_GetNtcSts0_Return = GetNtcSts0_Oper(DiagcMgrProxyAppl0_Cli_GetNtcSts0_NtcNr, &DiagcMgrProxyAppl0_Cli_GetNtcSts0_NtcInfoSts);
    DiagcMgrProxyAppl0_Cli_SetNtcSts0_Return = SetNtcSts0_Oper(DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcNr, DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcStInfo, DiagcMgrProxyAppl0_Cli_SetNtcSts0_NtcSts, DiagcMgrProxyAppl0_Cli_SetNtcSts0_DebStep);
    DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_Return = SetNtcStsAndSnpshtData0_Oper(DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcNr, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcStInfo, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_NtcSts, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_DebStep, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData0, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData1, DiagcMgrProxyAppl0_Cli_SetNtcStsAndSnpshtData0_SpclSnpshtData2);
}

