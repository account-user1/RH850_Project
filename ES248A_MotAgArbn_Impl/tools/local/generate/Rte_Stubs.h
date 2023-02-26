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

/* PIMs */
extern VAR(boolean, AUTOMATIC) MotAgArbn_Pim_dMotAgArbnAAvl;
extern VAR(boolean, AUTOMATIC) MotAgArbn_Pim_dMotAgArbnBAvl;
extern VAR(uint8, AUTOMATIC) MotAgArbn_Pim_MotAgARollgCntPrev;
extern VAR(uint8, AUTOMATIC) MotAgArbn_Pim_MotAgAStallCntPrev;
extern VAR(uint8, AUTOMATIC) MotAgArbn_Pim_MotAgBRollgCntPrev;
extern VAR(uint8, AUTOMATIC) MotAgArbn_Pim_MotAgBStallCntPrev;

/* Arguments and Returns */


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMotAgArbnAAvl
# undef Rte_Pim_dMotAgArbnAAvl
#endif
#define Rte_Pim_dMotAgArbnAAvl() (&MotAgArbn_Pim_dMotAgArbnAAvl)

#ifdef Rte_Pim_dMotAgArbnBAvl
# undef Rte_Pim_dMotAgArbnBAvl
#endif
#define Rte_Pim_dMotAgArbnBAvl() (&MotAgArbn_Pim_dMotAgArbnBAvl)

#ifdef Rte_Pim_MotAgARollgCntPrev
# undef Rte_Pim_MotAgARollgCntPrev
#endif
#define Rte_Pim_MotAgARollgCntPrev() (&MotAgArbn_Pim_MotAgARollgCntPrev)

#ifdef Rte_Pim_MotAgAStallCntPrev
# undef Rte_Pim_MotAgAStallCntPrev
#endif
#define Rte_Pim_MotAgAStallCntPrev() (&MotAgArbn_Pim_MotAgAStallCntPrev)

#ifdef Rte_Pim_MotAgBRollgCntPrev
# undef Rte_Pim_MotAgBRollgCntPrev
#endif
#define Rte_Pim_MotAgBRollgCntPrev() (&MotAgArbn_Pim_MotAgBRollgCntPrev)

#ifdef Rte_Pim_MotAgBStallCntPrev
# undef Rte_Pim_MotAgBStallCntPrev
#endif
#define Rte_Pim_MotAgBStallCntPrev() (&MotAgArbn_Pim_MotAgBStallCntPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
