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
extern VAR(sint8, AUTOMATIC) MotVel_Ip_AssiMechPolarity;
/* SPP CHANGES 1h AND 2h: MotAgBuf and MotAgTiBuf (3 lines down) needed [8] added to designate arrays */
extern VAR(u0p16, AUTOMATIC) MotVel_Ip_MotAgBuf[8];
extern VAR(uint8, AUTOMATIC) MotVel_Ip_MotAgBufIdx;
extern VAR(uint8, AUTOMATIC) MotVel_Ip_MotAgMeclIdptSig;
extern VAR(uint32, AUTOMATIC) MotVel_Ip_MotAgTiBuf[8];

/* Outputs */
extern VAR(float32, AUTOMATIC) MotVel_Op_MotVelCrf;
extern VAR(float32, AUTOMATIC) MotVel_Op_MotVelMrf;
extern VAR(boolean, AUTOMATIC) MotVel_Op_MotVelVld;

/* PIMs */
extern VAR(float32, AUTOMATIC) MotVel_Pim_dMotVelAvrgTi;
extern VAR(u0p16, AUTOMATIC) MotVel_Pim_dMotVelMotAgRef;
extern VAR(float32, AUTOMATIC) MotVel_Pim_dMotVelTiStampRef;
extern VAR(uint8, AUTOMATIC) MotVel_Pim_MotAgBufIdxPrev;
extern VAR(uint8, AUTOMATIC) MotVel_Pim_MotAgBufIdxPrim;
extern VAR(u0p16, AUTOMATIC) MotVel_Pim_MotAgBufPrev[8];
extern VAR(uint32, AUTOMATIC) MotVel_Pim_MotAgTiBufPrev[8];
extern VAR(uint8, AUTOMATIC) MotVel_Pim_MotVelIninCntr;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiMechPolarity_Val
# undef Rte_Read_AssiMechPolarity_Val
#endif
#define Rte_Read_AssiMechPolarity_Val(data) (*(data) = MotVel_Ip_AssiMechPolarity)

/* SPP CHANGE 3h code below removed and Rte_Read functions moved to Rte_Stubs.c */
/*
#ifdef Rte_Read_MotAgBuf_Val
# undef Rte_Read_MotAgBuf_Val
#endif
#define Rte_Read_MotAgBuf_Val(data) (*(data) = MotVel_Ip_MotAgBuf)
*/
#ifdef Rte_Read_MotAgBufIdx_Val
# undef Rte_Read_MotAgBufIdx_Val
#endif
#define Rte_Read_MotAgBufIdx_Val(data) (*(data) = MotVel_Ip_MotAgBufIdx)

#ifdef Rte_Read_MotAgMeclIdptSig_Val
# undef Rte_Read_MotAgMeclIdptSig_Val
#endif
#define Rte_Read_MotAgMeclIdptSig_Val(data) (*(data) = MotVel_Ip_MotAgMeclIdptSig)

/* SPP CHANGE 4h code below removed and Rte_Read functions moved to Rte_Stubs.c */
/* 
#ifdef Rte_Read_MotAgTiBuf_Ary1D
# undef Rte_Read_MotAgTiBuf_Ary1D
#endif
#define Rte_Read_MotAgTiBuf_Val(data) (*(data) = MotVel_Ip_MotAgTiBuf)
*/

/*** Output Stubs ***/

#ifdef Rte_Write_MotVelCrf_Val
# undef Rte_Write_MotVelCrf_Val
#endif
#define Rte_Write_MotVelCrf_Val(data) (MotVel_Op_MotVelCrf = (data))

#ifdef Rte_Write_MotVelMrf_Val
# undef Rte_Write_MotVelMrf_Val
#endif
#define Rte_Write_MotVelMrf_Val(data) (MotVel_Op_MotVelMrf = (data))

#ifdef Rte_Write_MotVelVld_Logl
# undef Rte_Write_MotVelVld_Logl
#endif
#define Rte_Write_MotVelVld_Logl(data) (MotVel_Op_MotVelVld = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotVelAvrgTi
# undef Rte_Pim_dMotVelAvrgTi
#endif
#define Rte_Pim_dMotVelAvrgTi() (&MotVel_Pim_dMotVelAvrgTi)

#ifdef Rte_Pim_dMotVelMotAgRef
# undef Rte_Pim_dMotVelMotAgRef
#endif
#define Rte_Pim_dMotVelMotAgRef() (&MotVel_Pim_dMotVelMotAgRef)

#ifdef Rte_Pim_dMotVelTiStampRef
# undef Rte_Pim_dMotVelTiStampRef
#endif
#define Rte_Pim_dMotVelTiStampRef() (&MotVel_Pim_dMotVelTiStampRef)

#ifdef Rte_Pim_MotAgBufIdxPrev
# undef Rte_Pim_MotAgBufIdxPrev
#endif
#define Rte_Pim_MotAgBufIdxPrev() (&MotVel_Pim_MotAgBufIdxPrev)

#ifdef Rte_Pim_MotAgBufIdxPrim
# undef Rte_Pim_MotAgBufIdxPrim
#endif
#define Rte_Pim_MotAgBufIdxPrim() (&MotVel_Pim_MotAgBufIdxPrim)

#ifdef Rte_Pim_MotAgBufPrev
# undef Rte_Pim_MotAgBufPrev
#endif
#define Rte_Pim_MotAgBufPrev() (&(MotVel_Pim_MotAgBufPrev[0]))

#ifdef Rte_Pim_MotAgTiBufPrev
# undef Rte_Pim_MotAgTiBufPrev
#endif
#define Rte_Pim_MotAgTiBufPrev() (&(MotVel_Pim_MotAgTiBufPrev[0]))

#ifdef Rte_Pim_MotVelIninCntr
# undef Rte_Pim_MotVelIninCntr
#endif
#define Rte_Pim_MotVelIninCntr() (&MotVel_Pim_MotVelIninCntr)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
