/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 * 
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  BswM.c
 *        \brief  MICROSAR Basic Software Mode Manager
 *
 *      \details  Implements AUTOSAR BswM.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 * 
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define BSWM_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
#include "BswM.h"
#include "BswM_Private_Cfg.h"
#if ( BSWM_DEV_ERROR_REPORT == STD_ON )
# include "Det.h"
#endif

#include "SchM_BswM.h"

#if ( BSWM_ENABLE_WDGM == STD_ON )
/* BswM_WdgM.h is included here instead of BswM_Private_Cfg.h because it includes Os.h */
# include "BswM_WdgM.h"
#endif

#if (BSWM_USE_ECUM_BSW_ERROR_HOOK == STD_ON)
# include "EcuM_Error.h"
#endif

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
/* vendor specific version information is BCD coded */
#if((BSWM_SW_MAJOR_VERSION != (0x09)) || \
    (BSWM_SW_MINOR_VERSION != (0x00)) || \
    (BSWM_SW_PATCH_VERSION != (0x00)) )
# error "Vendor specific version numbers of BswM.c and BswM.h are inconsistent"
#endif

/*********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#define BSWM_REQUEST_SEMAPHORE_UNLOCKED   (0u)
#define BSWM_REQUEST_SEMAPHORE_LOCKED     (1u)

#if(BSWM_IMMEDIATEUSER == STD_ON)
# define BSWM_REQUEST_IDLE                (0x00u)
# define BSWM_REQUEST_QUEUED              (0x01u)
# define BSWM_REQUEST_PROCESSED           (0x02u)
# define BSWM_REQUEST_PENDING             (0x03u)
# define BSWM_REQUEST_QUEUE_RELEASE       (0x04u)
#endif

#define BSWM_ACTIONLIST_IDLE              (0x00u)
#define BSWM_ACTIONLIST_PENDING           (0x01u)
#define BSWM_ACTIONLIST_BLOCKED           (0xFFu)

#if !defined (BSWM_LOCAL) /* COV_BSWM_LOCAL */
# define BSWM_LOCAL static
#endif

#if !defined (BSWM_LOCAL_INLINE) /* COV_BSWM_LOCAL_INLINE */
# define BSWM_LOCAL_INLINE LOCAL_INLINE
#endif

#if defined ECUM_WKSTATUS_ENABLED /* COV_BSWM_ECUM_COMPATIBILITY */
# define BSWM_ECUM_MAX_WKSTATUS ECUM_WKSTATUS_ENABLED
#elif defined ECUM_WKSTATUS_CHECKWAKEUP /* COV_BSWM_ECUM_COMPATIBILITY */
# define BSWM_ECUM_MAX_WKSTATUS ECUM_WKSTATUS_CHECKWAKEUP
#else /* COV_BSWM_ECUM_COMPATIBILITY */
# define BSWM_ECUM_MAX_WKSTATUS ECUM_WKSTATUS_DISABLED
#endif

/*********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/
#if (BSWM_IMMEDIATEUSER == STD_ON)
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#  define BSWM_CALL_IMMEDIATE(start, end, sid) BswM_ImmediateModeRequest((BswM_SizeOfImmediateUserType)(start), (BswM_SizeOfImmediateUserType)(end), (sid))
# else
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#  define BSWM_CALL_IMMEDIATE(start, end, sid) BswM_ImmediateModeRequest((BswM_SizeOfImmediateUserType)(start), (BswM_SizeOfImmediateUserType)(end))
# endif
#endif

/* Dummy Statements */
#if (BSWM_DEV_ERROR_DETECT == STD_ON)
# define BSWM_DUMMY_STATEMENT_DET_OFF(statement)
#else
# define BSWM_DUMMY_STATEMENT_DET_OFF(statement) BSWM_DUMMY_STATEMENT((statement)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#if (BSWM_DEV_ERROR_DETECT == STD_ON) && (BSWM_MODE_CHECK == STD_ON)
# define BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(statement)
#else
# define BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(statement) BSWM_DUMMY_STATEMENT((statement)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

/*********************************************************************************************************************
 * Development Error Detection                                                                                       
 *********************************************************************************************************************/
#define BswM_EnterCriticalArea_0()      SchM_Enter_BswM_BSWM_EXCLUSIVE_AREA_0() /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define BswM_LeaveCriticalArea_0()      SchM_Exit_BswM_BSWM_EXCLUSIVE_AREA_0()  /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

#define BSWM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_QueueSemaphore;

#if (BSWM_IMMEDIATEUSER == STD_ON)
BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_QueueWritten;
#endif

#if ( BSWM_FORCEDOFIMMEDIATEUSER == STD_ON )
BSWM_LOCAL VAR(uint8, BSWM_VAR_NOINIT) BswM_ForcedActionListPriority;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/*********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/*********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (BSWM_USE_INIT_POINTER == STD_ON)
P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_PBCFG) BswM_ConfigPtr;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if(BSWM_IMMEDIATEUSER == STD_ON)
/***********************************************************************************************************************
 *  BswM_ProcessQueuedRequests()
 **********************************************************************************************************************/
/*! \brief      Called by mode request functions in order to process other pending immediate requests.
 * \details     Arbitrate rules and execute action lists of queued immediate requests.
 * \pre         Global queue semaphore is locked.
 * \context     TASK|ISR1|ISR2
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        Called by BswM mode request functions.
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_ProcessQueuedRequests(void);

/***********************************************************************************************************************
 *  BswM_ReleaseQueue()
 **********************************************************************************************************************/
/*! \brief      Releases processed requests from the queue.
 * \details     Iterates over the queue and set processed requests to idle and pending requests to queued.
 * \pre         -
 * \context     TASK|ISR1|ISR2
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        Only called by BswM_ProcessQueuedRequests.
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ReleaseQueue(void);
#endif

#if (BSWM_TIMERSTATE == STD_ON)
/***********************************************************************************************************************
 *  BswM_DecreaseTimer()
 **********************************************************************************************************************/
/*! \brief      Decreases the running timer of BswM.
 * \details     Iterates over all timers and decrease running ones. If a timer reaches zero, state of the timer is set
 *              to expired.
 * \pre         Interrupts must be blocked.
 * \context     TASK
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_DecreaseTimer(void);
#endif

#if (BSWM_ACTIONLISTS == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteActionLists()
 **********************************************************************************************************************/
/*! \brief      Executes queued action lists.
 * \details     Iterates over all action lists and executes the action if it is queued with the given priority.
 * \param[in]   priority   Priority of action list which shall be executed.
 * \pre         BSWM_EXCLUSIVE_AREA_0 must be entered.
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteActionLists(uint8 priority);
#endif

#if (BSWM_DEFERREDRULES == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteDeferredRules()
 **********************************************************************************************************************/
/*! \brief      Executes deferred rules.
 * \details     Arbitrates all deferred rules and executes the corresponding action lists.
 * \pre         BSWM_EXCLUSIVE_AREA_0 must be entered.
 * \context     TASK
 * \reentrant   FALSE
 * \synchronous TRUE
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteDeferredRules(void);
#endif

#if (BSWM_FORCEDOFIMMEDIATEUSER == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteForcedImmediateUser()
 **********************************************************************************************************************/
/*! \brief      Executes a forced immediate user.
 * \details     Arbitrates corresponding rules of a forced immediate user and executes the corresponding action lists.
 * \param[in]   immediateUserIndex   Index of an immediate user.
 * \pre         BSWM_EXCLUSIVE_AREA_0 must be entered.
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        Only called by BswM_ImmediateModeRequest.
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteForcedImmediateUser(BswM_SizeOfImmediateUserType immediateUserIndex);
#endif

/*********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/
#if((BSWM_RULES == STD_ON) && (BSWM_FUNCTION_BASED == STD_OFF))
/**********************************************************************************************************************
 *  BswM_ArbitrateRule()
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
FUNC(BswM_SizeOfActionListsType, BSWM_CODE) BswM_ArbitrateRule(BswM_HandleType ruleId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 state;
  BswM_SizeOfActionListsType actionList = BSWM_NO_ACTIONLIST;

  /* ----- Implementation ----------------------------------------------- */
  if ((ruleId < BswM_GetSizeOfRuleStates())
# if ( BSWM_ENABLE_RULE_CONTROL == STD_ON )
      && (BswM_GetRuleStates(ruleId) != BSWM_DEACTIVATED)
# endif
      )
  {
    if (BswM_GetExpressions(BswM_GetExpressionsIdxOfRules(ruleId))() != 0u) /* SBSW_BSWM_EXPRESSIONFCTPTR */
    {
# if ( BSWM_ACTIONLISTSTRUEIDXOFRULES == STD_ON )
      actionList = BswM_GetActionListsTrueIdxOfRules(ruleId);
# endif
      state = BSWM_TRUE;
    }
    else
    {
# if ( BSWM_ACTIONLISTSFALSEIDXOFRULES == STD_ON )
      actionList = BswM_GetActionListsFalseIdxOfRules(ruleId);
# endif
      state = BSWM_FALSE;
    }

# if (BSWM_CONDITIONALOFACTIONLISTS == STD_OFF || (BSWM_CONDITIONALOFACTIONLISTS == STD_ON && BSWM_ISDEF_CONDITIONALOFACTIONLISTS == STD_OFF))
    if ((actionList != BSWM_NO_ACTIONLIST) && (BswM_GetRuleStates(ruleId) == state)
#  if (BSWM_CONDITIONALOFACTIONLISTS == STD_ON )
    && (!BswM_IsConditionalOfActionLists(actionList))
#  endif
    )
    {
      /* Action list shall only be executed on trigger but result of expression has not changed */
      actionList = BSWM_NO_ACTIONLIST;
    }
# endif
    BswM_SetRuleStates(ruleId, state); /* SBSW_BSWM_SETRULESTATE */
  }

  return actionList;
}
#endif

#if (BSWM_IMMEDIATEUSER == STD_ON)

/**********************************************************************************************************************
 *  BswM_ReleaseQueue()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ReleaseQueue(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_ModeRequestQueueIterType queueIndex;

  /* ----- Implementation ----------------------------------------------- */
  BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  for(queueIndex = 0; queueIndex < BswM_GetSizeOfModeRequestQueue(); queueIndex++)
  {
    if(BSWM_REQUEST_PROCESSED == BswM_GetModeRequestQueue(queueIndex))
    {
      BswM_SetModeRequestQueue(queueIndex, BSWM_REQUEST_IDLE); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
    }
    else if(BSWM_REQUEST_PENDING == BswM_GetModeRequestQueue(queueIndex)) /* COV_BSWM_MODEREQUESTPENDING */
    {
      BswM_QueueWritten = TRUE;
      BswM_SetModeRequestQueue(queueIndex, BSWM_REQUEST_QUEUED); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
    }
    else
    {
      /* nothing to do */
    }
  }
  BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/**********************************************************************************************************************
 *  BswM_ProcessQueuedRequests()
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
 */
