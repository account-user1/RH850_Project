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
 * \addtogroup Os_Stack
 * \{
 *
 * \file
 * \brief       Implementation of stack module.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_STACK_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Stack_Cfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Stack.h"

/* Os kernel module dependencies */
#include "Os_Error.h"
#include "Os_Task.h"
#include "Os_Isr.h"
#include "Os_Hook.h"

/* Os hal dependencies */

/***********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_StackInitInternal()
 **********************************************************************************************************************/
/*! \brief          Initialize the given stack.
 *  \details
 *  The kernel uses this function to provide:
 *  - Stack usage measurement
 *  - Stack monitoring
 *
 *  \param[in,out]  Stack           The stack which shall be initialized
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different stacks.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_StackInitInternal                                                                                /* PRQA S 3447 */ /* MD_Os_3447 */
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
);                                                                                                                      /* PRQA S 0777 */ /* MD_Os_0777_Decl */

/***********************************************************************************************************************
 *  Os_StackIsPartOfStack()
 **********************************************************************************************************************/
/*! \brief        Determines whether a given address is part of the stack or not.
 *  \details      --no details--
 *
 *  \param[in]    Stack           The stack which shall be initialized
 *  \param[in]    CheckAddress    The address to be checked.
 *
 *  \retval       !0    The given address is part of the stack.
 *  \retval       0     The given address is not part of the stack.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_StackIsPartOfStack,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack,
  P2CONST(Os_Hal_StackType, AUTOMATIC, OS_CONST) CheckAddress
));

/***********************************************************************************************************************
 *  Os_StackMonitoringInit()
 **********************************************************************************************************************/
/*! \brief        Initializes the stack for monitoring.
 *  \details      This function is called in Init-Step3 and Init-Step4 in order to handle the situation that
 *                Init-Step3 is optional.
 *
 *  \param[in]    Stack   The stack which shall be initialized.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE for different stacks.
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid, if stack monitoring is enabled.
 *  \pre          Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE,
OS_ALWAYS_INLINE, Os_StackMonitoringInit,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
));

/***********************************************************************************************************************
 *  Os_StackFill()
 **********************************************************************************************************************/
/*! \brief        Initializes the stack for stack measurement.
 *  \details      --no details--
 *
 *  \param[in]    Stack   The stack which shall be initialized.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE for different stacks.
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE,
OS_ALWAYS_INLINE, Os_StackFill,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
));

/***********************************************************************************************************************
 *  Os_StackGetUsageLocal()
 **********************************************************************************************************************/
/*! \brief        Get the current usage of the given stack.
 *  \details      --no details--
 *
 *  \param[in]    Stack           The stack to query.
 *
 *  \return       Stack usage in bytes.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          The given stack is assigned to the local core.
 **********************************************************************************************************************/
OS_LOCAL FUNC(uint32, OS_CODE) Os_StackGetUsageLocal
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
);

/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_StackIsPartOfStack()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_StackIsPartOfStack,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack,
  P2CONST(Os_Hal_StackType, AUTOMATIC, OS_CONST) CheckAddress
))
{
  /* #10 Return whether CheckAddress is within stack's LowAddress and HighAddress. */
  return (Os_StdReturnType)((CheckAddress >= Stack->LowAddress) && (CheckAddress <= Stack->HighAddress));               /* COV_OS_STARTUPSTACK_NOT_DEFINED */
}

/***********************************************************************************************************************
 *  Os_StackMonitoringInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_StackMonitoringInit,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
))
{
  if(Os_StackIsMonitoringEnabled() != 0)
  {
    P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) endOfStack;

    /* #10 Set last word of stack (stack end) to stack fill pattern. */
    endOfStack = Os_Hal_StackEndGet(Stack->LowAddress, Stack->HighAddress);                                             /* SBSW_OS_ST_HAL_STACKENDGET_001 */
    *endOfStack = OS_HAL_STACK_FILL_PATTERN;                                                                            /* SBSW_OS_ST_HAL_STACKENDGET_002 */
  }
}

