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
 * \addtogroup Os_Task
 * \{
 *
 * \file
 * \brief       Task API.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined (OS_TASK_H)                                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TASK_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */
# include "Os_TaskInt.h"

/* Os kernel module dependencies */
# include "Os_Thread.h"
# include "Os_TimingProtection.h"
# include "Os_XSignal.h"
# include "Os_Common.h"
# include "Os_Event.h"
# include "Os_Scheduler.h"
# include "Os_Application.h"
# include "Os_AccessCheck.h"
# include "Os_Ioc.h"

/* Os Hal dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_TASK)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/
# if(OS_CFG_PRETASKHOOK == STD_ON)
#  define OS_TASK_PRETASKHOOK PreTaskHook
# else
#  define OS_TASK_PRETASKHOOK Os_TaskPreTaskHook
# endif
# if(OS_CFG_POSTTASKHOOK == STD_ON)
#  define OS_TASK_POSTTASKHOOK PostTaskHook
# else
#  define OS_TASK_POSTTASKHOOK Os_TaskPostTaskHook
# endif

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
 *  Os_TaskId2Task()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_TaskId2Task,
(
  TaskType TaskId
))
{
  Os_Assert(Os_ErrIsValueLo((uint32)TaskId, (uint32)OS_TASKID_COUNT));
  return OsCfg_TaskRefs[TaskId];                                                                                        /* PRQA S 3689 */ /* MD_Os_3689 */
}

/***********************************************************************************************************************
 *  Os_TaskGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST),  OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetThread,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return &Task->Thread;
}

/***********************************************************************************************************************
 *  Os_TaskThread2Task()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_TaskThread2Task,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_Assert((Os_StdReturnType)(Os_ThreadIsTask(Thread) != 0));                                                          /* SBSW_OS_FC_PRECONDITION */
  return (P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST))Thread;                                                       /* PRQA S 0310 */ /* MD_Os_0310 */
}

/***********************************************************************************************************************
 *  Os_TaskGetDyn()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2VAR(Os_TaskType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetDyn,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return (P2VAR(Os_TaskType, AUTOMATIC, OS_VAR_NOINIT))Os_TaskGetThread(Task)->Dyn;                                     /* SBSW_OS_FC_PRECONDITION */ /* PRQA S 0310, 3305 */ /* MD_Os_0310, MD_Os_3305 */
}

/***********************************************************************************************************************
 *  Os_TaskSetState()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskSetState,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  TaskStateType State
))
{
  Os_TaskGetDyn(Task)->State = State;                                                                                   /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_TASK_TASKGETDYN_002 */
}

/***********************************************************************************************************************
 *  Os_TaskGetPriority()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TaskPrioType, OS_CODE,                                                  /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskGetPriority,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Os_TaskGetDyn(Task)->Priority;                                                                                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskSetPriority()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskSetPriority,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  Os_TaskPrioType Priority
))
{
  Os_TaskGetDyn(Task)->Priority = Priority;                                                                             /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_TASK_TASKGETDYN_002 */
}

/***********************************************************************************************************************
 *  Os_TaskGetRunningPriority()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TaskPrioType, OS_CODE,                                                  /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskGetRunningPriority,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Task->RunningPriority;
}

/***********************************************************************************************************************
 *  Os_TaskGetHomePriority()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TaskPrioType, OS_CODE,                                                  /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskGetHomePriority,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Task->HomePriority;
}

/***********************************************************************************************************************
 *  Os_TaskGetId()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE TaskType, OS_CODE,                                                         /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskGetId,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Task->TaskId;
}

/***********************************************************************************************************************
 *  Os_TaskGetMaxActivations()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_ActivationCntType, OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetMaxActivations, /* PRQA S 3219 */ /* MD_Os_3219 */
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Task->MaxActivations;
}

/***********************************************************************************************************************
 *  Os_TaskIsExtended()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE boolean, OS_CODE, OS_ALWAYS_INLINE,                                        /* COV_OS_TASKLIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskIsExtended,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))                                                                                                                      /* COV_OS_TASKLIBFUNCT */
{
  return Task->IsExtended;
}

