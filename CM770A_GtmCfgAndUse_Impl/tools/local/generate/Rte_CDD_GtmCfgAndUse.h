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
 *          File:  Rte_CDD_GtmCfgAndUse.h
 *        Config:  E:/EA4NewTemplate/CM770A_GtmCfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_GtmCfgAndUse
 *  Generated at:  Wed Feb 28 10:09:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_GtmCfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_GTMCFGANDUSE_H
# define _RTE_CDD_GTMCFGANDUSE_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_GtmCfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_GtmCfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AdcStrtOfCnvn2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AdcStrtOfCnvnPeak; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Dma2MilliSecToMotCtrlTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DmaMotAgATrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DmaMotCtrlTo2MilliSecTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissUpdCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissUpdIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaAFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaBFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaCFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PhaOnTiCntrCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_GtmCfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_CDD_GtmCfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_GtmCfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_IvtrFetFltPha_Val (0U)
# define Rte_InitValue_MotCurrEolCalSt_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdA_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdB_Val (0U)
# define Rte_InitValue_PhaOnTiMeasdC_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_GtmCfgAndUse_IvtrFetFltPha_Val(P2VAR(IvtrFetFltPha1, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_GtmCfgAndUse_MotCurrEolCalSt_Val(P2VAR(MotCurrEolCalSt2, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_GtmCfgAndUse_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolFixdPwmPerd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolOffsHiCmuOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolOffsLoCmuOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDmaMotAgATrig_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUsePwmDbnd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_IvtrFetFltPha_Val Rte_Read_CDD_GtmCfgAndUse_IvtrFetFltPha_Val
# define Rte_Read_MotCurrEolCalSt_Val Rte_Read_CDD_GtmCfgAndUse_MotCurrEolCalSt_Val
# define Rte_Read_SysSt_Val Rte_Read_CDD_GtmCfgAndUse_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PhaOnTiMeasdA_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val
# define Rte_Write_PhaOnTiMeasdB_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val
# define Rte_Write_PhaOnTiMeasdC_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaALowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaAUpprCmd_Oper
# define Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaBLowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaBUpprCmd_Oper
# define Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaCLowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctGpioPhaCUpprCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaALowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper
# define Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaALowrCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaAUpprCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaBLowrCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaBUpprCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaCLowrCmd_Oper
# define Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper Rte_Call_CDD_GtmCfgAndUse_IoHwAb_SetGpioPhaCUpprCmd_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_CurrMeasEolFixdPwmPerd_Val Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolFixdPwmPerd_Val

# define Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolOffsHiCmuOffs_Val

# define Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val Rte_Prm_CDD_GtmCfgAndUse_CurrMeasEolOffsLoCmuOffs_Val

# define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val

# define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val

# define Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val

# define Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDmaMotAgATrig_Val

# define Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val

# define Rte_Prm_GtmCfgAndUsePwmDbnd_Val Rte_Prm_CDD_GtmCfgAndUse_GtmCfgAndUsePwmDbnd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AdcStrtOfCnvn2() (Rte_Inst_CDD_GtmCfgAndUse->Pim_AdcStrtOfCnvn2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AdcStrtOfCnvnPeak() (Rte_Inst_CDD_GtmCfgAndUse->Pim_AdcStrtOfCnvnPeak) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Dma2MilliSecToMotCtrlTrig() (Rte_Inst_CDD_GtmCfgAndUse->Pim_Dma2MilliSecToMotCtrlTrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DmaMotAgATrig() (Rte_Inst_CDD_GtmCfgAndUse->Pim_DmaMotAgATrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DmaMotCtrlTo2MilliSecTrig() (Rte_Inst_CDD_GtmCfgAndUse->Pim_DmaMotCtrlTo2MilliSecTrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiCntrAPrev() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaOnTiCntrAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiCntrBPrev() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaOnTiCntrBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaOnTiCntrCPrev() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaOnTiCntrCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissUpdCntr() (Rte_Inst_CDD_GtmCfgAndUse->Pim_MissUpdCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissUpdIninCntr() (Rte_Inst_CDD_GtmCfgAndUse->Pim_MissUpdIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaAFetFldSts() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaAFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaBFetFldSts() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaBFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PhaCFetFldSts() (Rte_Inst_CDD_GtmCfgAndUse->Pim_PhaCFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStEnaPrev() (Rte_Inst_CDD_GtmCfgAndUse->Pim_SysStEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_AdcStrtOfCnvn2(void)
 *   uint32 *Rte_Pim_AdcStrtOfCnvnPeak(void)
 *   uint32 *Rte_Pim_Dma2MilliSecToMotCtrlTrig(void)
 *   uint32 *Rte_Pim_DmaMotAgATrig(void)
 *   uint32 *Rte_Pim_DmaMotCtrlTo2MilliSecTrig(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrAPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrBPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrCPrev(void)
 *   uint16 *Rte_Pim_MissUpdCntr(void)
 *   uint8 *Rte_Pim_MissUpdIninCntr(void)
 *   boolean *Rte_Pim_PhaAFetFldSts(void)
 *   boolean *Rte_Pim_PhaBFetFldSts(void)
 *   boolean *Rte_Pim_PhaCFetFldSts(void)
 *   boolean *Rte_Pim_SysStEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUsePwmDbnd_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_GtmCfgAndUse_START_SEC_CODE
# include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmCfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GtmCfgAndUseInit1 GtmCfgAndUseInit1
FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUseInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmCfgAndUsePer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_IvtrFetFltPha_Val(IvtrFetFltPha1 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdA_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdB_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdC_Val(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GtmCfgAndUsePer2 GtmCfgAndUsePer2
FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUsePer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmGetSent0Data_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GtmGetSent0Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GtmGetSent0Data_Oper(uint32 *BufStrt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GtmGetSentData_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GtmGetSent0Data_Oper GtmGetSent0Data_Oper
FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent0Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmGetSent1Data_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GtmGetSent1Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GtmGetSent1Data_Oper(uint32 *BufStrt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GtmGetSentData_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GtmGetSent1Data_Oper GtmGetSent1Data_Oper
FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent1Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_GtmCfgAndUse_STOP_SEC_CODE
# include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GtmGetSentData_PortIf2_E_NOT_OK (1U)

# define RTE_E_SetFctGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_GTMCFGANDUSE_H */

#include "Rte_Stubs.h"