/***********************************************************************************************************************
 *  Os_StackFill()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_StackFill,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
))
{
  if(Os_StackIsMeasurementEnabled() != 0)
  {
    P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) iterator;
    P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) iteratorEnd;
    P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) topOfStack;

    iterator = Os_Hal_StackEndGet(Stack->LowAddress, Stack->HighAddress);                                               /* SBSW_OS_ST_HAL_STACKENDGET_001 */
    topOfStack = Os_Hal_StackTopGet();

    /* #10 If the current thread is not running on the given stack: */
    if(OS_LIKELY(Os_StackIsPartOfStack(Stack, topOfStack) == 0))                                                        /* COV_OS_STARTUPSTACK_NOT_DEFINED */ /* SBSW_OS_ST_STACKISPARTOFSTACK_001 */
    {
      /* #20 Fill the whole stack. */
      iteratorEnd = Os_Hal_StackBottomGet(Stack->LowAddress, Stack->HighAddress);                                       /* SBSW_OS_ST_HAL_STACKBOTTOMGET_001 */
      /* The iteration is aborted after the bottom address was initialized. */
      iteratorEnd = Os_Hal_StackPointerMoveDown(iteratorEnd);                                                           /* SBSW_OS_ST_HAL_STACKPOINTERMOVEDOWN_001 */
    }
    /* #30 Otherwise: */
    else
    {
      /* #40 Fill the current stack until the current stack's top position. */
      iteratorEnd = topOfStack;
    }

    while(iterator != iteratorEnd)
    {
      *iterator = OS_HAL_STACK_FILL_PATTERN;                                                                            /* SBSW_OS_ST_ITERATOR_001 */
      iterator = Os_Hal_StackPointerMoveDown(iterator);                                                                 /* SBSW_OS_ST_HAL_STACKPOINTERMOVEDOWN_001 */
    }
  }
}

/***********************************************************************************************************************
 *  Os_StackGetUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_LOCAL FUNC(uint32, OS_CODE) Os_StackGetUsageLocal
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
)
{
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) iterator;
  P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) iteratorEnd;

  /* #10 Get the stack's end and bottom address. */
  iterator = Os_Hal_StackEndGet(Stack->LowAddress, Stack->HighAddress);                                                 /* SBSW_OS_ST_HAL_STACKENDGET_001 */

  iteratorEnd = Os_Hal_StackBottomGet(Stack->LowAddress, Stack->HighAddress);                                           /* SBSW_OS_ST_HAL_STACKBOTTOMGET_001 */
  /* The iteration is aborted after the bottom address has been checked. */
  iteratorEnd = Os_Hal_StackPointerMoveDown(iteratorEnd);                                                               /* SBSW_OS_ST_HAL_STACKPOINTERMOVEDOWN_001 */

  /* #20 Iterate from the stack's top to the bottom, while the iterator dereferences to the stack fill pattern. */
  while(iterator != iteratorEnd)
  {
    if(*iterator == OS_HAL_STACK_FILL_PATTERN)
    {
      /* #30 Move the iterator one stack entry down. */
      iterator = Os_Hal_StackPointerMoveDown(iterator);                                                                 /* SBSW_OS_ST_HAL_STACKPOINTERMOVEDOWN_001 */
    }
    else
    {
      break;
    }
  }

  /* #40 Calculate the stack usage base on the iterator. */
  return Os_Hal_StackCalculateUsage(iteratorEnd, iterator);                                                             /* SBSW_OS_ST_HAL_STACKCALCULATEUSAGE_001 */
}

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_StackInitInternal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_StackInitInternal
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
)
{
  /* #10 Initialize each stack element with the stack fill pattern. */
  Os_StackFill(Stack);                                                                                                  /* SBSW_OS_FC_PRECONDITION */

  /* #20 Initialize stack monitoring. */
  Os_StackMonitoringInit(Stack);                                                                                        /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_StackGetTaskStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetTaskStackUsageLocal
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_TaskGetThread(Task));                                                                    /* SBSW_OS_ST_THREADGETSTACK_001 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetISRStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetISRStackUsageLocal
(
  P2CONST(Os_IsrConfigType, AUTOMATIC, OS_CONST) Isr
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_IsrGetThread(Isr));                                                                      /* SBSW_OS_ST_THREADGETSTACK_002 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetKernelStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetKernelStackUsageLocal
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_CoreGetKernelStack(Core);                                                                                  /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_002 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetStartupHookStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetStartupHookStackUsageLocal
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_HookCallbackGetThread(Os_CoreGetStartupHook(Core)));                                     /* SBSW_OS_ST_THREADGETSTACK_003 */ /* SBSW_OS_ST_HOOKCALLBACKGETTHREAD_001 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetErrorHookStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetErrorHookStackUsageLocal
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_HookStatusHookGetThread(Os_CoreGetErrorHook(Core)));                                     /* SBSW_OS_ST_THREADGETSTACK_004 */ /* SBSW_OS_ST_HOOKSTATUSHOOKGETTHREAD_001 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetShutdownHookStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetShutdownHookStackUsageLocal
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_HookStatusHookGetThread(Os_CoreGetShutdownHook(Core)));                                  /* SBSW_OS_ST_THREADGETSTACK_005 */ /* SBSW_OS_ST_HOOKSHUTDOWNHOOKGETTHREAD_001 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_StackGetProtectionHookStackUsageLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_StackGetProtectionHookStackUsageLocal
(
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) Core
)
{
  uint32 result;
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

  stack = Os_ThreadGetStack(Os_HookProtectionHookGetThread(Os_CoreGetProtectionHook(Core)));                            /* SBSW_OS_ST_THREADGETSTACK_006 */ /* SBSW_OS_ST_HOOKPROTECTIONHOOKGETTHREAD_001 */ /* SBSW_OS_FC_PRECONDITION */

  result = Os_StackGetUsageLocal(stack);                                                                                /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

  return result;
}

