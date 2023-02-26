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
 *     SW-C Type:  TunSelnMngt
 *  Generated at:  Fri May  6 13:19:08 2016
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

# define Rte_TypeDef_AdrMpgReqTyp1
typedef uint8 AdrMpgReqTyp1;

# define Rte_TypeDef_CalCopySts1
typedef uint8 CalCopySts1;

# define Rte_TypeDef_GetSegMod1
typedef uint8 GetSegMod1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;

# define Rte_TypeDef_OnlineCalStsRec1
typedef struct
{
  Ary1D_OnlineCalSegInfoRec1_TunSelnMngt1 Seg;
  CalCopySts1 CopySts;
  uint8 ActvGroup;
  uint8 ActvInin;
  uint8 ActvRt;
} OnlineCalStsRec1;

/* KS: Manually added the following #defines for testing purposes */

# define Rte_CalprmElementGroup_CalRegn01Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP (0)
# define Rte_CalprmElementGroup_CalRegn01Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP (1)
# define Rte_CalprmElementGroup_CalRegn01Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP (2)
# define Rte_CalprmElementGroup_CalRegn01Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP (3)
# define Rte_CalprmElementGroup_CalRegn01Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP (4)
# define Rte_CalprmElementGroup_CalRegn01Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP (5)
# define Rte_CalprmElementGroup_CalRegn01Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP (6)
# define Rte_CalprmElementGroup_CalRegn01Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP (7)
# define Rte_CalprmElementGroup_CalRegn01Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP (8)
# define Rte_CalprmElementGroup_CalRegn01Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP (9)
# define Rte_CalprmElementGroup_CalRegn03Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP (10)
# define Rte_CalprmElementGroup_CalRegn03Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP (11)
# define Rte_CalprmElementGroup_CalRegn03Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP (12)
# define Rte_CalprmElementGroup_CalRegn03Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP (13)
# define Rte_CalprmElementGroup_CalRegn03Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP (14)
# define Rte_CalprmElementGroup_CalRegn03Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP (15)
# define Rte_CalprmElementGroup_CalRegn03Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP (16)
# define Rte_CalprmElementGroup_CalRegn03Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP (17)
# define Rte_CalprmElementGroup_CalRegn03Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP (18)
# define Rte_CalprmElementGroup_CalRegn03Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP (19)
# define Rte_CalprmElementGroup_CalRegn03Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP (20)
# define Rte_CalprmElementGroup_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP (21)
# define Rte_CalprmElementGroup_EotLrng_DEFAULT_RTE_CDATA_GROUP (22)
# define Rte_CalprmElementGroup_DutyCycThermProtn_DEFAULT_RTE_CDATA_GROUP (23)
# define Rte_CalprmElementGroup_SysFricLrng_DEFAULT_RTE_CDATA_GROUP (24)
# define Rte_CalprmElementGroup_HwAg0Meas_DEFAULT_RTE_CDATA_GROUP (25)
# define Rte_CalprmElementGroup_HwAg1Meas_DEFAULT_RTE_CDATA_GROUP (26)
# define Rte_CalprmElementGroup_HwAgVehCentrTrim_DEFAULT_RTE_CDATA_GROUP (27)
# define Rte_CalprmElementGroup_CDD_HwTq0Meas_DEFAULT_RTE_CDATA_GROUP (28)
# define Rte_CalprmElementGroup_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP (29)
# define Rte_CalprmElementGroup_CDD_HwTq2Meas_DEFAULT_RTE_CDATA_GROUP (30)
# define Rte_CalprmElementGroup_CDD_HwTq3Meas_DEFAULT_RTE_CDATA_GROUP (31)
# define Rte_CalprmElementGroup_HwTqCorrln_DEFAULT_RTE_CDATA_GROUP (32)
# define Rte_CalprmElementGroup_WhlImbRejctn_DEFAULT_RTE_CDATA_GROUP (33)
# define Rte_CalprmElementGroup_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (34)
# define Rte_CalprmElementGroup_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (35)
# define Rte_CalprmElementGroup_CalRegn02CmnGroupC_DEFAULT_RTE_CALPRM_GROUP (36)
# define Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP (37)
# define Rte_CalprmElementGroup_CDD_MotAg0Meas_DEFAULT_RTE_CDATA_GROUP (38)
# define Rte_CalprmElementGroup_CDD_MotAg1Meas_DEFAULT_RTE_CDATA_GROUP (39)
# define Rte_CalprmElementGroup_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP (40)
# define Rte_CalprmElementGroup_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP (41)
# define Rte_CalprmElementGroup_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP (42)
# define Rte_CalprmElementGroup_PartNr_DEFAULT_RTE_CDATA_GROUP (43)
# define Rte_CalprmElementGroup_PullCmpActv_DEFAULT_RTE_CDATA_GROUP (44)
# define Rte_CalprmElementGroup_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP (45)
# define Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP (46)
# define Rte_CalprmElementGroup_CalRegn01CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (47)
# define Rte_CalprmElementGroup_CalRegn01CmnGroupC_DEFAULT_RTE_CALPRM_GROUP (48)
# define Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP (49)
# define Rte_CalprmElementGroup_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (50)
# define Rte_CalprmElementGroup_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (51)
# define Rte_CalprmElementGroup_CalRegn01Inin00GroupC_DEFAULT_RTE_CALPRM_GROUP (52)
# define Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP (53)
# define Rte_CalprmElementGroup_CalRegn01Rt00GroupC_DEFAULT_RTE_CALPRM_GROUP (54)
# define Rte_CalprmElementGroup_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP (55)
# define Rte_CalprmElementGroup_CalRegn01Rt01GroupC_DEFAULT_RTE_CALPRM_GROUP (56)
# define Rte_CalprmElementGroup_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP (57)
# define Rte_CalprmElementGroup_CalRegn01Rt02GroupC_DEFAULT_RTE_CALPRM_GROUP (58)
# define Rte_CalprmElementGroup_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP (59)
# define Rte_CalprmElementGroup_CalRegn01Rt03GroupC_DEFAULT_RTE_CALPRM_GROUP (60)
# define Rte_CalprmElementGroup_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP (61)
# define Rte_CalprmElementGroup_CalRegn01Rt04GroupC_DEFAULT_RTE_CALPRM_GROUP (62)
# define Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP (63)
# define Rte_CalprmElementGroup_CalRegn03Cmn_DEFAULT_RTE_CALPRM_GROUP (64)
# define Rte_CalprmElementGroup_CalRegn03CmnGroupA_DEFAULT_RTE_CALPRM_GROUP (65)
# define Rte_CalprmElementGroup_CalRegn03CmnGroupB_DEFAULT_RTE_CALPRM_GROUP (66)
# define Rte_CalprmElementGroup_CalRegn03Inin00_DEFAULT_RTE_CALPRM_GROUP (67)
# define Rte_CalprmElementGroup_CalRegn03Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP (68)
# define Rte_CalprmElementGroup_CalRegn03Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP (69)

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1462563999
#    error "The magic number of the generated file <C:/Component/ES400A_TunSelnMngt_Impl/tools/contract/Rte_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1462563999
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TYPE_H */