BSWM_LOCAL FUNC(void, BSWM_CODE) BswM_ProcessQueuedRequests(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_ModeRequestQueueIterType immediateUserIndex;
  BswM_RulesIndIterType ruleIndex;
  BswM_SizeOfActionListsType actionListIndex;
  boolean executeActionLists = TRUE;
  uint8 queueState = BSWM_REQUEST_IDLE;

  /* ----- Implementation ----------------------------------------------- */
  BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  while((executeActionLists == TRUE) && (BswM_QueueWritten == TRUE))
  {
    BswM_QueueWritten = FALSE;
    executeActionLists = FALSE;
    for(immediateUserIndex = 0; immediateUserIndex < BswM_GetSizeOfModeRequestQueue(); immediateUserIndex++)
    {
      if(BSWM_REQUEST_QUEUED == BswM_GetModeRequestQueue(immediateUserIndex))
      { 
        for(ruleIndex = BswM_GetRulesIndStartIdxOfImmediateUser(immediateUserIndex); ruleIndex < BswM_GetRulesIndEndIdxOfImmediateUser(immediateUserIndex); ruleIndex++)
        {
# if (BSWM_FUNCTION_BASED == STD_ON)
          actionListIndex = BswM_GetFctPtrOfRules(BswM_GetRulesInd(ruleIndex))(); /* SBSW_BSWM_RULEFCTPTR */
# else
          actionListIndex = BswM_ArbitrateRule((BswM_HandleType)BswM_GetRulesInd(ruleIndex));
# endif
          if((actionListIndex < BswM_GetSizeOfActionListQueue()) && (BswM_GetActionListQueue(actionListIndex) == BSWM_ACTIONLIST_IDLE)) /* COV_BSWM_ACTIONLISTIDLE */
          {
            queueState = BSWM_REQUEST_PROCESSED;
            BswM_SetActionListQueue(actionListIndex, BSWM_ACTIONLIST_PENDING); /* SBSW_BSWM_SETACTIONLISTQUEUE */
          }
        }
        if(queueState == BSWM_REQUEST_PROCESSED)
        {
          BswM_SetModeRequestQueue(immediateUserIndex, BSWM_REQUEST_PROCESSED); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
          queueState = BSWM_REQUEST_QUEUE_RELEASE;
          executeActionLists = TRUE;
        } else
        {
          BswM_SetModeRequestQueue(immediateUserIndex, BSWM_REQUEST_IDLE); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
        }
      }
    }
    if(executeActionLists == TRUE)
    {
      /* BSWM_EXCLUSIVE_AREA_0 must be entered before calling BswM_ExecuteActionLists.
       * Area is left and reentered during execution so blocked time should be acceptable. */
      BswM_ExecuteActionLists(BSWM_ACTIONLIST_PENDING);
    }
  }
  BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if(queueState == BSWM_REQUEST_QUEUE_RELEASE)
  {
    BswM_ReleaseQueue();
  }
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  BswM_ImmediateModeRequest()
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
 */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end, uint8 sid)
# else
FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end)
# endif
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 localSemaphore;
  BswM_SizeOfImmediateUserType immediateUserIndex;

  /* ----- Implementation ----------------------------------------------- */
  if((end <= BswM_GetSizeOfImmediateUser())
# if ( BSWM_DEV_ERROR_DETECT == STD_OFF )
      /* #30 Verify that BswM is initialized - (This prevents queuing of new mode request if BswM_DeInit was called). (\trace SPEC-7833) */
      && BswM_IsInitialized()
# endif
      )
  {
    BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    localSemaphore = BswM_QueueSemaphore;

    if (BswM_QueueSemaphore == BSWM_REQUEST_SEMAPHORE_UNLOCKED)
    {
      BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_LOCKED;
    }

    for (immediateUserIndex = start; immediateUserIndex < end; immediateUserIndex++)
    {
# if ( BSWM_FORCEDOFIMMEDIATEUSER == STD_ON )
      if (BswM_IsForcedOfImmediateUser(immediateUserIndex) != FALSE)
      {
        BswM_ExecuteForcedImmediateUser(immediateUserIndex);
      }
      else
# endif /* ( BSWM_FORCEDOFIMMEDIATEUSER == STD_ON )*/
      {
        if (BswM_GetModeRequestQueue(immediateUserIndex) == BSWM_REQUEST_IDLE)
        {
          BswM_QueueWritten = TRUE;
          BswM_SetModeRequestQueue(immediateUserIndex, BSWM_REQUEST_QUEUED); /* SBSW_BSWM_IMMEDIATEMODEREQUEST */
        }
        else if(BswM_GetModeRequestQueue(immediateUserIndex) == BSWM_REQUEST_PROCESSED) /* COV_BSWM_MODEREQUESTPENDING */
        {
          BswM_SetModeRequestQueue(immediateUserIndex, BSWM_REQUEST_PENDING); /* SBSW_BSWM_IMMEDIATEMODEREQUEST */
        }
        else
        {
          /* Mode is already queued. That means that there is a former mode change on this mode port which has not been processed yet. */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
          BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
          (void)Det_ReportError(BSWM_MODULE_ID, 0, sid, BSWM_E_ALREADY_QUEUED);
          BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
# endif
        }
      }
    }
    BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

    if (BSWM_REQUEST_SEMAPHORE_UNLOCKED == localSemaphore)
    {
      /* Immediately process other pending immediate requests. */
      BswM_ProcessQueuedRequests();
      /* Unlock semaphore after processing of the queue. */
      BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_UNLOCKED;
# if(BSWM_IPDU_GROUP_CONTROL == STD_ON)
      BswM_ExecuteIpduGroupControl();
# endif
    }
  }
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if ((BSWM_FUNCTION_BASED == STD_OFF) && (BSWM_ACTIONLISTS == STD_ON))
/**********************************************************************************************************************
 *  BswM_Action_ActionListHandler()
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
FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ActionListHandler(BswM_HandleType handleId)
{
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal = E_OK;
  BswM_ActionItemsIterType itemId;
  BswM_HandleType parameterIdx;

  /* ----- Implementation ----------------------------------------------- */
  for(itemId = BswM_GetActionItemsStartIdxOfActionLists(handleId); itemId < BswM_GetActionItemsEndIdxOfActionLists(handleId); itemId++)
  {
#  if (BSWM_PARAMETERIDXOFACTIONITEMS == STD_ON)
    parameterIdx = BswM_GetParameterIdxOfActionItems(itemId);
#  else
    parameterIdx = 0;
#  endif

#  if (BSWM_ABORTOFACTIONITEMS == STD_ON || BSWM_REPORTOFACTIONITEMS == STD_ON)
    if(BswM_GetActions(BswM_GetActionsIdxOfActionItems(itemId))(parameterIdx) != E_OK) /* SBSW_BSWM_ACTIONFCTPTR */
    {
#   if (BSWM_REPORTOFACTIONITEMS == STD_ON)
      if(BswM_GetReportOfActionItems(itemId) != 0u)
      {
        Dem_ReportErrorStatus(BswM_GetReportOfActionItems(itemId), DEM_EVENT_STATUS_FAILED);
      }
#   endif
#   if (BSWM_ABORTOFACTIONITEMS == STD_ON)
      if(BswM_IsAbortOfActionItems(itemId))
      {
        retVal = E_NOT_OK;
        break;
      }
#   endif
    }
#  else
    (void)BswM_GetActions(BswM_GetActionsIdxOfActionItems(itemId))(parameterIdx); /* SBSW_BSWM_ACTIONFCTPTR */
#  endif
  }

  return retVal;
}
#endif

#if (BSWM_TIMERSTATE == STD_ON)
/**********************************************************************************************************************
 *  BswM_DecreaseTimer()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_DecreaseTimer(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_TimerStateIterType timerIndex;

  /* ----- Implementation ----------------------------------------------- */
  for(timerIndex = 0; timerIndex < BswM_GetSizeOfTimerValue(); timerIndex++)
  {
    if(BswM_GetTimerValue(timerIndex) > 0u)
    {
      BswM_DecTimerValue(timerIndex); /* SBSW_BSWM_SETTIMER */
      if(BswM_GetTimerValue(timerIndex) == 0u)
      {
        BswM_SetTimerState(timerIndex, BSWM_TIMER_EXPIRED); /* SBSW_BSWM_SETTIMER */
      }
    }
  }
}
#endif /* BSWM_TIMERSTATE == STD_ON */

#if (BSWM_ACTIONLISTS == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteActionLists()
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
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteActionLists(uint8 priority)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_SizeOfActionListQueueType actionListIndex;

  /* ----- Implementation ----------------------------------------------- */
  for (actionListIndex = 0; actionListIndex < BswM_GetSizeOfActionListQueue(); actionListIndex++)
  {
    if (BswM_GetActionListQueue(actionListIndex) == priority)
    {
      BswM_SetActionListQueue(actionListIndex, BSWM_ACTIONLIST_BLOCKED); /* SBSW_BSWM_SETACTIONLISTQUEUE */
      BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
# if (BSWM_FUNCTION_BASED == STD_ON)
      (void)BswM_GetFctPtrOfActionLists(actionListIndex)(); /* SBSW_BSWM_ACTIONLISTFCTPTR */
# else
      (void)BswM_Action_ActionListHandler((BswM_HandleType)actionListIndex);
# endif
      BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
      BswM_SetActionListQueue(actionListIndex, BSWM_ACTIONLIST_IDLE); /* SBSW_BSWM_SETACTIONLISTQUEUE */
    }
  }
}
#endif

#if (BSWM_DEFERREDRULES == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteDeferredRules()
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
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteDeferredRules(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_DeferredRulesIterType ruleIndex;
  BswM_SizeOfActionListsType actionListIndex;
  boolean executeActionLists = FALSE;

  /* ----- Implementation ----------------------------------------------- */
  for (ruleIndex = 0; ruleIndex < BswM_GetSizeOfDeferredRules(); ruleIndex++)
  {
# if (BSWM_FUNCTION_BASED == STD_ON)
    actionListIndex = BswM_GetFctPtrOfRules(BswM_GetRulesIdxOfDeferredRules(ruleIndex))(); /* SBSW_BSWM_RULEFCTPTR */
# else
    actionListIndex = BswM_ArbitrateRule((BswM_HandleType)BswM_GetRulesIdxOfDeferredRules(ruleIndex));
# endif
    if ((actionListIndex < BswM_GetSizeOfActionListQueue()) && (BswM_GetActionListQueue(actionListIndex) == BSWM_ACTIONLIST_IDLE)) /* COV_BSWM_ACTIONLISTIDLE */
    {
      executeActionLists = TRUE;
      BswM_SetActionListQueue(actionListIndex, BSWM_ACTIONLIST_PENDING); /* SBSW_BSWM_SETACTIONLISTQUEUE */
    }
  }
  if(executeActionLists == TRUE) {
    BswM_ExecuteActionLists(BSWM_ACTIONLIST_PENDING);
  }
}
#endif

#if (BSWM_FORCEDOFIMMEDIATEUSER == STD_ON)
/**********************************************************************************************************************
 *  BswM_ExecuteForcedImmediateUser()
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
BSWM_LOCAL_INLINE FUNC(void, BSWM_CODE) BswM_ExecuteForcedImmediateUser(BswM_SizeOfImmediateUserType immediateUserIndex)
{
  /* ----- Local Variables ---------------------------------------------- */
  BswM_RulesIndIterType ruleIndex;
  BswM_SizeOfActionListsType actionListIndex;
  boolean executeActionLists = FALSE;

  /* ----- Implementation ----------------------------------------------- */
  BswM_ForcedActionListPriority++;

  for(ruleIndex = BswM_GetRulesIndStartIdxOfImmediateUser(immediateUserIndex); ruleIndex < BswM_GetRulesIndEndIdxOfImmediateUser(immediateUserIndex); ruleIndex++)
  {
# if (BSWM_FUNCTION_BASED == STD_ON)
    actionListIndex = BswM_GetFctPtrOfRules(BswM_GetRulesInd(ruleIndex))(); /* SBSW_BSWM_RULEFCTPTR */
# else
    actionListIndex = BswM_ArbitrateRule((BswM_HandleType)BswM_GetRulesInd(ruleIndex));
# endif
    if((actionListIndex < BswM_GetSizeOfActionListQueue()) && (BswM_GetActionListQueue(actionListIndex) != BSWM_ACTIONLIST_BLOCKED)) /* COV_BSWM_ACTIONLISTBLOCKED */
    {
      executeActionLists = TRUE;
      BswM_SetActionListQueue(actionListIndex, BswM_ForcedActionListPriority); /* SBSW_BSWM_SETACTIONLISTQUEUE */
    }
  }

  if(executeActionLists == TRUE)
  {
    BswM_ExecuteActionLists(BswM_ForcedActionListPriority);
  }
  BswM_ForcedActionListPriority--;
}
#endif

/*********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  BswM_InitMemory()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_InitMemory(void)
{
  BswM_SetInitialized(FALSE);
}

/**********************************************************************************************************************
 *  BswM_Init()
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
FUNC(void, BSWM_CODE) BswM_Init(P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_INIT_DATA) ConfigPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
#if ((BSWM_ACTIONLISTQUEUE == STD_ON) || (BSWM_RULES == STD_ON) || (BSWM_IMMEDIATEUSER == STD_ON))
  BswM_HandleType idx;
#endif
#if (BSWM_USE_INIT_POINTER == STD_ON)
  BswM_ConfigPtr = ConfigPtr;
#endif

  /* ----- Development Error Checks ------------------------------------- */
