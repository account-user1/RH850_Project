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
extern VAR(float32, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsf32;
extern VAR(uint32, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu32;
extern VAR(sint32, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss32;
extern VAR(sint32, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss32Ary;
extern VAR(uint16, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu16;
extern VAR(sint16, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss16;
extern VAR(uint8, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu08;
extern VAR(sint8, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss08;
extern VAR(boolean, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsbool;
extern VAR(TestEnum_u32, AUTOMATIC) MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsEnum;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsf32;
extern VAR(float32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsf32;
extern VAR(uint32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu32;
extern VAR(uint32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu32;
extern VAR(uint32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu32Ary;
extern VAR(sint32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss32;
extern VAR(sint32, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMss32;
extern VAR(uint16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu16;
extern VAR(uint16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary;
extern VAR(uint16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu16;
extern VAR(sint16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss16;
extern VAR(sint16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMss16;
extern VAR(uint8, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu08;
extern VAR(uint8, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu08;
extern VAR(sint8, AUTOMATIC) MotCtrlMgr_Op_Signal3;
extern VAR(sint8, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss08;
extern VAR(sint8, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMss08;
extern VAR(boolean, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsbool;
extern VAR(boolean, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsbool;
extern VAR(TestEnum_u16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsEnum;
extern VAR(TestEnum_u16, AUTOMATIC) MotCtrlMgr_Op_WriteMotCtrlReadTwoMsEnum;

/* Arguments and Returns */
extern VAR(Std_ReturnType, AUTOMATIC) MotCtrlMgr_Srv_DmaWaitForMotCtrlTo2MilliSecTrf_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsf32_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMsf32_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsf32_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsf32)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsu32_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMsu32_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsu32_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu32)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMss32_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMss32_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMss32_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss32)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss32Ary)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsu16_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMsu16_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsu16_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu16)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMss16_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMss16_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMss16_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss16)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsu08_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMsu08_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsu08_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsu08)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMss08_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMss08_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMss08_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMss08)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl
# undef Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsbool)

#ifdef Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val
# undef Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val
#endif
#define Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val(data) (*(data) = MotCtrlMgr_Ip_ReadMotCtrlWriteTwoMsEnum)


/*** Output Stubs ***/

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsf32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsf32_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsf32_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsf32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsf32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsu32_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsu32_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsu32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu32Ary = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMss32_Val
# undef Rte_Write_WriteMotCtrlReadTwoMss32_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMss32_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMss32 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu16 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsu16_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsu16_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsu16_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu16 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss16 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMss16_Val
# undef Rte_Write_WriteMotCtrlReadTwoMss16_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMss16_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMss16 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsu08 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsu08_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsu08_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsu08_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsu08 = (data))

#ifdef Rte_Write_Signal3_Val
# undef Rte_Write_Signal3_Val
#endif
#define Rte_Write_Signal3_Val(data) (MotCtrlMgr_Op_Signal3 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMss08 = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMss08_Val
# undef Rte_Write_WriteMotCtrlReadTwoMss08_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMss08_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMss08 = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsbool = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsbool_Logl
# undef Rte_Write_WriteMotCtrlReadTwoMsbool_Logl
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsbool_Logl(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsbool = (data))

#ifdef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val
# undef Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val
#endif
#define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadMotCtrlReadTwoMsEnum = (data))

#ifdef Rte_Write_WriteMotCtrlReadTwoMsEnum_Val
# undef Rte_Write_WriteMotCtrlReadTwoMsEnum_Val
#endif
#define Rte_Write_WriteMotCtrlReadTwoMsEnum_Val(data) (MotCtrlMgr_Op_WriteMotCtrlReadTwoMsEnum = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
