/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Type.h
 *     SW-C Type:  MotRplCoggCfg
 *  Generated at:  Tue May 17 12:06:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_s1p14
typedef sint16 s1p14;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u16p0
typedef uint16 u16p0;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_u5p11
typedef uint16 u5p11;

# define Rte_TypeDef_u9p7
typedef uint16 u9p7;

# define Rte_TypeDef_Ary1D_s1p14_12
typedef s1p14 Ary1D_s1p14_12[12];

# define Rte_TypeDef_Ary1D_u0p16_8
typedef u0p16 Ary1D_u0p16_8[8];

# define Rte_TypeDef_Ary1D_u16p0_20
typedef u16p0 Ary1D_u16p0_20[20];

# define Rte_TypeDef_Ary1D_u3p13_8
typedef u3p13 Ary1D_u3p13_8[8];

# define Rte_TypeDef_Ary1D_u5p11_8
typedef u5p11 Ary1D_u5p11_8[8];

# define Rte_TypeDef_Ary1D_u9p7_10
typedef u9p7 Ary1D_u9p7_10[10];

# define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

# define Rte_TypeDef_Ary2D_s1p14_10_12
typedef Ary1D_s1p14_12 Ary2D_s1p14_10_12[10];

# define Rte_TypeDef_Ary2D_u0p16_20_8
typedef Ary1D_u0p16_8 Ary2D_u0p16_20_8[20];

# define Rte_TypeDef_Ary2D_u3p13_20_8
typedef Ary1D_u3p13_8 Ary2D_u3p13_20_8[20];

# define Rte_TypeDef_MotRplCoggPrmRec2
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec2;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1463507457
#    error "The magic number of the generated file <C:/Component/SF106A_MotRplCoggCfg_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1463507457
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
