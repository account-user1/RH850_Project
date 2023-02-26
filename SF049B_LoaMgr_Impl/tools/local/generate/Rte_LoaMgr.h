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
 *          File:  Rte_LoaMgr.h
 *        Config:  C:/_Synergy_Projects/Working/SF049B_LoaMgr_Impl/tools/Component.dpa
 *     SW-C Type:  LoaMgr
 *  Generated at:  Wed Oct 25 14:54:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <LoaMgr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_LOAMGR_H
# define _RTE_LOAMGR_H

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

# include "Rte_LoaMgr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_LoaMgr
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCurrMeasIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCurrMeasIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevCurrMeasLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTqIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTqIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTqLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIvtrIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIvtrIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIvtrLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotAgLoaMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotAgLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotAgMeclIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotAgMeclIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVltgModSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_LoaMgr, RTE_CONST, RTE_CONST) Rte_Inst_LoaMgr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_LoaMgr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CurrMeasIdptSig_Val (2U)
# define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
# define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
# define Rte_InitValue_HwTqIdptSig_Val (4U)
# define Rte_InitValue_HwTqLoaMtgtnEna_Logl (FALSE)
# define Rte_InitValue_IvtrFetFltTyp_Val (0U)
# define Rte_InitValue_LoaRateLim_Val (1.0F)
# define Rte_InitValue_LoaSca_Val (1.0F)
# define Rte_InitValue_LoaScaDi_Logl (FALSE)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_MotAgLoaMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAgMeclIdptSig_Val (3U)
# define Rte_InitValue_MotAgSnsrlsAvl_Logl (FALSE)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_TqLoaAvl_Logl (FALSE)
# define Rte_InitValue_VehSteerMod_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_CurrMeasIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_DiagcStsIvtr1Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_DiagcStsIvtr2Inactv_Logl(P2VAR(boolean, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_HwTqIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_IvtrFetFltTyp_Val(P2VAR(IvtrFetFltTyp1, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_LoaScaDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_MotAgMeclIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_MotAgSnsrlsAvl_Logl(P2VAR(boolean, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_TqLoaAvl_Logl(P2VAR(boolean, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LoaMgr_VehSteerMod_Val(P2VAR(SteerMod1, AUTOMATIC, RTE_LOAMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_HwTqLoaMtgtnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_LoaRateLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_LoaSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_LoaSt_Val(LoaSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_MotAgLoaMtgtnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LoaMgr_MotAndThermProtnLoaMod_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_LoaMgr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrFadeOutStRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrLimdStRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrLimdStSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig0Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig1Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig2Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig0NoTqLoaResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig1NoTqLoaResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig2Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig3Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig4Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrHwTqLoaAvlResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig0Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig1Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig2Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgAvlSnsrlsResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig2Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig3Resp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgIdptSigFltThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnScaZeroEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnScaZeroEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnScaZeroEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_LoaMgr_LoaMgrExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_LoaMgr_LoaMgrExclusiveArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CurrMeasIdptSig_Val Rte_Read_LoaMgr_CurrMeasIdptSig_Val
# define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_LoaMgr_DiagcStsIvtr1Inactv_Logl
# define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_LoaMgr_DiagcStsIvtr2Inactv_Logl
# define Rte_Read_HwTqIdptSig_Val Rte_Read_LoaMgr_HwTqIdptSig_Val
# define Rte_Read_IvtrFetFltTyp_Val Rte_Read_LoaMgr_IvtrFetFltTyp_Val
# define Rte_Read_LoaScaDi_Logl Rte_Read_LoaMgr_LoaScaDi_Logl
# define Rte_Read_MotAgMeclIdptSig_Val Rte_Read_LoaMgr_MotAgMeclIdptSig_Val
# define Rte_Read_MotAgSnsrlsAvl_Logl Rte_Read_LoaMgr_MotAgSnsrlsAvl_Logl
# define Rte_Read_TqLoaAvl_Logl Rte_Read_LoaMgr_TqLoaAvl_Logl
# define Rte_Read_VehSteerMod_Val Rte_Read_LoaMgr_VehSteerMod_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTqLoaMtgtnEna_Logl Rte_Write_LoaMgr_HwTqLoaMtgtnEna_Logl
# define Rte_Write_LoaRateLim_Val Rte_Write_LoaMgr_LoaRateLim_Val
# define Rte_Write_LoaSca_Val Rte_Write_LoaMgr_LoaSca_Val
# define Rte_Write_LoaSt_Val Rte_Write_LoaMgr_LoaSt_Val
# define Rte_Write_MotAgLoaMtgtnEna_Logl Rte_Write_LoaMgr_MotAgLoaMtgtnEna_Logl
# define Rte_Write_MotAndThermProtnLoaMod_Val Rte_Write_LoaMgr_MotAndThermProtnLoaMod_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_LoaMgr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_LoaMgrExclusiveArea Rte_Enter_LoaMgr_LoaMgrExclusiveArea /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */
# define Rte_Exit_LoaMgrExclusiveArea Rte_Exit_LoaMgr_LoaMgrExclusiveArea /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnRate_Val

