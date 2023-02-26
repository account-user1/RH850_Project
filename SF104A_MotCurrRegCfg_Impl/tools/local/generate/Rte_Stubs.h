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
extern VAR(boolean, AUTOMATIC) MotCurrRegCfg_Ip_DualEcuMotCtrlMtgtnEna;
extern VAR(uint8, AUTOMATIC) MotCurrRegCfg_Ip_MotAndThermProtnLoaMod;
extern VAR(MotCurrEolCalSt2, AUTOMATIC) MotCurrRegCfg_Ip_MotCurrEolCalSt;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Ip_MotInduDaxEstimd;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Ip_MotInduQaxEstimd;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Ip_MotREstimd;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Ip_MotVelMrf;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Ip_VehSpd;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotAgElecDly;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotDampgDax;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotDampgQax;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotIntglGainDax;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotIntglGainQax;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotPropGainDax;
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Op_MotPropGainQax;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgCtrlrDynGainVehSpdCutOff;
extern CONST(boolean, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgCurrLoopSecOrderTrfFctEna;
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgIntglGainSampleTi;
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotAgCompuDly;
extern CONST(u10p6, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotClsdLoopBwDaxY[4];
extern CONST(u10p6, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotClsdLoopBwQaxY[4];
extern CONST(u11p5, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotCtrlPrmSelnX[4];
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotDampgRatDax;
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotDampgRatQax;
extern CONST(u9p7, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotNatFrqDaxY[4];
extern CONST(u9p7, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotNatFrqQaxY[4];
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotRVirtDax;
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotRVirtQax;
extern CONST(float32, AUTOMATIC) MotCurrRegCfg_Cal_MotCurrRegCfgMotVelFilFrq;
extern CONST(boolean, AUTOMATIC) MotCurrRegCfg_Cal_MotRefMdlFbCtrlDi;
extern CONST(uint8, AUTOMATIC) MotCurrRegCfg_Cal_SysGlbPrmMotPoleCnt;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotCurrRegCfg_Pim_dMotCurrRegCfgMotVelMrfFild;
extern VAR(FilLpRec1, AUTOMATIC) MotCurrRegCfg_Pim_MotVelMrfFild;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
# undef Rte_Read_DualEcuMotCtrlMtgtnEna_Logl
#endif
#define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(data) (*(data) = MotCurrRegCfg_Ip_DualEcuMotCtrlMtgtnEna)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = MotCurrRegCfg_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrEolCalSt_Val
# undef Rte_Read_MotCurrEolCalSt_Val
#endif
#define Rte_Read_MotCurrEolCalSt_Val(data) (*(data) = MotCurrRegCfg_Ip_MotCurrEolCalSt)

#ifdef Rte_Read_MotInduDaxEstimd_Val
# undef Rte_Read_MotInduDaxEstimd_Val
#endif
#define Rte_Read_MotInduDaxEstimd_Val(data) (*(data) = MotCurrRegCfg_Ip_MotInduDaxEstimd)

#ifdef Rte_Read_MotInduQaxEstimd_Val
# undef Rte_Read_MotInduQaxEstimd_Val
#endif
#define Rte_Read_MotInduQaxEstimd_Val(data) (*(data) = MotCurrRegCfg_Ip_MotInduQaxEstimd)

#ifdef Rte_Read_MotREstimd_Val
# undef Rte_Read_MotREstimd_Val
#endif
#define Rte_Read_MotREstimd_Val(data) (*(data) = MotCurrRegCfg_Ip_MotREstimd)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = MotCurrRegCfg_Ip_MotVelMrf)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = MotCurrRegCfg_Ip_VehSpd)


/*** Output Stubs ***/

#ifdef Rte_Write_MotAgElecDly_Val
# undef Rte_Write_MotAgElecDly_Val
#endif
#define Rte_Write_MotAgElecDly_Val(data) (MotCurrRegCfg_Op_MotAgElecDly = (data))

#ifdef Rte_Write_MotDampgDax_Val
# undef Rte_Write_MotDampgDax_Val
#endif
#define Rte_Write_MotDampgDax_Val(data) (MotCurrRegCfg_Op_MotDampgDax = (data))

#ifdef Rte_Write_MotDampgQax_Val
# undef Rte_Write_MotDampgQax_Val
#endif
#define Rte_Write_MotDampgQax_Val(data) (MotCurrRegCfg_Op_MotDampgQax = (data))

#ifdef Rte_Write_MotIntglGainDax_Val
# undef Rte_Write_MotIntglGainDax_Val
#endif
#define Rte_Write_MotIntglGainDax_Val(data) (MotCurrRegCfg_Op_MotIntglGainDax = (data))

#ifdef Rte_Write_MotIntglGainQax_Val
# undef Rte_Write_MotIntglGainQax_Val
#endif
#define Rte_Write_MotIntglGainQax_Val(data) (MotCurrRegCfg_Op_MotIntglGainQax = (data))

#ifdef Rte_Write_MotPropGainDax_Val
# undef Rte_Write_MotPropGainDax_Val
#endif
#define Rte_Write_MotPropGainDax_Val(data) (MotCurrRegCfg_Op_MotPropGainDax = (data))

#ifdef Rte_Write_MotPropGainQax_Val
# undef Rte_Write_MotPropGainQax_Val
#endif
#define Rte_Write_MotPropGainQax_Val(data) (MotCurrRegCfg_Op_MotPropGainQax = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val
# undef Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val
#endif
#define Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgCtrlrDynGainVehSpdCutOff)

#ifdef Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl
# undef Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl
#endif
#define Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl() (MotCurrRegCfg_Cal_MotCurrRegCfgCurrLoopSecOrderTrfFctEna)

#ifdef Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val
# undef Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val
#endif
#define Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgIntglGainSampleTi)

#ifdef Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val
# undef Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotAgCompuDly)

#ifdef Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D
# undef Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D
#endif
#define Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D() (&(MotCurrRegCfg_Cal_MotCurrRegCfgMotClsdLoopBwDaxY[0]))

#ifdef Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D
# undef Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D
#endif
#define Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D() (&(MotCurrRegCfg_Cal_MotCurrRegCfgMotClsdLoopBwQaxY[0]))

#ifdef Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D
# undef Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D
#endif
#define Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D() (&(MotCurrRegCfg_Cal_MotCurrRegCfgMotCtrlPrmSelnX[0]))

#ifdef Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val
# undef Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotDampgRatDax)

#ifdef Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val
# undef Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotDampgRatQax)

#ifdef Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D
# undef Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D
#endif
#define Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D() (&(MotCurrRegCfg_Cal_MotCurrRegCfgMotNatFrqDaxY[0]))

#ifdef Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D
# undef Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D
#endif
#define Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D() (&(MotCurrRegCfg_Cal_MotCurrRegCfgMotNatFrqQaxY[0]))

#ifdef Rte_Prm_MotCurrRegCfgMotRVirtDax_Val
# undef Rte_Prm_MotCurrRegCfgMotRVirtDax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotRVirtDax_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotRVirtDax)

#ifdef Rte_Prm_MotCurrRegCfgMotRVirtQax_Val
# undef Rte_Prm_MotCurrRegCfgMotRVirtQax_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotRVirtQax_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotRVirtQax)

#ifdef Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val
# undef Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val
#endif
#define Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val() (MotCurrRegCfg_Cal_MotCurrRegCfgMotVelFilFrq)

#ifdef Rte_Prm_MotRefMdlFbCtrlDi_Logl
# undef Rte_Prm_MotRefMdlFbCtrlDi_Logl
#endif
#define Rte_Prm_MotRefMdlFbCtrlDi_Logl() (MotCurrRegCfg_Cal_MotRefMdlFbCtrlDi)

#ifdef Rte_Prm_SysGlbPrmMotPoleCnt_Val
# undef Rte_Prm_SysGlbPrmMotPoleCnt_Val
#endif
#define Rte_Prm_SysGlbPrmMotPoleCnt_Val() (MotCurrRegCfg_Cal_SysGlbPrmMotPoleCnt)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotCurrRegCfgMotVelMrfFild
# undef Rte_Pim_dMotCurrRegCfgMotVelMrfFild
#endif
#define Rte_Pim_dMotCurrRegCfgMotVelMrfFild() (&MotCurrRegCfg_Pim_dMotCurrRegCfgMotVelMrfFild)

#ifdef Rte_Pim_MotVelMrfFild
# undef Rte_Pim_MotVelMrfFild
#endif
#define Rte_Pim_MotVelMrfFild() (&MotCurrRegCfg_Pim_MotVelMrfFild)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