#if (BSWM_DEV_ERROR_DETECT == STD_ON)
  if (BswM_IsInitialized())
  {
    errorId = BSWM_E_ALREADY_INITIALIZED;
  }
  else
#endif

#if (BSWM_USE_INIT_POINTER == STD_ON)
  /* Check if the config pointer is a null pointer. */
  if(ConfigPtr == NULL_PTR)
  {
# if (BSWM_USE_ECUM_BSW_ERROR_HOOK == STD_ON)
    EcuM_BswErrorHook((uint16) BSWM_MODULE_ID, (uint8) ECUM_BSWERROR_NULLPTR);
# elif (BSWM_DEV_ERROR_DETECT == STD_ON)
    errorId = BSWM_E_NULL_POINTER;
# endif
  }
# if (BSWM_FINALMAGICNUMBER == STD_ON && BSWM_USE_ECUM_BSW_ERROR_HOOK == STD_ON)
  else if(BswM_GetFinalMagicNumber() != BSWM_FINAL_MAGIC_NUMBER)
  {
    EcuM_BswErrorHook((uint16) BSWM_MODULE_ID, (uint8) ECUM_BSWERROR_MAGICNUMBER);
  }
# endif
  else
#endif
  /* ----- Implementation ----------------------------------------------- */
  {
    /* Lock semaphore during initialization to queue incoming mode requests */
    BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_LOCKED;

#if (BSWM_IMMEDIATEUSER == STD_ON)
    BswM_QueueWritten = FALSE;
#endif

#if ( BSWM_FORCEDOFIMMEDIATEUSER == STD_ON )
    BswM_ForcedActionListPriority = BSWM_ACTIONLIST_PENDING;
#endif

#if ( BSWM_ACTIONLISTQUEUE == STD_ON )
    for(idx = 0u; idx < BswM_GetSizeOfActionListQueue(); idx++)
    {
      BswM_SetActionListQueue(idx, BSWM_ACTIONLIST_IDLE); /* SBSW_BSWM_SETACTIONLISTQUEUE */
    }
#endif

#if (BSWM_RULES == STD_ON)
    for(idx = 0u; idx < BswM_GetSizeOfRules(); idx++)
    {
      BswM_SetRuleStates(idx, BswM_GetInitOfRules(idx)); /* SBSW_BSWM_SETRULESTATE */
    }
#endif

#if (BSWM_CANSMCHANNELSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfCanSMChannelState(); idx++)
    {
      BswM_SetCanSMChannelState(idx, BswM_GetInitValueOfCanSMChannelMapping(idx)); /* SBSW_BSWM_CANSMCHANNELSTATE */
    }
#endif

#if (BSWM_COMMCHANNELSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfComMChannelState(); idx++)
    {
      BswM_SetComMChannelState(idx, BswM_GetInitValueOfComMChannelMapping(idx)); /* SBSW_BSWM_COMMCHANNELSTATE */
    }
#endif

#if (BSWM_COMMINITIATERESETSTATE == STD_ON)
# if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfComMInitiateResetMapping(); idx++) /* Size can only be 0 or 1. */
# endif
    {
      BswM_SetComMInitiateResetState(BswM_GetInitValueOfComMInitiateResetMapping(0));
    }
#endif

#if (BSWM_COMMPNCSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfComMPncState(); idx++)
    {
      BswM_SetComMPncState(idx, BswM_GetInitValueOfComMPncMapping(idx)); /* SBSW_BSWM_COMMPNCSTATE */
    }
#endif

#if (BSWM_DCMAPPLUPDATESTATE == STD_ON)
# if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfDcmApplUpdateMapping(); idx++) /* Size can only be 0 or 1. */
# endif
    {
      BswM_SetDcmApplUpdateState(BswM_GetInitValueOfDcmApplUpdateMapping(0));
    }
#endif

#if (BSWM_DCMCOMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfDcmComState(); idx++)
    {
      BswM_SetDcmComState(idx, BswM_GetInitValueOfDcmComMapping(idx)); /* SBSW_BSWM_DCMCOMSTATE */
    }
#endif

#if (BSWM_ECUMMODESTATE == STD_ON)
# if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfEcuMModeMapping(); idx++) /* Size can only be 0 or 1. */
# endif
    {
      BswM_SetEcuMModeState(BswM_GetInitValueOfEcuMModeMapping(0));
    }
#endif

#if (BSWM_ECUMRUNREQUESTSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfEcuMRunRequestState(); idx++)
    {
      BswM_SetEcuMRunRequestState(idx, BswM_GetInitValueOfEcuMRunRequestMapping(idx)); /* SBSW_BSWM_ECUMRUNREQUESTSTATE */
    }
#endif

#if (BSWM_ECUMWAKEUPSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfEcuMWakeupState(); idx++)
    {
      BswM_SetEcuMWakeupState(idx, BswM_GetInitValueOfEcuMWakeupMapping(idx)); /* SBSW_BSWM_ECUMWAKEUPSTATE */
    }
#endif

#if (BSWM_ETHIFPORTSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfEthIfPortState(); idx++)
    {
      BswM_SetEthIfPortState(idx, BswM_GetInitValueOfEthIfPortMapping(idx)); /* SBSW_BSWM_ETHIFPORTSTATE */
    }
#endif

#if (BSWM_ETHSMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfEthSMState(); idx++)
    {
      BswM_SetEthSMState(idx, BswM_GetInitValueOfEthSMMapping(idx)); /* SBSW_BSWM_ETHSMSTATE */
    }
#endif

#if (BSWM_FRSMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfFrSMState(); idx++)
    {
      BswM_SetFrSMState(idx, BswM_GetInitValueOfFrSMMapping(idx)); /* SBSW_BSWM_FRSMSTATE */
    }
#endif

#if (BSWM_GENERICSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfGenericState(); idx++)
    {
      BswM_SetGenericState(idx, BswM_GetInitValueOfGenericMapping(idx)); /* SBSW_BSWM_GENERICSTATE */
    }
#endif

#if (BSWM_J1939DCMSTATE == STD_ON)
# if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfJ1939DcmMapping(); idx++) /* Size can only be 0 or 1. */
# endif
    {
      BswM_SetJ1939DcmState(BswM_GetInitValueOfJ1939DcmMapping(0));
    }
#endif

#if (BSWM_J1939NMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfJ1939NmState(); idx++)
    {
      BswM_SetJ1939NmState(idx, BswM_GetInitValueOfJ1939NmMapping(idx)); /* SBSW_BSWM_J1939NMSTATE */
    }
#endif

#if (BSWM_LINSCHEDULESTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfLinScheduleState(); idx++)
    {
      BswM_SetLinScheduleState(idx, BswM_GetInitValueOfLinScheduleMapping(idx)); /* SBSW_BSWM_LINSCHEDULESTATE */
    }
#endif

#if (BSWM_LINSCHEDULEENDSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfLinScheduleEndState(); idx++)
    {
      BswM_SetLinScheduleEndState(idx, BswM_GetInitValueOfLinScheduleEndMapping(idx)); /* SBSW_BSWM_LINSCHEDULEENDSTATE */
    }
#endif

#if (BSWM_LINSMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfLinSMState(); idx++)
    {
      BswM_SetLinSMState(idx, BswM_GetInitValueOfLinSMMapping(idx)); /* SBSW_BSWM_LINSMSTATE */
    }
#endif

#if (BSWM_LINTPSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfLinTPState(); idx++)
    {
      BswM_SetLinTPState(idx, BswM_GetInitValueOfLinTPMapping(idx)); /* SBSW_BSWM_LINTPSTATE */
    }
#endif

#if (BSWM_NMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfNmState(); idx++)
    {
      BswM_SetNmState(idx, BswM_GetInitValueOfNmMapping(idx)); /* SBSW_BSWM_NMSTATE */
    }
#endif

#if (BSWM_NVMJOBSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfNvMJobState(); idx++)
    {
      BswM_SetNvMJobState(idx, BswM_GetInitValueOfNvMJobMapping(idx)); /* SBSW_BSWM_NVMJOBSTATE */
    }
#endif

#if (BSWM_NVMBLOCKSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfNvMBlockState(); idx++)
    {
      BswM_SetNvMBlockState(idx, BswM_GetInitValueOfNvMBlockMapping(idx)); /* SBSW_BSWM_NVMBLOCKSTATE */
    }
#endif

#if (BSWM_PDURRXINDICATIONSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRRxIndicationState(); idx++)
    {
      BswM_SetPduRRxIndicationState(idx, FALSE); /* SBSW_BSWM_PDURRXINDICATIONSTATE */
    }
#endif

#if (BSWM_PDURTPRXINDICATIONSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRTpRxIndicationState(); idx++)
    {
      BswM_SetPduRTpRxIndicationState(idx, FALSE); /* SBSW_BSWM_PDURTPRXINDICATIONSTATE */
    }
#endif

#if (BSWM_PDURTPSTARTOFRECEPTIONSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRTpStartOfReceptionState(); idx++)
    {
      BswM_SetPduRTpStartOfReceptionState(idx, FALSE); /* SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATE */
    }
#endif

#if (BSWM_PDURTPTXCONFIRMATIONSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRTpTxConfirmationState(); idx++)
    {
      BswM_SetPduRTpTxConfirmationState(idx, FALSE); /* SBSW_BSWM_PDURTPTXCONFIRMATIONSTATE */
    }
#endif

#if (BSWM_PDURTRANSMITSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRTransmitState(); idx++)
    {
      BswM_SetPduRTransmitState(idx, FALSE); /* SBSW_BSWM_PDURTRANSMITSTATE */
    }
#endif

#if (BSWM_PDURTXCONFIRMATIONSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfPduRTxConfirmationState(); idx++)
    {
      BswM_SetPduRTxConfirmationState(idx, FALSE); /* SBSW_BSWM_PDURTXCONFIRMATIONSTATE */
    }
#endif

#if (BSWM_SDCLIENTSERVICESTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfSdClientServiceState(); idx++)
    {
      BswM_SetSdClientServiceState(idx, BswM_GetInitValueOfSdClientServiceMapping(idx)); /* SBSW_BSWM_SDCLIENTSERVICESTATE */
    }
#endif

#if (BSWM_SDCONSUMEDEVENTSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfSdConsumedEventState(); idx++)
    {
      BswM_SetSdConsumedEventState(idx, BswM_GetInitValueOfSdConsumedEventMapping(idx)); /* SBSW_BSWM_SDCONSUMEDEVENTSTATE */
    }
#endif

#if (BSWM_SDEVENTHANDLERSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfSdEventHandlerState(); idx++)
    {
      BswM_SetSdEventHandlerState(idx, BswM_GetInitValueOfSdEventHandlerMapping(idx)); /* SBSW_BSWM_SDEVENTHANDLERSTATE */
    }
#endif

#if (BSWM_TIMERSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfTimerState(); idx++)
    {
      BswM_SetTimerState(idx, BSWM_TIMER_STOPPED); /* SBSW_BSWM_SETTIMER */
      BswM_SetTimerValue(idx, 0u); /* SBSW_BSWM_SETTIMER */
    }
#endif

#if (BSWM_WDGMSTATE == STD_ON)
    for (idx = 0; idx < BswM_GetSizeOfWdgMState(); idx++)
    {
      BswM_SetWdgMState(idx, BswM_GetInitValueOfWdgMMapping(idx)); /* SBSW_BSWM_WDGMSTATE */
    }
#endif

#if (BSWM_IMMEDIATEUSER == STD_ON)
    for(idx = 0u; idx < BswM_GetSizeOfModeRequestQueue(); idx++)
    {
# if (BSWM_ONINITOFIMMEDIATEUSER == STD_ON && BSWM_INIT_GEN == STD_OFF)
      if(BswM_IsOnInitOfImmediateUser(idx))
      {
        BswM_QueueWritten = TRUE;
        BswM_SetModeRequestQueue(idx, BSWM_REQUEST_QUEUED); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
      }
      else
# endif
      {
        BswM_SetModeRequestQueue(idx, BSWM_REQUEST_IDLE); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
      }
    }
#endif

    BswM_SetInitialized(TRUE);

#if (BSWM_INIT_GEN == STD_ON)
    (void)BswM_Init_Gen();

# if (BSWM_ONINITOFIMMEDIATEUSER == STD_ON)
    for(idx = 0u; idx < BswM_GetSizeOfModeRequestQueue(); idx++)
    {
      if(BswM_IsOnInitOfImmediateUser(idx))
      {
        BswM_QueueWritten = TRUE;
        BswM_SetModeRequestQueue(idx, BSWM_REQUEST_QUEUED); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
      }
    }
# endif
#endif

#if (BSWM_IMMEDIATEUSER == STD_ON)
    /* #32 Arbitrate mode requests which shall be arbitrated on initialization or occurred during the execution of the
     *     initiating action lists. */
    BswM_ProcessQueuedRequests();
#endif

    BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_UNLOCKED;
  }
