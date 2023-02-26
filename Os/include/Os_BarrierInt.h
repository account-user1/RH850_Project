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
 *  \ingroup     Os_Kernel
 *  \defgroup    Os_Barrier Barrier
 *  \brief       Provides synchronization barriers for OS internal (and later on also external) use.
 *  \details
 *  Barriers
 *  ========
 *  Barriers provide a mechanism for several parallel threads of control to wait until all of them have reached the
 *  barrier synchronization point. This is used OS internally to achieve that all cores of a controller enter these
 *  execution paths at the same time.
 *
 *  Each barrier consists of several attendees on different cores.
 *
 *  The basic idea of the barrier synchronization implementation is that each attendee has a synchronization counter.
 *  It increments this counter at a synchronization point and waits until all other counters have reached this value.
 *  So one barrier allows the synchronization of all attendees at several synchronization points.
 *
 *  Concurrent data access from different attendees is possible, as each attendee only changes its own counter and
 *  just reads the counters of all other attendees (atomic read of the counter variables must be possible).
 *
 *  Initially all attendees are detached from the barrier. When the first attendee is attached, its counter is set to
 *  zero. When further attendees are attached to the barrier, they derive the initial state of their counter variable
 *  from the already attached attendees. If multiple attendees have already been attached and have currently different
 *  counter values, the lowest value is chosen. The difference in counter value means that the attendees with higher
 *  counter values have already reached the synchronization point while the attendees with lower counter values have
 *  not. The newly attached attendee has to reach the synchronization point before the barrier is opened.
 *
 *  Attendees need to be configured statically and may be attached or detached at any time. Newly attached attendees
 *  will skip the synchronization points which have already been reached by all other attached attendees. In case
 *  the (asynchronous) attachment of a new attendee occurs right at the time when the last of the already attached
 *  attendees reaches a synchronization point, it will be unsure whether or not the new attendee is still considered
 *  for this synchronization point or just for the next one.
 *
 *  For each pair of attached attendees the difference between the counters is one at most. Comparison between to
 *  counter values is performed, by checking the difference between both values:
 *
 *  Let d = barrier1.Counter - barrier2.Counter
 *   - If      d == 0 => Values are identical.
 *   - Else if d == 1 => barrier1 has reached the barrier, barrier 2 not.
 *   - Else           => barrier2 has reached the barrier, barrier 1 has not.
 *
 *  \trace CREQ-52
 *
 *
 *  \{
 *
 *  \file
 *  \brief       This module provides the internal barrier management interface.
 *  \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_BARRIERINT_H)                                                                                           /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_BARRIERINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Barrier_Types.h"

/* Os kernel module dependencies */
# include "Os_Cfg.h"
# include "Os_Common_Types.h"
# include "Os_SpinlockInt.h"
# include "Os_ErrorInt.h"

/* Os hal dependencies */
# include "Os_Hal_CompilerInt.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_BARRIER)
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
typedef uint8_least Os_BarrierAttendeeIdxType;
typedef uint8_least Os_BarrierCounterType;
typedef P2CONST(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT) Os_BarrierAttendeeRefType;

typedef enum
{
  /*! The attendee is detached from the barrier and not considered during synchronization. */
  OS_BARRIERATTENDEESTATE_DETACHED,

  /*! The attendee is considered during synchronization. */
  OS_BARRIERATTENDEESTATE_ATTACHED
}Os_BarrierAttendeeStateType;


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/
/*! Dynamic data to a barrier. */
struct Os_BarrierBaseType_Tag
{
  /*! Defines whether this attendee is considered during synchronization. */
  Os_BarrierAttendeeStateType AttendeeState;

  /*! Counts the number of cores which have not reached the barrier until now. */
  Os_BarrierCounterType Counter;
};


/*! Static data to a barrier. */
struct Os_BarrierBaseConfigType_Tag
{
  /*! The dynamic data of a barrier. */
  P2VAR(Os_BarrierBaseType volatile, AUTOMATIC, OS_VAR_NOINIT) Dyn;

  /*! List of references to the dynamic data of all attendees assigned to this barrier (including this attendee). */
  P2CONST(Os_BarrierAttendeeRefType, AUTOMATIC, OS_VAR_NOINIT) AttendeeRefs;

  /*! The number of attendees, assigned to the barrier including this. */
  Os_BarrierAttendeeIdxType AttendeeCount;
};


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */
/***********************************************************************************************************************
 *  Os_BarrierInit()
 **********************************************************************************************************************/
/*! \brief          Initializes the barrier (Init-Step2).
 *  \details        Attendee is not attached to the barrier.
 *
 *  \param[in,out]  Barrier       The barrier to be initialized.
 *  \param[in]      InitialState  Defines whether the attendee is initially attached.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            The counter value of each other initialized attendee is '0'.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_BarrierInit
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier,
  Os_BarrierAttendeeStateType InitialState
);


/***********************************************************************************************************************
 *  Os_BarrierAttach()
 **********************************************************************************************************************/
/*! \brief          Tells the barrier that the caller has to be synchronized at the next barrier.
 *  \details        --no details--
 *
 *  \param[in,out]  Barrier   The barrier to synchronize on.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            Attendee is detached from the barrier.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_BarrierAttach
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
);


/***********************************************************************************************************************
 *  Os_BarrierDetach()
 **********************************************************************************************************************/
/*! \brief          Tells the barrier that the caller does not have to be synchronized or is already waiting for
 *                  becoming synchronous.
 *  \details        --no details--
 *
 *  \param[in,out]  Barrier   The barrier to skip.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different objects.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            Attendee is attached to the barrier.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_BarrierDetach
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
);


/***********************************************************************************************************************
 *  Os_BarrierSynchronize()
 **********************************************************************************************************************/
/*! \brief          Enters the barrier and waits until all attendees are synchronized.
 *  \details        -- no details --
 *
 *  \param[in,out]  Barrier   The synchronization barrier.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_BarrierSynchronize
(
  P2CONST(Os_BarrierBaseConfigType, AUTOMATIC, OS_VAR_NOINIT) Barrier
);


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


#if !defined(OS_VCAST_INSTRUMENTATION_OS_BARRIER)
/*VCAST_DONT_INSTRUMENT_END*/
#endif


#endif /* OS_BARRIERINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_BarrierInt.h
 **********************************************************************************************************************/
