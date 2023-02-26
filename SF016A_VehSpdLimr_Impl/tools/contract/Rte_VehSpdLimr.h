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
 *          File:  Rte_VehSpdLimr.h
 *     SW-C Type:  VehSpdLimr
 *  Generated at:  Wed Jan 13 13:42:51 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <VehSpdLimr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VEHSPDLIMR_H
# define _RTE_VEHSPDLIMR_H

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

# include "Rte_VehSpdLimr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_VehSpdLimr
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVehSpdLimrBreakPt1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVehSpdLimrBreakPt2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u5p11, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVehSpdLimrLimTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u5p11, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVehSpdLimrZeroVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_VehSpdLimr, RTE_CONST, RTE_CONST) Rte_Inst_VehSpdLimr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_VehSpdLimr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthy_Val (0.0F)
# define Rte_InitValue_HwAgEotCcw_Val (-360.0F)
# define Rte_InitValue_HwAgEotCw_Val (360.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdMotTqLim_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSpdLimr_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSPDLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSpdLimr_HwAgAuthy_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSPDLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSpdLimr_HwAgEotCcw_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSPDLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSpdLimr_HwAgEotCw_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSPDLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_VehSpdLimr_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_VEHSPDLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_VehSpdLimr_VehSpdMotTqLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrPosMaxOffs1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrPosMaxOffs2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_VehSpdLimr_HwAg_Val
# define Rte_Read_HwAgAuthy_Val Rte_Read_VehSpdLimr_HwAgAuthy_Val
# define Rte_Read_HwAgEotCcw_Val Rte_Read_VehSpdLimr_HwAgEotCcw_Val
# define Rte_Read_HwAgEotCw_Val Rte_Read_VehSpdLimr_HwAgEotCw_Val
# define Rte_Read_VehSpd_Val Rte_Read_VehSpdLimr_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_VehSpdMotTqLim_Val Rte_Write_VehSpdLimr_VehSpdMotTqLim_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_VehSpdLimrPosMaxOffs1_Val Rte_Prm_VehSpdLimr_VehSpdLimrPosMaxOffs1_Val

# define Rte_Prm_VehSpdLimrPosMaxOffs2_Val Rte_Prm_VehSpdLimr_VehSpdLimrPosMaxOffs2_Val

# define Rte_Prm_VehSpdLimrMaxAssiX_Ary1D Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiX_Ary1D

# define Rte_Prm_VehSpdLimrMaxAssiY_Ary1D Rte_Prm_VehSpdLimr_VehSpdLimrMaxAssiY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dVehSpdLimrBreakPt1() (Rte_Inst_VehSpdLimr->Pim_dVehSpdLimrBreakPt1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVehSpdLimrBreakPt2() (Rte_Inst_VehSpdLimr->Pim_dVehSpdLimrBreakPt2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVehSpdLimrLimTerm() (Rte_Inst_VehSpdLimr->Pim_dVehSpdLimrLimTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVehSpdLimrZeroVehSpd() (Rte_Inst_VehSpdLimr->Pim_dVehSpdLimrZeroVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt1(void)
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt2(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrLimTerm(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrZeroVehSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs1_Val(void)
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs2_Val(void)
 *   u9p7 *Rte_Prm_VehSpdLimrMaxAssiX_Ary1D(void)
 *   u5p11 *Rte_Prm_VehSpdLimrMaxAssiY_Ary1D(void)
 *
 *********************************************************************************************************************/


# define VehSpdLimr_START_SEC_CODE
# include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSpdLimrPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehSpdMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VehSpdLimrPer1 VehSpdLimrPer1
FUNC(void, VehSpdLimr_CODE) VehSpdLimrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define VehSpdLimr_STOP_SEC_CODE
# include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1452718462
#    error "The magic number of the generated file <C:/Component/SF016A_VehSpdLimr_Impl/tools/contract/Rte_VehSpdLimr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1452718462
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_VEHSPDLIMR_H */
