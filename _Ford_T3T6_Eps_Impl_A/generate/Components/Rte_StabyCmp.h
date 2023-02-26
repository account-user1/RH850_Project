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
 *          File:  Rte_StabyCmp.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StabyCmp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STABYCMP_H
# define _RTE_STABYCMP_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_StabyCmp_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmdBasSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_AssiPahSum_AssiCmdSum_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiPahLimrActv_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmd_Val (0.0F)
#  define Rte_InitValue_AssiCmdBasSca_Val (0.0F)
#  define Rte_InitValue_AssiCmdSum_Val (0.0F)
#  define Rte_InitValue_AssiPahLimrActv_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiCmdBasSca_Val Rte_Read_StabyCmp_AssiCmdBasSca_Val
#  define Rte_Read_StabyCmp_AssiCmdBasSca_Val(data) (*(data) = Rte_StabyCmp_AssiCmdBasSca_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiCmdSum_Val Rte_Read_StabyCmp_AssiCmdSum_Val
#  define Rte_Read_StabyCmp_AssiCmdSum_Val(data) (*(data) = Rte_AssiPahSum_AssiCmdSum_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiPahLimrActv_Val Rte_Read_StabyCmp_AssiPahLimrActv_Val
#  define Rte_Read_StabyCmp_AssiPahLimrActv_Val(data) (*(data) = Rte_StabyCmp_AssiPahLimrActv_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_StabyCmp_HwTq_Val
#  define Rte_Read_StabyCmp_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_StabyCmp_VehSpd_Val
#  define Rte_Read_StabyCmp_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiCmd_Val Rte_Write_StabyCmp_AssiCmd_Val
#  define Rte_Write_StabyCmp_AssiCmd_Val(data) (Rte_StabyCmp_AssiCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_f32_Oper(arg1, arg2) (FltInj_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_StabyCmpHwTqLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpHwTqLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpAssiScaBlndX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpAssiScaBlndX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpAssiScaBlndX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpAssiScaBlndX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpAssiScaBlndY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpAssiScaBlndY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpAssiScaBlndY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpAssiScaBlndY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBilnrBlndVehSpd_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBilnrBlndVehSpd_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D() ((P2CONST(u2p14, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd02Y_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd02Y_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D() ((P2CONST(u2p14, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd04Y_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd04Y_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd12TqX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd12TqX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D() ((P2CONST(u2p14, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd12Y_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd12Y_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D() ((P2CONST(u8p8, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd34TqX_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd34TqX_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D() ((P2CONST(u2p14, AUTOMATIC, RTE_VAR_NOINIT)) &(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd34Y_Ary2D[0][0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFilBlnd34Y_Ary2D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  define Rte_Prm_StabyCmpNotchFil1Struct_Rec() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFil1Struct_Rec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StabyCmpNotchFil2Struct_Rec() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFil2Struct_Rec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StabyCmpNotchFil3Struct_Rec() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFil3Struct_Rec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_StabyCmpNotchFil4Struct_Rec() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP])->StabyCmpNotchFil4Struct_Rec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpAssiScaCmpBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil02Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil04Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil1Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil2Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Blnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil3Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil4Outp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch1Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch2Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch3Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch4Fil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dStabyCmpAssiScaCmpBlnd() \
  (&Rte_StabyCmp_dStabyCmpAssiScaCmpBlnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil02Blnd() \
  (&Rte_StabyCmp_dStabyCmpNotchFil02Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil04Blnd() \
  (&Rte_StabyCmp_dStabyCmpNotchFil04Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil12Blnd() \
  (&Rte_StabyCmp_dStabyCmpNotchFil12Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil12Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil12Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil1Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil1Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil2Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil2Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil34Blnd() \
  (&Rte_StabyCmp_dStabyCmpNotchFil34Blnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil34Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil34Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil3Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil3Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStabyCmpNotchFil4Outp() \
  (&Rte_StabyCmp_dStabyCmpNotchFil4Outp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiNotch1Fil() \
  (&Rte_StabyCmp_AssiNotch1Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiNotch2Fil() \
  (&Rte_StabyCmp_AssiNotch2Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiNotch3Fil() \
  (&Rte_StabyCmp_AssiNotch3Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AssiNotch4Fil() \
  (&Rte_StabyCmp_AssiNotch4Fil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLpFil() \
  (&Rte_StabyCmp_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StabyCmp_START_SEC_CODE
# include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StabyCmpInit1 StabyCmpInit1
#  define RTE_RUNNABLE_StabyCmpPer1 StabyCmpPer1
# endif

FUNC(void, StabyCmp_CODE) StabyCmpInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StabyCmp_CODE) StabyCmpPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define StabyCmp_STOP_SEC_CODE
# include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STABYCMP_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
