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
 * \addtogroup Os_XSignalChannel
 *
 * \{
 *
 * \file
 * \brief       Contains the buffer interface.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_XSIGNALCHANNEL_H)                                                                                       /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_XSIGNALCHANNEL_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_XSignalChannelInt.h"

/* Os kernel module dependencies */
# include "Os_XSignal.h"
# include "Os_Common.h"
# include "Os_Error.h"

/* Os hal dependencies */
# include "Os_Hal_Compiler.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_XSIGNAL)
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
 *  Os_XSigChannelIdxIncrement
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelIdxIncrement,
(
  P2VAR(Os_XSigBufferIdxType volatile, AUTOMATIC, OS_APPL_DATA) Index,
  Os_XSigBufferIdxType Size
))
{
  Os_Assert((Os_StdReturnType)((*Index) < Size));

  /* #10  Increment and check for an overflow. */
  if(OS_UNLIKELY((*Index) == (Size - 1)))
  {
    (*Index) = 0;                                                                                                       /* SBSW_OS_PWA_PRECONDITION */
  }
  else
  {
    (*Index)++;                                                                                                         /* SBSW_OS_PWA_PRECONDITION */
  }
}

/***********************************************************************************************************************
 *  Channel Send Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_XSigChannelSendInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelSendInit,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  Os_XSigBufferIdxType comDataIdx;

  /* #10  Initialize all indices to zero. */
  Channel->Dyn->SendIdx = 0;                                                                                            /* SBSW_OS_XSIG_XSIGCHANNELSEND_001 */
  Channel->Dyn->ResultIdx = 0;                                                                                          /* SBSW_OS_XSIG_XSIGCHANNELSEND_001 */

  /* #20 Mark each buffer element as unused. */
  for(comDataIdx = 0; comDataIdx < Channel->BufferSize; ++comDataIdx)
  {
    Channel->Buffer[comDataIdx].SendData->Acknowledge = OS_XSIGSTATE_ACK;                                               /* SBSW_OS_XSIG_CHANNEL_SENDDATA_001 */
  }
}

/***********************************************************************************************************************
 *  Os_XSigChannelGetSendElement()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_XSigComDataConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_XSigChannelGetSendElement,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  P2CONST(Os_XSigComDataConfigType, AUTOMATIC, OS_CONST) comData;
  Os_XSigBufferIdxType nextSendIdx;

  comData = NULL_PTR;

  /* #10 Iterate, beginning with the first send element. */
  nextSendIdx = Channel->Dyn->SendIdx;
  Os_XSigChannelIdxIncrement(&nextSendIdx, Channel->BufferSize);                                                        /* SBSW_OS_FC_POINTER2LOCAL */

  /* #20 Iterate while there are further elements in the queue: */
  while(nextSendIdx != Channel->Dyn->ResultIdx)
  {
    /* #30 If the result of this element has already been handled by the receiver: */
    if(Channel->Buffer[Channel->Dyn->SendIdx].SendData->Acknowledge == OS_XSIGSTATE_ACK)
    {
      /* #40 Take the current send element and stop searching. */
      comData = &(Channel->Buffer[Channel->Dyn->SendIdx]);
      break;
    }

    /* #50 If the result is available on sender side, but wasn't handled: */
    if(Channel->Buffer[Channel->Dyn->SendIdx].SendData->Acknowledge == OS_XSIGSTATE_SYNC_NACK)                          /* COV_OS_XSIGCHANNELDIFFICULTTOREACH */
    {
      /* #60 Set the state to pending. */
      Channel->Buffer[Channel->Dyn->SendIdx].SendData->Acknowledge = OS_XSIGSTATE_SYNC_PENDING;                         /* SBSW_OS_XSIG_CHANNEL_SENDDATA_001 */
    }

    /* #70 Select the next element. */
    Channel->Dyn->SendIdx = nextSendIdx;                                                                                /* SBSW_OS_FC_POINTER2LOCAL */
    Os_XSigChannelIdxIncrement(&nextSendIdx, Channel->BufferSize);                                                      /* SBSW_OS_FC_POINTER2LOCAL */
  }

  return comData;
}

/***********************************************************************************************************************
 *  Os_XSigChannelSend()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelSend,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  Os_XSigChannelIdxIncrement(&(Channel->Dyn->SendIdx), Channel->BufferSize);                                            /* SBSW_OS_XSIG_XSIGCHANNELIDXINCREMENT_001 */
}

/***********************************************************************************************************************
 *  Os_XSigChannelGetResult()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_XSigComDataConfigType, AUTOMATIC, OS_CONST), OS_CODE, OS_ALWAYS_INLINE, Os_XSigChannelGetResult,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  Os_Assert((Os_StdReturnType)(Os_XSigChannelIsResultAvailable(Channel) != 0));                                         /* SBSW_OS_FC_PRECONDITION */

  /* #10  Return the next result element. */
  return &(Channel->Buffer[Channel->Dyn->ResultIdx]);
}

