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
 * \addtogroup Os_Timer
 *
 * \{
 *
 * \file
 * \brief       Interface implementation to high level timer hardware handling.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_TIMER_H)                                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_TIMER_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_TimerInt.h"

/* Os kernel module dependencies */
# include "Os_Common.h"
# include "Os_Counter.h"
# include "Os_Isr.h"

/* Os HAL dependencies */
# include "Os_Hal_Timer.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_TIMER)
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

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_TimerSwInit()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSwInit,
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Timer->Dyn->Value = 0;                                                                                                /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->Compare = 0;                                                                                              /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  /* Check that macro and configuration are consistent. */
  Os_Assert((Os_StdReturnType)( Timer->Counter.Characteristics.MaxCountingValue
          == OS_TIMERSW_GETMAXCOUNTINGVALUE(Timer->Counter.Characteristics.MaxAllowedValue)));

  Os_Assert((Os_StdReturnType)( Timer->Counter.Characteristics.MaxDifferentialValue
          == OS_TIMERSW_GETMAXDIFFERENTIALVALUE(Timer->Counter.Characteristics.MaxAllowedValue)));
}

/***********************************************************************************************************************
 *  Os_TimerPitInit()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerPitInit,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Os_TimerSwInit(&(Timer->SwCounter));                                                                                  /* SBSW_OS_FC_PRECONDITION */

  /* Check that macro and configuration are consistent. */
  Os_Assert((Os_StdReturnType)( Timer->SwCounter.Counter.Characteristics.MaxCountingValue
          == OS_TIMERPIT_GETMAXCOUNTINGVALUE(Timer->SwCounter.Counter.Characteristics.MaxAllowedValue)));

  Os_Assert((Os_StdReturnType)( Timer->SwCounter.Counter.Characteristics.MaxDifferentialValue
          == OS_TIMERPIT_GETMAXDIFFERENTIALVALUE(Timer->SwCounter.Counter.Characteristics.MaxAllowedValue)));

}

/***********************************************************************************************************************
 *  Os_TimerHrtInit()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtInit,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Timer->Dyn->Value = 0;                                                                                                /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->LastCounterValue = 0;                                                                                     /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->Compare = 0;                                                                                              /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->ValueMask = 0;                                                                                            /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->HwTimeAtLogicalZero = 0;                                                                                  /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  /* Check that macro and configuration are consistent. */
  Os_Assert((Os_StdReturnType)( Timer->Counter.Characteristics.MaxCountingValue
          == OS_TIMERHRT_GETMAXCOUNTINGVALUE(Timer->Counter.Characteristics.MaxAllowedValue)));

  Os_Assert((Os_StdReturnType)( Timer->Counter.Characteristics.MaxDifferentialValue
          == OS_TIMERHRT_GETMAXDIFFERENTIALVALUE(Timer->Counter.Characteristics.MaxAllowedValue)));
}

/***********************************************************************************************************************
 *  Os_TimerSwStart()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSwStart,
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  /* Nothing to be done for software counter, as there is no underlying hardware. */
  OS_IGNORE_UNREF_PARAM(Timer);                                                                                         /* PRQA S 3112 */ /* MD_Os_3112 */
}

/***********************************************************************************************************************
 *  Os_TimerPitStart()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerPitStart,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Os_Hal_TimerPitInit(Timer->HwConfig);                                                                                 /* SBSW_OS_TIMER_HAL_TIMERPITINIT_001 */
}

