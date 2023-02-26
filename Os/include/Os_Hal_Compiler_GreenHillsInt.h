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
 * \addtogroup Os_Hal_Compiler
 * \{
 *
 * \file       Os_Hal_Compiler_GreenHillsInt.h
 * \brief      Compiler abstraction for compiler Green Hills
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HAL_COMPILER_GREENHILLSINT_H)                                                                           /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_COMPILER_GREENHILLSINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"
# include "Os_Hal_Core_Types.h"
# include "Os_MemoryProtection_Cfg.h"

/* 
 * Suppress all warnings with regard to pointer to integer conversion, this kind of warning is also a MISRA finding 
 * and is already analyzed during MISRA analysis. 
 */
# pragma ghs nowarning 32   

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

# ifndef OS_HAL_RH850_FPU
#  if defined(__NoFloat__) || defined(__SoftwareFloat__)
#   define OS_HAL_RH850_FPU   (STD_OFF)
#  else
#   define OS_HAL_RH850_FPU   (STD_ON)
#  endif
# endif

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/*! \brief      Declares a function with a compiler specific attribute.
 *  \details    The implementations prototype has to be created with OS_FUNC_ATTRIBUTE_DEFINITION.
 *  \param[in]  rettype       The return type of the function.
 *  \param[in]  memclass      The memory class of the function.
 *  \param[in]  attribute     The function attribute {OS_ALWAYS_INLINE; OS_PURE, ...}.
 *  \param[in]  functionName  The function name.
 *  \param[in]  arguments     The function arguments in brackets. E.g. (uint8 a, uint16 b) or (void).
 */
# define OS_FUNC_ATTRIBUTE_DECLARATION(rettype, memclass, attribute, functionName, arguments) \
      FUNC(rettype, memclass)  functionName arguments attribute                                                         /* PRQA S 3410, 3453 */ /* MD_Os_3410, MD_Os_3453 */

/*! \brief      Provides a function prototype for function definitions with a compiler specific attribute.
 *  \details    The declaration has to be created with OS_FUNC_ATTRIBUTE_DECLARATION.
 *  \param[in]  rettype       The return type of the function.
 *  \param[in]  memclass      The memory class of the function.
 *  \param[in]  attribute     The function attribute {OS_ALWAYS_INLINE; OS_PURE, ...}.
 *  \param[in]  functionName  The function name.
 *  \param[in]  arguments     The function arguments in brackets. E.g. (uint8 a, uint16 b) or (void).
 */
# define OS_FUNC_ATTRIBUTE_DEFINITION(rettype, memclass, attribute, functionName, arguments) \
      FUNC(rettype, memclass)  functionName arguments                                                                   /* PRQA S 3410, 3453 */ /* MD_Os_3410, MD_Os_3453 */

/*! \brief    Tells the compiler that the conditional statement is likely to be true.
 *  \details
 *  The compiler, in turn, can then perform block reordering, and other optimization to
 *  improve the performance of conditional branches.
 *
 *  Availability: GCC ('__builtin_expect'), Diab
 *
 *  \param[in]  CONDITION   The condition which is likely to be true
 */
# define OS_LIKELY(CONDITION)       (CONDITION)                                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief    Tells the compiler that the conditional statement is likely to be false.
 *  \details
 *  The compiler, in turn, can then perform block reordering, and other optimization to
 *  improve the performance of conditional branches.
 *
 *  Availability: GCC ('__builtin_expect'), Diab
 *
 *  \param[in]  CONDITION   The condition which is likely to be false
 */
# define OS_UNLIKELY(CONDITION)     (CONDITION)                                                                         /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief    Force the compiler to inline a function.
 *  \details  This attribute forces the compiler to inline the specified function,
 *        regardless of the optimization strategy of the compiler itself.
 *        On some compilers you may be able to disable even this kind of inlining, using debugging options.
 *
 *        Availability: GCC ('always_inline'), Diab, Tasking
 */
# define OS_ALWAYS_INLINE

/*! \brief    This attribute tells the compiler that a function never returns.
 *  \details
 * It can then optimize without regard to what would happen if the function ever did return.
 * This makes slightly better code. More importantly, it helps avoid spurious warnings of uninitialized variables.
 *
 * Availability: GCC ('noreturn'), Diab, Tasking, GreenHills
 */
# define OS_NORETURN    __attribute__((noreturn))