/***********************************************************************************************************************
 *  Os_TaskGetAccessingApplications()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_AppAccessMaskType, OS_CODE,                                             /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskGetAccessingApplications,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Task->AccessingApplications;
}

/***********************************************************************************************************************
 *  Os_TaskGetScheduler()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetScheduler,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
   return Os_CoreGetScheduler(Os_ThreadGetCore(Os_TaskGetThread(Task)));                                                /* SBSW_OS_TASK_COREGETSCHEDULER_001 */ /* SBSW_OS_TASK_THREADGETCORE_002 */ /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskGetEvent()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2VAR(Os_EventStateType, TYPEDEF, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetEvent,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return &(Os_TaskGetDyn(Task)->Events);                                                                                /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskGetCore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_CoreAsrConfigType, TYPEDEF, OS_CONST),  OS_CODE, OS_ALWAYS_INLINE, Os_TaskGetCore,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Os_ThreadGetCore(Os_TaskGetThread(Task));                                                                      /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_TASK_THREADGETCORE_002 */
}

/***********************************************************************************************************************
 *  Os_TaskIsCoreLocal()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE uint32,                                                                    /* PRQA S 3219 */ /* MD_Os_3219 */
OS_CODE, OS_ALWAYS_INLINE, Os_TaskIsCoreLocal,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore;

  localCore = Os_ThreadGetCore(Os_CoreGetThread());                                                                     /* SBSW_OS_TASK_THREADGETCORE_001 */

  return (uint32)(localCore == Os_TaskGetCore(Task));                                                                   /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskCheckId()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskCheckId,
(
  TaskType TaskId
))
{
  return Os_ErrExtendedCheck(Os_ErrIsValueLo((uint32)TaskId, (uint32)OS_TASKID_COUNT));
}

/***********************************************************************************************************************
 *  Os_TaskCheckIsExtendedTask()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskCheckIsExtendedTask,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)(Task->IsExtended == TRUE));
}

/***********************************************************************************************************************
 *  Os_TaskCheckIsNotSuspended()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskCheckIsNotSuspended,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)(Os_TaskGetDyn(Task)->State != SUSPENDED));                              /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskIsWaiting()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE uint32, OS_CODE, OS_ALWAYS_INLINE,                                         /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskIsWaiting,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return ((uint32)(Os_TaskGetDyn(Task)->State == WAITING));                                                             /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskIsSuspended
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskIsSuspended,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  return ((Os_StdReturnType)(Os_TaskGetDyn(Task)->State == SUSPENDED));                                                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TaskSwitch()
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
Os_TaskSwitch,
(
  P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) Scheduler,
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) CallerThread
))
{
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) nextTask;
  P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST) nextThread;

  /* #10 Call PostTaskHook. */
  Os_TaskCallPostTaskHook();

  /* #20 Tell Scheduler to switch and get next thread from there. */
  nextTask = Os_SchedulerInternalSchedule(Scheduler);                                                                   /* SBSW_OS_FC_PRECONDITION */
  nextThread = Os_TaskGetThread(nextTask);                                                                              /* SBSW_OS_TASK_TASKGETTHREAD_002 */

  /* #30 Call PreTaskHook. */
  Os_TaskCallPreTaskHook();

  /* #40 Inform trace module. */
  Os_TraceThreadSwitch(Os_TaskGetDyn(Os_TaskThread2Task(CallerThread))->State,  Os_ThreadGetTrace(CallerThread),        /* SBSW_OS_TASK_TRACETHREADSWITCH_001 */ /* SBSW_OS_TASK_TASKGETDYN_003 */ /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_FC_PRECONDITION */
                       Os_ThreadGetTrace(nextThread));                                                                  /* SBSW_OS_TASK_THREADGETTRACE_001 */

  /* #50 Perform thread switch. */
  Os_ThreadSwitch(CallerThread, nextThread);                                                                            /* SBSW_OS_TASK_THREADSWITCH_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_TaskResume()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskResume,
(
  P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) Scheduler
))
{
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) nextTask;
  P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST) nextThread;

  /* #10 Call PostTaskHook. */
  Os_TaskCallPostTaskHook();

  /* #20 Tell Scheduler to switch and get next thread from there. */
  nextTask = Os_SchedulerInternalSchedule(Scheduler);                                                                   /* SBSW_OS_FC_PRECONDITION */
  nextThread = Os_TaskGetThread(nextTask);                                                                              /* SBSW_OS_TASK_TASKGETTHREAD_002 */

  /* #30 Call PreTaskHook. */
  Os_TaskCallPreTaskHook();

  /* #40 Inform trace module. */
  Os_TraceThreadResetAndResume(Os_ThreadGetTrace(Os_CoreGetThread()), Os_ThreadGetTrace(nextThread));                   /* SBSW_OS_TASK_TRACETHREADRESETANDRESUME_001 */ /* SBSW_OS_TASK_THREADGETTRACE_002 */ /* SBSW_OS_TASK_THREADGETTRACE_001 */

  /* #50 Reset the current thread and resume the new one. */
  Os_ThreadResetAndResume(nextThread);                                                                                  /* SBSW_OS_TASK_THREADRESETANDRESUME_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_TaskSuicide()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE, Os_TaskSuicide, (void))
{
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) currentTask;

  currentTask = Os_TaskThread2Task(Os_CoreGetThread());                                                                 /* SBSW_OS_TASK_TASKTHREAD2TASK_001 */

  Os_TaskResume(Os_TaskGetScheduler(currentTask));                                                                      /* SBSW_OS_TASK_TASKRESUME_001 */ /* SBSW_OS_TASK_TASKGETSCHEDULER_001 */
}

