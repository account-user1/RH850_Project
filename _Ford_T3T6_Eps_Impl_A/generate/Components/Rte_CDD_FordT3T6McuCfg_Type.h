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
 *          File:  Rte_CDD_FordT3T6McuCfg_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_FordT3T6McuCfg>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDT3T6MCUCFG_TYPE_H
# define _RTE_CDD_FORDT3T6MCUCFG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Volt3_LowerLimit (0.0F)
#  define Volt3_UpperLimit (5.0F)

#  define Volt6_LowerLimit (0.0F)
#  define Volt6_UpperLimit (40.0F)

#  ifndef HWAGSNSRTYP_NOSNSR
#   define HWAGSNSRTYP_NOSNSR (0U)
#  endif

#  ifndef HWAGSNSRTYP_A1335
#   define HWAGSNSRTYP_A1335 (1U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDT3T6MCUCFG_TYPE_H */
