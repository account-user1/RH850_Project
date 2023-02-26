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
 * \ingroup Os_Kernel
 * \addtogroup Os_Core
 * \{
 *
 * \file
 * \brief       OS services for execution control of one or multiple cores.
 * \details     --no details--
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined (OS_CORE_H)                                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_CORE_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_CoreInt.h"
# include "Os_Core_Cfg.h"

/* Os module dependencies */
# include "Os_Lcfg.h"
# include "Os_Deque.h"
# include "Os_Hook.h"
# include "Os_Error.h"
# include "Os_Scheduler.h"
# include "Os_Interrupt.h"
# include "Os_Stack.h"
# include "Os_Spinlock.h"
# include "Os_Barrier.h"
# include "Os_Resource.h"
# include "Os_Application.h"
# include "Os_ServiceFunction.h"
# include "Os_Common.h"
# include "Os_XSignal.h"
# include "Os_TimingProtection.h"
# include "Os_Ioc.h"
# include "Os_MemoryProtection.h"
# include "Os_Trace.h"
# include "Os_Isr.h"
# include "Os_Task.h"

/* Os HAL dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Core.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_CORE)
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
 *  Os_CoreAsrGetDyn()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE, Os_CoreAsrGetDyn,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->Dyn;
}

/***********************************************************************************************************************
 *  Os_CoreAsrGetTimingProtection()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_TpConfigType, TYPEDEF, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreAsrGetTimingProtection,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->TimingProtection;
}

/***********************************************************************************************************************
 *  Os_CoreAsrGetTrace()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2VAR(Os_TraceCoreType, TYPEDEF, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE, Os_CoreAsrGetTrace,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->Trace;
}

/***********************************************************************************************************************
 *  Os_Core2AsrCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_Core2AsrCore,
(
  P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) Core
))
{
  Os_Assert((Os_StdReturnType)(Core->IsAsrCore == TRUE));
  return (P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST))Core;                                                      /* PRQA S 0310 */ /* MD_Os_0310 */
}

/***********************************************************************************************************************
 *  Os_CoreId2Core()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreId2Core,
(
  CoreIdType CoreId
))
{
  Os_Assert(Os_ErrIsValueLo((uint32)CoreId, (uint32)OS_COREID_COUNT));
  return OsCfg_CoreRefs[CoreId];                                                                                        /* PRQA S 3689 */ /* MD_Os_3689 */
}

