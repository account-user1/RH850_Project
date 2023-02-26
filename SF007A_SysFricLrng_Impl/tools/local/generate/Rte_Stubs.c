/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_SysFricLrng.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_FricLrngData_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    SysFricLrng_Srv_FricLrngData_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return SysFricLrng_Srv_FricLrngData_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_FricNonLrngData_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    SysFricLrng_Srv_FricNonLrngData_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return SysFricLrng_Srv_FricNonLrngData_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    SysFricLrng_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = SysFricLrng_Srv_GetNtcQlfrSts_NtcQlfr;
    return SysFricLrng_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetRefTmr100MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = SysFricLrng_Srv_GetRefTmr100MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    SysFricLrng_Srv_GetTiSpan100MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = SysFricLrng_Srv_GetTiSpan100MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SysFricLrng_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    SysFricLrng_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    SysFricLrng_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    SysFricLrng_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    SysFricLrng_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return (Std_ReturnType)0U;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    SysFricLrngInit1();
    SysFricLrngPer1();
    ClrFricLrngOperMod_Oper();
    GetFricData_Oper(&SysFricLrng_Cli_GetFricData_FricOffs, &SysFricLrng_Cli_GetFricData_BasLineFric[0], &SysFricLrng_Cli_GetFricData_VehLrndFric[0], &SysFricLrng_Cli_GetFricData_Hys[0][0], &SysFricLrng_Cli_GetFricData_RngCntr[0][0]);
    GetFricLrngData_Oper(&SysFricLrng_Cli_GetFricLrngData_FricLrngEna, &SysFricLrng_Cli_GetFricLrngData_FricLrngOffsOutpEna, &SysFricLrng_Cli_GetFricLrngData_FricLrngOperMod, &SysFricLrng_Cli_GetFricLrngData_EolFric);
    GetFricOffsOutpDi_Oper(&SysFricLrng_Cli_GetFricOffsOutpDi_FricOffsOutpDi);
    InitFricLrngTbl_Oper();
    SetFricData_Oper(SysFricLrng_Cli_SetFricData_FricOffs, &SysFricLrng_Cli_SetFricData_BasLineFric[0], &SysFricLrng_Cli_SetFricData_VehLrndFric[0], &SysFricLrng_Cli_SetFricData_Hys[0][0], &SysFricLrng_Cli_SetFricData_RngCntr[0][0]);
    SetFricLrngData_Oper(SysFricLrng_Cli_SetFricLrngData_FricLrngEna, SysFricLrng_Cli_SetFricLrngData_FricLrngOffsOutpEna, SysFricLrng_Cli_SetFricLrngData_FricLrngOperMod, SysFricLrng_Cli_SetFricLrngData_EolFric);
    SetFricOffsOutpDi_Oper(SysFricLrng_Cli_SetFricOffsOutpDi_FricOffsOutpDi);
}

