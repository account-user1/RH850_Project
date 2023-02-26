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
extern VAR(boolean, AUTOMATIC) CoreVltgMonr_Pim_dCoreVltgMonrStrtUpTestCmpl;
extern VAR(uint8, AUTOMATIC) CoreVltgMonr_Pim_CoreVltgMonrStrtUpFltPrmByte;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) CoreVltgMonr_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) CoreVltgMonr_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) CoreVltgMonr_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) CoreVltgMonr_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) CoreVltgMonr_Srv_SetNtcSts_Return;


/*** PIM Stubs ***/

#ifdef Rte_Pim_dCoreVltgMonrStrtUpTestCmpl
# undef Rte_Pim_dCoreVltgMonrStrtUpTestCmpl
#endif
#define Rte_Pim_dCoreVltgMonrStrtUpTestCmpl() (&CoreVltgMonr_Pim_dCoreVltgMonrStrtUpTestCmpl)

#ifdef Rte_Pim_CoreVltgMonrStrtUpFltPrmByte
# undef Rte_Pim_CoreVltgMonrStrtUpFltPrmByte
#endif
#define Rte_Pim_CoreVltgMonrStrtUpFltPrmByte() (&CoreVltgMonr_Pim_CoreVltgMonrStrtUpFltPrmByte)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
