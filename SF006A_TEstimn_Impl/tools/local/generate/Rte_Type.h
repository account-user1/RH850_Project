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
 *        Config:  C:/_Synergy_Projects/Working/SF006A_TEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  TEstimn
 *  Generated at:  Wed Dec 20 08:42:50 2017
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

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_Ary1D_f32_3
typedef float32 Ary1D_f32_3[3];

# define Rte_TypeDef_Ary1D_logl_3
typedef boolean Ary1D_logl_3[3];

# define Rte_TypeDef_TFilStValRec1
typedef struct
{
  float32 FilSiLpStVal;
  float32 FilMagLpStVal;
  float32 FilCuLpStVal;
  float32 FilAssisMechLpStVal;
  float32 FilSiLLStVal;
  float32 FilMagLLStVal;
  float32 FilCuLLStVal;
  float32 FilAssisMechLLStVal;
} TFilStValRec1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
