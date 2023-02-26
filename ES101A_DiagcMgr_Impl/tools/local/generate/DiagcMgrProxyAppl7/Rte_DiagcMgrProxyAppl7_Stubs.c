/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/

#include "Rte_DiagcMgrProxyAppl7.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl7_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 * NtcInfoAry_Ary1D, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg)
{
    unsigned short i;
    DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_ApplIdx = ApplIdx_Arg;
    DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_NtcInfoArySize = NtcInfoArySize_Arg;
    for(i = 0; i < 65535; i++)
    {
        DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_NtcInfoAry[i] = NtcInfoAry_Ary1D[i];
    }
    for(i = 0; i < 65535U; i++)
    {
        NtcInfoAry_Ary1D[i] = DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_NtcInfoAry[i];
    }
    *DiagcData_Arg = DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl7_Srv_DiagcMgrIninCore_ProxySetNtcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl7_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    DiagcMgrProxyAppl7_Srv_GetNtcActvCore_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = DiagcMgrProxyAppl7_Srv_GetNtcActvCore_NtcActv;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl7_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    DiagcMgrProxyAppl7_Srv_GetNtcQlfrStsCore_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = DiagcMgrProxyAppl7_Srv_GetNtcQlfrStsCore_NtcQlfr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl7_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 * NtcInfoSts_Arg)
{
    DiagcMgrProxyAppl7_Srv_GetNtcStsCore_NtcNr = NtcNr_Arg;
    *NtcInfoSts_Arg = DiagcMgrProxyAppl7_Srv_GetNtcStsCore_NtcInfoSts;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgrProxyAppl7_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 * DiagcData_Arg, DiagcDataRec2 * ProxySetNtcData_Arg, NtcInfoRec4 * NtcInfo_Arg, sint16 * NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg)
{
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcNr = NtcNr_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcStInfo = NtcStInfo_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcSts = NtcSts_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_DebStep = DebStep_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_DiagcData = *DiagcData_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_ProxySetNtcData = *ProxySetNtcData_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfo = *NtcInfo_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfoDebCntr = *NtcInfoDebCntr_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    DiagcMgrProxyAppl7_Srv_SetNtcStsCore_SpclSnpshtDataPrsnt = SpclSnpshtDataPrsnt_Arg;
    *DiagcData_Arg = DiagcMgrProxyAppl7_Srv_SetNtcStsCore_DiagcData;
    *ProxySetNtcData_Arg = DiagcMgrProxyAppl7_Srv_SetNtcStsCore_ProxySetNtcData;
    *NtcInfo_Arg = DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfo;
    *NtcInfoDebCntr_Arg = DiagcMgrProxyAppl7_Srv_SetNtcStsCore_NtcInfoDebCntr;
    return DiagcMgrProxyAppl7_Srv_SetNtcStsCore_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrProxyAppl7_Stub(void)
{
    DiagcMgrProxyAppl7Init1();
    DiagcMgrProxyAppl7Per1();
    GetDiagcDataAppl7_Oper(&DiagcMgrProxyAppl7_Cli_GetDiagcDataAppl7_DiagcData);
    DiagcMgrProxyAppl7_Cli_GetNtcActv7_Return = GetNtcActv7_Oper(DiagcMgrProxyAppl7_Cli_GetNtcActv7_NtcNr, &DiagcMgrProxyAppl7_Cli_GetNtcActv7_NtcActv);
    GetNtcDebCntrAppl7_Oper(DiagcMgrProxyAppl7_Cli_GetNtcDebCntrAppl7_DebCntrIdx, &DiagcMgrProxyAppl7_Cli_GetNtcDebCntrAppl7_DebCntr);
    GetNtcInfoAppl7_Oper(DiagcMgrProxyAppl7_Cli_GetNtcInfoAppl7_NtcInfoIdx, &DiagcMgrProxyAppl7_Cli_GetNtcInfoAppl7_NtcInfo);
    DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_Return = GetNtcQlfrSts7_Oper(DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_NtcNr, &DiagcMgrProxyAppl7_Cli_GetNtcQlfrSts7_NtcQlfr);
    DiagcMgrProxyAppl7_Cli_GetNtcSts7_Return = GetNtcSts7_Oper(DiagcMgrProxyAppl7_Cli_GetNtcSts7_NtcNr, &DiagcMgrProxyAppl7_Cli_GetNtcSts7_NtcInfoSts);
    DiagcMgrProxyAppl7_Cli_SetNtcSts7_Return = SetNtcSts7_Oper(DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcNr, DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcStInfo, DiagcMgrProxyAppl7_Cli_SetNtcSts7_NtcSts, DiagcMgrProxyAppl7_Cli_SetNtcSts7_DebStep);
    DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_Return = SetNtcStsAndSnpshtData7_Oper(DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcNr, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcStInfo, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_NtcSts, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_DebStep, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData0, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData1, DiagcMgrProxyAppl7_Cli_SetNtcStsAndSnpshtData7_SpclSnpshtData2);
}

