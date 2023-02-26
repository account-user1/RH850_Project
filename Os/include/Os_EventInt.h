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
 *  \defgroup    Os_Event  Event
 *  \brief       Event management
 *  \details
 *
 *  \trace CREQ-106
 *
 *  \{
 *
 *  \file
 *  \brief       Internal event management interface.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_EVENTINT_H)                                                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_EVENTINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os module dependencies */
# include "Os_CommonInt.h"
# include "Os_Task_Types.h"
# include "Os_Error_Types.h"

/* Os Hal dependencies */
# include "Os_Hal_CompilerInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_EVENT)
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
/*! Event management state for one task.
 * \details Two masks are required (Waiting and Set), because events can be set, before the task is waiting for it. */
typedef struct
{
   /*! Event mask to save events the task is waiting for. */
   volatile EventMaskType Waiting;

   /*! Event mask to save events which have been set. */
   volatile EventMaskType Triggered;
} Os_EventStateType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_EventInit()
 **********************************************************************************************************************/
/*! \brief          Initialize a given event management state.
 *  \details        Called for the first time in Init-Step3 and later on whenever a task is started.
 *
 *  \param[in,out]  Events  Event management state to initialize.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_EventInit,
(
  P2VAR(Os_EventStateType, AUTOMATIC, OS_VAR_NOINIT) Events
));


/***********************************************************************************************************************
 *  Os_EventSetLocal()
 **********************************************************************************************************************/
/*! \brief          Local function to set events on the local core.
 *  \details        --no details--
 *
 *  \param[in,out]  Task        The task which shall be modified.
 *  \param[in]      Mask        The events which shall be set.
 *
 *  \retval         OS_STATUS_OK        No errors.
 *  \retval         OS_STATUS_STATE_1   (EXTENDED status:) Events can not be set as the referenced task is in the
 *                                      SUSPENDED state.
 *  \retval         OS_STATUS_NOTACCESSIBLE_1 (Service Protection:) Given object's owner application is not accessible.
 *
 *  \context        TASK|ISR2
 *
 *  \reentrant      TRUE for different tasks.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 *  \pre            The given task is assigned to the local core.
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_EventSetLocal
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  Os_EventSetInternal()
 **********************************************************************************************************************/
/*! \brief          Internal function to set events.
 *  \details
 *  This function performs no error reporting. This is up to the caller.  Because, this function could be called as part
 *  of a cross core call, where error reporting shall be performed on the calling core.  This function performs no task
 *  switch. This is up to the caller.  Because this function may be called on interrupt and on task level.  This
 *  function may call the protection hook with E_OS_PROTECTION_ARRIVAL, if the task's interarrival time is not met.
 *
 *  \param[in,out]  Task        The task which shall be modified.
 *  \param[in]      Mask        The events which shall be set.
 *
 *  \return         See \ref Os_EventSetLocal() and \ref Os_XSigSend_SetEventAsync().
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different tasks.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_EventSetInternal
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  Os_EventGetLocal()
 **********************************************************************************************************************/
/*! \brief          Writes the event mask, containing all events the given task is currently waiting for.
 *  \details        --no details--
 *
 *  \param[in,out]  Task    The task object which contains the event object of interest.
 *  \param[out]     Mask    Pointer where the result shall be stored.
 *
 *  \retval         OS_STATUS_OK              No errors.
 *  \retval         OS_STATUS_STATE_1         (EXTENDED status:) Task is suspended.
 *  \retval         OS_STATUS_NOTACCESSIBLE_1 (Service Protection:) Task's owner application is not accessible.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_EventGetLocal
(
  P2CONST(Os_TaskConfigType, AUTOMATIC, OS_CONST) Task,
  EventMaskRefType Mask
);


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_Api_SetEvent()
 **********************************************************************************************************************/