/*! \brief    This attribute forces inlining of all function calls in a function, including nested function calls.
 * \details
 * Whether the function itself is considered for inlining depends on its size and the current inlining parameters.
 *
 * Availability: GCC ('flatten'), Diab, Tasking
 */
# define OS_FLATTEN

/*! \brief    This attribute tells that a function has no side effects and will not access global data.
 *  \details
 * This can help the compiler to optimize code. Such functions do not examine any values except their arguments,
 * and have no effects except the return value. This is just slightly more strict class than the OS_PURE attribute,
 * since function is not allowed to read global memory.
 *
 * Availability: GCC ('const'), Diab ('no_side_effects'), Tasking, Green Hills
 */
# define OS_NOSIDEEFFECTS

/*! \brief    This attribute tells that a function has no side effects, although it may read global data.
 *  \details
 * Such pure functions can be subject to common subexpression elimination and loop optimization.
 *
 * Availability: GCC ('pure'), Diab, Tasking, Green Hills
 */
# define OS_PURE        __attribute__((pure))

/*! \brief         Abstraction of executing arbitrary assembler instruction
 *  \param[in]     x       Assembler instruction
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_ASM(x)             __asm(x)

/*! \brief         Abstraction of the assembler align directive
 *  \param[in]     val      Alignment
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_ALIGN(val)         __asm(".align "val)

/*! \brief         Defines an externally visible identifier.
 *  \param[in]     name      Name of the identifier
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_LABEL(name)        __asm(".globl _"name);__asm("_"name":")

/*! \brief         Starts a program code (.text) section
 *  \details       --no details--
 *  \param[in]     name      Name of the section
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SECTION(name)      __asm(".section "name", \"ax\"")

/*! \brief         Stores the value of a constant expressions as successive 32-bit data.
 *  \details       --no details--
 *  \param[in]     name
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_WORD(name)         __asm(".word _"name);

/*! \brief         Abstraction of the assembler nop instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_NOP()              __asm("nop")

/*! \brief         Disables acknowledgment of EI level interrupts
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode
 */
# define Os_Hal_DisableGlobal()    __asm("di")

/*! \brief         Enables acknowledgment of EI level interrupts
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           Supervisor mode
 */
# define Os_Hal_EnableGlobal()     __asm("ei")

/*! \brief         Abstraction of the assembler synci instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncInstruction()  __asm("synci")

/*! \brief         Abstraction of the assembler syncp instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncPipeline()     __asm("syncp")

/*! \brief         Abstraction of the assembler syncm instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncMemory()       __asm("syncm")

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

/* ECO_IGNORE_BLOCK_BEGIN */

/***********************************************************************************************************************
 *  Os_Hal_GetSP()
 **********************************************************************************************************************/
/*! \fn           uint32 Os_Hal_GetSP(void)
 *  \brief        Get the current stack pointer.
 *  \details      --no details--
 *
 *  \return       The current stack pointer.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm uint32 Os_Hal_GetSP(void)
{
  mov  SP, r10
}

/***********************************************************************************************************************
 *  Os_Hal_SetLP()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_SetLP(uint32 val)
 *  \brief        Set the current stack pointer.
 *  \details      --no details--
 *
 *  \param[in]    The link pointer to set.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm void Os_Hal_SetLP(uint32 val)
{
%reg val
  mov  val, LP
%mem val
  ld.w val, LP
%error
}

/***********************************************************************************************************************
 *  Os_Hal_GetLP()
 **********************************************************************************************************************/
