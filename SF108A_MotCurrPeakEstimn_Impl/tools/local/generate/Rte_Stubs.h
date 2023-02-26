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
extern VAR(boolean, AUTOMATIC) MotCurrPeakEstimn_Ip_DualEcuMotCtrlMtgtnEna;
extern VAR(uint8, AUTOMATIC) MotCurrPeakEstimn_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Ip_MotCurrDax;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Ip_MotCurrDaxCmd;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Ip_MotCurrQax;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Ip_MotCurrQaxCmd;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Op_MotCurrPeakEstimd;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Op_MotCurrPeakEstimdFild;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotCurrPeakEstimn_Cal_MotCurrPeakEstimnCurrFilFrq;
extern CONST(float32, AUTOMATIC) MotCurrPeakEstimn_Cal_MotCurrPeakEstimnCurrPeakEstimdFilFrq;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Pim_dMotCurrPeakEstimnMotCurrDaxFil;
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Pim_dMotCurrPeakEstimnMotCurrQaxFil;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrPeakEstimn_Pim_MotCurrDaxFil;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrPeakEstimn_Pim_MotCurrPeakEstimdFil;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrPeakEstimn_Pim_MotCurrQaxFil;

/* IRVs */
extern VAR(float32, AUTOMATIC) MotCurrPeakEstimn_Irv_MotCurrEstimd;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
# undef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
#endif
#define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(data) (*(data) = MotCurrPeakEstimn_Ip_DualEcuMotCtrlMtgtnEna)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = MotCurrPeakEstimn_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrDax_Val
# undef Rte_Read_MotCurrDax_Val
#endif
#define Rte_Read_MotCurrDax_Val(data) (*(data) = MotCurrPeakEstimn_Ip_MotCurrDax)

#ifdef Rte_Read_MotCurrDaxCmd_Val
# undef Rte_Read_MotCurrDaxCmd_Val
#endif
#define Rte_Read_MotCurrDaxCmd_Val(data) (*(data) = MotCurrPeakEstimn_Ip_MotCurrDaxCmd)

#ifdef Rte_Read_MotCurrQax_Val
# undef Rte_Read_MotCurrQax_Val
#endif
#define Rte_Read_MotCurrQax_Val(data) (*(data) = MotCurrPeakEstimn_Ip_MotCurrQax)

#ifdef Rte_Read_MotCurrQaxCmd_Val
# undef Rte_Read_MotCurrQaxCmd_Val
#endif
#define Rte_Read_MotCurrQaxCmd_Val(data) (*(data) = MotCurrPeakEstimn_Ip_MotCurrQaxCmd)


/*** Output Stubs ***/

#ifdef Rte_Write_MotCurrPeakEstimd_Val
# undef Rte_Write_MotCurrPeakEstimd_Val
#endif
#define Rte_Write_MotCurrPeakEstimd_Val(data) (MotCurrPeakEstimn_Op_MotCurrPeakEstimd = (data))

#ifdef Rte_Write_MotCurrPeakEstimdFild_Val
# undef Rte_Write_MotCurrPeakEstimdFild_Val
#endif
#define Rte_Write_MotCurrPeakEstimdFild_Val(data) (MotCurrPeakEstimn_Op_MotCurrPeakEstimdFild = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val
# undef Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val
#endif
#define Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val() (MotCurrPeakEstimn_Cal_MotCurrPeakEstimnCurrFilFrq)

#ifdef Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val
# undef Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val
#endif
#define Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val() (MotCurrPeakEstimn_Cal_MotCurrPeakEstimnCurrPeakEstimdFilFrq)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil
# undef Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil
#endif
#define Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() (&MotCurrPeakEstimn_Pim_dMotCurrPeakEstimnMotCurrDaxFil)

#ifdef Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil
# undef Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil
#endif
#define Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() (&MotCurrPeakEstimn_Pim_dMotCurrPeakEstimnMotCurrQaxFil)

#ifdef Rte_Pim_MotCurrDaxFil
# undef Rte_Pim_MotCurrDaxFil
#endif
#define Rte_Pim_MotCurrDaxFil() (&MotCurrPeakEstimn_Pim_MotCurrDaxFil)

#ifdef Rte_Pim_MotCurrPeakEstimdFil
# undef Rte_Pim_MotCurrPeakEstimdFil
#endif
#define Rte_Pim_MotCurrPeakEstimdFil() (&MotCurrPeakEstimn_Pim_MotCurrPeakEstimdFil)

#ifdef Rte_Pim_MotCurrQaxFil
# undef Rte_Pim_MotCurrQaxFil
#endif
#define Rte_Pim_MotCurrQaxFil() (&MotCurrPeakEstimn_Pim_MotCurrQaxFil)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd
# undef Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd
#endif
#define Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd() (MotCurrPeakEstimn_Irv_MotCurrEstimd)

#ifdef Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd
# undef Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd
#endif
#define Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(data) (MotCurrPeakEstimn_Irv_MotCurrEstimd = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
