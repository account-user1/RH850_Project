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
 *              File: Os_Hal_Context_Lcfg.c
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

#define OS_HAL_CONTEXT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

/* Os kernel module dependencies */
#include "Os_Core.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os hal dependencies */
#include "Os_Hal_Core.h"


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

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: StartupHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_StartupHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ShutdownHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0_Dyn;

/*! HAL dynamic hook context data: ProtectionHook_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ProtectionHook_OsCore_CORE0_Dyn;

/*! HAL dynamic ISR2 level context data: Level1 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level1_Dyn;

/*! HAL dynamic ISR2 level context data: Level2 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level2_Dyn;

/*! HAL dynamic ISR2 level context data: Level3 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level3_Dyn;

/*! HAL dynamic ISR2 level context data: Level4 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore_CORE0_Isr_Level4_Dyn;

/*! HAL dynamic task context data: IdleTask_OsCore_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_IdleTask_OsCore_CORE0_Dyn;

/*! HAL dynamic task context data: Task_100ms_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_100ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_10msBsw_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_10msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_10ms_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_10ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_2msTmplMonr_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_2msTmplMonr_Appl10_Dyn;

/*! HAL dynamic task context data: Task_2ms_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_2ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_4msBsw_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_4msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_4ms_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_4ms_Appl10_Dyn;

/*! HAL dynamic task context data: Task_5msBsw_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_5msBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_InitBsw_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_InitBsw_Appl10_Dyn;

/*! HAL dynamic task context data: Task_Init_Appl10 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_Init_Appl10_Dyn;

/*! HAL dynamic task context data: Task_PreStart_CORE0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Task_PreStart_CORE0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperOs_CoreInitHook,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn,                                      /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: StartupHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_StartupHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Startup_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Startup_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperCallback,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn,                                      /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: ShutdownHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ShutdownHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Shutdown_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Shutdown_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperStatusHook,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn,                                      /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: ErrorHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Error_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Error_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperStatusHook,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapHookReturn,                                      /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL hook context configuration data: ProtectionHook_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ProtectionHook_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Protection_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Protection_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_HookWrapperProtectionHook,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)NULL_PTR,                                      /* PRQA S 0305, 306, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0306, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFFFUL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL ISR2 context configuration data: CanIsr_1 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CanIsr_1 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level1_Dyn),   /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level1_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_CanIsr_1,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x00008000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: CounterIsr_SystemTimer */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_CounterIsr_SystemTimer =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level3_Dyn),   /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level3_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_Os_TimerHrtIsr,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFF0UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: MCU_ECM_EIC_CAT2_ISR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_MCU_ECM_EIC_CAT2_ISR =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level4_Dyn),   /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level4_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_MCU_ECM_EIC_CAT2_ISR,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000FFF8UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: SPI_CSIH0_TIC_CAT2_ISR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_SPI_CSIH0_TIC_CAT2_ISR =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level2_Dyn),   /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level2_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_SPI_CSIH0_TIC_CAT2_ISR,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000C000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL ISR2 context configuration data: SPI_CSIH0_TIRE_CAT2_ISR */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_SPI_CSIH0_TIRE_CAT2_ISR =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level2_Dyn),   /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Isr_Level2_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Isr_SPI_CSIH0_TIRE_CAT2_ISR,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapIsrEpilogue,                                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)(0x0000C000UL & OS_HAL_PMR_MASK),
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL
};

