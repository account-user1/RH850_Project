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
 * \addtogroup Os_Deque
 *
 * \{
 *
 * \file
 * \brief         Contains the deque definition.
 * \details       --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_DEQUE_H)                                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_DEQUE_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */
# include "Os_DequeInt.h"

/* Os kernel module dependencies */
# include "Os_Error.h"
# include "Os_FifoPtr.h"
# include "Os_Common.h"

/* Os Hal dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_DEQUE)
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
 *  Os_DequeIdxIncrement()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* COV_OS_DEQUEUELIBFUNCT *//* PRQA S 3219 */ /* MD_Os_3219 */
Os_DequeIdxIncrement,
(
  P2VAR(Os_FifoIdxType, AUTOMATIC, OS_APPL_DATA) Index,
  Os_FifoIdxType Size
))                                                                                                                      /* COV_OS_DEQUEUELIBFUNCT */
{
  Os_FifoIdxIncrement(Index, Size);                                                                                     /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeIdxDecrement()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_DequeIdxDecrement,
(
  P2VAR(Os_FifoIdxType, AUTOMATIC, OS_APPL_DATA) Index,
  Os_FifoIdxType Size
))
{
  /* #10  Prevent an underflow and decrement. */
  if(OS_UNLIKELY((*Index) == 0))
  {
    (*Index) = Size;                                                                                                    /* SBSW_OS_PWA_PRECONDITION */
  }

  (*Index)--;                                                                                                           /* SBSW_OS_PWA_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_DequeInit,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
))
{

  /* #10  Initialize the FIFO objects. */
  Os_FifoPtrReadInit(&(Deque->FifoRead));                                                                               /* SBSW_OS_FC_PRECONDITION */
  Os_FifoPtrWriteInit(&(Deque->FifoWrite));                                                                             /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeDeleteTop()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void,                                                                      /* PRQA S 3219 */ /* MD_Os_3219 */
OS_CODE, OS_ALWAYS_INLINE, Os_DequeDeleteTop,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
))
{
  Os_FifoPtrDeleteTop(&(Deque->FifoRead));                                                                              /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeEnqueue()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_DequeEnqueue,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
))
{
  return Os_FifoPtrEnqueue(&(Deque->FifoWrite), Value);                                                                 /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequePrepend()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_DequePrepend,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
))
{
  Os_FifoWriteResultType result;

  result = OS_FIFOWRITERESULT_BUFFEROVERFLOW;

  /* #10  Perform checks. */
  if(OS_LIKELY(Os_DequeIsFull(Deque) == 0))                                                                             /* SBSW_OS_FC_PRECONDITION */
  {
    /* #20  Decrement the read index counter. */
    Os_DequeIdxDecrement(&(Deque->FifoRead.Dyn->ReadIdx), Deque->FifoRead.Size);                                        /* SBSW_OS_DE_DEQUEIDXDECREMENT_001 */

    /* #30  Write the value. */
    Deque->FifoWrite.Data[Deque->FifoRead.Dyn->ReadIdx].Value = Value;                                                  /* SBSW_OS_DE_DEQUE_FIFOWRITE_DATA_001 */

    result = OS_FIFOWRITERESULT_OK;
  }

  return result;
}

/***********************************************************************************************************************
 *  Os_DequePeek()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(void, AUTOMATIC, OS_CODE),                                         /* PRQA S 3219 */ /* MD_Os_3219 */
AUTOMATIC, OS_ALWAYS_INLINE, Os_DequePeek,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
))
{
  return Os_FifoPtrPeek(&(Deque->FifoRead));                                                                            /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeDelete()
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
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_DequeDelete,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
))
{
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_CONST) fifoRead;
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_CONST) fifoWrite;
  Os_FifoIdxType readIdx;
  Os_FifoIdxType writeIdx;

  fifoRead = &(Deque->FifoRead);
  fifoWrite = &(Deque->FifoWrite);

  /* #10 Initialize the read and write index with the front index. */
  readIdx = fifoRead->Dyn->ReadIdx;
  writeIdx = readIdx;

  /* #20 While the read index is not equal to the back index: */
  while(readIdx != fifoWrite->Dyn->WriteIdx)
  {
    /* #30 If the element at the read index position shall not be deleted: */
    if(OS_LIKELY(Value != fifoWrite->Data[readIdx].Value))
    {
      /* #40 Copy the read element to the write element. */
      fifoWrite->Data[writeIdx].Value = fifoWrite->Data[readIdx].Value;                                                 /* SBSW_OS_DE_DEQUE_FIFOWRITE_DATA_001 */
      /* #50 Increment the write index. */
      Os_FifoIdxIncrement(&writeIdx, fifoWrite->Size);                                                                  /* SBSW_OS_FC_POINTER2LOCAL */
    }

    /* #60 Increment the read index. */
    Os_FifoIdxIncrement(&readIdx, fifoWrite->Size);                                                                     /* SBSW_OS_FC_POINTER2LOCAL */
  }
  fifoWrite->Dyn->WriteIdx = writeIdx;                                                                                  /* SBSW_OS_DE_DEQUE_FIFOWRITE_DYN_002 */
}

/***********************************************************************************************************************
 *  Os_DequeIsEmpty()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_DequeIsEmpty,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
))
{
  return Os_FifoPtrIsEmpty(&(Deque->FifoRead));                                                                         /* SBSW_OS_FC_PRECONDITION */
}

/***********************************************************************************************************************
 *  Os_DequeIsFull()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_DequeIsFull,
(
  P2CONST(Os_DequeConfigType, AUTOMATIC, OS_APPL_DATA) Deque
))
{
  return Os_FifoPtrIsFull(&(Deque->FifoWrite));                                                                         /* SBSW_OS_FC_PRECONDITION */
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_DEQUE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_DEQUE_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_DequeInt.h
 **********************************************************************************************************************/

