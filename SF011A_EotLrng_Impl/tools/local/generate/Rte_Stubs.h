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
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAg;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAgAuthy;
extern VAR(boolean, AUTOMATIC) EotLrng_Ip_HwAgDiDiagSts;
extern VAR(boolean, AUTOMATIC) EotLrng_Ip_HwAgEotSig0Avl;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAgEotSig0Ccw;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAgEotSig0Cw;
extern VAR(boolean, AUTOMATIC) EotLrng_Ip_HwAgEotSig1Avl;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAgEotSig1Ccw;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwAgEotSig1Cw;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_HwTq;
extern VAR(float32, AUTOMATIC) EotLrng_Ip_MotVelCrf;

/* Outputs */
extern VAR(boolean, AUTOMATIC) EotLrng_Op_HwAgCcwDetd;
extern VAR(boolean, AUTOMATIC) EotLrng_Op_HwAgCwDetd;
extern VAR(float32, AUTOMATIC) EotLrng_Op_HwAgEotCcw;
extern VAR(float32, AUTOMATIC) EotLrng_Op_HwAgEotCw;

/* Calibrations */
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngAuthyStrtLrn;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngEntrAndExitHysRngLimr;
extern CONST(uint16, AUTOMATIC) EotLrng_Cal_EotLrngEotLrnTmr;
extern CONST(uint8, AUTOMATIC) EotLrng_Cal_EotLrngHwAgOverTrvlCntThd;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngHwTqEotLrn;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngMotVelEotLrn;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngRackTrvlMax;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngRackTrvlMin;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotLrngRstAuthyMin;
extern CONST(boolean, AUTOMATIC) EotLrng_Cal_EotProtnRackTrvlLimrEna;
extern CONST(float32, AUTOMATIC) EotLrng_Cal_EotProtnRackTrvlLimrRngLimd;

/* PIMs */
extern VAR(EotNvmDataRec1, AUTOMATIC) EotLrng_Pim_EotNvmData;
extern VAR(MaxHwAgCwAndCcwRec2, AUTOMATIC) EotLrng_Pim_MaxHwAgCwAndCcw;
extern VAR(uint32, AUTOMATIC) EotLrng_Pim_CcwEotRefTmr;
extern VAR(uint32, AUTOMATIC) EotLrng_Pim_CwEotRefTmr;
extern VAR(boolean, AUTOMATIC) EotLrng_Pim_HwAgOverTrvlCntrNegDi;
extern VAR(boolean, AUTOMATIC) EotLrng_Pim_HwAgOverTrvlCntrPosDi;
extern VAR(float32, AUTOMATIC) EotLrng_Pim_PrevCcwEot;
extern VAR(float32, AUTOMATIC) EotLrng_Pim_PrevCwEot;
extern VAR(boolean, AUTOMATIC) EotLrng_Pim_RstLimReq;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) EotLrng_Srv_EotNvmData_GetErrorStatus_ReqResPtr;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_EotNvmData_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) EotLrng_Srv_EotNvmData_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_EotNvmData_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) EotLrng_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) EotLrng_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) EotLrng_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) EotLrng_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) EotLrng_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(uint8, AUTOMATIC) EotLrng_Srv_MaxHwAgCwAndCcw_GetErrorStatus_ReqResPtr;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_MaxHwAgCwAndCcw_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) EotLrng_Srv_MaxHwAgCwAndCcw_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_MaxHwAgCwAndCcw_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) EotLrng_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) EotLrng_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) EotLrng_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) EotLrng_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) EotLrng_Srv_SetNtcSts_Return;
extern VAR(uint8, AUTOMATIC) EotLrng_Cli_GetHwAgOverTrvlCnt_HwAgOverTrvlCnt;
extern VAR(float32, AUTOMATIC) EotLrng_Cli_RtnMaxHwAgCwAndCcw_HwAgCcwMax;
extern VAR(float32, AUTOMATIC) EotLrng_Cli_RtnMaxHwAgCwAndCcw_HwAgCwMax;
extern VAR(uint8, AUTOMATIC) EotLrng_Cli_SetHwAgOverTrvlCnt_HwAgOverTrvlCnt;


/*** Input Stubs ***/

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = EotLrng_Ip_HwAg)

