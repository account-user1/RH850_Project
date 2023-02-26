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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_GtmCfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_GTMCFGANDUSE_H
# define _RTE_CDD_GTMCFGANDUSE_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_GtmCfgAndUse_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IvtrFetFltPha1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltPha_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotCurrEolCalSt2, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrEolCalSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_IvtrFetFltPha_Val (0U)
#  define Rte_InitValue_MotCurrEolCalSt_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdA_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdB_Val (0U)
#  define Rte_InitValue_PhaOnTiMeasdC_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_IvtrFetFltPha_Val Rte_Read_CDD_GtmCfgAndUse_IvtrFetFltPha_Val
#  define Rte_Read_CDD_GtmCfgAndUse_IvtrFetFltPha_Val(data) (*(data) = Rte_GateDrv0Ctrl_IvtrFetFltPha_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotCurrEolCalSt_Val Rte_Read_CDD_GtmCfgAndUse_MotCurrEolCalSt_Val
#  define Rte_Read_CDD_GtmCfgAndUse_MotCurrEolCalSt_Val(data) (*(data) = Rte_CDD_CurrMeas_MotCurrEolCalSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_CDD_GtmCfgAndUse_SysSt_Val
#  define Rte_Read_CDD_GtmCfgAndUse_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PhaOnTiMeasdA_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val
#  define Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val(data) (Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaOnTiMeasdB_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val
#  define Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val(data) (Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PhaOnTiMeasdC_Val Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val
#  define Rte_Write_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val(data) (Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper IoHwAb_SetFctGpioPhaALowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper IoHwAb_SetFctGpioPhaAUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper IoHwAb_SetFctGpioPhaBLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper IoHwAb_SetFctGpioPhaBUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper IoHwAb_SetFctGpioPhaCLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper IoHwAb_SetFctGpioPhaCUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper IoHwAb_SetFctPeriphPhaALowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper IoHwAb_SetFctPeriphPhaAUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper IoHwAb_SetFctPeriphPhaBLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper IoHwAb_SetFctPeriphPhaBUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper IoHwAb_SetFctPeriphPhaCLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper IoHwAb_SetFctPeriphPhaCUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaALowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper IoHwAb_SetGpioPhaALowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaAUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper IoHwAb_SetGpioPhaAUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaBLowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper IoHwAb_SetGpioPhaBLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaBUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper IoHwAb_SetGpioPhaBUpprCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaCLowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper IoHwAb_SetGpioPhaCLowrCmd_Oper
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPhaCUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper IoHwAb_SetGpioPhaCUpprCmd_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_CurrMeasEolFixdPwmPerd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolFixdPwmPerd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsHiCmuOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->CurrMeasEolOffsLoCmuOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUseAdcStrtOfCnvn2Offs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUseDmaMotAgATrig_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_GtmCfgAndUsePwmDbnd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->GtmCfgAndUsePwmDbnd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvn2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvnPeak; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_Dma2MilliSecToMotCtrlTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotAgATrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotCtrlTo2MilliSecTrig; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrAPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrBPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrCPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaAFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaBFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaCFetFldSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_SysStEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_AdcStrtOfCnvn2() \
  (&Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvn2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AdcStrtOfCnvnPeak() \
  (&Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvnPeak) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Dma2MilliSecToMotCtrlTrig() \
  (&Rte_CDD_GtmCfgAndUse_Dma2MilliSecToMotCtrlTrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DmaMotAgATrig() \
  (&Rte_CDD_GtmCfgAndUse_DmaMotAgATrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_DmaMotCtrlTo2MilliSecTrig() \
  (&Rte_CDD_GtmCfgAndUse_DmaMotCtrlTo2MilliSecTrig) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiCntrAPrev() \
  (&Rte_CDD_GtmCfgAndUse_PhaOnTiCntrAPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiCntrBPrev() \
  (&Rte_CDD_GtmCfgAndUse_PhaOnTiCntrBPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaOnTiCntrCPrev() \
  (&Rte_CDD_GtmCfgAndUse_PhaOnTiCntrCPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissUpdCntr() \
  (&Rte_CDD_GtmCfgAndUse_MissUpdCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissUpdIninCntr() \
  (&Rte_CDD_GtmCfgAndUse_MissUpdIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaAFetFldSts() \
  (&Rte_CDD_GtmCfgAndUse_PhaAFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaBFetFldSts() \
  (&Rte_CDD_GtmCfgAndUse_PhaBFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PhaCFetFldSts() \
  (&Rte_CDD_GtmCfgAndUse_PhaCFetFldSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStEnaPrev() \
  (&Rte_CDD_GtmCfgAndUse_SysStEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_GtmCfgAndUse_START_SEC_CODE
# include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_GtmCfgAndUseInit1 GtmCfgAndUseInit1
#  define RTE_RUNNABLE_GtmCfgAndUsePer2 GtmCfgAndUsePer2
#  define RTE_RUNNABLE_GtmGetSent0Data_Oper GtmGetSent0Data_Oper
#  define RTE_RUNNABLE_GtmGetSent1Data_Oper GtmGetSent1Data_Oper
# endif

FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUseInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUsePer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent0Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent1Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_GtmCfgAndUse_STOP_SEC_CODE
# include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GtmGetSentData_PortIf2_E_NOT_OK (1U)

#  define RTE_E_SetFctGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_GTMCFGANDUSE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
