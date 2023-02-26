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

/* Outputs */
extern VAR(boolean, AUTOMATIC) FlsMem_Op_CodFlsCrcChkCmpl;
extern VAR(uint32, AUTOMATIC) FlsMem_Op_SwApplCrc;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CodFlsCrcChkStrtTi;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CodFlsDummyRead1;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CodFlsDummyRead2;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CodFlsDummyRead3;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CodFlsDummyRead4;
extern VAR(boolean, AUTOMATIC) FlsMem_Pim_CodFlsSngBitErr;
extern VAR(boolean, AUTOMATIC) FlsMem_Pim_CrcChkCmpl;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_CrcHwIdxKey;
extern VAR(uint32, AUTOMATIC) FlsMem_Pim_HwCrcCalcdRes[8];
extern VAR(boolean, AUTOMATIC) FlsMem_Pim_PwrOnRstCrcChkCmpl;
extern VAR(boolean, AUTOMATIC) FlsMem_Pim_dFlsMemVrfyCrcInitCmpl;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(CrcHwResvMod1, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_Mod;
extern VAR(CrcHwResvCfg1, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_CrcCfg;
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_CrcHwInRegAdr;
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_CrcHwOutRegAdr;
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_StrtVal;
extern VAR(uint32, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_ResvKey;
extern VAR(Std_ReturnType, AUTOMATIC) FlsMem_Srv_ResvCrcHwUnit_Return;
extern VAR(NtcNr1, AUTOMATIC) FlsMem_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FlsMem_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FlsMem_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FlsMem_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FlsMem_Srv_SetNtcSts_Return;


/*** Output Stubs ***/

#ifdef Rte_Write_CodFlsCrcChkCmpl_Logl
# undef Rte_Write_CodFlsCrcChkCmpl_Logl
#endif
#define Rte_Write_CodFlsCrcChkCmpl_Logl(data) (FlsMem_Op_CodFlsCrcChkCmpl = (data))

#ifdef Rte_Write_SwApplCrc_Val
# undef Rte_Write_SwApplCrc_Val
#endif
#define Rte_Write_SwApplCrc_Val(data) (FlsMem_Op_SwApplCrc = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_CodFlsCrcChkStrtTi
# undef Rte_Pim_CodFlsCrcChkStrtTi
#endif
#define Rte_Pim_CodFlsCrcChkStrtTi() (&FlsMem_Pim_CodFlsCrcChkStrtTi)

#ifdef Rte_Pim_CodFlsDummyRead1
# undef Rte_Pim_CodFlsDummyRead1
#endif
#define Rte_Pim_CodFlsDummyRead1() (&FlsMem_Pim_CodFlsDummyRead1)

#ifdef Rte_Pim_CodFlsDummyRead2
# undef Rte_Pim_CodFlsDummyRead2
#endif
#define Rte_Pim_CodFlsDummyRead2() (&FlsMem_Pim_CodFlsDummyRead2)

#ifdef Rte_Pim_CodFlsDummyRead3
# undef Rte_Pim_CodFlsDummyRead3
#endif
#define Rte_Pim_CodFlsDummyRead3() (&FlsMem_Pim_CodFlsDummyRead3)

#ifdef Rte_Pim_CodFlsDummyRead4
# undef Rte_Pim_CodFlsDummyRead4
#endif
#define Rte_Pim_CodFlsDummyRead4() (&FlsMem_Pim_CodFlsDummyRead4)

#ifdef Rte_Pim_CodFlsSngBitErr
# undef Rte_Pim_CodFlsSngBitErr
#endif
#define Rte_Pim_CodFlsSngBitErr() (&FlsMem_Pim_CodFlsSngBitErr)

#ifdef Rte_Pim_CrcChkCmpl
# undef Rte_Pim_CrcChkCmpl
#endif
#define Rte_Pim_CrcChkCmpl() (&FlsMem_Pim_CrcChkCmpl)

#ifdef Rte_Pim_CrcHwIdxKey
# undef Rte_Pim_CrcHwIdxKey
#endif
#define Rte_Pim_CrcHwIdxKey() (&FlsMem_Pim_CrcHwIdxKey)

#ifdef Rte_Pim_HwCrcCalcdRes
# undef Rte_Pim_HwCrcCalcdRes
#endif
#define Rte_Pim_HwCrcCalcdRes() (&(FlsMem_Pim_HwCrcCalcdRes[0]))

#ifdef Rte_Pim_PwrOnRstCrcChkCmpl
# undef Rte_Pim_PwrOnRstCrcChkCmpl
#endif
#define Rte_Pim_PwrOnRstCrcChkCmpl() (&FlsMem_Pim_PwrOnRstCrcChkCmpl)

#ifdef Rte_Pim_dFlsMemVrfyCrcInitCmpl
# undef Rte_Pim_dFlsMemVrfyCrcInitCmpl
#endif
#define Rte_Pim_dFlsMemVrfyCrcInitCmpl() (&FlsMem_Pim_dFlsMemVrfyCrcInitCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
