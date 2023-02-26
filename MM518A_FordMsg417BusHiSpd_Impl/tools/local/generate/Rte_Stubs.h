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
extern VAR(Ford_EsaOn_B_Stat, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehEvasSteerAssiSts;
extern VAR(Ford_LatCtlLim_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehLatCtrlLimSts;
extern VAR(Ford_LatCtlSte_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehLatCtrlSteerSts;
extern VAR(Ford_SelDrvMdeSte_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehSelDrvModSteerSts;
extern VAR(Ford_TrlrAidEnbl_D2_Stat, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehTrlrAidEnaSts;
extern VAR(Ford_TrlrAidMsgTxt_D2_Rq, AUTOMATIC) FordMsg417BusHiSpd_Ip_FordVehTrlrAidMsgTxtReq;

/* Outputs */
extern VAR(Ford_EsaOn_B_Stat, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_EsaOn_B_Stat1;
extern VAR(Ford_LatCtlLim_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_LatCtlLim_D_Stat1;
extern VAR(Ford_LatCtlSte_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_LatCtlSte_D_Stat1;
extern VAR(Ford_SelDrvMdeSte_D_Stat, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_SelDrvMdeSte_D_Stat1;
extern VAR(Ford_TrlrAidEnbl_D2_Stat, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_TrlrAidEnbl_D2_Stat1;
extern VAR(Ford_TrlrAidMsgTxt_D2_Rq, AUTOMATIC) FordMsg417BusHiSpd_Op_Ford_TrlrAidMsgTxt_D2_Rq1;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_FordVehEvasSteerAssiSts_Val
# undef Rte_Read_FordVehEvasSteerAssiSts_Val
#endif
#define Rte_Read_FordVehEvasSteerAssiSts_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehEvasSteerAssiSts)

#ifdef Rte_Read_FordVehLatCtrlLimSts_Val
# undef Rte_Read_FordVehLatCtrlLimSts_Val
#endif
#define Rte_Read_FordVehLatCtrlLimSts_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehLatCtrlLimSts)

#ifdef Rte_Read_FordVehLatCtrlSteerSts_Val
# undef Rte_Read_FordVehLatCtrlSteerSts_Val
#endif
#define Rte_Read_FordVehLatCtrlSteerSts_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehLatCtrlSteerSts)

#ifdef Rte_Read_FordVehSelDrvModSteerSts_Val
# undef Rte_Read_FordVehSelDrvModSteerSts_Val
#endif
#define Rte_Read_FordVehSelDrvModSteerSts_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehSelDrvModSteerSts)

#ifdef Rte_Read_FordVehTrlrAidEnaSts_Val
# undef Rte_Read_FordVehTrlrAidEnaSts_Val
#endif
#define Rte_Read_FordVehTrlrAidEnaSts_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehTrlrAidEnaSts)

#ifdef Rte_Read_FordVehTrlrAidMsgTxtReq_Val
# undef Rte_Read_FordVehTrlrAidMsgTxtReq_Val
#endif
#define Rte_Read_FordVehTrlrAidMsgTxtReq_Val(data) (*(data) = FordMsg417BusHiSpd_Ip_FordVehTrlrAidMsgTxtReq)


/*** Output Stubs ***/

#ifdef Rte_Write_Ford_EsaOn_B_Stat1_Val
# undef Rte_Write_Ford_EsaOn_B_Stat1_Val
#endif
#define Rte_Write_Ford_EsaOn_B_Stat1_Val(data) (FordMsg417BusHiSpd_Op_Ford_EsaOn_B_Stat1 = (data))

#ifdef Rte_Write_Ford_LatCtlLim_D_Stat1_Val
# undef Rte_Write_Ford_LatCtlLim_D_Stat1_Val
#endif
#define Rte_Write_Ford_LatCtlLim_D_Stat1_Val(data) (FordMsg417BusHiSpd_Op_Ford_LatCtlLim_D_Stat1 = (data))

#ifdef Rte_Write_Ford_LatCtlSte_D_Stat1_Val
# undef Rte_Write_Ford_LatCtlSte_D_Stat1_Val
#endif
#define Rte_Write_Ford_LatCtlSte_D_Stat1_Val(data) (FordMsg417BusHiSpd_Op_Ford_LatCtlSte_D_Stat1 = (data))

#ifdef Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Val
# undef Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Val
#endif
#define Rte_Write_Ford_SelDrvMdeSte_D_Stat1_Val(data) (FordMsg417BusHiSpd_Op_Ford_SelDrvMdeSte_D_Stat1 = (data))

#ifdef Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Val
# undef Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Val
#endif
#define Rte_Write_Ford_TrlrAidEnbl_D2_Stat1_Val(data) (FordMsg417BusHiSpd_Op_Ford_TrlrAidEnbl_D2_Stat1 = (data))

#ifdef Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Val
# undef Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Val
#endif
#define Rte_Write_Ford_TrlrAidMsgTxt_D2_Rq1_Val(data) (FordMsg417BusHiSpd_Op_Ford_TrlrAidMsgTxt_D2_Rq1 = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