/*! \brief        OS service SetEvent().
 *  \details
 *  The events of the given task are set according to the given event mask.
 *
 *  \param[in]    TaskID          The task which shall be modified.
 *  \param[in]    Mask            The events which shall be set.
 *
 *  \retval       OS_STATUS_OK                No error.
 *  \retval       OS_STATUS_ID_1              (EXTENDED status:) Invalid TaskID.
 *  \retval       OS_STATUS_NOEXTENDEDTASK_1  (EXTENDED status:) Task is no extended task.
 *  \retval       OS_STATUS_STATE_1           (EXTENDED status:) Events can not be set as the referenced task is in the
 *                                            SUSPENDED state.
 *  \retval       OS_STATUS_NOTACCESSIBLE_1   (Service Protection:) Given object's owner application is not accessible.
 *  \retval       OS_STATUS_ACCESSRIGHTS_1    (Service Protection:) Caller's access rights are not sufficient.
 *  \retval       OS_STATUS_CALLEVEL          (Service Protection:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT       (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-155, CREQ-40, CREQ-261
 *  \trace        SPEC-64284, SPEC-64287, SPEC-64290, SPEC-64291, SPEC-64292, SPEC-64017, SPEC-64053, SPEC-66492,
 *                SPEC-63709, SPEC-63752, SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_SetEvent
(
  TaskType TaskID,
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  Os_Api_ClearEvent()
 **********************************************************************************************************************/
/*! \brief        OS service ClearEvent().
 *  \details
 *  The events of the calling task are cleared according to the given event mask.
 *
 *  \param[in]    Mask                The events which shall be set.
 *
 *  \retval       OS_STATUS_OK                No error.
 *  \retval       OS_STATUS_NOEXTENDEDTASK_CALLER   (EXTENDED status:) Task is no extended task.
 *  \retval       OS_STATUS_CALLEVEL          (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT       (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-53, CREQ-40, CREQ-261
 *  \trace        SPEC-64285, SPEC-64286, SPEC-64288, SPEC-64289, SPEC-64017, SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_ClearEvent
(
  EventMaskType Mask
);


/***********************************************************************************************************************
 *  Os_Api_GetEvent()
 **********************************************************************************************************************/
/*! \brief        OS service GetEvent().
 *  \details
 *  This service returns the state of all event bits of the given task, not the events that the task is waiting for.
 *
 *  The current status of the event mask of task TaskID is copied to Event.
 *
 *  \param[in]    TaskID          The task which shall be queried.
 *  \param[out]   Mask            Events which are set.
 *
 *  \retval       OS_STATUS_OK                No error.
 *  \retval       OS_STATUS_ID_1              (EXTENDED status:) Invalid TaskID.
 *  \retval       OS_STATUS_NOEXTENDEDTASK_1  (EXTENDED status:) Task is no extended task.
 *  \retval       OS_STATUS_STATE_1           (EXTENDED status:) Referenced task is in SUSPENDED state.
 *  \retval       OS_STATUS_CALLEVEL          (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT       (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       OS_STATUS_NOTACCESSIBLE_1   (Service Protection:) Given object's owner application is not accessible.
 *  \retval       OS_STATUS_ACCESSRIGHTS_1    (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Task is assigned to the current core.
 *
 *  \trace        CREQ-129, CREQ-40, CREQ-261
 *  \trace        SPEC-64306, SPEC-64316, SPEC-64322, SPEC-64344, SPEC-64354, SPEC-64017, SPEC-63709, SPEC-63752,
 *                SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_GetEvent
(
  TaskType TaskID,
  EventMaskRefType Mask
);


/***********************************************************************************************************************
 *  Os_Api_WaitEvent()
 **********************************************************************************************************************/
/*! \brief        OS service WaitEvent().
 *  \details
 *  The state of the current task is set to WAITING, unless at least one of the given events is set.
 *
 *  This call enforces rescheduling, if the wait condition occurs. If rescheduling takes place, the internal resource
 *  of the task is released while the task is in the WAITING state.
 *
 *  This service shall only be called from the extended task owning the event.
 *
 *  \param[in]    Mask  Mask of the events waited for.
 *
 *  \retval       OS_STATUS_OK              No error.
 *  \retval       OS_STATUS_NOEXTENDEDTASK_CALLER   (EXTENDED status:) Task is no extended task.
 *  \retval       OS_STATUS_RESOURCE        (EXTENDED status:) Task still occupies resources.
 *  \retval       OS_STATUS_SPINLOCK        (EXTENDED status:) Task still holds spinlocks.
 *  \retval       OS_STATUS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *
 *  \context      TASK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-68, CREQ-40, CREQ-261
 *  \trace        SPEC-64295, SPEC-64297, SPEC-64308, SPEC-64321, SPEC-64323, SPEC-64365, SPEC-64017, SPEC-63702,
 *                SPEC-63980
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_WaitEvent
(
  EventMaskType Mask
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_EVENT)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_EVENTINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_EventInt.h
 **********************************************************************************************************************/
