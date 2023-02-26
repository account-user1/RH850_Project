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
 *  \addtogroup Os_Hal_Interrupt
 *  \{
 *
 *  \file       Os_Hal_Interrupt.h
 *  \brief
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_INTERRUPT_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_INTERRUPT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_InterruptInt.h"
# include "Os_Hal_Interrupt_Lcfg.h"

/* Os kernel module declarations */
# include "Os_Cfg.h"
# include "Os_TimingProtection_Cfg.h"
# include "Os_Common.h"
# include "Os_TimingProtection.h"

/* Os HAL dependencies */
# include "Os_Hal_Interrupt_Cfg.h"
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Core.h"
# include "Os_Hal_Derivative.h"
# include "Os_Interrupt.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/*! Calculates the priority mask for the passed level. */
# define OS_HAL_LEVEL_MASK(Level)     ((uint32)(((uint32)OS_HAL_PMR_MASK) >> (Level)) << (Level))                       /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! Priority mask to disable all CAT1 and CAT2 interrupts. */
# define OS_HAL_DISABLE_CAT1_LEVEL    OS_HAL_LEVEL_MASK(OS_CFG_HAL_ISR1_DISABLE_LEVEL)
/*! Priority mask to disable all CAT2 interrupts. */
# define OS_HAL_DISABLE_CAT2_LEVEL    OS_HAL_LEVEL_MASK(OS_CFG_HAL_ISR2_DISABLE_LEVEL)

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
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_InitEIC,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
))
{
  /* #10 Initialize the error interrupt control register. */
  IsrConfig->EICnRef->EICnLo = (uint8)(IsrConfig->EICnRef->EICnLo & 0x80)                                               /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */
                                    | OS_HAL_INTC_TABLE_MODE
                                    | ((uint8)IsrConfig->IntLevel);
}

/***********************************************************************************************************************
 *  Os_Hal_InitIBD()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_InitIBD,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
))
{
  /* #10 Check whether the hardware has a bind register or not */
  if(OS_HAL_EIBD2_BASE != 0)
  {
    /* #20 Initialize the binding register. */
    IsrConfig->IBDnRef->IBDnReg = (uint32)(IsrConfig->CoreID << 16) | (IsrConfig->CoreID + 1);                          /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */
  }
}

/***********************************************************************************************************************
 *  Os_Hal_IntSetRequest()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSetRequest,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
))
{
  /* #10 Request the given interrupt. */
  Os_Hal_IntDisableSource(IsrConfig);                                                                                   /* SBSW_OS_HAL_FC_CALLER */
  IsrConfig->EICnRef->EICnHi |= OS_HAL_INTC_REQUEST_FLAG;                                                               /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */
  Os_Hal_IntEnableSource(IsrConfig);                                                                                    /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetRequest()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE uint8, OS_CODE, OS_ALWAYS_INLINE,                                          /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetRequest,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_CONST) IsrConfig
))
{
  /* #10 The the request state from the hardware. */
  return (IsrConfig->EICnRef->EICnHi & OS_HAL_INTC_REQUEST_FLAG);
}

/***********************************************************************************************************************
 *  Os_Hal_IntSuspend()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSuspend,
(
  P2VAR(Os_Hal_IntStateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Get the current hardware state and disable interrupts. */
  *State = Os_Hal_GetDisableGlobal();                                                                                   /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntResume()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntResume,
(
  P2CONST(Os_Hal_IntStateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Enable interrupts, if requested. */
  if(*State == 0)
  {
    Os_Hal_EnableGlobal();
  }
}

/***********************************************************************************************************************
 *  Os_Hal_IntSuspendLevel()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSuspendLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
))
{
  /* #10 Set the given interrupt level. */
  *Level = Os_Hal_GetDisableLevel(*Level);                                                                              /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntResumeLevel()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntResumeLevel,
(
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
))
{
  /* #10 Resume the given interrupt level. */
  Os_Hal_SetLevel(*Level);
}

/***********************************************************************************************************************
 *  Os_Hal_IntDisableCat2()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntDisableCat2, (void))
{
  /* #10 Set the given interrupt level. */
  Os_Hal_SetLevel(OS_HAL_DISABLE_CAT2_LEVEL);
}

