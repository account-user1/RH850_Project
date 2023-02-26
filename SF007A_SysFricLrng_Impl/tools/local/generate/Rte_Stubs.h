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
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_AssiMechT;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Ip_FricLrngCustEna;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Ip_FricLrngDi;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_HwAg;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_HwAgAuthy;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_HwTq;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_HwVel;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_MotTqCmdCrf;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_VehLatA;
extern VAR(float32, AUTOMATIC) SysFricLrng_Ip_VehSpd;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Ip_VehSpdVld;

/* Outputs */
extern VAR(float32, AUTOMATIC) SysFricLrng_Op_MaxLrndFric;
extern VAR(float32, AUTOMATIC) SysFricLrng_Op_SysFricEstimd;
extern VAR(float32, AUTOMATIC) SysFricLrng_Op_SysFricOffs;
extern VAR(float32, AUTOMATIC) SysFricLrng_Op_SysSatnFricEstimd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngAvrgFricFrq;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngBasLineEolFric;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngBasLineFric[4];
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngBasLineHys[4][8];
extern CONST(uint16, AUTOMATIC) SysFricLrng_Cal_SysFricLrngBasLineRngCntr[3][8];
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngDataPrepLpFilFrq;
extern CONST(uint16, AUTOMATIC) SysFricLrng_Cal_SysFricLrngDebStep;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngEolFricDifHiLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngEolFricDifLoLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngEolFricDifScagFac;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricChgWght[4];
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricDiagcThd;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricHysHwAgPt[4];
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricOffs;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricOffsHiLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricOffsLoLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngFricOffsLpFilFrq;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngGain;
extern CONST(uint16, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHiFricDebStep;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHiFricDiagcThd;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHwPosnAuthyThd;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHwVelConstrLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHwVelHiLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngHwVelLoLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngIgnCycFricChgLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngIgnCycFricOffs;
extern CONST(u11p5, AUTOMATIC) SysFricLrng_Cal_SysFricLrngIvsTrsmRatX[10];
extern CONST(u6p10, AUTOMATIC) SysFricLrng_Cal_SysFricLrngIvsTrsmRatY[10];
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngLatAHiLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngLatALoLim;
extern CONST(boolean, AUTOMATIC) SysFricLrng_Cal_SysFricLrngMaskVehSpd[4];
extern CONST(uint16, AUTOMATIC) SysFricLrng_Cal_SysFricLrngRngCntrThd;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngTHiLim;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngTLoLim;
extern CONST(uint32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngThd;
extern CONST(float32, AUTOMATIC) SysFricLrng_Cal_SysFricLrngVehSpd[2][4];

/* PIMs */
extern VAR(SysFricDataRec1, AUTOMATIC) SysFricLrng_Pim_FricLrngData;
extern VAR(SysFricNonLrngDataRec1, AUTOMATIC) SysFricLrng_Pim_FricNonLrngData;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_AssiMechTLpFil;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_AvrgFricLpFil1;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_AvrgFricLpFil2;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_AvrgFricLpFil3;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_AvrgFricLpFil4;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_ColTqAry[12];
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_ColTqLpFil;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_EstimdFric;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_FilAvrgFric[4];
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_FricChgLpFil;
extern VAR(SysFricLrngOperMod1, AUTOMATIC) SysFricLrng_Pim_FricLrngOperModPrev;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Pim_FricLrngRunOneTi;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_FricOffs;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Pim_FricOffsOutpDi;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_HwAgAuthyLpFil;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_HwAgBuf[12];
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_HwAgLpFil;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_HwVelBuf[12];
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_HwVelLpFil;
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_LatALpFil;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_PrevMaxRawAvrgFric;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_RawAvrgFric[4];
extern VAR(uint32, AUTOMATIC) SysFricLrng_Pim_RefTmrLrngConstr;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_SatnAvrgFric[4];
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_SatnEstimdFric;
extern VAR(float32, AUTOMATIC) SysFricLrng_Pim_VehBasLineFric[4];
extern VAR(FilLpRec1, AUTOMATIC) SysFricLrng_Pim_VehSpdLpFil;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) SysFricLrng_Srv_FricLrngData_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) SysFricLrng_Srv_FricLrngData_SetRamBlockStatus_Return;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Srv_FricNonLrngData_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) SysFricLrng_Srv_FricNonLrngData_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) SysFricLrng_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) SysFricLrng_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) SysFricLrng_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) SysFricLrng_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) SysFricLrng_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) SysFricLrng_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) SysFricLrng_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) SysFricLrng_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) SysFricLrng_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) SysFricLrng_Srv_SetNtcSts_DebStep;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_GetFricData_FricOffs;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_GetFricData_BasLineFric[4];
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_GetFricData_VehLrndFric[4];
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_GetFricData_Hys[8][4];
extern VAR(uint16, AUTOMATIC) SysFricLrng_Cli_GetFricData_RngCntr[8][3];
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_GetFricLrngData_FricLrngEna;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_GetFricLrngData_FricLrngOffsOutpEna;
extern VAR(SysFricLrngOperMod1, AUTOMATIC) SysFricLrng_Cli_GetFricLrngData_FricLrngOperMod;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_GetFricLrngData_EolFric;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_GetFricOffsOutpDi_FricOffsOutpDi;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_SetFricData_FricOffs;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_SetFricData_BasLineFric[4];
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_SetFricData_VehLrndFric[4];
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_SetFricData_Hys[8][4];
extern VAR(uint16, AUTOMATIC) SysFricLrng_Cli_SetFricData_RngCntr[8][3];
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_SetFricLrngData_FricLrngEna;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_SetFricLrngData_FricLrngOffsOutpEna;
extern VAR(SysFricLrngOperMod1, AUTOMATIC) SysFricLrng_Cli_SetFricLrngData_FricLrngOperMod;
extern VAR(float32, AUTOMATIC) SysFricLrng_Cli_SetFricLrngData_EolFric;
extern VAR(boolean, AUTOMATIC) SysFricLrng_Cli_SetFricOffsOutpDi_FricOffsOutpDi;


