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
 * \defgroup    Os_Interrupt Interrupt
 * \brief       OS services related to the current interrupt state.
 * \details
 * MICROSAR OS provides the AUTOSAR OS services for disabling/enabling and suspending/resuming interrupts.
 *
 * In addition it provides a performance optimized extension to disable/enable interrupts.
 * These APIs do not perform any checks and are not allowed to be called nested.
 * Therefore the user is responsible for correct calling of these APIs.
 *
 * \{
 *
 * \file
 * \brief       Internal interface of the interrupt module.
 * \details     --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined (OS_INTERRUPTINT_H)
# define OS_INTERRUPTINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Interrupt_Types.h"

/* Os kernel module dependencies */
# include "Os_CommonInt.h"
# include "Os_TimingProtection_Types.h"
# include "Os_ErrorInt.h"

/* Os HAL dependencies */
# include "Os_Hal_CompilerInt.h"
# include "Os_Hal_InterruptInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_INTERRUPT)
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
/*! Tells whether the user is inside of an interrupt API sequence. */
typedef struct
{
  Os_WordType InDisableAll : 1; /*!< Inside a DisableAllInterrupts() API sequence. */
  Os_WordType InSuspendAll : 1; /*!< Inside a SuspendAllInterrupts() API sequence. */
  Os_WordType InSuspendOs : 1;  /*!< Inside a SuspendOSInterrupts() API sequence. */
} Os_CriticalSectionType;



/*! Type to count nested calls of interrupt APIs. */
typedef uint16_least Os_IntApiCntType;


/*! Management information for the interrupt API. */
struct Os_IntApiStateType_Tag
{
  /*! Holds the previous interrupt state for DisableAllInterrupts() and SuspendAllInterrupts(). */
  Os_Hal_IntCat1StateType SuspendAllPrevState;

  /*! Holds the previous interrupt level for SuspendOSInterrupts(). */
  Os_Hal_IntCat2StateType SuspendOsPrevState;

  /*! Nesting counter for SuspendAllInterrupts()/ResumeAllInterrupts(). */
  Os_IntApiCntType SuspendAllCounter;

  /*! Nesting counter for SuspendOSInterrupts()/ResumeOSInterrupts(). */
  Os_IntApiCntType SuspendOsCounter;

  /*! Tells whether we are inside a critical section protected by the interrupt API. */
  Os_CriticalSectionType CriticalSections;

  /*! \brief    Snapshot of nesting counter for SuspendAllInterrupts().
   *  \details  This is needed to detect nesting not in pairs. */
  Os_IntApiCntType SuspendAllSnapshot;

  /*! \brief    Snapshot of nesting counter for SuspendOSInterrupts().
   *  \details  This is needed to detect nesting not in pairs. */
  Os_IntApiCntType SuspendOsSnapshot;
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
 *  Os_InterruptInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the given interrupt API state.
 *  \details        This function is called in Init-Step2 for the first time but also when a re-initialization of the
 *                  interrupt API state is needed.
 *
 *  \param[out]     IntApiState   State to initialize.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_InterruptInit
(
  P2VAR(Os_IntApiStateType, TYPEDEF, OS_VAR_NOINIT) IntApiState
);


/***********************************************************************************************************************
 *  Os_IntSuspend()
 **********************************************************************************************************************/
/*! \brief        Suspend all interrupts except NMIs.
 *  \details      Simply call Os_Hal_IntSuspend and the respective timing hook for internal interrupt locks.
 *                This function shall be called from anywhere in the kernel except the interrupt API functions.
 *
 *  \param[out]   State   Previous interrupt state information which allows resuming in Os_IntResume().
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntSuspend,
(
  P2VAR(Os_IntStateType, AUTOMATIC, AUTOMATIC) State
));


/***********************************************************************************************************************
 *  Os_IntResume()
 **********************************************************************************************************************/
/*! \brief        Resume state returned by Os_IntSuspend().
 *  \details      Simply call the respective timing hook for internal interrupt locks and Os_Hal_IntResume.
 *                This function shall be called from anywhere in the kernel except the interrupt API functions.
 *
 *  \param[in]    State   Desired interrupt state (as provided by Os_IntSuspend).
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *  \pre          Os_IntSuspend() has been called and prepared State parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntResume,
(
  P2CONST(Os_IntStateType, AUTOMATIC, AUTOMATIC) State
));


/***********************************************************************************************************************
 *  Os_IntDisable()
 **********************************************************************************************************************/
/*! \brief        Disable all interrupts except NMIs.
 *  \details      Simply call Os_Hal_IntDisable and the respective timing hook for internal interrupt disabling.
 *                This function shall be called from anywhere in the kernel except the interrupt API functions.
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntDisable,
(
  void
));


/***********************************************************************************************************************
 *  Os_IntSuspendLevel()
 **********************************************************************************************************************/
/*! \brief          Set current interrupt priority level to given level and return previous one.
 *  \details        Simply call Os_Hal_IntSuspendLevel.
 *  \param[in,out]  Level   In: Desired interrupt priority level.
 *                          Out: Previous interrupt priority level which allows resuming Os_IntResumeLevel().
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntSuspendLevel,
(
  P2VAR(Os_IntLevelType, AUTOMATIC, AUTOMATIC) Level
));


/***********************************************************************************************************************
 *  Os_IntResumeLevel()
 **********************************************************************************************************************/
/*! \brief          Resume level returned by Os_IntSuspendLevel().
 *  \details        Simply call Os_Hal_IntResumeLevel.
 *
 *  \param[in]      Level   Level returned by Os_IntSuspendLevel().
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Os_IntSuspendLevel() has been called and prepared Level parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntResumeLevel,
(
  P2CONST(Os_IntLevelType, AUTOMATIC, AUTOMATIC) Level
));


/***********************************************************************************************************************
 *  Os_IntGetLevel()
 **********************************************************************************************************************/
/*! \brief          Returns the current interrupt priority level.
 *  \details        Simply abstract from Os_Hal_IntGetLevel.
 *
 *  \param[out]     Level         Current interrupt priority level.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_IntGetLevel,
(
  P2VAR(Os_IntLevelType, AUTOMATIC, AUTOMATIC) Level
));


/***********************************************************************************************************************
 *  Os_IntLevelIsGt()
 **********************************************************************************************************************/
/*! \brief          Returns whether given interrupt priority level LevelX is logically greater than LevelY.
 *  \details        Simply abstract from Os_Hal_IntLevelIsGt.
 *
 *  \param[in]      LevelX   Left interrupt priority level.
 *  \param[in]      LevelY   Right interrupt priority level.
 *
 *  \retval         !0  LevelX is logically greater than LevelY.
 *  \retval         0   LevelX is logically less than or equal to LevelY.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,
OS_ALWAYS_INLINE, Os_IntLevelIsGt,
(
  P2CONST(Os_IntLevelType, AUTOMATIC, AUTOMATIC) LevelX,
  P2CONST(Os_IntLevelType, AUTOMATIC, AUTOMATIC) LevelY
));


/***********************************************************************************************************************
 *  Os_InterruptCheckEnabled()
 **********************************************************************************************************************/
/*! \brief        Checks the given interrupt API state for open interrupt API calls.
 *  \details      If service protection is disabled, the default value of Os_ErrServiceProtectionCheck is returned.
 *
 *  \param[in]    InterruptState   State to check.
 *
 *  \retval       OS_CHECK_FAILED       If there are open interrupts API calls and Service Protection is enabled.
 *  \retval       Not OS_CHECK_FAILED   If there are no open interrupt API calls or Service Protection is disabled.
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 *
 *  \trace        SPEC-63796
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_InterruptCheckEnabled,
(
  P2CONST(Os_IntApiStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
));


/***********************************************************************************************************************
 *  Os_InterruptCleanup()
 **********************************************************************************************************************/
/*! \brief          Cleanup the given interrupt API state.
 *  \details        Initialize interrupt API states.
 *                  Error reporting of open interrupt API calls shall be done by the caller.
 *                  Because error reporting depends on the situation: In case of killing we don't need further error
 *                  reporting. Interrupt state/level fix should be done by the caller (dependent whether we cleanup
 *                  an ISR/Task or Hook).
 *
 *  \param[in,out]  InterruptState   Interrupt API state to inspect.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *
 *  \trace          SPEC-63796, SPEC-63730
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_InterruptCleanup,
(
  P2VAR(Os_IntApiStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
));


/***********************************************************************************************************************
 *  Os_InterruptCopy()
 **********************************************************************************************************************/
/*! \brief        Copies the interrupt state from Source to Destination.
 *  \details      --no details--
 *
 *  \param[in,out]    Source        The interrupt state to be copy.
 *  \param[in,out]    Destination   The object to copy to.
 *
 *  \context      ANY
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_InterruptCopy,
(
  P2CONST(Os_IntApiStateType, AUTOMATIC, OS_VAR_NOINIT) Source,
  P2VAR(Os_IntApiStateType, AUTOMATIC, OS_VAR_NOINIT) Destination
));


/***********************************************************************************************************************
 *  Os_InterruptIsCriticalSectionTracingEnabled()
 **********************************************************************************************************************/
/*! \brief        Returns whether Service Tracing is enabled (!0) or not (0).
 *  \details      --no details--
 *
 *  \retval       !0    Enabled.
 *  \retval       0     Disabled.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_InterruptIsCriticalSectionTracingEnabled, (void));


/***********************************************************************************************************************
 *  Os_Api_DisableAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service DisableAllInterrupts()..
 *  \details      Disables category 1 and category 2 ISRs.
 *                If timing protection is configured, the timing protection interrupt is not affected.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Not already in DisableAllInterrupts() sequence.
 *
 *  \trace        CREQ-111, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64187, SPEC-64188, SPEC-63877, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_DisableAllInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_EnableAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service EnableAllInterrupts().
 *  \details      Restores the state saved by DisableAllInterrupts().
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          In DisableAllInterrupts() sequence.
 *
 *  \trace        CREQ-43, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64189, SPEC-64192, SPEC-63697, SPEC-64188, SPEC-63951, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_EnableAllInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_SuspendAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service SuspendAllInterrupts().
 *  \details      Saves the recognition status of all interrupts and disables all interrupts
 *                for which the hardware supports disabling. This API can be called nested.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Not in DisableAllInterrupts() sequence.
 *
 *  \trace        CREQ-154, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64197, SPEC-64195, SPEC-64196, SPEC-63739, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_SuspendAllInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_ResumeAllInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service ResumeAllInterrupts().
 *  \details      Restores the recognition status of all interrupts saved by the SuspendAllInterrupts() service.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          In SuspendAllInterrupts() sequence.
 *  \pre          Correct nesting sequence of suspend interrupt API.
 *
 *  \trace        CREQ-98, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64193, SPEC-64191, SPEC-63697, SPEC-63780, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_ResumeAllInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_SuspendOSInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service SuspendOSInterrupts().
 *  \details      Saves the recognition status of interrupts of category 2 and disables the recognition of
 *                these interrupts. This API can be called nested.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          Not in DisableAllInterrupts() sequence.
 *
 *  \trace        CREQ-151, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64199, SPEC-64194, SPEC-64198, SPEC-63912, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_SuspendOSInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_ResumeOSInterrupts()
 **********************************************************************************************************************/
/*! \brief        OS service ResumeOSInterrupts().
 *  \details      Restores the recognition status of interrupts saved by the SuspendOSInterrupts() service.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          In SuspendOSInterrupts() sequence.
 *  \pre          Correct nesting sequence of suspend interrupt API.
 *
 *  \trace        CREQ-82, CREQ-40, CREQ-261, CREQ-847, CREQ-31, CREQ-103
 *  \trace        SPEC-64200, SPEC-64190, SPEC-63697, SPEC-63817, SPEC-63867
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_ResumeOSInterrupts
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_DisableGlobal()
 **********************************************************************************************************************/
/*! \brief        OS service DisableGlobal().
 *  \details      Disables the recognition status of category 2 interrupts. This service does not perform nesting
 *                nor service protection checks.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-1256, CREQ-1257, CREQ-108741, CREQ-847, CREQ-31, CREQ-103
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_DisableGlobal
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_EnableGlobal()
 **********************************************************************************************************************/
/*! \brief        OS service EnableGlobal().
 *  \details      Enables the recognition status of category 2 interrupts. This service does not perform nesting
 *                nor service protection checks.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-1258, CREQ-1259, CREQ-108742, CREQ-847, CREQ-31, CREQ-103
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_EnableGlobal
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_DisableLevel()
 **********************************************************************************************************************/
/*! \brief        OS service DisableLevel().
 *  \details      Disables the recognition status of category 2 interrupts. This service does not perform nesting
 *                nor service protection checks.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-108744, CREQ-108743, CREQ-108745, CREQ-847, CREQ-31, CREQ-103
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_DisableLevel
(
  void
);


/***********************************************************************************************************************
 *  Os_Api_EnableLevel()
 **********************************************************************************************************************/
/*! \brief        OS service EnableLevel().
 *  \details      Enables the recognition status of category 2 interrupts. This service does not perform nesting
 *                nor service protection checks.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 *
 *  \trace        CREQ-108747, CREQ-108748, CREQ-108746, CREQ-847, CREQ-31, CREQ-103
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_EnableLevel
(
  void
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_INTERRUPT)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_INTERRUPTINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_InterruptInt.h
 **********************************************************************************************************************/