/***********************************************************************************************************************
 *  Os_Hal_IntEnableCat2()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntEnableCat2, (void))
{
  /* #10 Enable all interrupt levels. */
  Os_Hal_SetLevel(0);
}

/***********************************************************************************************************************
 *  Os_Hal_IntSuspendCat2()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSuspendCat2,
(
  P2VAR(Os_Hal_IntCat2StateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Get the current hardware state and disable interrupts. */
  *State = Os_Hal_GetDisableLevel(OS_HAL_DISABLE_CAT2_LEVEL);                                                           /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntResumeCat2()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntResumeCat2,
(
  P2CONST(Os_Hal_IntCat2StateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Resume interrupts level based. */
  Os_Hal_IntResumeLevel(State);                                                                                         /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntSuspendCat1()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSuspendCat1,
(
  P2VAR(Os_Hal_IntCat1StateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 If timing protection is enabled, suspend interrupts level based. */
  if(Os_TpIsEnabled() != 0)
  {
    *State = Os_Hal_GetDisableLevel(OS_HAL_DISABLE_CAT1_LEVEL);                                                         /* SBSW_OS_HAL_PWA_CALLER */
  }
  /* #20 Otherwise suspend interrupts by global interrupt state. */
  else
  {
    *State = Os_Hal_GetDisableGlobal();                                                                                 /* SBSW_OS_HAL_PWA_CALLER */
  }
}

/***********************************************************************************************************************
 *  Os_Hal_IntResumeCat1()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntResumeCat1,
(
  P2CONST(Os_Hal_IntCat1StateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 If timing protection is enabled, resume interrupts level based. */
  if(Os_TpIsEnabled() != 0)
  {
    Os_Hal_IntResumeLevel(State);                                                                                       /* SBSW_OS_HAL_FC_CALLER */
  }
  /* #20 Otherwise resume interrupts by global interrupt state. */
  else
  {
    Os_Hal_IntResume(State);                                                                                            /* SBSW_OS_HAL_FC_CALLER */
  }
}

/***********************************************************************************************************************
 *  Os_Hal_IntSuspendTp()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntSuspendTp,
(
  P2VAR(Os_Hal_IntTpStateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Suspend interrupts global. */
  Os_Hal_IntSuspend(State);                                                                                             /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntResumeTp()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntResumeTp,
(
  P2CONST(Os_Hal_IntTpStateType, AUTOMATIC, OS_APPL_DATA) State
))
{
  /* #10 Resume interrupts global. */
  Os_Hal_IntResume(State);                                                                                              /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntDisableSource()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntDisableSource,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  /* #10 Disable the given source. */
  IsrConfig->EICnRef->EICnLo |= OS_HAL_INTC_INT_SET_MASK;                                                               /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */

  /* #20 Ensure that the state is changed in hardware. */
  Os_Hal_SyncMemory();
}

/***********************************************************************************************************************
 *  Os_Hal_IntEnableSource()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntEnableSource,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  /* #10 Enable the given source. */
  IsrConfig->EICnRef->EICnLo &= OS_HAL_INTC_INT_CLR_MASK;                                                               /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */

  /* #20 Ensure that the state is changed in hardware. */
  Os_Hal_SyncMemory();
}

/***********************************************************************************************************************
 *  Os_Hal_IntIsClearPendingSupported()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntIsClearPendingSupported,( void ))
{
  return !0;
}

/***********************************************************************************************************************
 *  Os_Hal_IntClearPending()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntClearPending,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  /* #10 Clear the pending flag of the given interrupt. */
  IsrConfig->EICnRef->EICnHi &= OS_HAL_INTC_INT_CLR_PEND;                                                               /* SBSW_OS_HAL_PWA_PA_ISRCONFIG */

  /* #20 Ensure that the state is changed in hardware. */
  Os_Hal_SyncMemory();
}

/***********************************************************************************************************************
 *  Os_Hal_IntIsInterruptSourceEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntIsInterruptSourceEnabled,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  return ((IsrConfig->EICnRef->EICnLo & OS_HAL_INTC_INT_SET_MASK) == 0x0);
}

/***********************************************************************************************************************
 *  Os_Hal_IntIsInterruptPending()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntIsInterruptPending,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  return ((IsrConfig->EICnRef->EICnHi & OS_HAL_INTC_INT_SET_PEND) != 0x0);
}

/***********************************************************************************************************************
 *  Os_Hal_IntEndOfInterrupt()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntEndOfInterrupt,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig
))
{
  OS_IGNORE_UNREF_PARAM(IsrConfig);                                                                                     /* PRQA S 3112 */ /* MD_Os_Hal_3112 */

  /* #10 Inform hardware about end of interrupt. */
  Os_Hal_EndOfInterrupt();
}

