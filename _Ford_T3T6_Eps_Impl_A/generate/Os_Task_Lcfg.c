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
 *              File: Os_Task_Lcfg.c
 *   Generation Time: 2017-08-24 13:45:33
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

#define OS_TASK_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os kernel module dependencies */
#include "Os_AccessCheck_Lcfg.h"
#include "Os_Application_Lcfg.h"
#include "Os_Common.h"
#include "Os_Core_Lcfg.h"
#include "Os_Core.h"
#include "Os_Error.h"
#include "Os_Ioc.h"
#include "Os_Lcfg.h"
#include "Os_MemoryProtection_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Thread.h"
#include "Os_TimingProtection_Lcfg.h"
#include "Os_Trace_Lcfg.h"

/* Os hal dependencies */
#include "Os_Hal_Context_Lcfg.h"


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

/*! Dynamic task data: IdleTask_OsCore_CORE0 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_IdleTask_OsCore_CORE0_Dyn;

/*! Dynamic task data: Task_100ms_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_100ms_Appl10_Dyn;

/*! Dynamic task data: Task_10msBsw_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_10msBsw_Appl10_Dyn;

/*! Dynamic task data: Task_10ms_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_10ms_Appl10_Dyn;

/*! Dynamic task data: Task_2msTmplMonr_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_2msTmplMonr_Appl10_Dyn;

/*! Dynamic task data: Task_2ms_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_2ms_Appl10_Dyn;

/*! Dynamic task data: Task_4msBsw_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_4msBsw_Appl10_Dyn;

/*! Dynamic task data: Task_4ms_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_4ms_Appl10_Dyn;

/*! Dynamic task data: Task_5msBsw_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_5msBsw_Appl10_Dyn;

/*! Dynamic task data: Task_InitBsw_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_InitBsw_Appl10_Dyn;

/*! Dynamic task data: Task_Init_Appl10 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_Init_Appl10_Dyn;

/*! Dynamic task data: Task_PreStart_CORE0 */
OS_LOCAL VAR(Os_TaskType, OS_VAR_NOINIT) OsCfg_Task_Task_PreStart_CORE0_Dyn;

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

/*! Task configuration data: IdleTask_OsCore_CORE0 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_IdleTask_OsCore_CORE0 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_IdleTask_OsCore_CORE0,
    /* .Context               = */ &OsCfg_Hal_Context_IdleTask_OsCore_CORE0_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio11,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_IdleTask_OsCore_CORE0_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore_CORE0,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_IdleTask_OsCore_CORE0,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 11UL,
  /* .TaskId                = */ IdleTask_OsCore_CORE0,
  /* .RunningPriority       = */ 11UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_ANY,
  /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore_CORE0),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_100ms_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_100ms_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_100ms_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_100ms_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio10,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_100ms_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_100ms_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 10UL,
  /* .TaskId                = */ Task_100ms_Appl10,
  /* .RunningPriority       = */ 10UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_10msBsw_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_10msBsw_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_10msBsw_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_10msBsw_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio9,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_10msBsw_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_10msBsw_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 9UL,
  /* .TaskId                = */ Task_10msBsw_Appl10,
  /* .RunningPriority       = */ 9UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_10ms_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_10ms_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_10ms_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_10ms_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio7,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_10ms_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_10ms_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 7UL,
  /* .TaskId                = */ Task_10ms_Appl10,
  /* .RunningPriority       = */ 7UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_2msTmplMonr_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_2msTmplMonr_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_2msTmplMonr_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_2msTmplMonr_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio4,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_2msTmplMonr_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_2msTmplMonr_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 4UL,
  /* .TaskId                = */ Task_2msTmplMonr_Appl10,
  /* .RunningPriority       = */ 4UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_2ms_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_2ms_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_2ms_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_2ms_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio5,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_2ms_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_2ms_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 5UL,
  /* .TaskId                = */ Task_2ms_Appl10,
  /* .RunningPriority       = */ 5UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_4msBsw_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_4msBsw_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_4msBsw_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_4msBsw_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio3,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_4msBsw_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_4msBsw_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 3UL,
  /* .TaskId                = */ Task_4msBsw_Appl10,
  /* .RunningPriority       = */ 3UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_4ms_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_4ms_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_4ms_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_4ms_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio6,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_4ms_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_4ms_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 6UL,
  /* .TaskId                = */ Task_4ms_Appl10,
  /* .RunningPriority       = */ 6UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_5msBsw_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_5msBsw_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_5msBsw_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_5msBsw_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio8,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_5msBsw_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_5msBsw_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 8UL,
  /* .TaskId                = */ Task_5msBsw_Appl10,
  /* .RunningPriority       = */ 8UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_InitBsw_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_InitBsw_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_InitBsw_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_InitBsw_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio2,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_InitBsw_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_InitBsw_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 2UL,
  /* .TaskId                = */ Task_InitBsw_Appl10,
  /* .RunningPriority       = */ 2UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OSDEFAULTAPPMODE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_Init_Appl10 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_Init_Appl10 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_Init_Appl10,
    /* .Context               = */ &OsCfg_Hal_Context_Task_Init_Appl10_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio1,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_Init_Appl10_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_Appl10,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_Init_Appl10,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_TASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 1UL,
  /* .TaskId                = */ Task_Init_Appl10,
  /* .RunningPriority       = */ 1UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ (OS_APPID2MASK(Appl10)
        | OS_APPID2MASK(SystemApplication_OsCore_CORE0)),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

