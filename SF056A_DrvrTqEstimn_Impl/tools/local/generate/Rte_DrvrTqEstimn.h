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
 *          File:  Rte_DrvrTqEstimn.h
 *        Config:  C:/myWork/SF056A_DrvrTqEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  DrvrTqEstimn
 *  Generated at:  Thu May 11 12:53:48 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DrvrTqEstimn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DRVRTQESTIMN_H
# define _RTE_DRVRTQESTIMN_H

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

# include "Rte_DrvrTqEstimn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DrvrTqEstimn
{
  /* PIM Handles section */
  P2VAR(Ary1D_f32_5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DrvrTqStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DrvrTqEstimn, RTE_CONST, RTE_CONST) Rte_Inst_DrvrTqEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DrvrTqEstimn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechPolarity_Val (1)
# define Rte_InitValue_DrvrTqEstimd_Val (0.0F)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotTqCmdPwrLimd_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DrvrTqEstimn_AssiMechPolarity_Val(P2VAR(sint8, AUTOMATIC, RTE_DRVRTQESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DrvrTqEstimn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_DRVRTQESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DrvrTqEstimn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_DRVRTQESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DrvrTqEstimn_MotTqCmdPwrLimd_Val(P2VAR(float32, AUTOMATIC, RTE_DRVRTQESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DrvrTqEstimn_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_DRVRTQESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DrvrTqEstimn_DrvrTqEstimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DrvrTqEstimn_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DrvrTqEstimn_SysGlbPrmSysTqRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxA_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_f32_5_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxA_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxB_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_f32_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxB_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxC_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxC_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxD_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxD_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiMechPolarity_Val Rte_Read_DrvrTqEstimn_AssiMechPolarity_Val
# define Rte_Read_HwAg_Val Rte_Read_DrvrTqEstimn_HwAg_Val
# define Rte_Read_HwTq_Val Rte_Read_DrvrTqEstimn_HwTq_Val
# define Rte_Read_MotTqCmdPwrLimd_Val Rte_Read_DrvrTqEstimn_MotTqCmdPwrLimd_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_DrvrTqEstimn_MotVelCrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DrvrTqEstimd_Val Rte_Write_DrvrTqEstimn_DrvrTqEstimd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_DrvrTqEstimn_SysGlbPrmSysKineRat_Val

# define Rte_Prm_SysGlbPrmSysTqRat_Val Rte_Prm_DrvrTqEstimn_SysGlbPrmSysTqRat_Val

# define Rte_Prm_DrvrTqEstimnMtrxA_Ary2D Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxA_Ary2D

# define Rte_Prm_DrvrTqEstimnMtrxB_Ary2D Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxB_Ary2D

# define Rte_Prm_DrvrTqEstimnMtrxC_Ary1D Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxC_Ary1D

# define Rte_Prm_DrvrTqEstimnMtrxD_Ary1D Rte_Prm_DrvrTqEstimn_DrvrTqEstimnMtrxD_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DrvrTqStPrev() (*Rte_Inst_DrvrTqEstimn->Pim_DrvrTqStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DrvrTqStPrev() (Rte_Inst_DrvrTqEstimn->Pim_DrvrTqStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_DrvrTqStPrev(void)
 *     Returnvalue: float32* is of type Ary1D_f32_5
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxA_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_5_5
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxB_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_5_4
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxC_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_5
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxD_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *
 *********************************************************************************************************************/


# define DrvrTqEstimn_START_SEC_CODE
# include "DrvrTqEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DrvrTqEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DrvrTqEstimnInit1 DrvrTqEstimnInit1
FUNC(void, DrvrTqEstimn_CODE) DrvrTqEstimnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DrvrTqEstimnPer1
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
 *   Std_ReturnType Rte_Read_AssiMechPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdPwrLimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DrvrTqEstimd_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DrvrTqEstimnPer1 DrvrTqEstimnPer1
FUNC(void, DrvrTqEstimn_CODE) DrvrTqEstimnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DrvrTqEstimn_STOP_SEC_CODE
# include "DrvrTqEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DRVRTQESTIMN_H */

#include "Rte_Stubs.h"