/*** Input Stubs ***/

#ifdef Rte_Read_AssiMechT_Val
# undef Rte_Read_AssiMechT_Val
#endif
#define Rte_Read_AssiMechT_Val(data) (*(data) = SysFricLrng_Ip_AssiMechT)

#ifdef Rte_Read_FricLrngCustEna_Logl
# undef Rte_Read_FricLrngCustEna_Logl
#endif
#define Rte_Read_FricLrngCustEna_Logl(data) (*(data) = SysFricLrng_Ip_FricLrngCustEna)

#ifdef Rte_Read_FricLrngDi_Logl
# undef Rte_Read_FricLrngDi_Logl
#endif
#define Rte_Read_FricLrngDi_Logl(data) (*(data) = SysFricLrng_Ip_FricLrngDi)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = SysFricLrng_Ip_HwAg)

#ifdef Rte_Read_HwAgAuthy_Val
# undef Rte_Read_HwAgAuthy_Val
#endif
#define Rte_Read_HwAgAuthy_Val(data) (*(data) = SysFricLrng_Ip_HwAgAuthy)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = SysFricLrng_Ip_HwTq)

#ifdef Rte_Read_HwVel_Val
# undef Rte_Read_HwVel_Val
#endif
#define Rte_Read_HwVel_Val(data) (*(data) = SysFricLrng_Ip_HwVel)

#ifdef Rte_Read_MotTqCmdCrf_Val
# undef Rte_Read_MotTqCmdCrf_Val
#endif
#define Rte_Read_MotTqCmdCrf_Val(data) (*(data) = SysFricLrng_Ip_MotTqCmdCrf)

#ifdef Rte_Read_VehLatA_Val
# undef Rte_Read_VehLatA_Val
#endif
#define Rte_Read_VehLatA_Val(data) (*(data) = SysFricLrng_Ip_VehLatA)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = SysFricLrng_Ip_VehSpd)

#ifdef Rte_Read_VehSpdVld_Logl
# undef Rte_Read_VehSpdVld_Logl
#endif
#define Rte_Read_VehSpdVld_Logl(data) (*(data) = SysFricLrng_Ip_VehSpdVld)


/*** Output Stubs ***/

#ifdef Rte_Write_MaxLrndFric_Val
# undef Rte_Write_MaxLrndFric_Val
#endif
#define Rte_Write_MaxLrndFric_Val(data) (SysFricLrng_Op_MaxLrndFric = (data))

#ifdef Rte_Write_SysFricEstimd_Val
# undef Rte_Write_SysFricEstimd_Val
#endif
#define Rte_Write_SysFricEstimd_Val(data) (SysFricLrng_Op_SysFricEstimd = (data))

#ifdef Rte_Write_SysFricOffs_Val
# undef Rte_Write_SysFricOffs_Val
#endif
#define Rte_Write_SysFricOffs_Val(data) (SysFricLrng_Op_SysFricOffs = (data))