#if (BSWM_USE_INIT_POINTER == STD_OFF)
  BSWM_DUMMY_STATEMENT_CONST(ConfigPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  /* ----- Development Error Report --------------------------------------- */
#if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_INIT_ID, errorId);
  }
#else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

/**********************************************************************************************************************
 *  BswM_Deinit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Deinit(void)
{
  /* ----- Local Variables ---------------------------------------------- */
#if (BSWM_IMMEDIATEUSER == STD_ON)
  BswM_ModeRequestQueueIterType queueIndex;
#endif
  /* ----- Implementation ----------------------------------------------- */
  BswM_SetInitialized(FALSE);

#if (BSWM_IMMEDIATEUSER == STD_ON)
  BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  for(queueIndex = 0; queueIndex < BswM_GetSizeOfModeRequestQueue(); queueIndex++)
  {
    BswM_SetModeRequestQueue(queueIndex, BSWM_REQUEST_IDLE); /* SBSW_BSWM_SETMODEREQUESTQUEUE */
  }

  BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
#endif
}

#if(BSWM_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 *  BswM_GetVersionInfo()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, BSWM_APPL_DATA) VersionInfo)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if the passed parameter is not a null pointer. */
  if (VersionInfo == NULL_PTR)
  {
    errorId = BSWM_E_PARAM_INVALID;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
    /* #30 Pass the version information to the Std_VersionInfoType pointer. */
    VersionInfo -> vendorID         = BSWM_VENDOR_ID; /* SBSW_BSWM_GETVERSIONINFO */
    VersionInfo -> moduleID         = BSWM_MODULE_ID; /* SBSW_BSWM_GETVERSIONINFO */
    VersionInfo -> sw_major_version = BSWM_SW_MAJOR_VERSION; /* SBSW_BSWM_GETVERSIONINFO */
    VersionInfo -> sw_minor_version = BSWM_SW_MINOR_VERSION; /* SBSW_BSWM_GETVERSIONINFO */
    VersionInfo -> sw_patch_version = BSWM_SW_PATCH_VERSION; /* SBSW_BSWM_GETVERSIONINFO */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_GETVERSIONINFO_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

/**********************************************************************************************************************
 *  BswM_RequestMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_RequestMode(BswM_UserType requesting_user, BswM_ModeType requested_mode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
#if(BSWM_GENERICSTATE == STD_ON)
  BswM_GenericStateIterType userHandle;
#endif

  /* ----- Development Error Checks ------------------------------------- */
#if (BSWM_DEV_ERROR_DETECT == STD_ON)
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
#endif
  /* ----- Implementation ----------------------------------------------- */
  {
#if(BSWM_GENERICSTATE == STD_ON)
    for(userHandle = 0; userHandle < BswM_GetSizeOfGenericState(); userHandle++)
    {
      if (BswM_GetExternalIdOfGenericMapping(userHandle) == requesting_user)
      {
        BswM_SetGenericState(userHandle, requested_mode); /* SBSW_BSWM_GENERICSTATE */
# if(BSWM_IMMEDIATEUSERUSEDOFGENERICMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfGenericMapping(userHandle), BswM_GetImmediateUserEndIdxOfGenericMapping(userHandle), BSWM_REQUESTMODE_ID);
# endif
        /* errorId is initialized with BSWM_E_REQ_USER_OUT_OF_RANGE but user exists - set errorId to BSWM_E_NO_ERROR */
        errorId = BSWM_E_NO_ERROR;
        break;
      }
    }
#else
    BSWM_DUMMY_STATEMENT(requesting_user); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(requested_mode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  }
  /* ----- Development Error Report --------------------------------------- */
#if (BSWM_DEV_ERROR_REPORT == STD_ON)
# if(BSWM_GENERICSTATE == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
# endif
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_REQUESTMODE_ID, errorId);
  }
#else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
} /* BswM_RequestMode() */

#if (BSWM_ENABLE_RULE_CONTROL == STD_ON)
/**********************************************************************************************************************
 *  BswM_RuleControl()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_RuleControl(BswM_HandleType ruleId, uint8 state)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
# if(BSWM_RULES == STD_ON)
  BswM_HandleType idx;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (state > BSWM_DEACTIVATED)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_RULES == STD_ON )
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for(idx = 0; idx < BswM_GetSizeOfRules(); idx++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if(BswM_GetIdOfRules(idx) == ruleId)
      {
        BswM_SetRuleStates(idx, state); /* SBSW_BSWM_SETRULESTATE */
        /* errorId is initialized with BSWM_E_REQ_USER_OUT_OF_RANGE but user exists - set errorId to BSWM_E_NO_ERROR */
        errorId = BSWM_E_NO_ERROR;
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(ruleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_DET_OFF(state) /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
#  if (BSWM_RULES == STD_ON )
  if (errorId != BSWM_E_NO_ERROR)
#  endif
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_RULECONTROL_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if( BSWM_ENABLE_COMM == STD_ON )
/**********************************************************************************************************************
 *  BswM_ComM_CurrentMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_ComM_CurrentMode(NetworkHandleType Network, ComM_ModeType RequestedMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_COMMCHANNELSTATE == STD_ON)
  BswM_ComMChannelStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7924, SPEC-7863, SPEC-7903) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (RequestedMode > COMM_FULL_COMMUNICATION)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_COMMCHANNELSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfComMChannelState(); userHandle++) /* COV_BSWM_ALLNETWORKPORTS */
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfComMChannelMapping(userHandle) == Network)
      {
        BswM_SetComMChannelState(userHandle, RequestedMode); /* SBSW_BSWM_COMMCHANNELSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFCOMMCHANNELMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfComMChannelMapping(userHandle), BswM_GetImmediateUserEndIdxOfComMChannelMapping(userHandle), BSWM_COMM_CURRENTMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(RequestedMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_COMM_CURRENTMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_COMM_INITIATE_RESET == STD_ON)
/**********************************************************************************************************************
 *  BswM_ComM_InitiateReset()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_ComM_InitiateReset(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_IMMEDIATEUSERUSEDOFCOMMINITIATERESETMAPPING == STD_ON) && (BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON) && (BSWM_USE_INIT_POINTER == STD_ON)
  BswM_ComMInitiateResetMappingIterType userHandle;
# endif
  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {

# if(BSWM_IMMEDIATEUSERUSEDOFCOMMINITIATERESETMAPPING == STD_ON)
#  if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfComMInitiateResetMapping(); userHandle++) /* Size can only be 0 or 1. */
#  endif
    {
      BswM_SetComMInitiateResetState(TRUE);
      BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfComMInitiateResetMapping(0), BswM_GetImmediateUserEndIdxOfComMInitiateResetMapping(0), BSWM_COMM_INITIATERESET_ID);
      BswM_SetComMInitiateResetState(FALSE);
    }
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_COMM_INITIATERESET_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_COMM_PNC_SUPPORT == STD_ON)
/**********************************************************************************************************************
 *  BswM_ComM_CurrentPNCMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_ComM_CurrentPNCMode(PNCHandleType PNC, ComM_PncModeType RequestedMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_COMMPNCSTATE == STD_ON)
  BswM_ComMPncStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed mode is in range.  (\trace SPEC-16710, SPEC-16754) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (RequestedMode > COMM_PNC_REQUESTED)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_COMMPNCSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfComMPncState(); userHandle++)
    {
      if (BswM_GetExternalIdOfComMPncMapping(userHandle) == PNC)
      {
        BswM_SetComMPncState(userHandle, RequestedMode); /* SBSW_BSWM_COMMPNCSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfComMPncMapping(userHandle), BswM_GetImmediateUserEndIdxOfComMPncMapping(userHandle), BSWM_COMM_PNC_CURRENTMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(PNC); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(RequestedMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_COMM_PNC_CURRENTMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_DCM == STD_ON)
/**********************************************************************************************************************
 *  BswM_Dcm_ApplicationUpdated()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Dcm_ApplicationUpdated(void) 
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING == STD_ON) && (BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON) && (BSWM_USE_INIT_POINTER == STD_ON)
  BswM_DcmApplUpdateMappingIterType userHandle;
# endif
  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if(BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING == STD_ON)
#  if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfDcmApplUpdateMapping(); userHandle++) /* Size can only be 0 or 1. */
#  endif
    {
      BswM_SetDcmApplUpdateState(TRUE);
      BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfDcmApplUpdateMapping(0), BswM_GetImmediateUserEndIdxOfDcmApplUpdateMapping(0), BSWM_DCM_APPLICATION_UPDATED_ID);
      BswM_SetDcmApplUpdateState(FALSE);
    }
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_DCM_APPLICATION_UPDATED_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if(BSWM_ENABLE_DCM == STD_ON)
/**********************************************************************************************************************
 *  BswM_Dcm_CommunicationMode_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Dcm_CommunicationMode_CurrentState(NetworkHandleType Network, Dcm_CommunicationModeType RequestedMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_DCMCOMSTATE == STD_ON)
  BswM_DcmComStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7844, SPEC-7923, SPEC-7946) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (RequestedMode > DCM_DISABLE_RX_TX_NORM_NM)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_DCMCOMSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfDcmComState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfDcmComMapping(userHandle) == Network)
      {
        BswM_SetDcmComState(userHandle, RequestedMode); /* SBSW_BSWM_DCMCOMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFDCMCOMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfDcmComMapping(userHandle), BswM_GetImmediateUserEndIdxOfDcmComMapping(userHandle), BSWM_DCM_COMMUNICATION_STATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(RequestedMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_DCM_COMMUNICATION_STATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_CANSM == STD_ON)
/**********************************************************************************************************************
 *  BswM_CanSM_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_CanSM_CurrentState(NetworkHandleType Network, CanSM_BswMCurrentStateType CurrentState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_CANSMCHANNELSTATE == STD_ON)
  BswM_CanSMChannelStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7737, SPEC-7915, SPEC-7908) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (CurrentState > CANSM_BSWM_CHANGE_BAUDRATE)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_CANSMCHANNELSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfCanSMChannelState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfCanSMChannelMapping(userHandle) == Network)
      {
        BswM_SetCanSMChannelState(userHandle, CurrentState); /* SBSW_BSWM_CANSMCHANNELSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfCanSMChannelMapping(userHandle), BswM_GetImmediateUserEndIdxOfCanSMChannelMapping(userHandle), BSWM_CANSM_CURRENTSTATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_CANSM_CURRENTSTATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_ETHIF == STD_ON)
/**********************************************************************************************************************
 *  BswM_EthIf_PortGroupLinkStateChg()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_EthIf_PortGroupLinkStateChg(EthIf_SwitchPortGroupIdxType PortGroupIdx, EthTrcv_LinkStateType PortGroupState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_ETHIFPORTSTATE == STD_ON)
  BswM_EthIfPortStateIterType userHandle;
# endif
  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (PortGroupState > ETHTRCV_LINK_STATE_ACTIVE)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_ETHIFPORTSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfEthIfPortState(); userHandle++)
    {
      if (BswM_GetExternalIdOfEthIfPortMapping(userHandle) == PortGroupIdx)
      {
        BswM_SetEthIfPortState(userHandle, PortGroupState); /* SBSW_BSWM_ETHIFPORTSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFETHIFPORTMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfEthIfPortMapping(userHandle), BswM_GetImmediateUserEndIdxOfEthIfPortMapping(userHandle), BSWM_ETHIF_PORTGROUPLINKSTATECHANGE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(PortGroupIdx); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(PortGroupState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_ETHIF_PORTGROUPLINKSTATECHANGE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_ETHSM == STD_ON)
/**********************************************************************************************************************
 *  BswM_EthSM_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_EthSM_CurrentState(NetworkHandleType Network, EthSM_NetworkModeStateType CurrentState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_ETHSMSTATE == STD_ON)
  BswM_EthSMStateIterType userHandle;
# endif
  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7782, SPEC-7875, SPEC-7881) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (CurrentState > ETHSM_BSWM_WAIT_OFFLINE)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_ETHSMSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfEthSMState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfEthSMMapping(userHandle) == Network)
      {
        BswM_SetEthSMState(userHandle, CurrentState); /* SBSW_BSWM_ETHSMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFETHSMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfEthSMMapping(userHandle), BswM_GetImmediateUserEndIdxOfEthSMMapping(userHandle), BSWM_ETHSM_CURRENTMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_ETHSM_CURRENTMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_FRSM == STD_ON)
/**********************************************************************************************************************
 *  BswM_FrSM_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_FrSM_CurrentState(NetworkHandleType Network, FrSM_BswM_StateType CurrentState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_FRSMSTATE == STD_ON)
  BswM_FrSMStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7886, SPEC-7890, SPEC-7955) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (CurrentState > FRSM_BSWM_ONLINE_PASSIVE_ECU_PASSIVE)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_FRSMSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfFrSMState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfFrSMMapping(userHandle) == Network)
      {
        BswM_SetFrSMState(userHandle, CurrentState); /* SBSW_BSWM_FRSMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFFRSMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfFrSMMapping(userHandle), BswM_GetImmediateUserEndIdxOfFrSMMapping(userHandle), BSWM_FRSM_CURRENTSTATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_FRSM_CURRENTSTATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_J1939DCM == STD_ON)
/**********************************************************************************************************************
 *  BswM_J1939DcmBroadcastStatus()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_J1939DcmBroadcastStatus(uint16 NetworkMask)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING == STD_ON) && (BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON) && (BSWM_USE_INIT_POINTER == STD_ON)
  BswM_J1939DcmMappingIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_J1939DCMSTATE == STD_ON)
    BswM_SetJ1939DcmState(NetworkMask);
#  if(BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING == STD_ON)
#   if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfJ1939DcmMapping(); userHandle++) /* Size can only be 0 or 1. */
#   endif
    {
      BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfJ1939DcmMapping(0), BswM_GetImmediateUserEndIdxOfJ1939DcmMapping(0), BSWM_J1939DCM_BROADCASTSTATUS_ID);
    }
