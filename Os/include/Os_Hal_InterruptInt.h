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
 *  \ingroup    Os_Hal
 *  \defgroup   Os_Hal_Interrupt  HAL Interrupt
 *  \brief      Primitives for interrupt state manipulation
 *  \details
 *  This component provides the following interrupt primitives:
 *  - Enter/leave critical sections
 *  - Disable interrupt sources
 *
 *  ### Interrupt Priority Levels ###
 *  The kernel distinguishes between the following logical groups of interrupt priority levels:
 *
 *  Interrupt Priority Level    | Description
 *  :-------------------------- | :-------------------------------------------------------------------------------------
 *  Timing Protection Interrupt | The timing protection interrupt is handled on this level.
 *  Category 1 ISRs             | AUTOSAR category 1 ISRs are handled on this level.
 *  Category 2 ISRs             | AUTOSAR category 2 ISRs are handled on this level.
 *
 *  The kernel needs some primitive interrupt functions, to enter/leave critical sections on these interrupt priority
 *  levels.  Os_Hal_IntSuspend() and Os_Hal_IntResume() work either up to timing protection level or up to category 1
 *  level, depending whether timing protection is level or NMI based.
 *
 *  ![Interrupt Priorities and Relevant HAL Functions](InterruptPriorities.png)
 *
 *
 *  ### Implementation Hint ###
 *  During implementation of this module you may have to work with the following hardware properties:
 *
 *  - Core interrupt flag
 *  - Level register in interrupt controller
 *  - Timing protection interrupt flag
 *  \{
 *
 *  \file       Os_Hal_InterruptInt.h
 *  \brief
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_INTERRUPTINT_H)                                                                                    /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_INTERRUPTINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os kernel module dependencies */
# include "Os_Hal_Interrupt_Types.h"

/* Os module declarations */
# include "Os_CommonInt.h"

/* Os HAL dependencies */
# include "Os_Hal_CompilerInt.h"
# include "Os_Hal_CoreInt.h"


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

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_InitEIC()
 **********************************************************************************************************************/
/*! \brief          Initialize the error interrupt control register.
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig     ParamDescription.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_InitEIC,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
));

/***********************************************************************************************************************
 *  Os_Hal_InitIBD()
 **********************************************************************************************************************/
 /*! \brief          Initialize the bind register.
  *  \details        --no details--
  *
  *  \param[in]      IsrConfig     ParamDescription.
  *
  *  \context        OS_INTERNAL
  *
  *  \reentrant      TRUE
  *  \synchronous    TRUE
  *
  *  \pre            -
  **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_InitIBD,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntSetRequest()
 **********************************************************************************************************************/
/*! \brief          Set interrupt request pending flag RF for the given interrupt source.
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig Interrupt configuration of the ISR which shall be triggered.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSetRequest,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetRequest()
 **********************************************************************************************************************/
/*! \brief          Get interrupt request pending flag RF for the given interrupt source.
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig Interrupt configuration of the ISR which shall be triggered.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE uint8, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetRequest,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntDisable()
 **********************************************************************************************************************/
/*! \brief          Disable all interrupts except NMIs.
 *  \details        Disable core local interrupt delivery.
 *                  The kernel uses this function to enter core local critical sections inside the OS,
 *                  where the previous state won't be restored (e.g. OS initialization, shutdown).
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_IntDisable, (void));


/***********************************************************************************************************************
 *  Os_Hal_IntEnable()
 **********************************************************************************************************************/
/*! \brief          Enable all interrupts except ISRs.
 *  \details        Enable core local interrupt delivery.
 *                  The kernel uses this function to enable handling of category 1 ISRs.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_IntEnable, (void));


/***********************************************************************************************************************
 *  Os_Hal_IntSuspend()
 **********************************************************************************************************************/
/*! \brief          Suspend all interrupts except NMIs.
 *  \details        Disable core local interrupt delivery and return previous interrupt state.
 *                  The kernel uses this function to enter core local critical sections inside the OS.
 *  \param[out]     State   Previous interrupt state information which allows resuming in Os_Hal_IntResume().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSuspend,
(
  P2VAR(Os_Hal_IntStateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntResume()
 **********************************************************************************************************************/
/*! \brief          Resume state returned by Os_Hal_IntSuspend().
 *  \details        Set core local interrupt delivery to a given state.
 *                  The kernel uses this function to leave core local critical sections inside the OS.
 *  \param[in]      State    Desired interrupt state
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 *  \pre            Os_Hal_IntSuspend() has been called and prepared State parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntResume,
(
  P2CONST(Os_Hal_IntStateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntSuspendLevel()
 **********************************************************************************************************************/
