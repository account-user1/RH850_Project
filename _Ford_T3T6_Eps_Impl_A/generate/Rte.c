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
 *          File:  Rte.c
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_AAACalRegn01Rt01_Dummy.h"
#include "Rte_AAACalRegn02Rt01GroupA_Dummy.h"
#include "Rte_AAACalRegn02Rt01GroupB_Dummy.h"
#include "Rte_Adcf1CfgAndUse.h"
#include "Rte_Assi.h"
#include "Rte_AssiHiFrq.h"
#include "Rte_AssiPahSum.h"
#include "Rte_AssiSumLim.h"
#include "Rte_BattVltg.h"
#include "Rte_BattVltgCorrln.h"
#include "Rte_BswM.h"
#include "Rte_CDD_Adcf0CfgAndUse.h"
#include "Rte_CDD_ChkPtAppl10.h"
#include "Rte_CDD_ClkCfgAndMon.h"
#include "Rte_CDD_CoreVltgMonr.h"
#include "Rte_CDD_CurrMeas.h"
#include "Rte_CDD_CurrMeasArbn.h"
#include "Rte_CDD_DmaCfgAndUse.h"
#include "Rte_CDD_EcmOutpAndDiagc.h"
#include "Rte_CDD_ExcpnHndlg.h"
#include "Rte_CDD_FlsMem.h"
#include "Rte_CDD_FordBlaBoxIfCmn.h"
#include "Rte_CDD_FordBlaBoxIfCmp1.h"
#include "Rte_CDD_FordBlaBoxIfCmp2.h"
#include "Rte_CDD_FordT3T6McuCfg.h"
#include "Rte_CDD_GtmCfgAndUse.h"
#include "Rte_CDD_GuardCfgAndDiagc.h"
#include "Rte_CDD_HwTq1Meas.h"
#include "Rte_CDD_HwTq8Meas.h"
#include "Rte_CDD_McuCoreCfgAndDiagc.h"
#include "Rte_CDD_McuDiagc.h"
#include "Rte_CDD_MotAg5Meas.h"
#include "Rte_CDD_MotAg6Meas.h"
#include "Rte_CDD_MotAgArbn.h"
#include "Rte_CDD_MotAgCmp.h"
#include "Rte_CDD_MotAgSwCal.h"
#include "Rte_CDD_MotCtrlMgr.h"
#include "Rte_CDD_MotCurrRegVltgLimr.h"
#include "Rte_CDD_MotRplCoggCmd.h"
#include "Rte_CDD_MotVel.h"
#include "Rte_CDD_NvMProxy.h"
#include "Rte_CDD_NxtrTi.h"
#include "Rte_CDD_RamMem.h"
#include "Rte_CDD_SinVltgGenn.h"
#include "Rte_CDD_SyncCrc.h"
#include "Rte_CDD_Uart0CfgAndUse.h"
#include "Rte_CDD_Uart1CfgAndUse.h"
#include "Rte_CDD_VrfyCritReg.h"
#include "Rte_CDD_XcpIf.h"
#include "Rte_CmnMfgSrv.h"
#include "Rte_CmplncErr.h"
#include "Rte_ComM.h"
#include "Rte_CurrMeasCorrln.h"
#include "Rte_CustDiag.h"
#include "Rte_Dampg.h"
#include "Rte_DampgPahSum.h"
#include "Rte_Dcm.h"
#include "Rte_Dem.h"
#include "Rte_Det.h"
#include "Rte_DiagSrv.h"
#include "Rte_DiagcMgr.h"
#include "Rte_DiagcMgrProxyAppl10.h"
#include "Rte_DiagcMgrStub.h"
#include "Rte_DrvrTqEstimn.h"
#include "Rte_DualCtrlrOutpMgr.h"
#include "Rte_DualEcuIdn.h"
#include "Rte_DutyCycThermProtn.h"
#include "Rte_EcuM.h"
#include "Rte_EcuTMeas.h"
#include "Rte_ElecPwrCns.h"
#include "Rte_EotLrng.h"
#include "Rte_EotProtn.h"
#include "Rte_EotProtnFwl.h"
#include "Rte_FltInj.h"
#include "Rte_FordCanDtcInhb.h"
#include "Rte_FordCmdArbn.h"
#include "Rte_FordDualEcuFltDiagcCom.h"
#include "Rte_FordHwAgArbn.h"
#include "Rte_FordHwTqCdng.h"
#include "Rte_FordHwTqCmdOvrlLimr.h"
#include "Rte_FordMotTqCmdOvrlLimr.h"
#include "Rte_FordMsg077BusHiSpd.h"
#include "Rte_FordMsg07DBusHiSpd.h"
#include "Rte_FordMsg07EBusHiSpd.h"
#include "Rte_FordMsg082BusHiSpd.h"
#include "Rte_FordMsg083BusHiSpd.h"
#include "Rte_FordMsg091BusHiSpd.h"
#include "Rte_FordMsg167BusHiSpd.h"
#include "Rte_FordMsg202BusHiSpd.h"
#include "Rte_FordMsg213BusHiSpd.h"
#include "Rte_FordMsg215BusHiSpd.h"
#include "Rte_FordMsg216BusHiSpd.h"
#include "Rte_FordMsg217BusHiSpd.h"
#include "Rte_FordMsg230BusHiSpd.h"
#include "Rte_FordMsg2FDBusHiSpd.h"
#include "Rte_FordMsg3B3BusHiSpd.h"
#include "Rte_FordMsg3CABusHiSpd.h"
#include "Rte_FordMsg3CCBusHiSpd.h"
#include "Rte_FordMsg3D3BusHiSpd.h"
#include "Rte_FordMsg3D7BusHiSpd.h"
#include "Rte_FordMsg40ABusHiSpd.h"
#include "Rte_FordMsg414BusHiSpd.h"
#include "Rte_FordMsg415BusHiSpd.h"
#include "Rte_FordMsg417BusHiSpd.h"
#include "Rte_FordMsg41ABusHiSpd.h"
#include "Rte_FordMsg41EBusHiSpd.h"
#include "Rte_FordMsg430BusHiSpd.h"
#include "Rte_FordMsg443BusHiSpd.h"
#include "Rte_FordMsg459BusHiSpd.h"
#include "Rte_FordMsg47ABusHiSpd.h"
#include "Rte_FordMsg4B0BusHiSpd.h"
#include "Rte_FordMsg5B5BusHiSpd.h"
#include "Rte_FordSysSt.h"
#include "Rte_FordVehSpdArbn.h"
#include "Rte_FordVltgIf.h"
#include "Rte_GateDrv0Ctrl.h"
#include "Rte_HiLoadStallLimr.h"
#include "Rte_HwAg1Meas.h"
#include "Rte_HwAgArbn.h"
#include "Rte_HwAgCorrln.h"
#include "Rte_HwAgSnsrls.h"
#include "Rte_HwAgSysArbn.h"
#include "Rte_HwTq10Meas.h"
#include "Rte_HwTq9Meas.h"
#include "Rte_HwTqArbn.h"
#include "Rte_HwTqCorrln.h"
#include "Rte_HysCmp.h"
#include "Rte_ImcArbn.h"
#include "Rte_ImcSigArbn.h"
#include "Rte_InertiaCmpVel.h"
#include "Rte_IoHwAb.h"
#include "Rte_LimrCdng.h"
#include "Rte_LoaMgr.h"
#include "Rte_MotAg2Meas.h"
#include "Rte_MotAgCorrln.h"
#include "Rte_MotCtrlPrmEstimn.h"
#include "Rte_MotCurrPeakEstimn.h"
#include "Rte_MotCurrRegCfg.h"
#include "Rte_MotQuadDetn.h"
#include "Rte_MotRefMdl.h"
#include "Rte_MotRplCoggCfg.h"
#include "Rte_MotTqCmdSca.h"
#include "Rte_MotTqTranlDampg.h"
#include "Rte_MotVelCtrl.h"
#include "Rte_NvM.h"
#include "Rte_NvMProxy.h"
#include "Rte_NxtrCalIds.h"
#include "Rte_NxtrMath.h"
#include "Rte_NxtrSwIds.h"
#include "Rte_Os_OsCore_CORE0_swc.h"
#include "Rte_PolarityCfg.h"
#include "Rte_PosnTrakgServo.h"
#include "Rte_PwrDiscnct.h"
#include "Rte_PwrLimr.h"
#include "Rte_PwrSply.h"
#include "Rte_PwrUpSeq.h"
#include "Rte_Rtn.h"
#include "Rte_RtnPahFwl.h"
#include "Rte_ShtdwnMech.h"
#include "Rte_StOutpCtrl.h"
#include "Rte_StabyCmp.h"
#include "Rte_StackMeas.h"
#include "Rte_Swp.h"
#include "Rte_SysFricLrng.h"
#include "Rte_SysPrfmncSts.h"
#include "Rte_SysStMod.h"
#include "Rte_TEstimn.h"
#include "Rte_TmplMonr.h"
#include "Rte_TqLoa.h"
#include "Rte_TunSelnAuthy.h"
#include "Rte_TunSelnMngt.h"
#include "Rte_VehSigCdng.h"
#include "Rte_VehSpdLimr.h"
#include "Rte_WdgM_Appl10.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanNm.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_ChkPt.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_EcuM.h"
#include "SchM_Fee_30_SmallSector.h"
#include "SchM_Fls.h"
#include "SchM_IoHwAb.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NvM.h"
#include "SchM_NvMProxy.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_Spi.h"
#include "SchM_WdgM.h"
#include "SchM_Wdg_59_DriverA.h"
#include "SchM_Xcp.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalUM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelUM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelUM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelUM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(SchM_ConfigType, RTE_CONST) Rte_Config_ECU1 = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U
};

