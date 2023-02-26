/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**
 * \addtogroup Os_Timer
 * \{
 *
 * \file
 * \brief       Implementation of high level timer hardware handling.
 *
 *
 *********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_TIMER_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Timer.h"

/* Os kernel module dependencies */
#include "Os_Counter_Types.h"
#include "Os_Counter.h"
#include "Os_Isr.h"

/* Os hal dependencies */
#include "Os_Hal_Timer.h"
#include "Os_Hal_Compiler.h"

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_TimerThread2CounterIsr()
 **********************************************************************************************************************/
/*! \brief          Returns the timer ISR corresponding to a thread.
 *  \details        The caller has to ensure, that the thread actually belongs to a timer ISR.
 *
 *  \param[in]      Thread  Thread which shall be converted.
 *
 *  \context        ISR2
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Given Thread is a Counter ISR.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_TimerIsrConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_TimerThread2CounterIsr,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
));

/***********************************************************************************************************************
 *  Os_TimerPitCheckNotPending()
 **********************************************************************************************************************/
/*! \brief          Returns whether the PIT timer interrupt is not pending.
 *  \details        --no details--
 *
 *  \param[in]      PitCounter  Counter, which interrupt is to be checked.
 *
 *  \retval         !0  The timer interrupt is not pending.
 *  \retval         0   The timer interrupt is pending.
 *
 *  \context        ISR2
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer is valid.
 *  \pre            Given counter is a PIT counter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_TimerPitCheckNotPending,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) PitCounter
));

/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_TimerThread2CounterIsr()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_TimerIsrConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_TimerThread2CounterIsr,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  return (P2CONST(Os_TimerIsrConfigType, AUTOMATIC, OS_CONST))Thread;                                                   /* PRQA S 0310 */ /* MD_Os_0310 */
}

/***********************************************************************************************************************
 *  Os_TimerPitCheckNotPending()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_TimerPitCheckNotPending,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) PitCounter
))
{
  return Os_ErrExtendedCheck((Os_StdReturnType)(Os_Hal_TimerPitIsPending(PitCounter->HwConfig) == 0));                  /* SBSW_OS_FC_PRECONDITION */
}

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_TimerSwIncrement()
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
FUNC(void, OS_CODE) Os_TimerSwIncrement
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer
)
{
  /* #10 Perform assertions. */
  Os_Assert((Os_StdReturnType)(Timer->Dyn->Value <= Timer->Counter.Characteristics.MaxCountingValue));

  /* #20 If the counter reached its maximum value, reset the counter to zero. */
  if(OS_UNLIKELY(Timer->Dyn->Value == Timer->Counter.Characteristics.MaxCountingValue))
  {
    Timer->Dyn->Value = 0;                                                                                              /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  }
  /* #20 Otherwise, increment the counter. */
  else
  {
    (Timer->Dyn->Value)++;                                                                                              /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  }

  /* #30 If the compare value (time stamp of the next job) has been reached: */
  if(OS_UNLIKELY(Timer->Dyn->Value == Timer->Dyn->Compare))
  {
    /* #40 Work of expired jobs. */
    Os_CounterWorkJobs(&(Timer->Counter));                                                                              /* SBSW_OS_FC_PRECONDITION */
  }
}

