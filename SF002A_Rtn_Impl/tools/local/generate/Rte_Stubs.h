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
extern VAR(float32, AUTOMATIC) Rtn_Ip_AssiMechT;
extern VAR(float32, AUTOMATIC) Rtn_Ip_HwAg;
extern VAR(float32, AUTOMATIC) Rtn_Ip_HwAgAuthySca;
extern VAR(float32, AUTOMATIC) Rtn_Ip_HwAgRtnOffs;
extern VAR(float32, AUTOMATIC) Rtn_Ip_HwTq;
extern VAR(float32, AUTOMATIC) Rtn_Ip_HwVel;
extern VAR(boolean, AUTOMATIC) Rtn_Ip_RtnCmdDi;
extern VAR(boolean, AUTOMATIC) Rtn_Ip_RtnCmdDiagcDi;
extern VAR(float32, AUTOMATIC) Rtn_Ip_RtnCmdSca;
extern VAR(float32, AUTOMATIC) Rtn_Ip_RtnCmdScaServo;
extern VAR(float32, AUTOMATIC) Rtn_Ip_VehSpd;
extern VAR(boolean, AUTOMATIC) Rtn_Ip_VehSpdVld;

/* Outputs */
extern VAR(float32, AUTOMATIC) Rtn_Op_RtnCmd;

/* Calibrations */
extern CONST(u12p4, AUTOMATIC) Rtn_Cal_RtnHwAgOffsCalcdX[9][16];
extern CONST(u5p11, AUTOMATIC) Rtn_Cal_RtnHwAgOffsCalcdY[9][16];
extern CONST(u8p8, AUTOMATIC) Rtn_Cal_RtnHwAuthyScaX[4];
extern CONST(u9p7, AUTOMATIC) Rtn_Cal_RtnHwAuthyScaY[4];
extern CONST(float32, AUTOMATIC) Rtn_Cal_RtnHwAuthySlew;
extern CONST(float32, AUTOMATIC) Rtn_Cal_RtnOffsRng;
extern CONST(float32, AUTOMATIC) Rtn_Cal_RtnOffsSlew;
extern CONST(u8p8, AUTOMATIC) Rtn_Cal_RtnScaTqX[9][8];
extern CONST(u8p8, AUTOMATIC) Rtn_Cal_RtnScaTqY[9][8];
extern CONST(u7p9, AUTOMATIC) Rtn_Cal_RtnScaVelX[9][4];
extern CONST(u8p8, AUTOMATIC) Rtn_Cal_RtnScaVelY[9][4];
extern CONST(s11p4, AUTOMATIC) Rtn_Cal_RtnTScaX[14];
extern CONST(u8p8, AUTOMATIC) Rtn_Cal_RtnTScaY[14];
extern CONST(u9p7, AUTOMATIC) Rtn_Cal_RtnVehSpdSeln[9];

/* PIMs */
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnAbsltHwAg;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnAssiMechTRtnSca;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnBascRtn;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnHwAgAuthySca;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnHwAgRtnCmd;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnHwTqRtnSca;
extern VAR(float32, AUTOMATIC) Rtn_Pim_dRtnHwVelRtnSca;
extern VAR(float32, AUTOMATIC) Rtn_Pim_PrevHwAgAuthy;
extern VAR(float32, AUTOMATIC) Rtn_Pim_PrevHwAgOffsLimd;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiMechT_Val
# undef Rte_Read_AssiMechT_Val
#endif
#define Rte_Read_AssiMechT_Val(data) (*(data) = Rtn_Ip_AssiMechT)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = Rtn_Ip_HwAg)

#ifdef Rte_Read_HwAgAuthySca_Val
# undef Rte_Read_HwAgAuthySca_Val
#endif
#define Rte_Read_HwAgAuthySca_Val(data) (*(data) = Rtn_Ip_HwAgAuthySca)

#ifdef Rte_Read_HwAgRtnOffs_Val
# undef Rte_Read_HwAgRtnOffs_Val
#endif
#define Rte_Read_HwAgRtnOffs_Val(data) (*(data) = Rtn_Ip_HwAgRtnOffs)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = Rtn_Ip_HwTq)

