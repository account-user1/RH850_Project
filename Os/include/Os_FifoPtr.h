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
 * \addtogroup Os_FifoPtr
 *
 * \{
 *
 * \file          Os_FifoPtr.h
 * \brief         Contains the FIFO interface implementation.
 * \details       --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_FIFOPTR_H)                                                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_FIFOPTR_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Fifo.h"
# include "Os_FifoPtrInt.h"

/* Os kernel module dependencies */
# include "Os_Error.h"
# include "Os_Common.h"

/* Os Hal dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_FIFOPTR)
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
 *  FIFO Write Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_FifoPtrWriteInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_FifoPtrWriteInit,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  /* #10  Initialize all indices to zero. */
  Fifo->Dyn->WriteIdx = 0;                                                                                              /* SBSW_OS_FFPTR_FIFOWRITE_DYN_001 */
}

/***********************************************************************************************************************
 *  Os_FifoPtrEnqueue()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_FifoWriteResultType, OS_CODE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_FifoPtrEnqueue,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo,
  P2CONST(void, TYPEDEF, AUTOMATIC) Value
))
{
  Os_FifoWriteResultType result = OS_FIFOWRITERESULT_BUFFEROVERFLOW;

  /* #10 Perform checks. */
  if(OS_LIKELY(Os_FifoPtrIsFull(Fifo) == 0))                                                                            /* SBSW_OS_FC_PRECONDITION */
  {
    /* Hint: As a foreign core may read the new Value concurrently, perform the write access before the writeIdx is
     * updated. */
    /* #20 Write the value. */
    Fifo->Data[Fifo->Dyn->WriteIdx].Value = Value;                                                                      /* SBSW_OS_FFPTR_FIFOWRITE_DATA_001 */

    /* #30 Increment the write index counter. */
    Os_FifoIdxIncrement(&(Fifo->Dyn->WriteIdx), Fifo->Size);                                                            /* SBSW_OS_FFPTR_FIFOIDXINCREMENT_002 */
    result = OS_FIFOWRITERESULT_OK;
  }

  return result;
}

/***********************************************************************************************************************
 *  Os_FifoPtrIsFull()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_FifoPtrIsFull,
(
  P2CONST(Os_FifoPtrWriteConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  /* #10  Use base class method. */
  return Os_FifoIsFull(Fifo->Dyn->WriteIdx, Fifo->Read->ReadIdx, Fifo->Size);
}

/***********************************************************************************************************************
 *  FIFO Read Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_FifoPtrReadInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_FifoPtrReadInit,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  /* #10  Initialize all indices to zero. */
  Fifo->Dyn->ReadIdx = 0;                                                                                               /* SBSW_OS_FFPTR_FIFOREAD_DYN_001 */
}

/***********************************************************************************************************************
 *  Os_FifoPtrDeleteTop()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void,                                                                      /* PRQA S 3219 */ /* MD_Os_3219 */
OS_CODE, OS_ALWAYS_INLINE, Os_FifoPtrDeleteTop,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  /* #10 Perform checks. */
  if(OS_LIKELY(Os_FifoPtrIsEmpty(Fifo) == 0))                                                                           /* SBSW_OS_FC_PRECONDITION */
  {
    /* #20 Increment the front index counter. */
    Os_FifoIdxIncrement(&(Fifo->Dyn->ReadIdx), Fifo->Size);                                                             /* SBSW_OS_FFPTR_FIFOIDXINCREMENT_001 */
  }
}

/***********************************************************************************************************************
 *  Os_FifoPtrPeek()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE P2CONST(void, AUTOMATIC, OS_CODE),                                         /* PRQA S 3219 */ /* MD_Os_3219 */
AUTOMATIC, OS_ALWAYS_INLINE, Os_FifoPtrPeek,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  P2CONST(void, AUTOMATIC, OS_APPL_DATA) result;

  /* #10  Perform checks. */
  if(OS_UNLIKELY(Os_FifoPtrIsEmpty(Fifo) != 0))                                                                         /* COV_OS_INVSTATE *//* SBSW_OS_FC_PRECONDITION */
  {
    result = NULL_PTR;
  }
  else
  {
    /* #20  Read the result value. */
    result = Fifo->Data[Fifo->Dyn->ReadIdx].Value;
  }

  return result;
}

/***********************************************************************************************************************
 *  Os_FifoPtrIsEmpty()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_FifoPtrIsEmpty,
(
  P2CONST(Os_FifoPtrReadConfigType, AUTOMATIC, OS_APPL_DATA) Fifo
))
{
  /* #10  Use base class method. */
  return Os_FifoIsEmpty(Fifo->Write->WriteIdx, Fifo->Dyn->ReadIdx);
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_FIFOPTR)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_FIFOPTR_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_FifoPtr.h
 **********************************************************************************************************************/

