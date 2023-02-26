/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_EotLrng.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_EotNvmData_GetErrorStatus(uint8 * ReqResPtr_Arg)
{
    *ReqResPtr_Arg = EotLrng_Srv_EotNvmData_GetErrorStatus_ReqResPtr;
    return EotLrng_Srv_EotNvmData_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_EotNvmData_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    EotLrng_Srv_EotNvmData_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return EotLrng_Srv_EotNvmData_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    EotLrng_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = EotLrng_Srv_GetNtcQlfrSts_NtcQlfr;
    return EotLrng_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetRefTmr100MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = EotLrng_Srv_GetRefTmr100MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    EotLrng_Srv_GetTiSpan100MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = EotLrng_Srv_GetTiSpan100MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_MaxHwAgCwAndCcw_GetErrorStatus(uint8 * ReqResPtr_Arg)
{
    *ReqResPtr_Arg = EotLrng_Srv_MaxHwAgCwAndCcw_GetErrorStatus_ReqResPtr;
    return EotLrng_Srv_MaxHwAgCwAndCcw_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_MaxHwAgCwAndCcw_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    EotLrng_Srv_MaxHwAgCwAndCcw_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return EotLrng_Srv_MaxHwAgCwAndCcw_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotLrng_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    EotLrng_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    EotLrng_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    EotLrng_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    EotLrng_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return EotLrng_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    EotLrngInit1();
    EotLrngPer1();
    GetHwAgOverTrvlCnt_Oper(&EotLrng_Cli_GetHwAgOverTrvlCnt_HwAgOverTrvlCnt);
    RstHwAgOverTrvlCnt_Oper();
    RstMaxHwAgCwAndCcw_Oper();
    RtnMaxHwAgCwAndCcw_Oper(&EotLrng_Cli_RtnMaxHwAgCwAndCcw_HwAgCcwMax, &EotLrng_Cli_RtnMaxHwAgCwAndCcw_HwAgCwMax);
    SerlComRstEot_Oper();
    SetHwAgOverTrvlCnt_Oper(EotLrng_Cli_SetHwAgOverTrvlCnt_HwAgOverTrvlCnt);
}

