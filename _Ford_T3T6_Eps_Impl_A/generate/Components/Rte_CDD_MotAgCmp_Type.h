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
 *          File:  Rte_CDD_MotAgCmp_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_MotAgCmp>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAGCMP_TYPE_H
# define _RTE_CDD_MOTAGCMP_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag8_LowerLimit (-2147483647 - 1)
#  define Ag8_UpperLimit (2147483647)

#  define Ag7_LowerLimit (-2147483647 - 1)
#  define Ag7_UpperLimit (2147483646)

#  define Uls3_LowerLimit (-1)
#  define Uls3_UpperLimit (1)

#  define Ag9_LowerLimit (0U)
#  define Ag9_UpperLimit (65535U)

#  define Cnt14_LowerLimit (2U)
#  define Cnt14_UpperLimit (12U)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAGCMP_TYPE_H */
