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
 * \{
 *
 * \file        Os_PriorityQueue_Types.h
 * \brief       Contains the static data type definitions of the priority queue.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_PRIORITYQUEUE_TYPES_H)                                                                                  /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_PRIORITYQUEUE_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */
# include "Os_Job_Types.h"


#if !defined(OS_VCAST_INSTRUMENTATION_OS_PRIORITYQUEUE)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
/*! Index of the root node */
# define  OS_PRIORITYQUEUE_ROOT_IDX              ((Os_PriorityQueueNodeIdxType)0)


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
/*! Defines the return codes of Os_PriorityQueueDelete */
typedef enum
{
  OS_PRIORITYQUEUEDELETE_OK,              /*!< Deletion succeeded. */
  OS_PRIORITYQUEUEDELETE_INEXISTENT       /*!< The node to be deleted does not exist. */
}Os_PriorityQueueDeleteResultType;


/*! Represents the index of an element in the queue.
 *  The most significant bit is reserved for overflow detection.
 *  It may not be used for node addressing. The valid range is from 0 .. (2^15)-1 */
typedef uint16_least   Os_PriorityQueueNodeIdxType;


/*! Represents a single node of a priority queue.  */
typedef struct
{
  P2CONST(Os_JobConfigType, AUTOMATIC, OS_APPL_DATA) Data;      /*!< A pointer to the managed data. */
} Os_PriorityQueueNodeType;


/*! The runtime data of a priority queue. */
typedef struct
{
  Os_PriorityQueueNodeIdxType QueueUsage;                       /*!< Number of queue nodes actually used. */
} Os_PriorityQueueType;


/*! The configuration data of a priority queue. */
typedef struct
{
  P2VAR(Os_PriorityQueueNodeType, AUTOMATIC, OS_CONST) Queue;   /*!< The array which represents the queue. */
  P2VAR(Os_PriorityQueueType, AUTOMATIC, OS_CONST) Dyn;         /*!< Points to the runtime data of the queue. */
  Os_PriorityQueueNodeIdxType QueueSize;                        /*!< The total number of available nodes. */
} Os_PriorityQueueConfigType;


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/



#if !defined(OS_VCAST_INSTRUMENTATION_OS_PRIORITYQUEUE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_PRIORITYQUEUE_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_PriorityQueue_Types.h
 **********************************************************************************************************************/
