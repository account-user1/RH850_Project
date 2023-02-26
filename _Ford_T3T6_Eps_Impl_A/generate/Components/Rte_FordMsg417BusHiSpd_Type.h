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
 *          File:  Rte_FordMsg417BusHiSpd_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <FordMsg417BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG417BUSHISPD_TYPE_H
# define _RTE_FORDMSG417BUSHISPD_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_LimitNotReached
#   define Cx0_LimitNotReached (0U)
#  endif

#  ifndef Cx1_LimitClose
#   define Cx1_LimitClose (1U)
#  endif

#  ifndef Cx2_LimitReached
#   define Cx2_LimitReached (2U)
#  endif

#  ifndef Cx3_LimitWithDriverActive
#   define Cx3_LimitWithDriverActive (3U)
#  endif

#  ifndef Cx0_Unavailable
#   define Cx0_Unavailable (0U)
#  endif

#  ifndef Cx1_Available
#   define Cx1_Available (1U)
#  endif

#  ifndef Cx2_ContLatControlInProgress
#   define Cx2_ContLatControlInProgress (2U)
#  endif

#  ifndef Cx3_RampOut
#   define Cx3_RampOut (3U)
#  endif

#  ifndef Cx4_Denied
#   define Cx4_Denied (4U)
#  endif

#  ifndef Cx5_NotUsed1
#   define Cx5_NotUsed1 (5U)
#  endif

#  ifndef Cx6_NotUsed2
#   define Cx6_NotUsed2 (6U)
#  endif

#  ifndef Cx7_NotUsed3
#   define Cx7_NotUsed3 (7U)
#  endif

#  ifndef Cx0_NotAvailable
#   define Cx0_NotAvailable (0U)
#  endif

#  ifndef Cx1_Available
#   define Cx1_Available (1U)
#  endif

#  ifndef Cx2_TemporarilyNotAvailable
#   define Cx2_TemporarilyNotAvailable (2U)
#  endif

#  ifndef Cx3_Faulty
#   define Cx3_Faulty (3U)
#  endif

#  ifndef Cx0_Inactive
#   define Cx0_Inactive (0U)
#  endif

#  ifndef Cx1_TbaActive
#   define Cx1_TbaActive (1U)
#  endif

#  ifndef Cx2_TbaSetup
#   define Cx2_TbaSetup (2U)
#  endif

#  ifndef Cx3_TbaOffTrgSetup
#   define Cx3_TbaOffTrgSetup (3U)
#  endif

#  ifndef Cx4_TbaOffTrgActive
#   define Cx4_TbaOffTrgActive (4U)
#  endif

#  ifndef Cx5_TbaActiveExpertAvail
#   define Cx5_TbaActiveExpertAvail (5U)
#  endif

#  ifndef Cx6_TbaActiveExpertActive
#   define Cx6_TbaActiveExpertActive (6U)
#  endif

#  ifndef Cx7_NotUsed_1
#   define Cx7_NotUsed_1 (7U)
#  endif

#  ifndef Cx00_NoMessage
#   define Cx00_NoMessage (0U)
#  endif

#  ifndef Cx01_Message1
#   define Cx01_Message1 (1U)
#  endif

#  ifndef Cx02_Message2
#   define Cx02_Message2 (2U)
#  endif

#  ifndef Cx03_Message3
#   define Cx03_Message3 (3U)
#  endif

#  ifndef Cx04_Message4
#   define Cx04_Message4 (4U)
#  endif

#  ifndef Cx05_Message5
#   define Cx05_Message5 (5U)
#  endif

#  ifndef Cx06_Message6
#   define Cx06_Message6 (6U)
#  endif

#  ifndef Cx07_Message7
#   define Cx07_Message7 (7U)
#  endif

#  ifndef Cx08_Message8
#   define Cx08_Message8 (8U)
#  endif

#  ifndef Cx09_Message9
#   define Cx09_Message9 (9U)
#  endif

#  ifndef Cx0A_Message10
#   define Cx0A_Message10 (10U)
#  endif

#  ifndef Cx0B_Message11
#   define Cx0B_Message11 (11U)
#  endif

#  ifndef Cx0C_Message12
#   define Cx0C_Message12 (12U)
#  endif

#  ifndef Cx0D_Message13
#   define Cx0D_Message13 (13U)
#  endif

#  ifndef Cx0E_Message14
#   define Cx0E_Message14 (14U)
#  endif

#  ifndef Cx0F_Message15
#   define Cx0F_Message15 (15U)
#  endif

#  ifndef Cx10_Message16
#   define Cx10_Message16 (16U)
#  endif

#  ifndef Cx11_Message17
#   define Cx11_Message17 (17U)
#  endif

#  ifndef Cx12_Message18
#   define Cx12_Message18 (18U)
#  endif

#  ifndef Cx13_Message19
#   define Cx13_Message19 (19U)
#  endif

#  ifndef Cx14_Message20
#   define Cx14_Message20 (20U)
#  endif

#  ifndef Cx15_Message21
#   define Cx15_Message21 (21U)
#  endif

#  ifndef Cx16_Message22
#   define Cx16_Message22 (22U)
#  endif

#  ifndef Cx17_Message23
#   define Cx17_Message23 (23U)
#  endif

#  ifndef Cx18_Message24
#   define Cx18_Message24 (24U)
#  endif

#  ifndef Cx19_Message25
#   define Cx19_Message25 (25U)
#  endif

#  ifndef Cx1A_Message26
#   define Cx1A_Message26 (26U)
#  endif

#  ifndef Cx1B_Message27
#   define Cx1B_Message27 (27U)
#  endif

#  ifndef Cx1C_Message28
#   define Cx1C_Message28 (28U)
#  endif

#  ifndef Cx1D_Message29
#   define Cx1D_Message29 (29U)
#  endif

#  ifndef Cx1E_Message30
#   define Cx1E_Message30 (30U)
#  endif

#  ifndef Cx1F_Message31
#   define Cx1F_Message31 (31U)
#  endif

#  ifndef Cx23_Message35
#   define Cx23_Message35 (35U)
#  endif

#  ifndef Cx28_Message40
#   define Cx28_Message40 (40U)
#  endif

#  ifndef Cx2D_Message45
#   define Cx2D_Message45 (45U)
#  endif

#  ifndef Cx32_Message50
#   define Cx32_Message50 (50U)
#  endif

#  ifndef Cx37_Message55
#   define Cx37_Message55 (55U)
#  endif

#  ifndef Cx3C_Message60
#   define Cx3C_Message60 (60U)
#  endif

#  ifndef Cx3D_Message61
#   define Cx3D_Message61 (61U)
#  endif

#  ifndef Cx3E_Message62
#   define Cx3E_Message62 (62U)
#  endif

#  ifndef Cx3F_Message63
#   define Cx3F_Message63 (63U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG417BUSHISPD_TYPE_H */