CONST(SchM_ConfigType, RTE_CONST) Rte_Config_ECU2 = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  1U
};


#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

P2CONST(SchM_ConfigType, AUTOMATIC, RTE_CONST) Rte_VarCfgPtr;

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Constants
 *********************************************************************************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u08_17, RTE_CONST) Rte_C_Ary1D_u08_17_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u0p16_8, RTE_CONST) Rte_C_Ary1D_u0p16_8_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u16_32, RTE_CONST) Rte_C_Ary1D_u16_32_0 = {
  0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U, 
  25U, 26U, 27U, 28U, 29U, 30U, 31U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u16p0_2, RTE_CONST) Rte_C_Ary1D_u16p0_2_1 = {
  0U, 100U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u2p14_2, RTE_CONST) Rte_C_Ary1D_u2p14_2_1 = {
  16384U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u32_8, RTE_CONST) Rte_C_Ary1D_u32_8_0 = {
  0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ary1D_u8_48, RTE_CONST) Rte_C_Ary1D_u8_48_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(Ford_VehicleGGCCData, RTE_CONST) Rte_C_Ford_VehicleGGCCData_0 = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
CONST(MotAgRtPrmRec1, RTE_CONST) Rte_C_MotAgRtPrmRec1_0 = {
  2.5F, 1.0F, 2.5F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.5F, 2.5F
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Calibration Parameters (SW-C local and calibration component calibration parameters)
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Rte_ParameterBaseType, RTE_VAR_NOINIT) RteParameterBase;

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_Calprm_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.0F,
  10.0F,
  FALSE,
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  },
  {
    20480U, 20480U, 20480U, 20480U, 20480U, 20480U
  }
};
CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  8.8F,
  16.0F,
  0.73F,
  10.0F,
  16.0F,
  9.0F,
  10.5F,
  15.5F,
  9.5F,
  16.0F,
  6.0F,
  76.0F,
  56.0F,
  66.66F,
  45.0F,
  16.0F,
  262500.0F,
  2.8F,
  2.3F,
  2.5F,
  3.0F,
  2.0F,
  2.8F,
  0.0625F,
  0.1F,
  0.122F,
  0.99F,
  100.0F,
  0.1F,
  0.1F,
  2.8F,
  0.0625F,
  0.1F,
  0.122F,
  0.99F,
  100.0F,
  0.1F,
  0.1F,
  3.0F,
  0.0F,
  0.0F,
  100.0F,
  0.0F,
  100.0F,
  100.0F,
  100.0F,
  0.0F,
  200.0F,
  9.0F,
  -4.5F,
  500.0F,
  14.5F,
  -14.5F,
  0.0F,
  1.0F,
  0.625F,
  12.0F,
  1.375F,
  0.3F,
  0.3F,
  70.0F,
  0.5F,
  0.5F,
  0.3F,
  0.3F,
  0.0005F,
  1.8F,
  0.9F,
  1.0F,
  1.0F,
  0.035F,
  0.025F,
  0.025F,
  0.2F,
  5.0F,
  0.1F,
  0.1F,
  5.0F,
  0.0F,
  20.0F,
  3.0F,
  0.2F,
  4000.0F,
  0.0F,
  600.0F,
  0.2F,
  1e-05F,
  0.1F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  1.0F,
  5.0F,
  100.0F,
  1.0F,
  1500.0F,
  5.0F,
  1.0F,
  1.0F,
  1.0F,
  10000.0F,
  2.85F,
  1.0F,
  0.0F,
  0.0052F,
  0.005F,
  -0.001F,
  0.045F,
  0.031F,
  0.04F,
  1.0F,
  0.00013F,
  0.00013F,
  0.0001F,
  0.00011889F,
  0.00013F,
  0.00013F,
  0.0001F,
  0.00011889F,
  0.032F,
  0.01246F,
  0.0139F,
  0.0039F,
  25.0F,
  8.0F,
  0.03F,
  255.0F,
  0.000125F,
  9.375e-05F,
  1.0F,
  1.0F,
  10.0F,
  0.0F,
  0.1F,
  1.0F,
  125.0F,
  0.0026526F,
  0.015F,
  0.25F,
  0.365F,
  0.0335999F,
  0.5F,
  1.0F,
  0.6F,
  13.5F,
  100.0F,
  3.125F,
  3125.0F,
  91.0F,
  8.8F,
  18.0F,
  17.5F,
  9.0F,
  11.3F,
  10.0F,
  8.8F,
  8.8F,
  0.5F,
  0.0117F,
  4.5F,
  -15.625F,
  1.0F,
  0.75F,
  7.8125F,
  1.908F,
  0.0F,
  -4.0F,
  0.1F,
  2.0F,
  16.0F,
  0.0211F,
  2.7305F,
  0.0F,
  0.0F,
  100.0F,
  0.0F,
  0.2F,
  100.0F,
  1.0F,
  5.0F,
  120.0F,
  20.0F,
  140.0F,
  120.0F,
  62500U,
  50000U,
  6250U,
  11000U,
  30000U,
  25000U,
  5000U,
  25000U,
  25000U,
  25000U,
  200U,
  0U,
  180000U,
  1500U,
  2000U,
  500U,
  500U,
  0U,
  0U,
  0U,
  0U,
  20480,
  65535U,
  65535U,
  410U,
  272U,
  327U,
  327U,
  327U,
  327U,
  327U,
  327U,
  5U,
  20U,
  16384U,
  16384U,
  0U,
  0U,
  0U,
  512U,
  512U,
  92U,
  2000U,
  0U,
  0U,
  100U,
  0U,
  0U,
  100U,
  100U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  500U,
  0U,
  100U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  5000U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  100U,
  0U,
  100U,
  0U,
  5000U,
  100U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  100U,
  0U,
  100U,
  100U,
  100U,
  0U,
  0U,
  100U,
  0U,
  200U,
  0U,
  200U,
  5000U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  5000U,
  5000U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  0U,
  100U,
  0U,
  100U,
  0U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  5000U,
  5000U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  5000U,
  1000U,
  0U,
  0U,
  0U,
  0U,
  1000U,
  0U,
  1000U,
  5000U,
  1000U,
  0U,
  500U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  500U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  1000U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  100U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  0U,
  0U,
  0U,
  0U,
  5000U,
  0U,
  5000U,
  100U,
  0U,
  0U,
  0U,
  100U,
  100U,
  0U,
  0U,
  100U,
  100U,
  4096U,
  2048U,
  4096U,
  2048U,
  4096U,
  2048U,
  2832U,
  3598U,
  4622U,
  7924U,
  5000U,
  132U,
  132U,
  3277U,
  819U,
  2000U,
  52424U,
  13106U,
  52424U,
  13106U,
  52424U,
  13106U,
  70U,
  5U,
  20U,
  0U,
  200U,
  1U,
  1U,
  200U,
  10U,
  2U,
  0U,
  0U,
  0U,
  4U,
  4U,
  0U,
  0U,
  0U,
  1U,
  2U,
  5U,
  2U,
  0U,
  0U,
  2U,
  5U,
  5U,
  1U,
  0U,
  2U,
  3U,
  10U,
  3U,
  0U,
  0U,
  0U,
  0U,
  TRUE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  TRUE,
  TRUE,
  FALSE,
  FALSE,
  TRUE,
  FALSE,
  FALSE,
  FALSE,
  TRUE,
  FALSE,
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 
    34560U, 34560U, 34560U, 34560U, 34560U, 34560U, 34560U
  },
  {
    {-0.17159F, 0.00010352F, 1.1696F, 0.00024516F, 1.9834e-05F}, {-240.58F, 0.060289F, 240.53F, 0.17028F, 0.047148F}, {
    0.0018246F, -4.2826e-06F, 0.99616F, 0.00025897F, -2.8965e-07F}, {-6.1943F, 0.014635F, 5.9127F, 0.11656F, 0.00098854F
    }, {-70.875F, -0.28572F, 70.86F, 0.053221F, 0.98679F}
  },
  {
    {3.2994e-07F, 0.0081464F, 0.0019034F, 0.0016485F}, {0.00045434F, 1.6329F, 0.0015119F, 0.76734F}, {1.1488e-06F, 
    -2.4566e-05F, 0.0019002F, 0.001743F}, {0.0027499F, 0.045004F, 0.00025007F, 0.86756F}, {0.0001448F, 0.50816F, 
    -2.5948e-05F, 0.23299F}
  },
  {
    0.0F, 0.0F, 0.0F, 0.0F, 1.0F
  },
  {
    0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    122, 123, 125, 127
  },
  {
    122, 123, 125, 127
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    122, 123, 125, 127
  },
  {
    122, 123, 125, 127
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    346U, 287U, 234U, 0U
  },
  {
    {128U, 128U, 128U, 44U, 44U}, {128U, 128U, 128U, 44U, 44U}
  },
  {
    {124U, 124U, 124U, 40U, 40U}, {124U, 124U, 124U, 40U, 40U}
  },
  {
    127U, 127U, 127U, 1630U, 1630U
  },
  {
    133U, 133U, 133U, 180U, 180U
  },
  {
    127U, 127U, 127U, 1630U, 1630U
  },
  {
    133U, 133U, 133U, 180U, 180U
  },
  {
    159U, 159U, 159U, 281U, 281U
  },
  {
    167U, 167U, 167U, 310U, 310U
  },
  {
    159U, 159U, 159U, 281U, 281U
  },
  {
    167U, 167U, 167U, 310U, 310U
  },
  {
    199U, 199U, 199U, 1282U, 1282U
  },
  {
    210U, 210U, 210U, 1707U, 1707U
  },
  {
    199U, 199U, 199U, 1282U, 1282U
  },
  {
    210U, 210U, 210U, 1707U, 1707U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    998U, 998U, 998U, 9535U, 9535U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    1U, 1U, 1U, 1U, 1U
  },
  {
    -40, 0, 83, 84, 85
  },
  {
    -40, 0, 83, 84, 85
  },
  {
    {0U, 76U, 80U, 84U, 88U, 92U, 96U, 100U}, {0U, 76U, 80U, 84U, 88U, 92U, 96U, 100U}
  },
  {
    {346U, 346U, 346U, 346U, 287U, 234U, 181U, 128U}, {346U, 346U, 346U, 346U, 287U, 234U, 181U, 128U}
  },
  {
    18973U, 18973U, 14553U, 11989U, 9011U, 0U
  },
  {
    0U, 1280U, 2560U, 3840U, 5120U, 6400U, 7680U, 8960U, 10240U, 11520U, 12800U, 14080U, 15360U, 16640U, 19200U, 21760U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16384U, 16370U, 16336U, 16276U, 
    16095U, 15869U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 16000U
  },
  {
    0U, 3200U, 6400U, 9600U, 12800U, 16000U, 19200U
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {
    16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}, {16384U, 16384U, 16384U, 16384U, 16384U, 16305U, 16096U}
  },
  {
    12800U, 19200U, 19200U, 19200U
  },
  {
    12800U, 19200U, 19200U, 19200U
  },
  {
    0U, 32U, 160U, 320U
  },
  {
    38400U, 38400U, 38400U, 38400U
  },
  {
    38400U, 38400U, 38400U, 38400U
  },
  {
    0U, 6144U, 7168U, 8192U, 9216U, 10240U, 12288U, 14336U, 16384U, 18432U, 20480U
  },
  {
    0U, 16384U, 19661U, 22938U, 23757U, 25395U, 27034U, 27853U, 29491U, 31130U, 32768U
  },
  {
    -3.1415927F, -2.3561945F, -1.5707964F, -0.7853982F, 0.0F, 0.7853982F, 1.5707964F, 2.3561945F
  },
  {
    0U, 3200U, 6400U, 9600U, 16000U, 19200U, 22400U, 25600U, 28800U, 35200U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 3200U, 6400U, 9600U, 16000U, 19200U, 22400U, 25600U, 28800U, 35200U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    16384U, 16384U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    -17600, -12800, -10400, -8800, -5657, -4600, -3499, -1731, 0, 1731, 3499, 4600, 5657, 8800
  },
  {
    1475U, 2867U, 3891U, 4710U, 7168U, 8397U, 9486U, 9486U, 9486U, 9486U, 7277U, 5994U, 4506U, 0U
  },
  {
    0U, 2182U, 5717U, 7919U, 10034U, 16320U
  },
  {
    17496U, 18728U, 18928U, 19136U, 19336U, 19544U, 20568U, 21592U, 22208U, 25280U
  },
  {
    3395U, 2859U, 2769U, 2680U, 2591U, 2501U, 2054U, 1608U, 1340U, 0U
  },
  {
    2880U, 2880U, 2880U, 2240U, 1664U, 1408U, 1216U, 832U
  },
  {
    0U, 2294U, 5243U, 16384U
  },
  {
    {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 
    32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}, {32768U, 32768U, 0U, 0U}
  },
  {
    0U, 6144U, 9920U, 6784U, 4928U, 3968U, 3520U, 384U
  },
  {
    320U, 640U, 1920U, 3840U, 6400U
  },
  {
    0U, 32768U, 32768U, 32768U, 32768U
  },
  {
    320U, 640U, 1280U, 1920U, 2560U, 3200U, 3840U, 7680U
  },
  {
    0U, 3200U, 6400U, 8320U, 9600U
  },
  {
    18022U, 18022U, 18022U, 18022U, 18022U
  }
};
CONST(Rte_Calprm_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.2F,
  0.0005F,
  2e-05F,
  0.006F,
  9e-06F,
  0.0F,
  15.0F,
  1.0F,
  1.0F,
  15.0F,
  15.0F,
  15.0F,
  8.0F,
  8.0F,
  {
    -5120, -4480, -3840, -2560, -1280, 0, 1280, 2560, 3840, 5120, 6400, 7680, 8960, 11520
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    0U, 12800U, 25600U, 38400U, 51200U, 65408U
  }
};
CONST(Rte_Calprm_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  1.0F,
  0.0F,
  0.1F,
  250.0F,
  0.0F,
  {
    0U, 26U, 51U, 77U, 128U, 256U, 512U, 768U, 1024U, 2560U
  },
  {
    0U, 164U, 328U, 819U, 1638U, 3277U, 8192U, 11469U, 16384U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U, 16261U
  },
  {
    5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U, 5780U
  },
  {
    -326, -326, -326, -326, -326, -326, -326, -326, -326, -326, -326, -326
  },
  {
    222, 222, 222, 222, 222, 222, 222, 222, 222, 222, 222, 222
  },
  {
    960U, 960U, 800U, 640U, 480U, 320U, 320U, 160U, 160U, 160U, 160U, 160U
  },
  {
    4480U, 14400U, 11520U, 5760U, 5760U, 5760U, 5760U, 5760U, 5760U, 5760U, 5760U, 5760U
  },
  {
    45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U
  },
  {
    45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U, 45000U
  },
  {
    23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U, 23464U
  },
  {
    24000U, 20000U, 16000U, 12000U, 8000U, 8000U, 8000U, 8000U, 8000U, 8000U, 8000U, 8000U
  },
  {
    32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U
  },
  {
    0U, 1280U, 2560U, 3840U, 5120U, 6400U, 7680U, 8960U, 10240U, 11520U, 12800U, 14080U
  }
};
CONST(Rte_Calprm_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  30.0F,
  {
    16384U, 32768U
  },
  {
    0U, 0U
  },
  {
    0U, 1280U, 3840U, 5760U, 7680U, 10240U
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 
    16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 
    16384U, 16384U}
  },
  {
    {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 
    16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 16384U, 16384U}, {16384U, 16384U, 16384U, 
    16384U, 16384U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {512U, 512U, 512U, 512U, 512U}, {768U, 768U, 768U, 768U, 768U}, {1024U, 1024U, 1024U, 1024U, 
    1024U}, {1536U, 1536U, 1536U, 1536U, 1536U}, {2048U, 2048U, 2048U, 2048U, 2048U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {512U, 512U, 512U, 512U, 512U}, {768U, 768U, 768U, 768U, 768U}, {1024U, 1024U, 1024U, 1024U, 
    1024U}, {1536U, 1536U, 1536U, 1536U, 1536U}, {2048U, 2048U, 2048U, 2048U, 2048U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F
  }
};
CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  100.0F,
  20.0F,
  0.5F,
  100.0F,
  0.3F,
  1.0F,
  65.0F,
  1.0F,
  3.0F,
  20.0F,
  2.5F,
  20.0F,
  5.0F,
  100.0F,
  5.0F,
  100.0F,
  5.0F,
  20.0F,
  5.0F,
  50.0F,
  2.0F,
  5.0F,
  200.0F,
  3000.0F,
  5.0F,
  5.0F,
  20.0F,
  5.0F,
  5.0F,
  5.0F,
  20.0F,
  500.0F,
  4400.0F,
  1.1F,
  0.9F,
  3.0F,
  0.036F,
  100.0F,
  1000.0F,
  2.3F,
  8.0F,
  7.0F,
  5.0F,
  0.0F,
  6.0F,
  0.5F,
  1.0F,
  0.5F,
  2.0F,
  100.0F,
  0.5F,
  0.1F,
  0.0F,
  30.0F,
  1.0F,
  -1.0F,
  0.8F,
  15.0F,
  0.0F,
  1.0F,
  -1.0F,
  4.0F,
  0.2F,
  30.0F,
  0.98F,
  360.0F,
  180.0F,
  10.0F,
  3.0F,
  3.0F,
  10.0F,
  0.0F,
  100.0F,
  0.0F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  0.024F,
  10.0F,
  50.0F,
  1U,
  2521U,
  1000U,
  2521U,
  1000U,
  5U,
  16385U,
  160U,
  20U,
  100U,
  100U,
  30U,
  20U,
  20U,
  2521U,
  1000U,
  2521U,
  1000U,
  2521U,
  1000U,
  0U,
  4U,
  1U,
  100U,
  1308U,
  327U,
  656U,
  656U,
  65534U,
  6U,
  8U,
  FALSE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  TRUE,
  {
    0U, 640U, 1920U, 3840U, 7680U, 10240U, 12800U, 15360U, 19200U, 23040U, 25600U, 28160U
  },
  {
    0U, 32704U
  },
  {
    64U, 0U
  },
  {
    0U, 3200U, 8000U, 9600U, 16000U, 24000U, 32000U, 43200U
  },
  {
    32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U
  },
  {
    0U, 3200U, 8000U, 9600U, 16000U, 24000U, 32000U, 43200U
  },
  {
    32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U, 32000U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1024U, 3072U, 6144U, 10240U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1024U, 3072U, 6144U, 10240U, 16384U
  },
  {
    6400U, 6400U, 6400U, 6400U, 6400U, 6400U, 6400U, 6400U, 6400U, 6400U
  },
  {
    0U, 1920U, 5120U, 7680U, 9600U, 12800U, 16000U, 16640U, 17920U, 20480U
  },
  {
    0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 10U, 10U, 0U
  },
  {
    0U, 0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 0U, 9U
  },
  {
    0, -360, 36, -324, 72, -288, 108, -252, 144, -216, 180, -180, 216, -144, 252, -108, 288, -72, 324, -36, 360, -396
  },
  {
    1280U, 2560U
  },
  {
    64000U, 64000U
  },
  {
    1280U, 2560U
  },
  {
    35200U, 35200U
  },
  {
    0U, 1280U, 2560U, 12800U
  },
  {
    0.0F, 0.0F, 0.0F, 0.0F
  },
  {
    {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 
    0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}
  },
  {
    {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}
  },
  {
    1.0F, 1.0F, 1.0F, 1.0F
  },
  {
    -15.0F, -5.0F, 5.0F, 15.0F
  },
  {
    0U, 960U, 1920U, 2880U, 3840U, 5760U, 8640U, 11520U, 14400U, 17280U
  },
  {
    24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U, 24269U
  },
  {
    TRUE, TRUE, TRUE, TRUE
  },
  {
    {0.0F, 5.0F}, {60.0F, 80.0F}, {80.0F, 100.0F}, {100.0F, 120.0F}
  },
  {
    0.01F, 0.01F, 0.01F
  },
  {
    0.9F, 0.9F, 0.9F
  },
  {
    0.01F, 0.01F, 0.01F
  },
  {
    60.0F, 60.0F, 60.0F
  },
  {
    0.0001F, 0.0001F, 0.0001F
  },
  {
    50.0F, 50.0F, 50.0F
  },
  {
    0.99996858F, 0.99996858F, 0.99996858F
  },
  {
    0.4761987F, 0.4761987F, 0.4761987F
  },
  {
    -0.4761673F, -0.4761673F, -0.4761673F
  },
  {
    1.0F, 1.0F, 1.0F
  },
  {
    0.0F, 0.0F, 0.0F
  },
  {
    0.0F, 0.0F, 0.0F
  },
  {
    0.0F, 0.0F, 0.0F
  },
  {
    0.0F, 0.0F, 0.0F
  },
  {
    0.75F, 0.75F, 0.75F
  },
  {
    80.0F, 80.0F, 80.0F
  },
  {
    0.999943F, 0.999943F, 0.999943F
  },
  {
    0.86667F, 0.86667F, 0.86667F
  },
  {
    -0.866613F, -0.866613F, -0.866613F
  },
  {
    0.1F, 0.1F, 0.1F
  },
  {
    60.0F, 60.0F, 60.0F
  },
  {
    0.999962F, 0.999962F, 0.999962F
  },
  {
    0.571437F, 0.571437F, 0.571437F
  },
  {
    -0.571399F, -0.571399F, -0.571399F
  },
  {
    0.0F, 0.0F, 0.0F
  },
  {
    60.0F, 60.0F, 60.0F
  },
  {
    0.999889F, 0.999889F, 0.999889F
  },
  {
    1.68568F, 1.68568F, 1.68568F
  },
  {
    -1.68556F, -1.68556F, -1.68556F
  },
  {
    4000.0F, 4000.0F, 4000.0F
  },
  {
    79.0F, 79.0F, 79.0F
  },
  {
    50.0F, 50.0F, 50.0F
  },
  {
    214.0F, 214.0F, 214.0F
  },
  {
    FALSE, FALSE, FALSE
  }
};
CONST(Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.01F, 0.01F, 0.01F
  }
};
CONST(Rte_Calprm_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    75U, 100U
  },
  {
    16384U, 13107U
  }
};
CONST(Rte_Calprm_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.5F,
  0.1F,
  5U,
  {
    -11200, -80, 160, 800, 11200
  },
  {
    0U, 2560U, 5120U, 7680U
  }
};
CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  65535.0F,
  40.0F,
  40.0F,
  40.0F,
  40.0F,
  1.0F,
  0.1F,
  5.0F,
  1.5F,
  0.033F,
  5.5F,
  1.0F,
  1.0F,
  0.0F,
  0.0F,
  0.5F,
  8.0F,
  0.05F,
  0.0F,
  20.0F,
  40.0F,
  1.0F,
  1.0F,
  0.0F,
  1.0F,
  1.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  1.0F,
  0.0F,
  5.0F,
  0.0F,
  40.0F,
  90.0F,
  50.0F,
  50.0F,
  50.0F,
  19.0F,
  18.0F,
  90.0F,
  90.0F,
  90.0F,
  50.0F,
  50.0F,
  0.4F,
  50.0F,
  11.0F,
  7.0F,
  10.0F,
  50.0F,
  50.0F,
  0.25F,
  90.0F,
  90.0F,
  0.1F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  0.0F,
  2000U,
  500U,
  100U,
  500U,
  1000U,
  0U,
  0U,
  0U,
  3099U,
  0U,
  0U,
  30000U,
  30000U,
  0U,
  0U,
  0U,
  2500U,
  1500U,
  1000U,
  100U,
  1000U,
  2000U,
  6U,
  12U,
  18U,
  0U,
  0U,
  FALSE,
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, TRUE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
  },
  {
    FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, FALSE, TRUE, TRUE, FALSE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE, FALSE
  },
  {
    FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
  },
  {
    FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 15U, 60U, 100U, 150U, 180U, 200U, 250U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 15U, 60U, 100U, 150U, 180U, 200U, 250U
  },
  {
    0, 0, 0, 0, 0, 0, 0, 0
  },
  {
    5, 5, 5, 5, 5, 5, 5, 5
  },
  {
    0, 0, 0, 0, 0, 0, 0, 0
  },
  {
    0U, 1920U, 7680U, 12800U, 19200U, 23040U, 25600U, 32000U
  },
  {
    1, 1, 1, 1, 1, 1, 1, 1
  },
  {
    3, 3, 3, 3, 3, 3, 3, 3
  },
  {
    0U, 15U, 60U, 100U, 150U, 180U, 200U, 250U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 15U, 40U, 70U, 100U, 150U, 200U, 250U
  },
  {
    0U, 25U, 50U, 100U, 170U, 250U
  },
  {
    0U, 35U, 70U, 130U, 300U, 600U
  },
  {
    {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {-6, -5, -4, -2, 
    0, 2, 4, 5, 6}, {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {-6, -5, -4, -2, 0, 2, 4, 5, 6}, {
    -6, -5, -4, -2, 0, 2, 4, 5, 6}
  },
  {
    {-20, 10, 20, 30, 80, 100, 100, 100, 100}, {-20, 10, 20, 30, 80, 100, 100, 100, 100}, {-20, 10, 20, 20, 80, 100, 100, 
    100, 100}, {-20, 10, 20, 20, 80, 100, 100, 100, 100}, {-40, 5, 10, 15, 60, 80, 80, 80, 80}, {-40, 0, 5, 10, 30, 40, 
    40, 40, 40}, {-40, 0, 5, 10, 20, 30, 30, 30, 30}, {-40, 0, 5, 10, 20, 30, 30, 30, 30}
  },
  {
    0U, 15U, 40U, 70U, 100U, 150U, 200U, 250U
  },
  {
    0U, 1280U, 3200U, 6400U, 7680U, 9600U, 11520U, 12800U, 14080U, 16000U
  },
  {
    0U, 1280U, 3200U, 6400U, 7680U, 9600U, 12800U, 13440U, 14080U, 15360U, 16000U, 17280U
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}
  },
  {
    0U, 1024U, 2048U, 4096U, 6144U, 8192U, 9216U, 10240U
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0}
  },
  {
    0U, 100U, 114U, 303U, 800U, 1200U, 2600U, 3200U, 3700U, 4200U, 5000U, 6000U, 7200U, 7500U, 8000U, 8500U, 9000U, 
    9500U, 10000U, 11000U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  15.0F,
  50.0F,
  50.0F,
  50.0F,
  1.0F,
  -4500.0F,
  1.0F,
  10.0F,
  0.001F,
  20.0F,
  45056U,
  FALSE,
  {
    36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U, 36045U
  },
  {
    -80, -60, -40, -20, 0, 50, 100, 160
  },
  {
    128U, 128U, 128U, 128U, 128U, 128U, 128U, 128U
  },
  {
    0U, 2048U, 4096U, 6144U, 8192U, 10240U, 12288U, 14336U, 16384U, 18432U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U, 384U
  },
  {
    0U, 640U, 1088U, 1120U, 1152U, 1184U
  },
  {
    36000U, 36000U, 36000U, 36000U, 36000U, 36000U
  },
  {
    0U, 4096U
  },
  {
    32768U, 0U
  },
  {
    1005U, 1100U
  },
  {
    32768U, 32768U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    1.0F, -1.6346F, 0.66799F, -1.6346F, 0.66799F
  }
};
CONST(Rte_Calprm_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  1.0F,
  3.0F,
  2.0F,
  50.0F,
  800.0F,
  400.0F,
  1.0F,
  20.0F,
  400.0F,
  100.0F,
  0.5F,
  30.0F,
  5.0F,
  0.15F,
  600.0F,
  550.0F,
  30.0F,
  0.02F,
  0.29F,
  3.0F,
  1.0F,
  1.0F,
  90.0F,
  20.0F,
  30.0F,
  0.5F,
  17.0F,
  0.04F,
  100U,
  FALSE,
  FALSE,
  FALSE,
  {
    {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 1440U}, {0U, 480U, 960U, 
    1440U}
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {1920U, 0U}, {1920U, 0U}, {1920U, 0U}, {1920U, 0U}
  },
  {
    0U, 4096U
  },
  {
    800U, 400U
  },
  {
    -512, -512, -512, -512
  },
  {
    18022, 18022, 18022, 18022
  },
  {
    {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 2253, 2253}, {2253, 2253, 2253, 
    2253, 2253}
  },
  {
    0U, 128U, 192U, 256U
  },
  {
    0U, 0U, 0U, 128U
  },
  {
    -640, -560, -480, -320, -160, 0, 160, 320, 480, 640, 800, 960, 1120, 1440
  },
  {
    256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
  },
  {
    -6400, -1600, 0, 800, 1600, 2400, 3200, 4000, 4800, 5600, 6400
  },
  {
    {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 
    18022, 18022}, {18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}, {18022, 18022, 18022, 
    18022, 18022, 18022, 18022, 18022, 18022, 18022, 18022}
  },
  {
    0U, 384U, 1280U, 2560U, 3840U, 7680U, 12800U, 32640U
  }
};
CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  22.0F,
  2.0F,
  2.0F,
  0.5F,
  50.0F,
  {
    1.375F, 1.375F
  },
  {
    0U, 563U, 640U, 717U, 768U, 768U
  },
  {
    768U, 768U, 512U, 256U, 0U, 0U
  },
  {
    0U, 563U, 640U, 717U, 768U, 768U
  },
  {
    768U, 768U, 512U, 256U, 0U, 0U
  },
  {
    0.101563F, 0.101563F
  }
};
CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  16.0F,
  6.0F,
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 
    4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 
    15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, 
    {0U, 512U, 1024U, 1536U, 2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}, {0U, 512U, 1024U, 1536U, 
    2048U, 2560U, 3072U, 4096U, 8192U, 12288U, 15360U, 15872U, 16384U}
  },
  {
    {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 
    2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 
    4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}, {0U, 
    1024U, 2048U, 3072U, 4506U}, {0U, 1024U, 2048U, 3072U, 4506U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 
    328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 
    1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 
    82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 
    1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {2048U, 1638U, 1065U, 655U, 328U, 82U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 26U, 53U, 63U, 74U, 86U, 98U, 110U, 123U, 134U, 146U, 159U, 170U, 182U, 194U, 205U, 256U, 372U, 1220U, 2560U}, {
    0U, 26U, 78U, 101U, 123U, 148U, 171U, 196U, 220U, 243U, 267U, 290U, 315U, 339U, 362U, 435U, 563U, 719U, 1624U, 2560U
    }, {0U, 51U, 80U, 113U, 145U, 176U, 205U, 238U, 266U, 297U, 330U, 360U, 391U, 422U, 452U, 538U, 717U, 916U, 2216U, 
    2560U}, {0U, 51U, 80U, 110U, 146U, 173U, 205U, 237U, 266U, 299U, 330U, 360U, 392U, 423U, 452U, 484U, 640U, 917U, 
    947U, 2560U}, {0U, 51U, 80U, 111U, 143U, 177U, 207U, 238U, 267U, 300U, 330U, 359U, 392U, 422U, 453U, 483U, 640U, 
    819U, 947U, 2560U}, {0U, 51U, 79U, 111U, 139U, 174U, 206U, 236U, 267U, 300U, 334U, 366U, 396U, 428U, 460U, 494U, 
    640U, 819U, 972U, 2560U}, {0U, 51U, 80U, 106U, 142U, 175U, 205U, 239U, 270U, 300U, 332U, 366U, 398U, 429U, 462U, 
    494U, 640U, 819U, 972U, 2560U}, {0U, 51U, 100U, 130U, 163U, 194U, 229U, 261U, 291U, 324U, 355U, 388U, 420U, 451U, 
    483U, 515U, 640U, 819U, 998U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 430U, 
    462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 396U, 
    430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 360U, 
    396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}, {0U, 51U, 100U, 130U, 164U, 196U, 232U, 260U, 297U, 327U, 
    360U, 396U, 430U, 462U, 493U, 527U, 666U, 819U, 1024U, 2560U}
  },
  {
    {0, 0, 48, 72, 104, 144, 192, 248, 312, 376, 448, 536, 616, 712, 816, 920, 1536, 3128, 17904, 17904}, {0, 0, 64, 104, 
    152, 216, 288, 376, 472, 576, 696, 824, 968, 1120, 1280, 1761, 3072, 5120, 17904, 17904}, {0, 0, 32, 80, 136, 200, 
    272, 360, 448, 552, 672, 792, 928, 1072, 1224, 1741, 3031, 4728, 17904, 17904}, {0, 0, 32, 72, 128, 176, 240, 312, 
    384, 472, 560, 656, 760, 872, 984, 1112, 2048, 3568, 3792, 15632}, {0, 0, 32, 72, 120, 176, 232, 296, 360, 440, 520, 
    600, 696, 792, 896, 1000, 1741, 2642, 3320, 13472}, {0, 0, 32, 72, 112, 168, 224, 280, 344, 416, 496, 576, 656, 744, 
    840, 944, 1536, 2314, 3024, 11632}, {0, 0, 32, 64, 112, 160, 208, 264, 320, 376, 440, 512, 584, 656, 736, 816, 1311, 
    1925, 2456, 9120}, {0, 0, 48, 80, 120, 160, 208, 256, 304, 360, 416, 480, 544, 608, 680, 752, 1126, 1720, 2264, 8272
    }, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 
    120, 160, 208, 248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 
    248, 304, 352, 408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}, {0, 0, 48, 80, 120, 160, 208, 248, 304, 352, 
    408, 472, 536, 600, 664, 736, 1024, 1536, 2160, 7528}
  },
  {
    {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {
    0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}, {0U, 512U, 1024U, 
    1536U, 2253U}, {0U, 512U, 1024U, 1536U, 2253U}
  },
  {
    {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 
    0U, 0U}, {0U, 0U, 0U, 0U, 0U}
  },
  {
    2048U, 2560U
  },
  {
    32768U, 0U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U
  },
  {
    {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {
    33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 
    1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 
    2771U, 3509U, 4433U, 5910U}, {33U, 163U, 342U, 554U, 872U, 1260U, 1663U, 2032U, 2401U, 2771U, 3509U, 4433U, 5910U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 1U, 3U, 
    7U, 14U, 24U, 36U, 50U, 67U, 107U, 171U, 304U}, {1U, 5U, 13U, 25U, 48U, 85U, 132U, 184U, 245U, 313U, 476U, 725U, 1233U
    }, {5U, 25U, 54U, 93U, 159U, 251U, 360U, 472U, 597U, 733U, 1041U, 1493U, 2370U}, {10U, 49U, 106U, 180U, 301U, 467U, 
    659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 
    2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 
    180U, 301U, 467U, 659U, 855U, 1068U, 1299U, 1814U, 2559U, 3981U}, {10U, 49U, 106U, 180U, 301U, 467U, 659U, 855U, 
    1068U, 1299U, 1814U, 2559U, 3981U}
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 51U, 102U, 154U, 205U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 
    815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 
    1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 
    2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 
    4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 
    5730U, 8192U, 40960U}, {0U, 815U, 1634U, 2458U, 4096U, 5730U, 8192U, 40960U}
  },
  {
    {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {
    4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}, {4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U, 4096U}
  },
  {
    1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U, 1280U
  },
  {
    0U, 128U, 256U, 384U, 512U
  },
  {
    16384U, 16384U, 16384U, 16384U, 16384U
  },
  {
    0U, 26U, 51U, 102U, 154U, 205U, 230U, 256U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 1556U, 2097U, 2540U, 2982U, 3277U
  },
  {
    0U, 9863U, 12878U, 14811U, 15974U, 16384U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U, 8192U
  },
  {
    32768U, 32768U, 9830U, 6554U, 3277U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    208U, 432U, 640U, 848U, 1056U
  },
  {
    0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalprmRom_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F,
  0.9F,
  {
    0U, 640U, 1280U, 2560U
  },
  {
    0U, 640U, 1280U, 1920U, 2560U
  },
  {
    {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U}, {0U, 10813U, 21627U, 32768U
    }, {0U, 10813U, 21627U, 32768U}
  },
  {
    {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {0U, 9830U, 22938U, 32768U}, {
    0U, 9830U, 22938U, 32768U}
  },
  {
    10400U, 10400U
  },
  {
    {0U, 262U}, {0U, 262U}, {0U, 262U}, {0U, 262U}
  },
  {
    {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 
    720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 
    1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 
    4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 
    7200U, 8640U}, {0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {
    0U, 8U, 16U, 80U, 160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}, {0U, 8U, 16U, 80U, 
    160U, 320U, 480U, 720U, 960U, 1440U, 1920U, 2880U, 4320U, 5760U, 7200U, 8640U}
  },
  {
    {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U}
  },
  {
    {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 
    256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 
    768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 
    1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}, {0U, 128U, 256U, 512U, 768U, 1024U, 1280U, 2560U}
  },
  {
    {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 
    256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U
    }, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U, 256U, 256U, 256U, 256U}
  },
  {
    {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U
    }, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 21504U}, {0U, 20480U, 21504U, 
    21504U}, {0U, 20480U, 21504U, 21504U}
  },
  {
    {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 
    256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}, {256U, 256U, 256U, 256U}
  },
  {
    0U, 384U, 896U, 1536U, 2560U, 3840U, 5760U, 7680U, 10240U
  }
};
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdCanDtcInhbTiThd_Val = 2000U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd_Val = 0U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgFltTiThd_Val = 0U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd_Val = 100U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgMissTiThd_Val = 10U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd_Val = 0U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd_Val = 0U;
/* PRQA L:L1 */
/* PRQA S 0850, 3408 L1 */ /* MD_MSR_19.8, MD_Rte_3408 */
CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP) Rte_CalRegn01Cmn_FordMsg4B0BusHiSpdMsgVldTiThd_Val = 5000U;
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_DEFAULT_RTE_CALPRM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_Calprm_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    66.66F, 66.66F, 66.66F
  },
  {
    700000.0F, 0.0F, 0.0F, 0.0F, 2.5F, 2.5F, 2.5F
  }
};
CONST(Rte_Calprm_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U
};
CONST(Rte_Calprm_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U,
  254U,
  {
    1U, 2U, 3U, 4U, 5U, 254U, 253U, 252U, 251U, 250U
  },
  {
    19088743U, 2309737967U
  }
};
CONST(Rte_Calprm_CustDiag_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U,
  255U,
  0U,
  0U,
  0U,
  0U,
  FALSE,
  {
    0U, 0U
  },
  {
    0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 
    255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 
    255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 
    255U, 255U, 255U, 255U, 255U, 255U
  },
  {
    255U, 255U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 255U, 255U, 255U, 255U, 255U, 255U, 
    255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U, 255U
  },
  {
    0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  },
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_DiagcMgr_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_DiagcMgr_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U
};
CONST(Rte_Calprm_EotLrng_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, 0.0F, FALSE, FALSE
  }
};
CONST(Rte_Calprm_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0.0F
};
CONST(Rte_Calprm_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, FALSE
  }
};
CONST(Rte_Calprm_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    2.5F, 2.5F, 1.0F, 1.0F, 0.0F
  }
};
CONST(Rte_Calprm_PolarityCfg_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_PolarityCfg_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  0U
};
CONST(Rte_Calprm_StackMeas_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_StackMeas_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
  }
};
CONST(Rte_Calprm_SysFricLrng_DEFAULT_RTE_CDATA_GROUP_Type, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP = { /* PRQA S 3408 */ /* MD_Rte_3408 */
  {
    0.0F, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {{0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 
    0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}, {0.0F, 0.0F, 0.0F, 
    0.0F}, {0.0F, 0.0F, 0.0F, 0.0F}}, {{0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U}, {0U, 0U, 0U
    }, {0U, 0U, 0U}, {0U, 0U, 0U}}, 0U
  },
  {
    0.0F, FALSE, FALSE
  }
};

#define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Rte_ParameterRefTabType, RTE_CONST) RteParameterRefTab =
{
  &Rte_CalprmRom_CDD_FordBlaBoxIfCmp1_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02CmnGroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CDD_CurrMeas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_DiagcMgr_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CustDiag_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_EotLrng_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_SysFricLrng_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_HwTq8Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_MotAg2Meas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CDD_MotAgCmp_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CmnMfgSrv_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_PolarityCfg_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_FordHwAgArbn_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_StackMeas_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_HwAgSnsrls_DEFAULT_RTE_CDATA_GROUP,
  &Rte_CalprmRom_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01CmnGroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn01Inin00GroupD_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02CmnGroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Inin00GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP,
  &Rte_CalprmRom_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP,
};
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#define RTE_USEC_OsCounter OS_US2TICKS_OsCounter
#define RTE_MSEC_OsCounter OS_MS2TICKS_OsCounter
#define RTE_SEC_OsCounter OS_SEC2TICKS_OsCounter


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num) /* PRQA S 3408, 1505 */ /* MD_Rte_3408, MD_MSR_8.10 */
{
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint32_least i;
  for (i = 0; i < num ; i++)
  {
    dst[i] = src[i];
  }
}