#  endif
# else
    BSWM_DUMMY_STATEMENT(NetworkMask); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_J1939DCM_BROADCASTSTATUS_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_J1939NM == STD_ON)
/**********************************************************************************************************************
 *  BswM_J1939Nm_StateChangeNotification()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_J1939Nm_StateChangeNotification(NetworkHandleType Network, uint8 Node, Nm_StateType NmState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if(BSWM_J1939NMSTATE == STD_ON)
  uint16 index = (uint16)((((uint16) Node) << 8) | Network);
  BswM_J1939NmStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (!((NmState == NM_STATE_OFFLINE) || (NmState == NM_STATE_NORMAL_OPERATION) || (NmState == NM_STATE_BUS_SLEEP)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_J1939NMSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfJ1939NmState(); userHandle++)
    {
      if (BswM_GetExternalIdOfJ1939NmMapping(userHandle) == index)
      {
        BswM_SetJ1939NmState(userHandle, NmState); /* SBSW_BSWM_J1939NMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFJ1939NMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfJ1939NmMapping(userHandle), BswM_GetImmediateUserEndIdxOfJ1939NmMapping(userHandle), BSWM_J1939NM_STATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(Node); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(NmState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_J1939NM_STATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_LINSM == STD_ON)
/**********************************************************************************************************************
 *  BswM_LinSM_CurrentSchedule()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_LinSM_CurrentSchedule(NetworkHandleType Network, LinIf_SchHandleType CurrentSchedule)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_LINSCHEDULESTATE == STD_ON)
  BswM_LinScheduleStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7856, SPEC-7753) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_LINSCHEDULESTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfLinScheduleState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfLinScheduleMapping(userHandle) == Network)
      {
        BswM_SetLinScheduleState(userHandle, CurrentSchedule); /* SBSW_BSWM_LINSCHEDULESTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfLinScheduleMapping(userHandle), BswM_GetImmediateUserEndIdxOfLinScheduleMapping(userHandle), BSWM_LINSM_CURRENTSCHEDULE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(CurrentSchedule); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_LINSM_CURRENTSCHEDULE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_LinSM_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_LinSM_CurrentState(NetworkHandleType Network, LinSM_ModeType CurrentState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_LINSMSTATE == STD_ON)
  BswM_LinSMStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7943, SPEC-7911, SPEC-7883) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (!((CurrentState == LINSM_BSWM_FULL_COM) || (CurrentState == LINSM_BSWM_NO_COM)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_LINSMSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfLinSMState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfLinSMMapping(userHandle) == Network)
      {
        BswM_SetLinSMState(userHandle, CurrentState); /* SBSW_BSWM_LINSMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFLINSMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfLinSMMapping(userHandle), BswM_GetImmediateUserEndIdxOfLinSMMapping(userHandle), BSWM_LINSM_CURRENTSTATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_LINSM_CURRENTSTATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
 *  BswM_LinSM_ScheduleEndNotification()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_LinSM_ScheduleEndNotification(NetworkHandleType Network, LinIf_SchHandleType Schedule)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_LINSCHEDULEENDSTATE == STD_ON)
  BswM_LinScheduleEndStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_LINSCHEDULEENDSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfLinScheduleEndState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfLinScheduleEndMapping(userHandle) == Network)
      {
        BswM_SetLinScheduleEndState(userHandle, Schedule); /* SBSW_BSWM_LINSCHEDULEENDSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEENDMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfLinScheduleEndMapping(userHandle), BswM_GetImmediateUserEndIdxOfLinScheduleEndMapping(userHandle), BSWM_LINSM_SCHEDULEENDNOTIFICATION_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(Schedule); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_LINSM_SCHEDULEENDNOTIFICATION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif /* BSWM_ENABLE_LINSM == STD_ON */

#if (BSWM_ENABLE_LINTP == STD_ON)
/**********************************************************************************************************************
 *  BswM_LinTp_RequestMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_LinTp_RequestMode(NetworkHandleType Network, LinTp_Mode LinTpRequestedMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_LINTPSTATE == STD_ON)
  BswM_LinTPStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7873, SPEC-7891, SPEC-16660) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (Network >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (LinTpRequestedMode > LINTP_DIAG_RESPONSE)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_LINTPSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfLinTPState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfLinTPMapping(userHandle) == Network)
      {
        BswM_SetLinTPState(userHandle, LinTpRequestedMode); /* SBSW_BSWM_LINTPSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFLINTPMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfLinTPMapping(userHandle), BswM_GetImmediateUserEndIdxOfLinTPMapping(userHandle), BSWM_LINTP_REQUESTMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(Network); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(LinTpRequestedMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_LINTP_REQUESTMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_ECUM == STD_ON)
/**********************************************************************************************************************
 *  BswM_EcuM_CurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_EcuM_CurrentState(EcuM_StateType CurrentState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING == STD_ON) && (BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON) && (BSWM_USE_INIT_POINTER == STD_ON)
  BswM_EcuMModeMappingIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (!(
      /* Most used states are located at the top to improve runtime */
      (CurrentState == ECUM_STATE_APP_RUN)           ||
      (CurrentState == ECUM_STATE_APP_POST_RUN)      ||
      (CurrentState == ECUM_STATE_SLEEP)             ||
      (CurrentState == ECUM_STATE_SHUTDOWN)          ||
      (CurrentState == ECUM_STATE_PREP_SHUTDOWN)     ||
      (CurrentState == ECUM_STATE_STARTUP)           ||
      (CurrentState == ECUM_STATE_STARTUP_ONE)       ||
      (CurrentState == ECUM_STATE_STARTUP_TWO)       ||
      (CurrentState == ECUM_STATE_WAKEUP)            ||
      (CurrentState == ECUM_STATE_RUN)               ||
      (CurrentState == ECUM_STATE_WAKEUP_ONE)        ||
      (CurrentState == ECUM_STATE_WAKEUP_VALIDATION) ||
      (CurrentState == ECUM_STATE_WAKEUP_REACTION)   ||
      (CurrentState == ECUM_STATE_WAKEUP_TWO)        ||
      (CurrentState == ECUM_STATE_WAKEUP_WAKESLEEP)  ||
      (CurrentState == ECUM_STATE_WAKEUP_TTII)       ||
      (CurrentState == ECUM_STATE_GO_SLEEP)          ||
      (CurrentState == ECUM_STATE_GO_OFF_ONE)        ||
      (CurrentState == ECUM_STATE_GO_OFF_TWO)        ||
      (CurrentState == ECUM_STATE_RESET)             ||
      (CurrentState == ECUM_STATE_OFF)
     ))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_ECUMMODESTATE == STD_ON)
    BswM_SetEcuMModeState(CurrentState);
#  if(BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING == STD_ON)
#   if(BSWM_POSTBUILD_VARIANT_SUPPORT == STD_ON && BSWM_USE_INIT_POINTER == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfEcuMModeMapping(); userHandle++) /* Size can only be 0 or 1. */
#   endif
    {
      BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfEcuMModeMapping(0), BswM_GetImmediateUserEndIdxOfEcuMModeMapping(0), BSWM_ECUM_CURRENTSTATE_ID);
    }
#  endif
# else
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_ECUM_CURRENTSTATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_ECUM == STD_ON)
/**********************************************************************************************************************
 *  BswM_EcuM_CurrentWakeup()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_EcuM_CurrentWakeup(EcuM_WakeupSourceType source, EcuM_WakeupStateType state)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if(BSWM_ECUMWAKEUPSTATE == STD_ON)
  BswM_EcuMWakeupStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. (\trace SPEC-7850, SPEC-7921) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (state > BSWM_ECUM_MAX_WKSTATUS)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if(BSWM_ECUMWAKEUPSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfEcuMWakeupState(); userHandle++)
    {
      if ((((EcuM_WakeupSourceType)BswM_GetExternalIdOfEcuMWakeupMapping(userHandle)) & source) != 0u)
      {
        BswM_SetEcuMWakeupState(userHandle, state); /* SBSW_BSWM_ECUMWAKEUPSTATE */
