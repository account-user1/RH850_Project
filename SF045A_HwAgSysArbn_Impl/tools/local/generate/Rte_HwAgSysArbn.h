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
 *          File:  Rte_HwAgSysArbn.h
 *        Config:  C:/_Synergy_Projects/Working/SF045A_HwAgSysArbn_Impl/tools/Component.dpa
 *     SW-C Type:  HwAgSysArbn
 *  Generated at:  Tue Oct 31 08:27:38 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgSysArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGSYSARBN_H
# define _RTE_HWAGSYSARBN_H

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

# include "Rte_HwAgSysArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgSysArbn
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgKineFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgToMotAgCorrln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwAgToMotAgCorrlnDurnRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAgNotCorrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevPinionAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSeldHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(sint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSrcSeln; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SeldHwAgConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SlewElpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SlewSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqSnsrAgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TqSnsrVelFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgSysArbn, RTE_CONST, RTE_CONST) Rte_Inst_HwAgSysArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgSysArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CmplncErrPinionToHw_Val (0.0F)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgCorrd_Val (0.0F)
# define Rte_InitValue_HwAgFinal_Val (0.0F)
# define Rte_InitValue_HwAgIdptSig_Val (2U)
# define Rte_InitValue_HwAgNotCorrd_Val (0.0F)
# define Rte_InitValue_HwAgSnsrls_Val (0.0F)
# define Rte_InitValue_HwAgSnsrlsConf_Val (0.0F)
# define Rte_InitValue_HwAgToSerlCom_Val (0.0F)
# define Rte_InitValue_HwAgVldToSerlCom_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_HwVelToSerlCom_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_MotVelVld_Logl (FALSE)
# define Rte_InitValue_PinionAg_Val (0.0F)
# define Rte_InitValue_PinionAgConf_Val (0.0F)
# define Rte_InitValue_PinionVel_Val (0.0F)
# define Rte_InitValue_PinionVelConf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_CmplncErrPinionToHw_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgCorrd_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgSnsrls_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwAgSnsrlsConf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSysArbn_MotVelVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgFinal_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgNotCorrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgToSerlCom_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwAgVldToSerlCom_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwVel_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_HwVelToSerlCom_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionAg_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionAgConf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionVel_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSysArbn_PinionVelConf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSysArbn_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSysArbn_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSysArbn_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSysArbn_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_HWAGSYSARBN_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSysArbn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConf1Snsr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConf2Snsr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConfNoSnsr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrdCorrlnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnRng_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSnsrlsKineThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnSerlComHwAgCorrdConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnSerlComHwAgSnsrlsConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnSlewRateTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnTqSnsrVelFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSysArbn_SysGlbPrmTorsBarStfn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnFailDebStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnPassDebStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgIdptSigLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CmplncErrPinionToHw_Val Rte_Read_HwAgSysArbn_CmplncErrPinionToHw_Val
# define Rte_Read_HwAg_Val Rte_Read_HwAgSysArbn_HwAg_Val
# define Rte_Read_HwAgCorrd_Val Rte_Read_HwAgSysArbn_HwAgCorrd_Val
# define Rte_Read_HwAgIdptSig_Val Rte_Read_HwAgSysArbn_HwAgIdptSig_Val
# define Rte_Read_HwAgSnsrls_Val Rte_Read_HwAgSysArbn_HwAgSnsrls_Val
# define Rte_Read_HwAgSnsrlsConf_Val Rte_Read_HwAgSysArbn_HwAgSnsrlsConf_Val
# define Rte_Read_HwTq_Val Rte_Read_HwAgSysArbn_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_HwAgSysArbn_MotVelCrf_Val
# define Rte_Read_MotVelVld_Logl Rte_Read_HwAgSysArbn_MotVelVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgFinal_Val Rte_Write_HwAgSysArbn_HwAgFinal_Val
# define Rte_Write_HwAgNotCorrd_Val Rte_Write_HwAgSysArbn_HwAgNotCorrd_Val
# define Rte_Write_HwAgToSerlCom_Val Rte_Write_HwAgSysArbn_HwAgToSerlCom_Val
# define Rte_Write_HwAgVldToSerlCom_Logl Rte_Write_HwAgSysArbn_HwAgVldToSerlCom_Logl
# define Rte_Write_HwVel_Val Rte_Write_HwAgSysArbn_HwVel_Val
# define Rte_Write_HwVelToSerlCom_Val Rte_Write_HwAgSysArbn_HwVelToSerlCom_Val
# define Rte_Write_PinionAg_Val Rte_Write_HwAgSysArbn_PinionAg_Val
# define Rte_Write_PinionAgConf_Val Rte_Write_HwAgSysArbn_PinionAgConf_Val
# define Rte_Write_PinionVel_Val Rte_Write_HwAgSysArbn_PinionVel_Val
# define Rte_Write_PinionVelConf_Val Rte_Write_HwAgSysArbn_PinionVelConf_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_HwAgSysArbn_FltInj_f32_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwAgSysArbn_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_HwAgSysArbn_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_HwAgSysArbn_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwAgSysArbn_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConf1Snsr_Val

# define Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConf2Snsr_Val

# define Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgConfNoSnsr_Val

