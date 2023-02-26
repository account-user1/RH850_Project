/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_FordHwTqCmdOvrlLimr_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordHwTqCmdOvrlLimr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWTQCMDOVRLLIMR_TYPE_H
# define _RTE_FORDHWTQCMDOVRLLIMR_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_PASSIVE
#   define Cx0_PASSIVE (0U)
#  endif

#  ifndef Cx3_ACTIVE
#   define Cx3_ACTIVE (3U)
#  endif

#  ifndef Cx5_LOCKED
#   define Cx5_LOCKED (5U)
#  endif

#  ifndef Cx99_DONT_CARE
#   define Cx99_DONT_CARE (99U)
#  endif

#  ifndef IMCARBNRXSTS_NODATA
#   define IMCARBNRXSTS_NODATA (0U)
#  endif

#  ifndef IMCARBNRXSTS_VLD
#   define IMCARBNRXSTS_VLD (1U)
#  endif

#  ifndef IMCARBNRXSTS_INVLD
#   define IMCARBNRXSTS_INVLD (2U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWTQCMDOVRLLIMR_TYPE_H */
