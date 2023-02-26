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
 * \{
 *
 * \file
 * \brief       Contains the implementation of the FifoPtr management.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */


#define OS_FIFOPTR_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */

/* Os module declarations */
#include "Os_FifoPtr.h"

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

\ID SBSW_OS_FFPTR_FIFOWRITE_DYN_001
 \DESCRIPTION    Write access to the dynamic data of a FifoPtr.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRWRITE_DYN_M]

\ID SBSW_OS_FFPTR_FIFOWRITE_DATA_001
 \DESCRIPTION    Write access to the data array of a FifoPtr element. The data array is indexed with
                 a WriteIdx, which is a member of the Fifo's Dyn object.
 \COUNTERMEASURE \T TCASE-345817
                 \M [CM_OS_FIFOPTRWRITE_DYN_M]
                 \M [CM_OS_FIFOPTRWRITE_DATA_M]

\ID SBSW_OS_FFPTR_FIFOIDXINCREMENT_001
 \DESCRIPTION    Os_FifoIdxIncrement is called with a pointer derived from a Dyn pointer. The Dyn pointer is derived
                 from an caller's Fifo argument. The correctness of the Fifo argument is ensured by precondition.
                 The compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRREAD_DYN_M]

\ID SBSW_OS_FFPTR_FIFOIDXINCREMENT_002
 \DESCRIPTION    Os_FifoIdxIncrement is called with a WriteIdx derived from a Dyn pointer. The Dyn pointer is derived
                 from an caller's Fifo argument. The correctness of the Fifo argument is ensured by precondition.
                 The compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRWRITE_DYN_M]

\ID SBSW_OS_FFPTR_FIFOEMPTYQUEUE_001
 \DESCRIPTION    Os_FifoEmptyQueue is called with a WriteIdx and a ReadIdx derived from a Dyn pointer. The Dyn pointer
                 is derived from an caller's Fifo argument. The correctness of the Fifo argument is ensured by
                 precondition. The compliance of the precondition is check during review.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRREAD_DYN_M]
                 \M [CM_OS_FIFOPTRWRITE_DYN_M]

\ID SBSW_OS_FFPTR_FIFOREAD_DYN_001
 \DESCRIPTION    Write access to the dynamic data of a FifoPtr.
 \COUNTERMEASURE \M [CM_OS_FIFOPTRREAD_DYN_M]

SBSW_JUSTIFICATION_END */

/*
\CM CM_OS_FIFOPTRREAD_DYN_M
      Verify that the Dyn pointer of each Os_FifoPtrReadConfigType object is a non NULL_PTR.

\CM CM_OS_FIFOPTRWRITE_DYN_M
      Verify that the Dyn pointer of each Os_FifoPtrWriteConfigType object is a non NULL_PTR.

\CM CM_OS_FIFOPTRWRITE_DATA_M
      Verify that
        1. the Data pointer of each Os_FifoPtrWriteConfigType object is a non NULL_PTR.
        2. the size of the Data array equals Fifo.Size,
        3. the corresponding Os_FifoPtrReadConfigType instance refers to the same Data array.

 */


/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_FifoPtr.c
 **********************************************************************************************************************/
