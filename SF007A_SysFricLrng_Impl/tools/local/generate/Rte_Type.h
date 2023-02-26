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
 *          File:  Rte_Type.h
 *        Config:  C:/_Synergy_Projects/Working/SF007A_SysFricLrng_Impl/tools/Component.dpa
 *     SW-C Type:  SysFricLrng
 *  Generated at:  Fri Oct 13 09:00:46 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
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

# define Rte_TypeDef_Ary1D_boolean_4
typedef boolean Ary1D_boolean_4[4];

# define Rte_TypeDef_Ary1D_f32_12
typedef float32 Ary1D_f32_12[12];

# define Rte_TypeDef_Ary1D_f32_2
typedef float32 Ary1D_f32_2[2];

# define Rte_TypeDef_Ary1D_f32_4
typedef float32 Ary1D_f32_4[4];

# define Rte_TypeDef_Ary1D_u16_3
typedef uint16 Ary1D_u16_3[3];

# define Rte_TypeDef_SysFricNonLrngDataRec1
typedef struct
{
  float32 EolFric;
  boolean EnaFricLrng;
  boolean EnaFricOffsOutp;
} SysFricNonLrngDataRec1;

# define Rte_TypeDef_Ary2D_f32_4_2
typedef Ary1D_f32_2 Ary2D_f32_4_2[4];

# define Rte_TypeDef_Ary2D_f32_8_4
typedef Ary1D_f32_4 Ary2D_f32_8_4[8];

# define Rte_TypeDef_Ary2D_u16_8_3
typedef Ary1D_u16_3 Ary2D_u16_8_3[8];

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

# define Rte_TypeDef_SysFricLrngOperMod1
typedef uint8 SysFricLrngOperMod1;

# define Rte_TypeDef_u11p5
typedef uint16 u11p5;

# define Rte_TypeDef_u6p10
typedef uint16 u6p10;

# define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

# define Rte_TypeDef_Ary1D_u6p10_10
typedef u6p10 Ary1D_u6p10_10[10];

# define Rte_TypeDef_SysFricDataRec1
typedef struct
{
  float32 FricOffs;
  Ary1D_f32_4 BasLineFric;
  Ary1D_f32_4 VehLrndFric;
  Ary2D_f32_8_4 Hys;
  Ary2D_u16_8_3 RngCntr;
  SysFricLrngOperMod1 SysFricLrngOperMod;
} SysFricDataRec1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
