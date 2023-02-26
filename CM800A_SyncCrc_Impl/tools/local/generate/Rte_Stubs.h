/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

/* PIMs */
extern VAR(CrcHwStsRec2, AUTOMATIC) SyncCrc_Pim_CrcHwSts[8];

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_Len;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_FirstCall;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u08_Return;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_Len;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_FirstCall;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc16BitCrc_u16_Return;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_Len;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_FirstCall;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u08_Return;
extern VAR(uint16, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_Len;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_FirstCall;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u16_Return;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_Len;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_FirstCall;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc32BitCrc_u32_Return;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_Len;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_FirstCall;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc_Return;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_DataPtr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_Len;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_StrtVal;
extern VAR(boolean, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_FirstCall;
extern VAR(uint8, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_CalcCrcRes;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_Calc8BitCrc0X2F_Return;
extern VAR(CrcHwResvMod1, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_Mod;
extern VAR(CrcHwResvCfg1, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_CrcCfg;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_CrcHwInRegAdr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_CrcHwOutRegAdr;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_StrtVal;
extern VAR(uint32, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_ResvKey;
extern VAR(Std_ReturnType, AUTOMATIC) SyncCrc_Cli_ResvCrcHwUnit_Return;


/*** PIM Stubs ***/

#ifdef Rte_Pim_CrcHwSts
# undef Rte_Pim_CrcHwSts
#endif
#define Rte_Pim_CrcHwSts() (&(SyncCrc_Pim_CrcHwSts[0]))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
