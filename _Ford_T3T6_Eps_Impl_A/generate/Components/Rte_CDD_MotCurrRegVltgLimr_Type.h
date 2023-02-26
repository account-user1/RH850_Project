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
 *          File:  Rte_CDD_MotCurrRegVltgLimr_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <CDD_MotCurrRegVltgLimr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H
# define _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag10_LowerLimit (0.0F)
#  define Ag10_UpperLimit (6.2832F)

#  define Curr4_LowerLimit (-450.0F)
#  define Curr4_UpperLimit (450.0F)

#  define Curr5_LowerLimit (-1000.0F)
#  define Curr5_UpperLimit (1000.0F)

#  define R1_LowerLimit (0.0F)
#  define R1_UpperLimit (0.2F)

#  define Rate3_LowerLimit (0.0F)
#  define Rate3_UpperLimit (1000.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls7_LowerLimit (-25.0F)
#  define Uls7_UpperLimit (25.0F)

#  define Uls8_LowerLimit (-200.0F)
#  define Uls8_UpperLimit (200.0F)

#  define Uls9_LowerLimit (0.98F)
#  define Uls9_UpperLimit (1.0F)

#  define Volt17_LowerLimit (-26.5F)
#  define Volt17_UpperLimit (26.5F)

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTCURRREGVLTGLIMR_TYPE_H */