/***********************************************************************************************************************
 *  Os_TimerHrtStart()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtStart,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Os_Hal_TimerFrtTickType timeZero;

  /* #10 Initialize (start) the FRT timer. */
  Os_Hal_TimerFrtInit(Timer->HwConfig);                                                                                 /* SBSW_OS_TIMER_HAL_TIMERFRTINIT_001 */

  timeZero = Os_Hal_TimerFrtGetCounterValue(Timer->HwConfig);                                                           /* SBSW_OS_TIMER_HAL_TIMERFRTGETCOUNTERVALUE_001 */
  Timer->Dyn->HwTimeAtLogicalZero = timeZero;                                                                           /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  /* #20 Correct the timer data (to support the case of FRT start by reset). */
  Timer->Dyn->ValueMask = Timer->Counter.Characteristics.MaxCountingValue;        /* allow timer Value to increase. */  /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Timer->Dyn->LastCounterValue = timeZero;                                        /* store current counter value.   */  /* SBSW_OS_TIMER_TIMERGETDYN_001 */
  Os_TimerHrtSetCompareValue(Timer, Timer->Dyn->Compare);                         /* set the initial compare value. */  /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TimerSwGetValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSwGetValue,
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  return Timer->Dyn->Value;
}

/***********************************************************************************************************************
 *  Os_TimerSwSetCompareValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_TimerSwSetCompareValue,
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType ExpirationTime
))
{
  Timer->Dyn->Compare = ExpirationTime;                                                                                 /* SBSW_OS_TIMER_TIMERGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_TimerSwUserModulo()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSwUserModulo,
(
  P2CONST(Os_TimerSwConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType Value
))
{
  Os_TickType result = Value;

  /* #10 Subtract one user cycle if Value exceeds the MaxAllowedValue. */
  if(Value > Timer->Counter.Characteristics.MaxAllowedValue)
  {
    result -= (Timer->Counter.Characteristics.MaxAllowedValue + 1);
  }

  /* Check that the calculated value is in a valid range (0 <= Value <= MaxAllowedValue). */
  Os_Assert((Os_StdReturnType)(result <= Timer->Counter.Characteristics.MaxAllowedValue));

  return result;
}

/***********************************************************************************************************************
 *  Os_TimerPitGetValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerPitGetValue,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  return Os_TimerSwGetValue(&(Timer->SwCounter));                                                                       /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TimerPitSetCompareValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_TimerPitSetCompareValue,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType ExpirationTime
))
{
  Os_TimerSwSetCompareValue(&(Timer->SwCounter), ExpirationTime);                                                       /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TimerPitUserModulo()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerPitUserModulo,
(
  P2CONST(Os_TimerPitConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType Value
))
{
  return Os_TimerSwUserModulo(&Timer->SwCounter, Value);                                                                /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_TimerHrtGetCounter()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_CounterConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_TimerHrtGetCounter,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  return &(Timer->Counter);
}

/***********************************************************************************************************************
 *  Os_TimerHrtTickType2FrtTickType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
Os_Hal_TimerFrtTickType, OS_CODE, OS_ALWAYS_INLINE, Os_TimerHrtTickType2FrtTickType,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer,
  TickType Value
))
{
  /*! \note Better style: limit the deviation to the FRT bit width. */
  return (Timer->Dyn->HwTimeAtLogicalZero + (Os_Hal_TimerFrtTickType)Value);
}

/***********************************************************************************************************************
 *  Os_TimerHrtSetCompareValue()
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
 * \note Os_TimerHrtSetCompareValue does not yet support the case of 16 bit Frt-Timer. In case that the bit width
 *       of the hardware time is less than 32 bit, the maximum relative time to the next interrupt must be
 *       limited to a half the time between two timer overflows.
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_TimerHrtSetCompareValue,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType ExpirationTime
))
{
  Os_TickType now;

  /* #10 Store the ExpirationTime for the case that the compare difference does not fit into the hardware part
   *     of the counter. */
  Timer->Dyn->Compare = ExpirationTime;                                                                                 /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  /* #20 Set the compare value. */
  Os_Hal_TimerFrtSetCompareValue(Timer->HwConfig, Os_TimerHrtTickType2FrtTickType(Timer, ExpirationTime));              /* SBSW_OS_TIMER_HAL_TIMERFRTSETCOMPAREVALUE_001 */ /* SBSW_OS_FC_PRECONDITION */

  /* #30 Check whether the ExpirationTime is already reached. */
  now = Os_TimerHrtGetValue(Timer);                                                                                     /* SBSW_OS_FC_PRECONDITION */

  /* #40 If new compare value is already in the past or now: */
  if(OS_UNLIKELY((Os_CounterIsFutureValue(&(Timer->Counter), ExpirationTime, now) == 0)))                               /* SBSW_OS_FC_PRECONDITION */
  {
    /* #50 Trigger interrupt, so the violation is handled after the thread switch is completed. */
    Os_Hal_TimerFrtTriggerIrq(Timer->HwConfig);                                                                         /* SBSW_OS_TIMER_HAL_TIMERFRTTRIGGERIRQ_001 */
  }
}

