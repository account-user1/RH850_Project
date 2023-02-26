/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_FlsMem.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    FlsMem_Srv_GetTiSpan100MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = FlsMem_Srv_GetTiSpan100MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 * CrcHwInRegAdr_Arg, uint32 * CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint32 * ResvKey_Arg)
{
    FlsMem_Srv_ResvCrcHwUnit_Mod = Mod_Arg;
    FlsMem_Srv_ResvCrcHwUnit_CrcCfg = CrcCfg_Arg;
    FlsMem_Srv_ResvCrcHwUnit_StrtVal = StrtVal_Arg;
    FlsMem_Srv_ResvCrcHwUnit_ResvKey = *ResvKey_Arg;
    *CrcHwInRegAdr_Arg = FlsMem_Srv_ResvCrcHwUnit_CrcHwInRegAdr;
    *CrcHwOutRegAdr_Arg = FlsMem_Srv_ResvCrcHwUnit_CrcHwOutRegAdr;
    *ResvKey_Arg = FlsMem_Srv_ResvCrcHwUnit_ResvKey;
    return FlsMem_Srv_ResvCrcHwUnit_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    FlsMem_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    FlsMem_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    FlsMem_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    FlsMem_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return FlsMem_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    CodFlsSngBitEcc();
    FlsMemInit1();
    FlsMemInit2();
    FlsMemPer1();
}

