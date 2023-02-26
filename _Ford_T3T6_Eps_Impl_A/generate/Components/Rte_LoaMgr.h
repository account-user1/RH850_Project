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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <LoaMgr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_LOAMGR_H
# define _RTE_LOAMGR_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_LoaMgr_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_HwTqLoaMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaRateLim_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgLoaMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_LoaMgr_MotAndThermProtnLoaMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_DiagcStsIvtr2Inactv_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IvtrFetFltTyp1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltTyp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclIdptSig_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgSnsrlsAvl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TqLoa_TqLoaAvl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SteerMod1, RTE_VAR_INIT) Rte_LoaMgr_VehSteerMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CurrMeasIdptSig_Val (2U)
#  define Rte_InitValue_DiagcStsIvtr1Inactv_Logl (FALSE)
#  define Rte_InitValue_DiagcStsIvtr2Inactv_Logl (FALSE)
#  define Rte_InitValue_HwTqIdptSig_Val (4U)
#  define Rte_InitValue_HwTqLoaMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_IvtrFetFltTyp_Val (0U)
#  define Rte_InitValue_LoaRateLim_Val (1.0F)
#  define Rte_InitValue_LoaSca_Val (1.0F)
#  define Rte_InitValue_LoaScaDi_Logl (FALSE)
#  define Rte_InitValue_LoaSt_Val (0U)
#  define Rte_InitValue_MotAgLoaMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_MotAgMeclIdptSig_Val (3U)
#  define Rte_InitValue_MotAgSnsrlsAvl_Logl (FALSE)
#  define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
#  define Rte_InitValue_TqLoaAvl_Logl (FALSE)
#  define Rte_InitValue_VehSteerMod_Val (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CurrMeasIdptSig_Val Rte_Read_LoaMgr_CurrMeasIdptSig_Val
#  define Rte_Read_LoaMgr_CurrMeasIdptSig_Val(data) (*(data) = Rte_CurrMeasCorrln_CurrMeasIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr1Inactv_Logl Rte_Read_LoaMgr_DiagcStsIvtr1Inactv_Logl
#  define Rte_Read_LoaMgr_DiagcStsIvtr1Inactv_Logl(data) (*(data) = Rte_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DiagcStsIvtr2Inactv_Logl Rte_Read_LoaMgr_DiagcStsIvtr2Inactv_Logl
#  define Rte_Read_LoaMgr_DiagcStsIvtr2Inactv_Logl(data) (*(data) = Rte_LoaMgr_DiagcStsIvtr2Inactv_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqIdptSig_Val Rte_Read_LoaMgr_HwTqIdptSig_Val
#  define Rte_Read_LoaMgr_HwTqIdptSig_Val(data) (*(data) = Rte_HwTqCorrln_HwTqIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_IvtrFetFltTyp_Val Rte_Read_LoaMgr_IvtrFetFltTyp_Val
#  define Rte_Read_LoaMgr_IvtrFetFltTyp_Val(data) (*(data) = Rte_GateDrv0Ctrl_IvtrFetFltTyp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaScaDi_Logl Rte_Read_LoaMgr_LoaScaDi_Logl
#  define Rte_Read_LoaMgr_LoaScaDi_Logl(data) (*(data) = Rte_CmnMfgSrv_LoaScaDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgMeclIdptSig_Val Rte_Read_LoaMgr_MotAgMeclIdptSig_Val
#  define Rte_Read_LoaMgr_MotAgMeclIdptSig_Val(data) (*(data) = Rte_MotAgCorrln_MotAgMeclIdptSig_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAgSnsrlsAvl_Logl Rte_Read_LoaMgr_MotAgSnsrlsAvl_Logl
#  define Rte_Read_LoaMgr_MotAgSnsrlsAvl_Logl(data) (*(data) = Rte_LoaMgr_MotAgSnsrlsAvl_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TqLoaAvl_Logl Rte_Read_LoaMgr_TqLoaAvl_Logl
#  define Rte_Read_LoaMgr_TqLoaAvl_Logl(data) (*(data) = Rte_TqLoa_TqLoaAvl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSteerMod_Val Rte_Read_LoaMgr_VehSteerMod_Val
#  define Rte_Read_LoaMgr_VehSteerMod_Val(data) (*(data) = Rte_LoaMgr_VehSteerMod_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTqLoaMtgtnEna_Logl Rte_Write_LoaMgr_HwTqLoaMtgtnEna_Logl
#  define Rte_Write_LoaMgr_HwTqLoaMtgtnEna_Logl(data) (Rte_LoaMgr_HwTqLoaMtgtnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LoaRateLim_Val Rte_Write_LoaMgr_LoaRateLim_Val
#  define Rte_Write_LoaMgr_LoaRateLim_Val(data) (Rte_LoaMgr_LoaRateLim_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LoaSca_Val Rte_Write_LoaMgr_LoaSca_Val
#  define Rte_Write_LoaMgr_LoaSca_Val(data) (Rte_LoaMgr_LoaSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LoaSt_Val Rte_Write_LoaMgr_LoaSt_Val
#  define Rte_Write_LoaMgr_LoaSt_Val(data) (Rte_LoaMgr_LoaSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgLoaMtgtnEna_Logl Rte_Write_LoaMgr_MotAgLoaMtgtnEna_Logl
#  define Rte_Write_LoaMgr_MotAgLoaMtgtnEna_Logl(data) (Rte_LoaMgr_MotAgLoaMtgtnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAndThermProtnLoaMod_Val Rte_Write_LoaMgr_MotAndThermProtnLoaMod_Val
#  define Rte_Write_LoaMgr_MotAndThermProtnLoaMod_Val(data) (Rte_LoaMgr_MotAndThermProtnLoaMod_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_LoaMgrExclusiveArea() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

