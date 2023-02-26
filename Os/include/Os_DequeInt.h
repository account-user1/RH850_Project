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
 * \defgroup    Os_Deque Deque
 * \brief       Double-ended queue data structure.
 * \details
 * Provides a double-ended queue (dequeue or deque). A deque is an abstract data type that generalizes a queue,
 * for which elements can be added to or removed from either the front (head) or back (tail).
 *
 * The queue is based on a \ref Os_FifoPtr.
 *
 * ![Data Structure](CmpPrimitivesDequeue.png)
 *
 * \see [Deque](http://en.wikipedia.org/wiki/Double-ended_queue)
 * \see [Circular buffer](http://en.wikipedia.org/wiki/Circular_buffer)
 *
 * \{
 *
 * \file          Os_DequeInt.h
 * \brief         Contains the deque interface definition.
 * \details       --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_DEQUEINT_H)                                                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_DEQUEINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os kernel module dependencies */
# include "Os_Common_Types.h"
# include "Os_FifoPtrInt.h"

/* Os Hal dependencies */
# include "Os_Hal_CompilerInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_DEQUE)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/*! Type cast from Os_DequeType to Os_FifoPtrReadType by use of base element addressing. */
#define OS_DEQUE_CASTDYN_DEQUE_2_FIFOPTRREAD(deque)    (&((deque).FifoRead))                                            /* PRQA S 3453 */ /* MD_MSR_19.7 */


/*! Type cast from Os_DequeType to Os_FifoPtrReadType by use of base element addressing. */
#define OS_DEQUE_CASTDYN_DEQUE_2_FIFOPTRWRITE(deque)   (&((deque).FifoWrite))                                           /* PRQA S 3453 */ /* MD_MSR_19.7 */


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
/*! Defines the configuration data of a Deque. */
typedef struct
{
  /*! The read part of a FIFO queue. */
  Os_FifoPtrReadType FifoRead;

  /*! The write part of a FIFO queue. */
  Os_FifoPtrWriteType FifoWrite;
}Os_DequeType;


/*! Defines the configuration data of a Deque. */
typedef struct
{
  /*! \brief    The read part of a FIFO queue.
   *  \details  As read accesses are expected to be more frequent, FifoRead comes first. */
  Os_FifoPtrReadConfigType FifoRead;

  /*! The write part of a FIFO queue. */
  Os_FifoPtrWriteConfigType FifoWrite;
}Os_DequeConfigType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


/***********************************************************************************************************************
 *  Os_DequeIdxIncrement()
 **********************************************************************************************************************/
/*! \brief          Increments a queue index with respect to the queue size.
 *  \details        --no details--
 *
 *  \param[in,out]  Index The index to be incremented.
 *  \param[in]      Size  The size of the queue.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_DequeIdxIncrement,
(
  P2VAR(Os_FifoIdxType, AUTOMATIC, OS_APPL_DATA) Index,
  Os_FifoIdxType Size
));


/***********************************************************************************************************************
 *  Os_DequeIdxDecrement()
 **********************************************************************************************************************/
/*! \brief          Decrements a queue index with respect to the queue size.
 *  \details        --no details--
 *
 *  \param[in,out]  Index The index to be decremented.
 *  \param[in]      Size  The size of the queue.
 *
 *  \context        OS_INTERANL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_DequeIdxDecrement,
(
  P2VAR(Os_FifoIdxType, AUTOMATIC, OS_APPL_DATA) Index,
  Os_FifoIdxType Size
));


/***********************************************************************************************************************
 *  Os_DequeInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the queue. This function may also be used to clear the queue.
 *  \details        This function is called in Init-Step3 and Init-Step4 in order to handle the situation that
 *                  Init-Step3 is optional.
 *
 *  \param[in,out]  Deque The deque instance.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_DequeInit,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
));


/***********************************************************************************************************************
 *  Os_DequeDeleteTop()
 **********************************************************************************************************************/
/*! \brief          Removes the eldest element in the queue if queue is not empty.
 *  \details        --no details--
 *
 *  \param[in,out]  Deque The deque instance.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE,
OS_ALWAYS_INLINE, Os_DequeDeleteTop,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
));


/***********************************************************************************************************************
 *  Os_DequeEnqueue()
 **********************************************************************************************************************/
/*! \brief          Writes an element at the back position of the queue.
 *  \details        --no details--
 *
 *  \param[in,out]  Deque The deque instance.
 *  \param[in]      Value The value to be added.
 *
 *  \retval         OS_FIFOWRITERESULT_OK              If writing succeeded.
 *  \retval         OS_FIFOWRITERESULT_BUFFEROVERFLOW  If the queue is already full.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,
OS_ALWAYS_INLINE, Os_DequeEnqueue,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
));


/***********************************************************************************************************************
 *  Os_DequePrepend()
 **********************************************************************************************************************/
/*! \brief          Writes an element at the front position of the queue.
 *  \details        --no details--
 *
 *  \param[in,out]  Deque The deque instance.
 *  \param[in]      Value The value to be added.
 *
 *  \retval         OS_FIFOWRITERESULT_OK              If writing succeeded.
 *  \retval         OS_FIFOWRITERESULT_BUFFEROVERFLOW  If the queue is already full.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,
OS_ALWAYS_INLINE, Os_DequePrepend,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
));


/***********************************************************************************************************************
 *  Os_DequePeek()
 **********************************************************************************************************************/
/*! \brief          Returns the front element without removing it.
 *  \details      --no details--
 *
 *  \param[in,out]  Deque The deque instance.
 *
 *  \return         Returns the value pointer.
 *
 *  \retval         NULL_PTR  If the queue is empty.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(void, AUTOMATIC, OS_CODE), AUTOMATIC,
OS_ALWAYS_INLINE, Os_DequePeek,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
));


/***********************************************************************************************************************
 *  Os_DequeDelete()
 **********************************************************************************************************************/
/*! \brief          Deletes all elements with the given Value pointer.
 *  \details        --no details--
 *
 *  \param[in,out]  Deque The deque instance.
 *  \param[in]      Value The value to be removed.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different queues.
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_DequeDelete,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
));


/***********************************************************************************************************************
 *  Os_DequeIsEmpty()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given queue is empty.
 *  \details        --no details--
 *
 *  \param[in]      Deque The deque to query.
 *
 *  \retval         !0    If the queue is empty.
 *  \retval         0     If the queue contains one element at least.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST, OS_ALWAYS_INLINE,
Os_DequeIsEmpty,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
));


/***********************************************************************************************************************
 *  Os_DequeIsFull()
 **********************************************************************************************************************/
/*! \brief          Returns whether the given queue is full.
 *  \details        --no details--
 *
 *  \param[in]      Deque The deque to query.
 *
 *  \retval         !0    If the queue is full.
 *  \retval         0     If one or more elements can be added until the queue is full.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 *  \pre            Concurrent access to given object is prevented by caller.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST, OS_ALWAYS_INLINE,
Os_DequeIsFull,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
));


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/



# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_DEQUE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_DEQUEINT_H */


/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_DequeInt.h
 **********************************************************************************************************************/