/***********************************************************************************************************************
 *  Os_Hal_IntIsrLevelIsLe()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntIsrLevelIsLe,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) IsrConfig,
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) Level
))
{
  return (Os_StdReturnType)(IsrConfig->IntMask <= (*Level));
}

/***********************************************************************************************************************
 *  Os_Hal_IntLevelIsGt()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntLevelIsGt,
(
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) LevelX,
  P2CONST(Os_Hal_IntLevelType, AUTOMATIC, OS_CONST) LevelY
))
{
  return (Os_StdReturnType)((*LevelX) > (*LevelY));
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetLevel()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
))
{
  *Level = Os_Hal_GetLevel();                                                                                           /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntTrapRestore()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntTrapRestore,
(
  P2CONST(Os_Hal_IntTrapStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
))
{
  Os_Hal_IntResume(InterruptState);                                                                                     /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntTrapUpdate()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntTrapUpdate,
(
  P2VAR(Os_Hal_IntTrapStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
))
{
  *InterruptState = Os_Hal_GetIntState();                                                                               /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetInterruptState()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetInterruptState,
(
  P2VAR(Os_Hal_InterruptStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
))
{
  /* #10 Fetch level and global interrupt state. */
  InterruptState->PSW = Os_Hal_GetIntState();                                                                           /* SBSW_OS_HAL_PWA_CALLER */
  InterruptState->PMR = Os_Hal_GetLevel();                                                                              /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntInterruptSourceInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntInterruptSourceInit,
(
  P2CONST(Os_Hal_IntIsrConfigType, AUTOMATIC, OS_APPL_DATA) InterruptSource
))
{
  /* #10 Bind the interrupt to its core */
  Os_Hal_InitEIC(InterruptSource);                                                                                      /* SBSW_OS_HAL_FC_CALLER */

  /* #20 Initialize interrupt control register */
  Os_Hal_InitIBD(InterruptSource);                                                                                      /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetCat2LockLevel()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetCat2LockLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
))
{
  *Level = (Os_Hal_IntLevelType)OS_HAL_DISABLE_CAT2_LEVEL;                                                              /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntCat2LockLevel2Cat2StateType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_Hal_IntCat2StateType, OS_CODE, OS_ALWAYS_INLINE,                        /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntCat2LockLevel2Cat2StateType,
(
  Os_Hal_IntLevelType Level
))
{
  return (Os_Hal_IntCat2StateType) Level;
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetCat1LockType()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_Hal_IntDisableAllType, OS_CODE, OS_ALWAYS_INLINE,                       /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetCat1LockType,
(
    void
))
{
  Os_Hal_IntDisableAllType disableType;
  /* #10 Disable all interrupts by level if timing protection is enabled. */
  if(Os_TpIsEnabled() != 0)
  {
    disableType = OS_HAL_INT_DISABLE_ALL_BY_LEVEL;
  }
  /* #20 Else disable all interrupts by global flag. */
  else
  {
    disableType = OS_HAL_INT_DISABLE_ALL_BY_FLAG;
  }
  return disableType;
}

/***********************************************************************************************************************
 *  Os_Hal_IntGetCat1LockLevel()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntGetCat1LockLevel,
(
  P2VAR(Os_Hal_IntLevelType, AUTOMATIC, OS_APPL_DATA) Level
))
{
  *Level = (Os_Hal_IntLevelType)OS_HAL_DISABLE_CAT1_LEVEL;                                                              /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_IntCat1LockLevel2Cat1StateType()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_Hal_IntCat1StateType, OS_CODE, OS_ALWAYS_INLINE,                        /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_IntCat1LockLevel2Cat1StateType,
(
  Os_Hal_IntLevelType Level
))
{
  return (Os_Hal_IntCat1StateType) Level;
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_HAL_INTERRUPT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Interrupt.h
 **********************************************************************************************************************/

