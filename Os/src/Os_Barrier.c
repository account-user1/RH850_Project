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
 * \addtogroup Os_Barrier
 * \{
 *
 * \file
 * \brief       Contains the implementation of the barrier management.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_BARRIER_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Barrier_Types.h"
#include "Os_Barrier.h"

/* Os kernel module dependencies */
#include "Os_Cfg.h"

/* Os hal dependencies */

#define OS_BARRIER_COUNTERTHRESHOLD     ((Os_BarrierCounterType)(1u << ((sizeof(Os_BarrierCounterType) * 8) - 1)))

/***********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

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
 *  Os_BarrierIsCounterLo()
 **********************************************************************************************************************/
/*! \brief          Returns whether Value is lower than Compare (!0), or not (0).
 *  \details        --no details--
 *
 *  \param[in]      Value   The value to check.
 *  \param[in]      Compare The compare value.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsCounterLo,
(
  Os_BarrierCounterType Value,
  Os_BarrierCounterType Compare
));

/***********************************************************************************************************************
 *  Os_BarrierIsCounterGe()
 **********************************************************************************************************************/
/*! \brief          Returns whether Value is equal to or greater than Compare (!0), or not (0).
 *  \details        --no details--
 *
 *  \param[in]      Value   The value to check.
 *  \param[in]      Compare The compare value.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsCounterGe,
(
  Os_BarrierCounterType Value,
  Os_BarrierCounterType Compare
));

/***********************************************************************************************************************
 *  Os_BarrierGetDyn()
 **********************************************************************************************************************/
/*! \brief          Returns the Dyn member of the given barrier.
 *  \details        --no details--
 *
 *  \param[in]      Barrier   The barrier query.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2VAR(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT),  OS_CODE,
OS_ALWAYS_INLINE,
Os_BarrierGetDyn,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
));

/***********************************************************************************************************************
 *  Os_BarrierGetAttendeeDyn()
 **********************************************************************************************************************/
/*! \brief          Returns the Dyn object of the given barrier attendee.
 *  \details        --no details--
 *
 *  \param[in]      Barrier     The barrier query.
 *  \param[in]      AttendeeIdx The attendee of interest.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Given index is valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_BarrierAttendeeRefType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierGetAttendeeDyn,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeIdxType AttendeeIdx
));

/***********************************************************************************************************************
 *  Os_BarrierGetLowestCounter()
 **********************************************************************************************************************/
/*! \brief          Returns the lowest counter value of all attached barriers.
 *  \details        --no details--
 *
 *  \param[in]      Barrier   The barrier query.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_BarrierCounterType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierGetLowestCounter,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
));

/***********************************************************************************************************************
 *  Os_BarrierIsSynchronized()
 **********************************************************************************************************************/
/*! \brief          Returns the whether the given attendee is synchronized or detached (!0), or not (0).
 *  \details        --no details--
 *
 *  \param[in]      Barrier     The barrier to query.
 *  \param[in]      AttendeeIdx The attendee of interest.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Given index is valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsSynchronized,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeIdxType AttendeeIdx
));

/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_BarrierIsCounterLo()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsCounterLo,
(
  Os_BarrierCounterType Value,
  Os_BarrierCounterType Compare
))
{
  /* #10 Return whether Value is lower than Compare. */
  return (Os_StdReturnType)((Value - Compare) >= OS_BARRIER_COUNTERTHRESHOLD);
}

/***********************************************************************************************************************
 *  Os_BarrierIsCounterGe()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsCounterGe,
(
  Os_BarrierCounterType Value,
  Os_BarrierCounterType Compare
))
{
  /* #10 Return whether Value is greater than or equal to Compare. */
  return (Os_StdReturnType)(Os_BarrierIsCounterLo(Value, Compare) == 0);
}

/***********************************************************************************************************************
 *  Os_BarrierGetDyn()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2VAR(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT),  OS_CODE,
OS_ALWAYS_INLINE,
Os_BarrierGetDyn,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
))
{
  return Barrier->Dyn;
}

/***********************************************************************************************************************
 *  Os_BarrierGetAttendeeDyn()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_BarrierAttendeeRefType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierGetAttendeeDyn,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeIdxType AttendeeIdx
))
{
  return Barrier->AttendeeRefs[AttendeeIdx];
}

/***********************************************************************************************************************
 *  Os_BarrierGetLowestCounter()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_BarrierCounterType,  OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierGetLowestCounter,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
))
{
  Os_BarrierCounterType result;
  Os_BarrierAttendeeIdxType attendeeIdx;
  Os_BarrierCounterType attendeeCounter;
  Os_BarrierAttendeeRefType attendee;

  /* #10 Initial result is 0. */
  result = 0;

  /* #20 Iterate over all attendees. */
  for(attendeeIdx = 0; attendeeIdx < Barrier->AttendeeCount; ++attendeeIdx)
  {
    attendee = Os_BarrierGetAttendeeDyn(Barrier, attendeeIdx);                                                          /* SBSW_OS_FC_PRECONDITION */

    /* #30 If the attendee is attached and is not me, take its counter value as intermediate result. */
    if((attendee->AttendeeState == OS_BARRIERATTENDEESTATE_ATTACHED) && (attendee != Barrier->Dyn))
    {
      /* #40 Abort iteration. */
      result = attendee->Counter;
      attendeeIdx++;                                                                                                    /* PRQA S 2469 */ /* MD_Os_2469 */
      break;
    }
  }

  /* #50 Continue iteration over all attendees. */
  for(; attendeeIdx < Barrier->AttendeeCount; ++attendeeIdx)
  {
    attendee = Os_BarrierGetAttendeeDyn(Barrier, attendeeIdx);                                                          /* SBSW_OS_FC_PRECONDITION */
    attendeeCounter = attendee->Counter;

    /* #60 If the attendee is attached, is not me and has a different counter value: */
    if(     (attendee->AttendeeState == OS_BARRIERATTENDEESTATE_ATTACHED)
        &&  (attendee != Barrier->Dyn)
        &&  (result != attendeeCounter))                                                                                /* COV_OS_HALPLATFORMNEEDMORETHAN2CORES */
    {
      /* #70 Select the lower counter value and abort. */
      if(Os_BarrierIsCounterLo(attendeeCounter, result) != 0)
      {
        result = attendeeCounter;
      }

      break;
    }
  }

  return (Os_BarrierCounterType)result;
}

