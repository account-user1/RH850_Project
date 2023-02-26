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
 *  \ingroup      Os_Hal
 *  \defgroup     Os_Hal_Derivative HAL Derivative
 *  \brief        Defines derivative specific functionality.
 *  \details
 *  This modules decides which HAL specific sub components are needed to implement HAL functionality on a specific
 *  derivative.
 *
 *  \{
 *
 *  \file         Os_Hal_DerivativeInt.h
 *  \brief        Selects a derivative specific header and includes it.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined(OS_HAL_DERIVATIVEINT_H)                                                                                    /* PRQA S 0883 EOF */ /* MD_Os_Hal_0883 */
# define OS_HAL_DERIVATIVEINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_Derivative_Types.h"

/* Os kernel module declarations */

/* Os HAL dependencies */
# if defined(OS_CFG_DERIVATIVEGROUP_RH850C1H)                                                                           /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
#  include "Os_Hal_Derivative_RH850C1HInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850C1M)
#  include "Os_Hal_Derivative_RH850C1MInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850D1X)
#  include "Os_Hal_Derivative_RH850D1xInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850E1XFCC2)
#  include "Os_Hal_Derivative_RH850E1xFCC2Int.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850E1X)
#  include "Os_Hal_Derivative_RH850E1xInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850F1H)
#  include "Os_Hal_Derivative_RH850F1HInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850F1L)
#  include "Os_Hal_Derivative_RH850F1LInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850F1X)
#  include "Os_Hal_Derivative_RH850F1xInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850P1HC)
#  include "Os_Hal_Derivative_RH850P1HCInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850P1MC)
#  include "Os_Hal_Derivative_RH850P1MCInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850P1M)
#  include "Os_Hal_Derivative_RH850P1MInt.h"
# elif defined(OS_CFG_DERIVATIVEGROUP_RH850R1L)
#  include "Os_Hal_Derivative_RH850R1LInt.h"
# else
#  error "The selected derivative is not supported!"
# endif /* OS_CFG_DERIVATIVEGROUP_<> */

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


#endif /* OS_HAL_DERIVATIVEINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_DerivativeInt.h
 **********************************************************************************************************************/

