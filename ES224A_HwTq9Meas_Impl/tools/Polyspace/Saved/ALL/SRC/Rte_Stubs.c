/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_HwTq9Meas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwTq9Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwTq9Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_GtmGetSent0Data_Oper(uint32 * BufStrtAdr_Ary1D)
{
    unsigned short i;
    for(i = 0; i < 32; i++)
    {
        HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr[i] = (BufStrtAdr_Ary1D)[i];
    }
    for(i = 0; i < 32U; i++)
    {
        (BufStrtAdr_Ary1D)[i] = HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr[i];
    }
    return HwTq9Meas_Srv_GtmGetSent0Data_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_HwTq9Offs_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    HwTq9Meas_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    HwTq9Meas_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    HwTq9Meas_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    HwTq9Meas_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return HwTq9Meas_Srv_SetNtcSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_HwTq9Offs_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr;
    return HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwTq9MeasInit1();
    HwTq9MeasPer1();
    HwTq9MeasPer2();
    HwTq9MeasHwTq9AutTrim_Oper();
    HwTq9MeasHwTq9ClrTrim_Oper();
    HwTq9MeasHwTq9ReadTrim_Oper(&HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData);
    HwTq9MeasHwTq9TrimPrfmdSts_Oper(&HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData);
    HwTq9MeasHwTq9WrTrim_Oper(HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData);
}

