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
extern VAR(IvtrFetFltPha1, AUTOMATIC) GtmCfgAndUse_Ip_IvtrFetFltPha;
extern VAR(MotCurrEolCalSt2, AUTOMATIC) GtmCfgAndUse_Ip_MotCurrEolCalSt;
extern VAR(SysSt1, AUTOMATIC) GtmCfgAndUse_Ip_SysSt;

/* Outputs */
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Op_PhaOnTiMeasdA;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Op_PhaOnTiMeasdB;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Op_PhaOnTiMeasdC;

/* Calibrations */
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUseAdcStrtOfCnvn2Offs;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUseAdcStrtOfCnvnPeakOffs;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUseDma2MilliSecToMotCtrlTrig;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUseDmaMotAgATrig;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_GtmCfgAndUsePwmDbnd;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_CurrMeasEolFixdPwmPerd;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_CurrMeasEolOffsHiCmuOffs;
extern CONST(uint32, AUTOMATIC) GtmCfgAndUse_Cal_CurrMeasEolOffsLoCmuOffs;

/* PIMs */
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_AdcStrtOfCnvn2;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_AdcStrtOfCnvnPeak;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_Dma2MilliSecToMotCtrlTrig;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_DmaMotAgATrig;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_DmaMotCtrlTo2MilliSecTrig;
extern VAR(uint16, AUTOMATIC) GtmCfgAndUse_Pim_MissUpdCntr;
extern VAR(uint8, AUTOMATIC) GtmCfgAndUse_Pim_MissUpdIninCntr;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Pim_PhaAFetFldSts;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Pim_PhaBFetFldSts;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Pim_PhaCFetFldSts;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_PhaOnTiCntrAPrev;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_PhaOnTiCntrBPrev;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Pim_PhaOnTiCntrCPrev;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Pim_SysStEnaPrev;