/***********************************************************************************************************************
 *  Os_Api_GetTaskStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetTaskStackUsage
(
  TaskType TaskID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_TaskCheckId(TaskID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    /* #20 Get the stack object and determine the stack usage. */
    P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
    P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) targetThread;
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;

    targetThread = Os_TaskGetThread(Os_TaskId2Task(TaskID));                                                            /* SBSW_OS_ST_TASKGETTHREAD_001 */
    targetCore = Os_ThreadGetCore(targetThread);                                                                        /* SBSW_OS_ST_THREADGETCORE_001 */
    currentThread = Os_CoreGetThread();
    localCore = Os_ThreadGetCore(currentThread);                                                                        /* SBSW_OS_ST_THREADGETCORE_003 */

    if(OS_LIKELY(localCore == targetCore))
    {
      P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

      stack = Os_ThreadGetStack(targetThread);                                                                          /* SBSW_OS_ST_THREADGETSTACK_001 */

      result = Os_StackGetUsageLocal(stack);                                                                            /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

      status = OS_STATUS_OK;
    }
    else
    {
      status = Os_XSigSend_GetTaskStackUsage(targetCore, currentThread, TaskID, &result);                               /* SBSW_OS_ST_XSIGSEND_001 */
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetTaskStackUsage(status, TaskID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetISRStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetISRStackUsage
(
  ISRType IsrID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_IsrCheckId(IsrID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    /* #20 Get the stack object and determine the stack usage. */
    P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
    P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) targetThread;
    P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;

    targetThread = Os_IsrGetThread(Os_IsrId2Isr(IsrID));                                                                /* SBSW_OS_ST_ISRGETTHREAD_001 */
    targetCore = Os_ThreadGetCore(targetThread);                                                                        /* SBSW_OS_ST_THREADGETCORE_001 */
    currentThread = Os_CoreGetThread();
    localCore = Os_ThreadGetCore(currentThread);                                                                        /* SBSW_OS_ST_THREADGETCORE_003 */

    if(OS_LIKELY(localCore == targetCore))
    {
      P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

      stack = Os_ThreadGetStack(targetThread);                                                                          /* SBSW_OS_ST_THREADGETSTACK_002 */

      result = Os_StackGetUsageLocal(stack);                                                                            /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

      status = OS_STATUS_OK;
    }
    else
    {
      status = Os_XSigSend_GetISRStackUsage(targetCore, currentThread, IsrID, &result);                                 /* SBSW_OS_ST_XSIGSEND_001 */
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetISRStackUsage(status, IsrID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetKernelStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetKernelStackUsage
(
  CoreIdType CoreID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_CoreCheckId(CoreID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) core;

    core = Os_CoreId2Core(CoreID);

    if(OS_UNLIKELY(Os_CoreCheckIsAsrCore(core) == OS_CHECK_FAILED))                                                     /* SBSW_OS_ST_CORECHECKISASRCORE_001 */
    {
      result = 0;
      status = OS_STATUS_ID_TYPE_1;
    }
    else
    {
      /* #20 Get the stack object and determine the stack usage. */
      P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;

      currentThread = Os_CoreGetThread();
      targetCore = Os_Core2AsrCore(core);                                                                               /* SBSW_OS_ST_CORE2ASRCORE_001 */
      localCore = Os_ThreadGetCore(currentThread);                                                                      /* SBSW_OS_ST_THREADGETCORE_003 */

      /* #20 Get the stack object and determine the stack usage. */
      if(targetCore == localCore)
      {
        P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

        stack = Os_CoreGetKernelStack(targetCore);                                                                      /* SBSW_OS_ST_COREGETKERNELSTACK_002 */

        result = Os_StackGetUsageLocal(stack);                                                                          /* SBSW_OS_ST_STACKGETUSAGELOCAL_002 */

        status = OS_STATUS_OK;
      }
      else
      {
        status = Os_XSigSend_GetKernelStackUsage(targetCore, currentThread, CoreID, &result);                           /* SBSW_OS_CORE_XSIGSEND_001 */
      }
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetKernelStackUsage(status, CoreID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetStartupHookStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetStartupHookStackUsage
(
  CoreIdType CoreID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_CoreCheckId(CoreID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) core;

    core = Os_CoreId2Core(CoreID);

    if(OS_UNLIKELY(Os_CoreCheckIsAsrCore(core) == OS_CHECK_FAILED))                                                     /* SBSW_OS_ST_CORECHECKISASRCORE_001 */
    {
      result = 0;
      status = OS_STATUS_ID_TYPE_1;
    }
    else
    {
      /* #20 Get the stack object and determine the stack usage. */
      P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;
      P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST) hook;

      currentThread = Os_CoreGetThread();
      targetCore = Os_Core2AsrCore(core);                                                                               /* SBSW_OS_ST_CORE2ASRCORE_001 */
      localCore = Os_ThreadGetCore(currentThread);                                                                      /* SBSW_OS_ST_THREADGETCORE_003 */
      hook = Os_CoreGetStartupHook(targetCore);                                                                         /* SBSW_OS_ST_COREGETSTARTUPHOOK_001 */

      if(OS_UNLIKELY(Os_ErrCheckPointerIsNotNull(hook) == OS_CHECK_FAILED))                                             /* COV_OS_NOFUNCCALL *//* SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_001 */
      {
        result = 0;
        status = OS_STATUS_HOOK_NOT_AVAILABLE;
      }
      else if(targetCore == localCore)
      {
        P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

        stack = Os_ThreadGetStack(Os_HookCallbackGetThread(hook));                                                      /* SBSW_OS_ST_THREADGETSTACK_003 */ /* SBSW_OS_ST_HOOKCALLBACKGETTHREAD_001 */

        result = Os_StackGetUsageLocal(stack);                                                                          /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

        status = OS_STATUS_OK;
      }
      else
      {
        status = Os_XSigSend_GetStartupHookStackUsage(targetCore, currentThread, CoreID, &result);                      /* SBSW_OS_CORE_XSIGSEND_001 */
      }
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetStartupHookStackUsage(status, CoreID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetErrorHookStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetErrorHookStackUsage
(
  CoreIdType CoreID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_CoreCheckId(CoreID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) core;

    core = Os_CoreId2Core(CoreID);

    if(OS_UNLIKELY(Os_CoreCheckIsAsrCore(core) == OS_CHECK_FAILED))                                                     /* SBSW_OS_ST_CORECHECKISASRCORE_001 */
    {
      result = 0;
      status = OS_STATUS_ID_TYPE_1;
    }
    else
    {
      /* #20 Get the stack object and determine the stack usage. */
      P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;
      P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST) hook;

      currentThread = Os_CoreGetThread();
      targetCore = Os_Core2AsrCore(core);                                                                               /* SBSW_OS_ST_CORE2ASRCORE_001 */
      localCore = Os_ThreadGetCore(currentThread);                                                                      /* SBSW_OS_ST_THREADGETCORE_003 */
      hook = Os_CoreGetErrorHook(targetCore);                                                                           /* SBSW_OS_ST_COREGETERRORHOOK_001 */

      /* #20 Get the stack object and determine the stack usage. */
      if(OS_UNLIKELY(Os_ErrCheckPointerIsNotNull(hook) == OS_CHECK_FAILED))                                             /* COV_OS_NOFUNCCALL *//* SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_002 */
      {
        result = 0;
        status = OS_STATUS_HOOK_NOT_AVAILABLE;
      }
      else if(targetCore == localCore)
      {
        P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

        stack = Os_ThreadGetStack(Os_HookStatusHookGetThread(hook));                                                    /* SBSW_OS_ST_THREADGETSTACK_004 */ /* SBSW_OS_ST_HOOKSTATUSHOOKGETTHREAD_001 */

        result = Os_StackGetUsageLocal(stack);                                                                          /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

        status = OS_STATUS_OK;
      }
      else
      {
        status = Os_XSigSend_GetErrorHookStackUsage(targetCore, currentThread, CoreID, &result);                        /* SBSW_OS_CORE_XSIGSEND_001 */
      }
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetErrorHookStackUsage(status, CoreID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetShutdownHookStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetShutdownHookStackUsage
(
  CoreIdType CoreID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_CoreCheckId(CoreID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) core;

    core = Os_CoreId2Core(CoreID);

    if(OS_UNLIKELY(Os_CoreCheckIsAsrCore(core) == OS_CHECK_FAILED))                                                     /* SBSW_OS_ST_CORECHECKISASRCORE_001 */
    {
      result = 0;
      status = OS_STATUS_ID_TYPE_1;
    }
    else
    {
      /* #20 Get the stack object and determine the stack usage. */
      P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;
      P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST) hook;

      currentThread = Os_CoreGetThread();
      targetCore = Os_Core2AsrCore(core);                                                                               /* SBSW_OS_ST_CORE2ASRCORE_001 */
      localCore = Os_ThreadGetCore(currentThread);                                                                      /* SBSW_OS_ST_THREADGETCORE_003 */
      hook = Os_CoreGetShutdownHook(targetCore);                                                                        /* SBSW_OS_ST_COREGETSHUTDOWNHOOK_001 */

      /* #20 Get the stack object and determine the stack usage. */
      if(OS_UNLIKELY(Os_ErrCheckPointerIsNotNull(hook) == OS_CHECK_FAILED))                                             /* COV_OS_NOFUNCCALL *//* SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_003 */
      {
        result = 0;
        status = OS_STATUS_HOOK_NOT_AVAILABLE;
      }
      else if(targetCore == localCore)
      {
        P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

        stack = Os_ThreadGetStack(Os_HookStatusHookGetThread(hook));                                                    /* SBSW_OS_ST_THREADGETSTACK_004 */ /* SBSW_OS_ST_HOOKSTATUSHOOKGETTHREAD_002 */

        result = Os_StackGetUsageLocal(stack);                                                                          /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

        status = OS_STATUS_OK;
      }
      else
      {
        status = Os_XSigSend_GetShutdownHookStackUsage(targetCore, currentThread, CoreID, &result);                     /* SBSW_OS_CORE_XSIGSEND_001 */
      }
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetShutdownHookStackUsage(status, CoreID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_Api_GetProtectionHookStackUsage()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(uint32, OS_CODE) Os_Api_GetProtectionHookStackUsage
(
  CoreIdType CoreID
)
{
  uint32 result;
  Os_StatusType status;

  /* #10 Perform error checks. */
  if(OS_UNLIKELY(Os_CoreCheckId(CoreID) == OS_CHECK_FAILED ))
  {
    result = 0;
    status = OS_STATUS_ID_1;
  }
  else
  {
    P2CONST(Os_CoreConfigType, AUTOMATIC, OS_CONST) core;

    core = Os_CoreId2Core(CoreID);

    if(OS_UNLIKELY(Os_CoreCheckIsAsrCore(core) == OS_CHECK_FAILED))                                                     /* SBSW_OS_ST_CORECHECKISASRCORE_001 */
    {
      result = 0;
      status = OS_STATUS_ID_TYPE_1;
    }
    else
    {
      /* #20 Get the stack object and determine the stack usage. */
      P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;
      P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore;
      P2CONST(Os_HookProtectionHookConfigType, AUTOMATIC, OS_CONST) hook;

      currentThread = Os_CoreGetThread();
      targetCore = Os_Core2AsrCore(core);                                                                               /* SBSW_OS_ST_CORE2ASRCORE_001 */
      localCore = Os_ThreadGetCore(currentThread);                                                                      /* SBSW_OS_ST_THREADGETCORE_003 */
      hook = Os_CoreGetProtectionHook(targetCore);                                                                      /* SBSW_OS_ST_COREGETPROTECTIONHOOK_001 */

      /* #20 Get the stack object and determine the stack usage. */
      if(OS_UNLIKELY(Os_ErrCheckPointerIsNotNull(hook) == OS_CHECK_FAILED))                                             /* SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_004 */
      {
       result = 0;
       status = OS_STATUS_HOOK_NOT_AVAILABLE;
      }
      else if(targetCore == localCore)
      {
        P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) stack;

        stack = Os_ThreadGetStack(Os_HookProtectionHookGetThread(hook));                                                /* SBSW_OS_ST_THREADGETSTACK_006 */ /* SBSW_OS_ST_HOOKPROTECTIONHOOKGETTHREAD_001 */

        result = Os_StackGetUsageLocal(stack);                                                                          /* SBSW_OS_ST_STACKGETUSAGELOCAL_001 */

        status = OS_STATUS_OK;
      }
      else
      {
        status = Os_XSigSend_GetProtectionHookStackUsage(targetCore, currentThread, CoreID, &result);                   /* SBSW_OS_CORE_XSIGSEND_001 */
      }
    }
  }

  /* #30 Report error if applicable. */
  Os_ErrReportGetProtectionHookStackUsage(status, CoreID);

  return result;
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* module specific MISRA deviations:
 */

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_OS_ST_HAL_STACKENDGET_001
 \DESCRIPTION    Os_Hal_StackEndGet is called with LowAddress and HighAddress of a Stack object. The stack object is
                 passed as argument to the caller function. Precondition ensures that the pointer is valid.
                 The compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_STACK_LOWADDRESS_M]
                 \M [CM_OS_STACK_HIGHADDRESS_M]

\ID SBSW_OS_ST_HAL_STACKENDGET_002
 \DESCRIPTION    Write access to the return value of Os_Hal_StackEndGet. The return value either equals LowAddress
                 or HighAddress. Precondition ensures that the argument pointer is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \T [CM_OS_HAL_STACKENDGET_T]

\ID SBSW_OS_ST_STACKISPARTOFSTACK_001
 \DESCRIPTION    Os_StackIsPartOfStack is called with the return value of Os_Hal_StackTopGet and a parameter passed
                 to the caller.
 \COUNTERMEASURE \T [CM_OS_HAL_STACKTOPGET_T]

\ID SBSW_OS_ST_HAL_STACKBOTTOMGET_001
 \DESCRIPTION    Os_Hal_StackBottomGet is called with LowAddress and HighAddress of a Stack object. The stack object is
                 passed as argument. Precondition ensures that the Stack  pointer is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_STACK_LOWADDRESS_M]
                 \M [CM_OS_STACK_HIGHADDRESS_M]

\ID SBSW_OS_ST_HAL_STACKPOINTERMOVEDOWN_001
 \DESCRIPTION    Os_Hal_StackPointerMoveDown is called with the return value of Os_Hal_StackBottomGet,
                 Os_Hal_StackTopGet or Os_Hal_StackPointerMoveDown.
 \COUNTERMEASURE \T [CM_OS_HAL_STACKPOINTERMOVEDOWN_T]
                 \T [CM_OS_HAL_STACKTOPGET_T]
                 \M [CM_OS_STACK_LOWADDRESS_M]
                 \M [CM_OS_STACK_HIGHADDRESS_M]

\ID SBSW_OS_ST_ITERATOR_001
 \DESCRIPTION    Write access to an iterator.
 \COUNTERMEASURE \R Loop condition ensures that pointer is in range.
                 \T [CM_OS_HAL_STACKPOINTERMOVEDOWN_T]

\ID SBSW_OS_ST_HAL_STACKCALCULATEUSAGE_001
 \DESCRIPTION    Function performs substraction based on two pointers which depend on loop result.
 \COUNTERMEASURE \T [CM_OS_HAL_STACKPOINTERMOVEDOWN_T]

\ID SBSW_OS_ST_THREADGETSTACK_001
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_TaskGetThread.
 \COUNTERMEASURE \N [CM_OS_TASKGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETSTACK_002
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_IsrGetThread.
 \COUNTERMEASURE \N [CM_OS_ISRGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETSTACK_003
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_HookCallbackGetThread.
 \COUNTERMEASURE \N [CM_OS_HOOKCALLBACKGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETSTACK_004
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_HookStatusHookGetThread.
 \COUNTERMEASURE \N [CM_OS_HOOKSTATUSHOOKGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETSTACK_005
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_HookShutdownHookGetThread.
 \COUNTERMEASURE \N [CM_OS_HOOKSHUTDOWNHOOKGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETSTACK_006
 \DESCRIPTION    Os_ThreadGetStack is called with the return value of Os_HookProtectionHookGetThread.
 \COUNTERMEASURE \N [CM_OS_HOOKPROTECTIONHOOKGETTHREAD_N]

\ID SBSW_OS_ST_STACKGETUSAGELOCAL_001
 \DESCRIPTION    Os_StackGetUsageLocal is called with the return value of Os_ThreadGetStack.
 \COUNTERMEASURE \M [CM_OS_THREADGETSTACK_M]

\ID SBSW_OS_ST_STACKGETUSAGELOCAL_002
 \DESCRIPTION    Os_StackGetUsageLocal is called with the return value of Os_CoreGetKernelStack.
 \COUNTERMEASURE \M [CM_OS_COREASR_KERNELSTACK_M]

\ID SBSW_OS_ST_HOOKCALLBACKGETTHREAD_001
 \DESCRIPTION    Os_HookCallbackGetThread is called with the return value of Os_CoreGetStartupHook.
 \COUNTERMEASURE \N [CM_OS_COREGETSTARTUPHOOK_PRE_N]

\ID SBSW_OS_ST_HOOKSTATUSHOOKGETTHREAD_001
 \DESCRIPTION    Os_HookStatusHookGetThread is called with the return value of Os_CoreGetErrorHook.
 \COUNTERMEASURE \N [CM_OS_COREGETERRORHOOK_PRE_N]

\ID SBSW_OS_ST_HOOKSTATUSHOOKGETTHREAD_002
 \DESCRIPTION    Os_HookStatusHookGetThread is called with the return value of Os_CoreGetShutdownHook.
 \COUNTERMEASURE \N [CM_OS_COREGETSHUTDOWNHOOK_PRE_N]

\ID SBSW_OS_ST_HOOKSHUTDOWNHOOKGETTHREAD_001
 \DESCRIPTION    Os_HookShutdownHookGetThread is called with the return value of Os_CoreGetShutdownHook.
 \COUNTERMEASURE \N [CM_OS_COREGETSHUTDOWNHOOK_PRE_N]

\ID SBSW_OS_ST_HOOKPROTECTIONHOOKGETTHREAD_001
 \DESCRIPTION    Os_HookProtectionHookGetThread is called with the return value of Os_CoreGetProtectionHook.
 \COUNTERMEASURE \N [CM_OS_COREGETPROTECTIONHOOK_PRE_N]

\ID SBSW_OS_ST_TASKGETTHREAD_001
 \DESCRIPTION    Os_TaskGetThread is called with the return value of Os_TaskId2Task.
 \COUNTERMEASURE \M [CM_OS_TASKID2TASK_M]

\ID SBSW_OS_ST_THREADGETCORE_001
 \DESCRIPTION    Os_ThreadGetCore is called with the return value of Os_TaskGetThread.
 \COUNTERMEASURE \N [CM_OS_TASKGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETCORE_002
 \DESCRIPTION    Os_ThreadGetCore is called with the return value of Os_IsrGetThread.
 \COUNTERMEASURE \N [CM_OS_ISRGETTHREAD_N]

\ID SBSW_OS_ST_THREADGETCORE_003
 \DESCRIPTION    Os_ThreadGetCore is called with the return value of Os_CoreGetThread.
 \COUNTERMEASURE \N [CM_OS_COREGETTHREAD_N]

\ID SBSW_OS_ST_COREGETKERNELSTACK_002
 \DESCRIPTION    Os_CoreGetKernelStack is called with the return value of Os_Core2AsrCore.
 \COUNTERMEASURE \N [CM_OS_CORE2ASRCORE_N]

\ID SBSW_OS_ST_ISRGETTHREAD_001
  \DESCRIPTION    Os_IsrGetThread is called with the return value of Os_IsrId2Isr.
  \COUNTERMEASURE \M [CM_OS_ISRID2ISR_M]

\ID SBSW_OS_ST_CORE2ASRCORE_001
 \DESCRIPTION    Os_Core2AsrCore is called with the return value of Os_CoreId2Core.
 \COUNTERMEASURE \M [CM_OS_COREID2CORE_M]

\ID SBSW_OS_ST_XSIGSEND_001
 \DESCRIPTION    A Os_XSigSend function is called with the return value of Os_ThreadGetCore and Os_CoreGetThread.
                 Precondition ensures that the pointer return by Os_CoreGetThread is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_THREADGETCORE_M]

\ID SBSW_OS_ST_CORECHECKISASRCORE_001
 \DESCRIPTION    Os_CoreCheckIsAsrCore is called with the return value of Os_CoreId2Core.
 \COUNTERMEASURE \M [CM_OS_COREID2CORE_M]

\ID SBSW_OS_ST_COREGETSTARTUPHOOK_001
 \DESCRIPTION    Os_CoreGetStartupHook is called with the return value of Os_Core2AsrCore.
 \COUNTERMEASURE \N [CM_OS_CORE2ASRCORE_N]

\ID SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_001
 \DESCRIPTION    Os_ErrCheckPointerIsNotNull is called with the return value of Os_CoreGetStartupHook.
 \COUNTERMEASURE \N [CM_OS_COREGETSTARTUPHOOK_N]

\ID SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_002
 \DESCRIPTION    Os_ErrCheckPointerIsNotNull is called with the return value of Os_CoreGetErrorHook.
 \COUNTERMEASURE \N [CM_OS_COREGETERRORHOOK_N]

\ID SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_003
 \DESCRIPTION    Os_ErrCheckPointerIsNotNull is called with the return value of Os_CoreGetShutdownHook.
 \COUNTERMEASURE \N [CM_OS_COREGETSHUTDOWNHOOK_N]

\ID SBSW_OS_ST_ERRCHECKPOINTERISNOTNULL_004
 \DESCRIPTION    Os_ErrCheckPointerIsNotNull is called with the return value of Os_CoreGetProtectionHook.
 \COUNTERMEASURE \N [CM_OS_COREGETPROTECTIONHOOK_N]

\ID SBSW_OS_ST_COREGETERRORHOOK_001
 \DESCRIPTION    Os_CoreGetErrorHook is called with the return value of Os_Core2AsrCore.
 \COUNTERMEASURE \N [CM_OS_CORE2ASRCORE_N]

\ID SBSW_OS_ST_COREGETSHUTDOWNHOOK_001
 \DESCRIPTION    Os_CoreGetShutdownHook is called with the return value of Os_Core2AsrCore.
 \COUNTERMEASURE \N [CM_OS_CORE2ASRCORE_N]

\ID SBSW_OS_ST_COREGETPROTECTIONHOOK_001
 \DESCRIPTION    Os_CoreGetProtectionHook is called with the return value of Os_Core2AsrCore.
 \COUNTERMEASURE \N [CM_OS_CORE2ASRCORE_N]

SBSW_JUSTIFICATION_END */

/*
\CM CM_OS_STACK_LOWADDRESS_M
      Verify that the LowAddress of each Os_StackConfigType object is initialized with the macro OS_STACK_GETLOWADDRESS
      and a non NULL_PTR.

\CM CM_OS_STACK_HIGHADDRESS_M
      Verify that the HighAddress of each Os_StackConfigType object is initialized with the macro
      OS_STACK_GETHIGHADDRESS and a non NULL_PTR.

\CM CM_OS_HAL_STACKPOINTERMOVEDOWN_T
      TCASE-359605 ensures that returned pointer is in a valid range.

\CM CM_OS_HAL_STACKENDGET_T
      TCASE-359605 ensures that returned pointer is in a valid range.

\CM CM_OS_HAL_STACKTOPGET_T
      TCASE-359605 ensures that returned pointer is in a valid range. Returning a wrong pointer leads to an
      override of the whole stack and will be detected by tests.

 */

/* START_COVERAGE_JUSTIFICATION

\ID COV_OS_STARTUPSTACK_NOT_DEFINED
   \ACCEPT XF
   \ACCEPT TX
   \REASON Currently the startup stack is not generally restricted to be one of the OS generated stacks. 
           For platforms which do not restrict it to be an OS stack, the else path is never executed. 
           In WORKITEM9936 a general startup stack design will be created which will always cover both paths.

END_COVERAGE_JUSTIFICATION */
/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Stack.c
 **********************************************************************************************************************/

