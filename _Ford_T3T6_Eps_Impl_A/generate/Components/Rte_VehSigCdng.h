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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <VehSigCdng>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VEHSIGCDNG_H
# define _RTE_VEHSIGCDNG_H

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

# include "Rte_VehSigCdng_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRateVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatASerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVldSerlCom_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtASerlCom_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVldSerlCom_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_VehLatA_Val (0.0F)
#  define Rte_InitValue_VehLatAEstimd_Val (0.0F)
#  define Rte_InitValue_VehLatAEstimdVld_Logl (FALSE)
#  define Rte_InitValue_VehLatASerlCom_Val (0.0F)
#  define Rte_InitValue_VehLatAVld_Logl (FALSE)
#  define Rte_InitValue_VehLatAVldSerlCom_Logl (FALSE)
#  define Rte_InitValue_VehLgtA_Val (0.0F)
#  define Rte_InitValue_VehLgtASerlCom_Val (0.0F)
#  define Rte_InitValue_VehLgtAVld_Logl (FALSE)
#  define Rte_InitValue_VehLgtAVldSerlCom_Logl (FALSE)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdOvrd_Val (100.0F)
#  define Rte_InitValue_VehSpdOvrdEna_Logl (FALSE)
#  define Rte_InitValue_VehSpdSerlCom_Val (0.0F)
#  define Rte_InitValue_VehSpdVld_Logl (FALSE)
#  define Rte_InitValue_VehSpdVldSerlCom_Logl (FALSE)
#  define Rte_InitValue_VehYawRate_Val (0.0F)
#  define Rte_InitValue_VehYawRateSerlCom_Val (0.0F)
#  define Rte_InitValue_VehYawRateVld_Logl (FALSE)
#  define Rte_InitValue_VehYawRateVldSerlCom_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq_Val Rte_Read_VehSigCdng_HwTq_Val
#  define Rte_Read_VehSigCdng_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehLatASerlCom_Val Rte_Read_VehSigCdng_VehLatASerlCom_Val
#  define Rte_Read_VehSigCdng_VehLatASerlCom_Val(data) (*(data) = Rte_VehSigCdng_VehLatASerlCom_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehLatAVldSerlCom_Logl Rte_Read_VehSigCdng_VehLatAVldSerlCom_Logl
#  define Rte_Read_VehSigCdng_VehLatAVldSerlCom_Logl(data) (*(data) = Rte_VehSigCdng_VehLatAVldSerlCom_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehLgtASerlCom_Val Rte_Read_VehSigCdng_VehLgtASerlCom_Val
#  define Rte_Read_VehSigCdng_VehLgtASerlCom_Val(data) (*(data) = Rte_VehSigCdng_VehLgtASerlCom_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehLgtAVldSerlCom_Logl Rte_Read_VehSigCdng_VehLgtAVldSerlCom_Logl
#  define Rte_Read_VehSigCdng_VehLgtAVldSerlCom_Logl(data) (*(data) = Rte_VehSigCdng_VehLgtAVldSerlCom_Logl, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdOvrd_Val Rte_Read_VehSigCdng_VehSpdOvrd_Val
#  define Rte_Read_VehSigCdng_VehSpdOvrd_Val(data) (*(data) = Rte_CmnMfgSrv_VehSpdOvrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdOvrdEna_Logl Rte_Read_VehSigCdng_VehSpdOvrdEna_Logl
#  define Rte_Read_VehSigCdng_VehSpdOvrdEna_Logl(data) (*(data) = Rte_CmnMfgSrv_VehSpdOvrdEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdSerlCom_Val Rte_Read_VehSigCdng_VehSpdSerlCom_Val
#  define Rte_Read_VehSigCdng_VehSpdSerlCom_Val(data) (*(data) = Rte_FordVehSpdArbn_FordVehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpdVldSerlCom_Logl Rte_Read_VehSigCdng_VehSpdVldSerlCom_Logl
#  define Rte_Read_VehSigCdng_VehSpdVldSerlCom_Logl(data) (*(data) = Rte_FordVehSpdArbn_FordVehSpdVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRateSerlCom_Val Rte_Read_VehSigCdng_VehYawRateSerlCom_Val
#  define Rte_Read_VehSigCdng_VehYawRateSerlCom_Val(data) (*(data) = Rte_FordMsg091BusHiSpd_FordVehYawRate_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehYawRateVldSerlCom_Logl Rte_Read_VehSigCdng_VehYawRateVldSerlCom_Logl
#  define Rte_Read_VehSigCdng_VehYawRateVldSerlCom_Logl(data) (*(data) = Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_VehLatA_Val Rte_Write_VehSigCdng_VehLatA_Val
#  define Rte_Write_VehSigCdng_VehLatA_Val(data) (Rte_VehSigCdng_VehLatA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLatAEstimd_Val Rte_Write_VehSigCdng_VehLatAEstimd_Val
#  define Rte_Write_VehSigCdng_VehLatAEstimd_Val(data) (Rte_VehSigCdng_VehLatAEstimd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLatAEstimdVld_Logl Rte_Write_VehSigCdng_VehLatAEstimdVld_Logl
#  define Rte_Write_VehSigCdng_VehLatAEstimdVld_Logl(data) (Rte_VehSigCdng_VehLatAEstimdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLatAVld_Logl Rte_Write_VehSigCdng_VehLatAVld_Logl
#  define Rte_Write_VehSigCdng_VehLatAVld_Logl(data) (Rte_VehSigCdng_VehLatAVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLgtA_Val Rte_Write_VehSigCdng_VehLgtA_Val
#  define Rte_Write_VehSigCdng_VehLgtA_Val(data) (Rte_VehSigCdng_VehLgtA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehLgtAVld_Logl Rte_Write_VehSigCdng_VehLgtAVld_Logl
#  define Rte_Write_VehSigCdng_VehLgtAVld_Logl(data) (Rte_VehSigCdng_VehLgtAVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpd_Val Rte_Write_VehSigCdng_VehSpd_Val
#  define Rte_Write_VehSigCdng_VehSpd_Val(data) (Rte_VehSigCdng_VehSpd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdVld_Logl Rte_Write_VehSigCdng_VehSpdVld_Logl
#  define Rte_Write_VehSigCdng_VehSpdVld_Logl(data) (Rte_VehSigCdng_VehSpdVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehYawRate_Val Rte_Write_VehSigCdng_VehYawRate_Val
#  define Rte_Write_VehSigCdng_VehYawRate_Val(data) (Rte_VehSigCdng_VehYawRate_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehYawRateVld_Logl Rte_Write_VehSigCdng_VehYawRateVld_Logl
#  define Rte_Write_VehSigCdng_VehYawRateVld_Logl(data) (Rte_VehSigCdng_VehYawRateVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


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

