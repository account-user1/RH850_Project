/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_TunSelnAuthy.h"
#include "float.h"


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    TunSelnAuthyInit1();
    TunSelnAuthy_Cli_RtCalChgReq_Return = RtCalChgReq_Oper();
    TunSelnAuthy_Cli_XcpCalChgReq_Return = XcpCalChgReq_Oper();
}

