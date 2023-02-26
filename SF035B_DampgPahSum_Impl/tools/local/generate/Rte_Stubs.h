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
extern VAR(float32, AUTOMATIC) DampgPahSum_Ip_DampgCmdBas;
extern VAR(float32, AUTOMATIC) DampgPahSum_Ip_InertiaCmpVelCmd;

/* Outputs */
extern VAR(float32, AUTOMATIC) DampgPahSum_Op_DampgCmd;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_DampgCmdBas_Val
# undef Rte_Read_DampgCmdBas_Val
#endif
#define Rte_Read_DampgCmdBas_Val(data) (*(data) = DampgPahSum_Ip_DampgCmdBas)

#ifdef Rte_Read_InertiaCmpVelCmd_Val
# undef Rte_Read_InertiaCmpVelCmd_Val
#endif
#define Rte_Read_InertiaCmpVelCmd_Val(data) (*(data) = DampgPahSum_Ip_InertiaCmpVelCmd)


/*** Output Stubs ***/

#ifdef Rte_Write_DampgCmd_Val
# undef Rte_Write_DampgCmd_Val
#endif
#define Rte_Write_DampgCmd_Val(data) (DampgPahSum_Op_DampgCmd = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
