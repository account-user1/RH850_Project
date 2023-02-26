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
 * \addtogroup Os_PriorityQueue
 *
 * \{
 * \file
 * \brief   Provides the API declaration.
 * \details --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined (OS_PRIORITYQUEUE_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_PRIORITYQUEUE_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_PriorityQueueInt.h"

/* Os kernel module dependencies */
# include "Os_Counter.h"
# include "Os_Job.h"

/* Os HAL dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_PRIORITYQUEUE)
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

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_PriorityQueueTopGet()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE P2CONST(Os_JobConfigType, AUTOMATIC, OS_CODE), OS_CODE,
OS_ALWAYS_INLINE, Os_PriorityQueueTopGet,
(
  P2CONST(Os_PriorityQueueConfigType, AUTOMATIC, OS_CONST) PriorityQueue
))
{
  P2CONST(void, AUTOMATIC, OS_APPL_DATA) result;

  /* #10   If the queue is empty:*/
  if(OS_UNLIKELY(PriorityQueue->Dyn->QueueUsage == 0))
  {
    /* #20   Set the result to NULL_PTR. */
    result = NULL_PTR;
  }
  /* #30   Otherwise there is at least one element available. */
  else
  {
    /* #40   Set result to the root data pointer. */
    result = PriorityQueue->Queue[OS_PRIORITYQUEUE_ROOT_IDX].Data;
  }
  return result;
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_PRIORITYQUEUE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_PRIORITYQUEUEINT_H */

/* module specific MISRA deviations:
 *
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_PriorityQueue.h
 **********************************************************************************************************************/

