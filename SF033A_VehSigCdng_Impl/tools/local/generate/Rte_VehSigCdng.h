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
 *          File:  Rte_VehSigCdng.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF033A_VehSigCdng_Impl/tools/Component.dpa
 *     SW-C Type:  VehSigCdng
 *  Generated at:  Mon Jul 10 13:27:15 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <VehSigCdng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VEHSIGCDNG_H
# define _RTE_VEHSIGCDNG_H

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

# include "Rte_VehSigCdng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_VehSigCdng
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LatAFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLatA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLatAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLtgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLtgAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehSpdVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevYawRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevYawRateVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_VehSigCdng, RTE_CONST, RTE_CONST) Rte_Inst_VehSigCdng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_VehSigCdng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_VehLatA_Val (0.0F)
# define Rte_InitValue_VehLatAEstimd_Val (0.0F)
# define Rte_InitValue_VehLatAEstimdVld_Logl (FALSE)
# define Rte_InitValue_VehLatASerlCom_Val (0.0F)
# define Rte_InitValue_VehLatAVld_Logl (FALSE)
# define Rte_InitValue_VehLatAVldSerlCom_Logl (FALSE)
# define Rte_InitValue_VehLgtA_Val (0.0F)
# define Rte_InitValue_VehLgtASerlCom_Val (0.0F)
# define Rte_InitValue_VehLgtAVld_Logl (FALSE)
# define Rte_InitValue_VehLgtAVldSerlCom_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdOvrd_Val (100.0F)
# define Rte_InitValue_VehSpdOvrdEna_Logl (FALSE)
# define Rte_InitValue_VehSpdSerlCom_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VehSpdVldSerlCom_Logl (FALSE)
# define Rte_InitValue_VehYawRate_Val (0.0F)
# define Rte_InitValue_VehYawRateSerlCom_Val (0.0F)
# define Rte_InitValue_VehYawRateVld_Logl (FALSE)
# define Rte_InitValue_VehYawRateVldSerlCom_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehLatASerlCom_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehLatAVldSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehLgtASerlCom_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehLgtAVldSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehSpdOvrd_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehSpdOvrdEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehSpdSerlCom_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehSpdVldSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehYawRateSerlCom_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSigCdng_VehYawRateVldSerlCom_Logl(P2VAR(boolean, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLatA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLatAEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLatAEstimdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLatAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLgtA_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehLgtAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehSpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehYawRate_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSigCdng_VehYawRateVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_VehSigCdng_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_VEHSIGCDNG_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngDftLatA_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngDftLgtA_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngDftVehSpd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngDftYawRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngLatADifThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngLatAFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngLatASlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngLtgADifThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngLtgASlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngVehSpdDifThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngVehSpdSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngVehYawSlewRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSigCdng_VehSigCdngYawRateDifThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_VehSigCdng_HwTq_Val
# define Rte_Read_VehLatASerlCom_Val Rte_Read_VehSigCdng_VehLatASerlCom_Val
# define Rte_Read_VehLatAVldSerlCom_Logl Rte_Read_VehSigCdng_VehLatAVldSerlCom_Logl
# define Rte_Read_VehLgtASerlCom_Val Rte_Read_VehSigCdng_VehLgtASerlCom_Val
# define Rte_Read_VehLgtAVldSerlCom_Logl Rte_Read_VehSigCdng_VehLgtAVldSerlCom_Logl
# define Rte_Read_VehSpdOvrd_Val Rte_Read_VehSigCdng_VehSpdOvrd_Val
# define Rte_Read_VehSpdOvrdEna_Logl Rte_Read_VehSigCdng_VehSpdOvrdEna_Logl
# define Rte_Read_VehSpdSerlCom_Val Rte_Read_VehSigCdng_VehSpdSerlCom_Val
# define Rte_Read_VehSpdVldSerlCom_Logl Rte_Read_VehSigCdng_VehSpdVldSerlCom_Logl
# define Rte_Read_VehYawRateSerlCom_Val Rte_Read_VehSigCdng_VehYawRateSerlCom_Val
# define Rte_Read_VehYawRateVldSerlCom_Logl Rte_Read_VehSigCdng_VehYawRateVldSerlCom_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_VehLatA_Val Rte_Write_VehSigCdng_VehLatA_Val
# define Rte_Write_VehLatAEstimd_Val Rte_Write_VehSigCdng_VehLatAEstimd_Val
# define Rte_Write_VehLatAEstimdVld_Logl Rte_Write_VehSigCdng_VehLatAEstimdVld_Logl
# define Rte_Write_VehLatAVld_Logl Rte_Write_VehSigCdng_VehLatAVld_Logl
# define Rte_Write_VehLgtA_Val Rte_Write_VehSigCdng_VehLgtA_Val
# define Rte_Write_VehLgtAVld_Logl Rte_Write_VehSigCdng_VehLgtAVld_Logl
# define Rte_Write_VehSpd_Val Rte_Write_VehSigCdng_VehSpd_Val
# define Rte_Write_VehSpdVld_Logl Rte_Write_VehSigCdng_VehSpdVld_Logl
# define Rte_Write_VehYawRate_Val Rte_Write_VehSigCdng_VehYawRate_Val
# define Rte_Write_VehYawRateVld_Logl Rte_Write_VehSigCdng_VehYawRateVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_VehSigCdng_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_VehSigCdngDftLatA_Val Rte_Prm_VehSigCdng_VehSigCdngDftLatA_Val

