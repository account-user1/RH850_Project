/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**
 * \addtogroup Os_Stack
 * \{
 *
 * \file
 * \brief       External interface to \ref Os_Stack.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_STACK_H)                                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_STACK_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Stack_Cfg.h"
# include "Os_StackInt.h"

/* Os kernel module dependencies */
# include "Os_Task.h"
# include "Os_Isr.h"
# include "Os_Core.h"
# include "Os_Error.h"

/* Os Hal dependencies */
# include "Os_Hal_Core.h"
# include "Os_Hal_Context.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_STACK)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

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
 *  Os_StackIsModuleEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_StackIsModuleEnabled, ( void ))
{
  return (Os_StdReturnType)(OS_CFG_STACKMODULE  == STD_ON);
}

/***********************************************************************************************************************
 *  Os_StackIsMeasurementEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_StackIsMeasurementEnabled, ( void ))
{
  return (Os_StdReturnType)(OS_CFG_STACKMEASUREMENT  == STD_ON);
}

/***********************************************************************************************************************
 *  Os_StackIsMonitoringEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE,                                                 /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_StackIsMonitoringEnabled, ( void ))
{
  return (Os_StdReturnType)(OS_CFG_STACKMONITORING  == STD_ON);
}

/***********************************************************************************************************************
 *  Os_StackInit()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_StackInit,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
))
{

  if(Os_StackIsModuleEnabled() != 0)
  {
    FUNC(void, OS_CODE) Os_StackInitInternal                                                                            /* PRQA S 3221 */ /* MD_Os_3221 */
    (P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack);

    Os_StackInitInternal(Stack);                                                                                        /* SBSW_OS_FC_PRECONDITION */
  }
}

/***********************************************************************************************************************
 *  Os_StackOverflowCheck()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_StackOverflowCheck,
(
  P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack
))
{
  /* #10 Report protection error if the stack's last element is not equal to the fill pattern. */
  if(Os_StackIsMonitoringEnabled() != 0)
  {
    P2VAR(Os_Hal_StackType, AUTOMATIC, OS_VAR_NOINIT) stackEnd;

    stackEnd = Os_Hal_StackEndGet(Stack->LowAddress, Stack->HighAddress);                                               /* SBSW_OS_ST_HAL_STACKENDGET_001 */
    if(OS_UNLIKELY(*(stackEnd) != OS_HAL_STACK_FILL_PATTERN))
    {
      /*! \note Reseting the stack fill pattern may lead to a second stack overflow:
       *  Sequence:
       *     1. A called function causes a non permanent overflow during runtime and overrides the stack's end address.
       *     2. When returning from the called function, the stack pointer is in a valid range again.
       *     3. A thread switch is performed, which performs a stack overflow check.
       *     4. The stack pointer is still in a valid range and the fill pattern at the end of the stack is repaired.
       *     5. Calling the protection hook handler causes a permanent stack overflow again and overrides the fill
       *        pattern.
       *     6. The thread switch into to protection hook triggers the stack check. The fill pattern is repaired again.
       *     7. The protection hook is called. As the overflow is permanent, the fill pattern is not damaged and
       *        the switch to the protection hook succeeds.
       *
       * If this solution is not sufficient, one of the following solutions may be used:
       *     1. If a stack overflow is detected, reset the stack pointer to the start address of the stack.
       *     2. Store in the stack object, that an overflow was detected. This flag is used to avoid recursive calls
       *        of Os_StackOverflowCheck().
       */
      *stackEnd = OS_HAL_STACK_FILL_PATTERN;                                                                            /* SBSW_OS_ST_HAL_STACKENDGET_002 */

      Os_ErrProtectionError(OS_STATUS_STACKFAULT);
    }
  }
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_STACK)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_STACK_H_ */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Stack.h
 **********************************************************************************************************************/
