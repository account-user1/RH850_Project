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
 * \ingroup     Os_Kernel
 * \defgroup    Os_Resource Resource
 * \brief       Resource API.
 * \details
 * This module provides the resource API defined by OSEK/AUTOSAR OS.
 *
 * Introduction
 * ---------------------------------------------------------------------------------------------------------------------
 * Resources are a synchronization mechanism specified by OSEK/AUTOSAR OS. They are used to protect critical sections
 * in user code. OSEK uses \ref GlossaryICPP to avoid priority inversion and mutual deadlocks.
 *
 * The user has to configure all participants which may occupy a resource. The resource gets the highest priority
 * of all resource participants (ceiling priority). If one of the participants occupies a resource, its
 * current priority is immediately increased to the resource's ceiling priority. So other participants can not even try
 * to get the resource. If the participant releases the resource again, its previous priority is restored, and other
 * participants can get the resource.
 *
 * ### Standard Resource
 * Standard resources are resources where all participants are tasks. If a standard resource is occupied, the
 * scheduling priority of the current task is increased.
 *
 * ### Interrupt Resource
 * Interrupt Resources are resources where at least one of the participants is an ISR.
 * If an interrupt resource is occupied, the current interrupt priority level is increased.
 *
 * ### Resource Nesting
 * The resource API can be nested. A caller can be the owner of multiple resources at the same time.
 * Resource nesting has to be strictly LIFO. The same resource cannot be occupied multiple times.
 * For this use case linked resources are defined.
 *
 * ### Linked Resource
 * A linked resource is a different object to achieve the same ceiling priority.
 * Resources which have the same ceiling priority are called linked resources.
 * \trace CREQ-157
 *
 * ### Nesting With Spinlocks
 * The resource API and spinlock API can be used together in a mixed nested fashion
 * (e.g. GetResource(), GetSpinlock(), GetResource(), ...). Nesting has to be strictly LIFO.
 *
 * ### Internal Resources
 * Internal resources are a special kind of standard resources. They cannot be addressed by the user using the
 * resource API. Internal resources are handled by the OS without user interaction. An internal resource is immediately
 * occupied, if a task is getting RUNNING. And released, if the task reaches a scheduling point.
 * The main motivation for using internal resources, is to allow sharing stack memory between tasks.
 * For performance reasons, internal resources are implemented differently than standard resources
 * (see \ref Os_Scheduler).
 *
 * ### Timing Protection
 * Locking time of resources can be monitored by timing protection.
 * Internal resources are an exception. They are not object of timing protection, because this would be redundant to
 * the execution budget monitoring of the participants.
 *
 *
 * Dependencies
 * ---------------------------------------------------------------------------------------------------------------------
 * - Resources and spinlocks can be occupied by threads (task and ISR).
 * - Occupation order of resources and spinlocks must be strictly LIFO, therefore a singly linked list is used.
 *
 * ![Class Diagram](CmpResourceClassLocks.png)
 *
 * ![Example situation where different kind of locks are occupied by one thread.](CmpResourceObjectLocksExample.png)
 *
 *
 * \see \ref GlossaryLock
 * \see \ref GlossaryICPP
 * \see \ref GlossaryPCP
 *
 *
 * \trace     CREQ-36
 * \note  Add OSEK traceability about priority ceiling protocol.
 * \note  The interrupt level of interrupts resources refers to a Os_Hal_IntLevelType. Low level interrupts types should
 *        only be used by ISR/Interrupt modules. Use Os_IntLevelType instead.
 *
 * \{
 *
 * \file
 * \brief       OS internal interface to resources.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_RESOURCEINT_H)                                                                                          /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_RESOURCEINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Resource_Lcfg.h"
# include "Os_Resource_Types.h"

/* Os kernel module dependencies */
# include "Os_LockInt.h"
# include "Os_Core_Types.h"
# include "Os_Thread_Types.h"
# include "Os_Scheduler_Types.h"
# include "Os_ErrorInt.h"

/* Os Hal dependencies */
# include "Os_InterruptInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_RESOURCE)
/*VCAST_DONT_INSTRUMENT_START*/
#endif


