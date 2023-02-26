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
 * \addtogroup Os_Thread
 *
 * \{
 *
 * \file
 * \brief      Internal functions implementation to work with threads.
 * \details     --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined (OS_THREAD_H)                                                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_THREAD_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_ThreadInt.h"
# include "Os_Thread_Types.h"

/* Os module dependencies */
# include "Os_Common.h"
# include "Os_Stack.h"
# include "Os_Interrupt.h"
# include "Os_Core.h"
# include "Os_MemoryProtection.h"
# include "Os_TimingProtection.h"
# include "Os_Application.h"
# include "Os_Error.h"
# include "Os_Resource.h"
# include "Os_ServiceFunction.h"
# include "Os_XSignal_Cfg.h"
# include "Os_Trace.h"
# include "Os_Spinlock.h"
# include "Os_Lock.h"
# include "Os_XSignal.h"
# include "Os_AccessCheck.h"

/* Os Hal dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Context.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_THREAD)
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

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_ThreadGetLocks()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2VAR(Os_LockListType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,
OS_ALWAYS_INLINE, Os_ThreadGetLocks,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return &(Thread->Dyn->Locks);
}

/***********************************************************************************************************************
 *  Os_ThreadGetSpinlocks()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2VAR(Os_SpinlockListType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetSpinlocks,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return &(Thread->Dyn->Spinlocks);
}

/***********************************************************************************************************************
 *  Os_ThreadGetServiceCalls()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2VAR(Os_ServiceCallType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,
OS_ALWAYS_INLINE, Os_ThreadGetServiceCalls,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Dyn->ServiceCalls;
}

/***********************************************************************************************************************
 *  Os_ThreadSetServiceCalls()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_ThreadSetServiceCalls,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2VAR(Os_ServiceCallType, AUTOMATIC, OS_VAR_NOINIT) ServiceCalls
))
{
  Thread->Dyn->ServiceCalls = ServiceCalls;                                                                             /* SBSW_OS_TRD_THREADGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_ThreadSetLocks()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* COV_OS_THREADLIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadSetLocks,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2CONST(Os_LockConfigType, AUTOMATIC, OS_CONST) Locks
))                                                                                                                      /* COV_OS_THREADLIBFUNCT */
{
  Thread->Dyn->Locks = Locks;                                                                                           /* SBSW_OS_TRD_THREADGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_ThreadGetTrace()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_TraceThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_ThreadGetTrace,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Trace;
}

/***********************************************************************************************************************
 *  Os_ThreadGetTpConfig()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_ThreadGetTpConfig,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->TimeProtConfig;
}

/***********************************************************************************************************************
 *  Os_ThreadGetStack()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_ThreadGetStack,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (Thread->Stack);
}

/***********************************************************************************************************************
 *  Os_ThreadGetIntApiState()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2VAR(Os_IntApiStateType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetInterruptApiState,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->IntApiState;
}

/***********************************************************************************************************************
 *  Os_ThreadGetCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetCore,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Core;
}

/***********************************************************************************************************************
 *  Os_ThreadGetCurrentType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_CallContextType, OS_CODE,                                               /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadGetCurrentType,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Dyn->CallContext;
}

/***********************************************************************************************************************
 *  Os_ThreadGetInitialType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_CallContextType, OS_CODE,                                               /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadGetInitialType,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->InitialCallContext;
}

/***********************************************************************************************************************
 *  Os_ThreadSwitchType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_CallContextType, OS_CODE,                                               /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadSwitchType,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  Os_CallContextType NextCallContext
))
{
  Os_CallContextType prevCallContext;

  prevCallContext = Thread->Dyn->CallContext;
  Thread->Dyn->CallContext = NextCallContext;                                                                           /* SBSW_OS_TRD_THREADGETDYN_001 */

  return prevCallContext;
}

/***********************************************************************************************************************
 *  Os_ThreadIsTask()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsTask,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return ((Thread->InitialCallContext == OS_CALLCONTEXT_TASK) ||
          (Thread->InitialCallContext == OS_CALLCONTEXT_PRESTARTTASK));
}

/***********************************************************************************************************************
 *  Os_ThreadIsTpIsr()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsTpIsr,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (Thread->InitialCallContext == OS_CALLCONTEXT_TPISR);
}

/***********************************************************************************************************************
 *  Os_ThreadIsIsr()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsIsr,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (Thread->InitialCallContext == OS_CALLCONTEXT_ISR2);
}

/***********************************************************************************************************************
 *  Os_ThreadIsAnyInitialContext()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsAnyInitialContext,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  Os_CallContextType Context
))
{
  return (Thread->InitialCallContext & Context);
}

/***********************************************************************************************************************
 *  Os_ThreadIsShutdownHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsShutdownHook,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (Thread->InitialCallContext == OS_CALLCONTEXT_SHUTDOWNHOOK);
}

/***********************************************************************************************************************
 *  Os_ThreadIsHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadIsHook,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (Thread->InitialCallContext & OS_CALLCONTEXT_ANYHOOK);
}

/***********************************************************************************************************************
 *  Os_ThreadCheckCallContext()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadCheckCallContext,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  Os_CallContextType PermittedCallContext
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)Os_ThreadGetCurrentType(Thread) & PermittedCallContext);                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadCheckIsCurrentApplication()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadCheckIsCurrentApplication,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST) App
))
{
  return Os_ErrServiceProtectionCheck((Os_StdReturnType)(Os_ThreadGetCurrentApplication(Thread) == App));               /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadGetOwnerApplication()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_AppConfigType, TYPEDEF, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetOwnerApplication,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->OwnerApplication;
}

/***********************************************************************************************************************
 *  Os_ThreadGetCurrentApplication()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_AppConfigType, TYPEDEF, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_ThreadGetCurrentApplication,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Dyn->Application;
}

/***********************************************************************************************************************
 *  Os_ThreadSetCurrentApplication()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_ThreadSetCurrentApplication,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2CONST(Os_AppConfigType, TYPEDEF, OS_CONST) App
))
{
  Thread->Dyn->Application = App;                                                                                       /* SBSW_OS_TRD_THREADGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_ThreadHasResourcesLocked()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadHasResourcesLocked,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_StdReturnType hasResources;
  Os_LockListType it;

  hasResources = 0;
  it = Thread->Dyn->Locks;

  /*#10 Search the complete lock list*/
  while(OS_UNLIKELY(Os_LockListIsEmpty(&it) == 0))                                                                      /* SBSW_OS_TRD_LOCKLISTISEMPTY_001 */
  {
    /*#20 If one resource is found, stop searching and return 1 (0 in any other case).*/
    if(Os_LockListIsTopRes(&it) != 0)                                                                                   /* SBSW_OS_TRD_LOCKLISTISTOPRES_001 */
    {
      hasResources = 1;
      break;
    }

    it = Os_LockListNext(it);                                                                                           /* SBSW_OS_TRD_LOCKLISTNEXT_001 */
  }

  return hasResources;
}

