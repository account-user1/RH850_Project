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
extern VAR(uint8, AUTOMATIC) ImcSigArbn_Ip_EcuIdn;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_HwAg;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_HwTq;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_MotVelCrf;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PosnServoHwAg;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PosnServoIntgtrSt;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PosnTrakgIntgtrSt1;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PosnTrakgIntgtrSt2;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PullCmpLongTermIntgtrSt;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_PullCmpShoTermIntgtrSt;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Ip_VehSpd;

/* Outputs */
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_HwAgImcCorrd;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_HwTqImcCorrd;
extern VAR(SysSt1, AUTOMATIC) ImcSigArbn_Op_ImcSysSt;
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Op_ImcSysStVld;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_MotVelCrfImcCorrd;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PosnServoHwAgImcCorrd;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PosnServoIntgtrOffs;
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Op_PosnTrakgArbnFltMtgtnEna;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PosnTrakgIntgtrSt1Offs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PosnTrakgIntgtrSt2Offs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PullCmpLongTermIntgtrStOffs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_PullCmpShoTermIntgtrStOffs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Op_VehSpdImcCorrd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnArbnFltTmr;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwTqArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwTqArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnHwTqArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnMotVelArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnMotVelArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnMotVelArbnOffsLim;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPosnServoArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPosnServoIntgtrStArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPosnServoIntgtrStArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPosnTrakg1ArbnOffsLim;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPosnTrakg2ArbnOffsLim;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermIntgtrStArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermArbnOffsLim;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermIntgtrStArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnSysStTmr;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt1ArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt1ArbnLpFil;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt2ArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt2ArbnLpFil;
extern CONST(boolean, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnVehSpdArbnEna;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnVehSpdArbnLpFil;
extern CONST(float32, AUTOMATIC) ImcSigArbn_Cal_ImcSigArbnVehSpdArbnOffsLim;

/* PIMs */
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Pim_ArbnErrPrev;
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Pim_ArbnFltPrev;
extern VAR(uint32, AUTOMATIC) ImcSigArbn_Pim_ArbnFltRefTiEnaLrng;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_HwAgLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_HwAgOffsPrev;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_HwAgTarLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_HwAgTarOffsPrev;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_HwTqLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_HwTqOffsPrev;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_MotVelCrfOffsPrev;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_MotVelLpFil;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_PosnServoIntgtrLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_PosnServoIntgtrOffsPrev;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_PullCmpLongTermCmpLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_PullCmpLongTermIntgtrStOffsPrev;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_PullCmpShoTermCmpLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_PullCmpShoTermIntgtrStOffsPrev;
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Pim_SysStLrngEnaPrev;
extern VAR(uint32, AUTOMATIC) ImcSigArbn_Pim_SysStRefTiEnaLrng;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_TrakgIntgtrSt1LpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_TrakgIntgtrSt1Offs;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_TrakgIntgtrSt2LpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_TrakgIntgtrSt2Offs;
extern VAR(FilLpRec1, AUTOMATIC) ImcSigArbn_Pim_VehSpdLpFil;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Pim_VehSpdOffsPrev;

/* IRVs */
extern VAR(float32, AUTOMATIC) ImcSigArbn_Irv_HwAgOffs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Irv_HwAgTarOffs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Irv_HwTqOffs;
extern VAR(SysSt1, AUTOMATIC) ImcSigArbn_Irv_ImcSysSt10MilliSec;
extern VAR(boolean, AUTOMATIC) ImcSigArbn_Irv_ImcSysStVld10MilliSec;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Irv_MotVelCrfOffs;
extern VAR(float32, AUTOMATIC) ImcSigArbn_Irv_VehSpdOffs;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) ImcSigArbn_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) ImcSigArbn_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) ImcSigArbn_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) ImcSigArbn_Srv_SetNtcSts_NTCActv;
extern VAR(uint8, AUTOMATIC) ImcSigArbn_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) ImcSigArbn_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) ImcSigArbn_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) ImcSigArbn_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_EcuIdn_Val
# undef Rte_Read_EcuIdn_Val
#endif
#define Rte_Read_EcuIdn_Val(data) (*(data) = ImcSigArbn_Ip_EcuIdn)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = ImcSigArbn_Ip_HwAg)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = ImcSigArbn_Ip_HwTq)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = ImcSigArbn_Ip_MotVelCrf)

