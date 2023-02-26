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

/* Outputs */
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_AssiMechPolarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg0Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg1Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg2Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg3Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg4Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg5Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg6Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwAg7Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq0Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq1Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq2Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq3Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq4Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq5Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq6Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_HwTq7Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl0Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl1Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl2Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl3Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl4Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl5Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl6Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotAgMecl7Polarity;
extern VAR(sint8, AUTOMATIC) PolarityCfg_Op_MotElecMeclPolarity;

/* PIMs */
extern VAR(uint32, AUTOMATIC) PolarityCfg_Pim_PolarityCfgSaved;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) PolarityCfg_Srv_PolarityCfgSaved_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) PolarityCfg_Srv_PolarityCfgSaved_SetRamBlockStatus_Return;
extern VAR(uint32, AUTOMATIC) PolarityCfg_Cli_PolarityCfgRead_PolarityCfgSaved;
extern VAR(Std_ReturnType, AUTOMATIC) PolarityCfg_Cli_PolarityCfgRead_Return;
extern VAR(uint32, AUTOMATIC) PolarityCfg_Cli_PolarityCfgWr_PolarityCfgSaved;
extern VAR(Std_ReturnType, AUTOMATIC) PolarityCfg_Cli_PolarityCfgWr_Return;


/*** Output Stubs ***/

#ifdef Rte_Write_AssiMechPolarity_Val
# undef Rte_Write_AssiMechPolarity_Val
#endif
#define Rte_Write_AssiMechPolarity_Val(data) (PolarityCfg_Op_AssiMechPolarity = (data))

#ifdef Rte_Write_HwAg0Polarity_Val
# undef Rte_Write_HwAg0Polarity_Val
#endif
#define Rte_Write_HwAg0Polarity_Val(data) (PolarityCfg_Op_HwAg0Polarity = (data))

#ifdef Rte_Write_HwAg1Polarity_Val
# undef Rte_Write_HwAg1Polarity_Val
#endif
#define Rte_Write_HwAg1Polarity_Val(data) (PolarityCfg_Op_HwAg1Polarity = (data))

#ifdef Rte_Write_HwAg2Polarity_Val
# undef Rte_Write_HwAg2Polarity_Val
#endif
#define Rte_Write_HwAg2Polarity_Val(data) (PolarityCfg_Op_HwAg2Polarity = (data))

#ifdef Rte_Write_HwAg3Polarity_Val
# undef Rte_Write_HwAg3Polarity_Val
#endif
#define Rte_Write_HwAg3Polarity_Val(data) (PolarityCfg_Op_HwAg3Polarity = (data))

#ifdef Rte_Write_HwAg4Polarity_Val
# undef Rte_Write_HwAg4Polarity_Val
#endif
#define Rte_Write_HwAg4Polarity_Val(data) (PolarityCfg_Op_HwAg4Polarity = (data))

#ifdef Rte_Write_HwAg5Polarity_Val
# undef Rte_Write_HwAg5Polarity_Val
#endif
#define Rte_Write_HwAg5Polarity_Val(data) (PolarityCfg_Op_HwAg5Polarity = (data))

#ifdef Rte_Write_HwAg6Polarity_Val
# undef Rte_Write_HwAg6Polarity_Val
#endif
#define Rte_Write_HwAg6Polarity_Val(data) (PolarityCfg_Op_HwAg6Polarity = (data))

#ifdef Rte_Write_HwAg7Polarity_Val
# undef Rte_Write_HwAg7Polarity_Val
#endif
#define Rte_Write_HwAg7Polarity_Val(data) (PolarityCfg_Op_HwAg7Polarity = (data))

#ifdef Rte_Write_HwTq0Polarity_Val
# undef Rte_Write_HwTq0Polarity_Val
#endif
#define Rte_Write_HwTq0Polarity_Val(data) (PolarityCfg_Op_HwTq0Polarity = (data))

#ifdef Rte_Write_HwTq1Polarity_Val
# undef Rte_Write_HwTq1Polarity_Val
#endif
#define Rte_Write_HwTq1Polarity_Val(data) (PolarityCfg_Op_HwTq1Polarity = (data))

