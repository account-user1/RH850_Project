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

/* Inputs */
extern VAR(sint8, AUTOMATIC) SinVltgGenn_Ip_MotElecMeclPolarity;

/* Calibrations */
extern CONST(boolean, AUTOMATIC) SinVltgGenn_Cal_SinVltgGennDthrEna;
extern CONST(float32, AUTOMATIC) SinVltgGenn_Cal_SinVltgGennDthrLpFilCoeff;
extern CONST(float32, AUTOMATIC) SinVltgGenn_Cal_MotAgSwCalVehSpdThd;

/* PIMs */
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_Fil1OutpPrev;
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_Fil2OutpPrev;
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_PhaDptOffsA;
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_PhaDptOffsB;
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_PhaDptOffsC;
extern VAR(uint32, AUTOMATIC) SinVltgGenn_Pim_PhaOnTiSumAPrev;
extern VAR(uint32, AUTOMATIC) SinVltgGenn_Pim_PhaOnTiSumBPrev;
extern VAR(uint32, AUTOMATIC) SinVltgGenn_Pim_PhaOnTiSumCPrev;
extern VAR(uint32, AUTOMATIC) SinVltgGenn_Pim_PwmPerdRng;
extern VAR(float32, AUTOMATIC) SinVltgGenn_Pim_RndNrPrev;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_MotElecMeclPolarity_Val
# undef Rte_Read_MotElecMeclPolarity_Val
#endif
#define Rte_Read_MotElecMeclPolarity_Val(data) (*(data) = SinVltgGenn_Ip_MotElecMeclPolarity)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_SinVltgGennDthrEna_Logl
# undef Rte_Prm_SinVltgGennDthrEna_Logl
#endif
#define Rte_Prm_SinVltgGennDthrEna_Logl() (SinVltgGenn_Cal_SinVltgGennDthrEna)

#ifdef Rte_Prm_SinVltgGennDthrLpFilCoeff_Val
# undef Rte_Prm_SinVltgGennDthrLpFilCoeff_Val
#endif
#define Rte_Prm_SinVltgGennDthrLpFilCoeff_Val() (SinVltgGenn_Cal_SinVltgGennDthrLpFilCoeff)

#ifdef Rte_Prm_MotAgSwCalVehSpdThd_Val
# undef Rte_Prm_MotAgSwCalVehSpdThd_Val
#endif
#define Rte_Prm_MotAgSwCalVehSpdThd_Val() (SinVltgGenn_Cal_MotAgSwCalVehSpdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_Fil1OutpPrev
# undef Rte_Pim_Fil1OutpPrev
#endif
#define Rte_Pim_Fil1OutpPrev() (&SinVltgGenn_Pim_Fil1OutpPrev)

#ifdef Rte_Pim_Fil2OutpPrev
# undef Rte_Pim_Fil2OutpPrev
#endif
#define Rte_Pim_Fil2OutpPrev() (&SinVltgGenn_Pim_Fil2OutpPrev)

#ifdef Rte_Pim_PhaDptOffsA
# undef Rte_Pim_PhaDptOffsA
#endif
#define Rte_Pim_PhaDptOffsA() (&SinVltgGenn_Pim_PhaDptOffsA)

#ifdef Rte_Pim_PhaDptOffsB
# undef Rte_Pim_PhaDptOffsB
#endif
#define Rte_Pim_PhaDptOffsB() (&SinVltgGenn_Pim_PhaDptOffsB)

#ifdef Rte_Pim_PhaDptOffsC
# undef Rte_Pim_PhaDptOffsC
#endif
#define Rte_Pim_PhaDptOffsC() (&SinVltgGenn_Pim_PhaDptOffsC)

#ifdef Rte_Pim_PhaOnTiSumAPrev
# undef Rte_Pim_PhaOnTiSumAPrev
#endif
#define Rte_Pim_PhaOnTiSumAPrev() (&SinVltgGenn_Pim_PhaOnTiSumAPrev)

#ifdef Rte_Pim_PhaOnTiSumBPrev
# undef Rte_Pim_PhaOnTiSumBPrev
#endif
#define Rte_Pim_PhaOnTiSumBPrev() (&SinVltgGenn_Pim_PhaOnTiSumBPrev)

#ifdef Rte_Pim_PhaOnTiSumCPrev
# undef Rte_Pim_PhaOnTiSumCPrev
#endif
#define Rte_Pim_PhaOnTiSumCPrev() (&SinVltgGenn_Pim_PhaOnTiSumCPrev)

#ifdef Rte_Pim_PwmPerdRng
# undef Rte_Pim_PwmPerdRng
#endif
#define Rte_Pim_PwmPerdRng() (&SinVltgGenn_Pim_PwmPerdRng)

#ifdef Rte_Pim_RndNrPrev
# undef Rte_Pim_RndNrPrev
#endif
#define Rte_Pim_RndNrPrev() (&SinVltgGenn_Pim_RndNrPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
