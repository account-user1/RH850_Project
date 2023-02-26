/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_SyncCrc.h"
#include "float.h"


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    SyncCrcInit0();
    SyncCrcInit1();
    SyncCrc_Cli_Calc16BitCrc_u08_Return = Calc16BitCrc_u08_Oper(SyncCrc_Cli_Calc16BitCrc_u08_DataPtr, SyncCrc_Cli_Calc16BitCrc_u08_Len, SyncCrc_Cli_Calc16BitCrc_u08_StrtVal, SyncCrc_Cli_Calc16BitCrc_u08_FirstCall, &SyncCrc_Cli_Calc16BitCrc_u08_CalcCrcRes);
    SyncCrc_Cli_Calc16BitCrc_u16_Return = Calc16BitCrc_u16_Oper(SyncCrc_Cli_Calc16BitCrc_u16_DataPtr, SyncCrc_Cli_Calc16BitCrc_u16_Len, SyncCrc_Cli_Calc16BitCrc_u16_StrtVal, SyncCrc_Cli_Calc16BitCrc_u16_FirstCall, &SyncCrc_Cli_Calc16BitCrc_u16_CalcCrcRes);
    SyncCrc_Cli_Calc32BitCrc_u08_Return = Calc32BitCrc_u08_Oper(SyncCrc_Cli_Calc32BitCrc_u08_DataPtr, SyncCrc_Cli_Calc32BitCrc_u08_Len, SyncCrc_Cli_Calc32BitCrc_u08_StrtVal, SyncCrc_Cli_Calc32BitCrc_u08_FirstCall, &SyncCrc_Cli_Calc32BitCrc_u08_CalcCrcRes);
    SyncCrc_Cli_Calc32BitCrc_u16_Return = Calc32BitCrc_u16_Oper(SyncCrc_Cli_Calc32BitCrc_u16_DataPtr, SyncCrc_Cli_Calc32BitCrc_u16_Len, SyncCrc_Cli_Calc32BitCrc_u16_StrtVal, SyncCrc_Cli_Calc32BitCrc_u16_FirstCall, &SyncCrc_Cli_Calc32BitCrc_u16_CalcCrcRes);
    SyncCrc_Cli_Calc32BitCrc_u32_Return = Calc32BitCrc_u32_Oper(SyncCrc_Cli_Calc32BitCrc_u32_DataPtr, SyncCrc_Cli_Calc32BitCrc_u32_Len, SyncCrc_Cli_Calc32BitCrc_u32_StrtVal, SyncCrc_Cli_Calc32BitCrc_u32_FirstCall, &SyncCrc_Cli_Calc32BitCrc_u32_CalcCrcRes);
    SyncCrc_Cli_Calc8BitCrc_Return = Calc8BitCrc_Oper(SyncCrc_Cli_Calc8BitCrc_DataPtr, SyncCrc_Cli_Calc8BitCrc_Len, SyncCrc_Cli_Calc8BitCrc_StrtVal, SyncCrc_Cli_Calc8BitCrc_FirstCall, &SyncCrc_Cli_Calc8BitCrc_CalcCrcRes);
    SyncCrc_Cli_Calc8BitCrc0X2F_Return = Calc8BitCrc0X2F_Oper(SyncCrc_Cli_Calc8BitCrc0X2F_DataPtr, SyncCrc_Cli_Calc8BitCrc0X2F_Len, SyncCrc_Cli_Calc8BitCrc0X2F_StrtVal, SyncCrc_Cli_Calc8BitCrc0X2F_FirstCall, &SyncCrc_Cli_Calc8BitCrc0X2F_CalcCrcRes);
    SyncCrc_Cli_ResvCrcHwUnit_Return = ResvCrcHwUnit_Oper(SyncCrc_Cli_ResvCrcHwUnit_Mod, SyncCrc_Cli_ResvCrcHwUnit_CrcCfg, &SyncCrc_Cli_ResvCrcHwUnit_CrcHwInRegAdr, &SyncCrc_Cli_ResvCrcHwUnit_CrcHwOutRegAdr, SyncCrc_Cli_ResvCrcHwUnit_StrtVal, &SyncCrc_Cli_ResvCrcHwUnit_ResvKey);
}

