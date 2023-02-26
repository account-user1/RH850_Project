/******************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_DiagcMgrStub_Stubs.h
* Module Description: Stubs header for Polyspace analysis of DiagcMgrStub component
* Project:            CBD
* Author:             Shruthi Raghavan
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H

/*** Extern Statements ***/
/* Inputs */
/* Outputs */
/* Calibrations */
/* PIMs */
/* Arguments and Returns */
VAR(DiagcDataRec2, AUTOMATIC) DiagcMgrStub_Cli_GetDiagcDataStub_DiagcData;
VAR(uint8, AUTOMATIC) DiagcMgrStub_Cli_GetNtcDebCntrStub_DebCntrIdx;
VAR(sint16, AUTOMATIC) DiagcMgrStub_Cli_GetNtcDebCntrStub_DebCntr;
VAR(uint8, AUTOMATIC) DiagcMgrStub_Cli_GetNtcInfoStub_NtcInfoIdx;
VAR(NtcInfoRec4, AUTOMATIC) DiagcMgrStub_Cli_GetNtcInfoStub_NtcInfo;


/*** Input Stubs ***/
/*** Output Stubs ***/
/*** Calibration Stubs ***/
/*** PIM Stubs ***/

/*** Client Stub ***/
extern FUNC(void, AUTOMATIC) Rte_DiagcMgrStub_Stub(void);


#endif
