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
 *        Config:  C:/_EA4SynWrkgCpy/ES101A_DiagcMgr_Impl/tools/Component.dpa
 *     SW-C Type:  DiagcMgrProxyAppl3
 *  Generated at:  Fri Sep 29 09:25:35 2017
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

# define Rte_TypeDef_Ary1D_u16_512
typedef uint16 Ary1D_u16_512[512];

# define Rte_TypeDef_DiagcDataRec2
typedef struct
{
  uint8 DiagcSts;
  float32 ActvRampRate;
  float32 ActvMotTqCmdSca;
} DiagcDataRec2;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Boolean
typedef boolean Boolean;

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_Ary1D_u08_20
typedef uint8 Ary1D_u08_20[20];

#  define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

#  define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

#  define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

#  define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

#  define Rte_TypeDef_s5p10
typedef sint16 s5p10;

#  define Rte_TypeDef_s8p7
typedef sint16 s8p7;

#  define Rte_TypeDef_u6p10
typedef uint16 u6p10;

#  define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

#  define Rte_TypeDef_NtcFltInfoRec2
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
} NtcFltInfoRec2;

#  define Rte_TypeDef_SnpshtDataRec2
typedef struct
{
  uint32 SpclSnpshtData0;
  uint32 SpclSnpshtData1;
  uint32 SpclSnpshtData2;
  uint32 MicroDiagcData;
  uint32 IgnCntr;
  s5p10 HwTq;
  s5p10 MotTq;
  u6p10 BrdgVltg;
  s8p7 EcuT;
  NtcNrWithResd1 NtcNr;
  uint8 NtcStInfo;
  SysSt1 SysSt;
} SnpshtDataRec2;

#  define Rte_TypeDef_Ary1D_NtcFltInfoRec2_20
typedef NtcFltInfoRec2 Ary1D_NtcFltInfoRec2_20[20];

#  define Rte_TypeDef_Ary1D_SnpshtDataRec2_8
typedef SnpshtDataRec2 Ary1D_SnpshtDataRec2_8[8];

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