/***********************************************************************************************************************
 *  ISR(Os_TimerPitIsr)
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
ISR(Os_TimerPitIsr)
{
  P2CONST(Os_TimerIsrConfigType, AUTOMATIC, OS_CONST) me;
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) pitCounter;
  Os_IntStateType interruptState;

  me = Os_TimerThread2CounterIsr(Os_CoreGetThread());                                                                   /* SBSW_OS_TIMER_TIMERTHREAD2COUNTERISR_001 */

  /*! \note This check may be generalized by using a OSObjectType base class, which knows the concrete object type.
   *  \note This check can be switched off for non safety projects. */
  if(me->Counter->DriverType != OS_TIMERTYPE_PERIODIC_TICK)                                                             /* COV_OS_INVSTATE */
  {
    Os_ErrKernelPanic();
  }

  pitCounter = (P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST)) me->Counter;                                       /* PRQA S 0310 */ /* MD_Os_0310 */

  /* #10 Suspend interrupts. */
  Os_IntSuspend(&interruptState);                                                                                       /* SBSW_OS_FC_POINTER2LOCAL */

  /* #20 Acknowledge and reload the PIT hardware. */
  Os_Hal_TimerPitAckAndReload(pitCounter->HwConfig);                                                                    /* SBSW_OS_TIMER_HAL_TIMERPITACKANDRELOAD_001 */

  /* #30 Increment software counter. If there are expired jobs, work them off. */
  Os_TimerSwIncrement(&(pitCounter->SwCounter));                                                                        /* SBSW_OS_TIMER_TIMERSWINCREMENT_001 */

  /* #40 (EXTENDED status:) If there is already an interrupt pending (unlikely): */
  if(OS_UNLIKELY(Os_TimerPitCheckNotPending(pitCounter) == OS_CHECK_FAILED))                                            /* SBSW_OS_TIMER_HAL_TIMERPITISPENDING_001 */
  {
    /* #50 Report job overload. */
    Os_ErrReportTimerIsr(OS_STATUS_OVERLOAD);
  }

  /* #60 Resume interrupts. */
  Os_IntResume(&interruptState);                                                                                        /* SBSW_OS_FC_POINTER2LOCAL */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_6050 */

/***********************************************************************************************************************
 *  ISR(Os_TimerHrtIsr)
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
ISR(Os_TimerHrtIsr)
{
  P2CONST(Os_TimerIsrConfigType, AUTOMATIC, OS_CONST) me;
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) hrtCounter;
  Os_IntStateType interruptState;

  me = Os_TimerThread2CounterIsr(Os_CoreGetThread());                                                                   /* SBSW_OS_TIMER_TIMERTHREAD2COUNTERISR_001 */

  /*! \note This check may be generalized by using a OSObjectType base class, which knows the concrete object type.
   *  \note This check can be switched off for non safety projects. */
  if(me->Counter->DriverType != OS_TIMERTYPE_HIGH_RESOLUTION)                                                           /* COV_OS_INVSTATE */
  {
    Os_ErrKernelPanic();
  }

  hrtCounter = (P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST)) me->Counter;                                       /* PRQA S 0310 */ /* MD_Os_0310 */

  /* #10 Suspend interrupts. */
  Os_IntSuspend(&interruptState);                                                                                       /* SBSW_OS_FC_POINTER2LOCAL */

  /* #20 Acknowledge the timer hardware, so that new timer interrupts can be triggered. */
  Os_Hal_TimerFrtAcknowledge(hrtCounter->HwConfig);                                                                     /* SBSW_OS_TIMER_HAL_TIMERFRTACKANDRELOAD_001 */

  /* #30 Work of expired jobs. */
  Os_CounterWorkJobs(&hrtCounter->Counter);                                                                             /* SBSW_OS_TIMER_COUNTERWORKJOBS_001 */

  /* #40 Resume interrupts. */
  Os_IntResume(&interruptState);                                                                                        /* SBSW_OS_FC_POINTER2LOCAL */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_6050 */

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* module specific MISRA deviations:
 */

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_OS_TIMER_TIMERGETDYN_001
 \DESCRIPTION    Write access to the dynamic data of a Timer.  The Timer pointer is passed as argument to the
                 caller function. Precondition ensures that the argument pointer is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \N [CM_OS_TIMERGETDYN_N]

