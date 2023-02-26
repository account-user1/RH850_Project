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
 *          File:  Rte_CmnMfgSrv.h
 *     SW-C Type:  CmnMfgSrv
 *  Generated at:  Mon Nov 20 10:27:33 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CmnMfgSrv> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CMNMFGSRV_H
# define _RTE_CMNMFGSRV_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CmnMfgSrv_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CmnMfgSrv
{
  /* PIM Handles section */
  P2VAR(Ary1D_u8_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CcaHwPartNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CcaSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiAssiMechTEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiDampg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiDutyCycThermProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiEotProtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiHysCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiInertiaCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiLoaSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiPullCmpActvCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiPullCmpActvLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiRestore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiSysFricLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiSysMotTqCmdRampRate; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_20, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EpsSysSerlNr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IgnCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InpOutpCtrlAssiGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_InpOutpCtrlVehSpdOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgDiagcInhb; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgTmpBuf0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgTmpBuf1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgTmpBuf2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgTmpBuf3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u8_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MfgTmpBuf4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NxtrMfgEnaCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerCyc; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerDivdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u16_16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerPidTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerPidTblLen; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerRunng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReqLen; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecuAcsAtmptCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecuAcsAtmptTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecuAcsSeedReqCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SecuAcsUnlckd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u32_2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SeedKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SessionCurr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SessionTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStReqEnaOvrd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CmnMfgSrv, RTE_CONST, RTE_CONST) Rte_Inst_CmnMfgSrv; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CmnMfgSrv, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiLnrGain_Val (0.0F)
# define Rte_InitValue_AssiLnrGainEna_Logl (FALSE)
# define Rte_InitValue_AssiMechTEstimnDi_Logl (FALSE)
# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_DampgCmdBasDi_Logl (FALSE)
# define Rte_InitValue_DutyCycThermProtnDi_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)
# define Rte_InitValue_EotProtnDi_Logl (FALSE)
# define Rte_InitValue_FricLrngDi_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAg0_Val (0.0F)
# define Rte_InitValue_HwAg1_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTq0_Val (0.0F)
# define Rte_InitValue_HwTq1_Val (0.0F)
# define Rte_InitValue_HwTq2_Val (0.0F)
# define Rte_InitValue_HwTq3_Val (0.0F)
# define Rte_InitValue_HysCmpCmdDi_Logl (FALSE)
# define Rte_InitValue_IgnCntr_Val (0U)
# define Rte_InitValue_InertiaCmpVelCmdDi_Logl (FALSE)
# define Rte_InitValue_LoaScaDi_Logl (FALSE)
# define Rte_InitValue_MfgDiagcInhb_Logl (FALSE)
# define Rte_InitValue_MfgEnaSt_Val (0U)
# define Rte_InitValue_MotAg0Mecl_Val (0U)
# define Rte_InitValue_MotAg1Mecl_Val (0U)
# define Rte_InitValue_MotAg2Mecl_Val (0U)
# define Rte_InitValue_MotAgCumvAlgndMrf_Val (0)
# define Rte_InitValue_MotAgMecl_Val (0U)
# define Rte_InitValue_MotCurrDax_Val (0.0F)
# define Rte_InitValue_MotCurrQax_Val (0.0F)
# define Rte_InitValue_MotTqCmd_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_PinionAg_Val (0.0F)
# define Rte_InitValue_PullCmpCmdDi_Logl (FALSE)
# define Rte_InitValue_PullCmpLrngDi_Logl (FALSE)
# define Rte_InitValue_RtnCmdDi_Logl (FALSE)
# define Rte_InitValue_StallMotTqLimDi_Logl (FALSE)
# define Rte_InitValue_SysMotTqCmdRampRateDi_Logl (FALSE)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStImdtTranReqOff_Logl (FALSE)
# define Rte_InitValue_SysStReqEnaOvrd_Logl (FALSE)
# define Rte_InitValue_VehSpdOvrd_Val (0.0F)
# define Rte_InitValue_VehSpdOvrdEna_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwAg0_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwAg1_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwTq0_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwTq1_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwTq2_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_HwTq3_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotAg0Mecl_Val(P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotAg1Mecl_Val(P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotAg2Mecl_Val(P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotAgCumvAlgndMrf_Val(P2VAR(sint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotAgMecl_Val(P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotCurrDax_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotCurrQax_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotTqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_PinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CmnMfgSrv_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_AssiLnrGain_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_AssiLnrGainEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_AssiMechTEstimnDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_DampgCmdBasDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_DutyCycThermProtnDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_EotProtnDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_FricLrngDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_HysCmpCmdDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_IgnCntr_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_InertiaCmpVelCmdDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_LoaScaDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_MfgDiagcInhb_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_MfgEnaSt_Val(MfgEnaSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_PullCmpCmdDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_PullCmpLrngDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_RtnCmdDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_StallMotTqLimDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_SysStImdtTranReqOff_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_SysStReqEnaOvrd_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_VehSpdOvrd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CmnMfgSrv_VehSpdOvrdEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ClrAllDiagc_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ClrFricLrngOperMod_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ClrHwAgTrimVal_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ClrLtchCntrData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ClrSnpshtData_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(P2CONST(Ary1D_u8_CmnMfgSrvIf, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasEolGainReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasEolGainStReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasEolGainSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasEolOffsReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasEolOffsStReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasEolOffsSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasGainReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainC_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainD_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainE_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasGainReadReqSngIvtr_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrGainC_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasGainWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasGainWrReqSngIvtr_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasGainWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasOffsReadReq_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifD_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifE_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifF_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgD_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgE_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgF_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasOffsReadReqSngIvtr_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasEolOffsHiBrdgVltg_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsDifC_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgA_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgB_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasMotCurrOffsLoAvrgC_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasOffsWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_CurrMeasOffsWrReqSngIvtr_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CurrMeasOffsWrReqSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_FSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetCtrlPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlPropGain_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlIntgtrGain_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlDerivtvGain_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlAntiWdupLim_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlAntiWdupGain_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlDerivtvLpFilTiCon_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricOffs_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) BasLineFric_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) VehLrndFric_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) Hys_Arg, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetFricData_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricOffs_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) BasLineFric_Arg, P2VAR(Ary1D_f32_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) VehLrndFric_Arg, P2VAR(Ary2D_f32_8_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) Hys_Arg, P2VAR(Ary2D_u16_8_3, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetFricLrngData_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricLrngEna_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricLrngOffsOutpEna_Arg, P2VAR(SysFricLrngOperMod1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricLrngOperMod_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetFricOffsOutpDi_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetGearIdn_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) GearIdn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetHwAgOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetHwAgOverTrvlCnt_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetHwAgTrimVal_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgTrimVal_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetHwTqOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetMotCoggCmdPrm_Oper(P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetMotCoggCmdPrm_Oper(P2VAR(Ary1D_s1p14_128, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetMotPrmNomEol_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotKeNom, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotRNom); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetMotRplCoggPrm_Oper(P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder1_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder1X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder1Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder2_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder2X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder2Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder3_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder3X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetMotTqCmdSca_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotTqCmdSca_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) NtcInfoSts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetPullCmpPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PullCmpCmdTot_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PullCmpShoTerm_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PullCmpLongTerm_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) LrngEnad_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetRefTmr100MicroSec32bit1_Oper(P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetTiSpan100MicroSec32bit1_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_GetYawRateOffs_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) VehYawRateOffs_Arg, P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0ClrLtch_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0AutoTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAg0MeasHwAg0WrOffsTrimData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAg0MeasHwAg0OffsTrimPrfmdStsData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0WrTrim_Oper(float32 HwAg0MeasHwAg0WrTrimData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1ClrLtch_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1AutoTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAg1MeasHwAg1WrOffsTrimData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAg1MeasHwAg1OffsTrimPrfmdStsData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1WrTrim_Oper(float32 HwAg1MeasHwAg1WrTrimData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq0MeasHwTq0ReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq0MeasHwTq0OffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0WrTrim_Oper(float32 HwTq0MeasHwTq0WrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq1MeasHwTq1ReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq1MeasHwTq1OffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1WrTrim_Oper(float32 HwTq1MeasHwTq1WrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq2MeasHwTq2ReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq2MeasHwTq2OffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2WrTrim_Oper(float32 HwTq2MeasHwTq2WrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq3MeasHwTq3ReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTq3MeasHwTq3OffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3WrTrim_Oper(float32 HwTq3MeasHwTq3WrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4ClrSnsrSca_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4ReadSnsrSca_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqReadScaData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4SnsrScaPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqScaPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4WrSnsrSca_Oper(float32 HwTqScaVal_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq4WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5ClrSnsrSca_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5ReadSnsrSca_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqReadScaData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5SnsrScaPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqScaPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5WrSnsrSca_Oper(float32 HwTqScaVal_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_HwTq5WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_InitFricLrngTbl_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblRead_Oper(P2VAR(Ary1D_f32_26, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblWr_Oper(P2CONST(Ary1D_f32_26, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgCoeffTbl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg5EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg5EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg6EolPrmRead_Oper(P2VAR(MotAgEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAg6EolPrmWr_Oper(P2CONST(MotAgEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgEolPrmData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAgCmpBackEmfRead_Oper(P2VAR(u0p16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgBackEmfRead); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAgCmpBackEmfWr_Oper(u0p16 MotAgCmpBackEmfWrData); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAgMeasEolPrmRead_Oper(P2VAR(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) MotAgEolPrmRead_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_MotAgMeasEolPrmWr_Oper(P2CONST(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotAgSinCosEolCalData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmCcaHwPartNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmCcaSerlNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmDiRestore_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmEpsSysSerlNr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgTmpBuf0_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgTmpBuf1_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgTmpBuf2_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgTmpBuf3_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmMfgTmpBuf4_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmSeedKey_EraseBlock(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmSeedKey_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NvmSeedKey_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalTiStamp, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalTiStamp, P2VAR(Ary1D_u8_48, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) RelNr, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) RelSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsPsrInfoRd_Oper(P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PsrId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PsrRev); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwOrigin, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwOrigin, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelNrRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelVerRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelVerRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_PolarityCfgWr_Oper(uint32 PolarityCfgSaved); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadExtdSnpshtData_Oper(P2VAR(SnpshtDataRec2, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadExtdSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec2_8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadLtchCntrData_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadLtchCntrAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadLtchCntrData_Oper(P2VAR(Ary1D_u08_20, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadLtchCntrAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadNtcFltAry_Oper(P2VAR(ReadFltInfoRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadNtcFltAry_Oper(P2VAR(Ary1D_ReadFltInfoRec1_20, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) DiagcMgrReadFltInfo_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, P2VAR(NtcInfoRec4, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) NtcInfo_Arg, P2VAR(sint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) DebCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadSnpshtData_Oper(P2VAR(SnpshtDataRec1, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_ReadSnpshtData_Oper(P2VAR(Ary1D_SnpshtDataRec1_8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ReadSnpshtDataAry_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstHwAgOverTrvlCnt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstHwTq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstMaxHwAgCwAndCcw_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstPullCmp_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RstYawAndAg_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_RtnMaxHwAgCwAndCcw_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgCcwMax_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HwAgCwMax_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SerlComRstEot_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetFricData_Oper(float32 FricOffs_Arg, P2CONST(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) BasLineFric_Arg, P2CONST(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) VehLrndFric_Arg, P2CONST(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) Hys_Arg, P2CONST(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetFricData_Oper(float32 FricOffs_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) BasLineFric_Arg, P2CONST(Ary1D_f32_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) VehLrndFric_Arg, P2CONST(Ary2D_f32_8_4, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) Hys_Arg, P2CONST(Ary2D_u16_8_3, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) RngCntr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetMotCoggCmdPrm_Oper(P2CONST(s1p14, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetMotCoggCmdPrm_Oper(P2CONST(Ary1D_s1p14_128, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetMotPrmNomEol_Oper(float32 MotKeNom, float32 MotRNom); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetPullCmpLongTerm_Oper(float32 PullCmpLongTerm_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetPullCmpShoTerm_Oper(float32 PullCmpShoTerm_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SwCalGetPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) BoostModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HldModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoolDwnModlnIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) Ramp1Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) Ramp2Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) Ramp3Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) BoostTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) HldTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CoolDwnTi_Arg, P2VAR(u0p16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) PosnStepSize_Arg, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SwCalStop_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_SwCalStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_UpdErrInjReg_Oper(uint16 NtcNr_Arg, uint8 NtcStInfo_Arg, uint8 ErrInjNr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CmnMfgSrv_UpdHwAgTrimVal_Oper(P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) UpdHwAgTrimValSrvResp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CmnMfgSrv_CmnMfgSrvSecuAcsAtmptTiOut_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CmnMfgSrv_CmnMfgSrvSecuAcsMaxNrAtmpt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(uint32, RTE_CODE) Rte_CData_CmnMfgSrv_NvmIgnCntr_DefaultValue(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(uint8, RTE_CODE) Rte_CData_CmnMfgSrv_NvmMfgEnaCntr_DefaultValue(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CmnMfgSrv_NvmNxtrSeedKey_DefaultValue(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_10, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CmnMfgSrv_NvmNxtrSeedKey_DefaultValue(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint32, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CmnMfgSrv_SeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u32_2, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CmnMfgSrv_SeedKeyDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BrdgVltg_Val Rte_Read_CmnMfgSrv_BrdgVltg_Val
# define Rte_Read_EcuTFild_Val Rte_Read_CmnMfgSrv_EcuTFild_Val
# define Rte_Read_HwAg_Val Rte_Read_CmnMfgSrv_HwAg_Val
# define Rte_Read_HwAg0_Val Rte_Read_CmnMfgSrv_HwAg0_Val
# define Rte_Read_HwAg1_Val Rte_Read_CmnMfgSrv_HwAg1_Val
# define Rte_Read_HwTq_Val Rte_Read_CmnMfgSrv_HwTq_Val
# define Rte_Read_HwTq0_Val Rte_Read_CmnMfgSrv_HwTq0_Val
# define Rte_Read_HwTq1_Val Rte_Read_CmnMfgSrv_HwTq1_Val
# define Rte_Read_HwTq2_Val Rte_Read_CmnMfgSrv_HwTq2_Val
# define Rte_Read_HwTq3_Val Rte_Read_CmnMfgSrv_HwTq3_Val
# define Rte_Read_MotAg0Mecl_Val Rte_Read_CmnMfgSrv_MotAg0Mecl_Val
# define Rte_Read_MotAg1Mecl_Val Rte_Read_CmnMfgSrv_MotAg1Mecl_Val
# define Rte_Read_MotAg2Mecl_Val Rte_Read_CmnMfgSrv_MotAg2Mecl_Val
# define Rte_Read_MotAgCumvAlgndMrf_Val Rte_Read_CmnMfgSrv_MotAgCumvAlgndMrf_Val
# define Rte_Read_MotAgMecl_Val Rte_Read_CmnMfgSrv_MotAgMecl_Val
# define Rte_Read_MotCurrDax_Val Rte_Read_CmnMfgSrv_MotCurrDax_Val
# define Rte_Read_MotCurrQax_Val Rte_Read_CmnMfgSrv_MotCurrQax_Val
# define Rte_Read_MotTqCmd_Val Rte_Read_CmnMfgSrv_MotTqCmd_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_CmnMfgSrv_MotVelMrf_Val
# define Rte_Read_PinionAg_Val Rte_Read_CmnMfgSrv_PinionAg_Val
# define Rte_Read_SysSt_Val Rte_Read_CmnMfgSrv_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiLnrGain_Val Rte_Write_CmnMfgSrv_AssiLnrGain_Val
# define Rte_Write_AssiLnrGainEna_Logl Rte_Write_CmnMfgSrv_AssiLnrGainEna_Logl
# define Rte_Write_AssiMechTEstimnDi_Logl Rte_Write_CmnMfgSrv_AssiMechTEstimnDi_Logl
# define Rte_Write_DampgCmdBasDi_Logl Rte_Write_CmnMfgSrv_DampgCmdBasDi_Logl
# define Rte_Write_DutyCycThermProtnDi_Logl Rte_Write_CmnMfgSrv_DutyCycThermProtnDi_Logl
# define Rte_Write_EotProtnDi_Logl Rte_Write_CmnMfgSrv_EotProtnDi_Logl
# define Rte_Write_FricLrngDi_Logl Rte_Write_CmnMfgSrv_FricLrngDi_Logl
# define Rte_Write_HysCmpCmdDi_Logl Rte_Write_CmnMfgSrv_HysCmpCmdDi_Logl
# define Rte_Write_IgnCntr_Val Rte_Write_CmnMfgSrv_IgnCntr_Val
# define Rte_Write_InertiaCmpVelCmdDi_Logl Rte_Write_CmnMfgSrv_InertiaCmpVelCmdDi_Logl
# define Rte_Write_LoaScaDi_Logl Rte_Write_CmnMfgSrv_LoaScaDi_Logl
# define Rte_Write_MfgDiagcInhb_Logl Rte_Write_CmnMfgSrv_MfgDiagcInhb_Logl
# define Rte_Write_MfgEnaSt_Val Rte_Write_CmnMfgSrv_MfgEnaSt_Val
# define Rte_Write_PullCmpCmdDi_Logl Rte_Write_CmnMfgSrv_PullCmpCmdDi_Logl
# define Rte_Write_PullCmpLrngDi_Logl Rte_Write_CmnMfgSrv_PullCmpLrngDi_Logl
# define Rte_Write_RtnCmdDi_Logl Rte_Write_CmnMfgSrv_RtnCmdDi_Logl
# define Rte_Write_StallMotTqLimDi_Logl Rte_Write_CmnMfgSrv_StallMotTqLimDi_Logl
# define Rte_Write_SysMotTqCmdRampRateDi_Logl Rte_Write_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl
# define Rte_Write_SysStImdtTranReqOff_Logl Rte_Write_CmnMfgSrv_SysStImdtTranReqOff_Logl
# define Rte_Write_SysStReqEnaOvrd_Logl Rte_Write_CmnMfgSrv_SysStReqEnaOvrd_Logl
# define Rte_Write_VehSpdOvrd_Val Rte_Write_CmnMfgSrv_VehSpdOvrd_Val
# define Rte_Write_VehSpdOvrdEna_Logl Rte_Write_CmnMfgSrv_VehSpdOvrdEna_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ClrAllDiagc_Oper Rte_Call_CmnMfgSrv_ClrAllDiagc_Oper
# define Rte_Call_ClrFricLrngOperMod_Oper Rte_Call_CmnMfgSrv_ClrFricLrngOperMod_Oper
# define Rte_Call_ClrHwAgTrimVal_Oper Rte_Call_CmnMfgSrv_ClrHwAgTrimVal_Oper
# define Rte_Call_ClrLtchCntrData_Oper Rte_Call_CmnMfgSrv_ClrLtchCntrData_Oper
# define Rte_Call_ClrSnpshtData_Oper Rte_Call_CmnMfgSrv_ClrSnpshtData_Oper
# define Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper Rte_Call_CmnMfgSrv_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper
# define Rte_Call_CurrMeasEolGainReq_Oper Rte_Call_CmnMfgSrv_CurrMeasEolGainReq_Oper
# define Rte_Call_CurrMeasEolGainStReq_Oper Rte_Call_CmnMfgSrv_CurrMeasEolGainStReq_Oper
# define Rte_Call_CurrMeasEolOffsReq_Oper Rte_Call_CmnMfgSrv_CurrMeasEolOffsReq_Oper
# define Rte_Call_CurrMeasEolOffsStReq_Oper Rte_Call_CmnMfgSrv_CurrMeasEolOffsStReq_Oper
# define Rte_Call_CurrMeasGainReadReq_Oper Rte_Call_CmnMfgSrv_CurrMeasGainReadReq_Oper
# define Rte_Call_CurrMeasGainReadReqSngIvtr_Oper Rte_Call_CmnMfgSrv_CurrMeasGainReadReqSngIvtr_Oper
# define Rte_Call_CurrMeasGainWrReq_Oper Rte_Call_CmnMfgSrv_CurrMeasGainWrReq_Oper
# define Rte_Call_CurrMeasGainWrReqSngIvtr_Oper Rte_Call_CmnMfgSrv_CurrMeasGainWrReqSngIvtr_Oper
# define Rte_Call_CurrMeasOffsReadReq_Oper Rte_Call_CmnMfgSrv_CurrMeasOffsReadReq_Oper
# define Rte_Call_CurrMeasOffsReadReqSngIvtr_Oper Rte_Call_CmnMfgSrv_CurrMeasOffsReadReqSngIvtr_Oper
# define Rte_Call_CurrMeasOffsWrReq_Oper Rte_Call_CmnMfgSrv_CurrMeasOffsWrReq_Oper
# define Rte_Call_CurrMeasOffsWrReqSngIvtr_Oper Rte_Call_CmnMfgSrv_CurrMeasOffsWrReqSngIvtr_Oper
# define Rte_Call_FSnsrlsHwCentr_Oper Rte_Call_CmnMfgSrv_FSnsrlsHwCentr_Oper
# define Rte_Call_GetCtrlPrm_Oper Rte_Call_CmnMfgSrv_GetCtrlPrm_Oper
# define Rte_Call_GetFricData_Oper Rte_Call_CmnMfgSrv_GetFricData_Oper
# define Rte_Call_GetFricLrngData_Oper Rte_Call_CmnMfgSrv_GetFricLrngData_Oper
# define Rte_Call_GetFricOffsOutpDi_Oper Rte_Call_CmnMfgSrv_GetFricOffsOutpDi_Oper
# define Rte_Call_GetGearIdn_Oper Rte_Call_CmnMfgSrv_GetGearIdn_Oper
# define Rte_Call_GetHwAgOffs_Oper Rte_Call_CmnMfgSrv_GetHwAgOffs_Oper
# define Rte_Call_GetHwAgOverTrvlCnt_Oper Rte_Call_CmnMfgSrv_GetHwAgOverTrvlCnt_Oper
# define Rte_Call_GetHwAgTrimVal_Oper Rte_Call_CmnMfgSrv_GetHwAgTrimVal_Oper
# define Rte_Call_GetHwTqOffs_Oper Rte_Call_CmnMfgSrv_GetHwTqOffs_Oper
# define Rte_Call_GetMotCoggCmdPrm_Oper Rte_Call_CmnMfgSrv_GetMotCoggCmdPrm_Oper
# define Rte_Call_GetMotPrmNomEol_Oper Rte_Call_CmnMfgSrv_GetMotPrmNomEol_Oper
# define Rte_Call_GetMotRplCoggPrm_Oper Rte_Call_CmnMfgSrv_GetMotRplCoggPrm_Oper
# define Rte_Call_GetMotTqCmdSca_Oper Rte_Call_CmnMfgSrv_GetMotTqCmdSca_Oper
# define Rte_Call_GetNtcSts_Oper Rte_Call_CmnMfgSrv_GetNtcSts_Oper
# define Rte_Call_GetPullCmpPrm_Oper Rte_Call_CmnMfgSrv_GetPullCmpPrm_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit1_Oper Rte_Call_CmnMfgSrv_GetRefTmr100MicroSec32bit1_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit1_Oper Rte_Call_CmnMfgSrv_GetTiSpan100MicroSec32bit1_Oper
# define Rte_Call_GetYawRateOffs_Oper Rte_Call_CmnMfgSrv_GetYawRateOffs_Oper
# define Rte_Call_HwAg0ClrLtch_Oper Rte_Call_CmnMfgSrv_HwAg0ClrLtch_Oper
# define Rte_Call_HwAg0MeasHwAg0AutoTrim_Oper Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0AutoTrim_Oper
# define Rte_Call_HwAg0MeasHwAg0ClrTrim_Oper Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0ClrTrim_Oper
# define Rte_Call_HwAg0MeasHwAg0ReadTrim_Oper Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0ReadTrim_Oper
# define Rte_Call_HwAg0MeasHwAg0TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0TrimPrfmdSts_Oper
# define Rte_Call_HwAg0MeasHwAg0WrTrim_Oper Rte_Call_CmnMfgSrv_HwAg0MeasHwAg0WrTrim_Oper
# define Rte_Call_HwAg1ClrLtch_Oper Rte_Call_CmnMfgSrv_HwAg1ClrLtch_Oper
# define Rte_Call_HwAg1MeasHwAg1AutoTrim_Oper Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1AutoTrim_Oper
# define Rte_Call_HwAg1MeasHwAg1ClrTrim_Oper Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1ClrTrim_Oper
# define Rte_Call_HwAg1MeasHwAg1ReadTrim_Oper Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1ReadTrim_Oper
# define Rte_Call_HwAg1MeasHwAg1TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1TrimPrfmdSts_Oper
# define Rte_Call_HwAg1MeasHwAg1WrTrim_Oper Rte_Call_CmnMfgSrv_HwAg1MeasHwAg1WrTrim_Oper
# define Rte_Call_HwTq0MeasHwTq0AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0AutTrim_Oper
# define Rte_Call_HwTq0MeasHwTq0ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0ClrTrim_Oper
# define Rte_Call_HwTq0MeasHwTq0ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0ReadTrim_Oper
# define Rte_Call_HwTq0MeasHwTq0TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0TrimPrfmdSts_Oper
# define Rte_Call_HwTq0MeasHwTq0WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq0MeasHwTq0WrTrim_Oper
# define Rte_Call_HwTq1MeasHwTq1AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1AutTrim_Oper
# define Rte_Call_HwTq1MeasHwTq1ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1ClrTrim_Oper
# define Rte_Call_HwTq1MeasHwTq1ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1ReadTrim_Oper
# define Rte_Call_HwTq1MeasHwTq1TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1TrimPrfmdSts_Oper
# define Rte_Call_HwTq1MeasHwTq1WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq1MeasHwTq1WrTrim_Oper
# define Rte_Call_HwTq2MeasHwTq2AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2AutTrim_Oper
# define Rte_Call_HwTq2MeasHwTq2ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2ClrTrim_Oper
# define Rte_Call_HwTq2MeasHwTq2ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2ReadTrim_Oper
# define Rte_Call_HwTq2MeasHwTq2TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2TrimPrfmdSts_Oper
# define Rte_Call_HwTq2MeasHwTq2WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq2MeasHwTq2WrTrim_Oper
# define Rte_Call_HwTq3MeasHwTq3AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3AutTrim_Oper
# define Rte_Call_HwTq3MeasHwTq3ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3ClrTrim_Oper
# define Rte_Call_HwTq3MeasHwTq3ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3ReadTrim_Oper
# define Rte_Call_HwTq3MeasHwTq3TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3TrimPrfmdSts_Oper
# define Rte_Call_HwTq3MeasHwTq3WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq3MeasHwTq3WrTrim_Oper
# define Rte_Call_HwTq4AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq4AutTrim_Oper
# define Rte_Call_HwTq4ClrSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq4ClrSnsrSca_Oper
# define Rte_Call_HwTq4ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq4ClrTrim_Oper
# define Rte_Call_HwTq4ReadSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq4ReadSnsrSca_Oper
# define Rte_Call_HwTq4ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq4ReadTrim_Oper
# define Rte_Call_HwTq4SnsrScaPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq4SnsrScaPrfmdSts_Oper
# define Rte_Call_HwTq4TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq4TrimPrfmdSts_Oper
# define Rte_Call_HwTq4WrSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq4WrSnsrSca_Oper
# define Rte_Call_HwTq4WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq4WrTrim_Oper
# define Rte_Call_HwTq5AutTrim_Oper Rte_Call_CmnMfgSrv_HwTq5AutTrim_Oper
# define Rte_Call_HwTq5ClrSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq5ClrSnsrSca_Oper
# define Rte_Call_HwTq5ClrTrim_Oper Rte_Call_CmnMfgSrv_HwTq5ClrTrim_Oper
# define Rte_Call_HwTq5ReadSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq5ReadSnsrSca_Oper
# define Rte_Call_HwTq5ReadTrim_Oper Rte_Call_CmnMfgSrv_HwTq5ReadTrim_Oper
# define Rte_Call_HwTq5SnsrScaPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq5SnsrScaPrfmdSts_Oper
# define Rte_Call_HwTq5TrimPrfmdSts_Oper Rte_Call_CmnMfgSrv_HwTq5TrimPrfmdSts_Oper
# define Rte_Call_HwTq5WrSnsrSca_Oper Rte_Call_CmnMfgSrv_HwTq5WrSnsrSca_Oper
# define Rte_Call_HwTq5WrTrim_Oper Rte_Call_CmnMfgSrv_HwTq5WrTrim_Oper
# define Rte_Call_InitFricLrngTbl_Oper Rte_Call_CmnMfgSrv_InitFricLrngTbl_Oper
# define Rte_Call_MotAg0MeasMotAg0CoeffTblRead_Oper Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblRead_Oper
# define Rte_Call_MotAg0MeasMotAg0CoeffTblWr_Oper Rte_Call_CmnMfgSrv_MotAg0MeasMotAg0CoeffTblWr_Oper
# define Rte_Call_MotAg1MeasMotAg1CoeffTblRead_Oper Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblRead_Oper
# define Rte_Call_MotAg1MeasMotAg1CoeffTblWr_Oper Rte_Call_CmnMfgSrv_MotAg1MeasMotAg1CoeffTblWr_Oper
# define Rte_Call_MotAg5EolPrmRead_Oper Rte_Call_CmnMfgSrv_MotAg5EolPrmRead_Oper
# define Rte_Call_MotAg5EolPrmWr_Oper Rte_Call_CmnMfgSrv_MotAg5EolPrmWr_Oper
# define Rte_Call_MotAg6EolPrmRead_Oper Rte_Call_CmnMfgSrv_MotAg6EolPrmRead_Oper
# define Rte_Call_MotAg6EolPrmWr_Oper Rte_Call_CmnMfgSrv_MotAg6EolPrmWr_Oper
# define Rte_Call_MotAgCmpBackEmfRead_Oper Rte_Call_CmnMfgSrv_MotAgCmpBackEmfRead_Oper
# define Rte_Call_MotAgCmpBackEmfWr_Oper Rte_Call_CmnMfgSrv_MotAgCmpBackEmfWr_Oper
# define Rte_Call_MotAgMeasEolPrmRead_Oper Rte_Call_CmnMfgSrv_MotAgMeasEolPrmRead_Oper
# define Rte_Call_MotAgMeasEolPrmWr_Oper Rte_Call_CmnMfgSrv_MotAgMeasEolPrmWr_Oper
# define Rte_Call_NvmCcaHwPartNr_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmCcaHwPartNr_SetRamBlockStatus
# define Rte_Call_NvmCcaSerlNr_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmCcaSerlNr_SetRamBlockStatus
# define Rte_Call_NvmDiRestore_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmDiRestore_SetRamBlockStatus
# define Rte_Call_NvmEpsSysSerlNr_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmEpsSysSerlNr_SetRamBlockStatus
# define Rte_Call_NvmIgnCntr_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmIgnCntr_SetRamBlockStatus
# define Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgEnaCntr_SetRamBlockStatus
# define Rte_Call_NvmMfgTmpBuf0_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgTmpBuf0_SetRamBlockStatus
# define Rte_Call_NvmMfgTmpBuf1_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgTmpBuf1_SetRamBlockStatus
# define Rte_Call_NvmMfgTmpBuf2_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgTmpBuf2_SetRamBlockStatus
# define Rte_Call_NvmMfgTmpBuf3_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgTmpBuf3_SetRamBlockStatus
# define Rte_Call_NvmMfgTmpBuf4_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmMfgTmpBuf4_SetRamBlockStatus
# define Rte_Call_NvmSeedKey_EraseBlock Rte_Call_CmnMfgSrv_NvmSeedKey_EraseBlock
# define Rte_Call_NvmSeedKey_GetErrorStatus Rte_Call_CmnMfgSrv_NvmSeedKey_GetErrorStatus
# define Rte_Call_NvmSeedKey_SetRamBlockStatus Rte_Call_CmnMfgSrv_NvmSeedKey_SetRamBlockStatus
# define Rte_Call_NxtrCalIdsCalDevlpRd_Oper Rte_Call_CmnMfgSrv_NxtrCalIdsCalDevlpRd_Oper
# define Rte_Call_NxtrCalIdsCalRelRd_Oper Rte_Call_CmnMfgSrv_NxtrCalIdsCalRelRd_Oper
# define Rte_Call_NxtrSwIdsPsrInfoRd_Oper Rte_Call_CmnMfgSrv_NxtrSwIdsPsrInfoRd_Oper
# define Rte_Call_NxtrSwIdsSwBuildDateTiRd_Oper Rte_Call_CmnMfgSrv_NxtrSwIdsSwBuildDateTiRd_Oper
# define Rte_Call_NxtrSwIdsSwRelInfoRd_Oper Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelInfoRd_Oper
# define Rte_Call_NxtrSwIdsSwRelNrRd_Oper Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelNrRd_Oper
# define Rte_Call_NxtrSwIdsSwRelVerRd_Oper Rte_Call_CmnMfgSrv_NxtrSwIdsSwRelVerRd_Oper
# define Rte_Call_PolarityCfgRead_Oper Rte_Call_CmnMfgSrv_PolarityCfgRead_Oper
# define Rte_Call_PolarityCfgWr_Oper Rte_Call_CmnMfgSrv_PolarityCfgWr_Oper
# define Rte_Call_ReadExtdSnpshtData_Oper Rte_Call_CmnMfgSrv_ReadExtdSnpshtData_Oper
# define Rte_Call_ReadLtchCntrData_Oper Rte_Call_CmnMfgSrv_ReadLtchCntrData_Oper
# define Rte_Call_ReadNtcFltAry_Oper Rte_Call_CmnMfgSrv_ReadNtcFltAry_Oper
# define Rte_Call_ReadNtcInfoAndDebCntr_Oper Rte_Call_CmnMfgSrv_ReadNtcInfoAndDebCntr_Oper
# define Rte_Call_ReadSnpshtData_Oper Rte_Call_CmnMfgSrv_ReadSnpshtData_Oper
# define Rte_Call_RstHwAgOverTrvlCnt_Oper Rte_Call_CmnMfgSrv_RstHwAgOverTrvlCnt_Oper
# define Rte_Call_RstHwTq_Oper Rte_Call_CmnMfgSrv_RstHwTq_Oper
# define Rte_Call_RstMaxHwAgCwAndCcw_Oper Rte_Call_CmnMfgSrv_RstMaxHwAgCwAndCcw_Oper
# define Rte_Call_RstPullCmp_Oper Rte_Call_CmnMfgSrv_RstPullCmp_Oper
# define Rte_Call_RstSnsrlsHwCentr_Oper Rte_Call_CmnMfgSrv_RstSnsrlsHwCentr_Oper
# define Rte_Call_RstYawAndAg_Oper Rte_Call_CmnMfgSrv_RstYawAndAg_Oper
# define Rte_Call_RtnMaxHwAgCwAndCcw_Oper Rte_Call_CmnMfgSrv_RtnMaxHwAgCwAndCcw_Oper
# define Rte_Call_SerlComRstEot_Oper Rte_Call_CmnMfgSrv_SerlComRstEot_Oper
# define Rte_Call_SetCtrlPrm_Oper Rte_Call_CmnMfgSrv_SetCtrlPrm_Oper
# define Rte_Call_SetFricData_Oper Rte_Call_CmnMfgSrv_SetFricData_Oper
# define Rte_Call_SetFricLrngData_Oper Rte_Call_CmnMfgSrv_SetFricLrngData_Oper
# define Rte_Call_SetFricOffsOutpDi_Oper Rte_Call_CmnMfgSrv_SetFricOffsOutpDi_Oper
# define Rte_Call_SetHwAgOffs_Oper Rte_Call_CmnMfgSrv_SetHwAgOffs_Oper
# define Rte_Call_SetHwAgOverTrvlCnt_Oper Rte_Call_CmnMfgSrv_SetHwAgOverTrvlCnt_Oper
# define Rte_Call_SetHwAgTrimVal_Oper Rte_Call_CmnMfgSrv_SetHwAgTrimVal_Oper
# define Rte_Call_SetHwTqOffs_Oper Rte_Call_CmnMfgSrv_SetHwTqOffs_Oper
# define Rte_Call_SetManTqCmd_Oper Rte_Call_CmnMfgSrv_SetManTqCmd_Oper
# define Rte_Call_SetMotCoggCmdPrm_Oper Rte_Call_CmnMfgSrv_SetMotCoggCmdPrm_Oper
# define Rte_Call_SetMotPrmNomEol_Oper Rte_Call_CmnMfgSrv_SetMotPrmNomEol_Oper
# define Rte_Call_SetMotRplCoggPrm_Oper Rte_Call_CmnMfgSrv_SetMotRplCoggPrm_Oper
# define Rte_Call_SetMotTqCmdSca_Oper Rte_Call_CmnMfgSrv_SetMotTqCmdSca_Oper
# define Rte_Call_SetPullCmpLongTerm_Oper Rte_Call_CmnMfgSrv_SetPullCmpLongTerm_Oper
# define Rte_Call_SetPullCmpShoTerm_Oper Rte_Call_CmnMfgSrv_SetPullCmpShoTerm_Oper
# define Rte_Call_SetYawRateOffs_Oper Rte_Call_CmnMfgSrv_SetYawRateOffs_Oper
# define Rte_Call_StopCtrl_Oper Rte_Call_CmnMfgSrv_StopCtrl_Oper
# define Rte_Call_StrtCtrl_Oper Rte_Call_CmnMfgSrv_StrtCtrl_Oper
# define Rte_Call_SwCalGetPrm_Oper Rte_Call_CmnMfgSrv_SwCalGetPrm_Oper
# define Rte_Call_SwCalSetPrm_Oper Rte_Call_CmnMfgSrv_SwCalSetPrm_Oper
# define Rte_Call_SwCalStop_Oper Rte_Call_CmnMfgSrv_SwCalStop_Oper
# define Rte_Call_SwCalStrt_Oper Rte_Call_CmnMfgSrv_SwCalStrt_Oper
# define Rte_Call_UpdErrInjReg_Oper Rte_Call_CmnMfgSrv_UpdErrInjReg_Oper
# define Rte_Call_UpdHwAgTrimVal_Oper Rte_Call_CmnMfgSrv_UpdHwAgTrimVal_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_NvmIgnCntr_DefaultValue Rte_CData_CmnMfgSrv_NvmIgnCntr_DefaultValue

# define Rte_CData_NvmMfgEnaCntr_DefaultValue Rte_CData_CmnMfgSrv_NvmMfgEnaCntr_DefaultValue

# define Rte_CData_NvmNxtrSeedKey_DefaultValue Rte_CData_CmnMfgSrv_NvmNxtrSeedKey_DefaultValue

# define Rte_CData_SeedKeyDft Rte_CData_CmnMfgSrv_SeedKeyDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CmnMfgSrvSecuAcsAtmptTiOut_Val Rte_Prm_CmnMfgSrv_CmnMfgSrvSecuAcsAtmptTiOut_Val

# define Rte_Prm_CmnMfgSrvSecuAcsMaxNrAtmpt_Val Rte_Prm_CmnMfgSrv_CmnMfgSrvSecuAcsMaxNrAtmpt_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_InpOutpCtrlAssiGain() (Rte_Inst_CmnMfgSrv->Pim_InpOutpCtrlAssiGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_InpOutpCtrlVehSpdOvrd() (Rte_Inst_CmnMfgSrv->Pim_InpOutpCtrlVehSpdOvrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IgnCntr() (Rte_Inst_CmnMfgSrv->Pim_IgnCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SecuAcsAtmptTmr() (Rte_Inst_CmnMfgSrv->Pim_SecuAcsAtmptTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SessionTiOut() (Rte_Inst_CmnMfgSrv->Pim_SessionTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PerCyc() (Rte_Inst_CmnMfgSrv->Pim_PerCyc) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PerDivdr() (Rte_Inst_CmnMfgSrv->Pim_PerDivdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReqLen() (Rte_Inst_CmnMfgSrv->Pim_ReqLen) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NxtrMfgEnaCntr() (Rte_Inst_CmnMfgSrv->Pim_NxtrMfgEnaCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PerPidTblLen() (Rte_Inst_CmnMfgSrv->Pim_PerPidTblLen) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SecuAcsAtmptCntr() (Rte_Inst_CmnMfgSrv->Pim_SecuAcsAtmptCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SessionCurr() (Rte_Inst_CmnMfgSrv->Pim_SessionCurr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiAssiMechTEstimn() (Rte_Inst_CmnMfgSrv->Pim_DiAssiMechTEstimn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiDampg() (Rte_Inst_CmnMfgSrv->Pim_DiDampg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiDutyCycThermProtn() (Rte_Inst_CmnMfgSrv->Pim_DiDutyCycThermProtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiEotProtn() (Rte_Inst_CmnMfgSrv->Pim_DiEotProtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiHysCmp() (Rte_Inst_CmnMfgSrv->Pim_DiHysCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiInertiaCmp() (Rte_Inst_CmnMfgSrv->Pim_DiInertiaCmp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiLoaSca() (Rte_Inst_CmnMfgSrv->Pim_DiLoaSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiPullCmpActvCmd() (Rte_Inst_CmnMfgSrv->Pim_DiPullCmpActvCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiPullCmpActvLrng() (Rte_Inst_CmnMfgSrv->Pim_DiPullCmpActvLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiRtn() (Rte_Inst_CmnMfgSrv->Pim_DiRtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiStallMotTqLim() (Rte_Inst_CmnMfgSrv->Pim_DiStallMotTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiSysFricLrng() (Rte_Inst_CmnMfgSrv->Pim_DiSysFricLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiSysMotTqCmdRampRate() (Rte_Inst_CmnMfgSrv->Pim_DiSysMotTqCmdRampRate) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MfgDiagcInhb() (Rte_Inst_CmnMfgSrv->Pim_MfgDiagcInhb) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PerRunng() (Rte_Inst_CmnMfgSrv->Pim_PerRunng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SecuAcsSeedReqCmpl() (Rte_Inst_CmnMfgSrv->Pim_SecuAcsSeedReqCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SecuAcsUnlckd() (Rte_Inst_CmnMfgSrv->Pim_SecuAcsUnlckd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStReqEnaOvrd() (Rte_Inst_CmnMfgSrv->Pim_SysStReqEnaOvrd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CcaHwPartNr() (*Rte_Inst_CmnMfgSrv->Pim_CcaHwPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_CcaHwPartNr() (Rte_Inst_CmnMfgSrv->Pim_CcaHwPartNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CcaSerlNr() (*Rte_Inst_CmnMfgSrv->Pim_CcaSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_CcaSerlNr() (Rte_Inst_CmnMfgSrv->Pim_CcaSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_DiRestore() (*Rte_Inst_CmnMfgSrv->Pim_DiRestore) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_DiRestore() (Rte_Inst_CmnMfgSrv->Pim_DiRestore) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_EpsSysSerlNr() (*Rte_Inst_CmnMfgSrv->Pim_EpsSysSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_EpsSysSerlNr() (Rte_Inst_CmnMfgSrv->Pim_EpsSysSerlNr) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MfgTmpBuf0() (*Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf0) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MfgTmpBuf0() (Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf0) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MfgTmpBuf1() (*Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf1) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MfgTmpBuf1() (Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf1) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MfgTmpBuf2() (*Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf2) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MfgTmpBuf2() (Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf2) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MfgTmpBuf3() (*Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf3) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MfgTmpBuf3() (Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf3) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MfgTmpBuf4() (*Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf4) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MfgTmpBuf4() (Rte_Inst_CmnMfgSrv->Pim_MfgTmpBuf4) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_PerPidTbl() (*Rte_Inst_CmnMfgSrv->Pim_PerPidTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_PerPidTbl() (Rte_Inst_CmnMfgSrv->Pim_PerPidTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SeedKey() (*Rte_Inst_CmnMfgSrv->Pim_SeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SeedKey() (Rte_Inst_CmnMfgSrv->Pim_SeedKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_InpOutpCtrlAssiGain(void)
 *   float32 *Rte_Pim_InpOutpCtrlVehSpdOvrd(void)
 *   uint32 *Rte_Pim_IgnCntr(void)
 *   uint32 *Rte_Pim_SecuAcsAtmptTmr(void)
 *   uint32 *Rte_Pim_SessionTiOut(void)
 *   uint16 *Rte_Pim_PerCyc(void)
 *   uint16 *Rte_Pim_PerDivdr(void)
 *   uint16 *Rte_Pim_ReqLen(void)
 *   uint8 *Rte_Pim_NxtrMfgEnaCntr(void)
 *   uint8 *Rte_Pim_PerPidTblLen(void)
 *   uint8 *Rte_Pim_SecuAcsAtmptCntr(void)
 *   uint8 *Rte_Pim_SessionCurr(void)
 *   boolean *Rte_Pim_DiAssiMechTEstimn(void)
 *   boolean *Rte_Pim_DiDampg(void)
 *   boolean *Rte_Pim_DiDutyCycThermProtn(void)
 *   boolean *Rte_Pim_DiEotProtn(void)
 *   boolean *Rte_Pim_DiHysCmp(void)
 *   boolean *Rte_Pim_DiInertiaCmp(void)
 *   boolean *Rte_Pim_DiLoaSca(void)
 *   boolean *Rte_Pim_DiPullCmpActvCmd(void)
 *   boolean *Rte_Pim_DiPullCmpActvLrng(void)
 *   boolean *Rte_Pim_DiRtn(void)
 *   boolean *Rte_Pim_DiStallMotTqLim(void)
 *   boolean *Rte_Pim_DiSysFricLrng(void)
 *   boolean *Rte_Pim_DiSysMotTqCmdRampRate(void)
 *   boolean *Rte_Pim_MfgDiagcInhb(void)
 *   boolean *Rte_Pim_PerRunng(void)
 *   boolean *Rte_Pim_SecuAcsSeedReqCmpl(void)
 *   boolean *Rte_Pim_SecuAcsUnlckd(void)
 *   boolean *Rte_Pim_SysStReqEnaOvrd(void)
 *   uint8 *Rte_Pim_CcaHwPartNr(void)
 *   uint8 *Rte_Pim_CcaSerlNr(void)
 *   uint8 *Rte_Pim_DiRestore(void)
 *   uint8 *Rte_Pim_EpsSysSerlNr(void)
 *   uint8 *Rte_Pim_MfgTmpBuf0(void)
 *   uint8 *Rte_Pim_MfgTmpBuf1(void)
 *   uint8 *Rte_Pim_MfgTmpBuf2(void)
 *   uint8 *Rte_Pim_MfgTmpBuf3(void)
 *   uint8 *Rte_Pim_MfgTmpBuf4(void)
 *   uint16 *Rte_Pim_PerPidTbl(void)
 *   uint32 *Rte_Pim_SeedKey(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint32 Rte_CData_NvmIgnCntr_DefaultValue(void)
 *   uint8 Rte_CData_NvmMfgEnaCntr_DefaultValue(void)
 *   uint8 *Rte_CData_NvmNxtrSeedKey_DefaultValue(void)
 *   uint32 *Rte_CData_SeedKeyDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_CmnMfgSrvSecuAcsAtmptTiOut_Val(void)
 *   uint8 Rte_Prm_CmnMfgSrvSecuAcsMaxNrAtmpt_Val(void)
 *
 *********************************************************************************************************************/


# define CmnMfgSrv_START_SEC_CODE
# include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvCmnMfgSrvMaiFct_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CmnMfgSrvCmnMfgSrvMaiFct>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq3_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg0Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg1Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg2Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(sint32 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiLnrGain_Val(float32 data)
 *   Std_ReturnType Rte_Write_AssiLnrGainEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_IgnCntr_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MfgEnaSt_Val(MfgEnaSt1 data)
 *   Std_ReturnType Rte_Write_SysStImdtTranReqOff_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdOvrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdOvrdEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ClrAllDiagc_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrFricLrngOperMod_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrHwAgTrimVal_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrLtchCntrData_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrSnpshtData_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolGainReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolGainStReq_Oper(uint8 *CurrMeasEolGainSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsStReq_Oper(uint8 *CurrMeasEolOffsSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainReadReq_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg, float32 *CurrMeasMotCurrGainD_Arg, float32 *CurrMeasMotCurrGainE_Arg, float32 *CurrMeasMotCurrGainF_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainReadReqSngIvtr_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainWrReqSngIvtr_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsReadReq_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsDifD_Arg, float32 *CurrMeasMotCurrOffsDifE_Arg, float32 *CurrMeasMotCurrOffsDifF_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgD_Arg, float32 *CurrMeasMotCurrOffsLoAvrgE_Arg, float32 *CurrMeasMotCurrOffsLoAvrgF_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsReadReqSngIvtr_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsWrReqSngIvtr_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_FSnsrlsHwCentr_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetCtrlPrm_Oper(float32 *MotVelCtrlPropGain_Arg, float32 *MotVelCtrlIntgtrGain_Arg, float32 *MotVelCtrlDerivtvGain_Arg, float32 *MotVelCtrlAntiWdupLim_Arg, float32 *MotVelCtrlAntiWdupGain_Arg, float32 *MotVelCtrlDerivtvLpFilTiCon_Arg, float32 *MotVelCtrlTqCmdLim_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricData_Oper(float32 *FricOffs_Arg, float32 *BasLineFric_Arg, float32 *VehLrndFric_Arg, float32 *Hys_Arg, uint16 *RngCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricOffsOutpDi_Oper(boolean *FricOffsOutpDi_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetGearIdn_Oper(uint8 *GearIdn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgOffs_Oper(float32 *HwAgOffs_Arg, boolean *HwAgLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgOverTrvlCnt_Oper(uint8 *HwAgOverTrvlCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgTrimVal_Oper(float32 *HwAgTrimVal_Arg, boolean *HwAgTrimPrfmd_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwTqOffs_Oper(float32 *HwTqOffs_Arg, boolean *HwTqLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotCoggCmdPrm_Oper(s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotPrmNomEol_Oper(float32 *MotKeNom, float32 *MotRNom)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetMotPrmNomEol1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetMotRplCoggPrm_Oper(uint16 *CoggOrder1_Arg, s1p14 *CoggOrder1X_Arg, s1p14 *CoggOrder1Y_Arg, uint16 *CoggOrder2_Arg, s1p14 *CoggOrder2X_Arg, s1p14 *CoggOrder2Y_Arg, uint16 *CoggOrder3_Arg, s1p14 *CoggOrder3X_Arg, s1p14 *CoggOrder3Y_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotTqCmdSca_Oper(float32 *MotTqCmdSca_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetPullCmpPrm_Oper(float32 *PullCmpCmdTot_Arg, float32 *PullCmpShoTerm_Arg, float32 *PullCmpLongTerm_Arg, boolean *LrngEnad_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit1_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit1_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetYawRateOffs_Oper(float32 *VehYawRateOffs_Arg, boolean *VehYawRateLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0ClrLtch_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0AutoTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0ReadTrim_Oper(float32 *HwAg0MeasHwAg0WrOffsTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0TrimPrfmdSts_Oper(boolean *HwAg0MeasHwAg0OffsTrimPrfmdStsData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0WrTrim_Oper(float32 HwAg0MeasHwAg0WrTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1ClrLtch_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1AutoTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1ReadTrim_Oper(float32 *HwAg1MeasHwAg1WrOffsTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1TrimPrfmdSts_Oper(boolean *HwAg1MeasHwAg1OffsTrimPrfmdStsData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1WrTrim_Oper(float32 HwAg1MeasHwAg1WrTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0ReadTrim_Oper(float32 *HwTq0MeasHwTq0ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0TrimPrfmdSts_Oper(boolean *HwTq0MeasHwTq0OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0WrTrim_Oper(float32 HwTq0MeasHwTq0WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1ReadTrim_Oper(float32 *HwTq1MeasHwTq1ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1TrimPrfmdSts_Oper(boolean *HwTq1MeasHwTq1OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1WrTrim_Oper(float32 HwTq1MeasHwTq1WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2ReadTrim_Oper(float32 *HwTq2MeasHwTq2ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2TrimPrfmdSts_Oper(boolean *HwTq2MeasHwTq2OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2WrTrim_Oper(float32 HwTq2MeasHwTq2WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3ReadTrim_Oper(float32 *HwTq3MeasHwTq3ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3TrimPrfmdSts_Oper(boolean *HwTq3MeasHwTq3OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3WrTrim_Oper(float32 HwTq3MeasHwTq3WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ClrSnsrSca_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ReadSnsrSca_Oper(float32 *HwTqReadScaData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4SnsrScaPrfmdSts_Oper(boolean *HwTqScaPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4WrSnsrSca_Oper(float32 HwTqScaVal_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ClrSnsrSca_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ReadSnsrSca_Oper(float32 *HwTqReadScaData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5SnsrScaPrfmdSts_Oper(boolean *HwTqScaPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5WrSnsrSca_Oper(float32 HwTqScaVal_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_InitFricLrngTbl_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg0MeasMotAg0CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg0MeasMotAg0CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg1MeasMotAg1CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg1MeasMotAg1CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg5EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg5EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg6EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg6EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAgCmpBackEmfRead_Oper(u0p16 *MotAgBackEmfRead)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_MotAgCmpBackEmfRead1_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAgCmpBackEmfWr_Oper(u0p16 MotAgCmpBackEmfWrData)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_MotAgCmpBackEmfWr1_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAgMeasEolPrmRead_Oper(MotAgMeasEolPrmRec1 *MotAgEolPrmRead_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAgMeasEolPrmWr_Oper(const MotAgMeasEolPrmRec1 *MotAgSinCosEolCalData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, uint8 *CalAuthor, uint8 *CalVers, uint32 *CalTiStamp, uint8 *CalDescr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, uint32 *RelNr, uint8 *RelSt)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsPsrInfoRd_Oper(uint32 *PsrId, uint8 *PsrRev)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwBuildDateTiRd_Oper(uint8 *SwBuildDateTi)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelInfoRd_Oper(uint8 *SwOrigin, uint8 *SwAuthor)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelNrRd_Oper(uint8 *SwRelNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelVerRd_Oper(uint8 *SwRelVer)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PolarityCfgRead_Oper(uint32 *PolarityCfgSaved)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PolarityCfgRead1_E_NOT_OK
 *   Std_ReturnType Rte_Call_PolarityCfgWr_Oper(uint32 PolarityCfgSaved)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PolarityCfgWr1_E_NOT_OK
 *   Std_ReturnType Rte_Call_ReadExtdSnpshtData_Oper(SnpshtDataRec2 *ReadSnpshtDataAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadLtchCntrData_Oper(uint8 *ReadLtchCntrAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadNtcFltAry_Oper(ReadFltInfoRec1 *DiagcMgrReadFltInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadSnpshtData_Oper(SnpshtDataRec1 *ReadSnpshtDataAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstHwAgOverTrvlCnt_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstHwTq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstMaxHwAgCwAndCcw_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstPullCmp_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstSnsrlsHwCentr_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstYawAndAg_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SerlComRstEot_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricData_Oper(float32 FricOffs_Arg, const float32 *BasLineFric_Arg, const float32 *VehLrndFric_Arg, const float32 *Hys_Arg, const uint16 *RngCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetMotCoggCmdPrm_Oper(const s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetMotPrmNomEol_Oper(float32 MotKeNom, float32 MotRNom)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetMotPrmNomEol1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetPullCmpLongTerm_Oper(float32 PullCmpLongTerm_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetPullCmpShoTerm_Oper(float32 PullCmpShoTerm_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalGetPrm_Oper(float32 *BoostModlnIdx_Arg, float32 *HldModlnIdx_Arg, float32 *CoolDwnModlnIdx_Arg, uint8 *Ramp1Ti_Arg, uint8 *Ramp2Ti_Arg, uint8 *Ramp3Ti_Arg, uint8 *BoostTi_Arg, uint16 *HldTi_Arg, uint16 *CoolDwnTi_Arg, u0p16 *PosnStepSize_Arg, uint8 *ElecRevCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SwCalStop_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalStrt_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdErrInjReg_Oper(uint16 NtcNr_Arg, uint8 NtcStInfo_Arg, uint8 ErrInjNr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmCcaHwPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmCcaSerlNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmDiRestore_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmEpsSysSerlNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf0_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf1_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf2_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf3_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf4_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_EraseBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmnMfgSrvCmnMfgSrvMaiFct_Oper CmnMfgSrvCmnMfgSrvMaiFct_Oper
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_IgnCntr_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MfgEnaSt_Val(MfgEnaSt1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmnMfgSrvInit1 CmnMfgSrvInit1
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq3_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg0Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg1Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg2Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(sint32 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechTEstimnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DampgCmdBasDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DutyCycThermProtnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EotProtnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FricLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HysCmpCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_InertiaCmpVelCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LoaScaDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MfgDiagcInhb_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RtnCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_StallMotTqLimDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysMotTqCmdRampRateDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysStReqEnaOvrd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit1_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CmnMfgSrvPer1 CmnMfgSrvPer1
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStsCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStsCallBack>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, const uint16 *SnsrData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwCalStsCallBack_Oper SwCalStsCallBack_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CmnMfgSrv_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CmnMfgSrv_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(Ary1D_u16_12, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define CmnMfgSrv_STOP_SEC_CODE
# include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetMotPrmNomEol1_E_NOT_OK (1U)

# define RTE_E_GetNtcSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_MotAgCmpBackEmfRead1_E_NOT_OK (1U)

# define RTE_E_MotAgCmpBackEmfWr1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK (1U)

# define RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK (1U)

# define RTE_E_PolarityCfgRead1_E_NOT_OK (1U)

# define RTE_E_PolarityCfgWr1_E_NOT_OK (1U)

# define RTE_E_SetManTqCmd1_E_NOT_OK (1U)

# define RTE_E_SetMotPrmNomEol1_E_NOT_OK (1U)

# define RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1511166120
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/NM001A_CmnMfgSrv_Impl-kzdyfh/NM001A_CmnMfgSrv_Impl/tools/contract/Rte_CmnMfgSrv.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1511166120
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CMNMFGSRV_H */