/*! \brief          Increase current interrupt priority level to given level and return previous one.
 *  \details        The kernel uses this function to implement AUTOSAR OS API GetResource() in case of interrupt
 *                  resources.
 *  \param[in,out]  Level   In: Desired interrupt priority level.
 *                          Out: Previous interrupt priority level which allows resuming Os_Hal_IntResumeLevel().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSuspendLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntResumeLevel()
 **********************************************************************************************************************/
/*! \brief          Resume level returned by Os_Hal_IntSuspendLevel().
 *  \details        The kernel uses this function to implement AUTOSAR OS API ReleaseResource() in case of interrupt
 *                  resources.
 *  \param[in]      Level   Level returned by Os_Hal_IntSuspendLevel().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 *  \pre            Os_Hal_IntSuspendLevel() has been called and prepared Level parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntResumeLevel,
(
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntDisableCat2()
 **********************************************************************************************************************/
/*! \brief          Disable all category 2 ISRs.
 *  \details        Disable core local interrupt delivery of category 2 ISRs.
 *                  The kernel uses this function to enter critical sections, where category 1 ISRs are allowed.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_IntDisableCat2, (void));


/***********************************************************************************************************************
 *  Os_Hal_IntEnableCat2()
 **********************************************************************************************************************/
/*! \brief          Enable category 2 ISRs but don't touch global interrupt flag.
 *  \details        Enable core local interrupt delivery of category 2 ISRs.
 *                  The kernel uses this function to leave critical sections, where category 1 ISRs are allowed.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_IntEnableCat2, (void));


/***********************************************************************************************************************
 *  Os_Hal_IntSuspendCat2()
 **********************************************************************************************************************/
/*! \brief          Suspend all category 2 ISRs.
 *  \details        Disable core local interrupt delivery of category 2 ISRs and return previous state.
 *                  The kernel uses this function to implement AUTOSAR OS API SuspendOSInterrupts().
 *  \param[out]     State   Previous interrupt state information which allows resuming in Os_Hal_IntResumeCat2().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSuspendCat2,
(
  P2VAR(Os_Hal_IntCat2StateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntResumeCat2()
 **********************************************************************************************************************/
/*! \brief          Resume state returned by Os_Hal_IntSuspendCat2().
 *  \details        Resume interrupt delivery of category 2 ISRs.
 *                  The kernel uses this function to implement AUTOSAR OS API ResumeOSInterrupts().
 *  \param[in]      State    State returned by Os_Hal_IntSuspendCat2(),
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 *  \pre            Os_Hal_IntSuspendCat2() has been called and prepared State parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntResumeCat2,
(
  P2CONST(Os_Hal_IntCat2StateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntSuspendCat1()
 **********************************************************************************************************************/
/*! \brief          Suspend all category 1+2 ISRs.
 *  \details        Disable core local interrupt delivery of category 1+2 ISRs and return previous state.
 *                  The kernel uses this function to implement AUTOSAR OS API DisableAllInterrupts() and
 *                  SuspendAllInterrupts().
 *  \param[in,out]  State   Previous interrupt state information which allows resuming in Os_Hal_IntResumeCat1().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSuspendCat1,
(
  P2VAR(Os_Hal_IntCat1StateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntResumeCat1()
 **********************************************************************************************************************/
/*! \brief          Resume state returned by Os_Hal_IntSuspendCat1().
 *  \details        Resume interrupt delivery of category 1+2 ISRs.
 *                  The kernel uses this function to implement AUTOSAR OS API EnableAllInterrupts() and
 *                  ResumeAllInterrupts().
 *  \param[in]      State    State to resume returned by Os_Hal_IntSuspendCat1().
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 *  \pre            Os_Hal_IntSuspendCat1() has been called and prepared Level parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntResumeCat1,
(
  P2CONST(Os_Hal_IntCat1StateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntSuspendTp()
 **********************************************************************************************************************/
/*! \brief          Suspend all interrupts including the timing protection interrupt.
 *  \details        Disable core local interrupt delivery (inclusive timing protection interrupt) and return previous
 *                  state. The kernel uses this function to enter core local critical sections inside the OS, which
 *                  manipulates timing protection data. If timing protection is disabled, this function does not change
 *                  the current interrupt level.
 *
 *  \param[in,out]  State   Previous interrupt state information which allows resuming in Os_Hal_IntResumeTp().
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode, if timing protection is enabled.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntSuspendTp,
(
  P2VAR(Os_Hal_IntTpStateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntResumeTp()
 **********************************************************************************************************************/