#ifdef Rte_Read_HwVel_Val
# undef Rte_Read_HwVel_Val
#endif
#define Rte_Read_HwVel_Val(data) (*(data) = Rtn_Ip_HwVel)

#ifdef Rte_Read_RtnCmdDi_Logl
# undef Rte_Read_RtnCmdDi_Logl
#endif
#define Rte_Read_RtnCmdDi_Logl(data) (*(data) = Rtn_Ip_RtnCmdDi)

#ifdef Rte_Read_RtnCmdDiagcDi_Logl
# undef Rte_Read_RtnCmdDiagcDi_Logl
#endif
#define Rte_Read_RtnCmdDiagcDi_Logl(data) (*(data) = Rtn_Ip_RtnCmdDiagcDi)

#ifdef Rte_Read_RtnCmdSca_Val
# undef Rte_Read_RtnCmdSca_Val
#endif
#define Rte_Read_RtnCmdSca_Val(data) (*(data) = Rtn_Ip_RtnCmdSca)

#ifdef Rte_Read_RtnCmdScaServo_Val
# undef Rte_Read_RtnCmdScaServo_Val
#endif
#define Rte_Read_RtnCmdScaServo_Val(data) (*(data) = Rtn_Ip_RtnCmdScaServo)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = Rtn_Ip_VehSpd)

#ifdef Rte_Read_VehSpdVld_Logl
# undef Rte_Read_VehSpdVld_Logl
#endif
#define Rte_Read_VehSpdVld_Logl(data) (*(data) = Rtn_Ip_VehSpdVld)


/*** Output Stubs ***/

#ifdef Rte_Write_RtnCmd_Val
# undef Rte_Write_RtnCmd_Val
#endif
#define Rte_Write_RtnCmd_Val(data) (Rtn_Op_RtnCmd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_RtnHwAgOffsCalcdX_Ary2D
# undef Rte_Prm_RtnHwAgOffsCalcdX_Ary2D
#endif
#define Rte_Prm_RtnHwAgOffsCalcdX_Ary2D() (&(Rtn_Cal_RtnHwAgOffsCalcdX[0][0]))

#ifdef Rte_Prm_RtnHwAgOffsCalcdY_Ary2D
# undef Rte_Prm_RtnHwAgOffsCalcdY_Ary2D
#endif
#define Rte_Prm_RtnHwAgOffsCalcdY_Ary2D() (&(Rtn_Cal_RtnHwAgOffsCalcdY[0][0]))

#ifdef Rte_Prm_RtnHwAuthyScaX_Ary1D
# undef Rte_Prm_RtnHwAuthyScaX_Ary1D
#endif
#define Rte_Prm_RtnHwAuthyScaX_Ary1D() (&(Rtn_Cal_RtnHwAuthyScaX[0]))

#ifdef Rte_Prm_RtnHwAuthyScaY_Ary1D
# undef Rte_Prm_RtnHwAuthyScaY_Ary1D
#endif
#define Rte_Prm_RtnHwAuthyScaY_Ary1D() (&(Rtn_Cal_RtnHwAuthyScaY[0]))

#ifdef Rte_Prm_RtnHwAuthySlew_Val
# undef Rte_Prm_RtnHwAuthySlew_Val
#endif
#define Rte_Prm_RtnHwAuthySlew_Val() (Rtn_Cal_RtnHwAuthySlew)

#ifdef Rte_Prm_RtnOffsRng_Val
# undef Rte_Prm_RtnOffsRng_Val
#endif
#define Rte_Prm_RtnOffsRng_Val() (Rtn_Cal_RtnOffsRng)

#ifdef Rte_Prm_RtnOffsSlew_Val
# undef Rte_Prm_RtnOffsSlew_Val
#endif
#define Rte_Prm_RtnOffsSlew_Val() (Rtn_Cal_RtnOffsSlew)

#ifdef Rte_Prm_RtnScaTqX_Ary2D
# undef Rte_Prm_RtnScaTqX_Ary2D
#endif
#define Rte_Prm_RtnScaTqX_Ary2D() (&(Rtn_Cal_RtnScaTqX[0][0]))

