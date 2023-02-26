/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_CurrMeas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolGainCalSetABC_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = CurrMeas_Srv_CurrMeasEolGainCalSetABC_GetErrorStatus_RequestResultPtr;
    return CurrMeas_Srv_CurrMeasEolGainCalSetABC_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolGainCalSetABC_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    CurrMeas_Srv_CurrMeasEolGainCalSetABC_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return CurrMeas_Srv_CurrMeasEolGainCalSetABC_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolOffsCalSetABC_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = CurrMeas_Srv_CurrMeasEolOffsCalSetABC_GetErrorStatus_RequestResultPtr;
    return CurrMeas_Srv_CurrMeasEolOffsCalSetABC_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_CurrMeasEolOffsCalSetABC_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    CurrMeas_Srv_CurrMeasEolOffsCalSetABC_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return CurrMeas_Srv_CurrMeasEolOffsCalSetABC_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    CurrMeas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = CurrMeas_Srv_GetNtcQlfrSts_NtcQlfr;
    return CurrMeas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CurrMeas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    CurrMeas_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    CurrMeas_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    CurrMeas_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    CurrMeas_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return CurrMeas_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    CurrMeasInit1();
    CurrMeasPer1();
    CurrMeasPer2();
    CurrMeasPer3();
    CurrMeasEolGainReq_Oper();
    CurrMeasEolGainStsReq_Oper(&CurrMeas_Cli_CurrMeasEolGainStsReq_CurrMeasEolGainSt);
    CurrMeasEolOffsReq_Oper();
    CurrMeasEolOffsStsReq_Oper(&CurrMeas_Cli_CurrMeasEolOffsStsReq_CurrMeasEolOffsSt);
    CurrMeasGainReadReqSngIvtr_Oper(&CurrMeas_Cli_CurrMeasGainReadReqSngIvtr_CurrMeasMotCurrGainA, &CurrMeas_Cli_CurrMeasGainReadReqSngIvtr_CurrMeasMotCurrGainB, &CurrMeas_Cli_CurrMeasGainReadReqSngIvtr_CurrMeasMotCurrGainC);
    CurrMeasGainWrReqSngIvtr_Oper(CurrMeas_Cli_CurrMeasGainWrReqSngIvtr_CurrMeasMotCurrGainA, CurrMeas_Cli_CurrMeasGainWrReqSngIvtr_CurrMeasMotCurrGainB, CurrMeas_Cli_CurrMeasGainWrReqSngIvtr_CurrMeasMotCurrGainC, &CurrMeas_Cli_CurrMeasGainWrReqSngIvtr_CurrMeasGainWrReqSts);
    CurrMeasOffsReadReqSngIvtr_Oper(&CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasEolOffsHiBrdgVltg, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsDifA, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsDifB, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsDifC, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsLoAvrgA, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsLoAvrgB, &CurrMeas_Cli_CurrMeasOffsReadReqSngIvtr_CurrMeasMotCurrOffsLoAvrgC);
    CurrMeasOffsWrReqSngIvtr_Oper(CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasEolOffsHiBrdgVltg, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsDifA, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsDifB, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsDifC, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsLoAvrgA, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsLoAvrgB, CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasMotCurrOffsLoAvrgC, &CurrMeas_Cli_CurrMeasOffsWrReqSngIvtr_CurrMeasOffsWrReqSts);
}