#ifdef Rte_Read_HwAgAuthy_Val
# undef Rte_Read_HwAgAuthy_Val
#endif
#define Rte_Read_HwAgAuthy_Val(data) (*(data) = EotLrng_Ip_HwAgAuthy)

#ifdef Rte_Read_HwAgDiDiagSts_Logl
# undef Rte_Read_HwAgDiDiagSts_Logl
#endif
#define Rte_Read_HwAgDiDiagSts_Logl(data) (*(data) = EotLrng_Ip_HwAgDiDiagSts)

#ifdef Rte_Read_HwAgEotSig0Avl_Logl
# undef Rte_Read_HwAgEotSig0Avl_Logl
#endif
#define Rte_Read_HwAgEotSig0Avl_Logl(data) (*(data) = EotLrng_Ip_HwAgEotSig0Avl)

#ifdef Rte_Read_HwAgEotSig0Ccw_Val
# undef Rte_Read_HwAgEotSig0Ccw_Val
#endif
#define Rte_Read_HwAgEotSig0Ccw_Val(data) (*(data) = EotLrng_Ip_HwAgEotSig0Ccw)

#ifdef Rte_Read_HwAgEotSig0Cw_Val
# undef Rte_Read_HwAgEotSig0Cw_Val
#endif
#define Rte_Read_HwAgEotSig0Cw_Val(data) (*(data) = EotLrng_Ip_HwAgEotSig0Cw)

#ifdef Rte_Read_HwAgEotSig1Avl_Logl
# undef Rte_Read_HwAgEotSig1Avl_Logl
#endif
#define Rte_Read_HwAgEotSig1Avl_Logl(data) (*(data) = EotLrng_Ip_HwAgEotSig1Avl)

#ifdef Rte_Read_HwAgEotSig1Ccw_Val
# undef Rte_Read_HwAgEotSig1Ccw_Val
#endif
#define Rte_Read_HwAgEotSig1Ccw_Val(data) (*(data) = EotLrng_Ip_HwAgEotSig1Ccw)

#ifdef Rte_Read_HwAgEotSig1Cw_Val
# undef Rte_Read_HwAgEotSig1Cw_Val
#endif
#define Rte_Read_HwAgEotSig1Cw_Val(data) (*(data) = EotLrng_Ip_HwAgEotSig1Cw)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = EotLrng_Ip_HwTq)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = EotLrng_Ip_MotVelCrf)


/*** Output Stubs ***/

#ifdef Rte_Write_HwAgCcwDetd_Logl
# undef Rte_Write_HwAgCcwDetd_Logl
#endif
#define Rte_Write_HwAgCcwDetd_Logl(data) (EotLrng_Op_HwAgCcwDetd = (data))

#ifdef Rte_Write_HwAgCwDetd_Logl
# undef Rte_Write_HwAgCwDetd_Logl
#endif
#define Rte_Write_HwAgCwDetd_Logl(data) (EotLrng_Op_HwAgCwDetd = (data))

#ifdef Rte_Write_HwAgEotCcw_Val
# undef Rte_Write_HwAgEotCcw_Val
#endif
#define Rte_Write_HwAgEotCcw_Val(data) (EotLrng_Op_HwAgEotCcw = (data))

#ifdef Rte_Write_HwAgEotCw_Val
# undef Rte_Write_HwAgEotCw_Val
#endif
#define Rte_Write_HwAgEotCw_Val(data) (EotLrng_Op_HwAgEotCw = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_EotLrngAuthyStrtLrn_Val
# undef Rte_Prm_EotLrngAuthyStrtLrn_Val
#endif
#define Rte_Prm_EotLrngAuthyStrtLrn_Val() (EotLrng_Cal_EotLrngAuthyStrtLrn)

#ifdef Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val
# undef Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val
#endif
#define Rte_Prm_EotLrngEntrAndExitHysRngLimr_Val() (EotLrng_Cal_EotLrngEntrAndExitHysRngLimr)

#ifdef Rte_Prm_EotLrngEotLrnTmr_Val
# undef Rte_Prm_EotLrngEotLrnTmr_Val
#endif
#define Rte_Prm_EotLrngEotLrnTmr_Val() (EotLrng_Cal_EotLrngEotLrnTmr)

