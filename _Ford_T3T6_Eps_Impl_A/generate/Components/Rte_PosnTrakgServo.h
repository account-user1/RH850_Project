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
 *          File:  Rte_PosnTrakgServo.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PosnTrakgServo>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_POSNTRAKGSERVO_H
# define _RTE_POSNTRAKGSERVO_H

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

# include "Rte_PosnTrakgServo_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoIntgtrSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwVel_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoIntgtrOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_PosnServoCmd_Val (0.0F)
#  define Rte_InitValue_PosnServoEna_Logl (FALSE)
#  define Rte_InitValue_PosnServoHwAg_Val (0.0F)
#  define Rte_InitValue_PosnServoHwVel_Val (0.0F)
#  define Rte_InitValue_PosnServoIntgtrOffs_Val (0.0F)
#  define Rte_InitValue_PosnServoIntgtrSt_Val (0.0F)
#  define Rte_InitValue_PosnTrakgArbnFltMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwAg_Val Rte_Read_PosnTrakgServo_HwAg_Val
#  define Rte_Read_PosnTrakgServo_HwAg_Val(data) (*(data) = Rte_ImcSigArbn_HwAgImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_PosnTrakgServo_HwTq_Val
#  define Rte_Read_PosnTrakgServo_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_PosnTrakgServo_MotVelCrf_Val
#  define Rte_Read_PosnTrakgServo_MotVelCrf_Val(data) (*(data) = Rte_ImcSigArbn_MotVelCrfImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoEna_Logl Rte_Read_PosnTrakgServo_PosnServoEna_Logl
#  define Rte_Read_PosnTrakgServo_PosnServoEna_Logl(data) (*(data) = Rte_PosnTrakgServo_PosnServoEna_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoHwAg_Val Rte_Read_PosnTrakgServo_PosnServoHwAg_Val
#  define Rte_Read_PosnTrakgServo_PosnServoHwAg_Val(data) (*(data) = Rte_PosnTrakgServo_PosnServoHwAg_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoHwVel_Val Rte_Read_PosnTrakgServo_PosnServoHwVel_Val
#  define Rte_Read_PosnTrakgServo_PosnServoHwVel_Val(data) (*(data) = Rte_PosnTrakgServo_PosnServoHwVel_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoIntgtrOffs_Val Rte_Read_PosnTrakgServo_PosnServoIntgtrOffs_Val
#  define Rte_Read_PosnTrakgServo_PosnServoIntgtrOffs_Val(data) (*(data) = Rte_ImcSigArbn_PosnServoIntgtrOffs_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnTrakgArbnFltMtgtnEna_Logl Rte_Read_PosnTrakgServo_PosnTrakgArbnFltMtgtnEna_Logl
#  define Rte_Read_PosnTrakgServo_PosnTrakgArbnFltMtgtnEna_Logl(data) (*(data) = Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_PosnTrakgServo_VehSpd_Val
#  define Rte_Read_PosnTrakgServo_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PosnServoCmd_Val Rte_Write_PosnTrakgServo_PosnServoCmd_Val
#  define Rte_Write_PosnTrakgServo_PosnServoCmd_Val(data) (Rte_PosnTrakgServo_PosnServoCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnServoIntgtrSt_Val Rte_Write_PosnTrakgServo_PosnServoIntgtrSt_Val
#  define Rte_Write_PosnTrakgServo_PosnServoIntgtrSt_Val(data) (Rte_PosnTrakgServo_PosnServoIntgtrSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_PosnTrakgServoIntgtrAntiWdupGain_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntgtrAntiWdupGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_PosnTrakgServoIntgtrStCorrnGain_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntgtrStCorrnGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_PosnTrakgServoLpFilCutOffFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoLpFilCutOffFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_PosnTrakgServoOutpAntiWdupGain_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoOutpAntiWdupGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmSysKineRat_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysKineRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmSysTqRat_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysTqRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoEnaBlndFacTblX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoEnaBlndFacTblX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoEnaBlndFacTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoEnaBlndFacTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoFfGain_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoFfGain_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoFfGain_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoFfGain_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoFfVelGain_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoFfVelGain_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoFfVelGain_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoFfVelGain_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoGain1_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain1_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoGain1_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain1_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoGain2_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain2_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoGain2_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain2_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoGain3_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain3_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoGain3_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain3_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoGain4_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain4_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoGain4_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGain4_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGainArbnFltMtgtn_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoGainArbnFltMtgtn_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwAgTarMgnLimTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwAgTarMgnLimTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwAgTarRateLimTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwAgTarRateLimTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwVelTarRateLimTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoHwVelTarRateLimTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoIntglGain_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntglGain_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoIntglGain_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntglGain_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoIntglLim_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntglLim_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoIntglLim_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoIntglLim_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoOutpLim_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoOutpLim_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoOutpLim_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoOutpLim_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoVehSpdTbl_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP])->PosnTrakgServoVehSpdTbl_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_AntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqDerivtvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_OutpAntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdInpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdOutpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoEnaTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwAgValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwVelValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoCmdPreLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoEnaBlndFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoFfCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwVelTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoIntgtrCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoPtlStFbCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_AntiWdupCmdPrev() \
  (&Rte_PosnTrakgServo_AntiWdupCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqDerivtvPrev() \
  (&Rte_PosnTrakgServo_HwTqDerivtvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqPrev() \
  (&Rte_PosnTrakgServo_HwTqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IntgtrInpPrev() \
  (&Rte_PosnTrakgServo_IntgtrInpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_IntgtrOutpPrev() \
  (&Rte_PosnTrakgServo_IntgtrOutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OutpAntiWdupCmdPrev() \
  (&Rte_PosnTrakgServo_OutpAntiWdupCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev() \
  (&Rte_PosnTrakgServo_PosnServoCmdInpArbnFltMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev() \
  (&Rte_PosnTrakgServo_PosnServoCmdOutpArbnFltMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoEnaTiPrev() \
  (&Rte_PosnTrakgServo_PosnServoEnaTiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoHwAgValRateLim() \
  (&Rte_PosnTrakgServo_PosnServoHwAgValRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoHwVelValRateLim() \
  (&Rte_PosnTrakgServo_PosnServoHwVelValRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoCmdPreLimd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoCmdPreLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoEnaBlndFac() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoEnaBlndFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoFfCmd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoFfCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoHwAg() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoHwAgErr() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoHwAgErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoHwAgTarLimd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoHwAgTarLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoHwVelTarLimd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoHwVelTarLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoIntgtrCmdLimd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoIntgtrCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dPosnTrakgServoPtlStFbCmd() \
  (&Rte_PosnTrakgServo_dPosnTrakgServoPtlStFbCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define PosnTrakgServo_START_SEC_CODE
# include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_PosnTrakgServoInit1 PosnTrakgServoInit1
#  define RTE_RUNNABLE_PosnTrakgServoPer1 PosnTrakgServoPer1
# endif

FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PosnTrakgServo_STOP_SEC_CODE
# include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_POSNTRAKGSERVO_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
