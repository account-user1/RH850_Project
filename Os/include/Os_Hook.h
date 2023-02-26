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
 * \addtogroup Os_Hook
 * \{
 *
 * \file
 * \brief       Public interface of Hook unit.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HOOK_H)                                                                                                 /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HOOK_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_HookInt.h"
# include "Os_Hook_Cfg.h"
# include "Os_Hook_Lcfg.h"

/* Os module dependencies */
# include "Os_Common.h"
# include "Os_Thread.h"
# include "Os_Core.h"
# include "Os_Error.h"

/* Os hal dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_HOOK)
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

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_HookIsErrorHookEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,
Os_HookIsErrorHookEnabled, ( void ))
{
  return (Os_StdReturnType)(OS_CFG_ERRORHOOKS  == STD_ON);
}

/***********************************************************************************************************************
 *  Os_HookCallbackGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookCallbackGetThread,
(
  P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST) Hook
))
{
  return &Hook->Hook.Thread;
}

/***********************************************************************************************************************
 *  Os_HookStatusHookGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookStatusHookGetThread,
(
  P2CONST(Os_HookStatusHookConfigType, AUTOMATIC, OS_CONST) Hook
))
{
  return &Hook->Hook.Thread;
}

/***********************************************************************************************************************
 *  Os_HookProtectionHookGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,
OS_ALWAYS_INLINE, Os_HookProtectionHookGetThread,
(
  P2CONST(Os_HookProtectionHookConfigType, AUTOMATIC, OS_CONST) Hook
))
{
  return &Hook->Hook.Thread;
}

/***********************************************************************************************************************
 *  Os_HookThread2Hook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE,/* PRQA S 3219 */ /* MD_Os_3219 */
Os_HookThread2Hook,
(
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) Thread
))
{
  Os_Assert((Os_StdReturnType)(Os_ThreadIsHook(Thread) != 0));                                                          /* SBSW_OS_FC_PRECONDITION */
  return (P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST))Thread;                                                       /* PRQA S 0310 */ /* MD_Os_0310 */
}

/***********************************************************************************************************************
 *  Os_HookGetThread()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST), OS_CODE,                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_HookGetThread,
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
))
{
  return &(Hook->Thread);
}

/***********************************************************************************************************************
 *  Os_HookSuicide()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_NORETURN OS_ALWAYS_INLINE, Os_HookSuicide, (void))
{
  P2CONST(Os_ThreadConfigType, AUTOMATIC, OS_CONST) currentThread = Os_CoreGetThread();

  /* #10 If the current thread is no hook: */
  if(OS_UNLIKELY(Os_ThreadIsHook(currentThread) == 0))                                                                  /* SBSW_OS_HK_THREADISTASK_001 */ /* COV_OS_INVSTATE */
  {
    /* #20 Panic! */
    Os_ErrKernelPanic();
  }

  /* #30 Otherwise return from hook. */
  Os_HookReturn();
}

/***********************************************************************************************************************
 *  Os_HookCheckId()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_3219 */
Os_HookCheckId,
(
  Os_HookIdType Id
))
{
  return Os_ErrExtendedCheck(Os_ErrIsValueLo((uint32)Id, (uint32)OS_CFG_NUM_HOOKS));
}

/***********************************************************************************************************************
 *  Os_HookId2Hook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST), OS_CODE,                  /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_HookId2Hook,
(
  Os_HookIdType Id
))
{
  Os_Assert(Os_ErrIsValueLo((uint32)Id, (uint32)OS_CFG_NUM_HOOKS));
  return  OsCfg_HookRefs[Id];
}

/***********************************************************************************************************************
 *  Os_Hook2CallbackHook()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST), OS_CODE,          /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_Hook2CallbackHook,
(
  P2CONST(Os_HookConfigType, AUTOMATIC, OS_CONST) Hook
))
{
  return  (P2CONST(Os_HookCallbackConfigType, AUTOMATIC, OS_CONST))(Hook);                                              /* PRQA S 0310 */ /* MD_Os_0310 */
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_HOOK)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_HOOK_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Hook.h
 **********************************************************************************************************************/
