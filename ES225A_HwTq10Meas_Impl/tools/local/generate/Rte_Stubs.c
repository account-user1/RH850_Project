/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_HwTq10Meas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwTq10Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwTq10Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwTq10Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_GtmGetSent1Data_Oper(uint32 * BufStrt_Ary1D)
{
    unsigned short i;
    for(i = 0; i < 32U; i++)
    {
        BufStrt_Ary1D[i] = HwTq10Meas_Srv_GtmGetSent1Data_BufStrt[i];
    }
    return HwTq10Meas_Srv_GtmGetSent1Data_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_HwTq10Offs_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = HwTq10Meas_Srv_HwTq10Offs_GetErrorStatus_RequestResultPtr;
    return HwTq10Meas_Srv_HwTq10Offs_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_HwTq10Offs_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwTq10Meas_Srv_HwTq10Offs_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwTq10Meas_Srv_HwTq10Offs_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    HwTq10Meas_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    HwTq10Meas_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    HwTq10Meas_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    HwTq10Meas_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return HwTq10Meas_Srv_SetNtcSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq10Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return HwTq10Meas_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwTq10MeasInit1();
    HwTq10MeasPer1();
    HwTq10MeasPer2();
    HwTq10MeasHwTq10AutTrim_Oper();
    HwTq10MeasHwTq10ClrTrim_Oper();
    HwTq10MeasHwTq10ReadTrim_Oper(&HwTq10Meas_Cli_HwTq10MeasHwTq10ReadTrim_HwTqReadTrimData);
    HwTq10MeasHwTq10TrimPrfmdSts_Oper(&HwTq10Meas_Cli_HwTq10MeasHwTq10TrimPrfmdSts_HwTqOffsTrimPrfmdStsData);
    HwTq10MeasHwTq10WrTrim_Oper(HwTq10Meas_Cli_HwTq10MeasHwTq10WrTrim_HwTqWrOffsTrimData);
}