#ifdef Rte_Read_PosnServoHwAg_Val
# undef Rte_Read_PosnServoHwAg_Val
#endif
#define Rte_Read_PosnServoHwAg_Val(data) (*(data) = ImcSigArbn_Ip_PosnServoHwAg)

#ifdef Rte_Read_PosnServoIntgtrSt_Val
# undef Rte_Read_PosnServoIntgtrSt_Val
#endif
#define Rte_Read_PosnServoIntgtrSt_Val(data) (*(data) = ImcSigArbn_Ip_PosnServoIntgtrSt)

#ifdef Rte_Read_PosnTrakgIntgtrSt1_Val
# undef Rte_Read_PosnTrakgIntgtrSt1_Val
#endif
#define Rte_Read_PosnTrakgIntgtrSt1_Val(data) (*(data) = ImcSigArbn_Ip_PosnTrakgIntgtrSt1)

#ifdef Rte_Read_PosnTrakgIntgtrSt2_Val
# undef Rte_Read_PosnTrakgIntgtrSt2_Val
#endif
#define Rte_Read_PosnTrakgIntgtrSt2_Val(data) (*(data) = ImcSigArbn_Ip_PosnTrakgIntgtrSt2)

#ifdef Rte_Read_PullCmpLongTermIntgtrSt_Val
# undef Rte_Read_PullCmpLongTermIntgtrSt_Val
#endif
#define Rte_Read_PullCmpLongTermIntgtrSt_Val(data) (*(data) = ImcSigArbn_Ip_PullCmpLongTermIntgtrSt)

#ifdef Rte_Read_PullCmpShoTermIntgtrSt_Val
# undef Rte_Read_PullCmpShoTermIntgtrSt_Val
#endif
#define Rte_Read_PullCmpShoTermIntgtrSt_Val(data) (*(data) = ImcSigArbn_Ip_PullCmpShoTermIntgtrSt)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = ImcSigArbn_Ip_VehSpd)


/*** Output Stubs ***/

#ifdef Rte_Write_HwAgImcCorrd_Val
# undef Rte_Write_HwAgImcCorrd_Val
#endif
#define Rte_Write_HwAgImcCorrd_Val(data) (ImcSigArbn_Op_HwAgImcCorrd = (data))

#ifdef Rte_Write_HwTqImcCorrd_Val
# undef Rte_Write_HwTqImcCorrd_Val
#endif
#define Rte_Write_HwTqImcCorrd_Val(data) (ImcSigArbn_Op_HwTqImcCorrd = (data))

#ifdef Rte_Write_ImcSysSt_Val
# undef Rte_Write_ImcSysSt_Val
#endif
#define Rte_Write_ImcSysSt_Val(data) (ImcSigArbn_Op_ImcSysSt = (data))

#ifdef Rte_Write_ImcSysStVld_Logl
# undef Rte_Write_ImcSysStVld_Logl
#endif
#define Rte_Write_ImcSysStVld_Logl(data) (ImcSigArbn_Op_ImcSysStVld = (data))

#ifdef Rte_Write_MotVelCrfImcCorrd_Val
# undef Rte_Write_MotVelCrfImcCorrd_Val
#endif
#define Rte_Write_MotVelCrfImcCorrd_Val(data) (ImcSigArbn_Op_MotVelCrfImcCorrd = (data))

#ifdef Rte_Write_PosnServoHwAgImcCorrd_Val
# undef Rte_Write_PosnServoHwAgImcCorrd_Val
#endif
#define Rte_Write_PosnServoHwAgImcCorrd_Val(data) (ImcSigArbn_Op_PosnServoHwAgImcCorrd = (data))

#ifdef Rte_Write_PosnServoIntgtrOffs_Val
# undef Rte_Write_PosnServoIntgtrOffs_Val
#endif
#define Rte_Write_PosnServoIntgtrOffs_Val(data) (ImcSigArbn_Op_PosnServoIntgtrOffs = (data))

#ifdef Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl
# undef Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl
#endif
#define Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl(data) (ImcSigArbn_Op_PosnTrakgArbnFltMtgtnEna = (data))

