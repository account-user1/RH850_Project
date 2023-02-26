/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_MotCtrlMgr_Data.h
* Module Description: Stub header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H


#include "Rte_CDD_CurrMeas.h"

/*** Manually inserted change ***/
#ifndef Rte_TypeDef_u0p16
typedef uint16 u0p16;
#endif

/*** Extern Statements ***/

extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlBrdgVltg;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlEcuTFild;
extern VAR(u0p16, AUTOMATIC) MOTCTRLMGR_MotCtrlMotAgElec;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyA;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyB;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyC;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild;
extern VAR(sint8, AUTOMATIC) MOTCTRLMGR_MotCtrlMotElecMeclPolarity;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotVelMrf;
extern VAR(uint32, AUTOMATIC) MOTCTRLMGR_MotCtrlPhaOnTiA;
extern VAR(uint32, AUTOMATIC) MOTCTRLMGR_MotCtrlPhaOnTiB;
extern VAR(uint32, AUTOMATIC) MOTCTRLMGR_MotCtrlPhaOnTiC;
extern VAR(uint32, AUTOMATIC) MOTCTRLMGR_MotCtrlPwmPerd;
extern VAR(SysSt1, AUTOMATIC) MOTCTRLMGR_MotCtrlSysSt;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrCorrdA;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrCorrdB;
extern VAR(float32, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrCorrdC;
extern VAR(uint8, AUTOMATIC) MOTCTRLMGR_MotCtrlMotCurrRollgCntr1;
extern VAR(uint16, AUTOMATIC) MOTCTRLMGR_MotCtrlNtc5DErrCnt;


#endif
