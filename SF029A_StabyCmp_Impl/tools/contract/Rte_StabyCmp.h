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
 *          File:  Rte_StabyCmp.h
 *     SW-C Type:  StabyCmp
 *  Generated at:  Mon Jan 30 10:36:21 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StabyCmp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STABYCMP_H
# define _RTE_STABYCMP_H

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

# include "Rte_StabyCmp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_StabyCmp
{
  /* PIM Handles section */
  P2VAR(FilNotchStRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiNotch1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilNotchStRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiNotch2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilNotchStRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiNotch3Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilNotchStRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiNotch4Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpAssiScaCmpBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil02Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil04Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil12Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil12Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil2Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil34Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil34Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil3Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStabyCmpNotchFil4Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_StabyCmp, RTE_CONST, RTE_CONST) Rte_Inst_StabyCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_StabyCmp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmd_Val (0.0F)
# define Rte_InitValue_AssiCmdBasSca_Val (0.0F)
# define Rte_InitValue_AssiCmdSum_Val (0.0F)
# define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StabyCmp_AssiCmdBasSca_Val(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StabyCmp_AssiCmdSum_Val(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StabyCmp_AssiPahLimrActv_Val(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StabyCmp_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StabyCmp_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StabyCmp_AssiCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StabyCmp_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_STABYCMP_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpAssiScaBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpAssiScaBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpAssiScaBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpAssiScaBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd02Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd02Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd04Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd04Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12TqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12TqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34TqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34TqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_6_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC_P2CONST(FilNotchGainRec1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFil1Struct_Rec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC_P2CONST(FilNotchGainRec1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFil2Struct_Rec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC_P2CONST(FilNotchGainRec1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFil3Struct_Rec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC_P2CONST(FilNotchGainRec1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_StabyCmp_StabyCmpNotchFil4Struct_Rec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBasSca_Val Rte_Read_StabyCmp_AssiCmdBasSca_Val
# define Rte_Read_AssiCmdSum_Val Rte_Read_StabyCmp_AssiCmdSum_Val
# define Rte_Read_AssiPahLimrActv_Val Rte_Read_StabyCmp_AssiPahLimrActv_Val
# define Rte_Read_HwTq_Val Rte_Read_StabyCmp_HwTq_Val
# define Rte_Read_VehSpd_Val Rte_Read_StabyCmp_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiCmd_Val Rte_Write_StabyCmp_AssiCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_StabyCmp_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_StabyCmpHwTqLpFilFrq_Val Rte_Prm_StabyCmp_StabyCmpHwTqLpFilFrq_Val

# define Rte_Prm_StabyCmpAssiScaBlndX_Ary1D Rte_Prm_StabyCmp_StabyCmpAssiScaBlndX_Ary1D

# define Rte_Prm_StabyCmpAssiScaBlndY_Ary1D Rte_Prm_StabyCmp_StabyCmpAssiScaBlndY_Ary1D

# define Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D Rte_Prm_StabyCmp_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D

# define Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd02Y_Ary2D

# define Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd04Y_Ary2D

# define Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12TqX_Ary2D

# define Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd12Y_Ary2D

# define Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34TqX_Ary2D

# define Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D Rte_Prm_StabyCmp_StabyCmpNotchFilBlnd34Y_Ary2D

# define Rte_Prm_StabyCmpNotchFil1Struct_Rec Rte_Prm_StabyCmp_StabyCmpNotchFil1Struct_Rec

# define Rte_Prm_StabyCmpNotchFil2Struct_Rec Rte_Prm_StabyCmp_StabyCmpNotchFil2Struct_Rec

# define Rte_Prm_StabyCmpNotchFil3Struct_Rec Rte_Prm_StabyCmp_StabyCmpNotchFil3Struct_Rec

# define Rte_Prm_StabyCmpNotchFil4Struct_Rec Rte_Prm_StabyCmp_StabyCmpNotchFil4Struct_Rec

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dStabyCmpAssiScaCmpBlnd() (Rte_Inst_StabyCmp->Pim_dStabyCmpAssiScaCmpBlnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil02Blnd() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil02Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil04Blnd() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil04Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil12Blnd() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil12Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil12Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil12Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil1Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil1Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil2Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil2Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil34Blnd() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil34Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil34Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil34Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil3Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil3Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStabyCmpNotchFil4Outp() (Rte_Inst_StabyCmp->Pim_dStabyCmpNotchFil4Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiNotch1Fil() (Rte_Inst_StabyCmp->Pim_AssiNotch1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiNotch2Fil() (Rte_Inst_StabyCmp->Pim_AssiNotch2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiNotch3Fil() (Rte_Inst_StabyCmp->Pim_AssiNotch3Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiNotch4Fil() (Rte_Inst_StabyCmp->Pim_AssiNotch4Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_StabyCmp->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dStabyCmpAssiScaCmpBlnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil02Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil04Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil1Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil2Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil3Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil4Outp(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch1Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch2Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch3Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch4Fil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_StabyCmpHwTqLpFilFrq_Val(void)
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(void)
 *   u9p7 *Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(void)
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(void)
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil1Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil2Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil3Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil4Struct_Rec(void)
 *
 *********************************************************************************************************************/


# define StabyCmp_START_SEC_CODE
# include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StabyCmpInit1 StabyCmpInit1
FUNC(void, StabyCmp_CODE) StabyCmpInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBasSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiCmdSum_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiPahLimrActv_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StabyCmpPer1 StabyCmpPer1
FUNC(void, StabyCmp_CODE) StabyCmpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StabyCmp_STOP_SEC_CODE
# include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1485795744
#    error "The magic number of the generated file <C:/component/SF029A_StabyCmp_Impl/tools/contract/Rte_StabyCmp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1485795744
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_STABYCMP_H */