/*! \fn           uint32 Os_Hal_GetLP(void)
 *  \brief        Returns the current link pointer.
 *  \details      --no details--
 *
 *  \return       The current link pointer.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm uint32 Os_Hal_GetLP(void)
{
  mov  LP, r10
}

/***********************************************************************************************************************
 *  Os_Hal_EndOfInterrupt()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_EndOfInterrupt(void)
 *  \brief        Signals the end of an interrupt to the hardware.
 *  \details      --no details--
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
asm void Os_Hal_EndOfInterrupt(void)
{
%lab Os_Hal_EndOfIntLabel
   -- #10 Prepare PC
   mov   Os_Hal_EndOfIntLabel, r11
   ldsr  r11, EIPC
   -- #20 Prepare PSW
   mov   OS_HAL_EIPSW_SV, r11
   ldsr  r11, EIPSW
   -- #30 Signal end of interrupt
   eiret
Os_Hal_EndOfIntLabel:
}

/***********************************************************************************************************************
 *  Os_Hal_CallFunc()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_CallFunc(uint32* current, uint32* next)
 *  \brief        Enters a function defined by 'next' without performing a stack switch.
 *  \details      --no details--
 *
 *  \param[in]    current   The current context.
 *  \param[in]    next      The context to be continued.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
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
asm void Os_Hal_CallFunc(uint32* current, uint32* next)
{
%reg current %reg next %lab FuncCallReturn
  -- #10 Store current context
  pushsp  r20-r29            -- save registers r20 ... r29 to stack
  mov   FuncCallReturn, r11  -- get label for return
  st.w  r11, 0x00[current]   -- save PC
  st.w  SP,  0x10[current]   -- save SP
  -- #20 Prepare next context
  ld.w  0x20[next], r6       -- get first parameter
  ld.w  0x00[next], r12      -- get PC
  ld.w  0x04[next], r11      -- get PSW
  ldsr  r11, PSW             -- set PSW
  -- #30 Synchronize instruction fetches
  synci                      -- sync instructions
  -- #40 Execute next context
  jmp   [r12]                -- branch to function
FuncCallReturn:
  -- #50 Restore permanent registers of current context
  popsp r20-r29              -- restore registers r20 ... r29 from stack
%error
}

/***********************************************************************************************************************
 *  Os_Hal_CallFuncOnStack()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_CallFuncOnStack(uint32* current, uint32* next)
 *  \brief        Enters a function defined by 'next' with stack switch.
 *  \details      --no details--
 *
 *  \param[in]    current   The current context.
 *  \param[in]    next      The context to be continued.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
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
asm void Os_Hal_CallFuncOnStack(uint32* current, uint32* next)
{
%reg current %reg next %lab FuncCallReturn
  -- #10 store current context.
  pushsp  r20-r29            -- save registers r20 ... r29 to stack
  mov   FuncCallReturn, r11  -- get label for return
  st.w  r11, 0x00[current]   -- save PC
  st.w  SP,  0x10[current]   -- save SP
  -- #20 Switch the next context stack.
  ld.w  0x10[next], SP       -- set SP
#if (OS_CFG_MEMORY_PROTECTION == STD_ON)  
  -- #30 Reprogram stack window.
  ld.w  0x14[next], r11      -- get MPLA0
  ldsr  r11, MPLA0           -- set MPLA0
  ld.w  0x18[next], r11      -- get MPUA0
  ldsr  r11, MPUA0           -- set MPUA0
  ld.w  0x1C[next], r11      -- get ASID
  ldsr  r11, ASID            -- set ASID  
  -- #40 Synchronize the pipeline.
  syncp                      -- sync pipeline  
#endif  
  -- #50 prepare next context.
  ld.w  0x20[next], r6       -- get first parameter
  ld.w  0x00[next], r12      -- get PC
  ld.w  0x04[next], r11      -- get PSW
  ldsr  r11, PSW             -- set PSW
  -- #60 Synchronize instruction fetch.
  synci                      -- sync instructions
  -- #70 Start next context
  jmp   [r12]                -- branch to function
  -- #80 Restore permanent register for current context on return to current context
FuncCallReturn:
  popsp r20-r29              -- restore registers r20 ... r29 from stack
%error
}

/***********************************************************************************************************************
 *  Os_Hal_SetSPR()
 **********************************************************************************************************************/
/*! \fn         void Os_Hal_SetSPR(uint32 regID, uint32 groupID, uint32 value)
 *  \brief      Writes a value to the given register.
 *  \details    --no details--
 *
 *  \param[in]    regID     The register to write to.
 *  \param[in]    groupID   The register's group.
 *  \param[in]    value     The value to write to the register.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm void Os_Hal_SetSPR(uint32 regID, uint32 groupID, uint32 value)
{
%con regID %con groupID %con value
  mov    value, r11
  ldsr   r11, regID, groupID
%con regID %con groupID %reg value
  ldsr   value, regID, groupID
%con regID %con groupID %mem value
  ld.w   value, r11
  ldsr   r11, regID, groupID
%error
}

/***********************************************************************************************************************
 *  Os_Hal_GetSPR()
 **********************************************************************************************************************/
