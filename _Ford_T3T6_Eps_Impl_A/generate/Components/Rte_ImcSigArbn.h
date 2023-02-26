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
 *          File:  Rte_ImcSigArbn.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ImcSigArbn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IMCSIGARBN_H
# define _RTE_IMCSIGARBN_H

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

# include "Rte_ImcSigArbn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysStVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAgImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoIntgtrOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgFinal_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoIntgtrSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_EcuIdn_Val (0U)
#  define Rte_InitValue_HwAg_Val (0.0F)
#  define Rte_InitValue_HwAgImcCorrd_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqImcCorrd_Val (0.0F)
#  define Rte_InitValue_ImcSysSt_Val (3U)
#  define Rte_InitValue_ImcSysStVld_Logl (FALSE)
#  define Rte_InitValue_MotVelCrf_Val (0.0F)
#  define Rte_InitValue_MotVelCrfImcCorrd_Val (0.0F)
#  define Rte_InitValue_PosnServoHwAg_Val (0.0F)
#  define Rte_InitValue_PosnServoHwAgImcCorrd_Val (0.0F)
#  define Rte_InitValue_PosnServoIntgtrOffs_Val (0.0F)
#  define Rte_InitValue_PosnServoIntgtrSt_Val (0.0F)
#  define Rte_InitValue_PosnTrakgArbnFltMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_PosnTrakgIntgtrSt1_Val (0.0F)
#  define Rte_InitValue_PosnTrakgIntgtrSt1Offs_Val (0.0F)
#  define Rte_InitValue_PosnTrakgIntgtrSt2_Val (0.0F)
#  define Rte_InitValue_PosnTrakgIntgtrSt2Offs_Val (0.0F)
#  define Rte_InitValue_PullCmpLongTermIntgtrSt_Val (0.0F)
#  define Rte_InitValue_PullCmpLongTermIntgtrStOffs_Val (0.0F)
#  define Rte_InitValue_PullCmpShoTermIntgtrSt_Val (0.0F)
#  define Rte_InitValue_PullCmpShoTermIntgtrStOffs_Val (0.0F)
#  define Rte_InitValue_VehSpd_Val (0.0F)
#  define Rte_InitValue_VehSpdImcCorrd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgTarOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwTqOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_MotVelCrfOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_VehSpdOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_EcuIdn_Val Rte_Read_ImcSigArbn_EcuIdn_Val
#  define Rte_Read_ImcSigArbn_EcuIdn_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwAg_Val Rte_Read_ImcSigArbn_HwAg_Val
#  define Rte_Read_ImcSigArbn_HwAg_Val(data) (*(data) = Rte_HwAgSysArbn_HwAgFinal_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_ImcSigArbn_HwTq_Val
#  define Rte_Read_ImcSigArbn_HwTq_Val(data) (*(data) = Rte_Swp_HwTqSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelCrf_Val Rte_Read_ImcSigArbn_MotVelCrf_Val
#  define Rte_Read_ImcSigArbn_MotVelCrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelCrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoHwAg_Val Rte_Read_ImcSigArbn_PosnServoHwAg_Val
#  define Rte_Read_ImcSigArbn_PosnServoHwAg_Val(data) (*(data) = Rte_ImcSigArbn_PosnServoHwAg_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnServoIntgtrSt_Val Rte_Read_ImcSigArbn_PosnServoIntgtrSt_Val
#  define Rte_Read_ImcSigArbn_PosnServoIntgtrSt_Val(data) (*(data) = Rte_PosnTrakgServo_PosnServoIntgtrSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnTrakgIntgtrSt1_Val Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt1_Val
#  define Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt1_Val(data) (*(data) = Rte_ImcSigArbn_PosnTrakgIntgtrSt1_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PosnTrakgIntgtrSt2_Val Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt2_Val
#  define Rte_Read_ImcSigArbn_PosnTrakgIntgtrSt2_Val(data) (*(data) = Rte_ImcSigArbn_PosnTrakgIntgtrSt2_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PullCmpLongTermIntgtrSt_Val Rte_Read_ImcSigArbn_PullCmpLongTermIntgtrSt_Val
#  define Rte_Read_ImcSigArbn_PullCmpLongTermIntgtrSt_Val(data) (*(data) = Rte_ImcSigArbn_PullCmpLongTermIntgtrSt_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PullCmpShoTermIntgtrSt_Val Rte_Read_ImcSigArbn_PullCmpShoTermIntgtrSt_Val
#  define Rte_Read_ImcSigArbn_PullCmpShoTermIntgtrSt_Val(data) (*(data) = Rte_ImcSigArbn_PullCmpShoTermIntgtrSt_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_ImcSigArbn_VehSpd_Val
#  define Rte_Read_ImcSigArbn_VehSpd_Val(data) (*(data) = Rte_VehSigCdng_VehSpd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwAgImcCorrd_Val Rte_Write_ImcSigArbn_HwAgImcCorrd_Val
#  define Rte_Write_ImcSigArbn_HwAgImcCorrd_Val(data) (Rte_ImcSigArbn_HwAgImcCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTqImcCorrd_Val Rte_Write_ImcSigArbn_HwTqImcCorrd_Val
#  define Rte_Write_ImcSigArbn_HwTqImcCorrd_Val(data) (Rte_ImcSigArbn_HwTqImcCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ImcSysSt_Val Rte_Write_ImcSigArbn_ImcSysSt_Val
#  define Rte_Write_ImcSigArbn_ImcSysSt_Val(data) (Rte_ImcSigArbn_ImcSysSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ImcSysStVld_Logl Rte_Write_ImcSigArbn_ImcSysStVld_Logl
#  define Rte_Write_ImcSigArbn_ImcSysStVld_Logl(data) (Rte_ImcSigArbn_ImcSysStVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVelCrfImcCorrd_Val Rte_Write_ImcSigArbn_MotVelCrfImcCorrd_Val
#  define Rte_Write_ImcSigArbn_MotVelCrfImcCorrd_Val(data) (Rte_ImcSigArbn_MotVelCrfImcCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnServoHwAgImcCorrd_Val Rte_Write_ImcSigArbn_PosnServoHwAgImcCorrd_Val
#  define Rte_Write_ImcSigArbn_PosnServoHwAgImcCorrd_Val(data) (Rte_ImcSigArbn_PosnServoHwAgImcCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnServoIntgtrOffs_Val Rte_Write_ImcSigArbn_PosnServoIntgtrOffs_Val
#  define Rte_Write_ImcSigArbn_PosnServoIntgtrOffs_Val(data) (Rte_ImcSigArbn_PosnServoIntgtrOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnTrakgArbnFltMtgtnEna_Logl Rte_Write_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl
#  define Rte_Write_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl(data) (Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnTrakgIntgtrSt1Offs_Val Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val
#  define Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val(data) (Rte_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PosnTrakgIntgtrSt2Offs_Val Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val
#  define Rte_Write_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val(data) (Rte_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpLongTermIntgtrStOffs_Val Rte_Write_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val
#  define Rte_Write_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val(data) (Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PullCmpShoTermIntgtrStOffs_Val Rte_Write_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val
#  define Rte_Write_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val(data) (Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_VehSpdImcCorrd_Val Rte_Write_ImcSigArbn_VehSpdImcCorrd_Val
#  define Rte_Write_ImcSigArbn_VehSpdImcCorrd_Val(data) (Rte_ImcSigArbn_VehSpdImcCorrd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_f32_Oper(uint16 SigId_Arg, P2VAR(float32, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetImcSigData_f32_Oper GetSigImcData_f32_Oper
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetImcSigData_logl_Oper GetSigImcData_logl_Oper
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetImcSigData_u08_Oper GetSigImcData_u08_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_HwAgOffs() \
  Rte_Irv_ImcSigArbn_HwAgOffs
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_HwAgTarOffs() \
  Rte_Irv_ImcSigArbn_HwAgTarOffs
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_HwTqOffs() \
  Rte_Irv_ImcSigArbn_HwTqOffs
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_ImcSysSt10MilliSec() \
  Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_ImcSysStVld10MilliSec() \
  Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_MotVelCrfOffs() \
  Rte_Irv_ImcSigArbn_MotVelCrfOffs
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_ImcSigArbnPer1_VehSpdOffs() \
  Rte_Irv_ImcSigArbn_VehSpdOffs
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_HwAgOffs(data) \
  (Rte_Irv_ImcSigArbn_HwAgOffs = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_HwAgTarOffs(data) \
  (Rte_Irv_ImcSigArbn_HwAgTarOffs = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_HwTqOffs(data) \
  (Rte_Irv_ImcSigArbn_HwTqOffs = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_ImcSysSt10MilliSec(data) \
  (Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_ImcSysStVld10MilliSec(data) \
  (Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_MotVelCrfOffs(data) \
  (Rte_Irv_ImcSigArbn_MotVelCrfOffs = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_ImcSigArbnPer2_VehSpdOffs(data) \
  (Rte_Irv_ImcSigArbn_VehSpdOffs = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_ImcSigArbnArbnFltTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnArbnFltTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgTarArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgTarArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgTarArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgTarArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwTqArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwTqArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwTqArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwTqArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnMotVelArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnMotVelArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnMotVelArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnMotVelArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPosnServoArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPosnServoArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPosnServoIntgtrStArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPosnTrakg1ArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPosnTrakg1ArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPosnTrakg2ArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPosnTrakg2ArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpLongTermArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpLongTermArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpShoTermArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpShoTermArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnSysStTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnSysStTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnTrakgIntgtrSt1ArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnTrakgIntgtrSt2ArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnVehSpdArbnLpFil_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnVehSpdArbnLpFil_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnVehSpdArbnOffsLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnVehSpdArbnOffsLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwAgTarArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwAgTarArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnHwTqArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnHwTqArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnMotVelArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnMotVelArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPosnServoIntgtrStArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPosnServoIntgtrStArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpLongTermIntgtrStArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnPullCmpShoTermIntgtrStArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnTrakgIntgtrSt1ArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnTrakgIntgtrSt2ArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_ImcSigArbnVehSpdArbnEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->ImcSigArbnVehSpdArbnEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelCrfOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnErrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermCmpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2LpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwAgOffsPrev() \
  (&Rte_ImcSigArbn_HwAgOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgTarOffsPrev() \
  (&Rte_ImcSigArbn_HwAgTarOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqOffsPrev() \
  (&Rte_ImcSigArbn_HwTqOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelCrfOffsPrev() \
  (&Rte_ImcSigArbn_MotVelCrfOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoIntgtrOffsPrev() \
  (&Rte_ImcSigArbn_PosnServoIntgtrOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PullCmpLongTermIntgtrStOffsPrev() \
  (&Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PullCmpShoTermIntgtrStOffsPrev() \
  (&Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrakgIntgtrSt1Offs() \
  (&Rte_ImcSigArbn_TrakgIntgtrSt1Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrakgIntgtrSt2Offs() \
  (&Rte_ImcSigArbn_TrakgIntgtrSt2Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VehSpdOffsPrev() \
  (&Rte_ImcSigArbn_VehSpdOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ArbnFltRefTiEnaLrng() \
  (&Rte_ImcSigArbn_ArbnFltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStRefTiEnaLrng() \
  (&Rte_ImcSigArbn_SysStRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ArbnErrPrev() \
  (&Rte_ImcSigArbn_ArbnErrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ArbnFltPrev() \
  (&Rte_ImcSigArbn_ArbnFltPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStLrngEnaPrev() \
  (&Rte_ImcSigArbn_SysStLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgLpFil() \
  (&Rte_ImcSigArbn_HwAgLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwAgTarLpFil() \
  (&Rte_ImcSigArbn_HwAgTarLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTqLpFil() \
  (&Rte_ImcSigArbn_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelLpFil() \
  (&Rte_ImcSigArbn_MotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnServoIntgtrLpFil() \
  (&Rte_ImcSigArbn_PosnServoIntgtrLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PullCmpLongTermCmpLpFil() \
  (&Rte_ImcSigArbn_PullCmpLongTermCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PullCmpShoTermCmpLpFil() \
  (&Rte_ImcSigArbn_PullCmpShoTermCmpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrakgIntgtrSt1LpFil() \
  (&Rte_ImcSigArbn_TrakgIntgtrSt1LpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_TrakgIntgtrSt2LpFil() \
  (&Rte_ImcSigArbn_TrakgIntgtrSt2LpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VehSpdLpFil() \
  (&Rte_ImcSigArbn_VehSpdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define ImcSigArbn_START_SEC_CODE
# include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ImcSigArbnInit1 ImcSigArbnInit1
#  define RTE_RUNNABLE_ImcSigArbnPer1 ImcSigArbnPer1
#  define RTE_RUNNABLE_ImcSigArbnPer2 ImcSigArbnPer2
# endif

FUNC(void, ImcSigArbn_CODE) ImcSigArbnInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, ImcSigArbn_CODE) ImcSigArbnPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define ImcSigArbn_STOP_SEC_CODE
# include "ImcSigArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IMCSIGARBN_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
