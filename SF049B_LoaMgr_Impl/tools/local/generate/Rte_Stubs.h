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
extern VAR(uint8, AUTOMATIC) LoaMgr_Ip_CurrMeasIdptSig;
extern VAR(boolean, AUTOMATIC) LoaMgr_Ip_DiagcStsIvtr1Inactv;
extern VAR(boolean, AUTOMATIC) LoaMgr_Ip_DiagcStsIvtr2Inactv;
extern VAR(uint8, AUTOMATIC) LoaMgr_Ip_HwTqIdptSig;
extern VAR(IvtrFetFltTyp1, AUTOMATIC) LoaMgr_Ip_IvtrFetFltTyp;
extern VAR(boolean, AUTOMATIC) LoaMgr_Ip_LoaScaDi;
extern VAR(uint8, AUTOMATIC) LoaMgr_Ip_MotAgMeclIdptSig;
extern VAR(boolean, AUTOMATIC) LoaMgr_Ip_MotAgSnsrlsAvl;
extern VAR(boolean, AUTOMATIC) LoaMgr_Ip_TqLoaAvl;
extern VAR(SteerMod1, AUTOMATIC) LoaMgr_Ip_VehSteerMod;

/* Outputs */
extern VAR(boolean, AUTOMATIC) LoaMgr_Op_HwTqLoaMtgtnEna;
extern VAR(float32, AUTOMATIC) LoaMgr_Op_LoaRateLim;
extern VAR(float32, AUTOMATIC) LoaMgr_Op_LoaSca;
extern VAR(LoaSt1, AUTOMATIC) LoaMgr_Op_LoaSt;
extern VAR(boolean, AUTOMATIC) LoaMgr_Op_MotAgLoaMtgtnEna;
extern VAR(uint8, AUTOMATIC) LoaMgr_Op_MotAndThermProtnLoaMod;

/* Calibrations */
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrIvtrMtgtnRate;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrIvtrMtgtnSca;
extern CONST(boolean, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrIvtrMtgtnScaZeroEna;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasIdptSig0Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasIdptSig1Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasIdptSig2Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasIdptSigFltThd;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasMtgtnRate;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasMtgtnSca;
extern CONST(boolean, AUTOMATIC) LoaMgr_Cal_LoaMgrCurrMeasMtgtnScaZeroEna;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrFadeOutStRate;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSig0NoTqLoaResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSig1NoTqLoaResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSig2Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSig3Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSig4Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqIdptSigFltThd;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrHwTqLoaAvlResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrIdptSig0Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrIdptSig1Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrIdptSig2Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrIdptSigFltThd;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrMtgtnRate;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrMtgtnSca;
extern CONST(boolean, AUTOMATIC) LoaMgr_Cal_LoaMgrIvtrMtgtnScaZeroEna;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrLimdStRate;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrLimdStSca;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgAvlSnsrlsResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgIdptSig0NoSnsrlsResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgIdptSig1NoSnsrlsResp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgIdptSig2Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgIdptSig3Resp;
extern CONST(uint8, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgIdptSigFltThd;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgMtgtnRate;
extern CONST(float32, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgMtgtnSca;
extern CONST(boolean, AUTOMATIC) LoaMgr_Cal_LoaMgrMotAgMtgtnScaZeroEna;

/* PIMs */
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevCurrMeasIdptSigResp;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevCurrMeasIdptSigVal;
extern VAR(boolean, AUTOMATIC) LoaMgr_Pim_PrevCurrMeasLoaStSwMtgtnEna;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevHwTqIdptSigResp;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevHwTqIdptSigVal;
extern VAR(boolean, AUTOMATIC) LoaMgr_Pim_PrevHwTqLoaStSwMtgtnEna;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevIvtrIdptSigResp;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevIvtrIdptSigVal;
extern VAR(boolean, AUTOMATIC) LoaMgr_Pim_PrevIvtrLoaStSwMtgtnEna;
extern VAR(boolean, AUTOMATIC) LoaMgr_Pim_PrevMotAgLoaMtgtnEna;
extern VAR(boolean, AUTOMATIC) LoaMgr_Pim_PrevMotAgLoaStSwMtgtnEna;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevMotAgMeclIdptSigResp;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevMotAgMeclIdptSigVal;
extern VAR(uint8, AUTOMATIC) LoaMgr_Pim_PrevVltgModSrc;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) LoaMgr_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) LoaMgr_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) LoaMgr_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) LoaMgr_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) LoaMgr_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_CurrMeasIdptSig_Val
# undef Rte_Read_CurrMeasIdptSig_Val
#endif
#define Rte_Read_CurrMeasIdptSig_Val(data) (*(data) = LoaMgr_Ip_CurrMeasIdptSig)

#ifdef Rte_Read_DiagcStsIvtr1Inactv_Logl
# undef Rte_Read_DiagcStsIvtr1Inactv_Logl
#endif
#define Rte_Read_DiagcStsIvtr1Inactv_Logl(data) (*(data) = LoaMgr_Ip_DiagcStsIvtr1Inactv)

#ifdef Rte_Read_DiagcStsIvtr2Inactv_Logl
# undef Rte_Read_DiagcStsIvtr2Inactv_Logl
#endif
#define Rte_Read_DiagcStsIvtr2Inactv_Logl(data) (*(data) = LoaMgr_Ip_DiagcStsIvtr2Inactv)

#ifdef Rte_Read_HwTqIdptSig_Val
# undef Rte_Read_HwTqIdptSig_Val
#endif
#define Rte_Read_HwTqIdptSig_Val(data) (*(data) = LoaMgr_Ip_HwTqIdptSig)

#ifdef Rte_Read_IvtrFetFltTyp_Val
# undef Rte_Read_IvtrFetFltTyp_Val
#endif
#define Rte_Read_IvtrFetFltTyp_Val(data) (*(data) = LoaMgr_Ip_IvtrFetFltTyp)

#ifdef Rte_Read_LoaScaDi_Logl
# undef Rte_Read_LoaScaDi_Logl
#endif
#define Rte_Read_LoaScaDi_Logl(data) (*(data) = LoaMgr_Ip_LoaScaDi)

#ifdef Rte_Read_MotAgMeclIdptSig_Val
# undef Rte_Read_MotAgMeclIdptSig_Val
#endif
#define Rte_Read_MotAgMeclIdptSig_Val(data) (*(data) = LoaMgr_Ip_MotAgMeclIdptSig)

#ifdef Rte_Read_MotAgSnsrlsAvl_Logl
# undef Rte_Read_MotAgSnsrlsAvl_Logl
#endif
#define Rte_Read_MotAgSnsrlsAvl_Logl(data) (*(data) = LoaMgr_Ip_MotAgSnsrlsAvl)

#ifdef Rte_Read_TqLoaAvl_Logl
# undef Rte_Read_TqLoaAvl_Logl
#endif
#define Rte_Read_TqLoaAvl_Logl(data) (*(data) = LoaMgr_Ip_TqLoaAvl)

#ifdef Rte_Read_VehSteerMod_Val
# undef Rte_Read_VehSteerMod_Val
#endif
#define Rte_Read_VehSteerMod_Val(data) (*(data) = LoaMgr_Ip_VehSteerMod)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTqLoaMtgtnEna_Logl
# undef Rte_Write_HwTqLoaMtgtnEna_Logl
#endif
#define Rte_Write_HwTqLoaMtgtnEna_Logl(data) (LoaMgr_Op_HwTqLoaMtgtnEna = (data))

#ifdef Rte_Write_LoaRateLim_Val
# undef Rte_Write_LoaRateLim_Val
#endif
#define Rte_Write_LoaRateLim_Val(data) (LoaMgr_Op_LoaRateLim = (data))

#ifdef Rte_Write_LoaSca_Val
# undef Rte_Write_LoaSca_Val
#endif
#define Rte_Write_LoaSca_Val(data) (LoaMgr_Op_LoaSca = (data))

#ifdef Rte_Write_LoaSt_Val
# undef Rte_Write_LoaSt_Val
#endif
#define Rte_Write_LoaSt_Val(data) (LoaMgr_Op_LoaSt = (data))

#ifdef Rte_Write_MotAgLoaMtgtnEna_Logl
# undef Rte_Write_MotAgLoaMtgtnEna_Logl
#endif
#define Rte_Write_MotAgLoaMtgtnEna_Logl(data) (LoaMgr_Op_MotAgLoaMtgtnEna = (data))

#ifdef Rte_Write_MotAndThermProtnLoaMod_Val
# undef Rte_Write_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Write_MotAndThermProtnLoaMod_Val(data) (LoaMgr_Op_MotAndThermProtnLoaMod = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val
# undef Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val
#endif
#define Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val() (LoaMgr_Cal_LoaMgrCurrIvtrMtgtnRate)

#ifdef Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val
# undef Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val
#endif
#define Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val() (LoaMgr_Cal_LoaMgrCurrIvtrMtgtnSca)

#ifdef Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl
# undef Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl
#endif
#define Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl() (LoaMgr_Cal_LoaMgrCurrIvtrMtgtnScaZeroEna)

#ifdef Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val
# undef Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val() (LoaMgr_Cal_LoaMgrCurrMeasIdptSig0Resp)

#ifdef Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val
# undef Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val() (LoaMgr_Cal_LoaMgrCurrMeasIdptSig1Resp)