/*! \fn           uint32 Os_Hal_GetSPR(uint32 regID, uint32 groupID)
 *  \brief        Returns the given register
 *  \details      --no details--
 *
 *  \param[in]    regID     The register to read from.
 *  \param[in]    groupID   The register's group.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm uint32 Os_Hal_GetSPR(uint32 regID, uint32 groupID)
{
%con regID %con groupID
  stsr   regID, r10, groupID
%error
}

/***********************************************************************************************************************
 *  Os_Hal_StartNextThread()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_StartNextThread(uint32* current, uint32* next)
 *  \brief        Starts the next thread.
 *  \details      --no details--
 *
 *  \param[in]    current   The current context.
 *  \param[in]    next      The context to be continued.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
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
asm void Os_Hal_StartNextThread(uint32* current, uint32* next)
{
%reg current %reg next %lab Os_Hal_Thread_ReturnLabel
  -- #10 Store current context
  pushsp r20-r29            -- push r20 ... r29 onto stack
  mov   Os_Hal_Thread_ReturnLabel, r11
  st.w  r11, 0x00[current]  -- save PC
  st.w  SP,  0x10[current]  -- save SP
  -- #20 Prepare next context  
  ld.w  0x10[next], SP      -- set SP  
#if (OS_CFG_MEMORY_PROTECTION == STD_ON)  
  -- #30 Reprogram stack window.
  ld.w  0x14[next], r11      -- get MPLA0
  ldsr  r11, MPLA0           -- set MPLA0
  ld.w  0x18[next], r11      -- get MPUA0
  ldsr  r11, MPUA0           -- set MPUA0
  ld.w  0x1C[next], r11      -- get ASID
  ldsr  r11, ASID            -- set ASID
  -- #40 Synchronize the pipeline.
  syncp                      -- sync pipeline
#endif 
  ld.w  0x00[next], r12     -- get entry address
  ld.w  0x04[next], r11     -- get PSW
  ldsr  r11, PSW            -- set PSW
  -- #50 Synchronize instruction fetch
  synci                     -- synchronize instruction
  -- #60 Execute new context
  jmp   [r12]               -- branch to entry address
Os_Hal_Thread_ReturnLabel:
  -- #70 Restore permanent register for current context on return to current context
  popsp r20-r29             -- restore r20 ... r29 from stack
%error
}

/***********************************************************************************************************************
 *  Os_Hal_StartNext()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_StartNext(uint32* next)
 *  \brief        Starts the next thread.
 *  \details      --no details--
 *
 *  \param[in]    next      The context to be continued.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
asm void Os_Hal_StartNext(uint32* next)
{
%reg next
  -- #10 Prepare next context
  ld.w  0x00[next], r12  -- get entry address
  ld.w  0x04[next], r11  -- get PSW
  ld.w  0x10[next], SP   -- set SP
  ldsr  r11, PSW         -- set PSW
  -- #20 Synchronize instruction fetch
  synci                  -- synchronize instruction
  -- #30 Execute new context
  jmp   [r12]            -- branch to entry address
%error
}

/***********************************************************************************************************************
 *  Os_Hal_CountLeadingZeros()
 **********************************************************************************************************************/
/*! \fn           uint32 Os_Hal_CountLeadingZeros(uint32 bitfield)
 *  \brief        Returns the number of leading zeros in bitfield.
 *  \details      --no details--
 *
 *  \param[in]    bitfield  The value to query.
 *
 *  \return       The number of leading zero bits.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
asm uint32 Os_Hal_CountLeadingZeros(uint32 bitfield)
{
%reg bitfield %lab Os_Hal_ReturnLabel
  -- #10 Prepare default return value
  mov    32, r10
  -- #20 Return default return value if passed bitfield is zero
  cmp    zero, bitfield
  be     Os_Hal_ReturnLabel
  -- #30 Else count leading zeros
  sch1l  bitfield, r10
  addi   -1, r10, r10
Os_Hal_ReturnLabel:
%error
}

/***********************************************************************************************************************
 *  Os_Hal_GetDisableGlobal()
 **********************************************************************************************************************/
/*! \fn           Os_Hal_IntStateType Os_Hal_GetDisableGlobal(void)
 *  \brief        Get the global interrupt flag state.
 *  \details      --no details--
 *
 *  \return       The global interrupt flag.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm Os_Hal_IntStateType Os_Hal_GetDisableGlobal(void)
{
  stsr  PSW, r10
  di
  andi  0x20, r10, r10
}

/***********************************************************************************************************************
 *  Os_Hal_GetDisableLevel()
 **********************************************************************************************************************/
