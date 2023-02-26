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
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_CodFlsCrcChkCmpl;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_CurrMeasWrmIninTestCmpl;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_MotDrvr0IninTestCmpl;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_MotDrvr1IninTestCmpl;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_PwrDiscnctATestCmpl;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_PwrDiscnctBTestCmpl;
extern VAR(SysSt1, AUTOMATIC) PwrUpSeq_Ip_SysSt;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Ip_TmplMonIninTestCmpl;

/* Outputs */
extern VAR(uint8, AUTOMATIC) PwrUpSeq_Op_StrtUpSt;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Op_SysStWrmIninCmpl;

/* PIMs */
extern VAR(uint8, AUTOMATIC) PwrUpSeq_Pim_PwrTurnOffCtrlPrev;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Srv_IoHwAb_SetGpioPwrTurnOffCtrl_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) PwrUpSeq_Srv_IoHwAb_SetGpioPwrTurnOffCtrl_Return;
extern VAR(boolean, AUTOMATIC) PwrUpSeq_Cli_PwrTurnOffCtrl_PinSt;


/*** Input Stubs ***/

#ifdef Rte_Read_CodFlsCrcChkCmpl_Logl
# undef Rte_Read_CodFlsCrcChkCmpl_Logl
#endif
#define Rte_Read_CodFlsCrcChkCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_CodFlsCrcChkCmpl)

#ifdef Rte_Read_CurrMeasWrmIninTestCmpl_Logl
# undef Rte_Read_CurrMeasWrmIninTestCmpl_Logl
#endif
#define Rte_Read_CurrMeasWrmIninTestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_CurrMeasWrmIninTestCmpl)

#ifdef Rte_Read_MotDrvr0IninTestCmpl_Logl
# undef Rte_Read_MotDrvr0IninTestCmpl_Logl
#endif
#define Rte_Read_MotDrvr0IninTestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_MotDrvr0IninTestCmpl)

#ifdef Rte_Read_MotDrvr1IninTestCmpl_Logl
# undef Rte_Read_MotDrvr1IninTestCmpl_Logl
#endif
#define Rte_Read_MotDrvr1IninTestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_MotDrvr1IninTestCmpl)

#ifdef Rte_Read_PwrDiscnctATestCmpl_Logl
# undef Rte_Read_PwrDiscnctATestCmpl_Logl
#endif
#define Rte_Read_PwrDiscnctATestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_PwrDiscnctATestCmpl)

#ifdef Rte_Read_PwrDiscnctBTestCmpl_Logl
# undef Rte_Read_PwrDiscnctBTestCmpl_Logl
#endif
#define Rte_Read_PwrDiscnctBTestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_PwrDiscnctBTestCmpl)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = PwrUpSeq_Ip_SysSt)

#ifdef Rte_Read_TmplMonIninTestCmpl_Logl
# undef Rte_Read_TmplMonIninTestCmpl_Logl
#endif
#define Rte_Read_TmplMonIninTestCmpl_Logl(data) (*(data) = PwrUpSeq_Ip_TmplMonIninTestCmpl)


/*** Output Stubs ***/

#ifdef Rte_Write_StrtUpSt_Val
# undef Rte_Write_StrtUpSt_Val
#endif
#define Rte_Write_StrtUpSt_Val(data) (PwrUpSeq_Op_StrtUpSt = (data))

#ifdef Rte_Write_SysStWrmIninCmpl_Logl
# undef Rte_Write_SysStWrmIninCmpl_Logl
#endif
#define Rte_Write_SysStWrmIninCmpl_Logl(data) (PwrUpSeq_Op_SysStWrmIninCmpl = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_PwrTurnOffCtrlPrev
# undef Rte_Pim_PwrTurnOffCtrlPrev
#endif
#define Rte_Pim_PwrTurnOffCtrlPrev() (&PwrUpSeq_Pim_PwrTurnOffCtrlPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