/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/*! Type cast from Os_ResourceConfigType to Os_ResourceConfigType by use of base element addressing. */
#define OS_RESOURCE_CASTCONFIG_RESOURCE_2_RESOURCE(resource)                                                           \
      (&(resource))                                                                                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_ResourceConfigType to Os_ResourceInterruptConfigType by use of base element addressing. */
#define OS_RESOURCE_CASTCONFIG_RESOURCEINTERRUPT_2_RESOURCE(resource)                                                  \
      (&((resource).Resource))                                                                                          /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_ResourceType to Os_LockType by use of base element addressing. */
#define OS_RESOURCE_CASTDYN_RESOURCE_2_LOCK(resource)                                                                  \
      (&((resource).Lock))                                                                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_ResourceInterruptType to Os_LockType by use of base element addressing. */
#define OS_RESOURCE_CASTDYN_RESOURCEINTERRUPT_2_LOCK(resource)                                                         \
      (&((resource).Resource.Lock))                                                                                     /* PRQA S 3453 */ /* MD_MSR_19.7 */

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/*! Dynamic information of a general resource. */
struct Os_ResourceType_Tag
{
  /*! Dynamic information for LIFO nestable locks. */
  Os_LockType Lock;

  /*! The previous scheduling priority, before the resource has been occupied. */
  Os_TaskPrioType PreviousPriority;
};


/*! Constant information of a general resource.
 * \extends Os_LockConfigType */
struct Os_ResourceConfigType_Tag
{
  /*! General information for LIFO nestable locks. */
  Os_LockConfigType Lock;

  /*! The core to which this object belongs. */
  P2CONST(Os_CoreAsrConfigType, TYPEDEF, OS_CONST) Core;

  /*! The ID for this resource. */
  ResourceType ResourceId;

  /*! Ceiling priority. */
  Os_TaskPrioType CeilingPriority;

};


/*! Constant information of an interrupt resource.
 * \extends Os_ResourceConfigType */
struct Os_ResourceInterruptConfigType_Tag
{
  /*! General constant information for a resource. */
  Os_ResourceConfigType Resource;

  /*! Physical interrupt priority level. */
  P2CONST(Os_Hal_IntLevelType, TYPEDEF, OS_CONST) InterruptLevel;
};


/*! Dynamic information of an interrupt resource.
 * \extends Os_ResourceType */
typedef struct
{
  /*! General dynamic information of this object. */
  Os_ResourceType Resource;

  /*! The previous interrupt level, before the resource has been occupied. */
  Os_IntLevelType PreviousInterruptLevel;
} Os_ResourceInterruptType;


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


/***********************************************************************************************************************
 *  Os_ResourceInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the given resource (Init-Step4).
 *  \details        The kernel uses this function to initialize all resources during OS initialization.
 *                  It initializes the lock object of the given resource.
 *
 *  \param[in,out]  Resource  Resource to initialize.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_ResourceInit
(
  P2CONST(Os_ResourceConfigType, AUTOMATIC, OS_CONST) Resource
);


/***********************************************************************************************************************
 *  Os_ResourceForciblyReleaseThreadLocks()
 **********************************************************************************************************************/
/*! \brief          Release all resources, which are owned by the given thread.
 *  \details        --no details--
 *
 *  \param[in,out]  Thread The thread which is forcibly terminated and needs its resources to be released.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different threads
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_ResourceForciblyReleaseLocks
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
);


/***********************************************************************************************************************
 *  Os_ResourceCheckId()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given ID is valid (Not OS_CHECK_FAILED) or not (OS_CHECK_FAILED).
 *  \details        In case that extended checks are disabled, the default result of Os_ErrExtendedCheck() is returned.
 *
 *  \param[in]      ResourceId        The ID to check.
 *
 *  \retval         Not OS_CHECK_FAILED   If the given ID is valid.
 *  \retval         OS_CHECK_FAILED       If the given ID is not valid.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            The given ID is valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_ResourceCheckId,
(
  ResourceType ResourceId
));


/***********************************************************************************************************************
 *  Os_ResourceId2Resource()
 **********************************************************************************************************************/