#ifdef Rte_Write_PosnTrakgIntgtrSt1Offs_Val
# undef Rte_Write_PosnTrakgIntgtrSt1Offs_Val
#endif
#define Rte_Write_PosnTrakgIntgtrSt1Offs_Val(data) (ImcSigArbn_Op_PosnTrakgIntgtrSt1Offs = (data))

#ifdef Rte_Write_PosnTrakgIntgtrSt2Offs_Val
# undef Rte_Write_PosnTrakgIntgtrSt2Offs_Val
#endif
#define Rte_Write_PosnTrakgIntgtrSt2Offs_Val(data) (ImcSigArbn_Op_PosnTrakgIntgtrSt2Offs = (data))

#ifdef Rte_Write_PullCmpLongTermIntgtrStOffs_Val
# undef Rte_Write_PullCmpLongTermIntgtrStOffs_Val
#endif
#define Rte_Write_PullCmpLongTermIntgtrStOffs_Val(data) (ImcSigArbn_Op_PullCmpLongTermIntgtrStOffs = (data))

#ifdef Rte_Write_PullCmpShoTermIntgtrStOffs_Val
# undef Rte_Write_PullCmpShoTermIntgtrStOffs_Val
#endif
#define Rte_Write_PullCmpShoTermIntgtrStOffs_Val(data) (ImcSigArbn_Op_PullCmpShoTermIntgtrStOffs = (data))

#ifdef Rte_Write_VehSpdImcCorrd_Val
# undef Rte_Write_VehSpdImcCorrd_Val
#endif
#define Rte_Write_VehSpdImcCorrd_Val(data) (ImcSigArbn_Op_VehSpdImcCorrd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_ImcSigArbnArbnFltTmr_Val
# undef Rte_Prm_ImcSigArbnArbnFltTmr_Val
#endif
#define Rte_Prm_ImcSigArbnArbnFltTmr_Val() (ImcSigArbn_Cal_ImcSigArbnArbnFltTmr)

#ifdef Rte_Prm_ImcSigArbnHwAgArbnEna_Logl
# undef Rte_Prm_ImcSigArbnHwAgArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnHwAgArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnHwAgArbnEna)

#ifdef Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnHwAgArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnHwAgArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl
# undef Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnEna)

#ifdef Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnHwAgTarArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnHwTqArbnEna_Logl
# undef Rte_Prm_ImcSigArbnHwTqArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnHwTqArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnHwTqArbnEna)

#ifdef Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnHwTqArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnHwTqArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnMotVelArbnEna_Logl
# undef Rte_Prm_ImcSigArbnMotVelArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnMotVelArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnMotVelArbnEna)

#ifdef Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnMotVelArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnMotVelArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnPosnServoArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl
# undef Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnPosnServoIntgtrStArbnEna)

#ifdef Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnPosnServoIntgtrStArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnPosnTrakg1ArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnPosnTrakg2ArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl
# undef Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermIntgtrStArbnEna)

#ifdef Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermArbnOffsLim)

#ifdef Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl
# undef Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermIntgtrStArbnEna)

#ifdef Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnSysStTmr_Val
# undef Rte_Prm_ImcSigArbnSysStTmr_Val
#endif
#define Rte_Prm_ImcSigArbnSysStTmr_Val() (ImcSigArbn_Cal_ImcSigArbnSysStTmr)

#ifdef Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl
# undef Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt1ArbnEna)

#ifdef Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt1ArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl
# undef Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt2ArbnEna)

#ifdef Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnTrakgIntgtrSt2ArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl
# undef Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl
#endif
#define Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl() (ImcSigArbn_Cal_ImcSigArbnVehSpdArbnEna)

#ifdef Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val
# undef Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val
#endif
#define Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val() (ImcSigArbn_Cal_ImcSigArbnVehSpdArbnLpFil)

#ifdef Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val
# undef Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val
#endif
#define Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val() (ImcSigArbn_Cal_ImcSigArbnVehSpdArbnOffsLim)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ArbnErrPrev
# undef Rte_Pim_ArbnErrPrev
#endif
#define Rte_Pim_ArbnErrPrev() (&ImcSigArbn_Pim_ArbnErrPrev)