/* Arguments and Returns */
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaALowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaAUpprCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaBLowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaBUpprCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaCLowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctGpioPhaCUpprCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaALowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaAUpprCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaBLowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaBUpprCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaCLowrCmd_Return;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetFctPeriphPhaCUpprCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaALowrCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaALowrCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaAUpprCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaAUpprCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaBLowrCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaBLowrCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaBUpprCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaBUpprCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaCLowrCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaCLowrCmd_Return;
extern VAR(boolean, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaCUpprCmd_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Srv_IoHwAb_SetGpioPhaCUpprCmd_Return;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Cli_GtmGetSent0Data_BufStrt[32];
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Cli_GtmGetSent0Data_Return;
extern VAR(uint32, AUTOMATIC) GtmCfgAndUse_Cli_GtmGetSent1Data_BufStrt[32];
extern VAR(Std_ReturnType, AUTOMATIC) GtmCfgAndUse_Cli_GtmGetSent1Data_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_IvtrFetFltPha_Val
# undef Rte_Read_IvtrFetFltPha_Val
#else
#error Rte_Read_IvtrFetFltPha_Val is missing
#endif
#define Rte_Read_IvtrFetFltPha_Val(data) (*(data) = GtmCfgAndUse_Ip_IvtrFetFltPha)

#ifdef Rte_Read_MotCurrEolCalSt_Val
# undef Rte_Read_MotCurrEolCalSt_Val
#else
#error Rte_Read_MotCurrEolCalSt_Val is missing
#endif
#define Rte_Read_MotCurrEolCalSt_Val(data) (*(data) = GtmCfgAndUse_Ip_MotCurrEolCalSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#else
#error Rte_Read_SysSt_Val is missing
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = GtmCfgAndUse_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_PhaOnTiMeasdA_Val
# undef Rte_Write_PhaOnTiMeasdA_Val
#else
#error Rte_Write_PhaOnTiMeasdA_Val is missing
#endif
#define Rte_Write_PhaOnTiMeasdA_Val(data) (GtmCfgAndUse_Op_PhaOnTiMeasdA = (data))

#ifdef Rte_Write_PhaOnTiMeasdB_Val
# undef Rte_Write_PhaOnTiMeasdB_Val
#else
#error Rte_Write_PhaOnTiMeasdB_Val is missing
#endif
#define Rte_Write_PhaOnTiMeasdB_Val(data) (GtmCfgAndUse_Op_PhaOnTiMeasdB = (data))

#ifdef Rte_Write_PhaOnTiMeasdC_Val
# undef Rte_Write_PhaOnTiMeasdC_Val
#else
#error Rte_Write_PhaOnTiMeasdC_Val is missing
#endif
#define Rte_Write_PhaOnTiMeasdC_Val(data) (GtmCfgAndUse_Op_PhaOnTiMeasdC = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val
# undef Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val
#else
#error Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val() (GtmCfgAndUse_Cal_GtmCfgAndUseAdcStrtOfCnvn2Offs)

#ifdef Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val
# undef Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val
#else
#error Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val() (GtmCfgAndUse_Cal_GtmCfgAndUseAdcStrtOfCnvnPeakOffs)

#ifdef Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val
# undef Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val
#else
#error Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val() (GtmCfgAndUse_Cal_GtmCfgAndUseDma2MilliSecToMotCtrlTrig)

#ifdef Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val
# undef Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val
#else
#error Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val() (GtmCfgAndUse_Cal_GtmCfgAndUseDmaMotAgATrig)

#ifdef Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val
# undef Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val
#else
#error Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val() (GtmCfgAndUse_Cal_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig)

#ifdef Rte_Prm_GtmCfgAndUsePwmDbnd_Val
# undef Rte_Prm_GtmCfgAndUsePwmDbnd_Val
#else
#error Rte_Prm_GtmCfgAndUsePwmDbnd_Val is missing
#endif
#define Rte_Prm_GtmCfgAndUsePwmDbnd_Val() (GtmCfgAndUse_Cal_GtmCfgAndUsePwmDbnd)

#ifdef Rte_Prm_CurrMeasEolFixdPwmPerd_Val
# undef Rte_Prm_CurrMeasEolFixdPwmPerd_Val
#else
#error Rte_Prm_CurrMeasEolFixdPwmPerd_Val is missing
#endif
#define Rte_Prm_CurrMeasEolFixdPwmPerd_Val() (GtmCfgAndUse_Cal_CurrMeasEolFixdPwmPerd)

#ifdef Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val
# undef Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val
#else
#error Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val is missing
#endif
#define Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val() (GtmCfgAndUse_Cal_CurrMeasEolOffsHiCmuOffs)

#ifdef Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val
# undef Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val
#else
#error Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val is missing
#endif
#define Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val() (GtmCfgAndUse_Cal_CurrMeasEolOffsLoCmuOffs)


/*** PIM Stubs ***/

#ifdef Rte_Pim_AdcStrtOfCnvn2
# undef Rte_Pim_AdcStrtOfCnvn2
#else
#error Rte_Pim_AdcStrtOfCnvn2 is missing
#endif
#define Rte_Pim_AdcStrtOfCnvn2() (&GtmCfgAndUse_Pim_AdcStrtOfCnvn2)

#ifdef Rte_Pim_AdcStrtOfCnvnPeak
# undef Rte_Pim_AdcStrtOfCnvnPeak
#else
#error Rte_Pim_AdcStrtOfCnvnPeak is missing
#endif
#define Rte_Pim_AdcStrtOfCnvnPeak() (&GtmCfgAndUse_Pim_AdcStrtOfCnvnPeak)

#ifdef Rte_Pim_Dma2MilliSecToMotCtrlTrig
# undef Rte_Pim_Dma2MilliSecToMotCtrlTrig
#else
#error Rte_Pim_Dma2MilliSecToMotCtrlTrig is missing
#endif
#define Rte_Pim_Dma2MilliSecToMotCtrlTrig() (&GtmCfgAndUse_Pim_Dma2MilliSecToMotCtrlTrig)

#ifdef Rte_Pim_DmaMotAgATrig
# undef Rte_Pim_DmaMotAgATrig
#else
#error Rte_Pim_DmaMotAgATrig is missing
#endif
#define Rte_Pim_DmaMotAgATrig() (&GtmCfgAndUse_Pim_DmaMotAgATrig)

#ifdef Rte_Pim_DmaMotCtrlTo2MilliSecTrig
# undef Rte_Pim_DmaMotCtrlTo2MilliSecTrig
#else
#error Rte_Pim_DmaMotCtrlTo2MilliSecTrig is missing
#endif
#define Rte_Pim_DmaMotCtrlTo2MilliSecTrig() (&GtmCfgAndUse_Pim_DmaMotCtrlTo2MilliSecTrig)

#ifdef Rte_Pim_MissUpdCntr
# undef Rte_Pim_MissUpdCntr
#else
#error Rte_Pim_MissUpdCntr is missing
#endif
#define Rte_Pim_MissUpdCntr() (&GtmCfgAndUse_Pim_MissUpdCntr)

#ifdef Rte_Pim_MissUpdIninCntr
# undef Rte_Pim_MissUpdIninCntr
#else
#error Rte_Pim_MissUpdIninCntr is missing
#endif
#define Rte_Pim_MissUpdIninCntr() (&GtmCfgAndUse_Pim_MissUpdIninCntr)

#ifdef Rte_Pim_PhaAFetFldSts
# undef Rte_Pim_PhaAFetFldSts
#else
#error Rte_Pim_PhaAFetFldSts is missing
#endif
#define Rte_Pim_PhaAFetFldSts() (&GtmCfgAndUse_Pim_PhaAFetFldSts)

#ifdef Rte_Pim_PhaBFetFldSts
# undef Rte_Pim_PhaBFetFldSts
#else
#error Rte_Pim_PhaBFetFldSts is missing
#endif
#define Rte_Pim_PhaBFetFldSts() (&GtmCfgAndUse_Pim_PhaBFetFldSts)

#ifdef Rte_Pim_PhaCFetFldSts
# undef Rte_Pim_PhaCFetFldSts
#else
#error Rte_Pim_PhaCFetFldSts is missing
#endif
#define Rte_Pim_PhaCFetFldSts() (&GtmCfgAndUse_Pim_PhaCFetFldSts)

#ifdef Rte_Pim_PhaOnTiCntrAPrev
# undef Rte_Pim_PhaOnTiCntrAPrev
#else
#error Rte_Pim_PhaOnTiCntrAPrev is missing
#endif
#define Rte_Pim_PhaOnTiCntrAPrev() (&GtmCfgAndUse_Pim_PhaOnTiCntrAPrev)

#ifdef Rte_Pim_PhaOnTiCntrBPrev
# undef Rte_Pim_PhaOnTiCntrBPrev
#else
#error Rte_Pim_PhaOnTiCntrBPrev is missing
#endif
#define Rte_Pim_PhaOnTiCntrBPrev() (&GtmCfgAndUse_Pim_PhaOnTiCntrBPrev)

#ifdef Rte_Pim_PhaOnTiCntrCPrev
# undef Rte_Pim_PhaOnTiCntrCPrev
#else
#error Rte_Pim_PhaOnTiCntrCPrev is missing
#endif
#define Rte_Pim_PhaOnTiCntrCPrev() (&GtmCfgAndUse_Pim_PhaOnTiCntrCPrev)

#ifdef Rte_Pim_SysStEnaPrev
# undef Rte_Pim_SysStEnaPrev
#else
#error Rte_Pim_SysStEnaPrev is missing
#endif
#define Rte_Pim_SysStEnaPrev() (&GtmCfgAndUse_Pim_SysStEnaPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
