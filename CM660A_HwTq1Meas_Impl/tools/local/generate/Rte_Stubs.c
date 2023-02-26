/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_HwTq1Meas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwTq1Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwTq1Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwTq1Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetRefTmr1MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = HwTq1Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    HwTq1Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = HwTq1Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_HwTq1Offs_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwTq1Meas_Srv_HwTq1Offs_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwTq1Meas_Srv_HwTq1Offs_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_IoHwAb_SetFctPrphlHwTq1_Oper()
{
    return HwTq1Meas_Srv_IoHwAb_SetFctPrphlHwTq1_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    HwTq1Meas_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    HwTq1Meas_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    HwTq1Meas_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    HwTq1Meas_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return HwTq1Meas_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwTq1MeasInit1();
    HwTq1MeasPer1();
    HwTq1MeasPer2();
    HwTq1MeasHwTq1AutTrim_Oper();
    HwTq1MeasHwTq1ClrTrim_Oper();
    HwTq1MeasHwTq1ReadTrim_Oper(&HwTq1Meas_Cli_HwTq1MeasHwTq1ReadTrim_HwTqReadTrimData);
    HwTq1MeasTrigStrt_Oper();
    HwTq1MeasHwTq1TrimPrfmdSts_Oper(&HwTq1Meas_Cli_HwTq1MeasHwTq1TrimPrfmdSts_HwTqOffsTrimPrfmdStsData);
    HwTq1MeasHwTq1WrTrim_Oper(HwTq1Meas_Cli_HwTq1MeasHwTq1WrTrim_HwTqWrOffsTrimData);
}