#ifdef Rte_Pim_ArbnFltPrev
# undef Rte_Pim_ArbnFltPrev
#endif
#define Rte_Pim_ArbnFltPrev() (&ImcSigArbn_Pim_ArbnFltPrev)

#ifdef Rte_Pim_ArbnFltRefTiEnaLrng
# undef Rte_Pim_ArbnFltRefTiEnaLrng
#endif
#define Rte_Pim_ArbnFltRefTiEnaLrng() (&ImcSigArbn_Pim_ArbnFltRefTiEnaLrng)

#ifdef Rte_Pim_HwAgLpFil
# undef Rte_Pim_HwAgLpFil
#endif
#define Rte_Pim_HwAgLpFil() (&ImcSigArbn_Pim_HwAgLpFil)

#ifdef Rte_Pim_HwAgOffsPrev
# undef Rte_Pim_HwAgOffsPrev
#endif
#define Rte_Pim_HwAgOffsPrev() (&ImcSigArbn_Pim_HwAgOffsPrev)

#ifdef Rte_Pim_HwAgTarLpFil
# undef Rte_Pim_HwAgTarLpFil
#endif
#define Rte_Pim_HwAgTarLpFil() (&ImcSigArbn_Pim_HwAgTarLpFil)

#ifdef Rte_Pim_HwAgTarOffsPrev
# undef Rte_Pim_HwAgTarOffsPrev
#endif
#define Rte_Pim_HwAgTarOffsPrev() (&ImcSigArbn_Pim_HwAgTarOffsPrev)

#ifdef Rte_Pim_HwTqLpFil
# undef Rte_Pim_HwTqLpFil
#endif
#define Rte_Pim_HwTqLpFil() (&ImcSigArbn_Pim_HwTqLpFil)

#ifdef Rte_Pim_HwTqOffsPrev
# undef Rte_Pim_HwTqOffsPrev
#endif
#define Rte_Pim_HwTqOffsPrev() (&ImcSigArbn_Pim_HwTqOffsPrev)

#ifdef Rte_Pim_MotVelCrfOffsPrev
# undef Rte_Pim_MotVelCrfOffsPrev
#endif
#define Rte_Pim_MotVelCrfOffsPrev() (&ImcSigArbn_Pim_MotVelCrfOffsPrev)

#ifdef Rte_Pim_MotVelLpFil
# undef Rte_Pim_MotVelLpFil
#endif
#define Rte_Pim_MotVelLpFil() (&ImcSigArbn_Pim_MotVelLpFil)

#ifdef Rte_Pim_PosnServoIntgtrLpFil
# undef Rte_Pim_PosnServoIntgtrLpFil
#endif
#define Rte_Pim_PosnServoIntgtrLpFil() (&ImcSigArbn_Pim_PosnServoIntgtrLpFil)

#ifdef Rte_Pim_PosnServoIntgtrOffsPrev
# undef Rte_Pim_PosnServoIntgtrOffsPrev
#endif
#define Rte_Pim_PosnServoIntgtrOffsPrev() (&ImcSigArbn_Pim_PosnServoIntgtrOffsPrev)

#ifdef Rte_Pim_PullCmpLongTermCmpLpFil
# undef Rte_Pim_PullCmpLongTermCmpLpFil
#endif
#define Rte_Pim_PullCmpLongTermCmpLpFil() (&ImcSigArbn_Pim_PullCmpLongTermCmpLpFil)

#ifdef Rte_Pim_PullCmpLongTermIntgtrStOffsPrev
# undef Rte_Pim_PullCmpLongTermIntgtrStOffsPrev
#endif
#define Rte_Pim_PullCmpLongTermIntgtrStOffsPrev() (&ImcSigArbn_Pim_PullCmpLongTermIntgtrStOffsPrev)

#ifdef Rte_Pim_PullCmpShoTermCmpLpFil
# undef Rte_Pim_PullCmpShoTermCmpLpFil
#endif
#define Rte_Pim_PullCmpShoTermCmpLpFil() (&ImcSigArbn_Pim_PullCmpShoTermCmpLpFil)