/***********************************************************************************************************************
 *  Os_BarrierIsSynchronized()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_BarrierIsSynchronized,
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeIdxType AttendeeIdx
))
{
  Os_BarrierAttendeeRefType attendee;

  attendee = Os_BarrierGetAttendeeDyn(Barrier, AttendeeIdx);                                                            /* SBSW_OS_FC_PRECONDITION */

  /* #10 If the addressed attendee is detached or has already reached the counter value, the result
   * is !0, otherwise 0. */
  return (Os_BarrierIsCounterGe(attendee->Counter, Barrier->Dyn->Counter) != 0)
      || (attendee->AttendeeState == OS_BARRIERATTENDEESTATE_DETACHED );
}

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_BarrierInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_BarrierInit
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeStateType InitialState
)
{
  P2VAR(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT) dyn;

  dyn = Os_BarrierGetDyn(Barrier);                                                                                      /* SBSW_OS_FC_PRECONDITION */

  /* #10 Set attendee state to initial state and clear counter. */
  dyn->AttendeeState = InitialState;                                                                                    /* SBSW_OS_BR_BARRIERGETDYN_001 */
  dyn->Counter = 0;                                                                                                     /* SBSW_OS_BR_BARRIERGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_BarrierAttach()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_BarrierAttach
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
)
{
  Os_BarrierCounterType counterSnapshot;
  P2VAR(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT) dyn;

  dyn = Os_BarrierGetDyn(Barrier);                                                                                      /* SBSW_OS_FC_PRECONDITION */

  /* #10 Get the lowest counter value of all attendees which are attached to this barrier. */
  counterSnapshot = Os_BarrierGetLowestCounter(Barrier);                                                                /* SBSW_OS_FC_PRECONDITION */

  do
  {
    /* #20 Attach to the barrier. */
    dyn->Counter = counterSnapshot;                                                                                     /* SBSW_OS_BR_BARRIERGETDYN_001 */
    dyn->AttendeeState = OS_BARRIERATTENDEESTATE_ATTACHED;                                                              /* SBSW_OS_BR_BARRIERGETDYN_001 */

    /* #30 Get an overall counter snapshot. */
    counterSnapshot = Os_BarrierGetLowestCounter(Barrier);                                                              /* SBSW_OS_FC_PRECONDITION */

    /* #40 Loop while lowest counter value changed during attach step. */
  }while(dyn->Counter != counterSnapshot);                                                                              /* COV_OS_BRRACECONDITION */
}

/***********************************************************************************************************************
 *  Os_BarrierDetach()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_BarrierDetach
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
)
{
  Os_BarrierGetDyn(Barrier)->AttendeeState = OS_BARRIERATTENDEESTATE_DETACHED;                                          /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_BR_BARRIERGETDYN_001 */
}

/***********************************************************************************************************************
 *  Os_BarrierSynchronize()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_BarrierSynchronize
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
)
{
  Os_StdReturnType synchronized;
  Os_BarrierAttendeeIdxType attendeeIdx;

  /* #10 Increment the barrier counter. */
  Os_BarrierGetDyn(Barrier)->Counter++;                                                                                 /* SBSW_OS_FC_PRECONDITION */ /* SBSW_OS_BR_BARRIERGETDYN_001 */

  /* #20 Spin until all attendees are synchronized. */
  do
  {
    synchronized = TRUE;

    for(attendeeIdx = 0; attendeeIdx < Barrier->AttendeeCount; ++attendeeIdx)
    {
      synchronized = (Os_BarrierIsSynchronized(Barrier, attendeeIdx)) && synchronized;                                  /* SBSW_OS_FC_PRECONDITION */
    }

    /* #30 Perform NOP. */
    Os_Hal_CoreNop();

  }while(synchronized == FALSE);
}

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* module specific MISRA deviations:
 */

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_OS_BR_BARRIERGETDYN_001
 \DESCRIPTION    Write access to the dynamic data of a barrier.
 \COUNTERMEASURE \M [CM_OS_BARRIER_DYN_M]

SBSW_JUSTIFICATION_END */

/*

\CM CM_OS_BARRIER_DYN_M
      Verify that the Barrier Dyn pointer of each Barrier object is a non NULL_PTR.

 */

/* START_COVERAGE_JUSTIFICATION
 *

\ID COV_OS_BRRACECONDITION
   \ACCEPT XF
   \REASON True condition may not be stimulated by tests due to race condition: Two cores have to perform
           synchronization while a third core is attached to the barrier.

END_COVERAGE_JUSTIFICATION */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Barrier.c
 **********************************************************************************************************************/