/*! Task configuration data: Task_PreStart_CORE0 */
CONST(Os_TaskConfigType, OS_CONST) OsCfg_Task_Task_PreStart_CORE0 =
{
  /* .Thread                = */
  {
    /* .ContextConfig         = */ &OsCfg_Hal_Context_Task_PreStart_CORE0,
    /* .Context               = */ &OsCfg_Hal_Context_Task_PreStart_CORE0_Dyn,
    /* .Stack                 = */ &OsCfg_Stack_OsCore_CORE0_Task_Prio0,
    /* .Dyn                   = */ OS_TASK_CASTDYN_TASK_2_THREAD(OsCfg_Task_Task_PreStart_CORE0_Dyn),
    /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore_CORE0,
    /* .Core                  = */ &OsCfg_Core_OsCore_CORE0,
    /* .IntApiState           = */ &OsCfg_Core_OsCore_CORE0_Dyn.IntApiState,
    /* .TimeProtConfig        = */ NULL_PTR,
    /* .MpAccessRightsInitial = */ &OsCfg_Mp_Task_PreStart_CORE0,
    /* .AccessRights          = */ &OsCfg_AccessCheck_NoAccess,
    /* .Trace                 = */ NULL_PTR,
    /* .InitialCallContext    = */ OS_CALLCONTEXT_PRESTARTTASK,
    /* .InitDuringStartUp     = */ TRUE
  },
  /* .HomePriority          = */ 0UL,
  /* .TaskId                = */ Task_PreStart_CORE0,
  /* .RunningPriority       = */ 0UL,
  /* .MaxActivations        = */ 1UL,
  /* .AutostartModes        = */ OS_APPMODE_NONE,
  /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore_CORE0),
  /* .IsExtended            = */ FALSE,
  /* .StackSharing          = */ OS_TASKSCHEDULE_ALLOWED
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*! Object reference table for tasks. */
CONSTP2CONST(Os_TaskConfigType, OS_CONST, OS_CONST) OsCfg_TaskRefs[OS_TASKID_COUNT + 1] =
{
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_IdleTask_OsCore_CORE0),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_100ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_10msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_10ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_2msTmplMonr_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_2ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_4msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_4ms_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_5msBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_InitBsw_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_Init_Appl10),
  OS_TASK_CASTCONFIG_TASK_2_TASK(OsCfg_Task_Task_PreStart_CORE0),
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
 *  END OF FILE: Os_Task_Lcfg.c
 *********************************************************************************************************************/
