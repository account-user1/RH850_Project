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
 *          File:  Rte_MotRefMdl_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <MotRefMdl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTREFMDL_TYPE_H
# define _RTE_MOTREFMDL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Ag14_LowerLimit (-3.1415927F)
#  define Ag14_UpperLimit (3.1415927F)

#  define MotCon1_LowerLimit (0.025F)
#  define MotCon1_UpperLimit (0.075F)

#  define Uls12_LowerLimit (-1.0F)
#  define Uls12_UpperLimit (1.0F)

#  define Ag10_LowerLimit (0.0F)
#  define Ag10_UpperLimit (6.2832F)

#  define Ag13_LowerLimit (0.001F)
#  define Ag13_UpperLimit (0.1F)

#  define Curr6_LowerLimit (0.0F)
#  define Curr6_UpperLimit (200.0F)

#  define Curr7_LowerLimit (-200.0F)
#  define Curr7_UpperLimit (200.0F)

#  define Curr9_LowerLimit (0.01F)
#  define Curr9_UpperLimit (20.0F)

#  define CurrSqd1_LowerLimit (0.0F)
#  define CurrSqd1_UpperLimit (40000.0F)

#  define Frq2_LowerLimit (1.0F)
#  define Frq2_UpperLimit (200.0F)

#  define Indu1_LowerLimit (0.00003F)
#  define Indu1_UpperLimit (0.00041F)

#  define Indu2_LowerLimit (0.0F)
#  define Indu2_UpperLimit (0.0023F)

#  define MotCon1_LowerLimit (0.025F)
#  define MotCon1_UpperLimit (0.075F)

#  define R5_LowerLimit (0.005F)
#  define R5_UpperLimit (0.125F)

#  define Ti12_LowerLimit (0.0F)
#  define Ti12_UpperLimit (0.05F)

#  define Tq1_LowerLimit (-8.8F)
#  define Tq1_UpperLimit (8.8F)

#  define Uls13_LowerLimit (-100.0F)
#  define Uls13_UpperLimit (100.0F)

#  define Uls14_LowerLimit (1.0F)
#  define Uls14_UpperLimit (2.0F)

#  define Uls2_LowerLimit (0.0F)
#  define Uls2_UpperLimit (1.0F)

#  define Uls9_LowerLimit (0.98F)
#  define Uls9_UpperLimit (1.0F)

#  define Vel1_LowerLimit (-1350.0F)
#  define Vel1_UpperLimit (1350.0F)

#  define Volt1_LowerLimit (6.0F)
#  define Volt1_UpperLimit (26.5F)

#  define Volt17_LowerLimit (-26.5F)
#  define Volt17_UpperLimit (26.5F)

#  define Vel4_LowerLimit (0U)
#  define Vel4_UpperLimit (43200U)

#  define Uls15_LowerLimit (0U)
#  define Uls15_UpperLimit (0U)

#  define Volt18_LowerLimit (0U)
#  define Volt18_UpperLimit (40960U)

#  define Tq13_LowerLimit (0U)
#  define Tq13_UpperLimit (0U)

#  define Cnt14_LowerLimit (2U)
#  define Cnt14_UpperLimit (12U)

#  define Cnt19_LowerLimit (0U)
#  define Cnt19_UpperLimit (255U)

#  define Cnt28_LowerLimit (1U)
#  define Cnt28_UpperLimit (5U)

#  define Cnt29_LowerLimit (1U)
#  define Cnt29_UpperLimit (20U)

#  ifndef MOTQUAD_QUAD1
#   define MOTQUAD_QUAD1 (1U)
#  endif

#  ifndef MOTQUAD_QUAD2
#   define MOTQUAD_QUAD2 (2U)
#  endif

#  ifndef MOTQUAD_QUAD3
#   define MOTQUAD_QUAD3 (3U)
#  endif

#  ifndef MOTQUAD_QUAD4
#   define MOTQUAD_QUAD4 (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTREFMDL_TYPE_H */