/***********************************************************************************************************************
 *  Os_ThreadHasSpinlockLocked()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadHasSpinlockLocked,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_StdReturnType hasSpinlocks;
  Os_LockListType it;

  hasSpinlocks = 0;
  it = Thread->Dyn->Locks;

  /* #10 Search the complete lock list */
  while(OS_UNLIKELY(Os_LockListIsEmpty(&it) == 0))                                                                      /* SBSW_OS_TRD_LOCKLISTISEMPTY_001 */
  {
    /* #20 If one spinlock is found, stop searching and return 1 (0 in any other case). */
    if(Os_LockListIsTopSpinlock(&it) != 0)                                                                              /* SBSW_OS_TRD_LOCKLISTISTOPSPINLOCK_001 */
    {
      hasSpinlocks = 1;
      break;
    }

    it = Os_LockListNext(it);                                                                                           /* SBSW_OS_TRD_LOCKLISTNEXT_001 */
  }

  return hasSpinlocks;
}

/***********************************************************************************************************************
 *  Os_ThreadCheckResourcesReleased()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadCheckResourcesReleased,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Os_ErrExtendedCheck(Os_ThreadHasResourcesLocked(Thread) == 0);                                                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadCheckSpinlocksReleased()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType,                                                          /* PRQA S 3219 */ /* MD_Os_3219 */
