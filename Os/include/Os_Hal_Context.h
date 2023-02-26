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
 *  \addtogroup Os_Hal_Context
 *  \trace      CREQ-1201
 *
 *  \{
 *
 *  \file       Os_Hal_Context.h
 *  \brief      Context switching primitives.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_CONTEXT_H)                                                                                         /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_CONTEXT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_ContextInt.h"
# include "Os_Hal_Context_Lcfg.h"

/* Os kernel module dependencies */

/* Os HAL dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Interrupt.h"
# include "Os_Hal_Core.h"

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
 *  Os_Hal_ContextInit()
 **********************************************************************************************************************/
 /*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextInit,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Initialize common fields of the given context from its configuration. */
  Context->Os_Hal_PC  = Config->Entry;  /* Program counter = Entry point of thread */                                   /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_PSW = Config->Os_Hal_PSW; /* Program status word = Initial machine status of thread */                /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_PMR = Config->Os_Hal_PMR; /* Priority Mask Register */                                                /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_LP  = Config->ReturnAddress;  /* Link pointer = Return address of the thread */                       /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_SP  = Config->Os_Hal_SP;  /* Stack top address for stack pointer */                                   /* SBSW_OS_HAL_PWA_CALLER */
  /* #20 If MemoryProtection is enabled, also initialize MemoryProtection specific fields. */
  if (Os_MpIsEnabled() != 0)
  {
    Context->Os_Hal_ASID  = Config->Os_Hal_ASID; /* set ASID for MPU regions */                                         /* SBSW_OS_HAL_PWA_CALLER */
    Context->Os_Hal_MPLA0 = Config->Os_Hal_SL;   /* Stack bottom address for MPU */                                     /* SBSW_OS_HAL_PWA_CALLER */
    Context->Os_Hal_MPUA0 = Config->Os_Hal_SP;   /* Stack top address for MPU */                                        /* SBSW_OS_HAL_PWA_CALLER */
  }
}

/***********************************************************************************************************************
 *  Os_Hal_ContextReset()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextReset,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Same as \ref Os_Hal_ContextInit(). */
  Os_Hal_ContextInit(Config, Context);                                                                                  /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextSetParameter()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextSetParameter,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(void, AUTOMATIC, OS_VAR_NOINIT) Parameter
))
{
  /* #10 Set the first parameter register of the given context. */
  Context->Os_Hal_PARAM = (uint32)Parameter;                                                                            /* PRQA S 0306 */ /* MD_Os_Hal_0306 */ /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextSetStack()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextSetStack,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(Os_Hal_ContextStackConfigType, AUTOMATIC, OS_VAR_NOINIT) Stack
))
{
  /* #10 Set the stack registers of the given context. */
  Context->Os_Hal_SP    = Stack->Os_Hal_StackEnd;                                                                       /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_MPLA0 = Stack->Os_Hal_StackStart;                                                                     /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_MPUA0 = Stack->Os_Hal_StackEnd;                                                                       /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextSetInterruptState()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextSetInterruptState,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(Os_Hal_InterruptStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
))
{
  /* #10 Set the interrupt state flags in PSW register of the given context. */
  Context->Os_Hal_PSW = (Context->Os_Hal_PSW & (uint32)~(OS_HAL_PSW_ID)) | InterruptState->PSW;                         /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_PMR = InterruptState->PMR;                                                                            /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextStartNext()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextStartNext,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 If MemoryProtection is enabled, set MemoryProtection specific registers from the given context. */
  if (Os_MpIsEnabled() != 0)
  {
    Os_Hal_SetASID(Next->Os_Hal_ASID);
    Os_Hal_SetMPLA0(Next->Os_Hal_MPLA0);
    Os_Hal_SetMPUA0(Next->Os_Hal_MPUA0);
    Os_Hal_SyncPipeline();
  }
  /* #20 Set common context registers. */
  Os_Hal_SetLP(Next->Os_Hal_LP);
  Os_Hal_SetPMR(Next->Os_Hal_PMR);
  Os_Hal_StartNext((const uint32*)Next);                                                                                /* PRQA S 0310, 0310 */ /* MD_Os_Hal_0310, MD_Os_Hal_0310 */ /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextFirstResume()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextFirstResume,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Disable EI and FE interrupts, then resume next context. */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();
  Os_Hal_ContextStartNext(Next);                                                                                        /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextSwitch()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextSwitch,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Store PSW to current context, then disable EI and FE interrupts. */
  Current->Os_Hal_PSW = Os_Hal_GetPSW();                                                                                /* SBSW_OS_HAL_PWA_CALLER */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();

  /* #20 Store remaining common context registers to current context. */
  Current->Os_Hal_LP  = Os_Hal_GetLP();                                                                                 /* SBSW_OS_HAL_PWA_CALLER */
  Current->Os_Hal_PMR = Os_Hal_GetPMR();                                                                                /* SBSW_OS_HAL_PWA_CALLER */
  /* #30 If MemoryProtection is enabled, store MemoryProtection specific registers to current context. */
  if (Os_MpIsEnabled() != 0)
  {
    Current->Os_Hal_ASID  = Os_Hal_GetASID();                                                                           /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPLA0 = Os_Hal_GetMPLA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPUA0 = Os_Hal_GetMPUA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
  }

  /* #40 Restore common context registers from next context. */
  Os_Hal_SetLP(Next->Os_Hal_LP);
  Os_Hal_SetPMR(Next->Os_Hal_PMR);

  /* #50 Start or resume next thread. */
  Os_Hal_StartNextThread((const uint32*)Current, (const uint32*)Next);                                                  /* PRQA S 0306, 0310 */ /* MD_Os_Hal_0306, MD_Os_Hal_0310 */ /* SBSW_OS_HAL_FC_CALLER */
}                                                                                                                       /* PRQA S 6050 */ /* MD_Os_Hal_STCAL */

