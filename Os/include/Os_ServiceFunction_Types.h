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
 * \file
 * \brief       Forward declarations for service functions.
 * \details     --no details--
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_SERVICEFUNCTION_TYPES_H)                                                                                /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_SERVICEFUNCTION_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */

#if !defined(OS_VCAST_INSTRUMENTATION_OS_SERVICEFUNCTION)
/*VCAST_DONT_INSTRUMENT_START*/
#endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/*! End marker of linked list of service calls. */
#define OS_SERVICE_LIST_END                              ((Os_ServiceCallListType)NULL_PTR)

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

struct Os_ServiceCallType_Tag;
typedef struct Os_ServiceCallType_Tag Os_ServiceCallType;

/*! Linked list of service function calls. */
typedef P2VAR(Os_ServiceCallType, TYPEDEF, OS_VAR_NOINIT) Os_ServiceCallListType;



struct Os_ServiceConfigType_Tag;
typedef struct Os_ServiceConfigType_Tag Os_ServiceConfigType;

struct Os_ServiceTfConfigType_Tag;
typedef struct Os_ServiceTfConfigType_Tag Os_ServiceTfConfigType;

struct Os_ServiceNtfConfigType_Tag;
typedef struct Os_ServiceNtfConfigType_Tag Os_ServiceNtfConfigType;

struct Os_ServiceNtfCallType_Tag;
typedef struct Os_ServiceNtfCallType_Tag Os_ServiceNtfCallType;



struct Os_ServiceStackPoolConfigType_Tag;
typedef struct Os_ServiceStackPoolConfigType_Tag Os_ServiceStackPoolConfigType;

struct Os_ServiceStackPoolType_Tag;
typedef struct Os_ServiceStackPoolType_Tag Os_ServiceStackPoolType;

struct  Os_ServiceStackConfigType_Tag;
typedef struct  Os_ServiceStackConfigType_Tag  Os_ServiceStackConfigType;



#if !defined(OS_VCAST_INSTRUMENTATION_OS_SERVICEFUNCTION)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_SERVICEFUNCTION_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_ServiceFunction_Types.h
 **********************************************************************************************************************/