/***********************************************************************************************************************
 *  Os_TimerHrtGetCompareValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtGetCompareValue,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  return Timer->Dyn->Compare;
}

/***********************************************************************************************************************
 *  Os_TimerHrtAcknowledge()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtAcknowledge,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Os_Hal_TimerFrtAcknowledge(Timer->HwConfig);                                                                          /* SBSW_OS_TIMER_HAL_TIMERFRTACKNOWLEDGE_001 */
}

/***********************************************************************************************************************
 *  Os_TimerHrtUserModulo()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtUserModulo,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer,
  Os_TickType Value
))
{
  return (Value & Timer->Counter.Characteristics.MaxAllowedValue);
}

/***********************************************************************************************************************
 *  Os_TimerHrtGetValue()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtGetValue,
(
  P2CONST(Os_TimerHrtConfigType, AUTOMATIC, OS_CONST) Timer
))
{
  Os_TickType now;
  Os_TickType timePassed;

  /* #10 Get the current hardware counter value. */
  now = (Os_TickType)Os_Hal_TimerFrtGetCounterValue(Timer->HwConfig) & (Timer->Dyn->ValueMask);                         /* SBSW_OS_TIMER_HAL_TIMERFRTGETCOUNTERVALUE_001 */

  /* #20 Calculate how much time has passed, since we have read from the hardware the last time. */
  timePassed = (now - Timer->Dyn->LastCounterValue);
  Timer->Dyn->LastCounterValue = now;                                                                                   /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  /* #30 Add this time to the current counter value and return it. */
  Timer->Dyn->Value += timePassed;                                                                                      /* SBSW_OS_TIMER_TIMERGETDYN_001 */

  return Timer->Dyn->Value;
}

/***********************************************************************************************************************
 *  Os_TimerSwAbsCounter2AbsTimerValue()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSwAbsCounter2AbsTimerValue,
(
  Os_TickType MaxAllowedValue,
  Os_TickType Now,
  Os_TickType CounterValue
))
{
  Os_TickType timerValue;
  Os_TickType timerFirstCycle;
  Os_TickType timerSecondCycle;

  timerFirstCycle = CounterValue;
  timerSecondCycle = CounterValue + MaxAllowedValue + 1;

  /* #10 If CounterValue is bigger than Now (implies that Now is in the first cycle). */
  if(CounterValue > Now)
  {
    /* #20 Set return value to CounterValue, the expiration time will be reached within the first cycle. */
    timerValue = timerFirstCycle;
  }
  /* #30 Else if CounterValue+MaxallowedValue+1 is bigger than Now (Now may be in first or second cycle). */
  else if(timerSecondCycle > Now)
  {
    /*#40 Set return value to CounterValue+MaxallowedValue+1, the expiration time will be reached in the second cycle.*/
    timerValue = timerSecondCycle;
  }
  /* #50 Else (Now is in the second cycle) */
  else
  {
    /* #60 Set return value to CounterValue, the expiration time will be reached in the first cycle. */
    timerValue = timerFirstCycle;
  }

  return timerValue;
}