OS_CODE, OS_ALWAYS_INLINE, Os_ThreadCheckSpinlocksReleased,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Os_ErrExtendedCheck(Os_ThreadHasSpinlockLocked(Thread) == 0);                                                  /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadCheckAreInterruptsEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_ThreadCheckAreInterruptsEnabled,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Os_InterruptCheckEnabled(Os_ThreadGetInterruptApiState(Thread));                                               /* SBSW_OS_TRD_INTERRUPTCHECKENABLED_001 */ /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadSpinlockForceRelease()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadSpinlockForceRelease,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_SpinlockForciblyReleaseThreadLocks(Thread);                                                                        /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadResourceForceRelease()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadResourceForceRelease,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_ResourceForciblyReleaseLocks(Thread);                                                                              /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadLocksForceRelease()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadLocksForceRelease,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  /* #10 Clean up the interrupt state. */
  Os_InterruptCleanup(Thread->IntApiState);                                                                             /* SBSW_OS_TRD_INTERRUPTCLEANUP_001 */

  /* #20 Release all locks. */
  Os_ThreadResourceForceRelease(Thread);                                                                                /* SBSW_OS_FC_PRECONDITION */
  Os_ThreadSpinlockForceRelease(Thread);                                                                                /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_ThreadInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadInit,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  /* #10 Initialize current application. */
  Thread->Dyn->Application = Thread->OwnerApplication;                                                                  /* SBSW_OS_TRD_THREADGETDYN_001 */

  /* #20 Initialize current context. */
  Thread->Dyn->CallContext = Thread->InitialCallContext;                                                                /* SBSW_OS_TRD_THREADGETDYN_001 */

  /* #30 Initialize service call list. */
  Os_ServiceCallsInit(&(Thread->Dyn->ServiceCalls));                                                                    /* SBSW_OS_TRD_SERVICECALLSINIT_001 */

  /* #40 Initialize the lock list. */
  Os_LockListInit(&(Thread->Dyn->Locks));                                                                               /* SBSW_OS_TRD_LOCKLISTINIT_001 */

  /* #50 Initialize spinlock order list. */
  Os_SpinlockListInit(Os_ThreadGetSpinlocks(Thread));                                                                   /* SBSW_OS_TRD_SPINLOCKLISTINIT_001 */ /* SBSW_OS_FC_PRECONDITION */

  /* #60 Initialize the timing protection. */
  {
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) currentTp;
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) core;
    P2CONST(Os_TpConfigType, AUTOMATIC, OS_CONST) coreTp;

    core = Os_ThreadGetCore(Thread);                                                                                    /* SBSW_OS_FC_PRECONDITION */
    coreTp = Os_CoreAsrGetTimingProtection(core);                                                                       /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */
    currentTp = Os_ThreadGetTpConfig(Thread);                                                                           /* SBSW_OS_FC_PRECONDITION */

    Os_TpThreadInit(coreTp, currentTp);                                                                                 /* SBSW_OS_TRD_TPTHREADINIT_001 */
  }

  /* #70 Initialize the memory protection. */
  Os_MpThreadInit(Thread->MpAccessRightsInitial, &(Thread->Dyn->MpAccessRights));                                       /* SBSW_OS_TRD_MPTHREADINIT_001 */

  /* #80 If the given thread shall be initialized during startup: */
  if(Thread->InitDuringStartUp != FALSE)                                                                                /* SBSW_OS_FC_PRECONDITION */
  {
    /* #90 Initialize its hardware context, so that it will start with a fresh stack and at function entry,
     *     if resumed. */
    Os_Hal_ContextInit(Thread->ContextConfig, Thread->Context);                                                         /* SBSW_OS_TRD_HAL_CONTEXTINIT_001 */
  }

  /* #100 Initialize the tracing data of this thread. */
  Os_TraceThreadInit(Thread->Trace);                                                                                    /* SBSW_OS_TRD_TRACETHREADINIT_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadInit2()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadInit2,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  /* #10 Initialize current application. */
  Thread->Dyn->Application = Thread->OwnerApplication;                                                                  /* SBSW_OS_TRD_THREADGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_ThreadResetAndResume()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadResetAndResume,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Next
))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) current;

  current = Os_CoreGetThread();

  /* Check that the function is called from a task. */
  Os_Assert((Os_StdReturnType)(Os_ThreadIsTask(current) != 0));                                                         /* SBSW_OS_TRD_THREADISTASK_001 */

  /* #10 Release all services called by the thread. */
  Os_ServiceCallForceRelease(&(current->Dyn->ServiceCalls));                                                            /* SBSW_OS_TRD_SERVICECALLFORCERELEASE_001 */

  /* #20 Perform stack overflow check. */
  Os_StackOverflowCheck(current->Stack);                                                                                /* SBSW_OS_TRD_STACKOVERFLOWCHECK_001 */

  /* #30 Tell timing protection module to resume timing protection for Next. */
  {
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) core;
    P2CONST(Os_TpConfigType, AUTOMATIC, OS_CONST) configTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) nextTp;

    core = Os_ThreadGetCore(Next);                                                                                      /* SBSW_OS_FC_PRECONDITION */
    configTp = Os_CoreAsrGetTimingProtection(core);                                                                     /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */
    nextTp = Os_ThreadGetTpConfig(Next);                                                                                /* SBSW_OS_FC_PRECONDITION */
    Os_TpResetAndResume(configTp, nextTp, Next);                                                                        /* SBSW_OS_TRD_TPRESETANDRESUME_001 */
  }

  /* #40 Resume memory protection access rights of Next. */
  Os_MpSwitch(current->Dyn->MpAccessRights, Next->Dyn->MpAccessRights);                                                 /* SBSW_OS_TRD_MPSWITCH_001 */

  /* #50 Set the current thread pointer. */
  Os_CoreSetThread(Next);                                                                                               /* SBSW_OS_FC_PRECONDITION */

  /* #60 Resume the hardware context of the next thread. */
  Os_Hal_ContextResetAndResume(current->ContextConfig, current->Context, Next->Context); /* function never returns! */  /* SBSW_OS_TRD_HAL_CONTEXTRESETANDRESUME_001 */

  /* Never reached */
  Os_ErrKernelPanic(); /* function never returns! */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadStartFirst()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadStartFirst,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Next
))
{
  P2CONST(Os_TpConfigType, TYPEDEF, OS_CONST) configTp;
  P2CONST(Os_TpThreadConfigType, TYPEDEF, OS_CONST) threadTp;

  configTp = Os_CoreAsrGetTimingProtection(Os_ThreadGetCore(Next));                                                     /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */ /* SBSW_OS_FC_PRECONDITION */
  threadTp = Os_ThreadGetTpConfig(Next);                                                                                /* SBSW_OS_FC_PRECONDITION */

  /* #10 Tell timing protection module to resume timing protection for Next. */
  Os_TpResetAndResume(configTp, threadTp, Next);                                                                        /* SBSW_OS_TRD_TPRESETANDRESUME_001 */

  /* #20 Set memory protection access rights of Next. */
  Os_MpSwitchTo(Next->Dyn->MpAccessRights);                                                                             /* SBSW_OS_TRD_MPSWITCHTO_001 */

  /* #30 Set the current thread pointer. */
  Os_CoreSetThread(Next);                                                                                               /* SBSW_OS_FC_PRECONDITION */

  /* #40 Resume the hardware context of the first thread. */
  Os_Hal_ContextFirstResume(Next->Context); /* function never returns! */                                               /* SBSW_OS_TRD_HAL_CONTEXTFIRSTRESUME_001 */

  /* Never reached. */
  Os_ErrKernelPanic(); /* function never returns! */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadCleanupAndResume()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadCleanupAndResume,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Next
))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) current;

  current = Os_CoreGetThread();

  /* Check that the function is not called from a task. */
  Os_Assert((Os_StdReturnType)(Os_ThreadIsTask(current) == 0));                                                         /* SBSW_OS_TRD_THREADISTASK_001 */

  /* #10 Release all services called by the thread. */
  Os_ServiceCallForceRelease(&(current->Dyn->ServiceCalls));                                                            /* SBSW_OS_TRD_SERVICECALLFORCERELEASE_001 */

  /* #20 Perform stack overflow check. */
  Os_StackOverflowCheck(current->Stack);                                                                                /* SBSW_OS_TRD_STACKOVERFLOWCHECK_001 */

  /* #30 Tell timing protection module to resume timing protection for Next. */
  {
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) core;
    P2CONST(Os_TpConfigType, AUTOMATIC, OS_CONST) configTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) nextTp;

    core = Os_ThreadGetCore(Next);                                                                                      /* SBSW_OS_FC_PRECONDITION */
    configTp = Os_CoreAsrGetTimingProtection(core);                                                                     /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */
    nextTp = Os_ThreadGetTpConfig(Next);                                                                                /* SBSW_OS_FC_PRECONDITION */
    Os_TpResetAndResume(configTp, nextTp, Next);                                                                        /* SBSW_OS_TRD_TPRESETANDRESUME_001 */
  }

  /* #40 Resume memory protection access rights of Next. */
  Os_MpSwitch(current->Dyn->MpAccessRights, Next->Dyn->MpAccessRights);                                                 /* SBSW_OS_TRD_MPSWITCH_001 */

  /* #50 Set the current thread pointer. */
  Os_CoreSetThread(Next);                                                                                               /* SBSW_OS_FC_PRECONDITION */

  /* #60 Cleanup the current hardware context and resume the hardware context of the next thread. */
  Os_Hal_ContextReturn(current->Context, Next->Context);                                                                /* SBSW_OS_TRD_HAL_CONTEXTRETURN_001 */

  /* Never reached */
  Os_ErrKernelPanic(); /* function never returns! */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadKill()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadKill,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  /* #10 Initialize current application. */
  Thread->Dyn->Application = Thread->OwnerApplication;                                                                  /* SBSW_OS_TRD_THREADGETDYN_001 */

  /* #20 Initialize current context. */
  Thread->Dyn->CallContext = Thread->InitialCallContext;                                                                /* SBSW_OS_TRD_THREADGETDYN_001 */

  /* #30 Release all services called by the thread. */
  Os_ServiceCallForceRelease(&(Thread->Dyn->ServiceCalls));                                                             /* SBSW_OS_TRD_SERVICECALLFORCERELEASE_001 */

  /* #40 Release all locks and resources, which are hold by the thread. */
  Os_ThreadLocksForceRelease(Thread);                                                                                   /* SBSW_OS_FC_PRECONDITION */

  /* #50 Reset timing protection. */
  {
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) currentTp;

    currentTp = Os_ThreadGetTpConfig(Thread);                                                                           /* SBSW_OS_FC_PRECONDITION */

    Os_TpThreadKill(currentTp);                                                                                         /* SBSW_OS_TRD_TPTHREADKILL_001 */
  }

  /* #60 Initialize the memory protection. */
  Os_MpThreadInit(Thread->MpAccessRightsInitial, &(Thread->Dyn->MpAccessRights));                                       /* SBSW_OS_TRD_MPTHREADINIT_001 */

  /* #70 If the given thread is not the current thread: */
  {
    P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) current;

    current = Os_CoreGetThread();

    if(OS_LIKELY(Thread != current))
    {
      /* #80 If the given thread is a task: */
      if(Os_ThreadIsTask(Thread) != 0)                                                                                  /* SBSW_OS_FC_PRECONDITION */
      {
        /* #90 Reset its hardware context. */
        Os_Hal_ContextReset(Thread->ContextConfig, Thread->Context);                                                    /* SBSW_OS_TRD_HAL_CONTEXTRESET_001 */
      }
      /* #100 Otherwise: */
      else
      {
        /* #110 Abort the threads context. Execute the return function the next time it will be resumed. */
        Os_Hal_ContextAbort(Thread->ContextConfig, Thread->Context);                                                    /* SBSW_OS_TRD_HAL_CONTEXTABORT_001 */
      }
    }
  }
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadSwitch()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadSwitch,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Current,
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Next
))
{
  /* #10 Perform stack overflow check. */
  Os_StackOverflowCheck(Current->Stack);                                                                                /* SBSW_OS_TRD_STACKOVERFLOWCHECK_001 */

  /* #20 Tell timing protection module to switch. */
  {
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) core;
    P2CONST(Os_TpConfigType, AUTOMATIC, OS_CONST) configTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) currentTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) nextTp;

    core = Os_ThreadGetCore(Next);                                                                                      /* SBSW_OS_FC_PRECONDITION */
    configTp = Os_CoreAsrGetTimingProtection(core);                                                                     /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */
    currentTp = Os_ThreadGetTpConfig(Current);                                                                          /* SBSW_OS_FC_PRECONDITION */
    nextTp = Os_ThreadGetTpConfig(Next);                                                                                /* SBSW_OS_FC_PRECONDITION */
    Os_TpSwitch(configTp, currentTp, nextTp, Next);                                                                     /* SBSW_OS_TRD_TPSWITCH_001 */
  }

  /* #30 Resume memory protection access rights of Next. */
  Os_MpSwitch(Current->Dyn->MpAccessRights, Next->Dyn->MpAccessRights);                                                 /* SBSW_OS_TRD_MPSWITCH_002 */

  /* #40  Switch current thread pointer. */
  Os_CoreSetThread(Next);                                                                                               /* SBSW_OS_FC_PRECONDITION */

  /* #50 Perform a hardware context switch. */
  Os_Hal_ContextSwitch(Current->Context, Next->Context);                                                                /* SBSW_OS_TRD_HAL_CONTEXTSWITCH_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadSuspendAndStart()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_ThreadSuspendAndStart,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Current,
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Next
))
{
  Os_StackOverflowCheck(Current->Stack);                                                                                /* SBSW_OS_TRD_STACKOVERFLOWCHECK_001 */

  /* #10 Tell timing protection module to switch. */
  {
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) core;
    P2CONST(Os_TpConfigType, AUTOMATIC, OS_CONST) configTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) currentTp;
    P2CONST(Os_TpThreadConfigType, AUTOMATIC, OS_CONST) nextTp;

    core = Os_ThreadGetCore(Next);                                                                                      /* SBSW_OS_FC_PRECONDITION */
    configTp = Os_CoreAsrGetTimingProtection(core);                                                                     /* SBSW_OS_TRD_COREASRGETTIMINGPROTECTION_001 */
    currentTp = Os_ThreadGetTpConfig(Current);                                                                          /* SBSW_OS_FC_PRECONDITION */
    nextTp = Os_ThreadGetTpConfig(Next);                                                                                /* SBSW_OS_FC_PRECONDITION */
    Os_TpSwitch(configTp, currentTp, nextTp, Next);                                                                     /* SBSW_OS_TRD_TPSWITCH_001 */
  }

  /* #20 Resume memory protection access rights of Next. */
  Os_MpSwitch(Current->Dyn->MpAccessRights, Next->Dyn->MpAccessRights);                                                 /* SBSW_OS_TRD_MPSWITCH_002 */

  /* #30  Switch current thread pointer. */
  Os_CoreSetThread(Next);                                                                                               /* SBSW_OS_FC_PRECONDITION */

  /* #40 Prepare context of next thread. */
  Os_Hal_ContextInit(Next->ContextConfig, Next->Context);                                                               /* SBSW_OS_TRD_HAL_CONTEXTINIT_001 */

  /* #50 Set parameter for the entry function, currently only used for hooks (hook thread pointer). */
  Os_Hal_ContextSetParameter(Next->Context, Next);                                                                      /* SBSW_OS_TRD_HAL_CONTEXTSETPARAMETER_001 */

  /* #60 Perform context switch. */
  Os_Hal_ContextCallOnStack(Current->Context, Next->Context);                                                           /* SBSW_OS_TRD_HAL_CONTEXTCALLONSTACK_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_ThreadGetAccessRights()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_AccessCheckConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetAccessRights,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->AccessRights;
}

/***********************************************************************************************************************
 *  Os_ThreadGetMpAccessRights()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_MpAccessRightsType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_ThreadGetMpAccessRights,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return Thread->Dyn->MpAccessRights;
}

/***********************************************************************************************************************
 *  Os_ThreadSetMpAccessRights()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void,
OS_CODE, OS_ALWAYS_INLINE, Os_ThreadSetMpAccessRights,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2CONST(Os_MpAccessRightsType, AUTOMATIC, OS_CONST) AccessRights
))
{
  Thread->Dyn->MpAccessRights = AccessRights;                                                                           /* SBSW_OS_TRD_THREADGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_ThreadSetInterruptState()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void,
OS_CODE, OS_ALWAYS_INLINE, Os_ThreadSetInterruptState,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread,
  P2CONST(Os_Hal_InterruptStateType, AUTOMATIC, OS_CONST) InterruptState
))
{
  Os_Hal_ContextSetInterruptState(Thread->Context, InterruptState);                                                     /* SBSW_OS_FC_PRECONDITION */
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_THREAD)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_THREAD_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Thread.h
 **********************************************************************************************************************/

