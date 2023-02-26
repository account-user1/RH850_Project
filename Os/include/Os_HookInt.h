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
 *  \defgroup    Os_Hook Hook
 *  \brief       Hook function calling.
 *  \details
 *
 *  A Hook function is implemented by the user and invoked by the operating system in the case of certain incidents.
 *
 *  In MICROSAR OS hooks are encapsulated in a thread.
 *
 *  Hooks don't have a timing budget. They are executed within the current budget with disabled interrupts.
 *
 *  The following scenarios are exemplary shown for the ErrorHook.
 *
 *  ![Hook Call](Hook_Call.png)
 *
 *  ![Hook Caller Task Killed](Hook_TaskKilled.png)
 *
 *  \{
 *
 *  \file
 *  \brief       Inlined Hook routines and type definitions.
 *  \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HOOKINT_H)                                                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HOOKINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hook_Types.h"

/* Os kernel module dependencies */
# include "Os_ThreadInt.h"

/* Os Hal dependencies */
# include "Os_Hal_CompilerInt.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_HOOK)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/*! Type cast from Os_HookType to Os_ThreadType by use of base element addressing. */
#define OS_HOOK_CASTDYN_HOOK_2_THREAD(hook)               (&((hook).Thread))                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_HookStatusHookConfigType to Os_HookConfigType by use of base element addressing. */
#define OS_HOOK_CASTCONFIG_STATUSHOOK_2_HOOK(hook)        (&((hook).Hook))                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_HookCallbackConfigType to Os_HookConfigType by use of base element addressing. */
#define OS_HOOK_CASTCONFIG_CALLBACK_2_HOOK(hook)          (&((hook).Hook))                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_HookProtectionHookConfigType to Os_HookConfigType by use of base element addressing. */
#define OS_HOOK_CASTCONFIG_PROTECTIONHOOK_2_HOOK(hook)    (&((hook).Hook))                                              /* PRQA S 3453 */ /* MD_MSR_19.7 */



/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
/*! Specifies the hook callback return behavior if the caller thread is a task. */
typedef enum
{
  /*! Hook returns to caller tasks. */
  Os_HookTaskReturn_ToCallerTask,   /* Startup, ShutdownHook */
  /*! Hook returns into tasks with highest priority. */
  Os_HookTaskReturn_WithSchedule,   /* ErrorHook, ProtectionHook, Callback */
  /*! Hook switches to task with highest priority or to idle task. */
  Os_HookTaskReturn_BeginScheduling /* Os_CoreInitHook */
}Os_HookTaskReturnType;


/*! Function pointer data type for hook user functions with status parameter. */
typedef P2FUNC(void, OS_CODE, Os_HookStatusHookCbkType)(StatusType);

/*! Function pointer data type for startup hook user functions. */
typedef P2FUNC(void, OS_CODE, Os_HookVoidHookCbkType)(void);

/*! Function pointer data type for hook user functions with status parameter. */
typedef P2FUNC(ProtectionReturnType, OS_CODE, Os_HookProtectionHookCbkType)(StatusType);

/*! Function pointer data type for init hook functions with mode parameter. */
typedef P2FUNC(void, OS_CODE, Os_HookInitHookCbkType)(AppModeType);

/*! Defines the parameter types which may be passed to a hook.*/
typedef union
{                                                                                                                       /* PRQA S 0750 */ /* MD_Os_0750 */
  StatusType Status;
  AppModeType Mode;
}Os_HookParameterType;

/*! Defines the parameter types which may be returned from a hook.*/
typedef union
{                                                                                                                       /* PRQA S 0750 */ /* MD_Os_0750 */
  ProtectionReturnType ProtectionReaction;
}Os_HookReturnType;


/*! Dynamic management information of a hook.
 * \extends Os_ThreadType_Tag
 */
struct Os_HookType_Tag
{
  /*! Dynamic thread attributes.
   * This attribute must come first! */
  Os_ThreadType Thread;

  /*! A copy of the interrupt state of the caller. */
  Os_IntApiStateType IntApiStateCopy;