#define RTE_MEMCPY32ALIGN (sizeof(uint32) - 1)

FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num)
{
  P2CONST(uint32, AUTOMATIC, RTE_APPL_DATA) asrc = source;
  P2VAR(uint32, AUTOMATIC, RTE_APPL_VAR) adst = destination;
  P2CONST(uint8, AUTOMATIC, RTE_APPL_DATA) src = source;
  P2VAR(uint8, AUTOMATIC, RTE_APPL_VAR) dst = destination;
  uint32_least i = 0;

  if (num >= 16)
  {
    if (((((uint32)src) & RTE_MEMCPY32ALIGN) == 0) && ((((uint32)dst) & RTE_MEMCPY32ALIGN) == 0)) /* PRQA S 0306 */ /* MD_Rte_0306 */
    {
      uint32_least asize = num / sizeof(uint32);
      uint32_least rem = num & RTE_MEMCPY32ALIGN;
      for (i = 0; i < (asize - 3); i += 4)
      {
        adst[i] = asrc[i];
        adst[i+1] = asrc[i+1];
        adst[i+2] = asrc[i+2];
        adst[i+3] = asrc[i+3];
      }

      while (i < asize)
      {
        adst[i] = asrc[i];
        ++i;
      }
      i = num - rem;
    }
    else
    {
      for (i = 0 ; (i + 15) < num; i += 16)
      {
        dst[i] = src[i];
        dst[i+1] = src[i+1];
        dst[i+2] = src[i+2];
        dst[i+3] = src[i+3];
        dst[i+4] = src[i+4];
        dst[i+5] = src[i+5];
        dst[i+6] = src[i+6];
        dst[i+7] = src[i+7];
        dst[i+8] = src[i+8];
        dst[i+9] = src[i+9];
        dst[i+10] = src[i+10];
        dst[i+11] = src[i+11];
        dst[i+12] = src[i+12];
        dst[i+13] = src[i+13];
        dst[i+14] = src[i+14];
        dst[i+15] = src[i+15];
      }
    }

  }
  while (i < num)
  {
    dst[i] = src[i];
    ++i;
  }
}

