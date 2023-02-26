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
 *          File:  Rte_MotCtrlPrmEstimn.h
 *        Config:  C:/Component/SF102A_MotCtrlPrmEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  MotCtrlPrmEstimn
 *  Generated at:  Fri Sep 22 15:02:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotCtrlPrmEstimn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCTRLPRMESTIMN_H
# define _RTE_MOTCTRLPRMESTIMN_H

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

# include "Rte_MotCtrlPrmEstimn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotCtrlPrmEstimn
{
  /* PIM Handles section */
  P2VAR(MotPrmNomEolRec3, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotPrmNom; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnFetRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCtrlPrmEstimnMotRFfEstimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotCtrlPrmEstimn, RTE_CONST, RTE_CONST) Rte_Inst_MotCtrlPrmEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotCtrlPrmEstimn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotBackEmfConEstimd_Val (0.025F)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)
# define Rte_InitValue_MotFetT_Val (0.0F)
# define Rte_InitValue_MotInduDaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotInduDaxEstimdIvs_Val (8412.0F)
# define Rte_InitValue_MotInduQaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotInduQaxEstimdIvs_Val (8412.0F)
# define Rte_InitValue_MotMagT_Val (0.0F)
# define Rte_InitValue_MotREstimd_Val (0.005F)
# define Rte_InitValue_MotWidgT_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_DualEcuFltMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotCurrDaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotCurrQaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotFetT_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotMagT_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCtrlPrmEstimn_MotWidgT_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotInduDaxEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotInduDaxEstimdIvs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotInduQaxEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotInduQaxEstimdIvs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCtrlPrmEstimn_MotREstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotCtrlPrmEstimn_MotPrmNom_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotCtrlPrmEstimn_MotPrmNom_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnFetRNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnFetThermCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMagThermCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotWidgThermCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnTNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(float32, RTE_CODE) Rte_IrvRead_MotCtrlPrmEstimn_MotCtrlPrmEstimnPer1_MotBackEmfConFf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotCtrlPrmEstimn_MotCtrlPrmEstimnPer2_MotBackEmfConFf(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DualEcuFltMtgtnEna_Logl Rte_Read_MotCtrlPrmEstimn_DualEcuFltMtgtnEna_Logl
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_MotCtrlPrmEstimn_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrDaxCmd_Val Rte_Read_MotCtrlPrmEstimn_MotCurrDaxCmd_Val
# define Rte_Read_MotCurrQaxCmd_Val Rte_Read_MotCtrlPrmEstimn_MotCurrQaxCmd_Val
# define Rte_Read_MotFetT_Val Rte_Read_MotCtrlPrmEstimn_MotFetT_Val
# define Rte_Read_MotMagT_Val Rte_Read_MotCtrlPrmEstimn_MotMagT_Val
# define Rte_Read_MotWidgT_Val Rte_Read_MotCtrlPrmEstimn_MotWidgT_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotBackEmfConEstimd_Val Rte_Write_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val
# define Rte_Write_MotInduDaxEstimd_Val Rte_Write_MotCtrlPrmEstimn_MotInduDaxEstimd_Val
# define Rte_Write_MotInduDaxEstimdIvs_Val Rte_Write_MotCtrlPrmEstimn_MotInduDaxEstimdIvs_Val
# define Rte_Write_MotInduQaxEstimd_Val Rte_Write_MotCtrlPrmEstimn_MotInduQaxEstimd_Val
# define Rte_Write_MotInduQaxEstimdIvs_Val Rte_Write_MotCtrlPrmEstimn_MotInduQaxEstimdIvs_Val
# define Rte_Write_MotREstimd_Val Rte_Write_MotCtrlPrmEstimn_MotREstimd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_MotPrmNom_GetErrorStatus Rte_Call_MotCtrlPrmEstimn_MotPrmNom_GetErrorStatus
# define Rte_Call_MotPrmNom_SetRamBlockStatus Rte_Call_MotCtrlPrmEstimn_MotPrmNom_SetRamBlockStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf() \
  Rte_IrvRead_MotCtrlPrmEstimn_MotCtrlPrmEstimnPer1_MotBackEmfConFf()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(data) \
  Rte_IrvWrite_MotCtrlPrmEstimn_MotCtrlPrmEstimnPer2_MotBackEmfConFf(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotCtrlPrmEstimnFetRNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnFetRNom_Val

# define Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnFetThermCoeff_Val

# define Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMagThermCoeff_Val

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConHiLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConLoLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConNom_Val

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxHiLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxLoLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxNom_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxHiLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxLoLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxNom_Val

# define Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRHiLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRLoLim_Val

# define Rte_Prm_MotCtrlPrmEstimnMotRNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotRNom_Val

# define Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotWidgThermCoeff_Val

# define Rte_Prm_MotCtrlPrmEstimnTNom_Val Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnTNom_Val

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D

# define Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D

# define Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D

# define Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D

# define Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D Rte_Prm_MotCtrlPrmEstimn_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnFetRFfEstimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() (Rte_Inst_MotCtrlPrmEstimn->Pim_dMotCtrlPrmEstimnMotRFfEstimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotPrmNom() (Rte_Inst_MotCtrlPrmEstimn->Pim_MotPrmNom) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd(void)
 *   MotPrmNomEolRec3 *Rte_Pim_MotPrmNom(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnTNom_Val(void)
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_16
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_16
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_6
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *
 *********************************************************************************************************************/


# define MotCtrlPrmEstimn_START_SEC_CODE
# include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetMotPrmNomEol_Oper(float32 *MotBackEmfConNom_Arg, float32 *MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetMotPrmNomEol_Oper GetMotPrmNomEol_Oper
FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) GetMotPrmNomEol_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotBackEmfConNom_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotRNom_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCtrlPrmEstimnInit1 MotCtrlPrmEstimnInit1
FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnPer1
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
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimdIvs_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimdIvs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCtrlPrmEstimnPer1 MotCtrlPrmEstimnPer1
FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnPer2
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
 *   Std_ReturnType Rte_Read_MotFetT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotMagT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotWidgT_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCtrlPrmEstimnPer2 MotCtrlPrmEstimnPer2
FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetMotPrmNomEol_Oper SetMotPrmNomEol_Oper
FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotCtrlPrmEstimn_STOP_SEC_CODE
# include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetMotPrmNomEol2_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetMotPrmNomEol2_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTCTRLPRMESTIMN_H */

#include "Rte_Stubs.h"
