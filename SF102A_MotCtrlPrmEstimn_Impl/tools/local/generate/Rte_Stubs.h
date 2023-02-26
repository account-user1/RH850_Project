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
extern VAR(boolean, AUTOMATIC) MotCtrlPrmEstimn_Ip_DualEcuFltMtgtnEna;
extern VAR(uint8, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotAndThermProtnLoaMod;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotCurrDaxCmd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotCurrQaxCmd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotFetT;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotMagT;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Ip_MotWidgT;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotBackEmfConEstimd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotInduDaxEstimd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotInduDaxEstimdIvs;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotInduQaxEstimd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotInduQaxEstimdIvs;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Op_MotREstimd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnFetRNom;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnFetThermCoeff;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMagThermCoeff;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConHiLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConLoLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConNom;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn;
extern CONST(u9p7, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnX[16];
extern CONST(u2p14, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnY[16];
extern CONST(u9p7, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln[6];
extern CONST(u9p7, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotCurrQaxInduSatnX[7];
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxHiLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxLoLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxNom;
extern CONST(u2p14, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxSatnScaY[7][6];
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxHiLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxLoLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxNom;
extern CONST(u2p14, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxSatnScaY[7][6];
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRHiLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRLoLim;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRNom;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotWidgThermCoeff;
extern CONST(float32, AUTOMATIC) MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnTNom;

/* PIMs */
extern VAR(MotPrmNomEolRec3, AUTOMATIC) MotCtrlPrmEstimn_Pim_MotPrmNom;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnFetRFfEstimd;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotRFfEstimd;

/* IRVs */
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Irv_MotBackEmfConFf;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) MotCtrlPrmEstimn_Srv_MotPrmNom_GetErrorStatus_ReqResPtr;
extern VAR(Std_ReturnType, AUTOMATIC) MotCtrlPrmEstimn_Srv_MotPrmNom_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) MotCtrlPrmEstimn_Srv_MotPrmNom_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) MotCtrlPrmEstimn_Srv_MotPrmNom_SetRamBlockStatus_Return;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Cli_GetMotPrmNomEol_MotBackEmfConNom;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Cli_GetMotPrmNomEol_MotRNom;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Cli_SetMotPrmNomEol_MotBackEmfConNom;
extern VAR(float32, AUTOMATIC) MotCtrlPrmEstimn_Cli_SetMotPrmNomEol_MotRNom;


/*** Input Stubs ***/

#ifdef Rte_Read_DualEcuFltMtgtnEna_Logl
# undef Rte_Read_DualEcuFltMtgtnEna_Logl
#endif
#define Rte_Read_DualEcuFltMtgtnEna_Logl(data) (*(data) = MotCtrlPrmEstimn_Ip_DualEcuFltMtgtnEna)

#ifdef Rte_Read_MotAndThermProtnLoaMod_Val
# undef Rte_Read_MotAndThermProtnLoaMod_Val
#endif
#define Rte_Read_MotAndThermProtnLoaMod_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotAndThermProtnLoaMod)

#ifdef Rte_Read_MotCurrDaxCmd_Val
# undef Rte_Read_MotCurrDaxCmd_Val
#endif
#define Rte_Read_MotCurrDaxCmd_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotCurrDaxCmd)

#ifdef Rte_Read_MotCurrQaxCmd_Val
# undef Rte_Read_MotCurrQaxCmd_Val
#endif
#define Rte_Read_MotCurrQaxCmd_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotCurrQaxCmd)

#ifdef Rte_Read_MotFetT_Val
# undef Rte_Read_MotFetT_Val
#endif
#define Rte_Read_MotFetT_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotFetT)

#ifdef Rte_Read_MotMagT_Val
# undef Rte_Read_MotMagT_Val
#endif
#define Rte_Read_MotMagT_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotMagT)

#ifdef Rte_Read_MotWidgT_Val
# undef Rte_Read_MotWidgT_Val
#endif
#define Rte_Read_MotWidgT_Val(data) (*(data) = MotCtrlPrmEstimn_Ip_MotWidgT)


/*** Output Stubs ***/

#ifdef Rte_Write_MotBackEmfConEstimd_Val
# undef Rte_Write_MotBackEmfConEstimd_Val
#endif
#define Rte_Write_MotBackEmfConEstimd_Val(data) (MotCtrlPrmEstimn_Op_MotBackEmfConEstimd = (data))

#ifdef Rte_Write_MotInduDaxEstimd_Val
# undef Rte_Write_MotInduDaxEstimd_Val
#endif
#define Rte_Write_MotInduDaxEstimd_Val(data) (MotCtrlPrmEstimn_Op_MotInduDaxEstimd = (data))

#ifdef Rte_Write_MotInduDaxEstimdIvs_Val
# undef Rte_Write_MotInduDaxEstimdIvs_Val
#endif
#define Rte_Write_MotInduDaxEstimdIvs_Val(data) (MotCtrlPrmEstimn_Op_MotInduDaxEstimdIvs = (data))

#ifdef Rte_Write_MotInduQaxEstimd_Val
# undef Rte_Write_MotInduQaxEstimd_Val
#endif
#define Rte_Write_MotInduQaxEstimd_Val(data) (MotCtrlPrmEstimn_Op_MotInduQaxEstimd = (data))

#ifdef Rte_Write_MotInduQaxEstimdIvs_Val
# undef Rte_Write_MotInduQaxEstimdIvs_Val
#endif
#define Rte_Write_MotInduQaxEstimdIvs_Val(data) (MotCtrlPrmEstimn_Op_MotInduQaxEstimdIvs = (data))

#ifdef Rte_Write_MotREstimd_Val
# undef Rte_Write_MotREstimd_Val
#endif
#define Rte_Write_MotREstimd_Val(data) (MotCtrlPrmEstimn_Op_MotREstimd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotCtrlPrmEstimnFetRNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnFetRNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnFetRNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnFetRNom)

#ifdef Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val
# undef Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnFetThermCoeff)

#ifdef Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val
# undef Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMagThermCoeff)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConHiLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConLoLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConNom)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnX[0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D
# undef Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotBackEmfConSatnY[0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D
# undef Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln[0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D
# undef Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotCurrQaxInduSatnX[0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxHiLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxLoLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxNom)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D
# undef Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduDaxSatnScaY[0][0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxHiLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxLoLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxNom)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D
# undef Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D() (&(MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotInduQaxSatnScaY[0][0]))

#ifdef Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRHiLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRLoLim)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotRNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotRNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotRNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotRNom)

#ifdef Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val
# undef Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnMotWidgThermCoeff)

#ifdef Rte_Prm_MotCtrlPrmEstimnTNom_Val
# undef Rte_Prm_MotCtrlPrmEstimnTNom_Val
#endif
#define Rte_Prm_MotCtrlPrmEstimnTNom_Val() (MotCtrlPrmEstimn_Cal_MotCtrlPrmEstimnTNom)


/*** PIM Stubs ***/

#ifdef Rte_Pim_MotPrmNom
# undef Rte_Pim_MotPrmNom
#endif
#define Rte_Pim_MotPrmNom() (&MotCtrlPrmEstimn_Pim_MotPrmNom)

#ifdef Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim
# undef Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim
#endif
#define Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim)

#ifdef Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd
# undef Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd
#endif
#define Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnFetRFfEstimd)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim
# undef Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca
# undef Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax
# undef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax
# undef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax
# undef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax
# undef Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax)

#ifdef Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd
# undef Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd
#endif
#define Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() (&MotCtrlPrmEstimn_Pim_dMotCtrlPrmEstimnMotRFfEstimd)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf
# undef Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf
#endif
#define Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf() (MotCtrlPrmEstimn_Irv_MotBackEmfConFf)

#ifdef Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf
# undef Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf
#endif
#define Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(data) (MotCtrlPrmEstimn_Irv_MotBackEmfConFf = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
