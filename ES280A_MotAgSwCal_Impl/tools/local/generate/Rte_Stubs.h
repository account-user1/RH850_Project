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

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotAgSwCal_Cal_MotAgSwCalVehSpdThd;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_BoostModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_BoostSlew;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_BoostTi;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_BoostTiOut;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_CoolDwnModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_CoolDwnSlew;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Pim_CoolDwnTi;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_CoolDwnTiOut;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_ElecRevCnt;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_HldModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_HldSlew;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Pim_HldTi;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_HldTiOut;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg2CosAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2CosMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2CosMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2CosMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2CosMeasRawPrev;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg2SinAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2SinMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2SinMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2SinMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg2SinMeasRawPrev;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg5CosAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5CosMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5CosMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5CosMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5CosMeasRawPrev;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg5SinAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5SinMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5SinMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5SinMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg5SinMeasRawPrev;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg6CosAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6CosMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6CosMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6CosMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6CosMeasRawPrev;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_MotAg6SinAdcFaildCntr;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6SinMeasAvrg;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6SinMeasRaw[50];
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6SinMeasRawCumv;
extern VAR(u3p13, AUTOMATIC) MotAgSwCal_Pim_MotAg6SinMeasRawPrev;
extern VAR(u16p16, AUTOMATIC) MotAgSwCal_Pim_PosnIdx;
extern VAR(u0p16, AUTOMATIC) MotAgSwCal_Pim_PosnStepSize;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_Ramp1Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_Ramp2Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_Ramp3Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_SampleIdx;
extern VAR(u16p16, AUTOMATIC) MotAgSwCal_Pim_SamplePosnIdx;
extern VAR(boolean, AUTOMATIC) MotAgSwCal_Pim_SampleRdyFlg;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_SampleStopTi;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_SampleStrtTi;
extern VAR(uint32, AUTOMATIC) MotAgSwCal_Pim_SwCalCycTi;
extern VAR(boolean, AUTOMATIC) MotAgSwCal_Pim_SwCalEna;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Pim_SwCalMotModlnIdx;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Pim_SwCalStepDir;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Srv_SwCalStsCallBack_ElecRev;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Srv_SwCalStsCallBack_PosIdx;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Srv_SwCalStsCallBack_SnsrData[12];
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_BoostModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_HldModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_CoolDwnModlnIdx;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_Ramp1Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_Ramp2Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_Ramp3Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_BoostTi;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_HldTi;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_CoolDwnTi;
extern VAR(u0p16, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_PosnStepSize;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalGetPrm_ElecRevCnt;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_BoostModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_HldModlnIdx;
extern VAR(float32, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_CoolDwnModlnIdx;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_Ramp1Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_Ramp2Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_Ramp3Ti;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_BoostTi;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_HldTi;
extern VAR(uint16, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_CoolDwnTi;
extern VAR(u0p16, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_PosnStepSize;
extern VAR(uint8, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_ElecRevCnt;
extern VAR(Std_ReturnType, AUTOMATIC) MotAgSwCal_Cli_SwCalSetPrm_Return;


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotAgSwCalVehSpdThd_Val
# undef Rte_Prm_MotAgSwCalVehSpdThd_Val
#endif
#define Rte_Prm_MotAgSwCalVehSpdThd_Val() (MotAgSwCal_Cal_MotAgSwCalVehSpdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_BoostModlnIdx
# undef Rte_Pim_BoostModlnIdx
#endif
#define Rte_Pim_BoostModlnIdx() (&MotAgSwCal_Pim_BoostModlnIdx)

#ifdef Rte_Pim_BoostSlew
# undef Rte_Pim_BoostSlew
#endif
#define Rte_Pim_BoostSlew() (&MotAgSwCal_Pim_BoostSlew)

#ifdef Rte_Pim_BoostTi
# undef Rte_Pim_BoostTi
#endif
#define Rte_Pim_BoostTi() (&MotAgSwCal_Pim_BoostTi)

#ifdef Rte_Pim_BoostTiOut
# undef Rte_Pim_BoostTiOut
#endif
#define Rte_Pim_BoostTiOut() (&MotAgSwCal_Pim_BoostTiOut)

#ifdef Rte_Pim_CoolDwnModlnIdx
# undef Rte_Pim_CoolDwnModlnIdx
#endif
#define Rte_Pim_CoolDwnModlnIdx() (&MotAgSwCal_Pim_CoolDwnModlnIdx)

#ifdef Rte_Pim_CoolDwnSlew
# undef Rte_Pim_CoolDwnSlew
#endif
#define Rte_Pim_CoolDwnSlew() (&MotAgSwCal_Pim_CoolDwnSlew)

#ifdef Rte_Pim_CoolDwnTi
# undef Rte_Pim_CoolDwnTi
#endif
#define Rte_Pim_CoolDwnTi() (&MotAgSwCal_Pim_CoolDwnTi)

#ifdef Rte_Pim_CoolDwnTiOut
# undef Rte_Pim_CoolDwnTiOut
#endif
#define Rte_Pim_CoolDwnTiOut() (&MotAgSwCal_Pim_CoolDwnTiOut)

#ifdef Rte_Pim_ElecRevCnt
# undef Rte_Pim_ElecRevCnt
#endif
#define Rte_Pim_ElecRevCnt() (&MotAgSwCal_Pim_ElecRevCnt)

#ifdef Rte_Pim_HldModlnIdx
# undef Rte_Pim_HldModlnIdx
#endif
#define Rte_Pim_HldModlnIdx() (&MotAgSwCal_Pim_HldModlnIdx)

#ifdef Rte_Pim_HldSlew
# undef Rte_Pim_HldSlew
#endif
#define Rte_Pim_HldSlew() (&MotAgSwCal_Pim_HldSlew)

#ifdef Rte_Pim_HldTi
# undef Rte_Pim_HldTi
#endif
#define Rte_Pim_HldTi() (&MotAgSwCal_Pim_HldTi)

#ifdef Rte_Pim_HldTiOut
# undef Rte_Pim_HldTiOut
#endif
#define Rte_Pim_HldTiOut() (&MotAgSwCal_Pim_HldTiOut)

#ifdef Rte_Pim_MotAg2CosAdcFaildCntr
# undef Rte_Pim_MotAg2CosAdcFaildCntr
#endif
#define Rte_Pim_MotAg2CosAdcFaildCntr() (&MotAgSwCal_Pim_MotAg2CosAdcFaildCntr)

#ifdef Rte_Pim_MotAg2CosMeasAvrg
# undef Rte_Pim_MotAg2CosMeasAvrg
#endif
#define Rte_Pim_MotAg2CosMeasAvrg() (&MotAgSwCal_Pim_MotAg2CosMeasAvrg)

#ifdef Rte_Pim_MotAg2CosMeasRaw
# undef Rte_Pim_MotAg2CosMeasRaw
#endif
#define Rte_Pim_MotAg2CosMeasRaw() (&(MotAgSwCal_Pim_MotAg2CosMeasRaw[0]))

#ifdef Rte_Pim_MotAg2CosMeasRawCumv
# undef Rte_Pim_MotAg2CosMeasRawCumv
#endif
#define Rte_Pim_MotAg2CosMeasRawCumv() (&MotAgSwCal_Pim_MotAg2CosMeasRawCumv)

#ifdef Rte_Pim_MotAg2CosMeasRawPrev
# undef Rte_Pim_MotAg2CosMeasRawPrev
#endif
#define Rte_Pim_MotAg2CosMeasRawPrev() (&MotAgSwCal_Pim_MotAg2CosMeasRawPrev)

#ifdef Rte_Pim_MotAg2SinAdcFaildCntr
# undef Rte_Pim_MotAg2SinAdcFaildCntr
#endif
#define Rte_Pim_MotAg2SinAdcFaildCntr() (&MotAgSwCal_Pim_MotAg2SinAdcFaildCntr)

#ifdef Rte_Pim_MotAg2SinMeasAvrg
# undef Rte_Pim_MotAg2SinMeasAvrg
#endif
#define Rte_Pim_MotAg2SinMeasAvrg() (&MotAgSwCal_Pim_MotAg2SinMeasAvrg)

#ifdef Rte_Pim_MotAg2SinMeasRaw
# undef Rte_Pim_MotAg2SinMeasRaw
#endif
#define Rte_Pim_MotAg2SinMeasRaw() (&(MotAgSwCal_Pim_MotAg2SinMeasRaw[0]))

#ifdef Rte_Pim_MotAg2SinMeasRawCumv
# undef Rte_Pim_MotAg2SinMeasRawCumv
#endif
#define Rte_Pim_MotAg2SinMeasRawCumv() (&MotAgSwCal_Pim_MotAg2SinMeasRawCumv)

#ifdef Rte_Pim_MotAg2SinMeasRawPrev
# undef Rte_Pim_MotAg2SinMeasRawPrev
#endif
#define Rte_Pim_MotAg2SinMeasRawPrev() (&MotAgSwCal_Pim_MotAg2SinMeasRawPrev)

#ifdef Rte_Pim_MotAg5CosAdcFaildCntr
# undef Rte_Pim_MotAg5CosAdcFaildCntr
#endif
#define Rte_Pim_MotAg5CosAdcFaildCntr() (&MotAgSwCal_Pim_MotAg5CosAdcFaildCntr)

#ifdef Rte_Pim_MotAg5CosMeasAvrg
# undef Rte_Pim_MotAg5CosMeasAvrg
#endif
#define Rte_Pim_MotAg5CosMeasAvrg() (&MotAgSwCal_Pim_MotAg5CosMeasAvrg)

#ifdef Rte_Pim_MotAg5CosMeasRaw
# undef Rte_Pim_MotAg5CosMeasRaw
#endif
#define Rte_Pim_MotAg5CosMeasRaw() (&(MotAgSwCal_Pim_MotAg5CosMeasRaw[0]))

#ifdef Rte_Pim_MotAg5CosMeasRawCumv
# undef Rte_Pim_MotAg5CosMeasRawCumv
#endif
#define Rte_Pim_MotAg5CosMeasRawCumv() (&MotAgSwCal_Pim_MotAg5CosMeasRawCumv)

#ifdef Rte_Pim_MotAg5CosMeasRawPrev
# undef Rte_Pim_MotAg5CosMeasRawPrev
#endif
#define Rte_Pim_MotAg5CosMeasRawPrev() (&MotAgSwCal_Pim_MotAg5CosMeasRawPrev)

#ifdef Rte_Pim_MotAg5SinAdcFaildCntr
# undef Rte_Pim_MotAg5SinAdcFaildCntr
#endif
#define Rte_Pim_MotAg5SinAdcFaildCntr() (&MotAgSwCal_Pim_MotAg5SinAdcFaildCntr)

#ifdef Rte_Pim_MotAg5SinMeasAvrg
# undef Rte_Pim_MotAg5SinMeasAvrg
#endif
#define Rte_Pim_MotAg5SinMeasAvrg() (&MotAgSwCal_Pim_MotAg5SinMeasAvrg)

#ifdef Rte_Pim_MotAg5SinMeasRaw
# undef Rte_Pim_MotAg5SinMeasRaw
#endif
#define Rte_Pim_MotAg5SinMeasRaw() (&(MotAgSwCal_Pim_MotAg5SinMeasRaw[0]))

#ifdef Rte_Pim_MotAg5SinMeasRawCumv
# undef Rte_Pim_MotAg5SinMeasRawCumv
#endif
#define Rte_Pim_MotAg5SinMeasRawCumv() (&MotAgSwCal_Pim_MotAg5SinMeasRawCumv)

#ifdef Rte_Pim_MotAg5SinMeasRawPrev
# undef Rte_Pim_MotAg5SinMeasRawPrev
#endif
#define Rte_Pim_MotAg5SinMeasRawPrev() (&MotAgSwCal_Pim_MotAg5SinMeasRawPrev)

#ifdef Rte_Pim_MotAg6CosAdcFaildCntr
# undef Rte_Pim_MotAg6CosAdcFaildCntr
#endif
#define Rte_Pim_MotAg6CosAdcFaildCntr() (&MotAgSwCal_Pim_MotAg6CosAdcFaildCntr)

#ifdef Rte_Pim_MotAg6CosMeasAvrg
# undef Rte_Pim_MotAg6CosMeasAvrg
#endif
#define Rte_Pim_MotAg6CosMeasAvrg() (&MotAgSwCal_Pim_MotAg6CosMeasAvrg)

#ifdef Rte_Pim_MotAg6CosMeasRaw
# undef Rte_Pim_MotAg6CosMeasRaw
#endif
#define Rte_Pim_MotAg6CosMeasRaw() (&(MotAgSwCal_Pim_MotAg6CosMeasRaw[0]))

#ifdef Rte_Pim_MotAg6CosMeasRawCumv
# undef Rte_Pim_MotAg6CosMeasRawCumv
#endif
#define Rte_Pim_MotAg6CosMeasRawCumv() (&MotAgSwCal_Pim_MotAg6CosMeasRawCumv)

#ifdef Rte_Pim_MotAg6CosMeasRawPrev
# undef Rte_Pim_MotAg6CosMeasRawPrev
#endif
#define Rte_Pim_MotAg6CosMeasRawPrev() (&MotAgSwCal_Pim_MotAg6CosMeasRawPrev)

#ifdef Rte_Pim_MotAg6SinAdcFaildCntr
# undef Rte_Pim_MotAg6SinAdcFaildCntr
#endif
#define Rte_Pim_MotAg6SinAdcFaildCntr() (&MotAgSwCal_Pim_MotAg6SinAdcFaildCntr)

#ifdef Rte_Pim_MotAg6SinMeasAvrg
# undef Rte_Pim_MotAg6SinMeasAvrg
#endif
#define Rte_Pim_MotAg6SinMeasAvrg() (&MotAgSwCal_Pim_MotAg6SinMeasAvrg)

#ifdef Rte_Pim_MotAg6SinMeasRaw
# undef Rte_Pim_MotAg6SinMeasRaw
#endif
#define Rte_Pim_MotAg6SinMeasRaw() (&(MotAgSwCal_Pim_MotAg6SinMeasRaw[0]))

#ifdef Rte_Pim_MotAg6SinMeasRawCumv
# undef Rte_Pim_MotAg6SinMeasRawCumv
#endif
#define Rte_Pim_MotAg6SinMeasRawCumv() (&MotAgSwCal_Pim_MotAg6SinMeasRawCumv)

#ifdef Rte_Pim_MotAg6SinMeasRawPrev
# undef Rte_Pim_MotAg6SinMeasRawPrev
#endif
#define Rte_Pim_MotAg6SinMeasRawPrev() (&MotAgSwCal_Pim_MotAg6SinMeasRawPrev)

#ifdef Rte_Pim_PosnIdx
# undef Rte_Pim_PosnIdx
#endif
#define Rte_Pim_PosnIdx() (&MotAgSwCal_Pim_PosnIdx)

#ifdef Rte_Pim_PosnStepSize
# undef Rte_Pim_PosnStepSize
#endif
#define Rte_Pim_PosnStepSize() (&MotAgSwCal_Pim_PosnStepSize)

#ifdef Rte_Pim_Ramp1Ti
# undef Rte_Pim_Ramp1Ti
#endif
#define Rte_Pim_Ramp1Ti() (&MotAgSwCal_Pim_Ramp1Ti)

#ifdef Rte_Pim_Ramp2Ti
# undef Rte_Pim_Ramp2Ti
#endif
#define Rte_Pim_Ramp2Ti() (&MotAgSwCal_Pim_Ramp2Ti)

#ifdef Rte_Pim_Ramp3Ti
# undef Rte_Pim_Ramp3Ti
#endif
#define Rte_Pim_Ramp3Ti() (&MotAgSwCal_Pim_Ramp3Ti)

#ifdef Rte_Pim_SampleIdx
# undef Rte_Pim_SampleIdx
#endif
#define Rte_Pim_SampleIdx() (&MotAgSwCal_Pim_SampleIdx)

#ifdef Rte_Pim_SamplePosnIdx
# undef Rte_Pim_SamplePosnIdx
#endif
#define Rte_Pim_SamplePosnIdx() (&MotAgSwCal_Pim_SamplePosnIdx)

#ifdef Rte_Pim_SampleRdyFlg
# undef Rte_Pim_SampleRdyFlg
#endif
#define Rte_Pim_SampleRdyFlg() (&MotAgSwCal_Pim_SampleRdyFlg)

#ifdef Rte_Pim_SampleStopTi
# undef Rte_Pim_SampleStopTi
#endif
#define Rte_Pim_SampleStopTi() (&MotAgSwCal_Pim_SampleStopTi)

#ifdef Rte_Pim_SampleStrtTi
# undef Rte_Pim_SampleStrtTi
#endif
#define Rte_Pim_SampleStrtTi() (&MotAgSwCal_Pim_SampleStrtTi)

#ifdef Rte_Pim_SwCalCycTi
# undef Rte_Pim_SwCalCycTi
#endif
#define Rte_Pim_SwCalCycTi() (&MotAgSwCal_Pim_SwCalCycTi)

#ifdef Rte_Pim_SwCalEna
# undef Rte_Pim_SwCalEna
#endif
#define Rte_Pim_SwCalEna() (&MotAgSwCal_Pim_SwCalEna)

#ifdef Rte_Pim_SwCalMotModlnIdx
# undef Rte_Pim_SwCalMotModlnIdx
#endif
#define Rte_Pim_SwCalMotModlnIdx() (&MotAgSwCal_Pim_SwCalMotModlnIdx)

#ifdef Rte_Pim_SwCalStepDir
# undef Rte_Pim_SwCalStepDir
#endif
#define Rte_Pim_SwCalStepDir() (&MotAgSwCal_Pim_SwCalStepDir)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