#ifdef Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val
# undef Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val() (LoaMgr_Cal_LoaMgrCurrMeasIdptSig2Resp)

#ifdef Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val
# undef Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val() (LoaMgr_Cal_LoaMgrCurrMeasIdptSigFltThd)

#ifdef Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val
# undef Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val() (LoaMgr_Cal_LoaMgrCurrMeasMtgtnRate)

#ifdef Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val
# undef Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val
#endif
#define Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val() (LoaMgr_Cal_LoaMgrCurrMeasMtgtnSca)

#ifdef Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl
# undef Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl
#endif
#define Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl() (LoaMgr_Cal_LoaMgrCurrMeasMtgtnScaZeroEna)

#ifdef Rte_Prm_LoaMgrFadeOutStRate_Val
# undef Rte_Prm_LoaMgrFadeOutStRate_Val
#endif
#define Rte_Prm_LoaMgrFadeOutStRate_Val() (LoaMgr_Cal_LoaMgrFadeOutStRate)

#ifdef Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val
# undef Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSig0NoTqLoaResp)

#ifdef Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val
# undef Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSig1NoTqLoaResp)

#ifdef Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val
# undef Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSig2Resp)

#ifdef Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val
# undef Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSig3Resp)

#ifdef Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val
# undef Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSig4Resp)

#ifdef Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val
# undef Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val
#endif
#define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val() (LoaMgr_Cal_LoaMgrHwTqIdptSigFltThd)

#ifdef Rte_Prm_LoaMgrHwTqLoaAvlResp_Val
# undef Rte_Prm_LoaMgrHwTqLoaAvlResp_Val
#endif
#define Rte_Prm_LoaMgrHwTqLoaAvlResp_Val() (LoaMgr_Cal_LoaMgrHwTqLoaAvlResp)

#ifdef Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val
# undef Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val
#endif
#define Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val() (LoaMgr_Cal_LoaMgrIvtrIdptSig0Resp)

#ifdef Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val
# undef Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val
#endif
#define Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val() (LoaMgr_Cal_LoaMgrIvtrIdptSig1Resp)

#ifdef Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val
# undef Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val
#endif
#define Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val() (LoaMgr_Cal_LoaMgrIvtrIdptSig2Resp)

#ifdef Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val
# undef Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val
#endif
#define Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val() (LoaMgr_Cal_LoaMgrIvtrIdptSigFltThd)

#ifdef Rte_Prm_LoaMgrIvtrMtgtnRate_Val
# undef Rte_Prm_LoaMgrIvtrMtgtnRate_Val
#endif
#define Rte_Prm_LoaMgrIvtrMtgtnRate_Val() (LoaMgr_Cal_LoaMgrIvtrMtgtnRate)

#ifdef Rte_Prm_LoaMgrIvtrMtgtnSca_Val
# undef Rte_Prm_LoaMgrIvtrMtgtnSca_Val
#endif
#define Rte_Prm_LoaMgrIvtrMtgtnSca_Val() (LoaMgr_Cal_LoaMgrIvtrMtgtnSca)

#ifdef Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl
# undef Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl
#endif
#define Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl() (LoaMgr_Cal_LoaMgrIvtrMtgtnScaZeroEna)

#ifdef Rte_Prm_LoaMgrLimdStRate_Val
# undef Rte_Prm_LoaMgrLimdStRate_Val
#endif
#define Rte_Prm_LoaMgrLimdStRate_Val() (LoaMgr_Cal_LoaMgrLimdStRate)

#ifdef Rte_Prm_LoaMgrLimdStSca_Val
# undef Rte_Prm_LoaMgrLimdStSca_Val
#endif
#define Rte_Prm_LoaMgrLimdStSca_Val() (LoaMgr_Cal_LoaMgrLimdStSca)

#ifdef Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val
# undef Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val
#endif
#define Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val() (LoaMgr_Cal_LoaMgrMotAgAvlSnsrlsResp)

#ifdef Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val
# undef Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val
#endif
#define Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val() (LoaMgr_Cal_LoaMgrMotAgIdptSig0NoSnsrlsResp)

#ifdef Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val
# undef Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val
#endif
#define Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val() (LoaMgr_Cal_LoaMgrMotAgIdptSig1NoSnsrlsResp)

#ifdef Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val
# undef Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val
#endif
#define Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val() (LoaMgr_Cal_LoaMgrMotAgIdptSig2Resp)

#ifdef Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val
# undef Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val
#endif
#define Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val() (LoaMgr_Cal_LoaMgrMotAgIdptSig3Resp)

#ifdef Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val
# undef Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val
#endif
#define Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val() (LoaMgr_Cal_LoaMgrMotAgIdptSigFltThd)

#ifdef Rte_Prm_LoaMgrMotAgMtgtnRate_Val
# undef Rte_Prm_LoaMgrMotAgMtgtnRate_Val
#endif
#define Rte_Prm_LoaMgrMotAgMtgtnRate_Val() (LoaMgr_Cal_LoaMgrMotAgMtgtnRate)

