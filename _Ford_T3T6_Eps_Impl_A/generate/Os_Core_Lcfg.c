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
 *              File: Os_Core_Lcfg.c
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

#define OS_CORE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Core_Cfg.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Barrier_Lcfg.h"
#include "Os_Common.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Resource_Lcfg.h"
#include "Os_Scheduler_Lcfg.h"
#include "Os_Spinlock_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"
#include "Os.h"

/* Os hal dependencies */
#include "Os_Hal_Core_Cfg.h"
#include "Os_Hal_Core_Lcfg.h"
#include "Os_Hal_Kernel_Lcfg.h"


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

#define OS_START_SEC_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic core status: OsCore_CORE0 */
OS_LOCAL VAR(Os_CoreAsrStatusType, OS_VAR_NOINIT) OsCfg_Core_OsCore_CORE0_Status_Dyn;

#define OS_STOP_SEC_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic core boot barrier: OsCore_CORE0 */
OS_LOCAL VAR(Os_CoreBootBarrierType, OS_VAR_NOINIT) OsCfg_Core_OsCore_CORE0_BootBarrier_Dyn;

#define OS_STOP_SEC_VAR_NOCACHE_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Dynamic core data: OsCore_CORE0 */
VAR(Os_CoreAsrType, OS_VAR_NOINIT) OsCfg_Core_OsCore_CORE0_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for core hooks: OsCore_CORE0 */
OS_LOCAL CONST(Os_HookConfigRefType, OS_CONST) OsCfg_Core_OsCore_CORE0_HookRefs[OS_CFG_NUM_CORE_OSCORE_CORE0_HOOKS + 1] =
{
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_Os_CoreInitHook_OsCore_CORE0),
  OS_HOOK_CASTCONFIG_CALLBACK_2_HOOK(OsCfg_Hook_StartupHook_OsCore_CORE0),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ShutdownHook_OsCore_CORE0),
  OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(OsCfg_Hook_ErrorHook_OsCore_CORE0),
  OS_HOOK_CASTCONFIG_PROTECTIONHOOK_2_HOOK(OsCfg_Hook_ProtectionHook_OsCore_CORE0),
  NULL_PTR
};

/*! Object reference table for core applications: OsCore_CORE0 */
OS_LOCAL CONST(Os_AppConfigRefType, OS_CONST) OsCfg_Core_OsCore_CORE0_AppRefs[OS_CFG_NUM_CORE_OSCORE_CORE0_APPS + 1] =
{
  (Os_AppConfigRefType) &OsCfg_App_Appl0,
  (Os_AppConfigRefType) &OsCfg_App_Appl10,
  NULL_PTR
};

/*! Object reference table for core IOC communications: OsCore_CORE0 */
OS_LOCAL CONST(Os_IocConfigRefType, OS_CONST) OsCfg_Core_OsCore_CORE0_IocRefs[OS_CFG_NUM_CORE_OSCORE_CORE0_IOCS + 1] =
{
  NULL_PTR
};

/*! Object reference table for core resources: OsCore_CORE0 */
OS_LOCAL CONST(Os_ResourceConfigRefType, OS_CONST) OsCfg_Core_OsCore_CORE0_ResourceRefs[OS_CFG_NUM_CORE_OSCORE_CORE0_RESOURCES + 1] =
{
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_InitResource),
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_OsResource),
  OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(OsCfg_Resource_SHUTDOWN_ONGOING),
  NULL_PTR
};

/*! Object reference table for core stacks: OsCore_CORE0 */
OS_LOCAL CONST(Os_StackConfigRefType, OS_CONST) OsCfg_Core_OsCore_CORE0_StackRefs[OS_CFG_NUM_CORE_OSCORE_CORE0_STACKS + 1] =
{
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_CmnMfgSrv_CallSvc100,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_EraseNvBlock0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_GetDataIndex0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_GetErrorStatus0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_InvalidateNvBlock0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_ReadBlock0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_SetBlockProtection0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_SetDataIndex0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_SetRamBlockStatus0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_NvM_WriteBlock0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_Rte_Call_CopyCalPageReq_Oper0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_Rte_Call_SetCalPageReq_Oper0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_SyncCrc_GetAvlCrcHwUnit0,
  (Os_StackConfigRefType) &OsCfg_Stack_NtWrapS_SyncCrc_RelsCrcHwUnit0,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Error,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Isr_Level1,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Isr_Level2,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Isr_Level3,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Isr_Level4,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Kernel,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Protection,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Shutdown,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Startup,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio0,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio1,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio10,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio11,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio2,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio3,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio4,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio5,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio6,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio7,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio8,
  (Os_StackConfigRefType) &OsCfg_Stack_OsCore_CORE0_Task_Prio9,
  NULL_PTR
};