#  define Rte_Exit_LoaMgrExclusiveArea() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_LoaMgrCurrIvtrMtgtnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrIvtrMtgtnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrIvtrMtgtnSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrIvtrMtgtnSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasMtgtnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasMtgtnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasMtgtnSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasMtgtnSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrFadeOutStRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrFadeOutStRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrMtgtnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrMtgtnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrMtgtnSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrMtgtnSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrLimdStRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrLimdStRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrLimdStSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrLimdStSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgMtgtnRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgMtgtnRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgMtgtnSca_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgMtgtnSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasIdptSig0Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasIdptSig0Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasIdptSig1Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasIdptSig1Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasIdptSig2Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasIdptSig2Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSig0NoTqLoaResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSig0NoTqLoaResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSig1NoTqLoaResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSig1NoTqLoaResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSig2Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSig2Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSig3Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSig3Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSig4Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSig4Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrHwTqLoaAvlResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrHwTqLoaAvlResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrIdptSig0Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrIdptSig0Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrIdptSig1Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrIdptSig1Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrIdptSig2Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrIdptSig2Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgAvlSnsrlsResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgAvlSnsrlsResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgIdptSig0NoSnsrlsResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgIdptSig0NoSnsrlsResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgIdptSig1NoSnsrlsResp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgIdptSig1NoSnsrlsResp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgIdptSig2Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgIdptSig2Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgIdptSig3Resp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgIdptSig3Resp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgIdptSigFltThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgIdptSigFltThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrIvtrMtgtnScaZeroEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrIvtrMtgtnScaZeroEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrCurrMeasMtgtnScaZeroEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrCurrMeasMtgtnScaZeroEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrIvtrMtgtnScaZeroEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrIvtrMtgtnScaZeroEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_LoaMgrMotAgMtgtnScaZeroEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->LoaMgrMotAgMtgtnScaZeroEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigResp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevVltgModSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaStSwMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevCurrMeasIdptSigResp() \
  (&Rte_LoaMgr_PrevCurrMeasIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevCurrMeasIdptSigVal() \
  (&Rte_LoaMgr_PrevCurrMeasIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwTqIdptSigResp() \
  (&Rte_LoaMgr_PrevHwTqIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwTqIdptSigVal() \
  (&Rte_LoaMgr_PrevHwTqIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIvtrIdptSigResp() \
  (&Rte_LoaMgr_PrevIvtrIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIvtrIdptSigVal() \
  (&Rte_LoaMgr_PrevIvtrIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAgMeclIdptSigResp() \
  (&Rte_LoaMgr_PrevMotAgMeclIdptSigResp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAgMeclIdptSigVal() \
  (&Rte_LoaMgr_PrevMotAgMeclIdptSigVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVltgModSrc() \
  (&Rte_LoaMgr_PrevVltgModSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevCurrMeasLoaStSwMtgtnEna() \
  (&Rte_LoaMgr_PrevCurrMeasLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevHwTqLoaStSwMtgtnEna() \
  (&Rte_LoaMgr_PrevHwTqLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIvtrLoaStSwMtgtnEna() \
  (&Rte_LoaMgr_PrevIvtrLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAgLoaMtgtnEna() \
  (&Rte_LoaMgr_PrevMotAgLoaMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotAgLoaStSwMtgtnEna() \
  (&Rte_LoaMgr_PrevMotAgLoaStSwMtgtnEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define LoaMgr_START_SEC_CODE
# include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_LoaMgrInit1 LoaMgrInit1
#  define RTE_RUNNABLE_LoaMgrPer1 LoaMgrPer1
# endif

FUNC(void, LoaMgr_CODE) LoaMgrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, LoaMgr_CODE) LoaMgrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define LoaMgr_STOP_SEC_CODE
# include "LoaMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_LOAMGR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