  /*! The parameter which is passed to the hook. */
  Os_HookParameterType Parameter;

  /*! The return value of a hook */
  Os_HookReturnType ReturnValue;

  /*! Contains a snapshot of the hook flags. */
  Os_HookFlagType HookTypeFlag;
};


/*! \brief    Configuration information of an abstract hook.
 *  \details
 *  The dynamic data pointer of a hook can be fetched with Os_HookGetDyn().
 *  \extends Os_ThreadConfigType_Tag
 */
struct Os_HookConfigType_Tag
{
  /*! Thread attributes.
   * This attribute must come first! */
  Os_ThreadConfigType Thread;

  /*! Specifies the type of a Hook. */
  Os_HookFlagType HookTypeFlag;

  /*! Specifies which hooks may be called within this hook. */
  Os_HookFlagType NestingMask;

  /*! Unique hook identifier. */
  Os_HookIdType Id;

  /*! Specifies how to return to task level */
  Os_HookTaskReturnType TaskReturn;
};


/*! Status callbacks. */
struct Os_HookStatusHookConfigType_Tag
{
  /*! The base class.
   *  This argument must come first. */
  Os_HookConfigType Hook;

  /*! The callback function which shall be executed. */
  Os_HookStatusHookCbkType Callback;
};


/*! Container for void callbacks. */
struct Os_HookCallbackConfigType_Tag
{
  /*! The base class.
   *  This argument must come first. */
  Os_HookConfigType Hook;

  /*! The callback function which shall be executed. */
  Os_HookVoidHookCbkType Callback;
};


/*! Container for protection callbacks. */
struct Os_HookProtectionHookConfigType_Tag
{
  /*! The base class.
   *  This argument must come first. */
  Os_HookConfigType Hook;

  /*! The callback function which shall be executed. */
  Os_HookProtectionHookCbkType Callback;
};

/*! Container for init callbacks. */
struct Os_HookInitHookConfigType_Tag
{
  /*! The base class.
   *  This argument must come first. */
  Os_HookConfigType Hook;

  /*! The callback function which shall be executed. */
  Os_HookInitHookCbkType Callback;
};


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  Os_HookIsErrorHookEnabled()
 **********************************************************************************************************************/
/*! \brief        Returns whether error hooks are enabled or not.
 *  \details      --no details--
 *
 *  \retval       !0    Error hooks are enabled.
 *  \retval       0     Error hooks are disabled.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_HookIsErrorHookEnabled,
( void ));


/***********************************************************************************************************************
 *  Os_HookGetThread()
 **********************************************************************************************************************/
/*! \brief          Returns the thread of the hook.
 *  \details        --no details--
 *
 *  \param[in]      Hook  Hook to query.
 *
 *  \return         The thread of the hook.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookGetThread,
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
));


/***********************************************************************************************************************
 *  Os_HookThread2Hook()
 **********************************************************************************************************************/
/*! \brief          Translate thread reference to hook.
 *  \details        The caller has to ensure, that the thread actually belongs to a hook.
 *
 *  \param[in]      Thread     Thread to translate.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookThread2Hook,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
));


/***********************************************************************************************************************
 *  Os_HookInfoInit()
 **********************************************************************************************************************/
/*! \brief        Initialize hooks state object.
 *  \details      This function is called in Init-Step3 and Init-Step4 in order to handle the situation that
 *                Init-Step3 is optional.
 *
 *  \param[out]   HookInfo     Hooks state.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookInfoInit
(
  P2VAR(Os_HookInfoType, AUTOMATIC, OS_VAR_NOINIT) HookInfo
);


/***********************************************************************************************************************
 *  Os_HookCallStatusHook()
 **********************************************************************************************************************/
/*! \brief        Calls given status hook in a separate thread.
 *  \details      If given pointer is NULL, this function performs no action.
 *
 *  \param[in]    Hook    Hook to call.
 *  \param[in]    Error   Status code to pass.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Concurrent access to given object is prevented by caller.
 *
 *  \trace        SPEC-64016
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookCallStatusHook
(
  P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST) Hook,
  StatusType Error
);


/***********************************************************************************************************************
 *  Os_HookStatusHookGetThread()
 **********************************************************************************************************************/
