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
extern VAR(uint16, AUTOMATIC) FordMsg414BusHiSpd_Ip_Ford_StePinOffst_An_Est;
extern VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordMsg414BusHiSpd_Ip_Ford_StePinOffst_D_Stat1;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Ip_Ford_StePinOffst_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Ip_Ford_StePinOffst_No_Cs;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionAgOffs;
extern VAR(uint16, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionAgOffsRaw;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionAgOffsVld;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionChksVld;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionCntrVld;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionOffsChks;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionOffsCnt;
extern VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionOffsSts;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Op_FordVehSteerPinionOffsStsRaw;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdAgOffsVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdAgOffsVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdAgOffsVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdChksVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdChksVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg414BusHiSpd_Cal_FordMsg414BusHiSpdCntrVldMissThd;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_AgOffsVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_AgOffsVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_AgOffsVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_ChksVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_ChksVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Pim_CntrVldMissRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehMsg414Miss;
extern VAR(float32, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionAgOffsPrev;
extern VAR(uint16, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionAgOffsRawPrev;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionAgOffsVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionChksVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionCntrVldPrev;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionOffsChksPrev;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionOffsCntPrev;
extern VAR(Ford_StePinOffst_D_Stat, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionOffsStsPrev;
extern VAR(uint8, AUTOMATIC) FordMsg414BusHiSpd_Pim_FordVehSteerPinionOffsStsRawPrev;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg414BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
