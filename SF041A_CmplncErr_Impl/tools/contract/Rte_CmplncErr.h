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
 *          File:  Rte_CmplncErr.h
 *     SW-C Type:  CmplncErr
 *  Generated at:  Wed Jan  6 20:01:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CmplncErr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CMPLNCERR_H
# define _RTE_CMPLNCERR_H

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

# include "Rte_CmplncErr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CmplncErr
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CmplncErr, RTE_CONST, RTE_CONST) Rte_Inst_CmplncErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CmplncErr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CmplncErrMotToPinion_Val (0.0F)
# define Rte_InitValue_CmplncErrPinionToHw_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotTqCmdCrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmplncErr_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_CMPLNCERR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmplncErr_MotTqCmdCrf_Val(P2VAR(float32, AUTOMATIC, RTE_CMPLNCERR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmplncErr_CmplncErrMotToPinion_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmplncErr_CmplncErrPinionToHw_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_CmplncErr_HwTq_Val
# define Rte_Read_MotTqCmdCrf_Val Rte_Read_CmplncErr_MotTqCmdCrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CmplncErrMotToPinion_Val Rte_Write_CmplncErr_CmplncErrMotToPinion_Val
# define Rte_Write_CmplncErrPinionToHw_Val Rte_Write_CmplncErr_CmplncErrPinionToHw_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D

# define Rte_Prm_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D Rte_Prm_CmplncErr_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D

# define Rte_Prm_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D

# define Rte_Prm_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D Rte_Prm_CmplncErr_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u1p15 *Rte_Prm_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D(void)
 *   u5p11 *Rte_Prm_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D(void)
 *   u8p8 *Rte_Prm_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D(void)
 *   u5p11 *Rte_Prm_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D(void)
 *
 *********************************************************************************************************************/


# define CmplncErr_START_SEC_CODE
# include "CmplncErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmplncErrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmplncErrInit1 CmplncErrInit1
FUNC(void, CmplncErr_CODE) CmplncErrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmplncErrPer1
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
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CmplncErrMotToPinion_Val(float32 data)
 *   Std_ReturnType Rte_Write_CmplncErrPinionToHw_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmplncErrPer1 CmplncErrPer1
FUNC(void, CmplncErr_CODE) CmplncErrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CmplncErr_STOP_SEC_CODE
# include "CmplncErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1452091049
#    error "The magic number of the generated file <C:/Component/SF041A_CmplncErr_Impl/tools/contract/Rte_CmplncErr.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1452091049
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CMPLNCERR_H */