/*! \brief          Returns callbacks's thread.
 *  \details        --no details--
 *
 *  \param[in]      Hook  Hook to query.
 *
 *  \return         Callback hook's thread.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookStatusHookGetThread,
(
  P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST) Hook
));


/***********************************************************************************************************************
 *  Os_HookProtectionHookGetThread()
 **********************************************************************************************************************/
/*! \brief          Returns protection hook's thread.
 *  \details        --no details--
 *
 *  \param[in]      Hook  Hook to query.
 *
 *  \return         Protection hook's thread.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookProtectionHookGetThread,
(
  P2CONST(Os_HookProtectionHookConfigType, AUTOMATIC, OS_CONST) Hook
));


/***********************************************************************************************************************
 *  Os_HookCallProtectionHook()
 **********************************************************************************************************************/
/*! \brief        Calls given protection hook in a separate thread.
 *  \details      If given pointer is NULL, this function performs no action.
 *
 *  \param[in]    Hook        Hook to call.
 *  \param[in]    Fatalerror  Status code to pass.
 *
 *  \return       Protection reaction returned by the protection hook.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \trace        SPEC-63832
 *
 *  \pre          Concurrent access to given object is prevented by caller.
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(ProtectionReturnType, OS_CODE) Os_HookCallProtectionHook
(
  P2CONST(Os_HookProtectionHookConfigType, AUTOMATIC, OS_CONST) Hook,
  StatusType Fatalerror
);


/***********************************************************************************************************************
 *  Os_HookWrapperProtectionHook()
 **********************************************************************************************************************/
/*! \brief          Calls user shutdown hook function, passes status.
 *  \details        --no details--
 *
 *  \param[in]      Thread    Thread of Hook to be called.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Concurrent access is prevented by caller.
 *  \pre            Called via configuration object (call not allowed from source call).
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookWrapperProtectionHook
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
);


/***********************************************************************************************************************
 *  Os_HookWrapperStatusHook()
 **********************************************************************************************************************/
/*! \brief        Calls user hook function, passes status.
 *  \details      --no details--
 *
 *  \param[in]    Thread    Thread of Hook to be called.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Concurrent access is prevented by caller.
 *  \pre          Called via configuration object (call not allowed from source call).
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookWrapperStatusHook
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
);


/***********************************************************************************************************************
 *  Os_HookWrapperCallback()
 **********************************************************************************************************************/
/*! \brief        Calls callback function without a parameter.
 *  \details      --no details--
 *
 *  \param[in]    Thread    Thread of Hook to be called.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Concurrent access is prevented by caller.
 *  \pre          Called via configuration object (call not allowed from source call).
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookWrapperCallback
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
);


/***********************************************************************************************************************
 *  Os_HookCallOs_CoreInitHook()
 **********************************************************************************************************************/
/*! \brief        Calls given init hook in a separate thread.
 *  \details      If given pointer is NULL, this function calls the panic hook.
 *
 *  \param[in]    Hook        Hook to call.
 *  \param[in]    Mode        application mode to pass.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          Concurrent access to given object is prevented by caller.
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookCallOs_CoreInitHook
(
  P2CONST(Os_HookInitHookConfigType, AUTOMATIC, OS_CONST) Hook,
  AppModeType Mode
);


/***********************************************************************************************************************
 *  Os_HookWrapperOs_CoreInitHook()
 **********************************************************************************************************************/
/*! \brief        Calls init hook function, passes application mode.
 *  \details      --no details--
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookWrapperOs_CoreInitHook
(
  void
);


/***********************************************************************************************************************
 *  Os_HookInit()
 **********************************************************************************************************************/
/*! \brief        Initialize the given hook.
 *  \details      --no details--
 *
 *  \param[in,out]    Hook     Hook to initialize.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookInit
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
);


/***********************************************************************************************************************
 *  Os_HookCallCallback()
 **********************************************************************************************************************/
