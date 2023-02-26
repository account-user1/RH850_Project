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
 *          File:  Rte_MotVelCtrl.h
 *     SW-C Type:  MotVelCtrl
 *  Generated at:  Wed May  4 09:02:18 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotVelCtrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTVELCTRL_H
# define _RTE_MOTVELCTRL_H

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

# include "Rte_MotVelCtrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotVelCtrl
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EnaCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EnaCtrlStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FctActvSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevAntiWdupCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevDerivtvOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIntgtrInp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevIntgtrOutp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotVelErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMotVelTar; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RampDwnCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTiRampDwn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VelSlewRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotVelCtrl, RTE_CONST, RTE_CONST) Rte_Inst_MotVelCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotVelCtrl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotVelCrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotVelCtrl_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotVelCtrl_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotVelCtrl_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotVelCtrl_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_AntiWdupGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_AntiWdupLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_DerivtvGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_DerivtvLpFilTiCon(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_IntgtrGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_PropGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_TqCmdLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_AntiWdupGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_AntiWdupLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_DerivtvGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_DerivtvLpFilTiCon(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_IntgtrGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_PropGain(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_TqCmdLim(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_AntiWdupGain(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_AntiWdupLim(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_DerivtvGain(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_DerivtvLpFilTiCon(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_IntgtrGain(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_PropGain(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_TqCmdLim(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotVelCrf_Val Rte_Read_MotVelCtrl_MotVelCrf_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_MotVelCtrl_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_MotVelCtrl_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetManTqCmd_Oper Rte_Call_MotVelCtrl_SetManTqCmd_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupGain() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_AntiWdupGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupLim() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_AntiWdupLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_DerivtvGain() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_DerivtvGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_DerivtvLpFilTiCon() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_DerivtvLpFilTiCon()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_IntgtrGain() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_IntgtrGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_PropGain() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_PropGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_GetCtrlPrm_Oper_TqCmdLim() \
  Rte_IrvRead_MotVelCtrl_GetCtrlPrm_Oper_TqCmdLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_AntiWdupGain() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_AntiWdupGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_AntiWdupLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_DerivtvGain() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_DerivtvGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_DerivtvLpFilTiCon()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_IntgtrGain() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_IntgtrGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_PropGain() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_PropGain()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_MotVelCtrlPer1_TqCmdLim() \
  Rte_IrvRead_MotVelCtrl_MotVelCtrlPer1_TqCmdLim()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupGain(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_AntiWdupGain(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupLim(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_AntiWdupLim(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvGain(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_DerivtvGain(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvLpFilTiCon(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_DerivtvLpFilTiCon(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_IntgtrGain(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_IntgtrGain(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_PropGain(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_PropGain(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SetCtrlPrm_Oper_TqCmdLim(data) \
  Rte_IrvWrite_MotVelCtrl_SetCtrlPrm_Oper_TqCmdLim(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotVelTar() (Rte_Inst_MotVelCtrl->Pim_MotVelTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevAntiWdupCmd() (Rte_Inst_MotVelCtrl->Pim_PrevAntiWdupCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevDerivtvOutp() (Rte_Inst_MotVelCtrl->Pim_PrevDerivtvOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIntgtrInp() (Rte_Inst_MotVelCtrl->Pim_PrevIntgtrInp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevIntgtrOutp() (Rte_Inst_MotVelCtrl->Pim_PrevIntgtrOutp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotVelErr() (Rte_Inst_MotVelCtrl->Pim_PrevMotVelErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMotVelTar() (Rte_Inst_MotVelCtrl->Pim_PrevMotVelTar) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VelSlewRate() (Rte_Inst_MotVelCtrl->Pim_VelSlewRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTiRampDwn() (Rte_Inst_MotVelCtrl->Pim_RefTiRampDwn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EnaCtrl() (Rte_Inst_MotVelCtrl->Pim_EnaCtrl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EnaCtrlStVari() (Rte_Inst_MotVelCtrl->Pim_EnaCtrlStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FctActvSts() (Rte_Inst_MotVelCtrl->Pim_FctActvSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RampDwnCmpl() (Rte_Inst_MotVelCtrl->Pim_RampDwnCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotVelTar(void)
 *   float32 *Rte_Pim_PrevAntiWdupCmd(void)
 *   float32 *Rte_Pim_PrevDerivtvOutp(void)
 *   float32 *Rte_Pim_PrevIntgtrInp(void)
 *   float32 *Rte_Pim_PrevIntgtrOutp(void)
 *   float32 *Rte_Pim_PrevMotVelErr(void)
 *   float32 *Rte_Pim_PrevMotVelTar(void)
 *   float32 *Rte_Pim_VelSlewRate(void)
 *   uint32 *Rte_Pim_RefTiRampDwn(void)
 *   boolean *Rte_Pim_EnaCtrl(void)
 *   boolean *Rte_Pim_EnaCtrlStVari(void)
 *   boolean *Rte_Pim_FctActvSts(void)
 *   boolean *Rte_Pim_RampDwnCmpl(void)
 *
 *********************************************************************************************************************/


# define MotVelCtrl_START_SEC_CODE
# include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetCtrlPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetCtrlPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupLim(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_DerivtvGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_DerivtvLpFilTiCon(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_IntgtrGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_PropGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_TqCmdLim(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetCtrlPrm_Oper(float32 *MotVelCtrlPropGain_Arg, float32 *MotVelCtrlIntgtrGain_Arg, float32 *MotVelCtrlDerivtvGain_Arg, float32 *MotVelCtrlAntiWdupLim_Arg, float32 *MotVelCtrlAntiWdupGain_Arg, float32 *MotVelCtrlDerivtvLpFilTiCon_Arg, float32 *MotVelCtrlTqCmdLim_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetCtrlPrm_Oper GetCtrlPrm_Oper
FUNC(void, MotVelCtrl_CODE) GetCtrlPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlPropGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlIntgtrGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupLim_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvLpFilTiCon_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelCtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotVelCtrlInit1 MotVelCtrlInit1
FUNC(void, MotVelCtrl_CODE) MotVelCtrlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelCtrlPer1
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
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotVelCtrlPer1_AntiWdupGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_DerivtvGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_IntgtrGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_PropGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_TqCmdLim(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotVelCtrlPer1 MotVelCtrlPer1
FUNC(void, MotVelCtrl_CODE) MotVelCtrlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetCtrlPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetCtrlPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupLim(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvLpFilTiCon(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_IntgtrGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_PropGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_TqCmdLim(float32 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetCtrlPrm_Oper SetCtrlPrm_Oper
FUNC(void, MotVelCtrl_CODE) SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StopCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StopCtrl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StopCtrl_Oper StopCtrl_Oper
FUNC(void, MotVelCtrl_CODE) StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StrtCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StrtCtrl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StrtCtrl_Oper StrtCtrl_Oper
FUNC(void, MotVelCtrl_CODE) StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotVelCtrl_STOP_SEC_CODE
# include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetManTqCmd1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1462368794
#    error "The magic number of the generated file <C:/Component/NM100A_MotVelCtrl_Impl/tools/contract/Rte_MotVelCtrl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1462368794
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTVELCTRL_H */
