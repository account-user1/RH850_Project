/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_FordMsg47ABusHiSpd.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_GetRefTmr100MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = FordMsg47ABusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    FordMsg47ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = FordMsg47ABusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    FordMsg47ABusHiSpd_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    FordMsg47ABusHiSpd_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return FordMsg47ABusHiSpd_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    FordMsg47ABusHiSpdInit1();
    FordMsg47ABusHiSpdPer1();
}

