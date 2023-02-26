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
 *          File:  Rte_StOutpCtrl.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF005A_StOutpCtrl_Impl/tools/Component.dpa
 *     SW-C Type:  StOutpCtrl
 *  Generated at:  Tue May  9 16:02:00 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StOutpCtrl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STOUTPCTRL_H
# define _RTE_STOUTPCTRL_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_StOutpCtrl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_StOutpCtrl
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StOutpCtrlPrevCmdSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StOutpCtrlPrevSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStOutpCtrlRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dStOutpCtrlTarSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_StOutpCtrl, RTE_CONST, RTE_CONST) Rte_Inst_StOutpCtrl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_StOutpCtrl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsCtrldShtDwnFltPrsnt_Logl (FALSE)
# define Rte_InitValue_LoaRateLim_Val (1.0F)
# define Rte_InitValue_LoaSca_Val (1.0F)
# define Rte_InitValue_MotTqTranlDampgCmpl_Logl (FALSE)
# define Rte_InitValue_SysDiMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysDiRampRate_Val (1.0F)
# define Rte_InitValue_SysMotTqCmdRampRateDi_Logl (FALSE)
# define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysOperMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysOperRampRate_Val (1.0F)
# define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
# define Rte_InitValue_SysStReqDi_Logl (FALSE)
# define Rte_InitValue_VehStrtStopMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_VehStrtStopRampRate_Val (1.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_DiagcStsCtrldShtDwnFltPrsnt_Logl(P2VAR(boolean, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_LoaRateLim_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_LoaSca_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_MotTqTranlDampgCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysDiMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysDiRampRate_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysMotTqCmdRampRateDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysOperMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysOperRampRate_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_SysStFltOutpReqDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_VehStrtStopMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StOutpCtrl_VehStrtStopRampRate_Val(P2VAR(float32, AUTOMATIC, RTE_STOUTPCTRL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StOutpCtrl_SysMotTqCmdSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StOutpCtrl_SysStReqDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl Rte_Read_StOutpCtrl_DiagcStsCtrldShtDwnFltPrsnt_Logl
# define Rte_Read_LoaRateLim_Val Rte_Read_StOutpCtrl_LoaRateLim_Val
# define Rte_Read_LoaSca_Val Rte_Read_StOutpCtrl_LoaSca_Val
# define Rte_Read_MotTqTranlDampgCmpl_Logl Rte_Read_StOutpCtrl_MotTqTranlDampgCmpl_Logl
# define Rte_Read_SysDiMotTqCmdSca_Val Rte_Read_StOutpCtrl_SysDiMotTqCmdSca_Val
# define Rte_Read_SysDiRampRate_Val Rte_Read_StOutpCtrl_SysDiRampRate_Val
# define Rte_Read_SysMotTqCmdRampRateDi_Logl Rte_Read_StOutpCtrl_SysMotTqCmdRampRateDi_Logl
# define Rte_Read_SysOperMotTqCmdSca_Val Rte_Read_StOutpCtrl_SysOperMotTqCmdSca_Val
# define Rte_Read_SysOperRampRate_Val Rte_Read_StOutpCtrl_SysOperRampRate_Val
# define Rte_Read_SysStFltOutpReqDi_Logl Rte_Read_StOutpCtrl_SysStFltOutpReqDi_Logl
# define Rte_Read_VehStrtStopMotTqCmdSca_Val Rte_Read_StOutpCtrl_VehStrtStopMotTqCmdSca_Val
# define Rte_Read_VehStrtStopRampRate_Val Rte_Read_StOutpCtrl_VehStrtStopRampRate_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SysMotTqCmdSca_Val Rte_Write_StOutpCtrl_SysMotTqCmdSca_Val
# define Rte_Write_SysStReqDi_Logl Rte_Write_StOutpCtrl_SysStReqDi_Logl


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_StOutpCtrlPrevCmdSca() (Rte_Inst_StOutpCtrl->Pim_StOutpCtrlPrevCmdSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStOutpCtrlRateLim() (Rte_Inst_StOutpCtrl->Pim_dStOutpCtrlRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dStOutpCtrlTarSca() (Rte_Inst_StOutpCtrl->Pim_dStOutpCtrlTarSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StOutpCtrlPrevSrc() (Rte_Inst_StOutpCtrl->Pim_StOutpCtrlPrevSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_StOutpCtrlPrevCmdSca(void)
 *   float32 *Rte_Pim_dStOutpCtrlRateLim(void)
 *   float32 *Rte_Pim_dStOutpCtrlTarSca(void)
 *   uint8 *Rte_Pim_StOutpCtrlPrevSrc(void)
 *
 *********************************************************************************************************************/


# define StOutpCtrl_START_SEC_CODE
# include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StOutpCtrlInit1 StOutpCtrlInit1
FUNC(void, StOutpCtrl_CODE) StOutpCtrlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StOutpCtrlPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_LoaRateLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqTranlDampgCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysDiMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysDiRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdRampRateDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysOperMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysOperRampRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehStrtStopMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehStrtStopRampRate_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysMotTqCmdSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysStReqDi_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_StOutpCtrlPer1 StOutpCtrlPer1
FUNC(void, StOutpCtrl_CODE) StOutpCtrlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define StOutpCtrl_STOP_SEC_CODE
# include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STOUTPCTRL_H */

#include "Rte_Stubs.h"
