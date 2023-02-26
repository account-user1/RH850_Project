/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \ingroup       Os_Kernel
 *  \defgroup      Os_Application Application
 *  \brief         Internal functions and data types to work with OS applications.
 * \details
 *
 *  An OS Application is a collection of OS objects. Most OS objects belong to an application:
 *    - Tasks
 *    - ISRs
 *    - Trusted/Non-Trusted Functions
 *    - Application specific hooks
 *    - Counters
 *    - Alarms
 *    - Schedule Tables
 *
 *  The application module is responsible for initializing and killing objects, which belong to one application.
 *  It also provides access control primitives which are used by most APIs.
 *
 *
 *  ### Application Initialization ###
 *  ![Application Initialization](Application_Initialize.png)
 *
 *
 *  ### Application Killing ###
 *  ![Application Killing](Application_Kill.png)
 *
 *  \trace   CREQ-354
 *
 *  \{
 *  \file
 *  \brief         Internal application services.
 *  \details       --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_APPLICATIONINT_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_APPLICATIONINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Application_Types.h"
# include "Os_Application_Lcfg.h"

/* Os kernel module dependencies */
# include "Os_Task_Types.h"
# include "Os_Isr_Types.h"
# include "Os_Hook_Types.h"
# include "Os_Counter_Types.h"
# include "Os_Alarm_Types.h"
# include "Os_ServiceFunction_Types.h"
# include "Os_ScheduleTable_Types.h"
# include "Os_CoreInt.h"
# include "Os_Common_Types.h"
# include "OsInt.h"
# include "Os_Lcfg.h"

/* Os Hal dependencies */
# include "Os_Hal_CompilerInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_APPLICATION)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/*! Pointer to Task configuration. */
typedef P2CONST(Os_TaskConfigType, TYPEDEF, OS_CONST) Os_TaskConfigRefType;

/*! Pointer to category 2 ISR configuration. */
typedef P2CONST(Os_IsrConfigType, TYPEDEF, OS_CONST) Os_IsrConfigRefType;

/*! Pointer to category 1 ISR configuration. */
typedef P2CONST(Os_IsrCat1ConfigType, TYPEDEF, OS_CONST) Os_IsrCat1ConfigRefType;

/*! Pointer to Counter configuration. */
typedef P2CONST(Os_CounterConfigType, TYPEDEF, OS_CONST) Os_CounterConfigRefType;

/*! Pointer to Alarm configuration . */
typedef P2CONST(Os_AlarmConfigType, TYPEDEF, OS_CONST) Os_AlarmConfigRefType;

/*! Pointer to Alarm configuration. */
typedef P2CONST(Os_SchTConfigType, TYPEDEF, OS_CONST) Os_SchTConfigRefType;

/*! Pointer to service functions. */
typedef P2CONST(Os_ServiceConfigType, TYPEDEF, OS_CONST) Os_ServiceConfigRefType;




/*! Dynamic application information. */
typedef struct
{
  /*! Application state. */
  ApplicationStateType State;
} Os_AppType;


/*! Constant application information. */
struct Os_AppConfigType_Tag
{
  /*! Dynamic part. */
  P2VAR(Os_AppType, TYPEDEF, OS_VAR_NOINIT) Dyn;

  /*! The core to which this application belongs. */
  P2CONST(Os_CoreAsrConfigType, TYPEDEF, OS_CONST) Core;

  /*! Access rights bit mask. */
  Os_AppAccessMaskType AccessRightId;

  /*! Tasks. */
  P2CONST(Os_TaskConfigRefType, TYPEDEF, OS_CONST) TaskRefs;

  /*! Number of tasks. */
  Os_ObjIdxType TaskCount;

  /*! ISRs of category 2. */
  P2CONST(Os_IsrConfigRefType, TYPEDEF, OS_CONST) IsrCat2Refs;

  /*! Number of ISRs of category 2. */
  Os_ObjIdxType IsrCat2Count;

  /*! ISRs of category 1. */
  P2CONST(Os_IsrCat1ConfigRefType, TYPEDEF, OS_CONST) IsrCat1Refs;

  /*! Number of ISRs of category 1. */
  Os_ObjIdxType IsrCat1Count;

  /*! Counters. */
  P2CONST(Os_CounterConfigRefType, TYPEDEF, OS_CONST) CounterRefs;

  /*! Number of counters. */
  Os_ObjIdxType CounterCount;

  /*! List of Alarm of this core. */
  P2CONST(Os_AlarmConfigRefType, TYPEDEF, OS_CONST) AlarmRefs;

  /*! Number of Alarms. */
  Os_ObjIdxType AlarmCount;

  /*! List of Schedule Tables of this core. */
  P2CONST(Os_SchTConfigRefType, TYPEDEF, OS_CONST) SchTRefs;

  /*! Number of Schedule Tables. */
  Os_ObjIdxType SchTCount;

  /*! List of Service Functions.
   *  \trace      SPEC-63800 */
  P2CONST(Os_ServiceConfigRefType, TYPEDEF, OS_CONST) ServiceFunctions;

  /*! Number of Service Functions. */
  Os_ObjIdxType ServiceFunctionCount;

  /*! Application specific StartupHook. */
  P2CONST(Os_HookCallbackConfigType, TYPEDEF, OS_CONST) StartupHookRef;

  /*! Application specific ShutdownHook. */
  P2CONST(Os_HookStatusHookConfigType, TYPEDEF, OS_CONST) ShutdownHookRef;

  /*! Application specific ErrorHook. */
  P2CONST(Os_HookStatusHookConfigType, TYPEDEF, OS_CONST) ErrorHookRef;

  /*! List of all hooks of this application. */
  P2CONST(Os_HookConfigRefType, TYPEDEF, OS_CONST) HookRefs;

  /*! Number of hooks. */
  Os_ObjIdxType HookCount;

  /*! Restart Task. */
  P2CONST(Os_TaskConfigType, TYPEDEF, OS_CONST) RestartTask;

  /*! Tells whether the application is trusted. */
  boolean IsTrusted;

  /*! Tells whether the application is privileged (MPU disabled) or not (MPU enabled). */
  boolean IsPrivileged;

  /*! Tells whether timing protection violation reporting is delayed until trusted functions are executed. */
  boolean HasTimingProtectionDelay;

  /*! Application ID. */
  ApplicationType Id;
};

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_AppSetNotAccesible()
 **********************************************************************************************************************/
/*! \brief          Set the application state of the given application to not accessible.
 *  \details        --no details--
 *
 *  \param[in,out]  App   The application to modify.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_AppSetNotAccesible,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the given application and all objects which belong to it (Init-Step4).
 *  \details        --no details--
 *
 *  \param[in,out]  App     The application to initialize.
 *  \param[in]      AppMode The application mode in which the application shall be initialized.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different applications.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_AppInit
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  AppModeType AppMode
);


/***********************************************************************************************************************
 *  Os_AppStart()
 **********************************************************************************************************************/
/*! \brief          Starts the given application.
 *  \details        --no details--
 *
 *  \param[in,out]  App     The application to start.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different applications.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_AppStart,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppServicesInit()
 **********************************************************************************************************************/
/*! \brief          Initialize services of the given application.
 *  \details        The function is called in Init-Step3 for the kernel application and in Init-Step4 for all
 *                  applications.
 *
 *  \param[in,out]  App     The application to initialize.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different applications.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_AppServicesInit
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
);


/***********************************************************************************************************************
 *  Os_AppIsTrusted()
 **********************************************************************************************************************/
/*! \brief          Returns whether the application is trusted (!0) or not (0).
 *  \details        --no details--
 *
 *  \param[in]      App     The application to query.
 *
 *  \retval         !0    Trusted.
 *  \retval         0     Non-Trusted.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppIsTrusted,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppIsPrivileged()
 **********************************************************************************************************************/
/*! \brief          Returns whether the application is privileged (!0) or not (0).
 *  \details        --no details--
 *
 *  \param[in]      App     The application to query.
 *
 *  \retval         !0    Privileged.
 *  \retval         0     Non privileged.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppIsPrivileged,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppHasTimingProtectionDelay()
 **********************************************************************************************************************/
/*! \brief          Tells whether timing protection violations in trusted functions of this application are
 *  \details        --no details--
 *                  delayed (!0) or not (0).
 *
 *  \param[in]      App     The application to query.
 *
 *  \retval         !0    Delay.
 *  \retval         0     No delay.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_AppHasTimingProtectionDelay,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppGetState()
 **********************************************************************************************************************/
/*! \brief          Returns the application state.
 *  \details        --no details--
 *
 *  \param[in]      App     The application to query.
 *
 *  \return         Application state of the given application.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE ApplicationStateType, OS_CODE, OS_ALWAYS_INLINE, Os_AppGetState,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppCheckAccess()
 **********************************************************************************************************************/
/*! \brief        Returns whether an application is allowed to access an object (using its accessing application mask).
 *  \details      In case that extended checks are disabled, the default result of \ref Os_ErrServiceProtectionCheck()
 *                is returned.
 *
 *  \param[in]    App             The application to query.
 *  \param[in]    AccessMask      The mask to check.
 *
 *  \retval       Not OS_CHECK_FAILED   If access is granted.
 *  \retval       OS_CHECK_FAILED       If access is denied.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *
 *  \trace        SPEC-63749
 *
 *  \note         This check shall always be called with the current application. In order to ensure this,
 *                the parameter App may be removed. \ref Os_ThreadGetOwnerApplication() can be called within
 *                \ref Os_AppCheckAccess().
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppCheckAccess,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App, Os_AppAccessMaskType AccessMask
));


/***********************************************************************************************************************
 *  Os_AppCheckIsAccessible()
 **********************************************************************************************************************/
/*! \brief        Returns whether the given application is accessible (Not OS_CHECK_FAILED) or not (OS_CHECK_FAILED).
 *  \details      In case that extended checks are disabled, the default result of \ref Os_ErrServiceProtectionCheck()
 *                is returned.
 *
 *  \param[in]    App     The application to query.
 *
 *  \retval       Not OS_CHECK_FAILED   If the application is accessible.
 *  \retval       OS_CHECK_FAILED       If the application is not accessible.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *
 *  \trace        SPEC-63947
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppCheckIsAccessible,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppIsMemberOfCore()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given application belongs to the local core (!0) or not (0).
 *  \details        --no details--
 *
 *  \param[in]      App        The application of interest.
 *  \param[in]      CallerCore The core to check.
 *
 *  \retval         !0   If the given application is assigned to the given core.
 *  \retval         0    If the given application is not assigned to the given core.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppIsMemberOfCore,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) CallerCore
));


/***********************************************************************************************************************
 *  Os_AppIsKernelApp()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given application is a kernel application.
 *  \details        Kernel applications are part of the OS and need special attention.
 *
 *  \param[in]      App   Application to check.
 *
 *  \retval         !0   Given application is a kernel application.
 *  \retval         0    Otherwise.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_AppIsKernelApp,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppCheckIsCoreLocal()
 **********************************************************************************************************************/
/*! \brief          Checks whether the given application is assigned to the local core.
 *  \details        Bypass core information to \ref Os_CoreCheckIsLocalCore().
 *
 *  \param[in]      App         The application of interest.
 *  \param[in]      CallerCore  The core to check.
 *
 *  \retval         Not OS_CHECK_FAILED   If the given application is assigned to the local core.
 *  \retval         OS_CHECK_FAILED       If the given application is not assigned to the local core.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_AppCheckIsCoreLocal,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) CallerCore
));


/***********************************************************************************************************************
 *  Os_AppGetCore()
 **********************************************************************************************************************/
/*! \brief          Returns the core of the application.
 *  \details        --no details--
 *
 *  \param[in]      App        The application to query.
 *
 *  \return         The core.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_AppGetCore,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppGetId()
 **********************************************************************************************************************/
/*! \brief          Returns the id of the given application.
 *  \details        --no details--
 *
 *  \param[in]      App     Application to query.
 *
 *  \return         Id of the task.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE ApplicationType, OS_CODE,
OS_ALWAYS_INLINE, Os_AppGetId,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppGetStartupHook()
 **********************************************************************************************************************/
/*! \brief          Returns the application specific startup hook of the given application.
 *  \details        --no details--
 *
 *  \param[in]      App        The application to query.
 *
 *  \return         A reference to the hook.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_AppGetStartupHook,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppGetErrorHook()
 **********************************************************************************************************************/
/*! \brief          Returns the application specific error hook of the given application.
 *  \details        --no details--
 *
 *  \param[in]      App        The application to query.
 *
 *  \return         A reference to the hook.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_AppGetErrorHook,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppGetShutdownHook()
 **********************************************************************************************************************/
/*! \brief          Returns the application specific shutdown hook of the given application.
 *  \details        --no details--
 *
 *  \param[in]      App        The application to query.
 *
 *  \return         A reference to the hook.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_AppGetShutdownHook,
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppCheckId()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given ID is valid (Not OS_CHECK_FAILED) or not (OS_CHECK_FAILED).
 *  \details        In case that extended checks are disabled, the default result of \ref Os_ErrExtendedCheck()
 *                  is returned.
 *
 *  \param[in]      AppId        The ID to check.
 *
 *  \retval         Not OS_CHECK_FAILED   If the given ID is valid.
 *  \retval         OS_CHECK_FAILED       If the given ID is not valid.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_AppCheckId,
(
  ApplicationType AppId
));


/***********************************************************************************************************************
 *  Os_AppId2App()
 **********************************************************************************************************************/
/*! \brief          Converts the ID into an object.
 *  \details        --no details--
 *
 *  \param[in]      AppId     The ID to convert.
 *
 *  \return         The corresponding object.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            The given ID is valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_AppId2App,
(
  ApplicationType AppId
));


/***********************************************************************************************************************
 *  Os_AppIsRestartTaskAvailable()
 **********************************************************************************************************************/
/*! \brief          Returns whether a restart task is configured (!0) or not (0).
 *  \details        --no details--
 *
 *  \param[in]      App     The App to query.
 *
 *  \retval         !0   If the application has a restart task.
 *  \retval         0    If the application has no restart task.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_AppIsRestartTaskAvailable,
(
    P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
));


/***********************************************************************************************************************
 *  Os_AppKill()
 **********************************************************************************************************************/
/*! \brief          Kills the given application.
 *  \details        This function does not return, if the current thread belongs to the given application.
 *
 *  \param[in,out]  App           Application to kill.
 *  \param[in]      RestartOption Tells whether the application shall be restarted.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different applications.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            If a restart is requested, the App has to have a valid restart task pointer.
 *  \pre            Given App is no kernel application.
 *
 *  \trace          CREQ-170
 *  \trace          SPEC-63716, SPEC-63735, SPEC-63958, SPEC-63746
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_AppKill
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  RestartType RestartOption
);


/***********************************************************************************************************************
 *  Os_AppKillNoSuicide()
 **********************************************************************************************************************/
/*! \brief          Kills the given application without restart and returns to caller.
 *  \details        --no details--
 *
 *  \param[in,out]  App           Application to kill.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different applications.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            Given App is no kernel application.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_AppKillNoSuicide
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
);


/***********************************************************************************************************************
 *  Os_AppTerminateApplicationLocal()
 **********************************************************************************************************************/
/*! \brief          Second part of TerminateApplication() API.
 *  \details        This function performs some error checks and calls internal application kill behavior.
 *
 *  \param[in,out]  App                         Application to terminate.
 *  \param[in]      RestartOption               Tells whether application shall be restarted.
 *  \param[in]      CurrentCallerApplicationID  The current application of the original caller.
 *
 *  \return         See \ref Os_AppTerminateApplication()
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      FALSE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_AppTerminateApplicationLocal
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  RestartType RestartOption,
  ApplicationType CurrentCallerApplicationID
);


/***********************************************************************************************************************
 *  Os_AppGetApplicationStateLocal()
 **********************************************************************************************************************/
/*! \brief          Returns the current state of the given application as output value.
 *  \details        --no details--
 *
 *  \param[in]      App                       Application to terminate.
 *  \param[out]     Value                     Contains the current state on return.
 *
 *  \retval         OS_STATUS_OK   No error.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            The given application belongs to the local core.
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_AppGetApplicationStateLocal
(
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App,
  ApplicationStateRefType Value
);


/***********************************************************************************************************************
 *  Os_Api_GetApplicationID()
 **********************************************************************************************************************/
/*! \brief        OS service GetApplicationID().
 *  \details      This service determines the OS-Application where the caller (Task/ISR/Hook) originally belongs to
 *                (was configured to).
 *                All system objects (e.g. system hooks, idle task, ...) belong to kernel applications.
 *                Kernel applications are regular applications and have valid identifiers.
 *                Therefore INVALID_OSAPPLICATION is never returned because there is always a valid application active.
 *
 *  \return       Identifier of the OS-Application.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-172, CREQ-40
 *  \trace        SPEC-63710, SPEC-63994, SPEC-64028, SPEC-64067
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) Os_Api_GetApplicationID
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_GetCurrentApplicationID()
 **********************************************************************************************************************/
/*! \brief        OS service GetCurrentApplicationID().
 *  \details      This service determines the OS-Application where the caller (Task/ISR/Hook) of the service is
 *                currently executing.
 *                Note that, if the caller is not within a CallTrustedFunction() call, the value is equal to the result
 *                of GetApplicationID().
 *
 *  \see          Os_Api_GetApplicationID()
 *
 *  \return       Identifier of the OS-Application.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-60, CREQ-40
 *  \trace        SPEC-63543, SPEC-63545, SPEC-63555, SPEC-63557
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) Os_Api_GetCurrentApplicationID
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_GetApplicationState()
 **********************************************************************************************************************/
/*! \brief        OS service GetApplicationState().
 *  \details      This service returns the current state of an OS-Application.
 *
 *  \param[in]    Application   The OS-Application from which the state is requested.
 *  \param[out]   Value         The current state of the application.
 *
 *  \retval       OS_STATUS_OK            No error.
 *  \retval       OS_STATUS_ID_1          (EXTENDED status:) Invalid Application.
 *  \retval       OS_STATUS_CALLEVEL      (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT   (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-104, CREQ-40
 *  \trace        SPEC-63711, SPEC-63741, SPEC-63866, SPEC-63890, SPEC-64017, SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_GetApplicationState
(
  ApplicationType Application,
  ApplicationStateRefType Value
);


/***********************************************************************************************************************
 *  Os_Api_CheckObjectAccess()
 **********************************************************************************************************************/
/*! \brief        OS service CheckObjectAccess().
 *  \details      This service determines if the OS-Application, given by ApplID, is allowed to use the IDs
 *                of a Task, Resource, Counter, Alarm or Schedule Table in API calls.
 *
 *                Design decision: The following checks are not performed because there is no status type returned
 *                and the API does not evaluate dynamic runtime data.
 *                  - E_OS_CALLEVEL
 *                  - E_OS_DISABLEDINT
 *
 *  \param[in]    ApplID      OS-Application identifier.
 *  \param[in]    ObjectType  Type of the following parameter.
 *  \param[in]    ObjectID    The object to be examined.
 *
 *  \retval       ACCESS      if the ApplID has access to the object.
 *  \retval       NO_ACCESS   If:
 *                              - ApplID doesn't have access to the object.
 *                              - ApplID is invalid.
 *                              - ObjectID is invalid.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-109
 *  \trace        SPEC-63721, SPEC-63745, SPEC-63822, SPEC-63879, SPEC-64029, SPEC-63701, SPEC-63980
 **********************************************************************************************************************/
FUNC(ObjectAccessType, OS_CODE) Os_Api_CheckObjectAccess
(
  ApplicationType ApplID,
  ObjectTypeType ObjectType,
  Os_ObjectIdType ObjectID
);


/***********************************************************************************************************************
 *  Os_Api_CheckObjectOwnership()
 **********************************************************************************************************************/
/*! \brief        OS service CheckObjectOwnership().
 *  \details      This service determines to which OS-Application a given Task, ISR, Counter, Alarm or Schedule Table
 *                belongs.
 *
 *                Design decision: The following checks are not performed because there is no status type returned
 *                and the API does not evaluate dynamic runtime data.
 *                  - E_OS_CALLEVEL
 *                  - E_OS_DISABLEDINT
 *
 *  \param[in]    ObjectType  Type of the following parameter.
 *  \param[in]    ObjectID    The object to be examined.
 *
 *  \return       Identifier of the owner OS-Application.
 *  \retval       INVALID_OSAPPLICATION if the object does not exist.
 *
 *  \context      TASK|ISR2|ERRHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-18, CREQ-40
 *  \trace        SPEC-63846, SPEC-63897, SPEC-64015, SPEC-64062, SPEC-63980
 **********************************************************************************************************************/
FUNC(ApplicationType, OS_CODE) Os_Api_CheckObjectOwnership
(
  ObjectTypeType ObjectType,
  Os_ObjectIdType ObjectID
);


/***********************************************************************************************************************
 *  Os_Api_AllowAccess()
 **********************************************************************************************************************/
/*! \brief        OS service AllowAccess().
 *  \details      This service sets the state of the current OS-Application from APPLICATION_RESTARTING to
 *                APPLICATION_ACCESSIBLE.
 *
 *  \retval       OS_STATUS_OK                No error.
 *  \retval       OS_STATUS_STATE_NO_RESTART  The application is not in the restarting state.
 *  \retval       OS_STATUS_CALLEVEL          (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT       (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-114, CREQ-40
 *  \trace        SPEC-63737, SPEC-63902, SPEC-63917, SPEC-63989, SPEC-64017, SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_AllowAccess
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_TerminateApplication()
 **********************************************************************************************************************/
/*! \brief        OS service TerminateApplication().
 *  \details      This service terminates the OS-Application to which the calling Task/ISR/application
 *                specific error hook belongs.
 *
 *  \param[in]    Application       The identifier of the OS-Application to be terminated. If the caller belongs to
 *                                  Application the call results in a self termination.
 *  \param[in]    RestartOption     Either RESTART for doing a restart of the OS-Application or NO_RESTART if
 *                                  OS-Application shall not be restarted.
 *
 *  \retval       OS_STATUS_OK              No errors
 *  \retval       OS_STATUS_KILLING_IS_DISABLED         Killing is not enabled in the configuration.
 *  \retval       OS_STATUS_ID_1            (EXTENDED status:) Application was not valid.
 *  \retval       OS_STATUS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       other                     See \ref Os_AppTerminateApplication() and Os_XSigSend_TerminateApplication()
 *
 *  \context      TASK|ISR2|ERRHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-110, CREQ-40
 *  \trace        SPEC-63700, SPEC-63735 SPEC-63816, SPEC-63820, SPEC-63824, SPEC-63863, SPEC-63901, SPEC-63948,
 *                SPEC-63952, SPEC-63958, SPEC-63966, SPEC-64026, SPEC-64040, SPEC-64060, SPEC-67564, SPEC-64017,
 *                SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_TerminateApplication
(
  ApplicationType Application,
  RestartType RestartOption
);


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_APPLICATION)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_APPLICATIONINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_ApplicationInt.h
 **********************************************************************************************************************/