# define Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrdCorrlnThd_Val

# define Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnRng_Val

# define Rte_Prm_HwAgSysArbnHwAgSlewRate_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSlewRate_Val

# define Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val

# define Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgSnsrlsKineThd_Val

# define Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnSerlComHwAgCorrdConf_Val

# define Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnSerlComHwAgSnsrlsConf_Val

# define Rte_Prm_HwAgSysArbnSlewRateTmr_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnSlewRateTmr_Val

# define Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnTqSnsrVelFilFrq_Val

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_HwAgSysArbn_SysGlbPrmSysKineRat_Val

# define Rte_Prm_SysGlbPrmTorsBarStfn_Val Rte_Prm_HwAgSysArbn_SysGlbPrmTorsBarStfn_Val

# define Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val

# define Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnFailDebStep_Val

# define Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgCorrlnPassDebStep_Val

# define Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val Rte_Prm_HwAgSysArbn_HwAgSysArbnHwAgIdptSigLim_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwAgPrev() (Rte_Inst_HwAgSysArbn->Pim_HwAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAgNotCorrd() (Rte_Inst_HwAgSysArbn->Pim_PrevHwAgNotCorrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevPinionAgConf() (Rte_Inst_HwAgSysArbn->Pim_PrevPinionAgConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSeldHwAg() (Rte_Inst_HwAgSysArbn->Pim_PrevSeldHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SeldHwAgConf() (Rte_Inst_HwAgSysArbn->Pim_SeldHwAgConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqSnsrAgPrev() (Rte_Inst_HwAgSysArbn->Pim_TqSnsrAgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr() (Rte_Inst_HwAgSysArbn->Pim_HwAgToMotAgCorrlnDurnRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SlewElpdRefTmr() (Rte_Inst_HwAgSysArbn->Pim_SlewElpdRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSrcSeln() (Rte_Inst_HwAgSysArbn->Pim_PrevSrcSeln) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgKineFlt() (Rte_Inst_HwAgSysArbn->Pim_HwAgKineFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgLtch() (Rte_Inst_HwAgSysArbn->Pim_HwAgLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwAgToMotAgCorrln() (Rte_Inst_HwAgSysArbn->Pim_HwAgToMotAgCorrln) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SlewSts() (Rte_Inst_HwAgSysArbn->Pim_SlewSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TqSnsrVelFil() (Rte_Inst_HwAgSysArbn->Pim_TqSnsrVelFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgPrev(void)
 *   float32 *Rte_Pim_PrevHwAgNotCorrd(void)
 *   float32 *Rte_Pim_PrevPinionAgConf(void)
 *   float32 *Rte_Pim_PrevSeldHwAg(void)
 *   float32 *Rte_Pim_SeldHwAgConf(void)
 *   float32 *Rte_Pim_TqSnsrAgPrev(void)
 *   uint32 *Rte_Pim_HwAgToMotAgCorrlnDurnRefTmr(void)
 *   uint32 *Rte_Pim_SlewElpdRefTmr(void)
 *   sint8 *Rte_Pim_PrevSrcSeln(void)
 *   boolean *Rte_Pim_HwAgKineFlt(void)
 *   boolean *Rte_Pim_HwAgLtch(void)
 *   boolean *Rte_Pim_HwAgToMotAgCorrln(void)
 *   boolean *Rte_Pim_SlewSts(void)
 *   FilLpRec1 *Rte_Pim_TqSnsrVelFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgSysArbnHwAgConf1Snsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgConf2Snsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgConfNoSnsr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgCorrdCorrlnThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgCorrlnRng_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSlewRate_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSnsrlsCorrlnThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnHwAgSnsrlsKineThd_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSerlComHwAgCorrdConf_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSerlComHwAgSnsrlsConf_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnSlewRateTmr_Val(void)
 *   float32 Rte_Prm_HwAgSysArbnTqSnsrVelFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
 *   uint32 Rte_Prm_HwAgSysArbnHwAgToMotAgCorrlnElpdTiLim_Val(void)
 *   uint16 Rte_Prm_HwAgSysArbnHwAgCorrlnFailDebStep_Val(void)
 *   uint16 Rte_Prm_HwAgSysArbnHwAgCorrlnPassDebStep_Val(void)
 *   uint8 Rte_Prm_HwAgSysArbnHwAgIdptSigLim_Val(void)
 *
 *********************************************************************************************************************/


# define HwAgSysArbn_START_SEC_CODE
# include "HwAgSysArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSysArbnInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgSysArbnInit1 HwAgSysArbnInit1
FUNC(void, HwAgSysArbn_CODE) HwAgSysArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSysArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CmplncErrPinionToHw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgCorrd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgSnsrls_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgSnsrlsConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgFinal_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgNotCorrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgToSerlCom_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgVldToSerlCom_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HwVel_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwVelToSerlCom_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionAgConf_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionVel_Val(float32 data)
 *   Std_ReturnType Rte_Write_PinionVelConf_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgSysArbnPer1 HwAgSysArbnPer1
FUNC(void, HwAgSysArbn_CODE) HwAgSysArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgSysArbn_STOP_SEC_CODE
# include "HwAgSysArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWAGSYSARBN_H */

#include "Rte_Stubs.h"