#ifdef Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val
# undef Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val
#endif
#define Rte_Prm_EotLrngHwAgOverTrvlCntThd_Val() (EotLrng_Cal_EotLrngHwAgOverTrvlCntThd)

#ifdef Rte_Prm_EotLrngHwTqEotLrn_Val
# undef Rte_Prm_EotLrngHwTqEotLrn_Val
#endif
#define Rte_Prm_EotLrngHwTqEotLrn_Val() (EotLrng_Cal_EotLrngHwTqEotLrn)

#ifdef Rte_Prm_EotLrngMotVelEotLrn_Val
# undef Rte_Prm_EotLrngMotVelEotLrn_Val
#endif
#define Rte_Prm_EotLrngMotVelEotLrn_Val() (EotLrng_Cal_EotLrngMotVelEotLrn)

#ifdef Rte_Prm_EotLrngRackTrvlMax_Val
# undef Rte_Prm_EotLrngRackTrvlMax_Val
#endif
#define Rte_Prm_EotLrngRackTrvlMax_Val() (EotLrng_Cal_EotLrngRackTrvlMax)

#ifdef Rte_Prm_EotLrngRackTrvlMin_Val
# undef Rte_Prm_EotLrngRackTrvlMin_Val
#endif
#define Rte_Prm_EotLrngRackTrvlMin_Val() (EotLrng_Cal_EotLrngRackTrvlMin)

#ifdef Rte_Prm_EotLrngRstAuthyMin_Val
# undef Rte_Prm_EotLrngRstAuthyMin_Val
#endif
#define Rte_Prm_EotLrngRstAuthyMin_Val() (EotLrng_Cal_EotLrngRstAuthyMin)

#ifdef Rte_Prm_EotProtnRackTrvlLimrEna_Logl
# undef Rte_Prm_EotProtnRackTrvlLimrEna_Logl
#endif
#define Rte_Prm_EotProtnRackTrvlLimrEna_Logl() (EotLrng_Cal_EotProtnRackTrvlLimrEna)

#ifdef Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val
# undef Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val() (EotLrng_Cal_EotProtnRackTrvlLimrRngLimd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_EotNvmData
# undef Rte_Pim_EotNvmData
#endif
#define Rte_Pim_EotNvmData() (&EotLrng_Pim_EotNvmData)

#ifdef Rte_Pim_MaxHwAgCwAndCcw
# undef Rte_Pim_MaxHwAgCwAndCcw
#endif
#define Rte_Pim_MaxHwAgCwAndCcw() (&EotLrng_Pim_MaxHwAgCwAndCcw)

#ifdef Rte_Pim_CcwEotRefTmr
# undef Rte_Pim_CcwEotRefTmr
#endif
#define Rte_Pim_CcwEotRefTmr() (&EotLrng_Pim_CcwEotRefTmr)

#ifdef Rte_Pim_CwEotRefTmr
# undef Rte_Pim_CwEotRefTmr
#endif
#define Rte_Pim_CwEotRefTmr() (&EotLrng_Pim_CwEotRefTmr)

#ifdef Rte_Pim_HwAgOverTrvlCntrNegDi
# undef Rte_Pim_HwAgOverTrvlCntrNegDi
#endif
#define Rte_Pim_HwAgOverTrvlCntrNegDi() (&EotLrng_Pim_HwAgOverTrvlCntrNegDi)

#ifdef Rte_Pim_HwAgOverTrvlCntrPosDi
# undef Rte_Pim_HwAgOverTrvlCntrPosDi
#endif
#define Rte_Pim_HwAgOverTrvlCntrPosDi() (&EotLrng_Pim_HwAgOverTrvlCntrPosDi)

#ifdef Rte_Pim_PrevCcwEot
# undef Rte_Pim_PrevCcwEot
#endif
#define Rte_Pim_PrevCcwEot() (&EotLrng_Pim_PrevCcwEot)

#ifdef Rte_Pim_PrevCwEot
# undef Rte_Pim_PrevCwEot
#endif
#define Rte_Pim_PrevCwEot() (&EotLrng_Pim_PrevCwEot)

#ifdef Rte_Pim_RstLimReq
# undef Rte_Pim_RstLimReq
#endif
#define Rte_Pim_RstLimReq() (&EotLrng_Pim_RstLimReq)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
