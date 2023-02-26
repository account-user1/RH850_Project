/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl3.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl3_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl3_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl3_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl3_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl3_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl3_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl3_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl3_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl3_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl3_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl3_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl3_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl3_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl3_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl3_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl3_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl3_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl3_Stub(void)
{
    DiagcMgrProxyAppl3Init1();
    DiagcMgrProxyAppl3Per1();
    GetDiagcDataAppl3_Oper(&DiagcMgrProxyAppl3_Cli_GetDiagcDataAppl3_DiagcData);
    DiagcMgrProxyAppl3_Cli_GetNtcActv3_Return = GetNtcActv3_Oper(DiagcMgrProxyAppl3_Cli_GetNtcActv3_NtcNr, &DiagcMgrProxyAppl3_Cli_GetNtcActv3_NtcActv);
    GetNtcDebCntrAppl3_Oper(DiagcMgrProxyAppl3_Cli_GetNtcDebCntrAppl3_DebCntrIdx, &DiagcMgrProxyAppl3_Cli_GetNtcDebCntrAppl3_DebCntr);
    GetNtcInfoAppl3_Oper(DiagcMgrProxyAppl3_Cli_GetNtcInfoAppl3_NtcInfoIdx, &DiagcMgrProxyAppl3_Cli_GetNtcInfoAppl3_NtcInfo);
    DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_Return = GetNtcQlfrSts3_Oper(DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_NtcNr, &DiagcMgrProxyAppl3_Cli_GetNtcQlfrSts3_NtcQlfr);
    DiagcMgrProxyAppl3_Cli_GetNtcSts3_Return = GetNtcSts3_Oper(DiagcMgrProxyAppl3_Cli_GetNtcSts3_NtcNr, &DiagcMgrProxyAppl3_Cli_GetNtcSts3_NtcInfoSts);
    DiagcMgrProxyAppl3_Cli_SetNtcSts3_Return = SetNtcSts3_Oper(DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcNr, DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcStInfo, DiagcMgrProxyAppl3_Cli_SetNtcSts3_NtcSts, DiagcMgrProxyAppl3_Cli_SetNtcSts3_DebStep);
    DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_Return = SetNtcStsAndSnpshtData3_Oper(DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcNr, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcStInfo, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_NtcSts, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_DebStep, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData0, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData1, DiagcMgrProxyAppl3_Cli_SetNtcStsAndSnpshtData3_SpclSnpshtData2);
}

