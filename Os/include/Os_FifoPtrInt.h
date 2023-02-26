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
 * \ingroup     Os_Fifo
 * \defgroup    Os_FifoPtr Fifo Ptr
 * \brief       Queue data structure for void pointer types.
 * \details
 * See \ref Os_Fifo.
 *
 * \{
 *
 * \file          Os_FifoPtrInt.h
 * \brief         Contains the FIFO interface definition.
 * \details       --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_FIFOPTRINT_H)                                                                                           /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_FIFOPTRINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os kernel module dependencies */
# include "Os_CommonInt.h"
# include "Os_FifoInt.h"

/* Os Hal dependencies */
# include "Os_Hal_CompilerInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_FIFOPTR)
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
struct Os_FifoPtrWriteConfigType_Tag;
typedef struct Os_FifoPtrWriteConfigType_Tag Os_FifoPtrWriteConfigType;

struct Os_FifoPtrReadConfigType_Tag;
typedef struct Os_FifoPtrReadConfigType_Tag Os_FifoPtrReadConfigType;


/*! Represents a single element of a FIFO. */
typedef struct
{
  P2CONST(void, AUTOMATIC, OS_APPL_DATA) Value;                   /*!< A pointer to the managed value. */
}Os_FifoPtrNodeType;


/*! Defines the runtime data of a FIFO. */
typedef struct
{
  Os_FifoIdxType WriteIdx;                                        /*!< Position of the next write to the queue. */
}Os_FifoPtrWriteType;


/*! Defines the runtime data of a FIFO. */
typedef struct
{
  Os_FifoIdxType ReadIdx;                                         /*!< Position of the last read from the queue. */
}Os_FifoPtrReadType;


/*! Defines the configuration data of a Fifo. */
struct Os_FifoPtrWriteConfigType_Tag
{
  P2VAR(Os_FifoPtrWriteType, AUTOMATIC, OS_VAR_NOINIT) Dyn;       /*!< Pointer to the runtime write data. */
  P2CONST(Os_FifoPtrReadType, AUTOMATIC, OS_VAR_NOINIT) Read;     /*!< Pointer to the runtime read data. */
  P2VAR(Os_FifoPtrNodeType, AUTOMATIC, OS_APPL_DATA) Data;        /*!< Pointer to the queue array. */
  Os_FifoIdxType Size;                                            /*!< The queue size. */
};


/*! Defines the configuration data of a Fifo. */
struct Os_FifoPtrReadConfigType_Tag
{
  P2VAR(Os_FifoPtrReadType, AUTOMATIC, OS_VAR_NOINIT) Dyn;          /*!< Pointer to the runtime read data. */
  P2CONST(Os_FifoPtrWriteType, AUTOMATIC, OS_VAR_NOINIT) Write;     /*!< Pointer to the runtime write data. */
  P2CONST(Os_FifoPtrNodeType, AUTOMATIC, OS_APPL_DATA) Data;        /*!< Pointer to the queue array. */
  Os_FifoIdxType Size;                                              /*!< The queue size. */
};


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */
/***********************************************************************************************************************
 *  FIFO Write Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_FifoPtrWriteInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the write part of a queue.
 *  \details        This function may also be used in combination with Os_FifoPtrReadInit() to clear queue.
 *                  This function is called in Init-Step3 and Init-Step4 in order to handle the situation that
 *                  Init-Step3 is optional.
 *
 *  \param[in,out]  Fifo The FIFO instance.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_FifoPtrWriteInit,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  Os_FifoPtrEnqueue()
 **********************************************************************************************************************/
/*! \brief          Writes an element at the next write position of the queue.
 *  \details        --no details--
 *
 *  \param[in,out]  Fifo    The FIFO instance.
 *  \param[in]      Value   The value to be enqueued.
 *
 *  \retval         OS_FIFOWRITERESULT_OK              If writing succeeded.
 *  \retval         OS_FIFOWRITERESULT_BUFFEROVERFLOW  If the queue is already full.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE for different FIFOs
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,
OS_ALWAYS_INLINE, Os_FifoPtrEnqueue,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
));


/***********************************************************************************************************************
 *  Os_FifoPtrIsFull()
 **********************************************************************************************************************/
/*! \brief          Returns whether a queue is full.
 *  \details        --no details--
 *
 *  \param[in]      Fifo  The FIFO to query.
 *
 *  \retval         !0    If the queue is full.
 *  \retval         0     If the queue has one used element at least.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST, OS_ALWAYS_INLINE,
Os_FifoPtrIsFull,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  FIFO Read Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_FifoPtrReadInit()
 **********************************************************************************************************************/
/*! \brief          Initialize the read part of a queue.
 *  \details        This function may also be used in combination with Os_FifoPtrWriteInit() to clear the queue.
 *                  This function is called in Init-Step3 and Init-Step4 in order to handle the situation that
 *                  Init-Step3 is optional.
 *
 *  \param[in,out]  Fifo    The FIFO instance.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE for different FIFOs
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_FifoPtrReadInit,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  Os_FifoPtrDeleteTop()
 **********************************************************************************************************************/
/*! \brief          Removes the eldest element in the queue if queue is not empty.
 *  \details        --no details--
 *
 *  \param[in,out]  Fifo    The FIFO instance.
 *
 *  \context        OS_INTERNAL
 *
 *  \reentrant      TRUE for different FIFOs
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_FifoPtrDeleteTop,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  Os_FifoPtrPeek()
 **********************************************************************************************************************/
/*! \brief          Returns the eldest element in the queue without removing it.
 *  \details        --no details--
 *
 *  \param[in,out]  Fifo The FIFO instance.
 *
 *  \return         Returns the value pointer to the eldest element.
 *  \retval         NULL_PTR  If the queue is empty.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE for different FIFOs
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE P2CONST(void, AUTOMATIC, OS_CODE), AUTOMATIC,
OS_ALWAYS_INLINE, Os_FifoPtrPeek,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  Os_FifoPtrIsEmpty()
 **********************************************************************************************************************/
/*! \brief          Returns whether a queue is empty.
 *  \details        --no details--
 *
 *  \param[in]      Fifo The FIFO to query.
 *
 *  \retval         !0    If the queue is empty.
 *  \retval         0     If the queue contains one element at least.
 *
 *  \context        ANY
 *
 *  \reentrant      TRUE
 *  \synchronous    TRUE
 *
 *  \pre            Given object pointer(s) are valid.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST, OS_ALWAYS_INLINE,
Os_FifoPtrIsEmpty,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
));


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_FIFOPTR)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_FIFOPTRINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_FifoPtrInt.h
 **********************************************************************************************************************/

