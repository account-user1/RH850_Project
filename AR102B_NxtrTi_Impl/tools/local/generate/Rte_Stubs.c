/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_NxtrTi.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_NxtrTi_ClrErrInjReg_Oper()
{
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_NxtrTi_ReadErrInjReg_Oper(uint32 * ErrId_Arg)
{
    *ErrId_Arg = NxtrTi_Srv_ReadErrInjReg_ErrId;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_NxtrTi_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    NxtrTi_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    NxtrTi_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    NxtrTi_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    NxtrTi_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return NxtrTi_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    NxtrTiInit1();
    NxtrTiPer1();
    GetRefTmr100MicroSec32bit_Oper(&NxtrTi_Cli_GetRefTmr100MicroSec32bit_RefTmr);
    GetRefTmr1MicroSec32bit_Oper(&NxtrTi_Cli_GetRefTmr1MicroSec32bit_RefTmr);
    GetTiSpan100MicroSec32bit_Oper(NxtrTi_Cli_GetTiSpan100MicroSec32bit_RefTmr, &NxtrTi_Cli_GetTiSpan100MicroSec32bit_TiSpan);
    GetTiSpan1MicroSec32bit_Oper(NxtrTi_Cli_GetTiSpan1MicroSec32bit_RefTmr, &NxtrTi_Cli_GetTiSpan1MicroSec32bit_TiSpan);
}

