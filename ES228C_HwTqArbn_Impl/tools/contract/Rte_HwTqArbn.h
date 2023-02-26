/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_HwTqArbn.h
 *     SW-C Type:  HwTqArbn
 *  Generated at:  Mon Feb 20 14:52:26 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTqArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQARBN_H
# define _RTE_HWTQARBN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwTqArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwTqArbn
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqARollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqAStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqBRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqBStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqCRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqCStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqDRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqDStallCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnAAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnBAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnCAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnDAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnHwTqDenom; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwTqArbnHwTqNumer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwTqArbn, RTE_CONST, RTE_CONST) Rte_Inst_HwTqArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwTqArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqA_Val (0.0F)
# define Rte_InitValue_HwTqAQlfr_Val (0U)
# define Rte_InitValue_HwTqARollgCntr_Val (0U)
# define Rte_InitValue_HwTqB_Val (0.0F)
# define Rte_InitValue_HwTqBQlfr_Val (0U)
# define Rte_InitValue_HwTqBRollgCntr_Val (0U)
# define Rte_InitValue_HwTqC_Val (0.0F)
# define Rte_InitValue_HwTqCQlfr_Val (0U)
# define Rte_InitValue_HwTqCRollgCntr_Val (0U)
# define Rte_InitValue_HwTqCorrlnSts_Val (15U)
# define Rte_InitValue_HwTqD_Val (0.0F)
# define Rte_InitValue_HwTqDQlfr_Val (0U)
# define Rte_InitValue_HwTqDRollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqA_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqAQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqARollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqB_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqBQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqBRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqC_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqCorrlnSts_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqD_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqDQlfr_Val(P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTqArbn_HwTqDRollgCntr_Val(P2VAR(uint8, AUTOMATIC, RTE_HWTQARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTqArbn_HwTq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_HwTqArbn_HwTqArbnHwTqMaxStallCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTqA_Val Rte_Read_HwTqArbn_HwTqA_Val
# define Rte_Read_HwTqAQlfr_Val Rte_Read_HwTqArbn_HwTqAQlfr_Val
# define Rte_Read_HwTqARollgCntr_Val Rte_Read_HwTqArbn_HwTqARollgCntr_Val
# define Rte_Read_HwTqB_Val Rte_Read_HwTqArbn_HwTqB_Val
# define Rte_Read_HwTqBQlfr_Val Rte_Read_HwTqArbn_HwTqBQlfr_Val
# define Rte_Read_HwTqBRollgCntr_Val Rte_Read_HwTqArbn_HwTqBRollgCntr_Val
# define Rte_Read_HwTqC_Val Rte_Read_HwTqArbn_HwTqC_Val
# define Rte_Read_HwTqCQlfr_Val Rte_Read_HwTqArbn_HwTqCQlfr_Val
# define Rte_Read_HwTqCRollgCntr_Val Rte_Read_HwTqArbn_HwTqCRollgCntr_Val
# define Rte_Read_HwTqCorrlnSts_Val Rte_Read_HwTqArbn_HwTqCorrlnSts_Val
# define Rte_Read_HwTqD_Val Rte_Read_HwTqArbn_HwTqD_Val
# define Rte_Read_HwTqDQlfr_Val Rte_Read_HwTqArbn_HwTqDQlfr_Val
# define Rte_Read_HwTqDRollgCntr_Val Rte_Read_HwTqArbn_HwTqDRollgCntr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq_Val Rte_Write_HwTqArbn_HwTq_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val Rte_Prm_HwTqArbn_HwTqArbnHwTqMaxStallCnt_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTqPrev() (Rte_Inst_HwTqArbn->Pim_HwTqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnHwTqDenom() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnHwTqDenom) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnHwTqNumer() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnHwTqNumer) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqARollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqARollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqAStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqAStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqBRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqBRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqBStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqBStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqCRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqCRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqCStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqCStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqDRollgCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqDRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqDStallCntrPrev() (Rte_Inst_HwTqArbn->Pim_HwTqDStallCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnAAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnAAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnBAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnBAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnCAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnCAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwTqArbnDAvl() (Rte_Inst_HwTqArbn->Pim_dHwTqArbnDAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTqPrev(void)
 *   float32 *Rte_Pim_dHwTqArbnHwTqDenom(void)
 *   float32 *Rte_Pim_dHwTqArbnHwTqNumer(void)
 *   uint8 *Rte_Pim_HwTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwTqArbnAAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnBAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnCAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnDAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val(void)
 *
 *********************************************************************************************************************/


# define HwTqArbn_START_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqArbnInit1 HwTqArbnInit1
FUNC(void, HwTqArbn_CODE) HwTqArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnPer1
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
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTqArbnPer1 HwTqArbnPer1
FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwTqArbn_STOP_SEC_CODE
# include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1487619393
#    error "The magic number of the generated file <C:/component/ES228C_HwTqArbn_Impl/tools/contract/Rte_HwTqArbn.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1487619393
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWTQARBN_H */