#ifdef Rte_Prm_RtnScaTqY_Ary2D
# undef Rte_Prm_RtnScaTqY_Ary2D
#endif
#define Rte_Prm_RtnScaTqY_Ary2D() (&(Rtn_Cal_RtnScaTqY[0][0]))

#ifdef Rte_Prm_RtnScaVelX_Ary2D
# undef Rte_Prm_RtnScaVelX_Ary2D
#endif
#define Rte_Prm_RtnScaVelX_Ary2D() (&(Rtn_Cal_RtnScaVelX[0][0]))

#ifdef Rte_Prm_RtnScaVelY_Ary2D
# undef Rte_Prm_RtnScaVelY_Ary2D
#endif
#define Rte_Prm_RtnScaVelY_Ary2D() (&(Rtn_Cal_RtnScaVelY[0][0]))

#ifdef Rte_Prm_RtnTScaX_Ary1D
# undef Rte_Prm_RtnTScaX_Ary1D
#endif
#define Rte_Prm_RtnTScaX_Ary1D() (&(Rtn_Cal_RtnTScaX[0]))

#ifdef Rte_Prm_RtnTScaY_Ary1D
# undef Rte_Prm_RtnTScaY_Ary1D
#endif
#define Rte_Prm_RtnTScaY_Ary1D() (&(Rtn_Cal_RtnTScaY[0]))

#ifdef Rte_Prm_RtnVehSpdSeln_Ary1D
# undef Rte_Prm_RtnVehSpdSeln_Ary1D
#endif
#define Rte_Prm_RtnVehSpdSeln_Ary1D() (&(Rtn_Cal_RtnVehSpdSeln[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dRtnAbsltHwAg
# undef Rte_Pim_dRtnAbsltHwAg
#endif
#define Rte_Pim_dRtnAbsltHwAg() (&Rtn_Pim_dRtnAbsltHwAg)

#ifdef Rte_Pim_dRtnAssiMechTRtnSca
# undef Rte_Pim_dRtnAssiMechTRtnSca
#endif
#define Rte_Pim_dRtnAssiMechTRtnSca() (&Rtn_Pim_dRtnAssiMechTRtnSca)

#ifdef Rte_Pim_dRtnBascRtn
# undef Rte_Pim_dRtnBascRtn
#endif
#define Rte_Pim_dRtnBascRtn() (&Rtn_Pim_dRtnBascRtn)

#ifdef Rte_Pim_dRtnHwAgAuthySca
# undef Rte_Pim_dRtnHwAgAuthySca
#endif
#define Rte_Pim_dRtnHwAgAuthySca() (&Rtn_Pim_dRtnHwAgAuthySca)

#ifdef Rte_Pim_dRtnHwAgRtnCmd
# undef Rte_Pim_dRtnHwAgRtnCmd
#endif
#define Rte_Pim_dRtnHwAgRtnCmd() (&Rtn_Pim_dRtnHwAgRtnCmd)

#ifdef Rte_Pim_dRtnHwTqRtnSca
# undef Rte_Pim_dRtnHwTqRtnSca
#endif
#define Rte_Pim_dRtnHwTqRtnSca() (&Rtn_Pim_dRtnHwTqRtnSca)

#ifdef Rte_Pim_dRtnHwVelRtnSca
# undef Rte_Pim_dRtnHwVelRtnSca
#endif
#define Rte_Pim_dRtnHwVelRtnSca() (&Rtn_Pim_dRtnHwVelRtnSca)

#ifdef Rte_Pim_PrevHwAgAuthy
# undef Rte_Pim_PrevHwAgAuthy
#endif
#define Rte_Pim_PrevHwAgAuthy() (&Rtn_Pim_PrevHwAgAuthy)

#ifdef Rte_Pim_PrevHwAgOffsLimd
# undef Rte_Pim_PrevHwAgOffsLimd
#endif
#define Rte_Pim_PrevHwAgOffsLimd() (&Rtn_Pim_PrevHwAgOffsLimd)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