/*! \brief          Resume state returned by Os_Hal_IntSuspendTp().
 *  \details        Set core local interrupt delivery (inclusive timing protection interrupt) to a given state.
 *                  The kernel uses this function to leave core local critical sections inside the OS, which has been
 *                  manipulated timing protection data. If timing protection is disabled, this function does not change
 *                  the current interrupt level.
 *
 *  \param[in]      State    State to resume returned by Os_Hal_IntSuspendTp().
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode, if timing protection is enabled.
 *  \pre            Os_Hal_IntSuspendTp() has been called and prepared State parameter.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntResumeTp,
(
  P2CONST(Os_Hal_IntTpStateType, AUTOMATIC, OS_APPL_DATA) State
));


/***********************************************************************************************************************
 *  Os_Hal_IntDisableSource()
 **********************************************************************************************************************/
/*! \brief          Disable interrupt delivery for the given interrupt source.
 *  \details        -
 *
 *  \param[in]      IsrConfig   Interrupt configuration to the ISR which shall be disabled.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntDisableSource,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntEnableSource()
 **********************************************************************************************************************/
/*! \brief          Enable interrupt delivery for the given interrupt source.
 *  \details        -
 *
 *  \param[in]      IsrConfig   Interrupt configuration to the ISR which shall be enabled.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntEnableSource,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntIsClearPendingSupported()
 **********************************************************************************************************************/
/*! \brief        Returns whether the hardware supports clearing of a pending interrupt.
 *  \details      --no details--
 *
 *  \return       !0    Pending interrupts can be cleared.
 *  \return       0     Pending interrupts cannot be cleared.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntIsClearPendingSupported, (void));


/***********************************************************************************************************************
 *  Os_Hal_IntClearPending()
 **********************************************************************************************************************/
/*! \brief          Clears the pending flag of the given interrupt source.
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig   Interrupt configuration to the ISR which shall be cleared.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntClearPending,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntIsInterruptSourceEnabled()
 **********************************************************************************************************************/
/*! \brief          Checks if the interrupt source is enabled
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig   Interrupt configuration to the ISR which shall be checked.
 *  \return         0           not enabled
 *  \return         !0          enabled
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntIsInterruptSourceEnabled,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntIsInterruptPending()
 **********************************************************************************************************************/
/*! \brief          Checks if the specified ISR has a pending request
 *  \details        --no details--
 *
 *  \param[in]      IsrConfig   Interrupt configuration to the ISR which pending statust is checked
 *  \return         0           no pending request.
 *  \return         !0          pending request.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            -
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntIsInterruptPending,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntEndOfInterrupt()
 **********************************************************************************************************************/
/*! \brief          Signal hardware that interrupt processing has been completed.
 *  \details        -
 *
 *  \param[in]      IsrConfig  Interrupt configuration to the ISR which shall signal an end of interrupt.
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntEndOfInterrupt,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
));


/***********************************************************************************************************************
 *  Os_Hal_IntIsrLevelIsLe()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given ISR configuration has an interrupt priority level, which is lower than
 *                  or equal to the given interrupt priority level.
 *  \details        -
 *
 *  \param[in]      IsrConfig   The ISR configuration which shall be checked.
 *  \param[in]      Level       The interrupt priority level to compare with.
 *
 *  \return         !0  The configured interrupt priority level of Isr is logically lower than or equal to Level.
 *  \return         0   The configured interrupt priority level of Isr is logically greater than Level.
 *
 *  \context        ANY
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *  \pre            Supervisor mode
 *  \note           Candidate for compiler attributes OS_NOSIDEEFFECTS.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntIsrLevelIsLe,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig,
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntLevelIsGt()
 **********************************************************************************************************************/
/*! \brief          Returns whether given interrupt priority level LevelX is logically greater than LevelY.
 *  \details        -
 *
 *
 *  \param[in]      LevelX   Left interrupt priority level.
 *  \param[in]      LevelY   Right interrupt priority level.
 *
 *  \return         !0  LevelX is logically greater than LevelY.
 *  \return         0   LevelX is logically less than or equal to LevelY.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            -
 *  \note           Candidate for compiler attributes OS_NOSIDEEFFECTS.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntLevelIsGt,
(
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) LevelX,
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) LevelY
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetLevel()
 **********************************************************************************************************************/
/*! \brief          Returns the current interrupt priority level.
 *  \details        -
 *
 *
 *  \param[out]     Level   Current interrupt priority level.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetCat2LockLevel()
 **********************************************************************************************************************/
/*! \brief          Returns the interrupt priority level which is used to lock all category 2 ISRs.
 *  \details        -
 *
 *  \param[out]     Level   Category 2 Lock Level.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetCat2LockLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntCat2LockLevel2Cat2StateType()
 **********************************************************************************************************************/