# define Rte_Prm_VehSigCdngDftLgtA_Val Rte_Prm_VehSigCdng_VehSigCdngDftLgtA_Val

# define Rte_Prm_VehSigCdngDftVehSpd_Val Rte_Prm_VehSigCdng_VehSigCdngDftVehSpd_Val

# define Rte_Prm_VehSigCdngDftYawRate_Val Rte_Prm_VehSigCdng_VehSigCdngDftYawRate_Val

# define Rte_Prm_VehSigCdngLatADifThd_Val Rte_Prm_VehSigCdng_VehSigCdngLatADifThd_Val

# define Rte_Prm_VehSigCdngLatAFilFrq_Val Rte_Prm_VehSigCdng_VehSigCdngLatAFilFrq_Val

# define Rte_Prm_VehSigCdngLatASlewRate_Val Rte_Prm_VehSigCdng_VehSigCdngLatASlewRate_Val

# define Rte_Prm_VehSigCdngLtgADifThd_Val Rte_Prm_VehSigCdng_VehSigCdngLtgADifThd_Val

# define Rte_Prm_VehSigCdngLtgASlewRate_Val Rte_Prm_VehSigCdng_VehSigCdngLtgASlewRate_Val

# define Rte_Prm_VehSigCdngVehSpdDifThd_Val Rte_Prm_VehSigCdng_VehSigCdngVehSpdDifThd_Val

# define Rte_Prm_VehSigCdngVehSpdSlewRate_Val Rte_Prm_VehSigCdng_VehSigCdngVehSpdSlewRate_Val

# define Rte_Prm_VehSigCdngVehYawSlewRate_Val Rte_Prm_VehSigCdng_VehSigCdngVehYawSlewRate_Val

# define Rte_Prm_VehSigCdngYawRateDifThd_Val Rte_Prm_VehSigCdng_VehSigCdngYawRateDifThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevLatA() (Rte_Inst_VehSigCdng->Pim_PrevLatA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLtgA() (Rte_Inst_VehSigCdng->Pim_PrevLtgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehSpd() (Rte_Inst_VehSigCdng->Pim_PrevVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevYawRate() (Rte_Inst_VehSigCdng->Pim_PrevYawRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLatAVld() (Rte_Inst_VehSigCdng->Pim_PrevLatAVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLtgAVld() (Rte_Inst_VehSigCdng->Pim_PrevLtgAVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehSpdVld() (Rte_Inst_VehSigCdng->Pim_PrevVehSpdVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevYawRateVld() (Rte_Inst_VehSigCdng->Pim_PrevYawRateVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqFilRec() (Rte_Inst_VehSigCdng->Pim_HwTqFilRec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LatAFilRec() (Rte_Inst_VehSigCdng->Pim_LatAFilRec) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevLatA(void)
 *   float32 *Rte_Pim_PrevLtgA(void)
 *   float32 *Rte_Pim_PrevVehSpd(void)
 *   float32 *Rte_Pim_PrevYawRate(void)
 *   boolean *Rte_Pim_PrevLatAVld(void)
 *   boolean *Rte_Pim_PrevLtgAVld(void)
 *   boolean *Rte_Pim_PrevVehSpdVld(void)
 *   boolean *Rte_Pim_PrevYawRateVld(void)
 *   FilLpRec1 *Rte_Pim_HwTqFilRec(void)
 *   FilLpRec1 *Rte_Pim_LatAFilRec(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_VehSigCdngDftLatA_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftLgtA_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftVehSpd_Val(void)
 *   float32 Rte_Prm_VehSigCdngDftYawRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatADifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatAFilFrq_Val(void)
 *   float32 Rte_Prm_VehSigCdngLatASlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngLtgADifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngLtgASlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehSpdDifThd_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehSpdSlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngVehYawSlewRate_Val(void)
 *   float32 Rte_Prm_VehSigCdngYawRateDifThd_Val(void)
 *
 *********************************************************************************************************************/


# define VehSigCdng_START_SEC_CODE
# include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSigCdngInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VehSigCdngInit1 VehSigCdngInit1
FUNC(void, VehSigCdng_CODE) VehSigCdngInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSigCdngPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatASerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatAVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehLgtASerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLgtAVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdOvrd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdOvrdEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpdSerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVldSerlCom_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRateSerlCom_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehYawRateVldSerlCom_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehLatA_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLatAEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLatAEstimdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehLatAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehLgtA_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehLgtAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehYawRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehYawRateVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VehSigCdngPer1 VehSigCdngPer1
FUNC(void, VehSigCdng_CODE) VehSigCdngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define VehSigCdng_STOP_SEC_CODE
# include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_VEHSIGCDNG_H */

#include "Rte_Stubs.h"