#ifdef Rte_Prm_LoaMgrMotAgMtgtnSca_Val
# undef Rte_Prm_LoaMgrMotAgMtgtnSca_Val
#endif
#define Rte_Prm_LoaMgrMotAgMtgtnSca_Val() (LoaMgr_Cal_LoaMgrMotAgMtgtnSca)

#ifdef Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl
# undef Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl
#endif
#define Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl() (LoaMgr_Cal_LoaMgrMotAgMtgtnScaZeroEna)


/*** PIM Stubs ***/

#ifdef Rte_Pim_PrevCurrMeasIdptSigResp
# undef Rte_Pim_PrevCurrMeasIdptSigResp
#endif
#define Rte_Pim_PrevCurrMeasIdptSigResp() (&LoaMgr_Pim_PrevCurrMeasIdptSigResp)

#ifdef Rte_Pim_PrevCurrMeasIdptSigVal
# undef Rte_Pim_PrevCurrMeasIdptSigVal
#endif
#define Rte_Pim_PrevCurrMeasIdptSigVal() (&LoaMgr_Pim_PrevCurrMeasIdptSigVal)

#ifdef Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna
# undef Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna
#endif
#define Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna() (&LoaMgr_Pim_PrevCurrMeasLoaStSwMtgtnEna)

#ifdef Rte_Pim_PrevHwTqIdptSigResp
# undef Rte_Pim_PrevHwTqIdptSigResp
#endif
#define Rte_Pim_PrevHwTqIdptSigResp() (&LoaMgr_Pim_PrevHwTqIdptSigResp)

#ifdef Rte_Pim_PrevHwTqIdptSigVal
# undef Rte_Pim_PrevHwTqIdptSigVal
#endif
#define Rte_Pim_PrevHwTqIdptSigVal() (&LoaMgr_Pim_PrevHwTqIdptSigVal)

#ifdef Rte_Pim_PrevHwTqLoaStSwMtgtnEna
# undef Rte_Pim_PrevHwTqLoaStSwMtgtnEna
#endif
#define Rte_Pim_PrevHwTqLoaStSwMtgtnEna() (&LoaMgr_Pim_PrevHwTqLoaStSwMtgtnEna)

#ifdef Rte_Pim_PrevIvtrIdptSigResp
# undef Rte_Pim_PrevIvtrIdptSigResp
#endif
#define Rte_Pim_PrevIvtrIdptSigResp() (&LoaMgr_Pim_PrevIvtrIdptSigResp)

#ifdef Rte_Pim_PrevIvtrIdptSigVal
# undef Rte_Pim_PrevIvtrIdptSigVal
#endif
#define Rte_Pim_PrevIvtrIdptSigVal() (&LoaMgr_Pim_PrevIvtrIdptSigVal)

#ifdef Rte_Pim_PrevIvtrLoaStSwMtgtnEna
# undef Rte_Pim_PrevIvtrLoaStSwMtgtnEna
#endif
#define Rte_Pim_PrevIvtrLoaStSwMtgtnEna() (&LoaMgr_Pim_PrevIvtrLoaStSwMtgtnEna)

#ifdef Rte_Pim_PrevMotAgLoaMtgtnEna
# undef Rte_Pim_PrevMotAgLoaMtgtnEna
#endif
#define Rte_Pim_PrevMotAgLoaMtgtnEna() (&LoaMgr_Pim_PrevMotAgLoaMtgtnEna)

#ifdef Rte_Pim_PrevMotAgLoaStSwMtgtnEna
# undef Rte_Pim_PrevMotAgLoaStSwMtgtnEna
#endif
#define Rte_Pim_PrevMotAgLoaStSwMtgtnEna() (&LoaMgr_Pim_PrevMotAgLoaStSwMtgtnEna)

#ifdef Rte_Pim_PrevMotAgMeclIdptSigResp
# undef Rte_Pim_PrevMotAgMeclIdptSigResp
#endif
#define Rte_Pim_PrevMotAgMeclIdptSigResp() (&LoaMgr_Pim_PrevMotAgMeclIdptSigResp)

#ifdef Rte_Pim_PrevMotAgMeclIdptSigVal
# undef Rte_Pim_PrevMotAgMeclIdptSigVal
#endif
#define Rte_Pim_PrevMotAgMeclIdptSigVal() (&LoaMgr_Pim_PrevMotAgMeclIdptSigVal)

#ifdef Rte_Pim_PrevVltgModSrc
# undef Rte_Pim_PrevVltgModSrc
#endif
#define Rte_Pim_PrevVltgModSrc() (&LoaMgr_Pim_PrevVltgModSrc)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
