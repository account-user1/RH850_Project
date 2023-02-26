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
 *          File:  Rte_MotCurrPeakEstimn.h
 *        Config:  C:/Component/SF108A_MotCurrPeakEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  MotCurrPeakEstimn
 *  Generated at:  Thu Oct 19 13:06:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotCurrPeakEstimn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCURRPEAKESTIMN_H
# define _RTE_MOTCURRPEAKESTIMN_H

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

# include "Rte_MotCurrPeakEstimn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotCurrPeakEstimn
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrPeakEstimdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrPeakEstimnMotCurrDaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrPeakEstimnMotCurrQaxFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotCurrPeakEstimn, RTE_CONST, RTE_CONST) Rte_Inst_MotCurrPeakEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotCurrPeakEstimn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotCurrDax_Val (0.0F)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
# define Rte_InitValue_MotCurrPeakEstimdFild_Val (0.0F)
# define Rte_InitValue_MotCurrQax_Val (0.0F)
# define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_DualEcuMotCtrlMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_MotCurrDax_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_MotCurrDaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_MotCurrQax_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrPeakEstimn_MotCurrQaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRPEAKESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrPeakEstimn_MotCurrPeakEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrPeakEstimn_MotCurrPeakEstimnCurrFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrPeakEstimn_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotCurrPeakEstimn_MotCurrPeakEstimnPer1_MotCurrEstimd(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotCurrPeakEstimn_MotCurrPeakEstimnPer2_MotCurrEstimd(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl Rte_Read_MotCurrPeakEstimn_DualEcuMotCtrlMtgtnEna_Logl
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_MotCurrPeakEstimn_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrDax_Val Rte_Read_MotCurrPeakEstimn_MotCurrDax_Val
# define Rte_Read_MotCurrDaxCmd_Val Rte_Read_MotCurrPeakEstimn_MotCurrDaxCmd_Val
# define Rte_Read_MotCurrQax_Val Rte_Read_MotCurrPeakEstimn_MotCurrQax_Val
# define Rte_Read_MotCurrQaxCmd_Val Rte_Read_MotCurrPeakEstimn_MotCurrQaxCmd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotCurrPeakEstimd_Val Rte_Write_MotCurrPeakEstimn_MotCurrPeakEstimd_Val
# define Rte_Write_MotCurrPeakEstimdFild_Val Rte_Write_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(data) \
  Rte_IrvWrite_MotCurrPeakEstimn_MotCurrPeakEstimnPer1_MotCurrEstimd(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd() \
  Rte_IrvRead_MotCurrPeakEstimn_MotCurrPeakEstimnPer2_MotCurrEstimd()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val Rte_Prm_MotCurrPeakEstimn_MotCurrPeakEstimnCurrFilFrq_Val

# define Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val Rte_Prm_MotCurrPeakEstimn_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() (Rte_Inst_MotCurrPeakEstimn->Pim_dMotCurrPeakEstimnMotCurrDaxFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() (Rte_Inst_MotCurrPeakEstimn->Pim_dMotCurrPeakEstimnMotCurrQaxFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrDaxFil() (Rte_Inst_MotCurrPeakEstimn->Pim_MotCurrDaxFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrPeakEstimdFil() (Rte_Inst_MotCurrPeakEstimn->Pim_MotCurrPeakEstimdFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrQaxFil() (Rte_Inst_MotCurrPeakEstimn->Pim_MotCurrQaxFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil(void)
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrDaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrPeakEstimdFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrQaxFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val(void)
 *
 *********************************************************************************************************************/


# define MotCurrPeakEstimn_START_SEC_CODE
# include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrPeakEstimnInit1 MotCurrPeakEstimnInit1
FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer1
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
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrPeakEstimnPer1 MotCurrPeakEstimnPer1
FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimdFild_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrPeakEstimnPer2 MotCurrPeakEstimnPer2
FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotCurrPeakEstimn_STOP_SEC_CODE
# include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTCURRPEAKESTIMN_H */

#include "Rte_Stubs.h"
