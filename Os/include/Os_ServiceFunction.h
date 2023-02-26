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
 * \addtogroup Os_ServiceFunction
 * \{
 *
 * \file
 * \brief       Service Function API.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_SERVICEFUNCTION_H)                                                                                      /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_SERVICEFUNCTION_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_ServiceFunctionInt.h"
# include "Os_ServiceFunction_Lcfg.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"
# include "Os_BitArray.h"
# include "Os_Application.h"
# include "Os_MemoryProtection.h"
# include "Os_Stack.h"

/* Os hal dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Context.h"

# if !defined(OS_VCAST_INSTRUMENTATION_OS_SERVICEFUNCTION)
/*VCAST_DONT_INSTRUMENT_START*/
# endif

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
 *  Os_ServiceNtfIsEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_ServiceNtfIsEnabled,
(
  void
))
{
   return (Os_StdReturnType)(OS_NONTRUSTEDFUNCTIONID_COUNT > 0);
}

/***********************************************************************************************************************
 *  Os_ServiceTfIsEnabled()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE, Os_ServiceTfIsEnabled,
(
  void
))
{
   return (Os_StdReturnType)(OS_TRUSTEDFUNCTIONID_COUNT > 0);
}

/***********************************************************************************************************************
 *  Os_ServiceCallsInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_ServiceCallsInit,
(
  P2VAR(Os_ServiceCallListType, AUTOMATIC, OS_VAR_NOINIT) ServiceCalls
))
{
  /* #10 Write list end marker to start of list. */
  (*ServiceCalls) = OS_SERVICE_LIST_END;                                                                                /* SBSW_OS_PWA_PRECONDITION */
}

/***********************************************************************************************************************
*  Os_ServiceInit()
***********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_ServiceInit,
(
  P2CONST(Os_ServiceConfigType, AUTOMATIC, OS_CONST) Service
))
{

  Os_StdReturnType tfEnabled = Os_ServiceTfIsEnabled();
  Os_StdReturnType ntfEnabled = Os_ServiceNtfIsEnabled();

  /* #10 If Service is enable: */
  if((ntfEnabled | tfEnabled) != 0)
  {
    FUNC(void, OS_CODE) Os_ServiceInitInternal(P2CONST(Os_ServiceConfigType, AUTOMATIC, OS_CONST) Service);             /* PRQA S 3221 */ /* MD_Os_3221 */

    /* #20 Redirect to the internal initialization. */
    Os_ServiceInitInternal(Service);                                                                                    /* SBSW_OS_FC_PRECONDITION */
  }
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if !defined(OS_VCAST_INSTRUMENTATION_OS_SERVICEFUNCTION)
/*VCAST_DONT_INSTRUMENT_END*/
# endif

#endif /* OS_SERVICEFUNCTION_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_ServiceFunction.h
 **********************************************************************************************************************/
