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
 *          File:  Rte_TqLoa.h
 *     SW-C Type:  TqLoa
 *  Generated at:  Wed Sep 23 17:32:31 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TqLoa> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TQLOA_H
# define _RTE_TQLOA_H

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

# include "Rte_TqLoa_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TqLoa
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelAndTqBasdScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehLatADifScaFacPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehLatAEstimnFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaMotTqCmdPreScag; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaMotVelAndTqBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaScaFacFinal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaVehLatADifScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaVehLatAEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTqLoaVehSpdBasdScaFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TqLoa, RTE_CONST, RTE_CONST) Rte_Inst_TqLoa; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TqLoa, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAgLoaMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_PinionAg_Val (0.0F)
# define Rte_InitValue_PinionAgConf_Val (0.0F)
# define Rte_InitValue_TqLoaAvl_Logl (FALSE)
# define Rte_InitValue_TqLoaCmd_Val (0.0F)
# define Rte_InitValue_VehLatA_Val (0.0F)
# define Rte_InitValue_VehLatAVld_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_MotAgLoaMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_PinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_PinionAgConf_Val(P2VAR(float32, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_VehLatA_Val(P2VAR(float32, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_VehLatAVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TqLoa_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TQLOA_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TqLoa_TqLoaAvl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TqLoa_TqLoaCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaDrvrTqNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotTqCmdLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacMax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaMotVelMgnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaTqCmdMgnThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacFallRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacRiseRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatAEstimnFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSteerRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehUnderSteerGrdt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehWhlBas_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaTqCmdLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaTqCmdLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u1p15_8_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatADifScaFacY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatAGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehLatAGainY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdScaFacX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdScaFacX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdScaFacY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdScaFacY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TqLoa_TqLoaVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotAgLoaMtgtnEna_Logl Rte_Read_TqLoa_MotAgLoaMtgtnEna_Logl
# define Rte_Read_MotVelCrf_Val Rte_Read_TqLoa_MotVelCrf_Val
# define Rte_Read_PinionAg_Val Rte_Read_TqLoa_PinionAg_Val
# define Rte_Read_PinionAgConf_Val Rte_Read_TqLoa_PinionAgConf_Val
# define Rte_Read_VehLatA_Val Rte_Read_TqLoa_VehLatA_Val
# define Rte_Read_VehLatAVld_Logl Rte_Read_TqLoa_VehLatAVld_Logl
# define Rte_Read_VehSpd_Val Rte_Read_TqLoa_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_TqLoa_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_TqLoaAvl_Logl Rte_Write_TqLoa_TqLoaAvl_Logl
# define Rte_Write_TqLoaCmd_Val Rte_Write_TqLoa_TqLoaCmd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_TqLoaDrvrTqNom_Val Rte_Prm_TqLoa_TqLoaDrvrTqNom_Val

# define Rte_Prm_TqLoaMotTqCmdLim_Val Rte_Prm_TqLoa_TqLoaMotTqCmdLim_Val

# define Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacFallRate_Val

# define Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacMax_Val

# define Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacMin_Val

# define Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val Rte_Prm_TqLoa_TqLoaMotVelAndTqBasdScaFacRiseRate_Val

# define Rte_Prm_TqLoaMotVelMgnThd_Val Rte_Prm_TqLoa_TqLoaMotVelMgnThd_Val

# define Rte_Prm_TqLoaTqCmdMgnThd_Val Rte_Prm_TqLoa_TqLoaTqCmdMgnThd_Val

# define Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val Rte_Prm_TqLoa_TqLoaVehLatADifScaFacFallRate_Val

# define Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val Rte_Prm_TqLoa_TqLoaVehLatADifScaFacRiseRate_Val

# define Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val Rte_Prm_TqLoa_TqLoaVehLatAEstimnFilFrq_Val

# define Rte_Prm_TqLoaVehSteerRat_Val Rte_Prm_TqLoa_TqLoaVehSteerRat_Val

# define Rte_Prm_TqLoaVehUnderSteerGrdt_Val Rte_Prm_TqLoa_TqLoaVehUnderSteerGrdt_Val

# define Rte_Prm_TqLoaVehWhlBas_Val Rte_Prm_TqLoa_TqLoaVehWhlBas_Val

# define Rte_Prm_TqLoaTqCmdLimY_Ary1D Rte_Prm_TqLoa_TqLoaTqCmdLimY_Ary1D