# define Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnSca_Val

# define Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnRate_Val

# define Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnSca_Val

# define Rte_Prm_LoaMgrFadeOutStRate_Val Rte_Prm_LoaMgr_LoaMgrFadeOutStRate_Val

# define Rte_Prm_LoaMgrIvtrMtgtnRate_Val Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnRate_Val

# define Rte_Prm_LoaMgrIvtrMtgtnSca_Val Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnSca_Val

# define Rte_Prm_LoaMgrLimdStRate_Val Rte_Prm_LoaMgr_LoaMgrLimdStRate_Val

# define Rte_Prm_LoaMgrLimdStSca_Val Rte_Prm_LoaMgr_LoaMgrLimdStSca_Val

# define Rte_Prm_LoaMgrMotAgMtgtnRate_Val Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnRate_Val

# define Rte_Prm_LoaMgrMotAgMtgtnSca_Val Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnSca_Val

# define Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig0Resp_Val

# define Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig1Resp_Val

# define Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSig2Resp_Val

# define Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val Rte_Prm_LoaMgr_LoaMgrCurrMeasIdptSigFltThd_Val

# define Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig0NoTqLoaResp_Val

# define Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig1NoTqLoaResp_Val

# define Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig2Resp_Val

# define Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig3Resp_Val

# define Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSig4Resp_Val

# define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val Rte_Prm_LoaMgr_LoaMgrHwTqIdptSigFltThd_Val

# define Rte_Prm_LoaMgrHwTqLoaAvlResp_Val Rte_Prm_LoaMgr_LoaMgrHwTqLoaAvlResp_Val

# define Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig0Resp_Val

# define Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig1Resp_Val

# define Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val Rte_Prm_LoaMgr_LoaMgrIvtrIdptSig2Resp_Val

# define Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val Rte_Prm_LoaMgr_LoaMgrIvtrIdptSigFltThd_Val

# define Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val Rte_Prm_LoaMgr_LoaMgrMotAgAvlSnsrlsResp_Val

# define Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val

# define Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val

# define Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig2Resp_Val

# define Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val Rte_Prm_LoaMgr_LoaMgrMotAgIdptSig3Resp_Val

# define Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val Rte_Prm_LoaMgr_LoaMgrMotAgIdptSigFltThd_Val

# define Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl Rte_Prm_LoaMgr_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl

# define Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl Rte_Prm_LoaMgr_LoaMgrCurrMeasMtgtnScaZeroEna_Logl

# define Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl Rte_Prm_LoaMgr_LoaMgrIvtrMtgtnScaZeroEna_Logl

