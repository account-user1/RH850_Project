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
 *          File:  Rte_CDD_MotCurrRegVltgLimr.h
 *        Config:  C:/Component/SF105A_MotCurrRegVltgLimr_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotCurrRegVltgLimr
 *  Generated at:  Tue Nov 14 19:32:37 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotCurrRegVltgLimr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTCURRREGVLTGLIMR_H
# define _RTE_CDD_MOTCURRREGVLTGLIMR_H

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

# include "Rte_CDD_MotCurrRegVltgLimr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotCurrRegVltgLimr
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CurrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DualEcuLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FETLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IvtrLoaScarPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCtrlMotVltgDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCtrlMotVltgQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVltgBrdgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVltgIntglCmdDaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVltgIntglCmdQaxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVltgQaxFfLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgBrdgFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgCmdFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDampgDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDampgQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDircFbDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgDircFbQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgQaxFb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrMotVltgSatnRat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegVltgLimrPhaAdvPreDly; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotCurrRegVltgLimr, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotCurrRegVltgLimr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotCurrRegVltgLimr, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgMotRVirtDax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgMotRVirtQax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrFETLoaScarSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrPredTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrPredEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_CDD_MotCurrRegVltgLimr_MotRefMdlFbCtrlDi_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotCurrRegCfgMotRVirtDax_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgMotRVirtDax_Val

# define Rte_Prm_MotCurrRegCfgMotRVirtQax_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgMotRVirtQax_Val

# define Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val

# define Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val

# define Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val

# define Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrFETLoaScarSlewRate_Val

# define Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val

# define Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrPredTi_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val

# define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val

# define Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val

# define Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val Rte_Prm_CDD_MotCurrRegVltgLimr_MotRefMdlIvtrDeadTiBrdgVltgSca_Val

# define Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl

# define Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrPredEna_Logl

# define Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl

# define Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl

# define Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl

# define Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl

# define Rte_Prm_MotRefMdlFbCtrlDi_Logl Rte_Prm_CDD_MotCurrRegVltgLimr_MotRefMdlFbCtrlDi_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AntiWdupCmdScaDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_AntiWdupCmdScaDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AntiWdupCmdScaQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_AntiWdupCmdScaQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CurrLoaScarPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_CurrLoaScarPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DualEcuLoaScarPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_DualEcuLoaScarPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FETLoaScarPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_FETLoaScarPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IvtrLoaScarPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_IvtrLoaScarPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCtrlMotVltgDaxPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotCtrlMotVltgDaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCtrlMotVltgQaxPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotCtrlMotVltgQaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVltgIntglCmdDaxPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotVltgIntglCmdDaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVltgIntglCmdQaxPrev() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotVltgIntglCmdQaxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgBrdgFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgCmdFinal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDampgDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDampgQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDaxFb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDircFbDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgDircFbQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgPreLimDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgPreLimQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgQaxFb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrMotVltgSatnRat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_dMotCurrRegVltgLimrPhaAdvPreDly) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVltgBrdgLpFil() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotVltgBrdgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVltgQaxFfLpFil() (Rte_Inst_CDD_MotCurrRegVltgLimr->Pim_MotVltgQaxFfLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_AntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_CurrLoaScarPrev(void)
 *   float32 *Rte_Pim_DualEcuLoaScarPrev(void)
 *   float32 *Rte_Pim_FETLoaScarPrev(void)
 *   float32 *Rte_Pim_IvtrLoaScarPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgDaxPrev(void)
 *   float32 *Rte_Pim_MotCtrlMotVltgQaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdDaxPrev(void)
 *   float32 *Rte_Pim_MotVltgIntglCmdQaxPrev(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat(void)
 *   float32 *Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly(void)
 *   FilLpRec1 *Rte_Pim_MotVltgBrdgLpFil(void)
 *   FilLpRec1 *Rte_Pim_MotVltgQaxFfLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(void)
 *   float32 Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl(void)
 *   boolean Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *
 *********************************************************************************************************************/


# define CDD_MotCurrRegVltgLimr_START_SEC_CODE
# include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegVltgLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrRegVltgLimrInit1 MotCurrRegVltgLimrInit1
FUNC(void, CDD_MotCurrRegVltgLimr_CODE) MotCurrRegVltgLimrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotCurrRegVltgLimr_STOP_SEC_CODE
# include "CDD_MotCurrRegVltgLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTCURRREGVLTGLIMR_H */
