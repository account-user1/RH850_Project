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
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_HwTq;
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_VehLatASerlCom;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Ip_VehLatAVldSerlCom;
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_VehLgtASerlCom;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Ip_VehLgtAVldSerlCom;
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_VehSpdOvrd;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Ip_VehSpdOvrdEna;
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_VehSpdSerlCom;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Ip_VehSpdVldSerlCom;
extern VAR(float32, AUTOMATIC) VehSigCdng_Ip_VehYawRateSerlCom;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Ip_VehYawRateVldSerlCom;

/* Outputs */
extern VAR(float32, AUTOMATIC) VehSigCdng_Op_VehLatA;
extern VAR(float32, AUTOMATIC) VehSigCdng_Op_VehLatAEstimd;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Op_VehLatAEstimdVld;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Op_VehLatAVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Op_VehLgtA;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Op_VehLgtAVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Op_VehSpd;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Op_VehSpdVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Op_VehYawRate;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Op_VehYawRateVld;

/* Calibrations */
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngDftLatA;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngDftLgtA;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngDftVehSpd;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngDftYawRate;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngLatADifThd;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngLatAFilFrq;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngLatASlewRate;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngLtgADifThd;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngLtgASlewRate;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngVehSpdDifThd;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngVehSpdSlewRate;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngVehYawSlewRate;
extern CONST(float32, AUTOMATIC) VehSigCdng_Cal_VehSigCdngYawRateDifThd;

/* PIMs */
extern VAR(FilLpRec1, AUTOMATIC) VehSigCdng_Pim_HwTqFilRec;
extern VAR(FilLpRec1, AUTOMATIC) VehSigCdng_Pim_LatAFilRec;
extern VAR(float32, AUTOMATIC) VehSigCdng_Pim_PrevLatA;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Pim_PrevLatAVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Pim_PrevLtgA;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Pim_PrevLtgAVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Pim_PrevVehSpd;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Pim_PrevVehSpdVld;
extern VAR(float32, AUTOMATIC) VehSigCdng_Pim_PrevYawRate;
extern VAR(boolean, AUTOMATIC) VehSigCdng_Pim_PrevYawRateVld;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = VehSigCdng_Ip_HwTq)

#ifdef Rte_Read_VehLatASerlCom_Val
# undef Rte_Read_VehLatASerlCom_Val
#endif
#define Rte_Read_VehLatASerlCom_Val(data) (*(data) = VehSigCdng_Ip_VehLatASerlCom)

#ifdef Rte_Read_VehLatAVldSerlCom_Logl
# undef Rte_Read_VehLatAVldSerlCom_Logl
#endif
#define Rte_Read_VehLatAVldSerlCom_Logl(data) (*(data) = VehSigCdng_Ip_VehLatAVldSerlCom)

#ifdef Rte_Read_VehLgtASerlCom_Val
# undef Rte_Read_VehLgtASerlCom_Val
#endif
#define Rte_Read_VehLgtASerlCom_Val(data) (*(data) = VehSigCdng_Ip_VehLgtASerlCom)

#ifdef Rte_Read_VehLgtAVldSerlCom_Logl
# undef Rte_Read_VehLgtAVldSerlCom_Logl
#endif
#define Rte_Read_VehLgtAVldSerlCom_Logl(data) (*(data) = VehSigCdng_Ip_VehLgtAVldSerlCom)

#ifdef Rte_Read_VehSpdOvrd_Val
# undef Rte_Read_VehSpdOvrd_Val
#endif
#define Rte_Read_VehSpdOvrd_Val(data) (*(data) = VehSigCdng_Ip_VehSpdOvrd)

#ifdef Rte_Read_VehSpdOvrdEna_Logl
# undef Rte_Read_VehSpdOvrdEna_Logl
#endif
#define Rte_Read_VehSpdOvrdEna_Logl(data) (*(data) = VehSigCdng_Ip_VehSpdOvrdEna)

#ifdef Rte_Read_VehSpdSerlCom_Val
# undef Rte_Read_VehSpdSerlCom_Val
#endif
#define Rte_Read_VehSpdSerlCom_Val(data) (*(data) = VehSigCdng_Ip_VehSpdSerlCom)

#ifdef Rte_Read_VehSpdVldSerlCom_Logl
# undef Rte_Read_VehSpdVldSerlCom_Logl
#endif
#define Rte_Read_VehSpdVldSerlCom_Logl(data) (*(data) = VehSigCdng_Ip_VehSpdVldSerlCom)

