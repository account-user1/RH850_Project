/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_MotCtrlPrmEstimn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotCtrlPrmEstimn_MotPrmNom_GetErrorStatus(uint8 * ReqResPtr_Arg)
{
    *ReqResPtr_Arg = MotCtrlPrmEstimn_Srv_MotPrmNom_GetErrorStatus_ReqResPtr;
    return MotCtrlPrmEstimn_Srv_MotPrmNom_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotCtrlPrmEstimn_MotPrmNom_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    MotCtrlPrmEstimn_Srv_MotPrmNom_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return MotCtrlPrmEstimn_Srv_MotPrmNom_SetRamBlockStatus_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    MotCtrlPrmEstimnInit1();
    MotCtrlPrmEstimnPer1();
    MotCtrlPrmEstimnPer2();
    GetMotPrmNomEol_Oper(&MotCtrlPrmEstimn_Cli_GetMotPrmNomEol_MotBackEmfConNom, &MotCtrlPrmEstimn_Cli_GetMotPrmNomEol_MotRNom);
    SetMotPrmNomEol_Oper(MotCtrlPrmEstimn_Cli_SetMotPrmNomEol_MotBackEmfConNom, MotCtrlPrmEstimn_Cli_SetMotPrmNomEol_MotRNom);
}