#  if(BSWM_IMMEDIATEUSERUSEDOFECUMWAKEUPMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfEcuMWakeupMapping(userHandle), BswM_GetImmediateUserEndIdxOfEcuMWakeupMapping(userHandle), BSWM_ECUM_CURRENTWAKEUP_ID);
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(source); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(state); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_ECUM_CURRENTWAKEUP_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_EcuM_RequestedState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_EcuM_RequestedState(EcuM_StateType State, EcuM_RunStatusType CurrentStatus)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_ECUMRUNREQUESTSTATE == STD_ON)
  BswM_EcuMRunRequestStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (!((State == ECUM_STATE_APP_RUN) || (State == ECUM_STATE_APP_POST_RUN)))
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (CurrentStatus > ECUM_RUNSTATUS_RELEASED)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_ECUMRUNREQUESTSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfEcuMRunRequestState(); userHandle++)
    {
      if (BswM_GetExternalIdOfEcuMRunRequestMapping(userHandle) == State)
      {
        BswM_SetEcuMRunRequestState(userHandle, CurrentStatus); /* SBSW_BSWM_ECUMRUNREQUESTSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFECUMRUNREQUESTMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfEcuMRunRequestMapping(userHandle), BswM_GetImmediateUserEndIdxOfEcuMRunRequestMapping(userHandle), BSWM_ECUM_REQUESTEDSTATE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(State); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentStatus); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_ECUM_REQUESTEDSTATE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif /* BSWM_ENABLE_ECUM == STD_ON */

#if (BSWM_ENABLE_NM == STD_ON)
/**********************************************************************************************************************
 *  BswM_Nm_StateChangeNotification()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC( void, BSWM_CODE ) BswM_Nm_StateChangeNotification( CONST( NetworkHandleType, AUTOMATIC ) nmNetworkHandle,
                                                         CONST( Nm_StateType, AUTOMATIC) nmPreviousState,
                                                         CONST( Nm_StateType, AUTOMATIC ) nmCurrentState )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_NMSTATE == STD_ON)
  BswM_NmStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  /* nmPreviousState is not relevant */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (nmNetworkHandle >= BSWM_CHANNEL_COUNT)
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
#   if defined NM_STATE_NUMBER_OF_STATES /* COV_BSWM_NM_COMPATIBILITY */
  else if (nmCurrentState >= NM_STATE_NUMBER_OF_STATES)
#   else
  else if (nmCurrentState > NM_STATE_OFFLINE)
#   endif
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_NMSTATE == STD_ON)
    /* PRQA S 3355, 3357 2 */ /* MD_BswM_3355, MD_BswM_3357 */
    for (userHandle = 0; userHandle < BswM_GetSizeOfNmState(); userHandle++)
    {
      /* PRQA S 3355, 3358 2 */ /* MD_BswM_3355, MD_BswM_3358 */
      if (BswM_GetExternalIdOfNmMapping(userHandle) == nmNetworkHandle)
      {
        BswM_SetNmState(userHandle, nmCurrentState); /* SBSW_BSWM_NMSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFNMMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfNmMapping(userHandle), BswM_GetImmediateUserEndIdxOfNmMapping(userHandle), BSWM_NM_STATE_CHANGE_ID);
#  endif
        break;
      }
    }
# else
#  if (BSWM_DEV_ERROR_DETECT == STD_OFF)
    BSWM_DUMMY_STATEMENT_CONST(nmNetworkHandle); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#  if (BSWM_DEV_ERROR_DETECT == STD_OFF) || (BSWM_MODE_CHECK == STD_OFF)
    BSWM_DUMMY_STATEMENT_CONST(nmCurrentState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
# endif
    BSWM_DUMMY_STATEMENT_CONST(nmPreviousState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_NM_STATE_CHANGE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_NVM == STD_ON)
/**********************************************************************************************************************
 *  BswM_NvM_CurrentBlockMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC (void, BSWM_CODE) BswM_NvM_CurrentBlockMode(NvM_BlockIdType Block, NvM_RequestResultType CurrentBlockMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_NVMBLOCKSTATE == STD_ON)
  BswM_NvMBlockStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed mode is in range. (\trace SPEC-7795, SPEC-7945) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (CurrentBlockMode > NVM_REQ_RESTORED_FROM_ROM)
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_NVMBLOCKSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfNvMBlockState(); userHandle++)
    {
      if (BswM_GetExternalIdOfNvMBlockMapping(userHandle) == Block)
      {
        BswM_SetNvMBlockState(userHandle, CurrentBlockMode); /* SBSW_BSWM_NVMBLOCKSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFNVMBLOCKMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfNvMBlockMapping(userHandle), BswM_GetImmediateUserEndIdxOfNvMBlockMapping(userHandle), BSWM_NVM_CURRENTBLOCKMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(Block); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentBlockMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_NVM_CURRENTBLOCKMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_NVM == STD_ON)
/**********************************************************************************************************************
 *  BswM_NvM_CurrentJobMode()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC (void, BSWM_CODE) BswM_NvM_CurrentJobMode(uint8 ServiceId, NvM_RequestResultType CurrentJobMode)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_NVMJOBSTATE == STD_ON)
  BswM_NvMJobStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed mode is in range. (\trace SPEC-16676, SPEC-16673, SPEC-16749) */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else if (!((ServiceId == 0x0c) || (ServiceId == 0x0d)))
  {
    errorId = BSWM_E_REQ_USER_OUT_OF_RANGE;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  else if (!((CurrentJobMode == NVM_REQ_OK) || (CurrentJobMode == NVM_REQ_PENDING) || (CurrentJobMode == NVM_REQ_NOT_OK)
      || (CurrentJobMode == NVM_REQ_CANCELED)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_NVMJOBSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfNvMJobState(); userHandle++)
    {
      if (BswM_GetExternalIdOfNvMJobMapping(userHandle) == ServiceId)
      {
        BswM_SetNvMJobState(userHandle, CurrentJobMode); /* SBSW_BSWM_NVMJOBSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFNVMJOBMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfNvMJobMapping(userHandle), BswM_GetImmediateUserEndIdxOfNvMJobMapping(userHandle), BSWM_NVM_CURRENTJOBMODE_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT_DET_OFF(ServiceId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentJobMode); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_NVM_CURRENTJOBMODE_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (BSWM_ENABLE_PDUR == STD_ON)
/**********************************************************************************************************************
 *  BswM_PduR_RxIndication()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_PduR_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, BSWM_APPL_DATA) PduInfoPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURRXINDICATIONSTATE == STD_ON)
  BswM_PduRRxIndicationMappingIterType userHandle;
#  if (BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING == STD_ON)
  BswM_PduRRxIndicationStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURRXINDICATIONMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRRxIndicationMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRRxIndicationMapping(userHandle) == RxPduId)
      {
#  if (BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING == STD_ON)
        internalId = BswM_GetPduRRxIndicationStateIdxOfPduRRxIndicationMapping(userHandle);
        BswM_SetPduRRxIndicationState(internalId, TRUE); /* SBSW_BSWM_PDURRXINDICATIONSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRRxIndicationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRRxIndicationMapping(userHandle), BSWM_PDUR_RXINDICATION_ID);
        BswM_SetPduRRxIndicationState(internalId, FALSE); /* SBSW_BSWM_PDURRXINDICATIONSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRRxIndicationState(userHandle, TRUE); /* SBSW_BSWM_PDURRXINDICATIONSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRRxIndicationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRRxIndicationMapping(userHandle), BSWM_PDUR_RXINDICATION_ID);
        BswM_SetPduRRxIndicationState(userHandle, FALSE); /* SBSW_BSWM_PDURRXINDICATIONSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(RxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
    BSWM_DUMMY_STATEMENT_CONST(PduInfoPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_RXINDICATION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_PduR_TpRxIndication()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_PduR_TpRxIndication(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURTPRXINDICATIONSTATE == STD_ON)
  BswM_PduRTpRxIndicationMappingIterType userHandle;
#  if (BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING == STD_ON)
  BswM_PduRTpRxIndicationStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURTPRXINDICATIONMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRTpRxIndicationMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRTpRxIndicationMapping(userHandle) == id)
      {
#  if (BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING == STD_ON)
        internalId = BswM_GetPduRTpRxIndicationStateIdxOfPduRTpRxIndicationMapping(userHandle);
        BswM_SetPduRTpRxIndicationState(internalId, TRUE); /* SBSW_BSWM_PDURTPRXINDICATIONSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpRxIndicationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpRxIndicationMapping(userHandle), BSWM_PDUR_TPRXINDICATION_ID);
        BswM_SetPduRTpRxIndicationState(internalId, FALSE); /* SBSW_BSWM_PDURTPRXINDICATIONSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRTpRxIndicationState(userHandle, TRUE); /* SBSW_BSWM_PDURTPRXINDICATIONSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpRxIndicationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpRxIndicationMapping(userHandle), BSWM_PDUR_TPRXINDICATION_ID);
        BswM_SetPduRTpRxIndicationState(userHandle, FALSE); /* SBSW_BSWM_PDURTPRXINDICATIONSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(id); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
    BSWM_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_TPRXINDICATION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_PduR_TpStartOfReception()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
/* PRQA S 3673 3 */ /* MD_BswM_3673 */
FUNC(void, BSWM_CODE) BswM_PduR_TpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, BSWM_APPL_DATA) info,
                                                   PduLengthType TpSduLength,
                                                   P2VAR(PduLengthType, AUTOMATIC, BSWM_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURTPSTARTOFRECEPTIONSTATE == STD_ON)
  BswM_PduRTpStartOfReceptionMappingIterType userHandle;
#  if (BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING == STD_ON)
  BswM_PduRTpStartOfReceptionStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURTPSTARTOFRECEPTIONMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRTpStartOfReceptionMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRTpStartOfReceptionMapping(userHandle) == id)
      {
#  if (BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING == STD_ON)
        internalId = BswM_GetPduRTpStartOfReceptionStateIdxOfPduRTpStartOfReceptionMapping(userHandle);
        BswM_SetPduRTpStartOfReceptionState(internalId, TRUE); /* SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpStartOfReceptionMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpStartOfReceptionMapping(userHandle), BSWM_PDUR_TPSTARTOFRECEPTION_ID);
        BswM_SetPduRTpStartOfReceptionState(internalId, FALSE); /* SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRTpStartOfReceptionState(userHandle, TRUE); /* SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpStartOfReceptionMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpStartOfReceptionMapping(userHandle), BSWM_PDUR_TPSTARTOFRECEPTION_ID);
        BswM_SetPduRTpStartOfReceptionState(userHandle, FALSE); /* SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(id); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
    BSWM_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(TpSduLength); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT(bufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_TPSTARTOFRECEPTION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_PduR_TpTxConfirmation()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_PduR_TpTxConfirmation(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURTPTXCONFIRMATIONSTATE == STD_ON)
  BswM_PduRTpTxConfirmationMappingIterType userHandle;
#  if (BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING == STD_ON)
  BswM_PduRTpTxConfirmationStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURTPTXCONFIRMATIONMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRTpTxConfirmationMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRTpTxConfirmationMapping(userHandle) == id)
      {
#  if (BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING == STD_ON)
        internalId = BswM_GetPduRTpTxConfirmationStateIdxOfPduRTpTxConfirmationMapping(userHandle);
        BswM_SetPduRTpTxConfirmationState(internalId, TRUE); /* SBSW_BSWM_PDURTPTXCONFIRMATIONSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpTxConfirmationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpTxConfirmationMapping(userHandle), BSWM_PDUR_TPTXCONFIRMATION_ID);
        BswM_SetPduRTpTxConfirmationState(internalId, FALSE); /* SBSW_BSWM_PDURTPTXCONFIRMATIONSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRTpTxConfirmationState(userHandle, TRUE); /* SBSW_BSWM_PDURTPTXCONFIRMATIONSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTpTxConfirmationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTpTxConfirmationMapping(userHandle), BSWM_PDUR_TPTXCONFIRMATION_ID);
        BswM_SetPduRTpTxConfirmationState(userHandle, FALSE); /* SBSW_BSWM_PDURTPTXCONFIRMATIONSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(id); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
    BSWM_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_TPTXCONFIRMATION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_PduR_Transmit()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_PduR_Transmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, BSWM_APPL_DATA) PduInfoPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURTRANSMITSTATE == STD_ON)
  BswM_PduRTransmitMappingIterType userHandle;
#  if (BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING == STD_ON)
  BswM_PduRTransmitStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURTRANSMITMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRTransmitMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRTransmitMapping(userHandle) == id)
      {
#  if (BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING == STD_ON)
        internalId = BswM_GetPduRTransmitStateIdxOfPduRTransmitMapping(userHandle);
        BswM_SetPduRTransmitState(internalId, TRUE); /* SBSW_BSWM_PDURTRANSMITSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTransmitMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTransmitMapping(userHandle), BSWM_PDUR_TRANSMIT_ID);
        BswM_SetPduRTransmitState(internalId, FALSE); /* SBSW_BSWM_PDURTRANSMITSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRTransmitState(userHandle, TRUE); /* SBSW_BSWM_PDURTRANSMITSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTransmitMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTransmitMapping(userHandle), BSWM_PDUR_TRANSMIT_ID);
        BswM_SetPduRTransmitState(userHandle, FALSE); /* SBSW_BSWM_PDURTRANSMITSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(id); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
    BSWM_DUMMY_STATEMENT_CONST(PduInfoPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_TRANSMIT_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

/**********************************************************************************************************************
 *  BswM_PduR_TxConfirmation()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_PduR_TxConfirmation(PduIdType TxPduId)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_PDURTXCONFIRMATIONSTATE == STD_ON)
  BswM_PduRTxConfirmationMappingIterType userHandle;
#  if (BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING == STD_ON)
  BswM_PduRTxConfirmationStateIterType internalId;
#  endif
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFPDURTXCONFIRMATIONMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfPduRTxConfirmationMapping(); userHandle++)
    {
      if (BswM_GetExternalIdOfPduRTxConfirmationMapping(userHandle) == TxPduId)
      {
#  if (BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING == STD_ON)
        internalId = BswM_GetPduRTxConfirmationStateIdxOfPduRTxConfirmationMapping(userHandle);
        BswM_SetPduRTxConfirmationState(internalId, TRUE); /* SBSW_BSWM_PDURTXCONFIRMATIONSTATEIND */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTxConfirmationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTxConfirmationMapping(userHandle), BSWM_PDUR_TXCONFIRMATION_ID);
        BswM_SetPduRTxConfirmationState(internalId, FALSE); /* SBSW_BSWM_PDURTXCONFIRMATIONSTATEIND */
        /* Do not break, PduId could be used in multiple ports */
#  else
        BswM_SetPduRTxConfirmationState(userHandle, TRUE); /* SBSW_BSWM_PDURTXCONFIRMATIONSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfPduRTxConfirmationMapping(userHandle), BswM_GetImmediateUserEndIdxOfPduRTxConfirmationMapping(userHandle), BSWM_PDUR_TXCONFIRMATION_ID);
        BswM_SetPduRTxConfirmationState(userHandle, FALSE); /* SBSW_BSWM_PDURTXCONFIRMATIONSTATE */
        break;
#  endif
      }
    }
# else
    BSWM_DUMMY_STATEMENT(TxPduId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_PDUR_TXCONFIRMATION_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_SD == STD_ON)
/**********************************************************************************************************************
 *  BswM_Sd_ClientServiceCurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Sd_ClientServiceCurrentState(uint16 SdClientServiceHandleId, Sd_ClientServiceCurrentStateType CurrentClientState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_SDCLIENTSERVICESTATE == STD_ON)
  BswM_SdClientServiceStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  /* If type is an enumeration the following code will cause MISRA violations because the conditions will always be
   * true, the expression always be false and so the statement is unreachable */
  /* PRQA S 3201, 3355, 3356, 3359 2 */ /* MD_BswM_3201, MD_BswM_3355, MD_BswM_3356, MD_BswM_3359 */
  else if (!((CurrentClientState == SD_CLIENT_SERVICE_DOWN) || (CurrentClientState == SD_CLIENT_SERVICE_AVAILABLE)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_SDCLIENTSERVICESTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfSdClientServiceState(); userHandle++)
    {
      if (BswM_GetExternalIdOfSdClientServiceMapping(userHandle) == SdClientServiceHandleId)
      {
        BswM_SetSdClientServiceState(userHandle, CurrentClientState); /* SBSW_BSWM_SDCLIENTSERVICESTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFSDCLIENTSERVICEMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfSdClientServiceMapping(userHandle), BswM_GetImmediateUserEndIdxOfSdClientServiceMapping(userHandle), BSWM_SD_CLIENTSERVICE_CURRENT_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(SdClientServiceHandleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(CurrentClientState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_SD_CLIENTSERVICE_CURRENT_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_SD == STD_ON)
/**********************************************************************************************************************
 *  BswM_Sd_ConsumedEventGroupCurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Sd_ConsumedEventGroupCurrentState(uint16 SdConsumedEventGroupHandleId, Sd_ConsumedEventGroupCurrentStateType ConsumedEventGroupState)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_SDCONSUMEDEVENTSTATE == STD_ON)
  BswM_SdConsumedEventStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  /* If type is an enumeration the following code will cause MISRA violations because the conditions will always be
   * true, the expression always be false and so the statement is unreachable */
  /* PRQA S 3201, 3355, 3356, 3359 2 */ /* MD_BswM_3201, MD_BswM_3355, MD_BswM_3356, MD_BswM_3359 */
  else if (!((ConsumedEventGroupState == SD_CONSUMED_EVENTGROUP_DOWN) || (ConsumedEventGroupState == SD_CONSUMED_EVENTGROUP_AVAILABLE)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_SDCONSUMEDEVENTSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfSdConsumedEventState(); userHandle++)
    {
      if (BswM_GetExternalIdOfSdConsumedEventMapping(userHandle) == SdConsumedEventGroupHandleId)
      {
        BswM_SetSdConsumedEventState(userHandle, ConsumedEventGroupState); /* SBSW_BSWM_SDCONSUMEDEVENTSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFSDCONSUMEDEVENTMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfSdConsumedEventMapping(userHandle), BswM_GetImmediateUserEndIdxOfSdConsumedEventMapping(userHandle), BSWM_SD_CONSUMEDEVENTGROUP_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(SdConsumedEventGroupHandleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(ConsumedEventGroupState); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_SD_CONSUMEDEVENTGROUP_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_SD == STD_ON)
/**********************************************************************************************************************
 *  BswM_Sd_EventHandlerCurrentState()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_Sd_EventHandlerCurrentState(uint16 SdEventHandlerHandleId, Sd_EventHandlerCurrentStateType EventHandlerStatus)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_SDEVENTHANDLERSTATE == STD_ON)
  BswM_SdEventHandlerStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized and passed parameters are in range. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
#  if (BSWM_MODE_CHECK == STD_ON)
  /* If type is an enumeration the following code will cause MISRA violations because the conditions will always be
   * true, the expression always be false and so the statement is unreachable */
  /* PRQA S 3201, 3355, 3356, 3359 2 */ /* MD_BswM_3201, MD_BswM_3355, MD_BswM_3356, MD_BswM_3359 */
  else if (!((EventHandlerStatus == SD_EVENT_HANDLER_RELEASED) || (EventHandlerStatus == SD_EVENT_HANDLER_REQUESTED)))
  {
    errorId = BSWM_E_REQ_MODE_OUT_OF_RANGE;
  }
#  endif
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_SDEVENTHANDLERSTATE == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfSdEventHandlerState(); userHandle++)
    {
      if (BswM_GetExternalIdOfSdEventHandlerMapping(userHandle) == SdEventHandlerHandleId)
      {
        BswM_SetSdEventHandlerState(userHandle, EventHandlerStatus); /* SBSW_BSWM_SDEVENTHANDLERSTATE */
#  if (BSWM_IMMEDIATEUSERUSEDOFSDEVENTHANDLERMAPPING == STD_ON)
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfSdEventHandlerMapping(userHandle), BswM_GetImmediateUserEndIdxOfSdEventHandlerMapping(userHandle), BSWM_SD_EVENTHANDLER_CURRENT_ID);
#  endif
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(SdEventHandlerHandleId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
    BSWM_DUMMY_STATEMENT_MODE_CHECK_OFF(EventHandlerStatus); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_SD_EVENTHANDLER_CURRENT_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#if (BSWM_ENABLE_WDGM == STD_ON)
/**********************************************************************************************************************
 *  BswM_WdgM_RequestPartitionReset()
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
FUNC(void, BSWM_CODE) BswM_WdgM_RequestPartitionReset(ApplicationType Application)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = BSWM_E_NO_ERROR;
# if (BSWM_WDGMSTATE == STD_ON)
  BswM_WdgMStateIterType userHandle;
# endif

  /* ----- Development Error Checks ------------------------------------- */
# if (BSWM_DEV_ERROR_DETECT == STD_ON)
  /* #20 Check if BswM is initialized. */
  if (!BswM_IsInitialized())
  {
    errorId = BSWM_E_NO_INIT;
  }
  else
# endif
  /* ----- Implementation ----------------------------------------------- */
  {
# if (BSWM_IMMEDIATEUSERUSEDOFWDGMMAPPING == STD_ON)
    for (userHandle = 0; userHandle < BswM_GetSizeOfWdgMState(); userHandle++)
    {
      if (BswM_GetExternalIdOfWdgMMapping(userHandle) == (BswM_ExternalIdOfWdgMMappingType)Application)
      {
        BswM_SetWdgMState(userHandle, (BswM_WdgMStateType)TRUE); /* SBSW_BSWM_WDGMSTATE */
        BSWM_CALL_IMMEDIATE(BswM_GetImmediateUserStartIdxOfWdgMMapping(userHandle), BswM_GetImmediateUserEndIdxOfWdgMMapping(userHandle), BSWM_WDGM_REQUESTPARTITIONRESET_ID);
        BswM_SetWdgMState(userHandle, (BswM_WdgMStateType)FALSE); /* SBSW_BSWM_WDGMSTATE */
        break;
      }
    }
# else
    BSWM_DUMMY_STATEMENT(Application); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
  /* ----- Development Error Report --------------------------------------- */
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
  if (errorId != BSWM_E_NO_ERROR)
  {
    (void)Det_ReportError(BSWM_MODULE_ID, BSWM_INSTANCE_ID_DET, BSWM_WDGM_REQUESTPARTITIONRESET_ID, errorId);
  }
# else
  BSWM_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

/**********************************************************************************************************************
*  BswM_MainFunction()
*********************************************************************************************************************/
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
*/
FUNC(void, BSWM_CODE) BswM_MainFunction(void)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 localSemaphore;

  /* ----- Implementation ----------------------------------------------- */
  if (BswM_IsInitialized())
  {
    BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    localSemaphore = BswM_QueueSemaphore;
    if (BswM_QueueSemaphore == BSWM_REQUEST_SEMAPHORE_UNLOCKED)
    {
      BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_LOCKED;
    }
    BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

#if(BSWM_IMMEDIATEUSER == STD_ON)
    /* #31 Process pending immediate requests if semaphore was locked. */
    if (BSWM_REQUEST_SEMAPHORE_UNLOCKED == localSemaphore)
    {
      BswM_ProcessQueuedRequests();
    }
#endif

#if(BSWM_SWCMODEREQUESTUPDATEFCT == STD_ON)
    BswM_SwcModeRequestUpdateFct();
#endif

#if((BSWM_DEFERREDRULES == STD_ON) || (BSWM_TIMERSTATE == STD_ON))
    BswM_EnterCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
# if (BSWM_TIMERSTATE == STD_ON)
    /* #33 Decrease all configured timers. */
    BswM_DecreaseTimer();
# endif /* (BSWM_TIMERSTATE == STD_ON) */

# if(BSWM_DEFERREDRULES == STD_ON)
    /* #34 Arbitrate and execute all rules which have at least one deferred port (BswM_ExecuteDeferredRules). */
    BswM_ExecuteDeferredRules();
# endif /* (BSWM_DEFERREDRULES == STD_ON) */
    BswM_LeaveCriticalArea_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
#endif /* ((BSWM_DEFERREDRULES == STD_ON) || (BSWM_TIMERSTATE == STD_ON)) */

    if (BSWM_REQUEST_SEMAPHORE_UNLOCKED == localSemaphore)
    {
#if(BSWM_IMMEDIATEUSER == STD_ON)
      /* Immediately process other pending immediate requests */
      BswM_ProcessQueuedRequests();
      /* Unlock semaphore AFTER processing of the queue */
#endif
      BswM_QueueSemaphore = BSWM_REQUEST_SEMAPHORE_UNLOCKED;
    }
#if(BSWM_MODENOTIFICATIONFCT == STD_ON)
    BswM_ModeNotificationFct();
#endif

#if(BSWM_IPDU_GROUP_CONTROL == STD_ON)
    BswM_ExecuteIpduGroupControl();
#endif
  }
}

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_BSWM_ACTIONFCTPTR
  \DESCRIPTION Access to generated table which contains function pointer
  \COUNTERMEASURE \S User verifies generated functions (SMI-8) and performs adequate integration (SMI-4).

\ID SBSW_BSWM_ACTIONLISTFCTPTR
  \DESCRIPTION Access to generated table which contains function pointer
  \COUNTERMEASURE \S User verifies generated functions (SMI-8) and performs adequate integration (SMI-4).

\ID SBSW_BSWM_EXPRESSIONFCTPTR
  \DESCRIPTION Access to generated table which contains function pointer
  \COUNTERMEASURE \S User verifies generated functions (SMI-8) and performs adequate integration (SMI-4).

\ID SBSW_BSWM_RULEFCTPTR
  \DESCRIPTION Access to generated table which contains function pointer
  \COUNTERMEASURE \S User verifies generated functions (SMI-8) and performs adequate integration (SMI-4).

\ID SBSW_BSWM_IMMEDIATEMODEREQUEST
  \DESCRIPTION Access to ModeRequestQueue via indirection over Domain. Immediate and ModeRequestQueue have same index using ComStackLib.
  \COUNTERMEASURE \N Qualified use-case CSL02 and CSL03 of ComStackLib

\ID SBSW_BSWM_SETACTIONLISTQUEUE
  \DESCRIPTION Access of ActionListQueue using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_SETMODEREQUESTQUEUE
  \DESCRIPTION Access of ModeRequestQueue using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_SETRULESTATE
  \DESCRIPTION Access of RuleStates using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_SETTIMER
  \DESCRIPTION Access of TimerState and TimerValue with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_GETVERSIONINFO
  \DESCRIPTION The function BswM_GetVersionInfo writes to the object referenced by parameter VersionInfo
  \COUNTERMEASURE \N The caller ensures that the pointers passed to the parameter VersionInfo is valid.

\ID SBSW_BSWM_DCMCOMSTATE
  \DESCRIPTION Access of DcmComState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_CANSMCHANNELSTATE
  \DESCRIPTION Access of CanSMChanelState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_COMMCHANNELSTATE
  \DESCRIPTION Access of ComMChanelState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_COMMPNCSTATE
  \DESCRIPTION Access of ComMPncState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_ECUMRUNREQUESTSTATE
  \DESCRIPTION Access of EcuMRunRequestState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_ECUMWAKEUPSTATE
  \DESCRIPTION Access of EcuMWakeupState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_ETHIFPORTSTATE
  \DESCRIPTION Access of EthIfPortState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_ETHSMSTATE
  \DESCRIPTION Access of EthSMState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_FRSMSTATE
  \DESCRIPTION Access of FrSMState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_GENERICSTATE
  \DESCRIPTION Access of GenericState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_J1939NMSTATE
  \DESCRIPTION Access of J1939NmState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib
  
\ID SBSW_BSWM_LINSCHEDULEENDSTATE
  \DESCRIPTION Access of LinScheduleEndState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_LINSCHEDULESTATE
  \DESCRIPTION Access of LinScheduleState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_LINSMSTATE
  \DESCRIPTION Access of LinSMState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_LINTPSTATE
  \DESCRIPTION Access of LinTPState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_NMSTATE
  \DESCRIPTION Access of NmState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_NVMBLOCKSTATE
  \DESCRIPTION Access of NvMBlockState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_NVMJOBSTATE
  \DESCRIPTION Access of NvMJobState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_PDURRXINDICATIONSTATE
  \DESCRIPTION Access of PduRRxIndicationState and PduRRxIndicationMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURRXINDICATIONSTATEIND
  \DESCRIPTION Access to PduRRxIndicationState via indirection over PduRRxIndicationMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_PDURTPRXINDICATIONSTATE
  \DESCRIPTION Access of PduRTpRxIndicationState and PduRTpRxIndicationMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURTPRXINDICATIONSTATEIND
  \DESCRIPTION Access to PduRTpRxIndicationState via indirection over PduRTpRxIndicationMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATE
  \DESCRIPTION Access of PduRTpStartOfReceptionState and PduRTpStartOfReceptionMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURTPSTARTOFRECEPTIONSTATEIND
  \DESCRIPTION Access to PduRTpStartOfReceptionState via indirection over PduRTpStartOfReceptionMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_PDURTPTXCONFIRMATIONSTATE
  \DESCRIPTION Access of PduRTpTxConfirmationState and PduRTpTxConfirmationMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURTPTXCONFIRMATIONSTATEIND
  \DESCRIPTION Access to PduRTpTxConfirmationState via indirection over PduRTpTxConfirmationMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_PDURTRANSMITSTATE
  \DESCRIPTION Access of PduRTransmitState and PduRTransmitMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURTRANSMITSTATEIND
  \DESCRIPTION Access to PduRTransmitState via indirection over PduRTransmitMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_PDURTXCONFIRMATIONSTATE
  \DESCRIPTION Access of PduRTxConfirmationState and PduRTxConfirmationMapping with same index using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

\ID SBSW_BSWM_PDURTXCONFIRMATIONSTATEIND
  \DESCRIPTION Access to PduRTxConfirmationState via indirection over PduRTxConfirmationMapping.
  \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

\ID SBSW_BSWM_SDCLIENTSERVICESTATE
  \DESCRIPTION Access of SdClientServiceState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_SDCONSUMEDEVENTSTATE
  \DESCRIPTION Access of SdConsumedEventState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_SDEVENTHANDLERSTATE
  \DESCRIPTION Access of SdEventHandlerState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_WDGMSTATE
  \DESCRIPTION Access of WdgMState using ComStackLib
  \COUNTERMEASURE \N Qualified use-case CSL01 of ComStackLib

\ID SBSW_BSWM_RTE_READ
  \DESCRIPTION The Rte_Read_<Port> function is called with an address to a static variable
  \COUNTERMEASURE \N Write access to a static variable - address is always valid

\ID SBSW_BSWM_RTE_MODE
  \DESCRIPTION The Rte_Mode_<Port> function is called with an address to a static variable and a local variable
  \COUNTERMEASURE \N Write access to a static and a local variable - addresses are always valid

\ID SBSW_BSWM_FCTCALL_LOCALVAR
  \DESCRIPTION The function is called with an address to a local variable.
  \COUNTERMEASURE \N Write access to a local variable - address is always valid. Size is ensured through same type. No array.

\ID SBSW_BSWM_SETIPDUGROUPVECTOR
  \DESCRIPTION Access to generated table which contains function pointer
  \COUNTERMEASURE \M Size of BSWM_IPDUGROUPVECTORSIZE must be equal to the size of Com_IpduGroupVector in bytes.

\ID SBSW_BSWM_IPDUGROUPVECTORCALL
  \DESCRIPTION A Com function is called with an address of a Com_IpduGroupVector. Size of this vector is defined by Com itself
  \COUNTERMEASURE \N Write access to a local variable of same type - address is always valid

SBSW_JUSTIFICATION_END */

/* COV_JUSTIFICATION_BEGIN

\ID COV_BSWM_LOCAL
  \ACCEPT TX
  \REASON Ensures that BSWM_LOCAL is always be set.

\ID COV_BSWM_LOCAL_INLINE
  \ACCEPT TX
  \REASON Ensures that BSWM_LOCAL_INLINE is always be set.

\ID COV_BSWM_ECUM_COMPATIBILITY
  \ACCEPT XX
  \ACCEPT TX
  \REASON States are only available to be compatible with former AUTOSAR releases.

\ID COV_BSWM_NM_COMPATIBILITY
  \ACCEPT TX
  \REASON States are only available to be compatible with former AUTOSAR releases.

\ID COV_BSWM_ACTIONLISTBLOCKED
  \ACCEPT TF tf tx
  \REASON Action list is only blocked if configuration of rules leads to the call of the same action list.

\ID COV_BSWM_ACTIONLISTIDLE
  \ACCEPT TF tf tx
  \REASON Action list is only not idle if two rules are arbitrated which shall execute the same action list.

\ID COV_BSWM_ALLNETWORKPORTS
  \ACCEPT TX
  \REASON Configurations contains ports for all available networks. Therefore, loop is always left by break.

\ID COV_BSWM_MODEREQUESTPENDING
  \ACCEPT XF
  \REASON A mode request is only set to pending if the mode request requests itself during its arbitration.

COV_JUSTIFICATION_END */

/* Justification for module-specific MISRA deviations:

 MD_BswM_0277:
      Reason:     Conversion of integer constant expression with negative value to an unsigned type cannot be avoided
                  in BswM code due to macro definition by Com.
      Risk:       Unexpected value after conversion.
      Prevention: Covered by code review.

 MD_BswM_0310:
      Reason:     Only a valid address is needed, data is not accessed.
      Risk:       Access to invalid data.
      Prevention: Covered by code review and test.

 MD_BswM_0779:
      Reason:     Identifier does not differ from other identifiers within 31 significant characters.
      Risk:       There is no risk as such statements have no effect on the code.
      Prevention: Covered by code review.
 
 MD_BswM_3109:
      Reason:     Dummy statement to avoid compiler warnings.
      Risk:       Compiler reports an empty statement.
      Prevention: Compile check done during integration process.

 MD_BswM_3112:
      Reason:     Dummy statement to avoid compiler warnings.
      Risk:       There is no risk as such statements have no effect on the code.
      Prevention: Covered by code review.

 MD_BswM_3200:
      Reason:     The returned value of an arbitrary user callout is not used, because it can be any configured
                  string, and such return value can not be predicted during generation of the code. 
      Risk:       Testability might become too complex.
      Prevention: Covered by code review.

 MD_BswM_3201:
      Reason:     If the function is called with invalid parameters the statement is reachable.
      Risk:       Compiler warning.
      Prevention: Covered by code review.

 MD_BswM_3218:
      Reason:     Static variable is only to be used in one function.
      Risk:       No functional risk.
      Prevention: Covered by code review.

 MD_BswM_3325:
      Reason:     Configuration dependent - reachable/unreachable.
      Risk:       No functional risk.
      Prevention: Covered by code review.

 MD_BswM_3440:
      Reason:     Use of -- as prefix or postfix operators decreases the execution time.
                  An extra line of code is avoided.
      Risk:       No functional risk.
      Prevention: Covered by code review.

 MD_BswM_3355:
      Reason:     The result of this logical operation is not always true if the function is called with a wrong parameter.
                  In case of a valid parameter the for loop breaks with the first iteration, so the runtime condition
                  of the for loop is always true.
      Risk:       No risk, DET check important to satisfy AUTOSAR requirement.
      Prevention: Covered by code review.

 MD_BswM_3356:
      Reason:     The result of this logical operation is not always false if the function is called with a wrong parameter.
      Risk:       No risk, DET check important to satisfy AUTOSAR requirement.
      Prevention: Covered by code review.

 MD_BswM_3357:
      Reason:     The result of this loop operation is not always true if the function is called with a wrong parameter.
                  In case of a valid parameter the for loop breaks with the first iteration, so the runtime condition
                  of the for loop is always true.
      Risk:       No risk, DET check important to satisfy AUTOSAR requirement.
      Prevention: Covered by code review.

 MD_BswM_3358:
      Reason:     The result of this 'if' control expression is not always true if the function is called with a wrong parameter.
      Risk:       No risk, DET check important to satisfy AUTOSAR requirement.
      Prevention: Covered by code review.

 MD_BswM_3359:
      Reason:     The result of this control operation is not always false if the function is called with a wrong parameter.
      Risk:       No risk, DET check important to satisfy AUTOSAR requirement.
      Prevention: Covered by code review.

 MD_BswM_3451:
      Reason:     The declarations are generated and are always the same.
      Risk:       No functional risk.
      Prevention: Covered by code review.

 MD_BswM_3673:
      Reason:     Function prototype needs to be similar to specified AUTOSAR API of calling module.
      Risk:       No functional risk.
      Prevention: Covered by code review.

*/

/**********************************************************************************************************************
 *  END OF FILE: BswM.c
 *********************************************************************************************************************/
