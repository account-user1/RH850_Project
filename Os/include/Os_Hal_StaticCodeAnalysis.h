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
 * \ingroup     Os_Hal
 * \addtogroup  Os_Hal_Compiler
 * \brief       Compiler abstraction of the ANSI C compiler used for MISRA and ReviewHelper
 *
 * \{
 *
 * \file        Os_Hal_StaticCodeAnalysis.h
 * \brief       Compiler abstraction of the ANSI C compiler used for MISRA and ReviewHelper
 * \details
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HAL_COMPILER_GCCINT_H)
# define OS_HAL_COMPILER_GCCINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"
# include "Os_CommonInt.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

# define OS_HAL_RH850_FPU   (STD_ON)

# define OS_HAL_RH850_REGMODE   (32U)
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
         attribute FUNC(rettype, memclass) functionName arguments                                                       /* PRQA S 3453, 3410 */ /* MD_MSR_19.7, MD_Os_Hal_3410 */


/*! \brief      Provides a function prototype for function definitions with a compiler specific attribute.
 *  \details    The declaration has to be created with OS_FUNC_ATTRIBUTE_DECLARE.
 *  \param[in]  rettype       The return type of the function.
 *  \param[in]  memclass      The memory class of the function.
 *  \param[in]  attribute     The function attribute {OS_ALWAYS_INLINE; OS_PURE, ...}.
 *  \param[in]  functionName  The function name.
 *  \param[in]  arguments     The function arguments in brackets. E.g. (uint8 a, uint16 b) or (void).
 */
# define OS_FUNC_ATTRIBUTE_DEFINITION(rettype, memclass, attribute, functionName, arguments) \
         attribute FUNC(rettype, memclass) functionName arguments                                                       /* PRQA S 3453, 3410 */ /* MD_MSR_19.7, MD_Os_Hal_3410 */

# define OS_LIKELY(CONDITION)        (CONDITION)                                                                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define OS_UNLIKELY(CONDITION)      (CONDITION)                                                                        /* PRQA S 3453 */ /* MD_MSR_19.7 */

/*! \brief  Abstraction for compiler specific attributes, required by core */
# define OS_ALWAYS_INLINE
# define OS_NORETURN
# define OS_FLATTEN
# define OS_HAL_NOINLINE
# define OS_NOSIDEEFFECTS
# define PS_PURE
# define OS_NAKED

/*! \brief         Abstraction of executing arbitrary assembler instruction
 *  \details       --no details--
 *  \param[in]     x       Assembler instruction
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_ASM(str)

/*! \brief         Abstraction of the assembler align directive
 *  \details       --no details--
 *  \param[in]     val      Alignment
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_ALIGN(str)

/*! \brief         Defines an externally visible identifier.
 *  \details       --no details--
 *  \param[in]     name      Name of the identifier
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_LABEL(str)

/*! \brief         Starts a program code (.text) section
 *  \details       --no details--
 *  \param[in]     name      Name of the section
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SECTION(str)

/*! \brief         Stores the value of a constant expressions as successive 32-bit data.
 *  \details       --no details--
 *  \param[in]     name
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_WORD(str)

/*! \brief         Abstraction of the assembler nop instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_NOP()

/*! \brief         Disables acknowledgment of EI level interrupts
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_DisableGlobal()

/*! \brief         Enables acknowledgment of EI level interrupts
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_EnableGlobal()

/*! \brief         Abstraction of the assembler syncp instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncPipeline()

/*! \brief         Abstraction of the assembler synci instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncInstruction()

/*! \brief         Abstraction of the assembler syncm instruction
 *  \details       --no details--
 *  \context       OS_INTERNAL
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 */
# define Os_Hal_SyncMemory()


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
static inline uint32 Os_Hal_GetSP(void);

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
static inline void Os_Hal_SetLP(uint32 val);

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
static inline uint32 Os_Hal_GetLP(void);

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
static inline void Os_Hal_CallFunc(const uint32 *current, const uint32* next);

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
static inline void Os_Hal_CallFuncOnStack(const uint32* current, const uint32* next);

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
static inline void Os_Hal_SetSPR(uint32 regID, uint32 groupID, uint32 value);

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
static inline uint32 Os_Hal_GetSPR(uint32 regID, uint32 groupID);

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
static inline void Os_Hal_StartNextThread(const uint32* current, const uint32* next);

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
static inline uint32 Os_Hal_CountLeadingZeros(uint32 bitfield);

/***********************************************************************************************************************
 *  Os_Hal_GetDisableGlobal()
 **********************************************************************************************************************/
