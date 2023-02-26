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
 *          File:  Rte_FordCanDtcInhb.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordCanDtcInhb>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDCANDTCINHB_H
# define _RTE_FORDCANDTCINHB_H

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

# include "Rte_FordCanDtcInhb_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_ElPw_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_Ignition_Status, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordBattVltgEstimn_Val (6.0F)
#  define Rte_InitValue_FordCanDtcInhb_Logl (FALSE)
#  define Rte_InitValue_FordCanDtcInhb8_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordEpsSysSt_Val (0U)
#  define Rte_InitValue_FordVehElecPwrSts_Ford_ElPw_D_Stat (0U)
#  define Rte_InitValue_FordVehIgnStsQly_Ford_Ignition_Status (0U)
#  define Rte_InitValue_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl (0U)
#  define Rte_InitValue_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_FordBattVltgEstimn_Val Rte_Read_FordCanDtcInhb_FordBattVltgEstimn_Val
#  define Rte_Read_FordCanDtcInhb_FordBattVltgEstimn_Val(data) (*(data) = Rte_BattVltg_BrdgVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsSysSt_Val Rte_Read_FordCanDtcInhb_FordEpsSysSt_Val
#  define Rte_Read_FordCanDtcInhb_FordEpsSysSt_Val(data) (*(data) = Rte_FordSysSt_FordEpsSysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat Rte_Read_FordCanDtcInhb_FordVehElecPwrSts_Ford_ElPw_D_Stat
#  define Rte_Read_FordCanDtcInhb_FordVehElecPwrSts_Ford_ElPw_D_Stat(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status Rte_Read_FordCanDtcInhb_FordVehIgnStsQly_Ford_Ignition_Status
#  define Rte_Read_FordCanDtcInhb_FordVehIgnStsQly_Ford_Ignition_Status(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl Rte_Read_FordCanDtcInhb_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl
#  define Rte_Read_FordCanDtcInhb_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl(data) (*(data) = Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat Rte_Read_FordCanDtcInhb_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat
#  define Rte_Read_FordCanDtcInhb_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(data) (*(data) = Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordCanDtcInhb_Logl Rte_Write_FordCanDtcInhb_FordCanDtcInhb_Logl
#  define Rte_Write_FordCanDtcInhb_FordCanDtcInhb_Logl(data) (Rte_FordCanDtcInhb_FordCanDtcInhb_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordCanDtcInhb8_Val Rte_Write_FordCanDtcInhb_FordCanDtcInhb8_Val
#  define Rte_Write_FordCanDtcInhb_FordCanDtcInhb8_Val(data) (Rte_FordCanDtcInhb_FordCanDtcInhb8_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordEpsLifeCycMod_Val Rte_Write_FordCanDtcInhb_FordEpsLifeCycMod_Val
#  define Rte_Write_FordCanDtcInhb_FordEpsLifeCycMod_Val(data) (Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
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


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordCanDtcInhbFactryModThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordCanDtcInhbFactryModThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordCanDtcInhbTransptModThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordCanDtcInhbTransptModThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsFactryModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsTransptModRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FordEpsLifeCycMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_FordReqdEpsLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_CanDtcInhbRefTi() \
  (&Rte_FordCanDtcInhb_CanDtcInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EpsFactryModRefTi() \
  (&Rte_FordCanDtcInhb_EpsFactryModRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EpsLifeCycModRefTi() \
  (&Rte_FordCanDtcInhb_EpsLifeCycModRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EpsTransptModRefTi() \
  (&Rte_FordCanDtcInhb_EpsTransptModRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordReqdEpsLifeCycModPrev() \
  (&Rte_FordCanDtcInhb_FordReqdEpsLifeCycModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EpsLifeCycModPrev() \
  (&Rte_FordCanDtcInhb_EpsLifeCycModPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordCanDtcInhb_START_SEC_CODE
# include "FordCanDtcInhb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordCanDtcInhbInit1 FordCanDtcInhbInit1
#  define RTE_RUNNABLE_FordCanDtcInhbPer1 FordCanDtcInhbPer1
# endif

FUNC(void, FordCanDtcInhb_CODE) FordCanDtcInhbInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordCanDtcInhb_CODE) FordCanDtcInhbPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordCanDtcInhb_STOP_SEC_CODE
# include "FordCanDtcInhb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDCANDTCINHB_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