/***********************************************************************************************************************
 *  Os_TaskWait()
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
Os_TaskWait,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) scheduler = Os_TaskGetScheduler(Task);                           /* SBSW_OS_FC_PRECONDITION */
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread = Os_TaskGetThread(Task);                             /* SBSW_OS_FC_PRECONDITION */
  P2CONST(Os_TpConfigType, TYPEDEF, OS_CONST) configTp = Os_CoreAsrGetTimingProtection(Os_ThreadGetCore(currentThread));/* SBSW_OS_TASK_THREADGETCORE_002 */ /* SBSW_OS_TASK_COREASRGETTIMINGPROTECTION_001 */
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) nextTask;
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) nextThread;
  P2CONST(Os_TpThreadConfigType, TYPEDEF, OS_CONST) tpThread;

  /* #10 Set task's state to WAITING. */
  Os_TaskSetState(Task, WAITING);                                                                                       /* SBSW_OS_FC_PRECONDITION */

  /* #20 Tell the scheduler to remove the task. */
  nextTask = Os_SchedulerRemoveCurrentTask(scheduler);                                                                  /* SBSW_OS_TASK_SCHEDULERREMOVECURRENTTASK_001 */

  /* #30 Tell timing protection to reset execution budget. */
  nextThread = Os_TaskGetThread(nextTask);                                                                              /* SBSW_OS_TASK_TASKGETTHREAD_003 */
  tpThread = Os_ThreadGetTpConfig(nextThread);                                                                          /* SBSW_OS_THREADGETTPCONFIG_001 */
  Os_TpResetAndResume(configTp, tpThread, nextThread);                                                                  /* SBSW_OS_TASK_TPRESETANDRESUME_001 */

  /* #40 Perform a task switch to the next task. */
  Os_TaskSwitch(scheduler, currentThread);                                                                              /* SBSW_OS_TASK_TASKSWITCH_003 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_TaskLeaveWaitingState()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskLeaveWaitingState,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) thread = Os_TaskGetThread(Task);                                    /* SBSW_OS_FC_PRECONDITION */
  P2CONST(Os_TpConfigType, TYPEDEF, OS_CONST) configTp = Os_CoreAsrGetTimingProtection(Os_ThreadGetCore(thread));       /* SBSW_OS_TASK_COREASRGETTIMINGPROTECTION_001 */ /* SBSW_OS_TASK_THREADGETCORE_002 */
  P2CONST(Os_TpThreadConfigType, TYPEDEF, OS_CONST) threadTp = Os_ThreadGetTpConfig(thread);                            /* SBSW_OS_TASK_THREADGETTPCONFIG_001 */

  /* #10 If inter-arrival is allowed: */
  if(OS_LIKELY(Os_TpCheckInterArrival(configTp, threadTp) != OS_CHECK_FAILED))                                          /* SBSW_OS_TASK_TPCHECKINTERARRIVAL_001 */
  {
    /* #20 Set its state to READY. */
    Os_TaskSetState(Task, READY);                                                                                       /* SBSW_OS_FC_PRECONDITION */

    /* #30 Tell scheduler to insert the task. */
    Os_SchedulerInsert(Os_TaskGetScheduler(Task), Task);                                                                /* SBSW_OS_TASK_SCHEDULERINSERT_001 */ /* SBSW_OS_FC_PRECONDITION */
  }
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_TaskReturnToTaskLevel()
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
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TaskReturnToTaskLevel,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) InterruptedTask
))
{
  P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) scheduler = Os_TaskGetScheduler(InterruptedTask);                /* SBSW_OS_FC_PRECONDITION */
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) nextThread;

  /* #10 If we have to perform a task switch: */
  if(Os_SchedulerTaskSwitchIsNeeded(scheduler) != 0)                                                                    /* SBSW_OS_TASK_SCHEDULERTASKSWITCHISNEEDED_002 */
  {
    /* #20 Call the PostTaskHook. */
    Os_TaskCallPostTaskHook();

    /* #30 Tell the scheduler to schedule the next task. */
    nextThread = Os_TaskGetThread(Os_SchedulerInternalSchedule(scheduler));                                             /* SBSW_OS_TASK_TASKGETTHREAD_002 */ /* SBSW_OS_TASK_SCHEDULERINTERNALSCHEDULE_001 */

    /* #40 Call the PreTaskHook. */
    Os_TaskCallPreTaskHook();
  }
  /* #50 If we don't have to perform a task switch: */
  else
  {
    /* #60 The next task will be the interrupted task. */
    nextThread = Os_TaskGetThread(InterruptedTask);                                                                     /* SBSW_OS_FC_PRECONDITION */
  }
  Os_TraceThreadCleanupAndResume(Os_ThreadGetTrace(Os_CoreGetThread()), Os_ThreadGetTrace(nextThread));                 /* SBSW_OS_TASK_TRACETHREADCLEANUPANDRESUME_001 */ /* SBSW_OS_TASK_THREADGETTRACE_002 */ /* SBSW_OS_TASK_THREADGETTRACE_001 */

  /* #70 Resume the next task. */
  Os_ThreadCleanupAndResume(nextThread);                                                                                /* SBSW_OS_TASK_THREADCLEANUPANDRESUME_001 */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