FUNC(void, RTE_CODE) SchM_Init(P2CONST(SchM_ConfigType, AUTOMATIC, RTE_CONST) ConfigPtr)
{
Rte_VarCfgPtr = ConfigPtr;
  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(4)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_CanTp_CanTp_MainFunction, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(5)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(10)); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* initialize calibration parameter base pointer */
  RteParameterBase = &RteParameterRefTab[0];

  /* activate the tasks */
  (void)ActivateTask(Task_Init_Appl10); /* PRQA S 3417 */ /* MD_Rte_Os */

  /* activate the alarms used for TimingEvents */
  (void)SetRelAlarm(Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(2)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_2ms_Appl10_0_2ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(2)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_4ms_Appl10_0_4ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(4)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_10ms_Appl10_0_10ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(10)); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)SetRelAlarm(Rte_Al_TE_Task_100ms_Appl10_0_100ms, RTE_MSEC_OsCounter(0) + (TickType)1, RTE_MSEC_OsCounter(100)); /* PRQA S 3417 */ /* MD_Rte_Os */

  return RTE_E_OK;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE_Task_100ms_Appl10_0_100ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_10ms_Appl10_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_2msTmplMonr_Appl10_0_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_2ms_Appl10_0_2ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_Task_4ms_Appl10_0_4ms); /* PRQA S 3417 */ /* MD_Rte_Os */

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  /* deactivate alarms */
  (void)CancelAlarm(Rte_Al_TE2_Task_10msBsw_Appl10_0_10ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE2_Task_4msBsw_Appl10_0_4ms); /* PRQA S 3417 */ /* MD_Rte_Os */
  (void)CancelAlarm(Rte_Al_TE_CanTp_CanTp_MainFunction); /* PRQA S 3417 */ /* MD_Rte_Os */

}