/***********************************************************************************************************************
 *  Os_Hal_ContextResetAndResume()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextResetAndResume,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) CurrentConfig,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Disable EI and FE interrupts. */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();

  /* #20 Reset current context. */
  Os_Hal_ContextInit(CurrentConfig, Current);                                                                           /* SBSW_OS_HAL_FC_CALLER */

  /* #30 Start or resume next thread. */
  Os_Hal_ContextStartNext(Next);                                                                                        /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextAbort()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextAbort,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Set program counter of the given context to the return function, and reset stack pointer. */
  Context->Os_Hal_PC = Config->ReturnAddress;                                                                           /* SBSW_OS_HAL_PWA_CALLER */
  Context->Os_Hal_SP = Config->Os_Hal_SP;                                                                               /* SBSW_OS_HAL_PWA_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextCall()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextCall,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Store PSW to current context, then disable EI and FE interrupts. */
  Current->Os_Hal_PSW = Os_Hal_GetPSW();                                                                                /* SBSW_OS_HAL_PWA_CALLER */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();

  /* #20 Store remaining common context registers to current context. */
  Current->Os_Hal_LP    = Os_Hal_GetLP();                                                                               /* SBSW_OS_HAL_PWA_CALLER */
  Current->Os_Hal_PMR   = Os_Hal_GetPMR();                                                                              /* SBSW_OS_HAL_PWA_CALLER */
  /* #30 If MemoryProtection is enabled, store MemoryProtection specific registers to current context and set new
   *  ASID. */
  if (Os_MpIsEnabled() != 0)
  {
    Current->Os_Hal_ASID  = Os_Hal_GetASID();                                                                           /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPLA0 = Os_Hal_GetMPLA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPUA0 = Os_Hal_GetMPUA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
    Os_Hal_SetASID(Next->Os_Hal_ASID);
    Os_Hal_SyncPipeline();
  }

  /* #40 Prepare registers and call ServiceFunction. */
  Os_Hal_SetLP(Next->Os_Hal_LP);
  Os_Hal_SetPMR(Next->Os_Hal_PMR);
  Os_Hal_CallFunc((uint32*)Current, (const uint32*)Next);                                                               /* PRQA S 0310, 0310 */ /* MD_Os_Hal_0310, MD_Os_Hal_0310 */ /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextCallOnStack()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
Os_Hal_ContextCallOnStack,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Store PSW to current context, then disable EI and FE interrupts. */
  Current->Os_Hal_PSW = Os_Hal_GetPSW();                                                                                /* SBSW_OS_HAL_PWA_CALLER */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();

  /* #20 Store remaining common context registers to current context. */
  Current->Os_Hal_LP    = Os_Hal_GetLP();                                                                               /* SBSW_OS_HAL_PWA_CALLER */
  Current->Os_Hal_PMR   = Os_Hal_GetPMR();                                                                              /* SBSW_OS_HAL_PWA_CALLER */
  /* #30 If MemoryProtection is enabled, store MemoryProtection specific registers to current context and set new
   *  ASID. */
  if (Os_MpIsEnabled() != 0)
  {
    Current->Os_Hal_ASID  = Os_Hal_GetASID();                                                                           /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPLA0 = Os_Hal_GetMPLA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
    Current->Os_Hal_MPUA0 = Os_Hal_GetMPUA0();                                                                          /* SBSW_OS_HAL_PWA_CALLER */
  }

  /* #40 Prepare registers and call ServiceFunction. */
  Os_Hal_SetLP(Next->Os_Hal_LP);
  Os_Hal_SetPMR(Next->Os_Hal_PMR);
  Os_Hal_CallFuncOnStack((uint32*)Current, (const uint32*)Next);                                                        /* PRQA S 0310, 0310 */ /* MD_Os_Hal_0310, MD_Os_Hal_0310 */ /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextReturn()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Hal_3219, MD_Os_Hal_3673 */
Os_Hal_ContextReturn,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Disable EI and FE interrupts, then start or resume next thread. */
  OS_IGNORE_UNREF_PARAM(Current);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  Os_Hal_DisableGlobal();
  Os_Hal_DisableFE();
  Os_Hal_ContextStartNext(Next);                                                                                        /* SBSW_OS_HAL_FC_CALLER */
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_HAL_CONTEXT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context.h
 **********************************************************************************************************************/