\ID SBSW_OS_TIMER_HAL_TIMERPITINIT_001
 \DESCRIPTION    Os_Hal_TimerPitInit is called with a HwConfig value derived from a pointer passed as argument to the
                 caller function. Precondition ensures that the argument pointer is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERPITHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTINIT_001
 \DESCRIPTION    Os_Hal_TimerFrtInit is called with a HwConfig value derived from a pointer passed as argument to the
                 caller function. Precondition ensures that the argument pointer is valid. The compliance of the
                 precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTTRIGGERIRQ_001
 \DESCRIPTION    Os_Hal_TimerFrtTriggerIrq is called with a HwConfig value derived from a pointer passed as
                 argument to the caller function. Precondition ensures that the argument pointer is valid. The
                 compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTSETCOMPAREVALUE_001
 \DESCRIPTION    Os_Hal_TimerFrtSetCompareValue is called with a HwConfig value derived from a pointer passed as
                 argument to the caller function. Precondition ensures that the argument pointer is valid. The
                 compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTACKNOWLEDGE_001
 \DESCRIPTION    Os_Hal_TimerFrtAcknowledge is called with a HwConfig value derived from a pointer passed as
                 argument to the caller function. Precondition ensures that the argument pointer is valid. The
                 compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTGETCOUNTERVALUE_001
 \DESCRIPTION    Os_Hal_TimerFrtGetCounterValue is called with a HwConfig value derived from a pointer passed as
                 argument to the caller function. Precondition ensures that the argument pointer is valid. The
                 compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERPITACKANDRELOAD_001
 \DESCRIPTION    Os_Hal_TimerPitAckAndReload is called with a HwConfig value derived from the return value of
                 Os_TimerThread2CounterIsr.
 \COUNTERMEASURE \R [CM_OS_TIMERTHREAD2COUNTERISR_R]
                 \M [CM_OS_TIMERPITHWCONFIG_M]

\ID SBSW_OS_TIMER_HAL_TIMERFRTACKANDRELOAD_001
 \DESCRIPTION    Os_Hal_TimerFrtAcknowledge is called with a HwConfig value derived from the return value of
                 Os_TimerThread2CounterIsr.
 \COUNTERMEASURE \R [CM_OS_TIMERTHREAD2COUNTERISR_R]
                 \M [CM_OS_TIMERHRTHWCONFIG_M]

\ID SBSW_OS_TIMER_TIMERSWINCREMENT_001
 \DESCRIPTION    Os_TimerSwIncrement is called with a value derived from the return value of
                 Os_TimerThread2CounterIsr.
 \COUNTERMEASURE \R [CM_OS_TIMERTHREAD2COUNTERISR_R]

\ID SBSW_OS_TIMER_COUNTERWORKJOBS_001
 \DESCRIPTION    Os_CounterWorkJobs is called with a value derived from the return value of
                 Os_TimerThread2CounterIsr.
 \COUNTERMEASURE \R [CM_OS_TIMERTHREAD2COUNTERISR_R]

\ID SBSW_OS_TIMER_HAL_TIMERPITISPENDING_001
 \DESCRIPTION    Os_Hal_TimerPitIsPending is called with a HwConfig value derived from the return value of
                 Os_TimerThread2CounterIsr.
 \COUNTERMEASURE \R [CM_OS_TIMERTHREAD2COUNTERISR_R]
                 \M [CM_OS_TIMERPITHWCONFIG_M]

\ID SBSW_OS_TIMER_TIMERTHREAD2COUNTERISR_001
 \DESCRIPTION    Os_TimerThread2CounterIsr is called with the return value of Os_CoreGetThread.
 \COUNTERMEASURE \N [CM_OS_COREGETTHREAD_N]

SBSW_JUSTIFICATION_END */

/*
\CM CM_OS_TIMERTHREAD2COUNTERISR_R
      Ensured by implementation the the returned value is valid.

\CM CM_OS_TIMERHRTGETCOUNTER_N
      Precondition ensures that the pointer is valid. The compliance of the precondition is check during review.

\CM CM_OS_TIMERPITHWCONFIG_M
      Verify that the HwConfig reference in each PIT instance is a non NULL_PTR.

\CM CM_OS_TIMERHRTHWCONFIG_M
      Verify that the HwConfig reference in each HRT instance is a non NULL_PTR.

\CM CM_OS_TIMERGETDYN_N
      As each object of an abstract class is always part of a concrete class, the concrete class
      guarantees, that the Dyn pointer is valid.

 */
/*!
 * \}
 */

/**********************************************************************************************************************
 *  END OF FILE: Os_Timer.c
 *********************************************************************************************************************/
