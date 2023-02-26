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
 *        Config:  C:/_EA4SynWrkgCpy/ES243A_MotAg6Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAg6Meas
 *  Generated at:  Mon Oct 16 12:03:02 2017
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

# define Rte_TypeDef_MotAgRtPrmRec1
typedef struct
{
  float32 SinRtOffs;
  float32 SinRtAmpRecpr;
  float32 CosRtOffs;
  float32 CosRtAmpRecpr;
  float32 SinGainCorrd;
  float32 CosGainCorrd;
  float32 SinOffsCorrd;
  float32 CosOffsCorrd;
  float32 CosSinNomRatio;
  float32 SinCosNomRatio;
  float32 RtToNomRatioLoLim;
  float32 RtToNomRatioHiLim;
  float32 PrevSinRtOffs;
  float32 PrevCosRtOffs;
} MotAgRtPrmRec1;

# define Rte_TypeDef_MotAgStVariRec1
typedef struct
{
  float32 MotAgSinMax;
  float32 MotAgSinMin;
  float32 MotAgCosMax;
  float32 MotAgCosMin;
} MotAgStVariRec1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

# define Rte_TypeDef_s2p13
typedef sint16 s2p13;

# define Rte_TypeDef_sm6p13
typedef sint8 sm6p13;

# define Rte_TypeDef_u0p16
typedef uint16 u0p16;

# define Rte_TypeDef_u1p15
typedef uint16 u1p15;

# define Rte_TypeDef_u3p13
typedef uint16 u3p13;

# define Rte_TypeDef_Ary1D_sm6p13_144
typedef sm6p13 Ary1D_sm6p13_144[144];

# define Rte_TypeDef_MotAgEolPrmRec1
typedef struct
{
  u3p13 SinOffs;
  u3p13 CosOffs;
  u3p13 SinAmpRecpr;
  u3p13 CosAmpRecpr;
  s2p13 SinDelta;
  Ary1D_sm6p13_144 SinHrmncTbl;
  Ary1D_sm6p13_144 CosHrmncTbl;
  u1p15 SinGainCorrd;
  u1p15 CosGainCorrd;
  s2p13 SinOffsCorrd;
  s2p13 CosOffsCorrd;
  u3p13 CosDeltaRecpr;
} MotAgEolPrmRec1;


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
