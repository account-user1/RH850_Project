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
 * \addtogroup Os_MemoryProtection
 * \{
 *
 * \file
 * \brief       Implementation of memory protection functionality.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777, 0779, 0810, 0828, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_MSR_1.1_810, MD_MSR_1.1_828, MD_MSR_1.1_857 */

#define OS_MEMORYPROTECTION_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_MemoryProtection.h"

/* Os kernel module dependencies */
#include "Os_Error.h"

/* Os hal dependencies */
#include "Os_Hal_Compiler.h"

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

/***********************************************************************************************************************
 *  Os_MemFault()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(void, OS_CODE, OS_NORETURN, Os_MemFault, (void))
{
  Os_IntDisable();

  /* #10 Report protection error. */
  Os_ErrProtectionError(OS_STATUS_PROTECTION_MEMORY);

  /* We never return. */
  Os_ErrKernelPanic();
}

#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* module specific MISRA deviations:
 */

/* SBSW_JUSTIFICATION_BEGIN
\ID SBSW_OS_MP_Hal_MPSYSTEMINIT_001
 \DESCRIPTION    Os_Hal_MpSystemInit is called with a HwConfig derived from the caller argument SystemConfig.
                 Precondition ensures that the SystemConfig pointer is valid. The compliance of the precondition is
                 check during review.
 \COUNTERMEASURE \M [CM_OS_MPSYSTEM_HWCONFIG_M]

\ID SBSW_OS_MP_Hal_MPCOREINIT_001
 \DESCRIPTION    Os_Hal_MpCoreInit is called with a HwConfig derived from the caller argument CoreConfig.
                 Precondition ensures that the CoreConfig pointer is valid. The compliance of the precondition is
                 check during review.
 \COUNTERMEASURE \M [CM_OS_MPCORE_HWCONFIG_M]

\ID SBSW_OS_MP_Hal_MPAPPSWITCH_001
 \DESCRIPTION    Os_Hal_MpAppSwitch is called with a AppAccessRights derived from the caller argument.
                 Precondition ensures that the pointer is valid. The compliance of the precondition is
                 check during review.
 \COUNTERMEASURE \M [CM_OS_MPACCESSRIGHTS_APPACCESSRIGHTS_M]

\ID SBSW_OS_MP_Hal_MPATHREADSWITCH_001
 \DESCRIPTION    Os_Hal_MpThreadSwitch is called with a ThreadAccessRights derived from the caller argument.
                 Precondition ensures that the pointer is valid. The compliance of the precondition is
                 check during review.
 \COUNTERMEASURE \M [CM_OS_MPACCESSRIGHTS_THREADACCESSRIGHTS_M]

 SBSW_JUSTIFICATION_END */

/*
\CM CM_OS_MPSYSTEM_HWCONFIG_M
      Verify that the HwConfig reference in each Os_MpSystemConfigType instance is a non NULL_PTR.

\CM CM_OS_MPCORE_HWCONFIG_M
      Verify that the HwConfig reference in each Os_MpCoreConfigType instance is a non NULL_PTR.

\CM CM_OS_MPACCESSRIGHTS_APPACCESSRIGHTS_M
      Verify that the AppAccessRights reference in each Os_MpAccessRightsType instance is a non NULL_PTR.

\CM CM_OS_MPACCESSRIGHTS_THREADACCESSRIGHTS_M
      Verify that the ThreadAccessRights reference in each Os_MpAccessRightsType instance is a non NULL_PTR.

 */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_MemoryProtection.c
 **********************************************************************************************************************/