/***********************************************************************************************************************
 *  Os_TaskPreStartTaskEnter()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_TaskPreStartTaskEnter,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) PreStartTask
))
{
  Os_Hal_InterruptStateType interruptState;
  P2CONST(Os_ThreadConfigType, TYPEDEF, OS_CONST) preStartTaskThread;

  preStartTaskThread = Os_TaskGetThread(PreStartTask);                                                                  /* SBSW_OS_FC_PRECONDITION */

  /* #10 Get the current interrupt state. */
  Os_Hal_IntGetInterruptState(&interruptState);                                                                         /* SBSW_OS_FC_POINTER2LOCAL */

  /* #20 set the PreStartTask's interrupt state of to the current one. */
  Os_ThreadSetInterruptState(preStartTaskThread, &interruptState);                                                      /* SBSW_OS_TASK_THREADSETINTERRUPTSTATE_001 */ /* SBSW_OS_FC_POINTER2LOCAL */

  /* #30 start the PreStartTask's thread */
  Os_ThreadStartFirst(preStartTaskThread);                                                                              /* SBSW_OS_TASK_THREADSTARTFIRST_001 */
}

/***********************************************************************************************************************
 *  Os_TaskGetStateLocal()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StatusType, OS_CODE, OS_ALWAYS_INLINE,
Os_TaskGetStateLocal,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  TaskStateRefType State
))
{
  Os_StatusType status;

  if(OS_UNLIKELY(Os_AppCheckIsAccessible(Os_ThreadGetOwnerApplication(Os_TaskGetThread(Task))) == OS_CHECK_FAILED))     /* COV_OS_NOFUNCCALL *//* SBSW_OS_TASK_APPCHECKISACCESSIBLE_001 */ /* SBSW_OS_TASK_THREADGETOWNERAPPLICATION_001 */ /* SBSW_OS_FC_PRECONDITION */
  {
    status = OS_STATUS_NOTACCESSIBLE_1;
  }
  else
  {
    TaskStateType internalState;
    P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) scheduler;
    P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) currentTask;

    scheduler = Os_TaskGetScheduler(Task);                                                                              /* SBSW_OS_FC_PRECONDITION */

    /* #10 Get the scheduling state of the given task. */
    internalState = Os_TaskGetDyn(Task)->State;                                                                         /* SBSW_OS_FC_PRECONDITION */
    currentTask = Os_SchedulerGetCurrentTask(scheduler);                                                                /* SBSW_OS_TASK_SCHEDULERGETCURRENTTASK_002 */

    /* #20 If the task state is READY AND it is the current task: */
    if((internalState == READY) && (Task == currentTask))
    {
      /* #30 Write RUNNING to the given pointer. */
      *State = RUNNING;                                                                                                 /* SBSW_OS_PWA_PRECONDITION */
    }
    /* #40 Otherwise write the task state to the given pointer. */
    else
    {
      *State = internalState;                                                                                           /* SBSW_OS_PWA_PRECONDITION */
    }
    status = OS_STATUS_OK;
  }

  return status;
}

