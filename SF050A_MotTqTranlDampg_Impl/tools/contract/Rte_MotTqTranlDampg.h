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
 *          File:  Rte_MotTqTranlDampg.h
 *     SW-C Type:  MotTqTranlDampg
 *  Generated at:  Mon May  1 10:56:53 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotTqTranlDampg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTTQTRANLDAMPG_H
# define _RTE_MOTTQTRANLDAMPG_H

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

# include "Rte_MotTqTranlDampg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotTqTranlDampg
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(LoaSt1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LoaStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StLtchPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmrRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotTqTranlDampgCmdCtrld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotTqTranlDampgSignPhaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotTqTranlDampgTiElpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotTqTranlDampgTmrEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotTqTranlDampgVelDampgCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotTqTranlDampg, RTE_CONST, RTE_CONST) Rte_Inst_MotTqTranlDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotTqTranlDampg, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechPolarity_Val (1)
# define Rte_InitValue_DiagcStsCtrldShtDwnFltPrsnt_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_LoaSt_Val (0U)
# define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
# define Rte_InitValue_MotTqCmdCrfDampd_Val (0.0F)
# define Rte_InitValue_MotTqCmdMrfDampd_Val (0.0F)
# define Rte_InitValue_MotTqTranlDampgCmpl_Logl (FALSE)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_AssiMechPolarity_Val(P2VAR(sint8, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_DiagcStsCtrldShtDwnFltPrsnt_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_LoaSt_Val(P2VAR(LoaSt1, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_MotTqCmdCrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotTqTranlDampg_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotTqTranlDampg_MotTqCmdCrfDampd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotTqTranlDampg_MotTqCmdMrfDampd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotTqTranlDampg_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotTqTranlDampg_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgCmdLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgDampgCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgTmrPt1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgTmrPt2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVelThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u2p14, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgRampEnd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CODE) Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaX(P2CONST(u16p0, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, RTE_CODE) Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaX(P2CONST(Ary1D_u16p0_2, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CODE) Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaY(P2CONST(u2p14, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, RTE_CODE) Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaY(P2CONST(Ary1D_u2p14_2, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaX(P2VAR(u16p0, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaX(P2VAR(Ary1D_u16p0_2, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaY(P2VAR(u2p14, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaY(P2VAR(Ary1D_u2p14_2, AUTOMATIC, RTE_MOTTQTRANLDAMPG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiMechPolarity_Val Rte_Read_MotTqTranlDampg_AssiMechPolarity_Val
# define Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl Rte_Read_MotTqTranlDampg_DiagcStsCtrldShtDwnFltPrsnt_Logl
# define Rte_Read_HwAg_Val Rte_Read_MotTqTranlDampg_HwAg_Val
# define Rte_Read_LoaSt_Val Rte_Read_MotTqTranlDampg_LoaSt_Val
# define Rte_Read_MotTqCmdCrf_Val Rte_Read_MotTqTranlDampg_MotTqCmdCrf_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_MotTqTranlDampg_MotVelCrf_Val
# define Rte_Read_SysSt_Val Rte_Read_MotTqTranlDampg_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_MotTqTranlDampg_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotTqCmdCrfDampd_Val Rte_Write_MotTqTranlDampg_MotTqCmdCrfDampd_Val
# define Rte_Write_MotTqCmdMrfDampd_Val Rte_Write_MotTqTranlDampg_MotTqCmdMrfDampd_Val
# define Rte_Write_MotTqTranlDampgCmpl_Logl Rte_Write_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_MotTqTranlDampg_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_MotTqTranlDampg_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaX(data) \
  Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaX(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaY(data) \
  Rte_IrvWrite_MotTqTranlDampg_MotTqTranlDampgInit1_CtrldDampgScaY(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaX(data) \
  Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaX(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaY(data) \
  Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaY(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotTqTranlDampgCmdLim_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgCmdLim_Val

# define Rte_Prm_MotTqTranlDampgDampgCoeff_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgDampgCoeff_Val

# define Rte_Prm_MotTqTranlDampgTmrPt1_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgTmrPt1_Val

# define Rte_Prm_MotTqTranlDampgTmrPt2_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgTmrPt2_Val

# define Rte_Prm_MotTqTranlDampgVelThd_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVelThd_Val

# define Rte_Prm_MotTqTranlDampgRampEnd_Val Rte_Prm_MotTqTranlDampg_MotTqTranlDampgRampEnd_Val

# define Rte_Prm_MotTqTranlDampgVehSpdBlndX_Ary1D Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndX_Ary1D

# define Rte_Prm_MotTqTranlDampgVehSpdBlndY_Ary1D Rte_Prm_MotTqTranlDampg_MotTqTranlDampgVehSpdBlndY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotTqTranlDampgCmdCtrld() (Rte_Inst_MotTqTranlDampg->Pim_dMotTqTranlDampgCmdCtrld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotTqTranlDampgSignPhaSca() (Rte_Inst_MotTqTranlDampg->Pim_dMotTqTranlDampgSignPhaSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotTqTranlDampgTiElpd() (Rte_Inst_MotTqTranlDampg->Pim_dMotTqTranlDampgTiElpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotTqTranlDampgVelDampgCmd() (Rte_Inst_MotTqTranlDampg->Pim_dMotTqTranlDampgVelDampgCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmrRefTi() (Rte_Inst_MotTqTranlDampg->Pim_TmrRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LoaStPrev() (Rte_Inst_MotTqTranlDampg->Pim_LoaStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiagStsPrev() (Rte_Inst_MotTqTranlDampg->Pim_DiagStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StLtchPrev() (Rte_Inst_MotTqTranlDampg->Pim_StLtchPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotTqTranlDampgTmrEna() (Rte_Inst_MotTqTranlDampg->Pim_dMotTqTranlDampgTmrEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotTqTranlDampgCmdCtrld(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgSignPhaSca(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgTiElpd(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgVelDampgCmd(void)
 *   uint32 *Rte_Pim_TmrRefTi(void)
 *   LoaSt1 *Rte_Pim_LoaStPrev(void)
 *   boolean *Rte_Pim_DiagStsPrev(void)
 *   boolean *Rte_Pim_StLtchPrev(void)
 *   boolean *Rte_Pim_dMotTqTranlDampgTmrEna(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotTqTranlDampgCmdLim_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgDampgCoeff_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgTmrPt1_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgTmrPt2_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgVelThd_Val(void)
 *   u2p14 Rte_Prm_MotTqTranlDampgRampEnd_Val(void)
 *   u9p7 *Rte_Prm_MotTqTranlDampgVehSpdBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_MotTqTranlDampgVehSpdBlndY_Ary1D(void)
 *
 *********************************************************************************************************************/


# define MotTqTranlDampg_START_SEC_CODE
# include "MotTqTranlDampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqTranlDampgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaX(u16p0 *data)
 *   void Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaY(u2p14 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotTqTranlDampgInit1 MotTqTranlDampgInit1
FUNC(void, MotTqTranlDampg_CODE) MotTqTranlDampgInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqTranlDampgPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdCrfDampd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdMrfDampd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqTranlDampgCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaX(u16p0 *data)
 *   void Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaY(u2p14 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotTqTranlDampgPer1 MotTqTranlDampgPer1
FUNC(void, MotTqTranlDampg_CODE) MotTqTranlDampgPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotTqTranlDampg_STOP_SEC_CODE
# include "MotTqTranlDampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1493649167
#    error "The magic number of the generated file <C:/Component/SF050A_MotTqTranlDampg_Impl/tools/contract/Rte_MotTqTranlDampg.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1493649167
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTTQTRANLDAMPG_H */