#ifdef Rte_Read_VehYawRateSerlCom_Val
# undef Rte_Read_VehYawRateSerlCom_Val
#endif
#define Rte_Read_VehYawRateSerlCom_Val(data) (*(data) = VehSigCdng_Ip_VehYawRateSerlCom)

#ifdef Rte_Read_VehYawRateVldSerlCom_Logl
# undef Rte_Read_VehYawRateVldSerlCom_Logl
#endif
#define Rte_Read_VehYawRateVldSerlCom_Logl(data) (*(data) = VehSigCdng_Ip_VehYawRateVldSerlCom)


/*** Output Stubs ***/

#ifdef Rte_Write_VehLatA_Val
# undef Rte_Write_VehLatA_Val
#endif
#define Rte_Write_VehLatA_Val(data) (VehSigCdng_Op_VehLatA = (data))

#ifdef Rte_Write_VehLatAEstimd_Val
# undef Rte_Write_VehLatAEstimd_Val
#endif
#define Rte_Write_VehLatAEstimd_Val(data) (VehSigCdng_Op_VehLatAEstimd = (data))

#ifdef Rte_Write_VehLatAEstimdVld_Logl
# undef Rte_Write_VehLatAEstimdVld_Logl
#endif
#define Rte_Write_VehLatAEstimdVld_Logl(data) (VehSigCdng_Op_VehLatAEstimdVld = (data))

#ifdef Rte_Write_VehLatAVld_Logl
# undef Rte_Write_VehLatAVld_Logl
#endif
#define Rte_Write_VehLatAVld_Logl(data) (VehSigCdng_Op_VehLatAVld = (data))

#ifdef Rte_Write_VehLgtA_Val
# undef Rte_Write_VehLgtA_Val
#endif
#define Rte_Write_VehLgtA_Val(data) (VehSigCdng_Op_VehLgtA = (data))

#ifdef Rte_Write_VehLgtAVld_Logl
# undef Rte_Write_VehLgtAVld_Logl
#endif
#define Rte_Write_VehLgtAVld_Logl(data) (VehSigCdng_Op_VehLgtAVld = (data))

#ifdef Rte_Write_VehSpd_Val
# undef Rte_Write_VehSpd_Val
#endif
#define Rte_Write_VehSpd_Val(data) (VehSigCdng_Op_VehSpd = (data))

#ifdef Rte_Write_VehSpdVld_Logl
# undef Rte_Write_VehSpdVld_Logl
#endif
#define Rte_Write_VehSpdVld_Logl(data) (VehSigCdng_Op_VehSpdVld = (data))

#ifdef Rte_Write_VehYawRate_Val
# undef Rte_Write_VehYawRate_Val
#endif
#define Rte_Write_VehYawRate_Val(data) (VehSigCdng_Op_VehYawRate = (data))

#ifdef Rte_Write_VehYawRateVld_Logl
# undef Rte_Write_VehYawRateVld_Logl
#endif
#define Rte_Write_VehYawRateVld_Logl(data) (VehSigCdng_Op_VehYawRateVld = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_VehSigCdngDftLatA_Val
# undef Rte_Prm_VehSigCdngDftLatA_Val
#endif
#define Rte_Prm_VehSigCdngDftLatA_Val() (VehSigCdng_Cal_VehSigCdngDftLatA)

#ifdef Rte_Prm_VehSigCdngDftLgtA_Val
# undef Rte_Prm_VehSigCdngDftLgtA_Val
#endif
#define Rte_Prm_VehSigCdngDftLgtA_Val() (VehSigCdng_Cal_VehSigCdngDftLgtA)

#ifdef Rte_Prm_VehSigCdngDftVehSpd_Val
# undef Rte_Prm_VehSigCdngDftVehSpd_Val
#endif
#define Rte_Prm_VehSigCdngDftVehSpd_Val() (VehSigCdng_Cal_VehSigCdngDftVehSpd)

#ifdef Rte_Prm_VehSigCdngDftYawRate_Val
# undef Rte_Prm_VehSigCdngDftYawRate_Val
#endif
#define Rte_Prm_VehSigCdngDftYawRate_Val() (VehSigCdng_Cal_VehSigCdngDftYawRate)

#ifdef Rte_Prm_VehSigCdngLatADifThd_Val
# undef Rte_Prm_VehSigCdngLatADifThd_Val
#endif
#define Rte_Prm_VehSigCdngLatADifThd_Val() (VehSigCdng_Cal_VehSigCdngLatADifThd)