/***********************************************************************************************************************
 *  Os_TaskActivateTaskInternal()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StatusType, OS_CODE,                                                    /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskActivateTaskInternal,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  Os_StatusType status;
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) localCore = Os_ThreadGetCore(Os_CoreGetThread());                  /* SBSW_OS_TASK_THREADGETCORE_001 */
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) targetCore = Os_ThreadGetCore(Os_TaskGetThread(Task));             /* SBSW_OS_TASK_THREADGETCORE_002 */ /* SBSW_OS_FC_PRECONDITION */

  /* If the given task belongs to the local core, */
  if(OS_LIKELY(localCore == targetCore))
  {
    /* Call internal function to activate the given task. */
    status = Os_TaskActivateLocalTask(Task);                                                                            /* SBSW_OS_FC_PRECONDITION */
  }
  /* If the task belongs to a foreign core, */
  else
  {
    /* Signal the responsible core to activate the task. */
    status = Os_XSigSend_ActivateTaskAsync(targetCore, Os_CoreGetThread(), Os_TaskGetId(Task));                         /* SBSW_OS_TASK_XSIGSEND_001 */ /* SBSW_OS_FC_PRECONDITION */
  }

  return status;
}

/***********************************************************************************************************************
 *  Os_TaskIsPreTaskHookEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_TaskIsPreTaskHookEnabled,
( void ))
{
  return (Os_StdReturnType)(OS_CFG_PRETASKHOOK == STD_ON);
}

/***********************************************************************************************************************
 *  Os_TaskIsPostTaskHookEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_TaskIsPostTaskHookEnabled,
( void ))
{
  return (Os_StdReturnType)(OS_CFG_POSTTASKHOOK == STD_ON);
}

/***********************************************************************************************************************
 *  Os_TaskPreTaskHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* COV_OS_TASKLIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskPreTaskHook, (void))                                                                           /* COV_OS_TASKLIBFUNCT */
{
}

/***********************************************************************************************************************
 *  Os_TaskPostTaskHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* COV_OS_TASKLIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskPostTaskHook, (void))                                                                          /* COV_OS_TASKLIBFUNCT */
{
}

/***********************************************************************************************************************
 *  Os_TaskCallPreTaskHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskCallPreTaskHook, (void))
{
  Os_CallContextType prevCallContext;
  if(Os_TaskIsPreTaskHookEnabled() != 0)
  {
    prevCallContext = Os_ThreadSwitchType(Os_CoreGetThread(), OS_CALLCONTEXT_PRETASKHOOK);                              /* SBSW_OS_TASK_THREADSWITCHTYPE_001 */
    OS_TASK_PRETASKHOOK();
    (void) Os_ThreadSwitchType(Os_CoreGetThread(), prevCallContext);                                                    /* SBSW_OS_TASK_THREADSWITCHTYPE_001 */
  }
}

