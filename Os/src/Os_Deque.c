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
 * \{
 *
 * \file
 * \brief       Contains the implementation of the Deque management.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */


#define OS_DEQUE_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */

/* Os module declarations */
#include "Os_Deque.h"

/* Os kernel module dependencies */

/* Os hal dependencies */


/***********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */


/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */


/* module specific MISRA deviations:
 */


/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_OS_DE_DEQUEIDXDECREMENT_001
 \DESCRIPTION    Os_DequeIdxDecrement is called with a pointer derived from a Dyn pointer. The Dyn pointer is derived
                 from an caller's Deque argument. The correctness of the Deque argument is ensured by precondition.
                 The compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRREAD_DYN_M]

\ID SBSW_OS_DE_DEQUE_FIFOWRITE_DATA_001
 \DESCRIPTION    Write access to the dynamic data of a deque's FifoWrite.Data element. The data array is indexed with
                 the ReadIdx derived from the Dyn element of the Deque's FifoRead.
 \COUNTERMEASURE \T TCASE-345814
                 \T TCASE-345817
                 \M [CM_OS_FIFOPTRREAD_DYN_M]
                 \M [CM_OS_FIFOPTRWRITE_DATA_M]

\ID SBSW_OS_DE_DEQUE_FIFOWRITE_DATA_002
 \DESCRIPTION    Write access to the dynamic data of a deque's FifoWrite.Data element. The data array is indexed with
                 a WriteIdx modified in a loop.
 \COUNTERMEASURE \T TCASE-345814
                 \T TCASE-345817
                 \M [CM_OS_FIFOPTRREAD_DYN_M]
                 \M [CM_OS_FIFOPTRWRITE_DATA_M]

\ID SBSW_OS_DE_DEQUE_FIFOWRITE_DYN_002
 \DESCRIPTION    Write access to the dynamic data of a deque's FifoWrite.Dyn element.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRWRITE_DYN_M]

SBSW_JUSTIFICATION_END */

/* START_COVERAGE_JUSTIFICATION
 *

\ID COV_OS_DEQUEUELIBFUNCT
   \ACCEPT XX
   \REASON This function is a library function which is not called currently. The risk of keeping the code is low
           as it is unit tested and code inspected.

END_COVERAGE_JUSTIFICATION */


/*
 */
/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Deque.c
 **********************************************************************************************************************/