# define Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D Rte_Prm_TqLoa_TqLoaVehLatADifScaFacX_Ary1D

# define Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D Rte_Prm_TqLoa_TqLoaVehLatADifScaFacY_Ary2D

# define Rte_Prm_TqLoaVehLatAGainY_Ary1D Rte_Prm_TqLoa_TqLoaVehLatAGainY_Ary1D

# define Rte_Prm_TqLoaVehSpdScaFacX_Ary1D Rte_Prm_TqLoa_TqLoaVehSpdScaFacX_Ary1D

# define Rte_Prm_TqLoaVehSpdScaFacY_Ary1D Rte_Prm_TqLoa_TqLoaVehSpdScaFacY_Ary1D

# define Rte_Prm_TqLoaVehSpdX_Ary1D Rte_Prm_TqLoa_TqLoaVehSpdX_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotTqCmdPrev() (Rte_Inst_TqLoa->Pim_MotTqCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelAndTqBasdScaFacPrev() (Rte_Inst_TqLoa->Pim_MotVelAndTqBasdScaFacPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehLatADifScaFacPrev() (Rte_Inst_TqLoa->Pim_VehLatADifScaFacPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaMotTqCmdPreScag() (Rte_Inst_TqLoa->Pim_dTqLoaMotTqCmdPreScag) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaMotVelAndTqBasdScaFac() (Rte_Inst_TqLoa->Pim_dTqLoaMotVelAndTqBasdScaFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaScaFacFinal() (Rte_Inst_TqLoa->Pim_dTqLoaScaFacFinal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaVehLatADifScaFac() (Rte_Inst_TqLoa->Pim_dTqLoaVehLatADifScaFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaVehLatAEstimn() (Rte_Inst_TqLoa->Pim_dTqLoaVehLatAEstimn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTqLoaVehSpdBasdScaFac() (Rte_Inst_TqLoa->Pim_dTqLoaVehSpdBasdScaFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehLatAEstimnFil() (Rte_Inst_TqLoa->Pim_VehLatAEstimnFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotTqCmdPrev(void)
 *   float32 *Rte_Pim_MotVelAndTqBasdScaFacPrev(void)
 *   float32 *Rte_Pim_VehLatADifScaFacPrev(void)
 *   float32 *Rte_Pim_dTqLoaMotTqCmdPreScag(void)
 *   float32 *Rte_Pim_dTqLoaMotVelAndTqBasdScaFac(void)
 *   float32 *Rte_Pim_dTqLoaScaFacFinal(void)
 *   float32 *Rte_Pim_dTqLoaVehLatADifScaFac(void)
 *   float32 *Rte_Pim_dTqLoaVehLatAEstimn(void)
 *   float32 *Rte_Pim_dTqLoaVehSpdBasdScaFac(void)
 *   FilLpRec1 *Rte_Pim_VehLatAEstimnFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TqLoaDrvrTqNom_Val(void)
 *   float32 Rte_Prm_TqLoaMotTqCmdLim_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaTqCmdMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(void)
 *   float32 Rte_Prm_TqLoaVehSteerRat_Val(void)
 *   float32 Rte_Prm_TqLoaVehUnderSteerGrdt_Val(void)
 *   float32 Rte_Prm_TqLoaVehWhlBas_Val(void)
 *   u4p12 *Rte_Prm_TqLoaTqCmdLimY_Ary1D(void)
 *   u2p14 *Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(void)
 *   u1p15 *Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(void)
 *   u4p12 *Rte_Prm_TqLoaVehLatAGainY_Ary1D(void)
 *   u10p6 *Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(void)
 *   u1p15 *Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(void)
 *   u10p6 *Rte_Prm_TqLoaVehSpdX_Ary1D(void)
 *
 *********************************************************************************************************************/


# define TqLoa_START_SEC_CODE
# include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TqLoaInit1 TqLoaInit1
FUNC(void, TqLoa_CODE) TqLoaInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaPer1
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
 *   Std_ReturnType Rte_Read_MotAgLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TqLoaAvl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TqLoaCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TqLoaPer1 TqLoaPer1
FUNC(void, TqLoa_CODE) TqLoaPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TqLoa_STOP_SEC_CODE
# include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1443050082
#    error "The magic number of the generated file <C:/Component/SF048A_TqLoa_Impl/tools/contract/Rte_TqLoa.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443050082
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TQLOA_H */
