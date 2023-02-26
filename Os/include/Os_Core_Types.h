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
 * \ingroup Os_Kernel
 * \addtogroup Os_Core
 * \{
 * \file
 * \brief       OS internal data types for execution control of one or multiple cores.
 *  \details    --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_CORE_TYPES_H)                                                                                           /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_CORE_TYPES_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
# include "Std_Types.h"
# include "Os_Lcfg.h"
# include "OsInt.h"

#if !defined(OS_VCAST_INSTRUMENTATION_OS_CORE)
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
struct Os_CoreConfigType_Tag;

struct Os_CoreAsrType_Tag;
struct Os_CoreAsrConfigType_Tag;

struct Os_SystemConfigType_Tag;

/*! Dynamic status management information of a processor core. */
typedef struct Os_CoreStatusType_Tag Os_CoreStatusType;

/*! Dynamic status management information of an AUTOSAR core. */
typedef struct Os_CoreAsrStatusType_Tag Os_CoreAsrStatusType;

/*! Configuration information of a processor core. */
typedef struct Os_CoreConfigType_Tag Os_CoreConfigType;

/*! Dynamic management information of an AUTOSAR core. */
typedef struct Os_CoreAsrType_Tag Os_CoreAsrType;

/*! Configuration information of an AUTOSAR core. */
typedef struct Os_CoreAsrConfigType_Tag Os_CoreAsrConfigType;

/*! Configuration information of an OS system. */
typedef struct Os_SystemConfigType_Tag Os_SystemConfigType;

/*! ISR nesting counter. */
typedef uint16 Os_CoreIsrNestingCounterType;

/*! OS-Core physical identifier. */
typedef uint32 Os_CorePhysicalIdType;

/*! Function pointer type to call the StartOS behavior on a separate stack. */
typedef P2FUNC(void, OS_CODE, Os_CoreStartOsType)(AppModeType Mode);


/*! The type of barrier content. */
typedef uint32 Os_CoreBootBarrierContentType;

/*! Barrier to synchronize the multi-core booting process. */
typedef struct Os_CoreBootBarrierType_Tag Os_CoreBootBarrierType;


/*! Specifies whether an unhandled event was reported since start up or not.
 */
typedef enum
{
  /*! No exception reported since start up. */
  OS_UNHANDLEDEVENTREPORT_NOTAVAILABLE = 0,

  /*! Exception reported since start up. */
  OS_UNHANDLEDEVENTREPORT_AVAILABLE = 1
} Os_UnhandledEventReportType;

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/



/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/





#if !defined(OS_VCAST_INSTRUMENTATION_OS_CORE)
/*VCAST_DONT_INSTRUMENT_END*/
#endif

#endif /* OS_CORE_TYPES_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_Core_Types.h
 **********************************************************************************************************************/
