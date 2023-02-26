/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_HwTq8Meas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_CnvSnpshtData_u08_Oper(uint32 * SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg)
{
    HwTq8Meas_Srv_CnvSnpshtData_u08_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = HwTq8Meas_Srv_CnvSnpshtData_u08_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwTq8Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwTq8Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwTq8Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetRefTmr1MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = HwTq8Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    HwTq8Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = HwTq8Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_HwTq8Offs_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    HwTq8Meas_Srv_HwTq8Offs_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return HwTq8Meas_Srv_HwTq8Offs_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_IoHwAb_SetFctPrphlHwTq8_Oper()
{
    return HwTq8Meas_Srv_IoHwAb_SetFctPrphlHwTq8_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return HwTq8Meas_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwTq8MeasInit1();
    HwTq8MeasPer1();
    HwTq8MeasPer2();
    HwTq8AutTrim_Oper();
    HwTq8ClrTrim_Oper();
    HwTq8ReadTrim_Oper(&HwTq8Meas_Cli_HwTq8ReadTrim_HwTqReadTrimData);
    HwTq8TrigStrt_Oper();
    HwTq8TrimPrfmdSts_Oper(&HwTq8Meas_Cli_HwTq8TrimPrfmdSts_HwTqOffsTrimPrfmdStsData);
    HwTq8WrTrim_Oper(HwTq8Meas_Cli_HwTq8WrTrim_HwTqWrOffsTrimData);
}