#ifdef Rte_Write_HwTq2Polarity_Val
# undef Rte_Write_HwTq2Polarity_Val
#endif
#define Rte_Write_HwTq2Polarity_Val(data) (PolarityCfg_Op_HwTq2Polarity = (data))

#ifdef Rte_Write_HwTq3Polarity_Val
# undef Rte_Write_HwTq3Polarity_Val
#endif
#define Rte_Write_HwTq3Polarity_Val(data) (PolarityCfg_Op_HwTq3Polarity = (data))

#ifdef Rte_Write_HwTq4Polarity_Val
# undef Rte_Write_HwTq4Polarity_Val
#endif
#define Rte_Write_HwTq4Polarity_Val(data) (PolarityCfg_Op_HwTq4Polarity = (data))

#ifdef Rte_Write_HwTq5Polarity_Val
# undef Rte_Write_HwTq5Polarity_Val
#endif
#define Rte_Write_HwTq5Polarity_Val(data) (PolarityCfg_Op_HwTq5Polarity = (data))

#ifdef Rte_Write_HwTq6Polarity_Val
# undef Rte_Write_HwTq6Polarity_Val
#endif
#define Rte_Write_HwTq6Polarity_Val(data) (PolarityCfg_Op_HwTq6Polarity = (data))

#ifdef Rte_Write_HwTq7Polarity_Val
# undef Rte_Write_HwTq7Polarity_Val
#endif
#define Rte_Write_HwTq7Polarity_Val(data) (PolarityCfg_Op_HwTq7Polarity = (data))

#ifdef Rte_Write_MotAgMecl0Polarity_Val
# undef Rte_Write_MotAgMecl0Polarity_Val
#endif
#define Rte_Write_MotAgMecl0Polarity_Val(data) (PolarityCfg_Op_MotAgMecl0Polarity = (data))

#ifdef Rte_Write_MotAgMecl1Polarity_Val
# undef Rte_Write_MotAgMecl1Polarity_Val
#endif
#define Rte_Write_MotAgMecl1Polarity_Val(data) (PolarityCfg_Op_MotAgMecl1Polarity = (data))

#ifdef Rte_Write_MotAgMecl2Polarity_Val
# undef Rte_Write_MotAgMecl2Polarity_Val
#endif
#define Rte_Write_MotAgMecl2Polarity_Val(data) (PolarityCfg_Op_MotAgMecl2Polarity = (data))

#ifdef Rte_Write_MotAgMecl3Polarity_Val
# undef Rte_Write_MotAgMecl3Polarity_Val
#endif
#define Rte_Write_MotAgMecl3Polarity_Val(data) (PolarityCfg_Op_MotAgMecl3Polarity = (data))

#ifdef Rte_Write_MotAgMecl4Polarity_Val
# undef Rte_Write_MotAgMecl4Polarity_Val
#endif
#define Rte_Write_MotAgMecl4Polarity_Val(data) (PolarityCfg_Op_MotAgMecl4Polarity = (data))

#ifdef Rte_Write_MotAgMecl5Polarity_Val
# undef Rte_Write_MotAgMecl5Polarity_Val
#endif
#define Rte_Write_MotAgMecl5Polarity_Val(data) (PolarityCfg_Op_MotAgMecl5Polarity = (data))

#ifdef Rte_Write_MotAgMecl6Polarity_Val
# undef Rte_Write_MotAgMecl6Polarity_Val
#endif
#define Rte_Write_MotAgMecl6Polarity_Val(data) (PolarityCfg_Op_MotAgMecl6Polarity = (data))

#ifdef Rte_Write_MotAgMecl7Polarity_Val
# undef Rte_Write_MotAgMecl7Polarity_Val
#endif
#define Rte_Write_MotAgMecl7Polarity_Val(data) (PolarityCfg_Op_MotAgMecl7Polarity = (data))

#ifdef Rte_Write_MotElecMeclPolarity_Val
# undef Rte_Write_MotElecMeclPolarity_Val
#endif
#define Rte_Write_MotElecMeclPolarity_Val(data) (PolarityCfg_Op_MotElecMeclPolarity = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_PolarityCfgSaved
# undef Rte_Pim_PolarityCfgSaved
#endif
#define Rte_Pim_PolarityCfgSaved() (&PolarityCfg_Pim_PolarityCfgSaved)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
