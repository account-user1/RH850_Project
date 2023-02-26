/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_ImcArbn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ImcArbn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    ImcArbn_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    ImcArbn_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    ImcArbn_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    ImcArbn_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return ImcArbn_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    ImcArbnInit1();
    ImcArbnPer1();
    ImcArbnPer2();
    ImcArbnPer3();
    ImcArbnPer4();
    ImcArbnPer5();
    ImcArbnPer6();
    ImcArbn_Cli_GetSigImcDataExtdSts_f32_Return = GetSigImcDataExtdSts_f32_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_f32_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_f32_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_f32_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_f32_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_logl_Return = GetSigImcDataExtdSts_logl_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_logl_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_logl_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_logl_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_logl_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_s08_Return = GetSigImcDataExtdSts_s08_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_s08_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_s08_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_s08_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_s08_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_s16_Return = GetSigImcDataExtdSts_s16_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_s16_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_s16_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_s16_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_s16_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_s32_Return = GetSigImcDataExtdSts_s32_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_s32_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_s32_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_s32_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_s32_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_u08_Return = GetSigImcDataExtdSts_u08_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_u08_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_u08_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_u08_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_u08_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_u16_Return = GetSigImcDataExtdSts_u16_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_u16_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_u16_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_u16_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_u16_DataSrc);
    ImcArbn_Cli_GetSigImcDataExtdSts_u32_Return = GetSigImcDataExtdSts_u32_Oper(ImcArbn_Cli_GetSigImcDataExtdSts_u32_SigId, &ImcArbn_Cli_GetSigImcDataExtdSts_u32_Data, &ImcArbn_Cli_GetSigImcDataExtdSts_u32_Sts, &ImcArbn_Cli_GetSigImcDataExtdSts_u32_DataSrc);
    ImcArbn_Cli_GetSigImcData_f32_Return = GetSigImcData_f32_Oper(ImcArbn_Cli_GetSigImcData_f32_SigId, &ImcArbn_Cli_GetSigImcData_f32_Data, &ImcArbn_Cli_GetSigImcData_f32_Sts);
    ImcArbn_Cli_GetSigImcData_logl_Return = GetSigImcData_logl_Oper(ImcArbn_Cli_GetSigImcData_logl_SigId, &ImcArbn_Cli_GetSigImcData_logl_Data, &ImcArbn_Cli_GetSigImcData_logl_Sts);
    ImcArbn_Cli_GetSigImcData_s08_Return = GetSigImcData_s08_Oper(ImcArbn_Cli_GetSigImcData_s08_SigId, &ImcArbn_Cli_GetSigImcData_s08_Data, &ImcArbn_Cli_GetSigImcData_s08_Sts);
    ImcArbn_Cli_GetSigImcData_s16_Return = GetSigImcData_s16_Oper(ImcArbn_Cli_GetSigImcData_s16_SigId, &ImcArbn_Cli_GetSigImcData_s16_Data, &ImcArbn_Cli_GetSigImcData_s16_Sts);
    ImcArbn_Cli_GetSigImcData_s32_Return = GetSigImcData_s32_Oper(ImcArbn_Cli_GetSigImcData_s32_SigId, &ImcArbn_Cli_GetSigImcData_s32_Data, &ImcArbn_Cli_GetSigImcData_s32_Sts);
    ImcArbn_Cli_GetSigImcData_u08_Return = GetSigImcData_u08_Oper(ImcArbn_Cli_GetSigImcData_u08_SigId, &ImcArbn_Cli_GetSigImcData_u08_Data, &ImcArbn_Cli_GetSigImcData_u08_Sts);
    ImcArbn_Cli_GetSigImcData_u16_Return = GetSigImcData_u16_Oper(ImcArbn_Cli_GetSigImcData_u16_SigId, &ImcArbn_Cli_GetSigImcData_u16_Data, &ImcArbn_Cli_GetSigImcData_u16_Sts);
    ImcArbn_Cli_GetSigImcData_u32_Return = GetSigImcData_u32_Oper(ImcArbn_Cli_GetSigImcData_u32_SigId, &ImcArbn_Cli_GetSigImcData_u32_Data, &ImcArbn_Cli_GetSigImcData_u32_Sts);
    ImcArbn_Cli_GetTxRateGroup_Return = GetTxRateGroup_Oper(ImcArbn_Cli_GetTxRateGroup_RateGroup, &ImcArbn_Cli_GetTxRateGroup_Buf[0]);
    ImcArbn_Cli_GetTxSigGroup_Return = GetTxSigGroup_Oper(ImcArbn_Cli_GetTxSigGroup_SigGroupId, &ImcArbn_Cli_GetTxSigGroup_Buf[0]);
    ImcArbn_Cli_SetRxSigGroup_Return = SetRxSigGroup_Oper(ImcArbn_Cli_SetRxSigGroup_SigGroup, ImcArbn_Cli_SetRxSigGroup_DataSrc, &ImcArbn_Cli_SetRxSigGroup_Buf[0]);
}