/*! \brief          Converts a resource ID into a resource object.
 *  \details        --no details--
 *
 *  \param[in]      ResourceId     The resource ID.
 *  \return         The object corresponding to the ID.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            The given ID is valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ResourceConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_ResourceId2Resource,
(
  ResourceType ResourceId
));


/***********************************************************************************************************************
 *  Os_ResourceGetAccessingApplications()
 **********************************************************************************************************************/
/*! \brief          Get applications which have access to the given object.
 *  \details        --no details--
 *
 *  \param[in]      Resource  The object to query.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_AppAccessMaskType, OS_CODE, OS_ALWAYS_INLINE,
Os_ResourceGetAccessingApplications,
(
  P2CONST(Os_ResourceConfigType, AUTOMATIC, OS_CONST) Resource
));


/***********************************************************************************************************************
 *  Os_Api_GetResource()
 **********************************************************************************************************************/
/*! \brief        OS service GetResource().
 *  \details      This API serves to enter critical sections in the code.
 *                A critical section shall always be left using ReleaseResource().
 *
 *  \param[in]    ResID            The resource which shall be occupied.
 *
 *  \retval       OS_STATUS_OK              No error.
 *  \retval       OS_STATUS_ID_1            (EXTENDED status:) Invalid ResID.
 *  \retval       OS_STATUS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_CORE            (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       OS_STATUS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       OS_STATUS_PRIORITY        (EXTENDED status:) Statically assigned priority of the caller is higher
 *                                          than the calculated ceiling priority.
 *  \retval       OS_STATUS_LOCKED          (Service Protection:) Attempt to get a resource which is already occupied.
 *  \retval       OS_STATUS_ACCESSRIGHTS_1  (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-56, CREQ-847, CREQ-31, CREQ-40, CREQ-261
 *  \trace        SPEC-67377, SPEC-67383, SPEC-67385, SPEC-67386, SPEC-67387, SPEC-67388, SPEC-67389,
 *                SPEC-64017, SPEC-63752, SPEC-63887, SPEC-63980, SPEC-63990
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_GetResource
(
  ResourceType ResID
);


/***********************************************************************************************************************
 *  Os_Api_ReleaseResource()
 **********************************************************************************************************************/
/*! \brief        OS service GetResource().
 *  \details      This API is the counterpart of GetResource() and serves to leave critical sections in the code.
 *
 *  \param[in]    ResID            The resource which shall be released.
 *
 *  \retval       OS_STATUS_OK              No error.
 *  \retval       OS_STATUS_ID_1            (EXTENDED status:) Invalid ResID.
 *  \retval       OS_STATUS_CALLEVEL        (EXTENDED status:) Called from invalid context.
 *  \retval       OS_STATUS_CORE            (EXTENDED status:) The given object belongs to a foreign core.
 *  \retval       OS_STATUS_UNLOCKED        (EXTENDED status:) Attempt to release a resource which has not been occupied
 *                                          by the caller before.
 *  \retval       OS_STATUS_ORDER           (EXTENDED status:) Attempt to release a nested resource in wrong order.
 *  \retval       OS_STATUS_SPINLOCK        (EXTENDED status:) Spinlock and Resource API not used in LIFO order.
 *  \retval       OS_STATUS_DISABLEDINT     (Service Protection:) Caller is in interrupt API sequence.
 *  \retval       OS_STATUS_PRIORITY        (EXTENDED status:) Attempt to release a resource which has a lower ceiling
 *                                          priority than the statically assigned priority of the caller.
 *  \retval       OS_STATUS_ACCESSRIGHTS_1  (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \context      TASK|ISR2
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-107, CREQ-847, CREQ-31, CREQ-40, CREQ-261
 *  \trace        SPEC-67379, SPEC-67380, SPEC-67381, SPEC-67384, SPEC-67390,
 *                SPEC-64017, SPEC-63752, SPEC-63887, SPEC-63980, SPEC-63990, SPEC-63686
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_Api_ReleaseResource
(
  ResourceType ResID
);

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_RESOURCE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_RESOURCEINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_ResourceInt.h
 **********************************************************************************************************************/

