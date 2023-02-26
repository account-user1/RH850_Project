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
extern VAR(uint8, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_EcuId;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FildVehSpd;
extern VAR(FordArbnCmd1, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnArbnCmd;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnTqReq;
extern VAR(FordArbnCmd1, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiArbnCmd;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiTqReq;
extern VAR(FordArbnCmd1, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiArbnCmd;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiTqReq;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Ip_VehSpdVld;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Op_FordColTqOvrl;

/* Calibrations */
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdBwY[8];
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdTqRateY[8];
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdTqSatnY[8];
extern CONST(uint16, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX[8];
extern CONST(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrDftSpdRate;
extern CONST(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrDftSpdRcvrRate;
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaBwY[8];
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaTqRateY[8];
extern CONST(u13p3, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaTqSatnY[8];
extern CONST(uint16, AUTOMATIC) FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrVehSpdBreakPtX[8];

/* PIMs */
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Pim_LimrDftVehSpd;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Pim_LimrVehSpdPrev;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Pim_PrevDftVehSpd;

/* IRVs */
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnTqReq;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiTqReq;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_FildVehSpdVal;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiFctCallSts;
extern VAR(float32, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiTqReq;
extern VAR(boolean, AUTOMATIC) FordHwTqCmdOvrlLimr_Irv_VehSpdVldVal;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_EcuId_Val
# undef Rte_Read_EcuId_Val
#else
#error Rte_Read_EcuId_Val is missing
#endif
#define Rte_Read_EcuId_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_EcuId)

#ifdef Rte_Read_FildVehSpd_Val
# undef Rte_Read_FildVehSpd_Val
#else
#error Rte_Read_FildVehSpd_Val is missing
#endif
#define Rte_Read_FildVehSpd_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FildVehSpd)

#ifdef Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val
# undef Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val
#else
#error Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val is missing
#endif
#define Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnArbnCmd)

#ifdef Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl
# undef Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl
#else
#error Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl is missing
#endif
#define Rte_Read_FordDrvrSteerRcmdnFctCallSts_Logl(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnFctCallSts)

#ifdef Rte_Read_FordDrvrSteerRcmdnTqReq_Val
# undef Rte_Read_FordDrvrSteerRcmdnTqReq_Val
#else
#error Rte_Read_FordDrvrSteerRcmdnTqReq_Val is missing
#endif
#define Rte_Read_FordDrvrSteerRcmdnTqReq_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordDrvrSteerRcmdnTqReq)

#ifdef Rte_Read_FordEvasSteerAssiArbnCmd_Val
# undef Rte_Read_FordEvasSteerAssiArbnCmd_Val
#else
#error Rte_Read_FordEvasSteerAssiArbnCmd_Val is missing
#endif
#define Rte_Read_FordEvasSteerAssiArbnCmd_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiArbnCmd)

#ifdef Rte_Read_FordEvasSteerAssiFctCallSts_Logl
# undef Rte_Read_FordEvasSteerAssiFctCallSts_Logl
#else
#error Rte_Read_FordEvasSteerAssiFctCallSts_Logl is missing
#endif
#define Rte_Read_FordEvasSteerAssiFctCallSts_Logl(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiFctCallSts)

#ifdef Rte_Read_FordEvasSteerAssiTqReq_Val
# undef Rte_Read_FordEvasSteerAssiTqReq_Val
#else
#error Rte_Read_FordEvasSteerAssiTqReq_Val is missing
#endif
#define Rte_Read_FordEvasSteerAssiTqReq_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordEvasSteerAssiTqReq)

#ifdef Rte_Read_FordLaneKeepAssiArbnCmd_Val
# undef Rte_Read_FordLaneKeepAssiArbnCmd_Val
#else
#error Rte_Read_FordLaneKeepAssiArbnCmd_Val is missing
#endif
#define Rte_Read_FordLaneKeepAssiArbnCmd_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiArbnCmd)

#ifdef Rte_Read_FordLaneKeepAssiFctCallSts_Logl
# undef Rte_Read_FordLaneKeepAssiFctCallSts_Logl
#else
#error Rte_Read_FordLaneKeepAssiFctCallSts_Logl is missing
#endif
#define Rte_Read_FordLaneKeepAssiFctCallSts_Logl(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiFctCallSts)

#ifdef Rte_Read_FordLaneKeepAssiTqReq_Val
# undef Rte_Read_FordLaneKeepAssiTqReq_Val
#else
#error Rte_Read_FordLaneKeepAssiTqReq_Val is missing
#endif
#define Rte_Read_FordLaneKeepAssiTqReq_Val(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_FordLaneKeepAssiTqReq)

#ifdef Rte_Read_VehSpdVld_Logl
# undef Rte_Read_VehSpdVld_Logl
#else
#error Rte_Read_VehSpdVld_Logl is missing
#endif
#define Rte_Read_VehSpdVld_Logl(data) (*(data) = FordHwTqCmdOvrlLimr_Ip_VehSpdVld)


/*** Output Stubs ***/

#ifdef Rte_Write_FordColTqOvrl_Val
# undef Rte_Write_FordColTqOvrl_Val
#else
#error Rte_Write_FordColTqOvrl_Val is missing
#endif
#define Rte_Write_FordColTqOvrl_Val(data) (FordHwTqCmdOvrlLimr_Op_FordColTqOvrl = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrCombdBwY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdBwY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqRateY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdTqRateY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrCombdTqSatnY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdTqSatnY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrCombdVehSpdBreakPtX[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val
# undef Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRate_Val() (FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrDftSpdRate)

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val
# undef Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrDftSpdRcvrRate_Val() (FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrDftSpdRcvrRate)

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrLkaBwY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaBwY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqRateY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaTqRateY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrLkaTqSatnY_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrLkaTqSatnY[0]))

#ifdef Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D
# undef Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D
#else
#error Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D is missing
#endif
#define Rte_Prm_FordHwTqCmdOvrlLimrVehSpdBreakPtX_Ary1D() (&(FordHwTqCmdOvrlLimr_Cal_FordHwTqCmdOvrlLimrVehSpdBreakPtX[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_LimrDftVehSpd
# undef Rte_Pim_LimrDftVehSpd
#else
#error Rte_Pim_LimrDftVehSpd is missing
#endif
#define Rte_Pim_LimrDftVehSpd() (&FordHwTqCmdOvrlLimr_Pim_LimrDftVehSpd)

#ifdef Rte_Pim_LimrVehSpdPrev
# undef Rte_Pim_LimrVehSpdPrev
#else
#error Rte_Pim_LimrVehSpdPrev is missing
#endif
#define Rte_Pim_LimrVehSpdPrev() (&FordHwTqCmdOvrlLimr_Pim_LimrVehSpdPrev)

#ifdef Rte_Pim_PrevDftVehSpd
# undef Rte_Pim_PrevDftVehSpd
#else
#error Rte_Pim_PrevDftVehSpd is missing
#endif
#define Rte_Pim_PrevDftVehSpd() (&FordHwTqCmdOvrlLimr_Pim_PrevDftVehSpd)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts
#else
#error DrvrSteerRcmdnFctCallSts is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnFctCallSts() (FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnFctCallSts)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts
#else
#error DrvrSteerRcmdnFctCallSts is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnFctCallSts(data) (FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnFctCallSts = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq
#else
#error DrvrSteerRcmdnTqReq is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_DrvrSteerRcmdnTqReq() (FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnTqReq)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq
#else
#error DrvrSteerRcmdnTqReq is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_DrvrSteerRcmdnTqReq(data) (FordHwTqCmdOvrlLimr_Irv_DrvrSteerRcmdnTqReq = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts
#else
#error EvasSteerAssiFctCallSts is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiFctCallSts() (FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiFctCallSts)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts
#else
#error EvasSteerAssiFctCallSts is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiFctCallSts(data) (FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiFctCallSts = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq
#else
#error EvasSteerAssiTqReq is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_EvasSteerAssiTqReq() (FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiTqReq)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq
#else
#error EvasSteerAssiTqReq is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_EvasSteerAssiTqReq(data) (FordHwTqCmdOvrlLimr_Irv_EvasSteerAssiTqReq = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal
#else
#error FildVehSpdVal is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_FildVehSpdVal() (FordHwTqCmdOvrlLimr_Irv_FildVehSpdVal)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal
#else
#error FildVehSpdVal is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_FildVehSpdVal(data) (FordHwTqCmdOvrlLimr_Irv_FildVehSpdVal = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts
#else
#error LaneKeepAssiFctCallSts is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiFctCallSts() (FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiFctCallSts)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts
#else
#error LaneKeepAssiFctCallSts is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiFctCallSts(data) (FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiFctCallSts = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq
#else
#error LaneKeepAssiTqReq is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_LaneKeepAssiTqReq() (FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiTqReq)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq
#else
#error LaneKeepAssiTqReq is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_LaneKeepAssiTqReq(data) (FordHwTqCmdOvrlLimr_Irv_LaneKeepAssiTqReq = (data))

#ifdef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal
# undef Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal
#else
#error VehSpdVldVal is missing
#endif
#define Rte_IrvRead_FordHwTqCmdOvrlLimrPer1_VehSpdVldVal() (FordHwTqCmdOvrlLimr_Irv_VehSpdVldVal)

#ifdef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal
# undef Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal
#else
#error VehSpdVldVal is missing
#endif
#define Rte_IrvWrite_FordHwTqCmdOvrlLimrPer2_VehSpdVldVal(data) (FordHwTqCmdOvrlLimr_Irv_VehSpdVldVal = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
