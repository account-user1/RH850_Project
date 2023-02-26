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

#include "math_stubs.h"

/*** Extern Statements ***/

/* Inputs */
extern VAR(boolean, AUTOMATIC) HiLoadStallLimr_Ip_DualEcuFltMtgtnEna;
extern VAR(uint8, AUTOMATIC) HiLoadStallLimr_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Ip_MotTqCmdLimdPreStall;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Ip_MotVelCrf;
extern VAR(boolean, AUTOMATIC) HiLoadStallLimr_Ip_StallMotTqLimDi;

/* Outputs */
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Op_StallMotTqLim;

/* Calibrations */
extern CONST(float32, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq;
extern CONST(float32, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrMotTqCmdFilFrq;
extern CONST(float32, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrMotVelMgnThd[2];
extern CONST(u8p8, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX[6];
extern CONST(u8p8, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY[6];
extern CONST(u8p8, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdLimX[6];
extern CONST(u8p8, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdLimY[6];
extern CONST(float32, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqLimSlewRate[2];
extern CONST(float32, AUTOMATIC) HiLoadStallLimr_Cal_HiLoadStallLimrStallThermLimSca;

/* PIMs */
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqCmd;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqCmdFild;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqLim;
extern VAR(uint8, AUTOMATIC) HiLoadStallLimr_Pim_FetLoaMtgtnCalIdx;
extern VAR(FilLpRec1, AUTOMATIC) HiLoadStallLimr_Pim_StallMotTqCmdFetMtgtnFil;
extern VAR(FilLpRec1, AUTOMATIC) HiLoadStallLimr_Pim_StallMotTqCmdFil;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Pim_StallMotTqLimFetMtgtnPrev;
extern VAR(float32, AUTOMATIC) HiLoadStallLimr_Pim_StallMotTqLimPrev;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_DualEcuFltMtgtnEna_Logl
# undef Rte_Read_DualEcuFltMtgtnEna_Logl
#else
#error Rte_Read_DualEcuFltMtgtnEna_Logl is missing
#endif
#define Rte_Read_DualEcuFltMtgtnEna_Logl(data) (*(data) = HiLoadStallLimr_Ip_DualEcuFltMtgtnEna)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#else
#error Rte_Read_MotAndThermProtnLoaMod_Val is missing
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = HiLoadStallLimr_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotTqCmdLimdPreStall_Val
# undef Rte_Read_MotTqCmdLimdPreStall_Val
#else
#error Rte_Read_MotTqCmdLimdPreStall_Val is missing
#endif
#define Rte_Read_MotTqCmdLimdPreStall_Val(data) (*(data) = HiLoadStallLimr_Ip_MotTqCmdLimdPreStall)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#else
#error Rte_Read_MotVelCrf_Val is missing
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = HiLoadStallLimr_Ip_MotVelCrf)

#ifdef Rte_Read_StallMotTqLimDi_Logl
# undef Rte_Read_StallMotTqLimDi_Logl
#else
#error Rte_Read_StallMotTqLimDi_Logl is missing
#endif
#define Rte_Read_StallMotTqLimDi_Logl(data) (*(data) = HiLoadStallLimr_Ip_StallMotTqLimDi)


/*** Output Stubs ***/

#ifdef Rte_Write_StallMotTqLim_Val
# undef Rte_Write_StallMotTqLim_Val
#else
#error Rte_Write_StallMotTqLim_Val is missing
#endif
#define Rte_Write_StallMotTqLim_Val(data) (HiLoadStallLimr_Op_StallMotTqLim = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val
# undef Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val
#else
#error Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val is missing
#endif
#define Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val() (HiLoadStallLimr_Cal_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq)

#ifdef Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val
# undef Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val
#else
#error Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val is missing
#endif
#define Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val() (HiLoadStallLimr_Cal_HiLoadStallLimrMotTqCmdFilFrq)

#ifdef Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D
# undef Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrMotVelMgnThd[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D
# undef Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D
# undef Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D
# undef Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdLimX[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D
# undef Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqCmdLimY[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D
# undef Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D
#else
#error Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D() (&(HiLoadStallLimr_Cal_HiLoadStallLimrStallMotTqLimSlewRate[0]))

#ifdef Rte_Prm_HiLoadStallLimrStallThermLimSca_Val
# undef Rte_Prm_HiLoadStallLimrStallThermLimSca_Val
#else
#error Rte_Prm_HiLoadStallLimrStallThermLimSca_Val is missing
#endif
#define Rte_Prm_HiLoadStallLimrStallThermLimSca_Val() (HiLoadStallLimr_Cal_HiLoadStallLimrStallThermLimSca)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dHiLoadStallLimrStallMotTqCmd
# undef Rte_Pim_dHiLoadStallLimrStallMotTqCmd
#else
#error Rte_Pim_dHiLoadStallLimrStallMotTqCmd is missing
#endif
#define Rte_Pim_dHiLoadStallLimrStallMotTqCmd() (&HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqCmd)

#ifdef Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild
# undef Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild
#else
#error Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild is missing
#endif
#define Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild() (&HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqCmdFild)

#ifdef Rte_Pim_dHiLoadStallLimrStallMotTqLim
# undef Rte_Pim_dHiLoadStallLimrStallMotTqLim
#else
#error Rte_Pim_dHiLoadStallLimrStallMotTqLim is missing
#endif
#define Rte_Pim_dHiLoadStallLimrStallMotTqLim() (&HiLoadStallLimr_Pim_dHiLoadStallLimrStallMotTqLim)

#ifdef Rte_Pim_FetLoaMtgtnCalIdx
# undef Rte_Pim_FetLoaMtgtnCalIdx
#else
#error Rte_Pim_FetLoaMtgtnCalIdx is missing
#endif
#define Rte_Pim_FetLoaMtgtnCalIdx() (&HiLoadStallLimr_Pim_FetLoaMtgtnCalIdx)

#ifdef Rte_Pim_StallMotTqCmdFetMtgtnFil
# undef Rte_Pim_StallMotTqCmdFetMtgtnFil
#else
#error Rte_Pim_StallMotTqCmdFetMtgtnFil is missing
#endif
#define Rte_Pim_StallMotTqCmdFetMtgtnFil() (&HiLoadStallLimr_Pim_StallMotTqCmdFetMtgtnFil)

#ifdef Rte_Pim_StallMotTqCmdFil
# undef Rte_Pim_StallMotTqCmdFil
#else
#error Rte_Pim_StallMotTqCmdFil is missing
#endif
#define Rte_Pim_StallMotTqCmdFil() (&HiLoadStallLimr_Pim_StallMotTqCmdFil)

#ifdef Rte_Pim_StallMotTqLimFetMtgtnPrev
# undef Rte_Pim_StallMotTqLimFetMtgtnPrev
#else
#error Rte_Pim_StallMotTqLimFetMtgtnPrev is missing
#endif
#define Rte_Pim_StallMotTqLimFetMtgtnPrev() (&HiLoadStallLimr_Pim_StallMotTqLimFetMtgtnPrev)

#ifdef Rte_Pim_StallMotTqLimPrev
# undef Rte_Pim_StallMotTqLimPrev
#else
#error Rte_Pim_StallMotTqLimPrev is missing
#endif
#define Rte_Pim_StallMotTqLimPrev() (&HiLoadStallLimr_Pim_StallMotTqLimPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
