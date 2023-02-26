/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Isr_Lcfg.c
 *   Generation Time: 2018-03-29 15:27:23
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_ISR_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Isr_Lcfg.h"
#include "Os_Isr.h"

/* Os kernel module dependencies */
#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Counter_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_Timer.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os_XSignal_Lcfg.h"
#include "Os_XSignal.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Interrupt_Lcfg.h"


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic ISR data: CanIsr_1 */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CanIsr_1_Dyn;

/*! Dynamic ISR data: CounterIsr_SystemTimer */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_CounterIsr_SystemTimer_Dyn;

/*! Dynamic ISR data: MCU_ECM_EIC_CAT2_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_MCU_ECM_EIC_CAT2_ISR_Dyn;

/*! Dynamic ISR data: SPI_CSIH0_TIC_CAT2_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_SPI_CSIH0_TIC_CAT2_ISR_Dyn;

/*! Dynamic ISR data: SPI_CSIH0_TIRE_CAT2_ISR */
OS_LOCAL VAR(Os_IsrType, OS_VAR_NOINIT) OsCfg_Isr_SPI_CSIH0_TIRE_CAT2_ISR_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! ISR configuration data: CanIsr_1 */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_CanIsr_1 =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CanIsr_1,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore_CORE0_Isr_Level1_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Isr_Level1,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CanIsr_1_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CanIsr_1,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .InitDuringStartUp     = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CanIsr_1,
  /* .IsrId    = */ CanIsr_1
};

/*! ISR configuration data: CounterIsr_SystemTimer */
CONST(Os_TimerIsrConfigType, OS_CONST) OsCfg_Isr_CounterIsr_SystemTimer =
{
  /* .Isr     = */
  {
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_CounterIsr_SystemTimer,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore_CORE0_Isr_Level3_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Isr_Level3,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_CounterIsr_SystemTimer_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore_CORE0,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_CounterIsr_SystemTimer,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .InitDuringStartUp     = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_CounterIsr_SystemTimer,
  /* .IsrId    = */ CounterIsr_SystemTimer
},
  /* .Counter = */ OS_COUNTER_CASTCONFIG_TIMERHRT_2_COUNTER(OsCfg_Counter_OsCounter)
};

/*! ISR configuration data: FpuErrIrq */
CONST(Os_IsrCat1ConfigType, OS_CONST) OsCfg_Cat1Isr_FpuErrIrq =
{
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_FpuErrIrq,
};

/*! ISR configuration data: MCU_ECM_EIC_CAT2_ISR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_MCU_ECM_EIC_CAT2_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_MCU_ECM_EIC_CAT2_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore_CORE0_Isr_Level4_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Isr_Level4,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_MCU_ECM_EIC_CAT2_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl0,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_MCU_ECM_EIC_CAT2_ISR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .InitDuringStartUp     = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_MCU_ECM_EIC_CAT2_ISR,
  /* .IsrId    = */ MCU_ECM_EIC_CAT2_ISR
};

/*! ISR configuration data: MCU_FEINT_ISR */
CONST(Os_IsrCat1ConfigType, OS_CONST) OsCfg_Cat1Isr_MCU_FEINT_ISR =
{
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_MCU_FEINT_ISR,
};

/*! ISR configuration data: MotCtrlMgrIrq */
CONST(Os_IsrCat1ConfigType, OS_CONST) OsCfg_Cat1Isr_MotCtrlMgrIrq =
{
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_MotCtrlMgrIrq,
};

/*! ISR configuration data: SPI_CSIH0_TIC_CAT2_ISR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_SPI_CSIH0_TIC_CAT2_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_SPI_CSIH0_TIC_CAT2_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore_CORE0_Isr_Level2_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Isr_Level2,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_SPI_CSIH0_TIC_CAT2_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_SPI_CSIH0_TIC_CAT2_ISR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .InitDuringStartUp     = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_SPI_CSIH0_TIC_CAT2_ISR,
  /* .IsrId    = */ SPI_CSIH0_TIC_CAT2_ISR
};

/*! ISR configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
CONST(Os_IsrConfigType, OS_CONST) OsCfg_Isr_SPI_CSIH0_TIRE_CAT2_ISR =
{
  /* .Thread   = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_SPI_CSIH0_TIRE_CAT2_ISR,
    /* .Context               = */ &OsCfg_Hal_Context_OsCore_CORE0_Isr_Level2_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Isr_Level2,
    /* .Dyn                   = */ OS_ISR_CASTDYN_ISR_2_THREAD(OsCfg_Isr_SPI_CSIH0_TIRE_CAT2_ISR_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_SPI_CSIH0_TIRE_CAT2_ISR,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_ISR2,
    /* .InitDuringStartUp     = */ FALSE
  },
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_SPI_CSIH0_TIRE_CAT2_ISR,
  /* .IsrId    = */ SPI_CSIH0_TIRE_CAT2_ISR
};

/*! ISR configuration data: SysErrIrq */
CONST(Os_IsrCat1ConfigType, OS_CONST) OsCfg_Cat1Isr_SysErrIrq =
{
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_SysErrIrq,
};

/*! ISR configuration data: WDG_59_DRIVERA_TRIGGERFUNCTION_ISR */
CONST(Os_IsrCat1ConfigType, OS_CONST) OsCfg_Cat1Isr_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR =
{
  /* .HwConfig = */ &OsCfg_Hal_IntIsr_WDG_59_DRIVERA_TRIGGERFUNCTION_ISR,
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for category 2 ISRs. */
CONSTP2CONST(Os_IsrConfigType, OS_CONST, OS_CONST) OsCfg_IsrRefs[OS_ISRID_COUNT + 1] =
{
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_CanIsr_1),
  OS_TIMER_CASTCONFIG_TIMEREISR_2_ISR(OsCfg_Isr_CounterIsr_SystemTimer),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_MCU_ECM_EIC_CAT2_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_SPI_CSIH0_TIC_CAT2_ISR),
  OS_ISR_CASTCONFIG_ISR_2_ISR(OsCfg_Isr_SPI_CSIH0_TIRE_CAT2_ISR),
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Isr_Lcfg.c
 *********************************************************************************************************************/
