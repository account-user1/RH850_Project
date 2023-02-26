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
extern VAR(s18p13, AUTOMATIC) MotQuadDetn_Ip_MotAgCumvAlgndMrf;
extern VAR(float32, AUTOMATIC) MotQuadDetn_Ip_MotTqCmd;

/* Outputs */
extern VAR(sint8, AUTOMATIC) MotQuadDetn_Op_MotDirInsts;
extern VAR(MotQuad1, AUTOMATIC) MotQuadDetn_Op_MotQuad;

/* Calibrations */
extern CONST(s18p13, AUTOMATIC) MotQuadDetn_Cal_MotQuadDetnMotDirHysInsts;

/* PIMs */
extern VAR(s18p13, AUTOMATIC) MotQuadDetn_Pim_dMotQuadDetnMotAgCumvDelta;
extern VAR(sint8, AUTOMATIC) MotQuadDetn_Pim_dMotQuadDetnTqCmdSign;
extern VAR(s18p13, AUTOMATIC) MotQuadDetn_Pim_MotAgCumvPrev;
extern VAR(sint8, AUTOMATIC) MotQuadDetn_Pim_MotDirInstsPrev;
extern VAR(sint8, AUTOMATIC) MotQuadDetn_Pim_MotTqCmdSignPrev;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_MotAgCumvAlgndMrf_Val
# undef Rte_Read_MotAgCumvAlgndMrf_Val
#endif
#define Rte_Read_MotAgCumvAlgndMrf_Val(data) (*(data) = MotQuadDetn_Ip_MotAgCumvAlgndMrf)

#ifdef Rte_Read_MotTqCmd_Val
# undef Rte_Read_MotTqCmd_Val
#endif
#define Rte_Read_MotTqCmd_Val(data) (*(data) = MotQuadDetn_Ip_MotTqCmd)


/*** Output Stubs ***/

#ifdef Rte_Write_MotDirInsts_Val
# undef Rte_Write_MotDirInsts_Val
#endif
#define Rte_Write_MotDirInsts_Val(data) (MotQuadDetn_Op_MotDirInsts = (data))

#ifdef Rte_Write_MotQuad_Val
# undef Rte_Write_MotQuad_Val
#endif
#define Rte_Write_MotQuad_Val(data) (MotQuadDetn_Op_MotQuad = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotQuadDetnMotDirHysInsts_Val
# undef Rte_Prm_MotQuadDetnMotDirHysInsts_Val
#endif
#define Rte_Prm_MotQuadDetnMotDirHysInsts_Val() (MotQuadDetn_Cal_MotQuadDetnMotDirHysInsts)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotQuadDetnMotAgCumvDelta
# undef Rte_Pim_dMotQuadDetnMotAgCumvDelta
#endif
#define Rte_Pim_dMotQuadDetnMotAgCumvDelta() (&MotQuadDetn_Pim_dMotQuadDetnMotAgCumvDelta)

#ifdef Rte_Pim_dMotQuadDetnTqCmdSign
# undef Rte_Pim_dMotQuadDetnTqCmdSign
#endif
#define Rte_Pim_dMotQuadDetnTqCmdSign() (&MotQuadDetn_Pim_dMotQuadDetnTqCmdSign)

#ifdef Rte_Pim_MotAgCumvPrev
# undef Rte_Pim_MotAgCumvPrev
#endif
#define Rte_Pim_MotAgCumvPrev() (&MotQuadDetn_Pim_MotAgCumvPrev)

#ifdef Rte_Pim_MotDirInstsPrev
# undef Rte_Pim_MotDirInstsPrev
#endif
#define Rte_Pim_MotDirInstsPrev() (&MotQuadDetn_Pim_MotDirInstsPrev)

#ifdef Rte_Pim_MotTqCmdSignPrev
# undef Rte_Pim_MotTqCmdSignPrev
#endif
#define Rte_Pim_MotTqCmdSignPrev() (&MotQuadDetn_Pim_MotTqCmdSignPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