#ifdef Rte_Write_SysSatnFricEstimd_Val
# undef Rte_Write_SysSatnFricEstimd_Val
#endif
#define Rte_Write_SysSatnFricEstimd_Val(data) (SysFricLrng_Op_SysSatnFricEstimd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_SysFricLrngAvrgFricFrq_Val
# undef Rte_Prm_SysFricLrngAvrgFricFrq_Val
#endif
#define Rte_Prm_SysFricLrngAvrgFricFrq_Val() (SysFricLrng_Cal_SysFricLrngAvrgFricFrq)

#ifdef Rte_Prm_SysFricLrngBasLineEolFric_Val
# undef Rte_Prm_SysFricLrngBasLineEolFric_Val
#endif
#define Rte_Prm_SysFricLrngBasLineEolFric_Val() (SysFricLrng_Cal_SysFricLrngBasLineEolFric)

#ifdef Rte_Prm_SysFricLrngBasLineFric_Ary1D
# undef Rte_Prm_SysFricLrngBasLineFric_Ary1D
#endif
#define Rte_Prm_SysFricLrngBasLineFric_Ary1D() (&(SysFricLrng_Cal_SysFricLrngBasLineFric[0]))

#ifdef Rte_Prm_SysFricLrngBasLineHys_Ary2D
# undef Rte_Prm_SysFricLrngBasLineHys_Ary2D
#endif
#define Rte_Prm_SysFricLrngBasLineHys_Ary2D() (&(SysFricLrng_Cal_SysFricLrngBasLineHys[0][0]))

#ifdef Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D
# undef Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D
#endif
#define Rte_Prm_SysFricLrngBasLineRngCntr_Ary2D() (&(SysFricLrng_Cal_SysFricLrngBasLineRngCntr[0][0]))

#ifdef Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val
# undef Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val
#endif
#define Rte_Prm_SysFricLrngDataPrepLpFilFrq_Val() (SysFricLrng_Cal_SysFricLrngDataPrepLpFilFrq)

#ifdef Rte_Prm_SysFricLrngDebStep_Val
# undef Rte_Prm_SysFricLrngDebStep_Val
#endif
#define Rte_Prm_SysFricLrngDebStep_Val() (SysFricLrng_Cal_SysFricLrngDebStep)

#ifdef Rte_Prm_SysFricLrngEolFricDifHiLim_Val
# undef Rte_Prm_SysFricLrngEolFricDifHiLim_Val
#endif
#define Rte_Prm_SysFricLrngEolFricDifHiLim_Val() (SysFricLrng_Cal_SysFricLrngEolFricDifHiLim)

#ifdef Rte_Prm_SysFricLrngEolFricDifLoLim_Val
# undef Rte_Prm_SysFricLrngEolFricDifLoLim_Val
#endif
#define Rte_Prm_SysFricLrngEolFricDifLoLim_Val() (SysFricLrng_Cal_SysFricLrngEolFricDifLoLim)

#ifdef Rte_Prm_SysFricLrngEolFricDifScagFac_Val
# undef Rte_Prm_SysFricLrngEolFricDifScagFac_Val
#endif
#define Rte_Prm_SysFricLrngEolFricDifScagFac_Val() (SysFricLrng_Cal_SysFricLrngEolFricDifScagFac)

#ifdef Rte_Prm_SysFricLrngFricChgWght_Ary1D
# undef Rte_Prm_SysFricLrngFricChgWght_Ary1D
#endif
#define Rte_Prm_SysFricLrngFricChgWght_Ary1D() (&(SysFricLrng_Cal_SysFricLrngFricChgWght[0]))

#ifdef Rte_Prm_SysFricLrngFricDiagcThd_Val
# undef Rte_Prm_SysFricLrngFricDiagcThd_Val
#endif
#define Rte_Prm_SysFricLrngFricDiagcThd_Val() (SysFricLrng_Cal_SysFricLrngFricDiagcThd)

#ifdef Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D
# undef Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D
#endif
#define Rte_Prm_SysFricLrngFricHysHwAgPt_Ary1D() (&(SysFricLrng_Cal_SysFricLrngFricHysHwAgPt[0]))

#ifdef Rte_Prm_SysFricLrngFricOffs_Val
# undef Rte_Prm_SysFricLrngFricOffs_Val
#endif
#define Rte_Prm_SysFricLrngFricOffs_Val() (SysFricLrng_Cal_SysFricLrngFricOffs)