/*! \fn           Os_Hal_IntStateType Os_Hal_GetDisableGlobal(void)
 *  \brief        Disables EI interrupts and returns current ID-Flag from PSW.
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
static inline uint32 Os_Hal_GetDisableGlobal(void);

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
static inline uint32 Os_Hal_GetDisableLevel(uint32 Level);

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
static inline void Os_Hal_SetLevel(uint32 Level);

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
static inline uint32 Os_Hal_GetLevel(void);

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
static inline uint32 Os_Hal_TryGetLock(volatile uint32* addr);

/***********************************************************************************************************************
 *  Os_Hal_StartNext()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_StartNext(uint32* current, uint32* next)
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
static inline void Os_Hal_StartNext(const uint32 *Next);

/***********************************************************************************************************************
 *  Os_Hal_EndOfInterrupt()
 **********************************************************************************************************************/
/*! \fn           void Os_Hal_EndOfInterrupt(void)
 *  \brief        Signals the end of an interrput to the hardware.
 *  \details      --no details--
 *
 *  \context      OS_INTERNAL
 *
 *  \reentrant    FALSE
 *  \synchronous  TRUE
 *
 *  \pre          -
 **********************************************************************************************************************/
static inline void Os_Hal_EndOfInterrupt(void);


/***********************************************************************************************************************
 *  Os_Hal_GetSP()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetSP(void)                                                                                 /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_SetLP()
 **********************************************************************************************************************/
static inline void Os_Hal_SetLP(uint32 val)                                                                             /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(val);                                                                                           /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_GetLP()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetLP(void)                                                                                 /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_EndOfInterrupt()
 **********************************************************************************************************************/
static inline void Os_Hal_EndOfInterrupt(void)                                                                          /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
}


/***********************************************************************************************************************
 *  Os_Hal_CallFunc()
 **********************************************************************************************************************/
static inline void Os_Hal_CallFunc(const uint32 *current, const uint32 *next)                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(current);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(next);                                                                                          /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_CallFuncOnStack()
 **********************************************************************************************************************/
static inline void Os_Hal_CallFuncOnStack(const uint32 *current, const uint32 *next)                                    /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(current);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(next);                                                                                          /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_SetSPR()
 **********************************************************************************************************************/
static inline void Os_Hal_SetSPR(uint32 regID, uint32 groupID, uint32 value)                                            /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(regID);                                                                                         /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(groupID);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(value);                                                                                         /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_GetSPR()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetSPR(uint32 regID, uint32 groupID)                                                        /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(regID);                                                                                         /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(groupID);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_StartNextThread()
 **********************************************************************************************************************/
static inline void Os_Hal_StartNextThread(const uint32* current, const uint32* next)                                    /* PRQA S 3219, 3673 */ /* MD_Os_Hal_3219, MD_Os_Hal_3673_AssemblerStub */
{
  OS_IGNORE_UNREF_PARAM(current);                                                                                       /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  OS_IGNORE_UNREF_PARAM(next);                                                                                          /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_StartNext()
 **********************************************************************************************************************/
static inline void Os_Hal_StartNext(const uint32 *Next)                                                                 /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(Next);                                                                                          /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_CountLeadingZeros()
 **********************************************************************************************************************/
static inline  uint32 Os_Hal_CountLeadingZeros(uint32 bitfield)                                                         /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(bitfield);                                                                                      /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_GetDisableGlobal()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetDisableGlobal(void)                                                                      /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_GetDisableLevel()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetDisableLevel(uint32 Level)                                                               /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(Level);                                                                                         /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_SetLevel()
 **********************************************************************************************************************/
static inline void Os_Hal_SetLevel(uint32 Level)                                                                        /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  OS_IGNORE_UNREF_PARAM(Level);                                                                                         /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
}


/***********************************************************************************************************************
 *  Os_Hal_GetLevel()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_GetLevel(void)                                                                              /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  return 0UL;
}


/***********************************************************************************************************************
 *  Os_Hal_TryGetLock()
 **********************************************************************************************************************/
static inline uint32 Os_Hal_TryGetLock(volatile uint32 *addr)                                                           /* PRQA S 3219 */ /* MD_Os_Hal_3219 */
{
  (*addr) *= 2;                                                                                                         /* SBSW_OS_HAL_PWA_CALLER */
  return 0UL;
}




# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */  /* MD_MSR_19.1 */

#endif /* OS_HAL_COMPILER_GCCINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_StaticCodeAnalysis.h
 **********************************************************************************************************************/

