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
extern VAR(uint8, AUTOMATIC) RamMem_Op_GlbRamEccSngBitCntrOutp;
extern VAR(uint8, AUTOMATIC) RamMem_Op_LclRamEccSngBitCntrOutp;

/* PIMs */
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemCanRamDblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemCanRamSngBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemDtsRamEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemFrRamDblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemFrRamSngBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemGtmRamSngBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemMCan0RamDblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemMCan1RamDblBitEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemSpi0RamEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemSpi1RamEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemSpi2RamEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemSpi3RamEccErrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_dRamMemSpiRamEccErrAdr;
extern VAR(uint8, AUTOMATIC) RamMem_Pim_GlbRamEccSngBitCntr;
extern VAR(boolean, AUTOMATIC) RamMem_Pim_GlbRamEccSngBitSoftFailr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_GlbRamFailrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_GlbRamWordLineRead;
extern VAR(uint8, AUTOMATIC) RamMem_Pim_LclRamEccSngBitCntr;
extern VAR(boolean, AUTOMATIC) RamMem_Pim_LclRamEccSngBitSoftFailr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_LclRamFailrAdr;
extern VAR(uint32, AUTOMATIC) RamMem_Pim_LclRamWordLineRead;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) RamMem_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) RamMem_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) RamMem_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) RamMem_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) RamMem_Srv_SetNtcSts_Return;


/*** Output Stubs ***/

#ifdef Rte_Write_GlbRamEccSngBitCntrOutp_Val
# undef Rte_Write_GlbRamEccSngBitCntrOutp_Val
#endif
#define Rte_Write_GlbRamEccSngBitCntrOutp_Val(data) (RamMem_Op_GlbRamEccSngBitCntrOutp = (data))

#ifdef Rte_Write_LclRamEccSngBitCntrOutp_Val
# undef Rte_Write_LclRamEccSngBitCntrOutp_Val
#endif
#define Rte_Write_LclRamEccSngBitCntrOutp_Val(data) (RamMem_Op_LclRamEccSngBitCntrOutp = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dRamMemCanRamDblBitEccErrAdr
# undef Rte_Pim_dRamMemCanRamDblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemCanRamDblBitEccErrAdr() (&RamMem_Pim_dRamMemCanRamDblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemCanRamSngBitEccErrAdr
# undef Rte_Pim_dRamMemCanRamSngBitEccErrAdr
#endif
#define Rte_Pim_dRamMemCanRamSngBitEccErrAdr() (&RamMem_Pim_dRamMemCanRamSngBitEccErrAdr)

#ifdef Rte_Pim_dRamMemDtsRamEccErrAdr
# undef Rte_Pim_dRamMemDtsRamEccErrAdr
#endif
#define Rte_Pim_dRamMemDtsRamEccErrAdr() (&RamMem_Pim_dRamMemDtsRamEccErrAdr)

#ifdef Rte_Pim_dRamMemFrRamDblBitEccErrAdr
# undef Rte_Pim_dRamMemFrRamDblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemFrRamDblBitEccErrAdr() (&RamMem_Pim_dRamMemFrRamDblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemFrRamSngBitEccErrAdr
# undef Rte_Pim_dRamMemFrRamSngBitEccErrAdr
#endif
#define Rte_Pim_dRamMemFrRamSngBitEccErrAdr() (&RamMem_Pim_dRamMemFrRamSngBitEccErrAdr)

#ifdef Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr
# undef Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr() (&RamMem_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr
# undef Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr() (&RamMem_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemGtmRamSngBitEccErrAdr
# undef Rte_Pim_dRamMemGtmRamSngBitEccErrAdr
#endif
#define Rte_Pim_dRamMemGtmRamSngBitEccErrAdr() (&RamMem_Pim_dRamMemGtmRamSngBitEccErrAdr)

#ifdef Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr
# undef Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr() (&RamMem_Pim_dRamMemMCan0RamDblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr
# undef Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr
#endif
#define Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr() (&RamMem_Pim_dRamMemMCan1RamDblBitEccErrAdr)

#ifdef Rte_Pim_dRamMemSpi0RamEccErrAdr
# undef Rte_Pim_dRamMemSpi0RamEccErrAdr
#endif
#define Rte_Pim_dRamMemSpi0RamEccErrAdr() (&RamMem_Pim_dRamMemSpi0RamEccErrAdr)

#ifdef Rte_Pim_dRamMemSpi1RamEccErrAdr
# undef Rte_Pim_dRamMemSpi1RamEccErrAdr
#endif
#define Rte_Pim_dRamMemSpi1RamEccErrAdr() (&RamMem_Pim_dRamMemSpi1RamEccErrAdr)

#ifdef Rte_Pim_dRamMemSpi2RamEccErrAdr
# undef Rte_Pim_dRamMemSpi2RamEccErrAdr
#endif
#define Rte_Pim_dRamMemSpi2RamEccErrAdr() (&RamMem_Pim_dRamMemSpi2RamEccErrAdr)

#ifdef Rte_Pim_dRamMemSpi3RamEccErrAdr
# undef Rte_Pim_dRamMemSpi3RamEccErrAdr
#endif
#define Rte_Pim_dRamMemSpi3RamEccErrAdr() (&RamMem_Pim_dRamMemSpi3RamEccErrAdr)

#ifdef Rte_Pim_dRamMemSpiRamEccErrAdr
# undef Rte_Pim_dRamMemSpiRamEccErrAdr
#endif
#define Rte_Pim_dRamMemSpiRamEccErrAdr() (&RamMem_Pim_dRamMemSpiRamEccErrAdr)

#ifdef Rte_Pim_GlbRamEccSngBitCntr
# undef Rte_Pim_GlbRamEccSngBitCntr
#endif
#define Rte_Pim_GlbRamEccSngBitCntr() (&RamMem_Pim_GlbRamEccSngBitCntr)

#ifdef Rte_Pim_GlbRamEccSngBitSoftFailr
# undef Rte_Pim_GlbRamEccSngBitSoftFailr
#endif
#define Rte_Pim_GlbRamEccSngBitSoftFailr() (&RamMem_Pim_GlbRamEccSngBitSoftFailr)

#ifdef Rte_Pim_GlbRamFailrAdr
# undef Rte_Pim_GlbRamFailrAdr
#endif
#define Rte_Pim_GlbRamFailrAdr() (&RamMem_Pim_GlbRamFailrAdr)

#ifdef Rte_Pim_GlbRamWordLineRead
# undef Rte_Pim_GlbRamWordLineRead
#endif
#define Rte_Pim_GlbRamWordLineRead() (&RamMem_Pim_GlbRamWordLineRead)

#ifdef Rte_Pim_LclRamEccSngBitCntr
# undef Rte_Pim_LclRamEccSngBitCntr
#endif
#define Rte_Pim_LclRamEccSngBitCntr() (&RamMem_Pim_LclRamEccSngBitCntr)

#ifdef Rte_Pim_LclRamEccSngBitSoftFailr
# undef Rte_Pim_LclRamEccSngBitSoftFailr
#endif
#define Rte_Pim_LclRamEccSngBitSoftFailr() (&RamMem_Pim_LclRamEccSngBitSoftFailr)

#ifdef Rte_Pim_LclRamFailrAdr
# undef Rte_Pim_LclRamFailrAdr
#endif
#define Rte_Pim_LclRamFailrAdr() (&RamMem_Pim_LclRamFailrAdr)

#ifdef Rte_Pim_LclRamWordLineRead
# undef Rte_Pim_LclRamWordLineRead
#endif
#define Rte_Pim_LclRamWordLineRead() (&RamMem_Pim_LclRamWordLineRead)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
