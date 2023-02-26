/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_DutyCycThermProtn.h
 *        Config:  C:/Component/SF009A_DutyCycThermProtn_Impl/tools/Component.dpa
 *     SW-C Type:  DutyCycThermProtn
 *  Generated at:  Wed Nov  8 10:49:28 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DutyCycThermProtn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DUTYCYCTHERMPROTN_H
# define _RTE_DUTYCYCTHERMPROTN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_DutyCycThermProtn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DutyCycThermProtn
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AbsltTLimSlewStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FetLoaMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FetMtgtnEnaCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil1ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil2ValStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil3ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil4ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil5ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fil6ValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(DutyCycThermProtnFilStValRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilStVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fild3Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fild4Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fild5Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Fild6Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LstTblValRateLimrStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReInitCntrFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReInitCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnAbsltCtrlrTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnAbsltCuTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnAbsltTTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u9p7, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnLstTblVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u9p7, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnLstTblValSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr12T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr36T; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnMplr6; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnThermLoadLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dDutyCycThermProtnThermLoadLimTblYVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DutyCycThermProtn, RTE_CONST, RTE_CONST) Rte_Inst_DutyCycThermProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DutyCycThermProtn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsLimdTPrfmnc_Logl (FALSE)
# define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_DutyCycThermProtnDi_Logl (FALSE)
# define Rte_InitValue_DutyCycThermProtnMaxOutp_Val (0U)
# define Rte_InitValue_EcuTFild_Val (25.0F)
# define Rte_InitValue_IgnTiOff_Val (0U)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
# define Rte_InitValue_MotCurrPeakEstimdFild_Val (0.0F)
# define Rte_InitValue_MotFetT_Val (0.0F)
# define Rte_InitValue_MotMagT_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_MotWidgT_Val (0.0F)
# define Rte_InitValue_ThermDutyCycProtnLoadDptLim_Val (8.8F)
# define Rte_InitValue_ThermDutyCycProtnTDptLim_Val (8.8F)
# define Rte_InitValue_ThermLimSlowFilMax_Val (0.0F)
# define Rte_InitValue_ThermMotTqLim_Val (0.0F)
# define Rte_InitValue_ThermRednFac_Val (0.0F)
# define Rte_InitValue_VehTiVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_DiagcStsLimdTPrfmnc_Logl(P2VAR(boolean, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_DualEcuFltMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_DutyCycThermProtnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_IgnTiOff_Val(P2VAR(uint32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotCurrPeakEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotCurrPeakEstimdFild_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotFetT_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotMagT_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_MotWidgT_Val(P2VAR(float32, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DutyCycThermProtn_VehTiVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_ThermDutyCycProtnLoadDptLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_ThermDutyCycProtnTDptLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_ThermLimSlowFilMax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_ThermMotTqLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DutyCycThermProtn_ThermRednFac_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_FilStVal_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_DUTYCYCTHERMPROTN_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_FilStVal_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltMotVelBreakPt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltTTqSlewHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltTTqSlewLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnCtrlT_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnIgnOffMsgWaitTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLimScaFac_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnTqCmdSlewDwn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnTqCmdSlewUp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnDutyCycFildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnCtrlTSeln_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnIgnOffCtrlEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMotPrTSeln_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrTSeln_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnSlowFilTSeln_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValNonStall_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u9p7_2_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValNonStall_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValStall_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u9p7_2_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValStall_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6NonStallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6StallTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s15p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s15p0_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u16p0_2_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u9p7_2_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_DutyCycThermProtn_DutyCycThermProtnInit1_FilStVariReInitFlg(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_DutyCycThermProtn_DutyCycThermProtnPer1_FilStVariReInitFlg(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsLimdTPrfmnc_Logl Rte_Read_DutyCycThermProtn_DiagcStsLimdTPrfmnc_Logl
# define Rte_Read_DualEcuFltMtgtnEna_Logl Rte_Read_DutyCycThermProtn_DualEcuFltMtgtnEna_Logl
# define Rte_Read_DutyCycThermProtnDi_Logl Rte_Read_DutyCycThermProtn_DutyCycThermProtnDi_Logl
# define Rte_Read_EcuTFild_Val Rte_Read_DutyCycThermProtn_EcuTFild_Val
# define Rte_Read_IgnTiOff_Val Rte_Read_DutyCycThermProtn_IgnTiOff_Val
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_DutyCycThermProtn_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_DutyCycThermProtn_MotCurrPeakEstimd_Val
# define Rte_Read_MotCurrPeakEstimdFild_Val Rte_Read_DutyCycThermProtn_MotCurrPeakEstimdFild_Val
# define Rte_Read_MotFetT_Val Rte_Read_DutyCycThermProtn_MotFetT_Val
# define Rte_Read_MotMagT_Val Rte_Read_DutyCycThermProtn_MotMagT_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_DutyCycThermProtn_MotVelCrf_Val
# define Rte_Read_MotWidgT_Val Rte_Read_DutyCycThermProtn_MotWidgT_Val
# define Rte_Read_VehTiVld_Logl Rte_Read_DutyCycThermProtn_VehTiVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DutyCycThermProtnMaxOutp_Val Rte_Write_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val
# define Rte_Write_ThermDutyCycProtnLoadDptLim_Val Rte_Write_DutyCycThermProtn_ThermDutyCycProtnLoadDptLim_Val
# define Rte_Write_ThermDutyCycProtnTDptLim_Val Rte_Write_DutyCycThermProtn_ThermDutyCycProtnTDptLim_Val
# define Rte_Write_ThermLimSlowFilMax_Val Rte_Write_DutyCycThermProtn_ThermLimSlowFilMax_Val
# define Rte_Write_ThermMotTqLim_Val Rte_Write_DutyCycThermProtn_ThermMotTqLim_Val
# define Rte_Write_ThermRednFac_Val Rte_Write_DutyCycThermProtn_ThermRednFac_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FilStVal_GetErrorStatus Rte_Call_DutyCycThermProtn_FilStVal_GetErrorStatus
# define Rte_Call_FilStVal_SetRamBlockStatus Rte_Call_DutyCycThermProtn_FilStVal_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_DutyCycThermProtn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg(data) \
  Rte_IrvWrite_DutyCycThermProtn_DutyCycThermProtnInit1_FilStVariReInitFlg(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg() \
  Rte_IrvRead_DutyCycThermProtn_DutyCycThermProtnPer1_FilStVariReInitFlg()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltMotVelBreakPt_Val

# define Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltTTqSlewHiLim_Val

# define Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltTTqSlewLoLim_Val

# define Rte_Prm_DutyCycThermProtnCtrlT_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnCtrlT_Val

# define Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnIgnOffMsgWaitTi_Val

# define Rte_Prm_DutyCycThermProtnThermLimScaFac_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLimScaFac_Val

# define Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnTqCmdSlewDwn_Val

# define Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnTqCmdSlewUp_Val

# define Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val Rte_Prm_DutyCycThermProtn_DutyCycThermProtnDutyCycFildThd_Val

# define Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl Rte_Prm_DutyCycThermProtn_DutyCycThermProtnCtrlTSeln_Logl

# define Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl Rte_Prm_DutyCycThermProtn_DutyCycThermProtnIgnOffCtrlEna_Logl

# define Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMotPrTSeln_Logl

# define Rte_Prm_DutyCycThermProtnMplrTSeln_Logl Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrTSeln_Logl

# define Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl Rte_Prm_DutyCycThermProtn_DutyCycThermProtnSlowFilTSeln_Logl

# define Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnAbsltCuTTqTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValNonStall_Ary2D

# define Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnLstTblValStall_Ary2D

# define Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr1StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr2StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr3StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr4StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr5StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6NonStallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplr6StallTblY_Ary1D

# define Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnMplrTblX_Ary1D

# define Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblX_Ary2D

# define Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D Rte_Prm_DutyCycThermProtn_DutyCycThermProtnThermLoadLimTblY_Ary2D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AbsltTLimSlewStVari() (Rte_Inst_DutyCycThermProtn->Pim_AbsltTLimSlewStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LstTblValRateLimrStVari() (Rte_Inst_DutyCycThermProtn->Pim_LstTblValRateLimrStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReInitCntrVal() (Rte_Inst_DutyCycThermProtn->Pim_ReInitCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnAbsltCtrlrTTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnAbsltCuTTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnAbsltTTqLim() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnAbsltTTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr12T() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr12T) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr36T() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr36T) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnThermLoadLim() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnThermLoadLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnThermLoadLimTblYVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnLstTblVal() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnLstTblVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnLstTblValSlew() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnLstTblValSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr1() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr2() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr3() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr4() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr5() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr5) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dDutyCycThermProtnMplr6() (Rte_Inst_DutyCycThermProtn->Pim_dDutyCycThermProtnMplr6) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FetMtgtnEnaCalIdx() (Rte_Inst_DutyCycThermProtn->Pim_FetMtgtnEnaCalIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil3ValPwrUp() (Rte_Inst_DutyCycThermProtn->Pim_Fil3ValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil4ValPwrUp() (Rte_Inst_DutyCycThermProtn->Pim_Fil4ValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil5ValPwrUp() (Rte_Inst_DutyCycThermProtn->Pim_Fil5ValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil6ValPwrUp() (Rte_Inst_DutyCycThermProtn->Pim_Fil6ValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FetLoaMtgtnEnaPrev() (Rte_Inst_DutyCycThermProtn->Pim_FetLoaMtgtnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReInitCntrFlg() (Rte_Inst_DutyCycThermProtn->Pim_ReInitCntrFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil1ValStVari() (Rte_Inst_DutyCycThermProtn->Pim_Fil1ValStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fil2ValStVari() (Rte_Inst_DutyCycThermProtn->Pim_Fil2ValStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilStVal() (Rte_Inst_DutyCycThermProtn->Pim_FilStVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fild3Val() (Rte_Inst_DutyCycThermProtn->Pim_Fild3Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fild4Val() (Rte_Inst_DutyCycThermProtn->Pim_Fild4Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fild5Val() (Rte_Inst_DutyCycThermProtn->Pim_Fild5Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Fild6Val() (Rte_Inst_DutyCycThermProtn->Pim_Fild6Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AbsltTLimSlewStVari(void)
 *   float32 *Rte_Pim_LstTblValRateLimrStVari(void)
 *   float32 *Rte_Pim_ReInitCntrVal(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnMplr12T(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnMplr36T(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnThermLoadLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal(void)
 *   u9p7 *Rte_Pim_dDutyCycThermProtnLstTblVal(void)
 *   u9p7 *Rte_Pim_dDutyCycThermProtnLstTblValSlew(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr1(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr2(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr3(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr4(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr5(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr6(void)
 *   uint8 *Rte_Pim_FetMtgtnEnaCalIdx(void)
 *   uint8 *Rte_Pim_Fil3ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil4ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil5ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil6ValPwrUp(void)
 *   boolean *Rte_Pim_FetLoaMtgtnEnaPrev(void)
 *   boolean *Rte_Pim_ReInitCntrFlg(void)
 *   FilLpRec1 *Rte_Pim_Fil1ValStVari(void)
 *   FilLpRec1 *Rte_Pim_Fil2ValStVari(void)
 *   DutyCycThermProtnFilStValRec1 *Rte_Pim_FilStVal(void)
 *   FilLpRec1 *Rte_Pim_Fild3Val(void)
 *   FilLpRec1 *Rte_Pim_Fild4Val(void)
 *   FilLpRec1 *Rte_Pim_Fild5Val(void)
 *   FilLpRec1 *Rte_Pim_Fild6Val(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnCtrlT_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnThermLimScaFac_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val(void)
 *   u16p0 Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void)
 *   boolean Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnMplrTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl(void)
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_5
 *   u9p7 *Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   s15p0 *Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_5
 *   s15p0 *Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_5
 *   u16p0 *Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D(void)
 *     Returnvalue: u16p0* is of type Ary2D_u16p0_2_8
 *   u9p7 *Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_8
 *
 *********************************************************************************************************************/


# define DutyCycThermProtn_START_SEC_CODE
# include "DutyCycThermProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DutyCycThermProtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DutyCycThermProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FilStVal_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_FilStVal_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DutyCycThermProtnInit1 DutyCycThermProtnInit1
FUNC(void, DutyCycThermProtn_CODE) DutyCycThermProtnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DutyCycThermProtnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsLimdTPrfmnc_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DutyCycThermProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimdFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotFetT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotMagT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotWidgT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DutyCycThermProtnMaxOutp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_ThermDutyCycProtnLoadDptLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermDutyCycProtnTDptLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermLimSlowFilMax_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermMotTqLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DutyCycThermProtnPer1 DutyCycThermProtnPer1
FUNC(void, DutyCycThermProtn_CODE) DutyCycThermProtnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DutyCycThermProtn_STOP_SEC_CODE
# include "DutyCycThermProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DUTYCYCTHERMPROTN_H */

#include "Rte_Stubs.h"