/***********************************************************************************************************************
 *  Os_TaskCallPostTaskHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskCallPostTaskHook, (void))
{
  Os_CallContextType prevCallContext;
  if(Os_TaskIsPostTaskHookEnabled() != 0)
  {
    prevCallContext = Os_ThreadSwitchType(Os_CoreGetThread(), OS_CALLCONTEXT_POSTTASKHOOK);                             /* SBSW_OS_TASK_THREADSWITCHTYPE_001 */
    OS_TASK_POSTTASKHOOK();
    (void) Os_ThreadSwitchType(Os_CoreGetThread(), prevCallContext);                                                    /* SBSW_OS_TASK_THREADSWITCHTYPE_001 */
  }
}

/***********************************************************************************************************************
 *  Os_TaskGetAccessRights()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_AccessCheckConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_TaskGetAccessRights,
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task
))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) thread;

  thread = Os_TaskGetThread(Task);                                                                                      /* SBSW_OS_FC_PRECONDITION */
  return Os_ThreadGetAccessRights(thread);                                                                              /* SBSW_OS_TASK_THREADGETACCESSRIGHTS_001 */
}

/***********************************************************************************************************************
 *  Os_TaskBeginScheduling()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE,                                                             /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_TaskBeginScheduling, (void))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread;
  P2CONST(Os_SchedulerConfigType, AUTOMATIC, OS_CONST) scheduler;
  P2CONST(Os_CoreAsrConfigType, AUTOMATIC, OS_CONST) currentCore;
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) idleTask;
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) nextTask;
  P2CONST(Os_TraceThreadConfigType, AUTOMATIC, OS_CONST) nextTrace;

  currentThread = Os_CoreGetThread();
  currentCore = Os_ThreadGetCore(currentThread);                                                                        /* SBSW_OS_TASK_THREADGETCORE_001 */

  Os_Assert(Os_ThreadIsAnyInitialContext(currentThread, OS_CALLCONTEXT_INITHOOK));                                      /* SBSW_OS_TASK_THREADISANYINITIALCONTEXT_001 */

  idleTask = Os_CoreGetIdleTask(currentCore);                                                                           /* SBSW_OS_TASK_COREGETIDLETASK_001 */
  nextTask = idleTask;
  scheduler = Os_TaskGetScheduler(idleTask);                                                                            /* SBSW_OS_TASK_TASKGETSCHEDULER_002 */

  /* #10 If there are tasks with higher priority: */
  if(Os_SchedulerTaskSwitchIsNeeded(scheduler) != 0)                                                                    /* SBSW_OS_TASK_SCHEDULERTASKSWITCHISNEEDED_002 */
  {
    /* #20 Tell scheduler to switch the current task. */
    nextTask = Os_SchedulerInternalSchedule(scheduler);                                                                 /* SBSW_OS_TASK_SCHEDULERINTERNALSCHEDULE_001 */
  }

  /* #30 Call the PreTaskHook. */
  Os_TaskCallPreTaskHook();

  /* #40 Trace thread switch. */
  nextTrace = Os_ThreadGetTrace(Os_TaskGetThread(nextTask));                                                            /* SBSW_OS_TASK_THREADGETTRACE_001 */ /* SBSW_OS_TASK_TASKGETTHREAD_002 */
  Os_TraceThreadInitAndStart(nextTrace);                                                                                /* SBSW_OS_TASK_TRACETHREADINITANDSTART_001 */

  /* #50 Perform thread switch. */
  Os_ThreadSwitch(currentThread, Os_TaskGetThread(nextTask));                                                           /* SBSW_OS_TASK_THREADSWITCH_002 */ /* SBSW_OS_TASK_TASKGETTHREAD_002 */

  Os_ErrKernelPanic();
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_STCAL */

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_TASK)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_TASK_H */

/*!
 * \}
 */

/**********************************************************************************************************************
 *  END OF FILE: Os_Task.h
 *********************************************************************************************************************/