#ifdef Rte_Prm_VehSigCdngLatAFilFrq_Val
# undef Rte_Prm_VehSigCdngLatAFilFrq_Val
#endif
#define Rte_Prm_VehSigCdngLatAFilFrq_Val() (VehSigCdng_Cal_VehSigCdngLatAFilFrq)

#ifdef Rte_Prm_VehSigCdngLatASlewRate_Val
# undef Rte_Prm_VehSigCdngLatASlewRate_Val
#endif
#define Rte_Prm_VehSigCdngLatASlewRate_Val() (VehSigCdng_Cal_VehSigCdngLatASlewRate)

#ifdef Rte_Prm_VehSigCdngLtgADifThd_Val
# undef Rte_Prm_VehSigCdngLtgADifThd_Val
#endif
#define Rte_Prm_VehSigCdngLtgADifThd_Val() (VehSigCdng_Cal_VehSigCdngLtgADifThd)

#ifdef Rte_Prm_VehSigCdngLtgASlewRate_Val
# undef Rte_Prm_VehSigCdngLtgASlewRate_Val
#endif
#define Rte_Prm_VehSigCdngLtgASlewRate_Val() (VehSigCdng_Cal_VehSigCdngLtgASlewRate)

#ifdef Rte_Prm_VehSigCdngVehSpdDifThd_Val
# undef Rte_Prm_VehSigCdngVehSpdDifThd_Val
#endif
#define Rte_Prm_VehSigCdngVehSpdDifThd_Val() (VehSigCdng_Cal_VehSigCdngVehSpdDifThd)

#ifdef Rte_Prm_VehSigCdngVehSpdSlewRate_Val
# undef Rte_Prm_VehSigCdngVehSpdSlewRate_Val
#endif
#define Rte_Prm_VehSigCdngVehSpdSlewRate_Val() (VehSigCdng_Cal_VehSigCdngVehSpdSlewRate)

#ifdef Rte_Prm_VehSigCdngVehYawSlewRate_Val
# undef Rte_Prm_VehSigCdngVehYawSlewRate_Val
#endif
#define Rte_Prm_VehSigCdngVehYawSlewRate_Val() (VehSigCdng_Cal_VehSigCdngVehYawSlewRate)

#ifdef Rte_Prm_VehSigCdngYawRateDifThd_Val
# undef Rte_Prm_VehSigCdngYawRateDifThd_Val
#endif
#define Rte_Prm_VehSigCdngYawRateDifThd_Val() (VehSigCdng_Cal_VehSigCdngYawRateDifThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwTqFilRec
# undef Rte_Pim_HwTqFilRec
#endif
#define Rte_Pim_HwTqFilRec() (&VehSigCdng_Pim_HwTqFilRec)

#ifdef Rte_Pim_LatAFilRec
# undef Rte_Pim_LatAFilRec
#endif
#define Rte_Pim_LatAFilRec() (&VehSigCdng_Pim_LatAFilRec)

#ifdef Rte_Pim_PrevLatA
# undef Rte_Pim_PrevLatA
#endif
#define Rte_Pim_PrevLatA() (&VehSigCdng_Pim_PrevLatA)

#ifdef Rte_Pim_PrevLatAVld
# undef Rte_Pim_PrevLatAVld
#endif
#define Rte_Pim_PrevLatAVld() (&VehSigCdng_Pim_PrevLatAVld)

#ifdef Rte_Pim_PrevLtgA
# undef Rte_Pim_PrevLtgA
#endif
#define Rte_Pim_PrevLtgA() (&VehSigCdng_Pim_PrevLtgA)

#ifdef Rte_Pim_PrevLtgAVld
# undef Rte_Pim_PrevLtgAVld
#endif
#define Rte_Pim_PrevLtgAVld() (&VehSigCdng_Pim_PrevLtgAVld)

#ifdef Rte_Pim_PrevVehSpd
# undef Rte_Pim_PrevVehSpd
#endif
#define Rte_Pim_PrevVehSpd() (&VehSigCdng_Pim_PrevVehSpd)

#ifdef Rte_Pim_PrevVehSpdVld
# undef Rte_Pim_PrevVehSpdVld
#endif
#define Rte_Pim_PrevVehSpdVld() (&VehSigCdng_Pim_PrevVehSpdVld)

#ifdef Rte_Pim_PrevYawRate
# undef Rte_Pim_PrevYawRate
#endif
#define Rte_Pim_PrevYawRate() (&VehSigCdng_Pim_PrevYawRate)

#ifdef Rte_Pim_PrevYawRateVld
# undef Rte_Pim_PrevYawRateVld
#endif
#define Rte_Pim_PrevYawRateVld() (&VehSigCdng_Pim_PrevYawRateVld)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