/*! Core configuration data: OsCore_CORE0 */
CONST(Os_CoreAsrConfigType, OS_CONST) OsCfg_Core_OsCore_CORE0 =
{
  /* .Core             = */
  {
    /* .Status               = */ OS_CORE_CASTSTATUS_COREASRSTATUS_2_CORESTATUS(OsCfg_Core_OsCore_CORE0_Status_Dyn),
    /* .HwCore               = */ &OsCfg_Hal_Core_OsCore_CORE0,
    /* .InterruptSourceRefs  = */ OsCfg_Hal_Core_OsCore_CORE0_InterruptSourceRefs,
    /* .InterruptSourceCount = */ OS_CFG_NUM_CORE_OSCORE_CORE0_INTERRUPTSOURCEREFS,
    /* .CoreId               = */ OS_CORE_ID_0,
    /* .IsAsrCore            = */ TRUE,
    /* .IsAutostart          = */ TRUE,
    /* .IsMasterStartAllowed = */ FALSE,
    /* .HasPrivilegedHardwareAccess = */ TRUE
  },
  /* .Dyn              = */ &OsCfg_Core_OsCore_CORE0_Dyn,
  /* .Scheduler        = */ &OsCfg_Scheduler_OsCore_CORE0,
  /* .IdleTask         = */ &OsCfg_Task_IdleTask_OsCore_CORE0,
  /* .KernelApp        = */ &OsCfg_App_SystemApplication_OsCore_CORE0,
  /* .KernelStack      = */ &OsCfg_Stack_OsCore_CORE0_Kernel,
  /* .PreStartTask     = */ &OsCfg_Task_Task_PreStart_CORE0,
  /* .StartupHook      = */ &OsCfg_Hook_StartupHook_OsCore_CORE0,
  /* .ShutdownHook     = */ &OsCfg_Hook_ShutdownHook_OsCore_CORE0,
  /* .ErrorHook        = */ &OsCfg_Hook_ErrorHook_OsCore_CORE0,
  /* .ProtectionHook   = */ &OsCfg_Hook_ProtectionHook_OsCore_CORE0,
  /* .InitHook         = */ &OsCfg_Hook_Os_CoreInitHook_OsCore_CORE0,
  /* .HookRefs         = */ OsCfg_Core_OsCore_CORE0_HookRefs,
  /* .HookCount        = */ OS_CFG_NUM_CORE_OSCORE_CORE0_HOOKS,
  /* .AppRefs          = */ OsCfg_Core_OsCore_CORE0_AppRefs,
  /* .AppCount         = */ OS_CFG_NUM_CORE_OSCORE_CORE0_APPS,
  /* .ResourceRefs     = */ OsCfg_Core_OsCore_CORE0_ResourceRefs,
  /* .ResourceCount    = */ OS_CFG_NUM_CORE_OSCORE_CORE0_RESOURCES,
  /* .HwAsrCore        = */ &OsCfg_Hal_CoreAsr_OsCore_CORE0,
  /* .MemoryProtection = */ &OsCfg_Mp_OsCore_CORE0,
  /* .OsMpAccessRights = */ &OsCfg_Mp_IdleTask_OsCore_CORE0,
  /* .TimingProtection = */ NULL_PTR,
  /* .StackRefs        = */ OsCfg_Core_OsCore_CORE0_StackRefs,
  /* .StackCount       = */ OS_CFG_NUM_CORE_OSCORE_CORE0_STACKS,
  /* .CoreIdx          = */ OS_COREASRCOREIDX_0,
  /* .XSignal          = */ NULL_PTR,
  /* .IocRefs          = */ OsCfg_Core_OsCore_CORE0_IocRefs,
  /* .IocCount         = */ OS_CFG_NUM_CORE_OSCORE_CORE0_IOCS,
  /* .Trace            = */ NULL_PTR,
  /* .Barrier          = */ &OsCfg_Barrier_OsCore_CORE0
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for system IOC communications. */
OS_LOCAL CONST(Os_IocConfigRefType, OS_CONST) OsCfg_SystemIocRefs[OS_CFG_NUM_SYSTEM_IOCS + 1] =
{
  NULL_PTR
};

/*! Object reference table for system spinlocks. */
OS_LOCAL CONST(Os_SpinlockConfigRefType, OS_CONST) OsCfg_SystemSpinlockRefs[OS_CFG_NUM_SYSTEM_SPINLOCKS + 1] =
{
  NULL_PTR
};

/*! Object reference table for core boot barriers. */
CONSTP2VAR(Os_CoreBootBarrierType, AUTOMATIC, OS_CONST) OsCfg_CoreBootBarrierRefs[OS_COREID_COUNT + 1] =
{
  &OsCfg_Core_OsCore_CORE0_BootBarrier_Dyn,
  NULL_PTR
};

/*! System configuration data. */
CONST(Os_SystemConfigType, OS_CONST) OsCfg_System =
{
  /* .VersionInfo      = */
  {
    /* .vendorID         = */ OS_VENDOR_ID,
    /* .moduleID         = */ OS_MODULE_ID,
    /* .sw_major_version = */ OS_SW_MAJOR_VERSION,
    /* .sw_minor_version = */ OS_SW_MINOR_VERSION,
    /* .sw_patch_version = */ OS_SW_PATCH_VERSION
  },
  /* .NumberOfAsrCores = */ OS_COREASRCOREIDX_COUNT,
  /* .SpinlockRefs     = */ OsCfg_SystemSpinlockRefs,
  /* .SpinlockCount    = */ OS_CFG_NUM_SYSTEM_SPINLOCKS,
  /* .HwConfig         = */ &OsCfg_Hal_System,
  /* .MemoryProtection = */ &OsCfg_Mp_SystemMpu,
  /* .IocRefs          = */ OsCfg_SystemIocRefs,
  /* .IocCount         = */ OS_CFG_NUM_SYSTEM_IOCS,
  /* .Core2Thread      = */ &OsCfg_Hal_Core2Thread
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
 *  END OF FILE: Os_Core_Lcfg.c
 *********************************************************************************************************************/
