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
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_BrdgVltg;
extern VAR(uint8, AUTOMATIC) ElecPwrCns_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotCurrDax;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotCurrDaxCmd;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotCurrQax;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotCurrQaxCmd;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotVltgDax;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Ip_MotVltgQax;

/* Outputs */
extern VAR(float32, AUTOMATIC) ElecPwrCns_Op_ElecInpPwrEstim;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Op_SplyCurrEstim;

/* Calibrations */
extern CONST(float32, AUTOMATIC) ElecPwrCns_Cal_ElecPwrCnsCtrlrInpR;
extern CONST(float32, AUTOMATIC) ElecPwrCns_Cal_ElecPwrCnsPrstcPwrLoss;

/* PIMs */
extern VAR(float32, AUTOMATIC) ElecPwrCns_Pim_dElecPwrCnsDrpInpPwr;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Pim_dElecPwrCnsModInpPwr;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Pim_dElecPwrCnsMotCurrDaxEstim;
extern VAR(float32, AUTOMATIC) ElecPwrCns_Pim_dElecPwrCnsMotCurrQaxEstim;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_BrdgVltg_Val
# undef Rte_Read_BrdgVltg_Val
#endif
#define Rte_Read_BrdgVltg_Val(data) (*(data) = ElecPwrCns_Ip_BrdgVltg)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = ElecPwrCns_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrDax_Val
# undef Rte_Read_MotCurrDax_Val
#endif
#define Rte_Read_MotCurrDax_Val(data) (*(data) = ElecPwrCns_Ip_MotCurrDax)

#ifdef Rte_Read_MotCurrDaxCmd_Val
# undef Rte_Read_MotCurrDaxCmd_Val
#endif
#define Rte_Read_MotCurrDaxCmd_Val(data) (*(data) = ElecPwrCns_Ip_MotCurrDaxCmd)

#ifdef Rte_Read_MotCurrQax_Val
# undef Rte_Read_MotCurrQax_Val
#endif
#define Rte_Read_MotCurrQax_Val(data) (*(data) = ElecPwrCns_Ip_MotCurrQax)

#ifdef Rte_Read_MotCurrQaxCmd_Val
# undef Rte_Read_MotCurrQaxCmd_Val
#endif
#define Rte_Read_MotCurrQaxCmd_Val(data) (*(data) = ElecPwrCns_Ip_MotCurrQaxCmd)

#ifdef Rte_Read_MotVltgDax_Val
# undef Rte_Read_MotVltgDax_Val
#endif
#define Rte_Read_MotVltgDax_Val(data) (*(data) = ElecPwrCns_Ip_MotVltgDax)

#ifdef Rte_Read_MotVltgQax_Val
# undef Rte_Read_MotVltgQax_Val
#endif
#define Rte_Read_MotVltgQax_Val(data) (*(data) = ElecPwrCns_Ip_MotVltgQax)


/*** Output Stubs ***/

#ifdef Rte_Write_ElecInpPwrEstim_Val
# undef Rte_Write_ElecInpPwrEstim_Val
#endif
#define Rte_Write_ElecInpPwrEstim_Val(data) (ElecPwrCns_Op_ElecInpPwrEstim = (data))

#ifdef Rte_Write_SplyCurrEstim_Val
# undef Rte_Write_SplyCurrEstim_Val
#endif
#define Rte_Write_SplyCurrEstim_Val(data) (ElecPwrCns_Op_SplyCurrEstim = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_ElecPwrCnsCtrlrInpR_Val
# undef Rte_Prm_ElecPwrCnsCtrlrInpR_Val
#endif
#define Rte_Prm_ElecPwrCnsCtrlrInpR_Val() (ElecPwrCns_Cal_ElecPwrCnsCtrlrInpR)

#ifdef Rte_Prm_ElecPwrCnsPrstcPwrLoss_Val
# undef Rte_Prm_ElecPwrCnsPrstcPwrLoss_Val
#endif
#define Rte_Prm_ElecPwrCnsPrstcPwrLoss_Val() (ElecPwrCns_Cal_ElecPwrCnsPrstcPwrLoss)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dElecPwrCnsDrpInpPwr
# undef Rte_Pim_dElecPwrCnsDrpInpPwr
#endif
#define Rte_Pim_dElecPwrCnsDrpInpPwr() (&ElecPwrCns_Pim_dElecPwrCnsDrpInpPwr)

#ifdef Rte_Pim_dElecPwrCnsModInpPwr
# undef Rte_Pim_dElecPwrCnsModInpPwr
#endif
#define Rte_Pim_dElecPwrCnsModInpPwr() (&ElecPwrCns_Pim_dElecPwrCnsModInpPwr)

#ifdef Rte_Pim_dElecPwrCnsMotCurrDaxEstim
# undef Rte_Pim_dElecPwrCnsMotCurrDaxEstim
#endif
#define Rte_Pim_dElecPwrCnsMotCurrDaxEstim() (&ElecPwrCns_Pim_dElecPwrCnsMotCurrDaxEstim)

#ifdef Rte_Pim_dElecPwrCnsMotCurrQaxEstim
# undef Rte_Pim_dElecPwrCnsMotCurrQaxEstim
#endif
#define Rte_Pim_dElecPwrCnsMotCurrQaxEstim() (&ElecPwrCns_Pim_dElecPwrCnsMotCurrQaxEstim)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
