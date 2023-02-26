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
 *          File:  Rte_AssiHiFrq.h
 *     SW-C Type:  AssiHiFrq
 *  Generated at:  Wed Feb  8 11:00:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AssiHiFrq> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSIHIFRQ_H
# define _RTE_ASSIHIFRQ_H

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

# include "Rte_AssiHiFrq_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_AssiHiFrq
{
  /* PIM Handles section */
  P2VAR(FilHpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqHpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiHiFrqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiHiFrqGainBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiHiFrqGainWhlImbRejtcnZero; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_AssiHiFrq, RTE_CONST, RTE_CONST) Rte_Inst_AssiHiFrq; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_AssiHiFrq, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiHiFrqCmd_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiHiFrq_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIHIFRQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiHiFrq_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIHIFRQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AssiHiFrq_WhlImbRejctnAmp_Val(P2VAR(float32, AUTOMATIC, RTE_ASSIHIFRQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AssiHiFrq_AssiHiFrqCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqHpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_AssiHiFrq_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_AssiHiFrq_HwTq_Val
# define Rte_Read_VehSpd_Val Rte_Read_AssiHiFrq_VehSpd_Val
# define Rte_Read_WhlImbRejctnAmp_Val Rte_Read_AssiHiFrq_WhlImbRejctnAmp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiHiFrqCmd_Val Rte_Write_AssiHiFrq_AssiHiFrqCmd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_AssiHiFrqHpFilFrq_Val Rte_Prm_AssiHiFrq_AssiHiFrqHpFilFrq_Val

# define Rte_Prm_AssiHiFrqGainY_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqGainY_Ary2D

# define Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D Rte_Prm_AssiHiFrq_AssiHiFrqHpFilFrqY_Ary1D

# define Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqTqWhlImbRejctnTqX_Ary2D

# define Rte_Prm_AssiHiFrqTqX_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqTqX_Ary2D

# define Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndX_Ary2D

# define Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnBlndY_Ary2D

# define Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D Rte_Prm_AssiHiFrq_AssiHiFrqWhlImbRejctnGainY_Ary2D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_AssiHiFrq_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dAssiHiFrqGain() (Rte_Inst_AssiHiFrq->Pim_dAssiHiFrqGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiHiFrqGainBlnd() (Rte_Inst_AssiHiFrq->Pim_dAssiHiFrqGainBlnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero() (Rte_Inst_AssiHiFrq->Pim_dAssiHiFrqGainWhlImbRejtcnZero) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqHpFil() (Rte_Inst_AssiHiFrq->Pim_HwTqHpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dAssiHiFrqGain(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainBlnd(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero(void)
 *   FilHpRec1 *Rte_Pim_HwTqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiHiFrqHpFilFrq_Val(void)
 *   u3p13 *Rte_Prm_AssiHiFrqGainY_Ary2D(void)
 *   u7p9 *Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(void)
 *   u5p11 *Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
 *   u5p11 *Rte_Prm_AssiHiFrqTqX_Ary2D(void)
 *   u4p12 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
 *   u1p15 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
 *   u3p13 *Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


# define AssiHiFrq_START_SEC_CODE
# include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiHiFrqInit1 AssiHiFrqInit1
FUNC(void, AssiHiFrq_CODE) AssiHiFrqInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqPer1
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
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiHiFrqCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiHiFrqPer1 AssiHiFrqPer1
FUNC(void, AssiHiFrq_CODE) AssiHiFrqPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define AssiHiFrq_STOP_SEC_CODE
# include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1486575108
#    error "The magic number of the generated file <C:/component/SF028A_AssiHiFrq_Impl/tools/contract/Rte_AssiHiFrq.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1486575108
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ASSIHIFRQ_H */