/*! \brief          Performs a type cast from Os_Hal_IntLevelType to Os_Hal_IntCat2StateType
 *  \details        -
 *
 *  \param[in]      Level   Lock Level to be type casted.
 *
 *  \return         The same lock level but in the correct representation in Os_Hal_IntCat2StateType.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_Hal_IntCat2StateType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntCat2LockLevel2Cat2StateType,
(
  Os_Hal_IntLevelType Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetCat1LockType()
 **********************************************************************************************************************/
/*! \brief          Returns the type of interrupt locking in the functions SuspendAllInterrupts and
 *                  DisableAllInterrupts.
 *  \details        This may bee platform or configuration dependent.
 *
 *  \retval         OS_HAL_INT_DISABLE_ALL_BY_FLAG  Interrupts are disabled by a global flag.
 *  \retval         OS_HAL_INT_DISABLE_ALL_BY_LEVEL Interrupts are disabled by means of an interrupt level change.
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_Hal_IntDisableAllType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetCat1LockType,
(
    void
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetCat1LockLevel()
 **********************************************************************************************************************/
/*! \brief          Returns the interrupt priority level which is used to lock all category 1 ISRs.
 *  \details        This function is called only if Os_Hal_IntGetCat1LockType() returns
 *                  OS_HAL_INT_DISABLE_ALL_BY_LEVEL.
 *
 *  \param[out]     Level   Category 1 Lock Level.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 *                  Function must only be called if Os_Hal_IntGetCat1LockType() returns
 *                    OS_HAL_INT_DISABLE_ALL_BY_LEVEL.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetCat1LockLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntCat1LockLevel2Cat1StateType()
 **********************************************************************************************************************/
/*! \brief          Performs a type cast from Os_Hal_IntLevelType to Os_Hal_IntCat1StateType
 *  \details        -
 *
 *  \param[in]      Level   Lock Level to be type casted.
 *
 *  \return         The same lock level but in the correct representation in Os_Hal_IntCat1StateType.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 *                  Function must only be called if Os_Hal_IntGetCat1LockType() returns
 *                    OS_HAL_INT_DISABLE_ALL_BY_LEVEL.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_Hal_IntCat1StateType, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntCat1LockLevel2Cat1StateType,
(
  Os_Hal_IntLevelType Level
));


/***********************************************************************************************************************
 *  Os_Hal_IntTrapRestore()
 **********************************************************************************************************************/
/*! \brief          Restore interrupt state which has been saved during trap.
 *  \details        This function shall restore the interrupt state which was active before the trap handler has been
 *                  triggered. The interrupt state given as parameter has been stored in \ref Os_Exc_SysCall().
 *
 *  \param[in]      InterruptState   Previous interrupt state to restore.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode.
 *  \pre            Called after trap.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntTrapRestore,
(
  P2CONST(Os_Hal_IntTrapStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
));


/***********************************************************************************************************************
 *  Os_Hal_IntTrapUpdate()
 **********************************************************************************************************************/
/*! \brief          Copies the current interrupt state to the interrupt state which has been saved during trap.
 *  \details        This function is called by the trap handler. It allows modification of the interrupt state of the
 *                  trap caller. The interrupt state given as parameter has been stored in \ref Os_Exc_SysCall().
 *
 *  \param[out]     InterruptState   User space interrupt information.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode.
 *  \pre            Called after trap.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE,
OS_ALWAYS_INLINE, Os_Hal_IntTrapUpdate,
(
  P2VAR(Os_Hal_IntTrapStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
));


/***********************************************************************************************************************
 *  Os_Hal_IntGetInterruptState()
 **********************************************************************************************************************/
/*! \brief          Returns the current interrupt state.
 *  \details        This function is used to transfer the current interrupt state between different context
 *                  (e.g. non-trusted functions).
 *
 *  \param[out]     InterruptState   Location where to store the current interrupt state.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntGetInterruptState,
(
  P2VAR(Os_Hal_InterruptStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
));


/***********************************************************************************************************************
 *  Os_Hal_IntInterruptSourceInit()
 **********************************************************************************************************************/
/*! \brief          Initialize given interrupt source so interrupt handling is possible.
 *  \details
 *  Initialization includes:
 *    - Binding of interrupt sources to cores.
 *    - Setting the interrupt priority of each configured ISR.
 *
 *  The enabled-state interrupt sources shall not be touched. (This might not be possible on some interrupt
 *  controllers.)
 *
 *  \param[in,out]  InterruptSource   Interrupt source which shall be initialized.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Supervisor mode
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_IntInterruptSourceInit,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) InterruptSource
));


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_HAL_INTERRUPTINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_InterruptInt.h
 **********************************************************************************************************************/

