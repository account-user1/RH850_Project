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
 *          File:  Rte_MotVelCtrl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotVelCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTVELCTRL_H
# define _RTE_MOTVELCTRL_H

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

# include "Rte_MotVelCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MotVelCrf_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_IntgtrGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_PropGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_TqCmdLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MotVelCrf_Val Rte_Read_MotVelCtrl_MotVelCrf_Val
#  define Rte_Read_MotVelCtrl_MotVelCrf_Val(data) (*(data) = Rte_ImcSigArbn_MotVelCrfImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
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
#  define RTE_START_SEC_ASSISUMLIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_ASSISUMLIM_APPL_CODE) SetManTqCmd_Oper(float32 ManTqCmd_Arg, boolean ManTqCmdEna_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_ASSISUMLIM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetManTqCmd_Oper SetManTqCmd_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupGain() \
  Rte_Irv_MotVelCtrl_AntiWdupGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupLim() \
  Rte_Irv_MotVelCtrl_AntiWdupLim
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_DerivtvGain() \
  Rte_Irv_MotVelCtrl_DerivtvGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_DerivtvLpFilTiCon() \
  Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_IntgtrGain() \
  Rte_Irv_MotVelCtrl_IntgtrGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_PropGain() \
  Rte_Irv_MotVelCtrl_PropGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_GetCtrlPrm_Oper_TqCmdLim() \
  Rte_Irv_MotVelCtrl_TqCmdLim
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_AntiWdupGain() \
  Rte_Irv_MotVelCtrl_AntiWdupGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim() \
  Rte_Irv_MotVelCtrl_AntiWdupLim
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_DerivtvGain() \
  Rte_Irv_MotVelCtrl_DerivtvGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon() \
  Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_IntgtrGain() \
  Rte_Irv_MotVelCtrl_IntgtrGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_PropGain() \
  Rte_Irv_MotVelCtrl_PropGain
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_MotVelCtrlPer1_TqCmdLim() \
  Rte_Irv_MotVelCtrl_TqCmdLim
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupGain(data) \
  (Rte_Irv_MotVelCtrl_AntiWdupGain = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupLim(data) \
  (Rte_Irv_MotVelCtrl_AntiWdupLim = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvGain(data) \
  (Rte_Irv_MotVelCtrl_DerivtvGain = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvLpFilTiCon(data) \
  (Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_IntgtrGain(data) \
  (Rte_Irv_MotVelCtrl_IntgtrGain = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_PropGain(data) \
  (Rte_Irv_MotVelCtrl_PropGain = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_SetCtrlPrm_Oper_TqCmdLim(data) \
  (Rte_Irv_MotVelCtrl_TqCmdLim = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_MotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevAntiWdupCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevDerivtvOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_VelSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RefTiRampDwn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrlStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_FctActvSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RampDwnCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MotVelTar() \
  (&Rte_MotVelCtrl_MotVelTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevAntiWdupCmd() \
  (&Rte_MotVelCtrl_PrevAntiWdupCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevDerivtvOutp() \
  (&Rte_MotVelCtrl_PrevDerivtvOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIntgtrInp() \
  (&Rte_MotVelCtrl_PrevIntgtrInp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevIntgtrOutp() \
  (&Rte_MotVelCtrl_PrevIntgtrOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotVelErr() \
  (&Rte_MotVelCtrl_PrevMotVelErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevMotVelTar() \
  (&Rte_MotVelCtrl_PrevMotVelTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VelSlewRate() \
  (&Rte_MotVelCtrl_VelSlewRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RefTiRampDwn() \
  (&Rte_MotVelCtrl_RefTiRampDwn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EnaCtrl() \
  (&Rte_MotVelCtrl_EnaCtrl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_EnaCtrlStVari() \
  (&Rte_MotVelCtrl_EnaCtrlStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FctActvSts() \
  (&Rte_MotVelCtrl_FctActvSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RampDwnCmpl() \
  (&Rte_MotVelCtrl_RampDwnCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define MotVelCtrl_START_SEC_CODE
# include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GetCtrlPrm_Oper GetCtrlPrm_Oper
#  define RTE_RUNNABLE_MotVelCtrlInit1 MotVelCtrlInit1
#  define RTE_RUNNABLE_MotVelCtrlPer1 MotVelCtrlPer1
#  define RTE_RUNNABLE_SetCtrlPrm_Oper SetCtrlPrm_Oper
#  define RTE_RUNNABLE_StopCtrl_Oper StopCtrl_Oper
#  define RTE_RUNNABLE_StrtCtrl_Oper StrtCtrl_Oper
# endif

FUNC(void, MotVelCtrl_CODE) GetCtrlPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlPropGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlIntgtrGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupLim_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvLpFilTiCon_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, MotVelCtrl_CODE) MotVelCtrlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, MotVelCtrl_CODE) MotVelCtrlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, MotVelCtrl_CODE) SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, MotVelCtrl_CODE) StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, MotVelCtrl_CODE) StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotVelCtrl_STOP_SEC_CODE
# include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetManTqCmd1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTVELCTRL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