# define Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl Rte_Prm_LoaMgr_LoaMgrMotAgMtgtnScaZeroEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevCurrMeasIdptSigResp() (Rte_Inst_LoaMgr->Pim_PrevCurrMeasIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevCurrMeasIdptSigVal() (Rte_Inst_LoaMgr->Pim_PrevCurrMeasIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwTqIdptSigResp() (Rte_Inst_LoaMgr->Pim_PrevHwTqIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwTqIdptSigVal() (Rte_Inst_LoaMgr->Pim_PrevHwTqIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIvtrIdptSigResp() (Rte_Inst_LoaMgr->Pim_PrevIvtrIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIvtrIdptSigVal() (Rte_Inst_LoaMgr->Pim_PrevIvtrIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotAgMeclIdptSigResp() (Rte_Inst_LoaMgr->Pim_PrevMotAgMeclIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotAgMeclIdptSigVal() (Rte_Inst_LoaMgr->Pim_PrevMotAgMeclIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVltgModSrc() (Rte_Inst_LoaMgr->Pim_PrevVltgModSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna() (Rte_Inst_LoaMgr->Pim_PrevCurrMeasLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwTqLoaStSwMtgtnEna() (Rte_Inst_LoaMgr->Pim_PrevHwTqLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIvtrLoaStSwMtgtnEna() (Rte_Inst_LoaMgr->Pim_PrevIvtrLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotAgLoaMtgtnEna() (Rte_Inst_LoaMgr->Pim_PrevMotAgLoaMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotAgLoaStSwMtgtnEna() (Rte_Inst_LoaMgr->Pim_PrevMotAgLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevCurrMeasIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevCurrMeasIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevHwTqIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevHwTqIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevIvtrIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevIvtrIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevMotAgMeclIdptSigResp(void)
 *   uint8 *Rte_Pim_PrevMotAgMeclIdptSigVal(void)
 *   uint8 *Rte_Pim_PrevVltgModSrc(void)
 *   boolean *Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevHwTqLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevIvtrLoaStSwMtgtnEna(void)
 *   boolean *Rte_Pim_PrevMotAgLoaMtgtnEna(void)
 *   boolean *Rte_Pim_PrevMotAgLoaStSwMtgtnEna(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrFadeOutStRate_Val(void)
 *   float32 Rte_Prm_LoaMgrIvtrMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrIvtrMtgtnSca_Val(void)
 *   float32 Rte_Prm_LoaMgrLimdStRate_Val(void)
 *   float32 Rte_Prm_LoaMgrLimdStSca_Val(void)
 *   float32 Rte_Prm_LoaMgrMotAgMtgtnRate_Val(void)
 *   float32 Rte_Prm_LoaMgrMotAgMtgtnSca_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrHwTqLoaAvlResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val(void)
 *   uint8 Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val(void)
 *   boolean Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl(void)
 *   boolean Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl(void)
 *
 *********************************************************************************************************************/


# define LoaMgr_START_SEC_CODE
# include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: LoaMgrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
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

# define RTE_RUNNABLE_LoaMgrInit1 LoaMgrInit1
FUNC(void, LoaMgr_CODE) LoaMgrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LoaMgrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CurrMeasIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr1Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DiagcStsIvtr2Inactv_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTqIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_IvtrFetFltTyp_Val(IvtrFetFltTyp1 *data)
 *   Std_ReturnType Rte_Read_LoaScaDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAgMeclIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgSnsrlsAvl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_TqLoaAvl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSteerMod_Val(SteerMod1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqLoaMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LoaRateLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_LoaSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_LoaSt_Val(LoaSt1 data)
 *   Std_ReturnType Rte_Write_MotAgLoaMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MotAndThermProtnLoaMod_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_LoaMgrExclusiveArea(void)
 *   void Rte_Exit_LoaMgrExclusiveArea(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_LoaMgrPer1 LoaMgrPer1
FUNC(void, LoaMgr_CODE) LoaMgrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define LoaMgr_STOP_SEC_CODE
# include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_LOAMGR_H */

#include "Rte_Stubs.h"
