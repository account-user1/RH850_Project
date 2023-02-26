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
 *  \addtogroup Os_Hal_Os
 *  \{
 *
 *  \file       Os_Hal_Os.h
 *  \brief      HAL interfaces which are visible to the user.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Senol Cendere                 visces        Vector Informatik GmbH
 *  Benjamin Seifert              virbse        Vector Informatik GmbH
 *  Michael Kock                  vismkk        Vector Informatik GmbH
 *  Da He                         visdhe        Vector Informatik GmbH
 *  Stefano Simoncelli            virsso        Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2016-02-16  visces  -             Initial version
 *  01.00.01  2016-03-24  visces  -             Development version
 *  01.00.02  2016-04-25  visces  -             Development version
 *  01.00.03  2016-05-26  visces  -             Development version
 *  01.00.04  2016-06-22  visces  -             Development version
 *  01.00.05  2016-07-04  visces  -             QM Release
 *  01.00.06  2016-07-26  visces  -             Beta Release
 *  01.00.07  2016-08-01  visces  -             QM Release
 *                                              Fixed ESCAN00091248
 *  01.00.08  2016-08-24  visces  -             QM Release
 *                                              Fixed ESCAN00090971
 *                                              Fixed ESCAN00091490
 *                                              Fixed ESCAN00091503
 *  01.00.09  2016-09-08  visdhe  -             QM Release
 *                                FEAT-1931     Provide access to interrupt control register (Step2)
 *  01.00.10  2016-09-21  visces  -             QM Release
 *                                              Fixed ESCAN00091824
 *  01.01.00  2016-09-30  visces  -             QM Release
 *                                              Fixed ESCAN00092100
 *                                              Fixed ESCAN00091880
 *                                              Switch MPU in Os_Hal_CallFuncOnStack only for SC3 and SC4
 *  01.01.01  2016-10-28  vismkk                QM Release
 *                                              Added coverage justifications
 *  01.02.00  2016-11-04  virsso  WORKITEM9682  Added ReviewHelper justifications and countermeasures
 *                        virbse                Updated Generator to latest BSWMD version
 *  01.03.00  2016-11-28  visdhe  WORKITEM10645 Code Coverage Analysis
 *  01.04.00  2016-12-02  vismkk  WORKITEM11170 Extended naming convention for HAL context interface
 *                        virbse  WORKITEM11413 Reworked Os_Hal_DerivativeInt.h to use OS_CFG_DERIVATIVEGROUP_x defines
 *  01.05.00  2016-12-15  -       -             Internal improvements
 **********************************************************************************************************************/

#if !defined (OS_HAL_OS_H)                                                                                              /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_OS_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_OsInt.h"

/* Os kernel module dependencies */
# include "Os_Lcfg.h"

/* Os HAL dependencies */


/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
/* ----- Component version information ----- */
# define OS_HAL_SW_MAJOR_VERSION   (1u)
# define OS_HAL_SW_MINOR_VERSION   (5u)
# define OS_HAL_SW_PATCH_VERSION   (0u)

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

#endif /* OS_HAL_OS_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Os.h
 **********************************************************************************************************************/