#ifdef Rte_Prm_SysFricLrngFricOffsHiLim_Val
# undef Rte_Prm_SysFricLrngFricOffsHiLim_Val
#endif
#define Rte_Prm_SysFricLrngFricOffsHiLim_Val() (SysFricLrng_Cal_SysFricLrngFricOffsHiLim)

#ifdef Rte_Prm_SysFricLrngFricOffsLoLim_Val
# undef Rte_Prm_SysFricLrngFricOffsLoLim_Val
#endif
#define Rte_Prm_SysFricLrngFricOffsLoLim_Val() (SysFricLrng_Cal_SysFricLrngFricOffsLoLim)

#ifdef Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val
# undef Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val
#endif
#define Rte_Prm_SysFricLrngFricOffsLpFilFrq_Val() (SysFricLrng_Cal_SysFricLrngFricOffsLpFilFrq)

#ifdef Rte_Prm_SysFricLrngGain_Val
# undef Rte_Prm_SysFricLrngGain_Val
#endif
#define Rte_Prm_SysFricLrngGain_Val() (SysFricLrng_Cal_SysFricLrngGain)

#ifdef Rte_Prm_SysFricLrngHiFricDebStep_Val
# undef Rte_Prm_SysFricLrngHiFricDebStep_Val
#endif
#define Rte_Prm_SysFricLrngHiFricDebStep_Val() (SysFricLrng_Cal_SysFricLrngHiFricDebStep)

#ifdef Rte_Prm_SysFricLrngHiFricDiagcThd_Val
# undef Rte_Prm_SysFricLrngHiFricDiagcThd_Val
#endif
#define Rte_Prm_SysFricLrngHiFricDiagcThd_Val() (SysFricLrng_Cal_SysFricLrngHiFricDiagcThd)

#ifdef Rte_Prm_SysFricLrngHwPosnAuthyThd_Val
# undef Rte_Prm_SysFricLrngHwPosnAuthyThd_Val
#endif
#define Rte_Prm_SysFricLrngHwPosnAuthyThd_Val() (SysFricLrng_Cal_SysFricLrngHwPosnAuthyThd)

#ifdef Rte_Prm_SysFricLrngHwVelConstrLim_Val
# undef Rte_Prm_SysFricLrngHwVelConstrLim_Val
#endif
#define Rte_Prm_SysFricLrngHwVelConstrLim_Val() (SysFricLrng_Cal_SysFricLrngHwVelConstrLim)

#ifdef Rte_Prm_SysFricLrngHwVelHiLim_Val
# undef Rte_Prm_SysFricLrngHwVelHiLim_Val
#endif
#define Rte_Prm_SysFricLrngHwVelHiLim_Val() (SysFricLrng_Cal_SysFricLrngHwVelHiLim)

#ifdef Rte_Prm_SysFricLrngHwVelLoLim_Val
# undef Rte_Prm_SysFricLrngHwVelLoLim_Val
#endif
#define Rte_Prm_SysFricLrngHwVelLoLim_Val() (SysFricLrng_Cal_SysFricLrngHwVelLoLim)

#ifdef Rte_Prm_SysFricLrngIgnCycFricChgLim_Val
# undef Rte_Prm_SysFricLrngIgnCycFricChgLim_Val
#endif
#define Rte_Prm_SysFricLrngIgnCycFricChgLim_Val() (SysFricLrng_Cal_SysFricLrngIgnCycFricChgLim)

#ifdef Rte_Prm_SysFricLrngIgnCycFricOffs_Val
# undef Rte_Prm_SysFricLrngIgnCycFricOffs_Val
#endif
#define Rte_Prm_SysFricLrngIgnCycFricOffs_Val() (SysFricLrng_Cal_SysFricLrngIgnCycFricOffs)

#ifdef Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D
# undef Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D
#endif
#define Rte_Prm_SysFricLrngIvsTrsmRatX_Ary1D() (&(SysFricLrng_Cal_SysFricLrngIvsTrsmRatX[0]))

#ifdef Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D
# undef Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D
#endif
#define Rte_Prm_SysFricLrngIvsTrsmRatY_Ary1D() (&(SysFricLrng_Cal_SysFricLrngIvsTrsmRatY[0]))

#ifdef Rte_Prm_SysFricLrngLatAHiLim_Val
# undef Rte_Prm_SysFricLrngLatAHiLim_Val
#endif
#define Rte_Prm_SysFricLrngLatAHiLim_Val() (SysFricLrng_Cal_SysFricLrngLatAHiLim)

