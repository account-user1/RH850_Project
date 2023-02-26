/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_PolarityCfg.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PolarityCfg_PolarityCfgSaved_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    PolarityCfg_Srv_PolarityCfgSaved_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return PolarityCfg_Srv_PolarityCfgSaved_SetRamBlockStatus_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    PolarityCfgInit1();
    PolarityCfg_Cli_PolarityCfgRead_Return = PolarityCfgRead_Oper(&PolarityCfg_Cli_PolarityCfgRead_PolarityCfgSaved);
    PolarityCfg_Cli_PolarityCfgWr_Return = PolarityCfgWr_Oper(PolarityCfg_Cli_PolarityCfgWr_PolarityCfgSaved);
}

