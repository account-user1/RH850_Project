/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_HwAg1Meas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwAg1Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwAg1Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwAg1Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetRefTmr1MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = HwAg1Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    HwAg1Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = HwAg1Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1IfFltLtch_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = HwAg1Meas_Srv_HwAg1IfFltLtch_GetErrorStatus_RequestResultPtr;
    return HwAg1Meas_Srv_HwAg1IfFltLtch_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1IfFltLtch_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwAg1Meas_Srv_HwAg1IfFltLtch_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwAg1Meas_Srv_HwAg1IfFltLtch_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1Offs_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = HwAg1Meas_Srv_HwAg1Offs_GetErrorStatus_RequestResultPtr;
    return HwAg1Meas_Srv_HwAg1Offs_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_HwAg1Offs_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwAg1Meas_Srv_HwAg1Offs_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwAg1Meas_Srv_HwAg1Offs_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_IoHwAb_SetFctPrphlHwAg1_Oper()
{
    return HwAg1Meas_Srv_IoHwAb_SetFctPrphlHwAg1_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAg1Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    HwAg1Meas_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    HwAg1Meas_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    HwAg1Meas_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    HwAg1Meas_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return HwAg1Meas_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwAg1MeasInit1();
    HwAg1MeasPer1();
    HwAg1MeasPer2();
    HwAg1MeasPer3();
    HwAg1MeasPer4();
    HwAg1MeasPer5();
    HwAg1AutTrim_Oper();
    HwAg1ClrLtch_Oper();
    HwAg1ClrTrim_Oper();
    HwAg1ReadTrim_Oper(&HwAg1Meas_Cli_HwAg1ReadTrim_HwAgReadTrimData);
    HwAg1TrimPrfmdSts_Oper(&HwAg1Meas_Cli_HwAg1TrimPrfmdSts_HwAgOffsTrimPrfmdStsData);
    HwAg1WrTrim_Oper(HwAg1Meas_Cli_HwAg1WrTrim_HwAgWrOffsTrimData);
}