#ifdef Rte_Prm_SysFricLrngLatALoLim_Val
# undef Rte_Prm_SysFricLrngLatALoLim_Val
#endif
#define Rte_Prm_SysFricLrngLatALoLim_Val() (SysFricLrng_Cal_SysFricLrngLatALoLim)

#ifdef Rte_Prm_SysFricLrngMaskVehSpd_Ary1D
# undef Rte_Prm_SysFricLrngMaskVehSpd_Ary1D
#endif
#define Rte_Prm_SysFricLrngMaskVehSpd_Ary1D() (&(SysFricLrng_Cal_SysFricLrngMaskVehSpd[0]))

#ifdef Rte_Prm_SysFricLrngRngCntrThd_Val
# undef Rte_Prm_SysFricLrngRngCntrThd_Val
#endif
#define Rte_Prm_SysFricLrngRngCntrThd_Val() (SysFricLrng_Cal_SysFricLrngRngCntrThd)

#ifdef Rte_Prm_SysFricLrngTHiLim_Val
# undef Rte_Prm_SysFricLrngTHiLim_Val
#endif
#define Rte_Prm_SysFricLrngTHiLim_Val() (SysFricLrng_Cal_SysFricLrngTHiLim)

#ifdef Rte_Prm_SysFricLrngTLoLim_Val
# undef Rte_Prm_SysFricLrngTLoLim_Val
#endif
#define Rte_Prm_SysFricLrngTLoLim_Val() (SysFricLrng_Cal_SysFricLrngTLoLim)

#ifdef Rte_Prm_SysFricLrngThd_Val
# undef Rte_Prm_SysFricLrngThd_Val
#endif
#define Rte_Prm_SysFricLrngThd_Val() (SysFricLrng_Cal_SysFricLrngThd)

#ifdef Rte_Prm_SysFricLrngVehSpd_Ary2D
# undef Rte_Prm_SysFricLrngVehSpd_Ary2D
#endif
#define Rte_Prm_SysFricLrngVehSpd_Ary2D() (&(SysFricLrng_Cal_SysFricLrngVehSpd[0][0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_FricLrngData
# undef Rte_Pim_FricLrngData
#endif
#define Rte_Pim_FricLrngData() (&SysFricLrng_Pim_FricLrngData)

#ifdef Rte_Pim_FricNonLrngData
# undef Rte_Pim_FricNonLrngData
#endif
#define Rte_Pim_FricNonLrngData() (&SysFricLrng_Pim_FricNonLrngData)

#ifdef Rte_Pim_AssiMechTLpFil
# undef Rte_Pim_AssiMechTLpFil
#endif
#define Rte_Pim_AssiMechTLpFil() (&SysFricLrng_Pim_AssiMechTLpFil)

#ifdef Rte_Pim_AvrgFricLpFil1
# undef Rte_Pim_AvrgFricLpFil1
#endif
#define Rte_Pim_AvrgFricLpFil1() (&SysFricLrng_Pim_AvrgFricLpFil1)

#ifdef Rte_Pim_AvrgFricLpFil2
# undef Rte_Pim_AvrgFricLpFil2
#endif
#define Rte_Pim_AvrgFricLpFil2() (&SysFricLrng_Pim_AvrgFricLpFil2)

#ifdef Rte_Pim_AvrgFricLpFil3
# undef Rte_Pim_AvrgFricLpFil3
#endif
#define Rte_Pim_AvrgFricLpFil3() (&SysFricLrng_Pim_AvrgFricLpFil3)

#ifdef Rte_Pim_AvrgFricLpFil4
# undef Rte_Pim_AvrgFricLpFil4
#endif
#define Rte_Pim_AvrgFricLpFil4() (&SysFricLrng_Pim_AvrgFricLpFil4)

#ifdef Rte_Pim_ColTqAry
# undef Rte_Pim_ColTqAry
#endif
#define Rte_Pim_ColTqAry() (&(SysFricLrng_Pim_ColTqAry[0]))

#ifdef Rte_Pim_ColTqLpFil
# undef Rte_Pim_ColTqLpFil
#endif
#define Rte_Pim_ColTqLpFil() (&SysFricLrng_Pim_ColTqLpFil)

#ifdef Rte_Pim_EstimdFric
# undef Rte_Pim_EstimdFric
#endif
#define Rte_Pim_EstimdFric() (&SysFricLrng_Pim_EstimdFric)