/*! \brief        Calls given callback in a separate thread.
 *  \details      If the given callback is not assigned to the local core, a cross core request is triggered.
 *
 *  \param[in]    Hook     Hook to call.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_HookCallCallback
(
  P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST) Hook
);


/***********************************************************************************************************************
 *  Os_HookCallCallbackLocal()
 **********************************************************************************************************************/
/*! \brief        Calls given callback in a separate thread.
 *  \details      --no details--
 *
 *  \param[in]    Hook     Hook to call.
 *
 *  \retval       OS_STATUS_OK                    If no error occurs.
 *  \retval       OS_STATUS_NOTACCESSIBLE_1       If the owner application of the given hook is not accessible.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Concurrent access to given object is prevented by caller.
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Callback is assigned to local core.
 *
 *  \trace        -
 **********************************************************************************************************************/
FUNC(Os_StatusType, OS_CODE) Os_HookCallCallbackLocal
(
  P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST) Hook
);


/***********************************************************************************************************************
 *  Os_HookCallbackGetThread()
 **********************************************************************************************************************/
/*! \brief          Returns callbacks's thread.
 *  \details        --no details--
 *
 *  \param[in]      Hook  Hook to query.
 *
 *  \return         Callback hook's thread.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookCallbackGetThread,
(
  P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST) Hook
));


/***********************************************************************************************************************
 *  Os_HookKill()
 **********************************************************************************************************************/
/*! \brief          Kill the given hook.
 *  \details        The given hook is killed and the previous thread, where the hook has been triggered is resumed.
 *
 *  \param[in,out]  Hook    Hook to kill.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookKill
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
);


/***********************************************************************************************************************
 *  Os_HookSuicide()
 **********************************************************************************************************************/
/*! \brief          Self termination of current hook.
 *  \details        Execute the hook return path.
 *
 *  \context        STARTHOOK|ERRHOOK|SHUTHOOK
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Current thread is a hook.
 *  \pre            Os_HookKill() has already been called.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE, Os_HookSuicide, (void));


/***********************************************************************************************************************
 *  Os_HookReturn()
 **********************************************************************************************************************/
/*! \brief          Resume previous thread where the hook was called.
 *  \details        --no details--
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            The current thread is a hook thread.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(void, OS_CODE, OS_NORETURN, Os_HookReturn, (void));


/***********************************************************************************************************************
 *  Os_HookCheckId()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given ID is valid (Not OS_CHECK_FAILED) or not (OS_CHECK_FAILED).
 *  \details        In case that extended checks are disabled, the default result of \ref Os_ErrExtendedCheck()
 *                  is returned.
 *
 *  \param[in]      Id        The ID to check.
 *
 *  \retval         Not OS_CHECK_FAILED   If the given ID is valid.
 *  \retval         OS_CHECK_FAILED       If the given ID is not valid.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_HookCheckId,
(
  Os_HookIdType Id
));


/***********************************************************************************************************************
 *  Os_HookId2Hook()
 **********************************************************************************************************************/
/*! \brief          Returns the hook corresponding to the given ID.
 *  \details        --no details--
 *
 *  \param[in]     Id     The hook Id to convert.
 *
 *  \return         Hook with the given Id.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given identifier is in a valid range.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookId2Hook,
(
  Os_HookIdType Id
));


/***********************************************************************************************************************
 *  Os_Hook2CallbackHook()
 **********************************************************************************************************************/
/*! \brief          Returns the hook as a callback.
 *  \details        --no details--
 *
 *  \param[in]      Hook     The hook to convert.
 *
 *  \return         Callback.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given hook is a callback.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST), OS_CODE,         /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_Hook2CallbackHook,
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
));


/***********************************************************************************************************************
 *  Os_HookCallPanicHook()
 **********************************************************************************************************************/
/*! \brief        Calls Panic Hook, if configured.
 *  \details      --no details--
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_HookCallPanicHook(void);


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */



#if !defined(OS_VCAST_INSTRUMENTATION_OS_HOOK)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_HOOKINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_HookInt.h
 **********************************************************************************************************************/
