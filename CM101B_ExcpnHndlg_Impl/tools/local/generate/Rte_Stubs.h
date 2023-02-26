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
extern VAR(uint32, AUTOMATIC) BackUpRam_C[256];
extern VAR(uint16, AUTOMATIC) ExcpnHndlgOsErrCod_C;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) ExcpnHndlg_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) ExcpnHndlg_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) ExcpnHndlg_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) ExcpnHndlg_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) ExcpnHndlg_Srv_SetNtcSts_Return;
extern VAR(boolean, AUTOMATIC) ExcpnHndlg_Cli_ChkForStrtUpTest_ExecStrtUpTest;
extern VAR(uint32, AUTOMATIC) ExcpnHndlg_Cli_GetMcuDiagcSpplData_McuDiagcData1;
extern VAR(NtcNr1, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) ExcpnHndlg_Cli_SetNtcStsAndSnpshtData_Return;


/*** PIM Stubs ***/

/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
