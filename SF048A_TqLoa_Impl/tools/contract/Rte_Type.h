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
 *     SW-C Type:  TqLoa
 *  Generated at:  Wed Sep 23 17:32:31 2015
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

# define Rte_TypeDef_u10p6
typedef uint16 u10p6;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u2p14
typedef uint16 u2p14;

# define Rte_TypeDef_u4p12
typedef uint16 u4p12;

# define Rte_TypeDef_Ary1D_u10p6_5
typedef u10p6 Ary1D_u10p6_5[5];

# define Rte_TypeDef_Ary1D_u10p6_8
typedef u10p6 Ary1D_u10p6_8[8];

# define Rte_TypeDef_Ary1D_u1p15_4
typedef u1p15 Ary1D_u1p15_4[4];

# define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

# define Rte_TypeDef_Ary1D_u2p14_4
typedef u2p14 Ary1D_u2p14_4[4];

# define Rte_TypeDef_Ary1D_u4p12_8
typedef u4p12 Ary1D_u4p12_8[8];

# define Rte_TypeDef_Ary2D_u1p15_8_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_8_4[8];


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1443050082
#    error "The magic number of the generated file <C:/Component/SF048A_TqLoa_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1443050082
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