/*! HAL task context configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_IdleTask_OsCore_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio11_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio11_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Os_IdleTask,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_100ms_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_100ms_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio10_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio10_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_100ms_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_10msBsw_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_10msBsw_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio9_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio9_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_10msBsw_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_10ms_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_10ms_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio7_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio7_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_10ms_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_2msTmplMonr_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_2msTmplMonr_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio4_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio4_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_2msTmplMonr_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_2ms_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_2ms_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio5_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio5_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_2ms_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_4msBsw_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_4msBsw_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio3_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio3_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_4msBsw_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_4ms_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_4ms_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio6_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio6_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_4ms_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_5msBsw_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_5msBsw_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio8_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio8_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_5msBsw_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_InitBsw_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_InitBsw_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio2_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio2_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_InitBsw_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_Init_Appl10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_Init_Appl10 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio1_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio1_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_Init_Appl10,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x40018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL task context configuration data: Task_PreStart_CORE0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Task_PreStart_CORE0 =
{
  /* .Os_Hal_SL     = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio0_Dyn),  /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Os_Hal_SP     = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Task_Prio0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .Entry         = */ (uint32)&Os_Task_Task_PreStart_CORE0,                      /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress = */ (uint32)&Os_TrapTaskMissingTerminateTask,                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .Os_Hal_PSW    = */ (uint32)0x00018000UL,
  /* .Os_Hal_PMR    = */ (uint32)0,
  /* .Os_Hal_ASID   = */ (uint32)0x000003FFUL  
};

/*! HAL service function context configuration data: NtWrapS_CmnMfgSrv_CallSvc10 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_CmnMfgSrv_CallSvc10 =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_CmnMfgSrv_CallSvc100 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_CmnMfgSrv_CallSvc100 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_EraseNvBlock */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_EraseNvBlock =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_EraseNvBlock0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_EraseNvBlock0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_GetDataIndex */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_GetDataIndex =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_GetDataIndex0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_GetDataIndex0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_GetDataIndex0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_GetDataIndex0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_GetErrorStatus */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_GetErrorStatus =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_GetErrorStatus0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_GetErrorStatus0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_InvalidateNvBlock */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_InvalidateNvBlock =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_InvalidateNvBlock0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_InvalidateNvBlock0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_ReadBlock */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_ReadBlock =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_ReadBlock0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_ReadBlock0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_ReadBlock0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_ReadBlock0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_SetBlockProtection */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetBlockProtection =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_SetBlockProtection0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetBlockProtection0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_SetDataIndex */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetDataIndex =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_SetDataIndex0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetDataIndex0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_SetDataIndex0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_SetDataIndex0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_SetRamBlockStatus */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_SetRamBlockStatus =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_SetRamBlockStatus0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_SetRamBlockStatus0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_NvM_WriteBlock */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_NvM_WriteBlock =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_NvM_WriteBlock0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_NvM_WriteBlock0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_NvM_WriteBlock0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_NvM_WriteBlock0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_Rte_Call_CopyCalPageReq_Oper =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_Rte_Call_CopyCalPageReq_Oper0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_Rte_Call_SetCalPageReq_Oper =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_Rte_Call_SetCalPageReq_Oper0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_SyncCrc_GetAvlCrcHwUnit =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_SyncCrc_GetAvlCrcHwUnit0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL service function context configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_NtWrapS_SyncCrc_RelsCrcHwUnit =
{
  /* .Os_Hal_SL         = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_SP         = */ (uint32)0, /* not used for service function context */
  /* .Entry             = */ (uint32)&Os_ServiceNtfWrapper,                                       /* PRQA S 0305, 0428 */ /* MD_Os_Hal_0305, MD_Os_Hal_0428 */
  /* .ReturnAddress     = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_PSW        = */ (uint32)0x40018000UL,  
  /* .Os_Hal_PMR        = */ (uint32)0, /* not used for service function context */
  /* .Os_Hal_ASID       = */ (uint32)0x000003FFUL  
};

/*! HAL service function stack configuration data: NtWrapS_SyncCrc_RelsCrcHwUnit0 */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0 =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

/*! HAL kernel stack configuration data: OsCore_CORE0_Kernel */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore_CORE0_Kernel =
{
  /* .StackStart = */ (uint32)OS_STACK_GETLOWADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn), /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
  /* .StackEnd   = */ (uint32)OS_STACK_GETHIGHADDRESS(OsCfg_Stack_OsCore_CORE0_Kernel_Dyn) /* PRQA S 0306 */ /* MD_Os_Hal_0306 */
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
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
 *  END OF FILE: Os_Hal_Context_Lcfg.c
 *********************************************************************************************************************/