/***********************************************************************************************************************
 *  Os_XSigChannelFreeResult()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelFreeResult,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  /* #10 Increment the result index counter. */
  Os_XSigChannelIdxIncrement(&(Channel->Dyn->ResultIdx), Channel->BufferSize);                                          /* SBSW_OS_XSIG_XSIGCHANNELIDXINCREMENT_001 */
}

/***********************************************************************************************************************
 *  Os_XSigChannelIsResultAvailable()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_XSigChannelIsResultAvailable,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  /* #10 If the receive index does not equal the result index, further result elements are available. */
  return (Channel->Receive->ReceiveIdx != Channel->Dyn->ResultIdx);
}

/***********************************************************************************************************************
 *  Os_XSigChannelIsRequestHandled()
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
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_XSigChannelIsRequestHandled,
(
  P2CONST(Os_XSigChannelSendConfigType, AUTOMATIC, OS_APPL_DATA) Channel,
  P2CONST(Os_XSigComDataConfigType, AUTOMATIC, OS_CONST) ComData
))
{
  Os_StdReturnType result;
  Os_XSigBufferIdxType receiveIdx;
  Os_XSigBufferIdxType resultIdx;

  /* Ensure that the index of ComData is in range. */
  Os_Assert((Os_StdReturnType)(Channel->BufferSize > ComData->Idx));

  /* Ensure that ComData is a member of the given Channel. */
  Os_Assert((Os_StdReturnType)(&(Channel->Buffer[ComData->Idx]) == ComData));

  /* #10 Take a snapshot of the result and the receive indices. */
  receiveIdx = Channel->Receive->ReceiveIdx;
  resultIdx = Channel->Dyn->ResultIdx;

  /* #20 If the requested is marked as pending, it is available. */
  if(OS_UNLIKELY(ComData->SendData->Acknowledge == OS_XSIGSTATE_SYNC_PENDING))                                          /* COV_OS_NOFUNCCALL */
  {
    /* This case may occur, if the synchronous waiting loop is interrupted by a higher priority thread,
     * which sends a cross core request. */
    result = !0;
  }
  /* Note that the first check could be moved into one of the other cases, but Keep It Stupid Simple! */
  /* #30 If the buffer is empty return '0'. */
  else if(receiveIdx == resultIdx)
  {
    result = 0;
  }
  /* #40 In case that there was no wrap around of the receive counter, check that the ComDataIdx is within both. */
  else if(receiveIdx > resultIdx)
  {
    /* There was no wrap around of the receiveIdx. */
    result = (ComData->Idx >= resultIdx) && (ComData->Idx < receiveIdx);
  }
  /* #50 Otherwise test whether the ComDataIdx is not within both indices. */
  else
  {
    /* There was a wrap around of the receiveIdx. */
    result = (ComData->Idx >= resultIdx) || (ComData->Idx < receiveIdx);                                                /* COV_OS_NOFUNCCALL */
  }

  return result;
}

/***********************************************************************************************************************
 *  Channel Receive Functions
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  Os_XSigChannelReceiveInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelReceiveInit,
(
  P2CONST(Os_XSigChannelRecvConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  /* #10  Initialize all indices to zero. */
  Channel->Dyn->ReceiveIdx = 0;                                                                                         /* SBSW_OS_XSIG_XSIGCHANNELRECV_001 */
}

/***********************************************************************************************************************
 *  Os_XSigChannelGetReceiveElement()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE                                                                            /* PRQA S 3219 */ /* MD_Os_3219 */
P2CONST(Os_XSigComDataConfigType, AUTOMATIC, OS_VAR_NOINIT), OS_CODE, OS_ALWAYS_INLINE, Os_XSigChannelGetReceiveElement,
(
  P2CONST(Os_XSigChannelRecvConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  /* #10  Return the current receive buffer element. */
  return &(Channel->Buffer[Channel->Dyn->ReceiveIdx]);
}

/***********************************************************************************************************************
 *  Os_XSigChannelReply()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_3219 */
Os_XSigChannelReply,
(
  P2CONST(Os_XSigChannelRecvConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  /* #30  Increment the receive index counter. */
  Os_XSigChannelIdxIncrement(&(Channel->Dyn->ReceiveIdx), Channel->BufferSize);                                         /* SBSW_OS_XSIG_XSIGCHANNELIDXINCREMENT_002 */
}

/***********************************************************************************************************************
 *  Os_XSigChannelIsReceiveElementAvailable()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CONST,                                                /* PRQA S 3219 */ /* MD_Os_3219 */
OS_ALWAYS_INLINE, Os_XSigChannelIsReceiveElementAvailable,
(
  P2CONST(Os_XSigChannelRecvConfigType, AUTOMATIC, OS_APPL_DATA) Channel
))
{
  return (Channel->Dyn->ReceiveIdx != Channel->Send->SendIdx);
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_XSIGNAL)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_XSIGNALCHANNEL_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_XSignalChannel.h
 **********************************************************************************************************************/