/***********************************************************************************************************************
 *  Os_CoreGetCurrentCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE
P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetCurrentCore,
(
  void
))
{
  return OsCfg_CorePhysicalRefs[Os_Hal_CoreGetId()];
}

/***********************************************************************************************************************
 *  Os_CoreGetId()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(
OS_LOCAL_INLINE CoreIdType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetId,
(
  P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return (CoreIdType)Core->Id;
}

/***********************************************************************************************************************
 *  Os_CoreIsAsrCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreIsAsrCore,
(
  P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return (Os_StdReturnType)(Core->IsAsrCore == TRUE);
}

/***********************************************************************************************************************
 *  Os_CoreCheckIsAsrCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreCheckIsAsrCore,
(
  P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Os_ErrExtendedCheck(Os_CoreIsAsrCore(Core));                                                                   /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreCheckStartedAsAsr()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreCheckStartedAsAsr,
(
  P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)(Core->Status->ActivationState == OS_CORESTATE_ACTIVATED_ASR));
}

/***********************************************************************************************************************
 *  Os_CoreCheckOsIsStarted()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* COV_OS_CORELIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreCheckOsIsStarted,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))                                                                                                                      /* COV_OS_CORELIBFUNCT */
{
  return Os_ErrExtendedCheck(Os_CoreOsIsStarted(Core));                                                                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreOsIsStarted()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreOsIsStarted,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return (Os_StdReturnType)(Os_CoreAsrGetAsrStatus(Core)->OsState == OS_COREOSSTATE_STARTED);                           /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreOsIsPrestarted()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreOsIsPrestarted,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return (Os_StdReturnType)(Os_CoreAsrGetAsrStatus(Core)->OsState == OS_COREOSSTATE_PRESTARTTASK);                      /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreAsrGetAsrStatus()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2VAR(Os_CoreAsrStatusType volatile, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,   /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreAsrGetAsrStatus,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return ((P2VAR(Os_CoreAsrStatusType volatile, AUTOMATIC, OS_VAR_NOINIT))Core->Core.Status);                           /* PRQA S 0310 */ /* MD_Os_0310 */
}

/***********************************************************************************************************************
 *  Os_CoreCheckId()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_CoreCheckId,
(
  CoreIdType CoreId
))
{
  return Os_ErrExtendedCheck(Os_ErrIsValueLo((uint32)CoreId, (uint32)OS_COREID_COUNT));
}

/***********************************************************************************************************************
 *  Os_CoreGetKernelStack()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetKernelStack,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->KernelStack;
}

/***********************************************************************************************************************
 *  Os_CoreGetAsrCoreIdx()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_CoreAsrCoreIdx, OS_CODE,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreGetAsrCoreIdx,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->CoreIdx;
}

/***********************************************************************************************************************
 *  Os_CoreGetXSig()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_XSigConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetXSig,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->XSignal;
}

/***********************************************************************************************************************
 *  Os_CoreCheckIsLocalCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreCheckIsLocalCore,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST)  OwnerCore,
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST)  CallerCore
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)(OwnerCore == CallerCore));
}

/***********************************************************************************************************************
 *  Os_CoreGetHookInfo()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2VAR(Os_HookInfoType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE,                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreGetHookInfo,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return &(Os_CoreAsrGetDyn(Core)->HookInfo);                                                                           /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreGetStartupHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetStartupHook,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->StartupHookRef;
}

/***********************************************************************************************************************
 *  Os_CoreGetShutdownHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetShutdownHook,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->ShutdownHookRef;
}

/***********************************************************************************************************************
 *  Os_CoreGetProtectionHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_HookProtectionHookConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetProtectionHook,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->ProtectionHookRef;
}

/***********************************************************************************************************************
 *  Os_CoreGetErrorHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetErrorHook,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->ErrorHookRef;
}

/***********************************************************************************************************************
 *  Os_CoreGetIdleTask()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetIdleTask,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->IdleTask;
}

/***********************************************************************************************************************
 *  Os_CoreGetKernelApp()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_AppConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_CoreGetKernelApp,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->KernelApp;
}

/***********************************************************************************************************************
 *  Os_CoreGetOsMpAccessRights()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* COV_OS_UNSUPPORTED88830 *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_MpAccessRightsType, TYPEDEF, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_CoreGetOsMpAccessRights,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))                                                                                                                      /* COV_OS_UNSUPPORTED88830 */
{
  return Core->OsMpAccessRights;
}

/***********************************************************************************************************************
 *  Os_CoreGetScheduler()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,
Os_CoreGetScheduler,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return Core->Scheduler;
}

/***********************************************************************************************************************
 *  Os_CoreGetLastError()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2VAR(Os_ErrorType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE,
Os_CoreGetLastError,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  return &(Os_CoreAsrGetDyn(Core)->LastError);                                                                          /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsPush()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsPush,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core,
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) InterruptedThread
))
{
  P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT) coreDyn;

  coreDyn = Os_CoreAsrGetDyn(Core);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  if(OS_UNLIKELY(coreDyn->InterruptedThreadsCounter >= OS_MAX_INTERRUPTEDTHREADS))                                      /* COV_OS_INVSTATE */
  {
    Os_ErrKernelPanic();
  }

  coreDyn->InterruptedThreads[coreDyn->InterruptedThreadsCounter] = InterruptedThread;                                  /* SBSW_OS_CORE_COREASR_INTERRUPTEDTHREADS_001 */
  coreDyn->InterruptedThreadsCounter++;                                                                                 /* SBSW_OS_CORE_COREASR_DYN_001 */
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsPop()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsPop,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT) coreDyn;

  coreDyn = Os_CoreAsrGetDyn(Core);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  if(OS_UNLIKELY(coreDyn->InterruptedThreadsCounter == 0))                                                              /* COV_OS_INVSTATE */
  {
    Os_ErrKernelPanic();
  }

  coreDyn->InterruptedThreadsCounter--;                                                                                 /* SBSW_OS_CORE_COREASR_DYN_001 */

  return coreDyn->InterruptedThreads[coreDyn->InterruptedThreadsCounter];
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsGetNumber()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* COV_OS_CORELIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_CoreThreadIdx, OS_CODE, OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsGetNumber,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))                                                                                                                      /* COV_OS_CORELIBFUNCT */
{
  P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT) coreDyn;

  coreDyn = Os_CoreAsrGetDyn(Core);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  Os_Assert((Os_StdReturnType)(coreDyn->InterruptedThreadsCounter < OS_MAX_INTERRUPTEDTHREADS));

  return coreDyn->InterruptedThreadsCounter;
}