#  define Rte_Prm_VehSigCdngDftLatA_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngDftLatA_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngDftLgtA_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngDftLgtA_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngDftVehSpd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngDftVehSpd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngDftYawRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngDftYawRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngLatADifThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngLatADifThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngLatAFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngLatAFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngLatASlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngLatASlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngLtgADifThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngLtgADifThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngLtgASlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngLtgASlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngVehSpdDifThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngVehSpdDifThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngVehSpdSlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngVehSpdSlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngVehYawSlewRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngVehYawSlewRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_VehSigCdngYawRateDifThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->VehSigCdngYawRateDifThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgA; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgAVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpdVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRateVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_HwTqFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_LatAFilRec; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevLatA() \
  (&Rte_VehSigCdng_PrevLatA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLtgA() \
  (&Rte_VehSigCdng_PrevLtgA) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVehSpd() \
  (&Rte_VehSigCdng_PrevVehSpd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevYawRate() \
  (&Rte_VehSigCdng_PrevYawRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLatAVld() \
  (&Rte_VehSigCdng_PrevLatAVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLtgAVld() \
  (&Rte_VehSigCdng_PrevLtgAVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevVehSpdVld() \
  (&Rte_VehSigCdng_PrevVehSpdVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevYawRateVld() \
  (&Rte_VehSigCdng_PrevYawRateVld) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqFilRec() \
  (&Rte_VehSigCdng_HwTqFilRec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LatAFilRec() \
  (&Rte_VehSigCdng_LatAFilRec) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define VehSigCdng_START_SEC_CODE
# include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_VehSigCdngInit1 VehSigCdngInit1
#  define RTE_RUNNABLE_VehSigCdngPer1 VehSigCdngPer1
# endif

FUNC(void, VehSigCdng_CODE) VehSigCdngInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, VehSigCdng_CODE) VehSigCdngPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define VehSigCdng_STOP_SEC_CODE
# include "VehSigCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_VEHSIGCDNG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
