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
 *        Config:  C:/Component/CM800A_SyncCrc_Impl-cz7lt6/CM800A_SyncCrc_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_SyncCrc
 *  Generated at:  Tue Jan 30 15:42:16 2018
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

# define Rte_TypeDef_CrcHwResvCfg1
typedef uint8 CrcHwResvCfg1;

# define Rte_TypeDef_CrcHwResvMod1
typedef uint8 CrcHwResvMod1;

# define Rte_TypeDef_CrcHwSts1
typedef uint8 CrcHwSts1;

# define Rte_TypeDef_CrcHwStsRec2
typedef struct
{
  uint32 TaskId;
  CrcHwSts1 CrcHwSts;
} CrcHwStsRec2;

# define Rte_TypeDef_Ary1D_CrcHwStsRec2_8
typedef CrcHwStsRec2 Ary1D_CrcHwStsRec2_8[8];


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