#ifdef Rte_Pim_PullCmpShoTermIntgtrStOffsPrev
# undef Rte_Pim_PullCmpShoTermIntgtrStOffsPrev
#endif
#define Rte_Pim_PullCmpShoTermIntgtrStOffsPrev() (&ImcSigArbn_Pim_PullCmpShoTermIntgtrStOffsPrev)

#ifdef Rte_Pim_SysStLrngEnaPrev
# undef Rte_Pim_SysStLrngEnaPrev
#endif
#define Rte_Pim_SysStLrngEnaPrev() (&ImcSigArbn_Pim_SysStLrngEnaPrev)

#ifdef Rte_Pim_SysStRefTiEnaLrng
# undef Rte_Pim_SysStRefTiEnaLrng
#endif
#define Rte_Pim_SysStRefTiEnaLrng() (&ImcSigArbn_Pim_SysStRefTiEnaLrng)

#ifdef Rte_Pim_TrakgIntgtrSt1LpFil
# undef Rte_Pim_TrakgIntgtrSt1LpFil
#endif
#define Rte_Pim_TrakgIntgtrSt1LpFil() (&ImcSigArbn_Pim_TrakgIntgtrSt1LpFil)

#ifdef Rte_Pim_TrakgIntgtrSt1Offs
# undef Rte_Pim_TrakgIntgtrSt1Offs
#endif
#define Rte_Pim_TrakgIntgtrSt1Offs() (&ImcSigArbn_Pim_TrakgIntgtrSt1Offs)

#ifdef Rte_Pim_TrakgIntgtrSt2LpFil
# undef Rte_Pim_TrakgIntgtrSt2LpFil
#endif
#define Rte_Pim_TrakgIntgtrSt2LpFil() (&ImcSigArbn_Pim_TrakgIntgtrSt2LpFil)

#ifdef Rte_Pim_TrakgIntgtrSt2Offs
# undef Rte_Pim_TrakgIntgtrSt2Offs
#endif
#define Rte_Pim_TrakgIntgtrSt2Offs() (&ImcSigArbn_Pim_TrakgIntgtrSt2Offs)

#ifdef Rte_Pim_VehSpdLpFil
# undef Rte_Pim_VehSpdLpFil
#endif
#define Rte_Pim_VehSpdLpFil() (&ImcSigArbn_Pim_VehSpdLpFil)

#ifdef Rte_Pim_VehSpdOffsPrev
# undef Rte_Pim_VehSpdOffsPrev
#endif
#define Rte_Pim_VehSpdOffsPrev() (&ImcSigArbn_Pim_VehSpdOffsPrev)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_ImcSigArbnPer1_HwAgOffs
# undef Rte_IrvRead_ImcSigArbnPer1_HwAgOffs
#endif
#define Rte_IrvRead_ImcSigArbnPer1_HwAgOffs() (ImcSigArbn_Irv_HwAgOffs)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs
# undef Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(data) (ImcSigArbn_Irv_HwAgOffs = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs
# undef Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs
#endif
#define Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs() (ImcSigArbn_Irv_HwAgTarOffs)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs
# undef Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(data) (ImcSigArbn_Irv_HwAgTarOffs = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_HwTqOffs
# undef Rte_IrvRead_ImcSigArbnPer1_HwTqOffs
#endif
#define Rte_IrvRead_ImcSigArbnPer1_HwTqOffs() (ImcSigArbn_Irv_HwTqOffs)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs
# undef Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(data) (ImcSigArbn_Irv_HwTqOffs = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec
# undef Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec
#endif
#define Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec() (ImcSigArbn_Irv_ImcSysSt10MilliSec)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec
# undef Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(data) (ImcSigArbn_Irv_ImcSysSt10MilliSec = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec
# undef Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec
#endif
#define Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec() (ImcSigArbn_Irv_ImcSysStVld10MilliSec)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec
# undef Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(data) (ImcSigArbn_Irv_ImcSysStVld10MilliSec = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs
# undef Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs
#endif
#define Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs() (ImcSigArbn_Irv_MotVelCrfOffs)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs
# undef Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(data) (ImcSigArbn_Irv_MotVelCrfOffs = (data))

#ifdef Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs
# undef Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs
#endif
#define Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs() (ImcSigArbn_Irv_VehSpdOffs)

#ifdef Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs
# undef Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs
#endif
#define Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(data) (ImcSigArbn_Irv_VehSpdOffs = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