FUNC(void, RTE_CODE) Rte_InitMemory(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_InitMemory_Appl10();
}


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) SchM_Enter_Dio_DIO_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Dio_DIO_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_CODE_FLASH_DISABLED(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_CODE_FLASH_DISABLED(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_PWR_MODE_PSC_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_PWR_MODE_PSC_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_REGISTER_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_VARIABLE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_VARIABLE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_DIR_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Port_PORT_SET_TO_DIO_ALT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Port_PORT_SET_TO_DIO_ALT_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_RAM_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_RAM_DATA_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Wdg_59_DriverA_WDG_59_DRIVERA_MODE_SWITCH_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Wdg_59_DriverA_WDG_59_DRIVERA_MODE_SWITCH_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Wdg_59_DriverA_WDG_59_DRIVERA_TRIGG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Wdg_59_DriverA_WDG_59_DRIVERA_TRIGG_PROTECTION(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}



/**********************************************************************************************************************
 * RTE Schedulable entity for COM-Access from different partitions
 *********************************************************************************************************************/
FUNC(void, RTE_CODE) Rte_ComSendSignalProxyPeriodic(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0306:  MISRA rule: 11.3
     Reason:     An optimized copy algorithm can be used for aligned data. To check if pointers are aligned, pointers need to be casted to an integer type.
     Risk:       No functional risk. Only the lower 8 bits of the address are checked, therefore all integer types are sufficient.
     Prevention: Not required.

   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3447:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