#ifdef Rte_Pim_FilAvrgFric
# undef Rte_Pim_FilAvrgFric
#endif
#define Rte_Pim_FilAvrgFric() (&(SysFricLrng_Pim_FilAvrgFric[0]))

#ifdef Rte_Pim_FricChgLpFil
# undef Rte_Pim_FricChgLpFil
#endif
#define Rte_Pim_FricChgLpFil() (&SysFricLrng_Pim_FricChgLpFil)

#ifdef Rte_Pim_FricLrngOperModPrev
# undef Rte_Pim_FricLrngOperModPrev
#endif
#define Rte_Pim_FricLrngOperModPrev() (&SysFricLrng_Pim_FricLrngOperModPrev)

#ifdef Rte_Pim_FricLrngRunOneTi
# undef Rte_Pim_FricLrngRunOneTi
#endif
#define Rte_Pim_FricLrngRunOneTi() (&SysFricLrng_Pim_FricLrngRunOneTi)

#ifdef Rte_Pim_FricOffs
# undef Rte_Pim_FricOffs
#endif
#define Rte_Pim_FricOffs() (&SysFricLrng_Pim_FricOffs)

#ifdef Rte_Pim_FricOffsOutpDi
# undef Rte_Pim_FricOffsOutpDi
#endif
#define Rte_Pim_FricOffsOutpDi() (&SysFricLrng_Pim_FricOffsOutpDi)

#ifdef Rte_Pim_HwAgAuthyLpFil
# undef Rte_Pim_HwAgAuthyLpFil
#endif
#define Rte_Pim_HwAgAuthyLpFil() (&SysFricLrng_Pim_HwAgAuthyLpFil)

#ifdef Rte_Pim_HwAgBuf
# undef Rte_Pim_HwAgBuf
#endif
#define Rte_Pim_HwAgBuf() (&(SysFricLrng_Pim_HwAgBuf[0]))

#ifdef Rte_Pim_HwAgLpFil
# undef Rte_Pim_HwAgLpFil
#endif
#define Rte_Pim_HwAgLpFil() (&SysFricLrng_Pim_HwAgLpFil)

#ifdef Rte_Pim_HwVelBuf
# undef Rte_Pim_HwVelBuf
#endif
#define Rte_Pim_HwVelBuf() (&(SysFricLrng_Pim_HwVelBuf[0]))

#ifdef Rte_Pim_HwVelLpFil
# undef Rte_Pim_HwVelLpFil
#endif
#define Rte_Pim_HwVelLpFil() (&SysFricLrng_Pim_HwVelLpFil)

#ifdef Rte_Pim_LatALpFil
# undef Rte_Pim_LatALpFil
#endif
#define Rte_Pim_LatALpFil() (&SysFricLrng_Pim_LatALpFil)

#ifdef Rte_Pim_PrevMaxRawAvrgFric
# undef Rte_Pim_PrevMaxRawAvrgFric
#endif
#define Rte_Pim_PrevMaxRawAvrgFric() (&SysFricLrng_Pim_PrevMaxRawAvrgFric)

#ifdef Rte_Pim_RawAvrgFric
# undef Rte_Pim_RawAvrgFric
#endif
#define Rte_Pim_RawAvrgFric() (&(SysFricLrng_Pim_RawAvrgFric[0]))

#ifdef Rte_Pim_RefTmrLrngConstr
# undef Rte_Pim_RefTmrLrngConstr
#endif
#define Rte_Pim_RefTmrLrngConstr() (&SysFricLrng_Pim_RefTmrLrngConstr)

#ifdef Rte_Pim_SatnAvrgFric
# undef Rte_Pim_SatnAvrgFric
#endif
#define Rte_Pim_SatnAvrgFric() (&(SysFricLrng_Pim_SatnAvrgFric[0]))

#ifdef Rte_Pim_SatnEstimdFric
# undef Rte_Pim_SatnEstimdFric
#endif
#define Rte_Pim_SatnEstimdFric() (&SysFricLrng_Pim_SatnEstimdFric)

#ifdef Rte_Pim_VehBasLineFric
# undef Rte_Pim_VehBasLineFric
#endif
#define Rte_Pim_VehBasLineFric() (&(SysFricLrng_Pim_VehBasLineFric[0]))

#ifdef Rte_Pim_VehSpdLpFil
# undef Rte_Pim_VehSpdLpFil
#endif
#define Rte_Pim_VehSpdLpFil() (&SysFricLrng_Pim_VehSpdLpFil)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