/*! \fn           Os_Hal_IntLevelType Os_Hal_GetDisableLevel(Os_Hal_IntLevelType Level)
 *  \brief        Sets the current interrupt level and returns the previous one.
 *  \details      --no details--
 *
 *  param[in]     The level to set.
 *
 *  \return       The previous interrupt level
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm Os_Hal_IntLevelType Os_Hal_GetDisableLevel(Os_Hal_IntLevelType Level)
{
%reg Level
  stsr   PSW, r11
  di
  stsr   PMR, r10
  ldsr   Level, PMR
  ldsr   r11, PSW
%con Level
  stsr   PSW, r11
  di
  stsr   PMR, r10
  mov    Level, r12
  ldsr   r12, PMR
  ldsr   r11, PSW
%error
}

/***********************************************************************************************************************
 *  Os_Hal_SetLevel()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_SetLevel(Os_Hal_IntLevelType Level)
 *  \brief        Set the current interrupt level.
 *  \details      --no details--
 *
 *  \param[in]    The level to set.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm void Os_Hal_SetLevel(Os_Hal_IntLevelType Level)
{
%reg Level
  stsr   PSW, r11
  di
  ldsr   Level, PMR
  ldsr   r11, PSW
%con Level
  stsr   PSW, r11
  di
  mov    Level, r12
  ldsr   r12, PMR
  ldsr   r11, PSW
%error
}

/***********************************************************************************************************************
 *  Os_Hal_GetLevel()
 **********************************************************************************************************************/
/*! \fn           Os_Hal_IntLevelType Os_Hal_GetLevel(void)
 *  \brief        Returns the current interrupt level.
 *  \details      --no details--
 *
 *  \return       The current interrupt level.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
asm Os_Hal_IntLevelType Os_Hal_GetLevel(void)
{
  stsr   PSW, r11
  di
  stsr   PMR, r10
  ldsr   r11, PSW
}

/***********************************************************************************************************************
 *  Os_Hal_TryGetLock()
 **********************************************************************************************************************/
/*! \fn           Os_Hal_SpinlockResultType Os_Hal_TryGetLock(volatile uint32* addr)
 *  \brief        Tries to get a spinlock
 *  \details      --no details--
 *
 *  \param[in]    addr    The spinlock to get.
 *
 *  \return       Returns whether getting the spinlock succeeded.
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
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
asm Os_Hal_SpinlockResultType Os_Hal_TryGetLock(volatile uint32* addr)
{
%reg addr %lab osLock_Success %lab osLock_NoSuccess
  -- #10 Load spinlock result from passed addr and aquire link for passed addr
  ldl.w   [addr], r10
  -- #20 Goto label osLock_NoSuccess if spinlock result is not 0
  cmp     r0, r10
  bnz     osLock_NoSuccess
  -- #30 Else try to write 1 to passed addr
  mov     1, r10
  stc.w   r10, [addr]
  -- #40 Goto osLock_Success if write access was successful (link was still valid)
  cmp     r0, r10
  bnz     osLock_Success
  -- #50 Else return 0
osLock_NoSuccess:
  -- #60 Write access successful. Return r10 (1)
  mov     0, r10
osLock_Success:
%mem addr %lab osLock_Success %lab osLock_NoSuccess
  -- #10 Load spinlock result from passed addr and aquire link for passed addr
  ld.w    addr, r12
  ldl.w   [r12], r10
  -- #20 Goto label osLock_NoSuccess if spinlock result is not 0
  cmp     r0, r10
  bnz     osLock_NoSuccess
  -- #30 Else try to write 1 to passed addr
  mov     1, r10
  stc.w   r10, [r12]
  -- #40 Goto osLock_Success if write access was successful (link was still valid)
  cmp     r0, r10
  bnz     osLock_Success
  -- #50 Else return 0
osLock_NoSuccess:
  mov     0, r10
  -- #60 Write access successful. Return r10 (1)
osLock_Success:
%error
}

/* ECO_IGNORE_BLOCK_END */

#endif /* OS_HAL_COMPILER_GREENHILLSINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Compiler_GreenHillsInt.h
 **********************************************************************************************************************/

