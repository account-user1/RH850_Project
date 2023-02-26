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

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) NxtrTi_Srv_ReadErrInjReg_ErrId;
extern VAR(NtcNr1, AUTOMATIC) NxtrTi_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) NxtrTi_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) NxtrTi_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) NxtrTi_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) NxtrTi_Srv_SetNtcSts_Return;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) NxtrTi_Cli_GetTiSpan1MicroSec32bit_TiSpan;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