/***********************************************************************************************************************
 *  Os_CoreThreadGetByContext()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_CoreThreadGetByContext,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core,
  Os_CallContextType Context
))
{
  P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST) currentThread;
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) result;

  currentThread = Os_CoreGetThread();

  /* #10 Check whether the current thread matches the context. */
  if(Os_ThreadIsAnyInitialContext(currentThread, Context) != 0)                                                         /* SBSW_OS_CORE_THREADISANYINITIALCONTEXT_001 */
  {
    result = currentThread;
  }
  /* #20 Otherwise search the list of interrupted threads. */
  else
  {
    P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST) interruptedThread;
    Os_CoreThreadIdx iterator;
    Os_CoreThreadIdx iteratorEnd;

    result = NULL_PTR;

    iterator = Os_CoreInterruptedThreadsGetTopIdx(Core);                                                                /* SBSW_OS_FC_PRECONDITION */
    iteratorEnd = Os_CoreInterruptedThreadsGetBottomIdx();

    while(iterator != iteratorEnd)
    {
      interruptedThread = Os_CoreInterruptedThreadsGet(Core, iterator);                                                 /* SBSW_OS_FC_PRECONDITION */

      if(Os_ThreadIsAnyInitialContext(interruptedThread, Context) != 0)                                                 /* SBSW_OS_CORE_THREADISANYINITIALCONTEXT_002 */
      {
        result = interruptedThread;
        break;
      }

      iterator = Os_CoreInterruptedThreadsMoveDown(iterator);
    }
  }

  return result;
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsGetTop()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_CoreThreadIdx, OS_CODE,
OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsGetTopIdx,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
))
{
  P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT) coreDyn;

  coreDyn = Os_CoreAsrGetDyn(Core);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  Os_Assert((Os_StdReturnType)(coreDyn->InterruptedThreadsCounter < OS_MAX_INTERRUPTEDTHREADS));

  return coreDyn->InterruptedThreadsCounter;
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsGet()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsGet,
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core,
  Os_CoreThreadIdx Idx
))
{
  P2VAR(Os_CoreAsrType, AUTOMATIC, OS_VAR_NOINIT) coreDyn;

  coreDyn = Os_CoreAsrGetDyn(Core);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  if(OS_UNLIKELY((Idx > coreDyn->InterruptedThreadsCounter) || (Idx == 0)))                                             /* COV_OS_INVSTATE */
  {
    Os_ErrKernelPanic();
  }

  return coreDyn->InterruptedThreads[Idx-1];                                                                            /* PRQA S 3689 */ /* MD_Os_3689_Check */
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsGetBottom()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_CoreThreadIdx, OS_CODE,
OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsGetBottomIdx, (void))
{
  return (Os_CoreThreadIdx)0;
}

/***********************************************************************************************************************
 *  Os_CoreInterruptedThreadsMoveDown()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_CoreThreadIdx, OS_CODE,
OS_ALWAYS_INLINE, Os_CoreInterruptedThreadsMoveDown,
(
    Os_CoreThreadIdx Iterator
))
{
  /* #10 Return the decremented iterator. */
  return (Iterator - (Os_CoreThreadIdx)1);
}

/***********************************************************************************************************************
 *  Os_CoreSetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_CoreSetThread,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_Hal_CoreSetThread(Os_SystemGetCore2Thread(Os_SystemGet()), Thread);                                                /* SBSW_OS_CORE_SYSTEMGETCORE2THREAD_001 */ /* SBSW_OS_CORE_HAL_CORESETTHREAD_001 */
}

/***********************************************************************************************************************
 *  Os_CoreGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_CoreGetThread,
(
  void
))
{
  return Os_Hal_CoreGetThread(Os_SystemGetCore2Thread(Os_SystemGet()));                                                 /* SBSW_OS_CORE_SYSTEMGETCORE2THREAD_001 */ /* SBSW_OS_CORE_HAL_COREGETTHREAD_001 */
}

/***********************************************************************************************************************
 *  Os_SystemGet()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_SystemConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_SystemGet,
(
  void
))
{
  return &OsCfg_System;
}

/***********************************************************************************************************************
 *  Os_SystemGetCore2Thread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_Hal_Core2ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_SystemGetCore2Thread,
(
  P2CONST(Os_SystemConfigType, AUTOMATIC, OS_CONST) System
))
{
  return System->Core2Thread;
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_CORE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_CORE_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Core.h
 **********************************************************************************************************************/