/***********************************************************************************************************************
 *  Os_TimerPitAbsCounter2AbsTimerValue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerPitAbsCounter2AbsTimerValue,
(
  Os_TickType MaxAllowedValue,
  Os_TickType Now,
  Os_TickType CounterValue
))
{
  return Os_TimerSwAbsCounter2AbsTimerValue(MaxAllowedValue, Now, CounterValue);
}

/***********************************************************************************************************************
 *  Os_TimerHrtAbsCounter2AbsTimerValue()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerHrtAbsCounter2AbsTimerValue,
(
  Os_TickType MaxAllowedValue,
  Os_TickType MaxCountingValue,
  Os_TickType Now,
  Os_TickType CounterValue
))
{
  Os_TickType timerValue;

  /* #10 Take the upper bits from the timer (Now) and the lower bits from the CounterValue. */
  timerValue = (Now & (~(MaxAllowedValue))) + CounterValue;

  /* #20 If this time stamp is already in the past or now, take the next cycle. */
  if(timerValue <= Now)
  {
    timerValue += (MaxAllowedValue + 1);
  }

  return (timerValue & MaxCountingValue);
}

/***********************************************************************************************************************
 *  Os_TimerAdd()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerAdd,
(
  Os_TickType MaxAllowedValue,
  Os_TickType MaxCountingValue,
  Os_TickType Value,
  Os_TickType Add
))
{
  Os_TickType result;

# if defined (OS_CFG_COMPILER_TASKING)
#  pragma warning 549   /* This suppresses the warning regard to "condition always true". This can be suppressed,
                           since this is just error assertion */
# endif

  Os_Assert((Os_StdReturnType)(Value <= MaxCountingValue));
  Os_Assert((Os_StdReturnType)(Add <=  MaxAllowedValue));

# if defined (OS_CFG_COMPILER_TASKING)
#  pragma warning restore
# endif

  /* #10 If the sum of Value and Add exceeds the MaxCountingValue, subtract MaxCountingValue+1 from the sum. */
  if(Add > (MaxCountingValue - Value))
  {
    Os_TickType mod;

    /* 1.             Add > MaxCountingValue - Value            - see if-statement
     * 2.  => Add + Value > MaxCountingValue
     * 3.  => There is a value overflow.
     */
    mod = MaxCountingValue + 1;
    result = (Value - mod) + Add;
  }
  /* #20 Else add Value and Add. */
  else
  {
    result = Value + Add;
  }

  /* Check that the calculated value is in a valid range (0 <= Value < mod). */
  Os_Assert((Os_StdReturnType)(result <= MaxCountingValue));

  return result;
}

/***********************************************************************************************************************
 *  Os_TimerSub()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_TickType, OS_CODE, OS_ALWAYS_INLINE,                                    /* PRQA S 3219 */ /* MD_Os_3219 */
Os_TimerSub,
(
  Os_TickType MaxAllowedValue,
  Os_TickType MaxCountingValue,
  Os_TickType Value,
  Os_TickType Sub
))
{
  Os_TickType result;
  Os_TickType mod;

  mod = MaxCountingValue + 1;

  Os_Assert((Os_StdReturnType)(Value <= MaxCountingValue));
  Os_Assert((Os_StdReturnType)(Sub <=  MaxAllowedValue));

  /* #10 If the Sub is greater than Value, add MaxCountingValue+1 to Value and subtract Sub. */
  if(Sub > Value)
  {
    result = (Value + mod) - Sub;
  }
  /* #20 Else subtract Sub from Value. */
  else
  {
    result = Value - Sub;
  }

  /* Check that the calculated value is in a valid range (0 <= Value < mod). */
  Os_Assert((Os_StdReturnType)(result <= MaxCountingValue));

  return result;
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_TIMER)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_TIMER_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/**********************************************************************************************************************
 *  END OF FILE: Os_TimerInt.h
 *********************************************************************************************************************/
