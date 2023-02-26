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
 *          File:  Rte_Appl10.c
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


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val = 23U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val = 21U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBasSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Assi_HwTqHysOvrl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Assi_WhlImbRejctnAmp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_AssiHiFrqCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiHiFrq_WhlImbRejctnAmp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiPahSum_AssiCmdSum_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimdPreStall_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdLimrMin_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_MotTqCmdPreLim_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_AssiSumLim_PinionCentrLrnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_PullCmpCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_SysProtnRednFac_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_TqSteerMtgtnCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_AssiSumLim_WhlImbRejctnCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val = 6.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattSwdVltgCorrlnSts_Val = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_BattVltgCorrln_BattVltgCorrlnIdptSig_Val = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_DftBrdgVltgActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_BattVltgCorrln_SwdVltgLimd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotCurrEolCalSt2, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrEolCalSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_CurrMeas_MotCurrQlfr1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FlsMem_SwApplCrc_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u8p8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehSteerRat_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VehWhlBas_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmn_VertAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LatCtlLim_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LatCtlSte_D_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s8p7, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordFeatSt1, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_EsaOn_B_Stat, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat = TRUE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc0Faild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1Faild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref0_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref0_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag0_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag2_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag4_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdc_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgSwd1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_BattVltgSwd1AdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_ChrgPmpDiag_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_ChrgPmpDiagAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_EcuT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_EcuTAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_HwAg1SnsrNr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwAgSnsrTyp1, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_HwAg1SnsrTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2Cos_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2CosAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2Sin_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg2SinAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5CosAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg5SinAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6CosAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotAg6SinAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakAAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakBAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakCAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyAAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyBAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyCAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotCurrSnsrOffs1AdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotDrvr1IninTestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiag_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiagAdcFaild_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8Qlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_HwTq8RollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrCcwEotSig8_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrCwEotSig8_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq8Meas_RackLimrEotSig8Avl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_McuDiagc_LoopCntr2MilliSec_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5CosRtOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclQlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg5Meas_MotAg5SinRtOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6CosRtOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclQlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotAg6Meas_MotAg6SinRtOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndCrf_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s18p13, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotAgCmp_MotAgCumvAlgndVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_FastLoopCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Cos_Val = 1.65F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Mecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5RawMecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg5Sin_Val = 1.65F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Cos_Val = 1.65F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Mecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6RawMecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAg6Sin_Val = 1.65F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u0p16_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s15p16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvAlgndMrfRev_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgCumvInid_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D = {
  0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdB_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrCorrdC_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotCurrRollgCntr1_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgDaxFild_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_MotVltgQaxFild_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CDD_MotCtrlMgr_SlowLoopCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelCrf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGain_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiLnrGainEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DampgCmdBasDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_EotProtnDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_FricLrngDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_HwAg0_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_HysCmpCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_CmnMfgSrv_IgnCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_LoaScaDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgDiagcInhb_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAg0Mecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAg1Mecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_CmnMfgSrv_MotAgMecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_PullCmpLrngDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_RtnCmdDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_StallMotTqLimDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrd_Val = 100.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_VehSpdOvrdEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrMotToPinion_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CmplncErr_CmplncErrPinionToHw_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasCorrlnSts_Val = 63U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMeasIdptSig_Val = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_CurrMeasCorrln_CurrMotSumABC_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_ClrDiagcReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_CustXcpEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAbsPrsnt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvNiblCtrlEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvParkAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordActvRtnEnad_Logl = TRUE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordAfsEquid_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordBrkPlsRejctnEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordDrvrSteerRcmdnEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordEngTqClass_Val = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEscPrsnt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordEvasSteerAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneCentrAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneDprtrWarnEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordLaneKeepAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordPullDriftCmpEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordResrchFctEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSelDrvModEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordSoftEndStopEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint16, RTE_VAR_INIT) Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_FordStrtStopSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTqSteerCmpEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrfcJamAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_FordTrlrBackupAssiTrigEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RstReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_CustDiag_RtnDC00Req_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdBas_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdOvrl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Dampg_DampgCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DampgPahSum_DampgCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiMotTqCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiRampRate_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DrvrTqEstimn_DrvrTqEstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val = 0.5F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(ImcArbnRxSts1, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_ImcSysStVld_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DualEcuIdn_EcuComTiOut_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_DutyCycThermProtn_IgnTiOff_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermDutyCycProtnLoadDptLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermDutyCycProtnTDptLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermLimSlowFilMax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermMotTqLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_DutyCycThermProtn_ThermRednFac_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_DutyCycThermProtn_VehTiVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_EcuTMeas_DiagcStsLimdTPrfmnc_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EcuTMeas_EcuTFild_Val = 25.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ElecPwrCns_ElecInpPwrEstim_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ElecPwrCns_SplyCurrEstim_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCcwDetd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgCwDetd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_EotLrng_HwAgDiDiagSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCcw_Val = -360.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotLrng_HwAgEotCw_Val = 360.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotActvCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotAssiSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotDampgCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtn_EotMotTqLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotActvCmdLimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_EotProtnFwl_EotDampgCmdLimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb_Logl = TRUE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordDrvrSteerRcmdnFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordExtAgCtrlArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordExtAgCtrlFeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare1ArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare1FeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare2ArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare2FeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare3ArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSpare3FeatSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerModlSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordCmdArbn_FordSysOperMotTqCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordDualEcuFltDiagcCom_FordCtcIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordDualEcuFltDiagcCom_FordCtcSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosn_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordHwVelVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordPosnOffsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosn_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosnVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val = 3353.5F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwAgArbn_FordSteerAgClrFlg_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_AvlMotTq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTq_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s8p7, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvInpTq_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRaw_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRawVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_FordMaxAsscTq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordReqdFinalMotTq_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordSumBoostCrvInpTq_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_HwTqHysOvrl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpd_Val = 17.835F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpd_Val = 17.835F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val = 74.92659F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg07DBusHiSpd_FordVehVertAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePw_B_Rq, RTE_VAR_INIT) Rte_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_DrvSteActv_B_Stat, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehDrvrSteerTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrHitchLamp_D_Rqst, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat1, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1 = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat2, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2 = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat3, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3 = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat4, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4 = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat5, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5 = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SAPPAngleControlStat6, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6 = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVTrlrAid_B_Rq, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg082BusHiSpd_InpTqRaw_Val = 7.875F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRate_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehYaw_W_Actl, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl = 65534U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_ElPw_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val = -131072.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_PwPckTq_D_Stat, RTE_VAR_INIT) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_GearRvrse_D_Actl, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsActv_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg213BusHiSpd_FordVehEscActv_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrAidMde_D_Rq, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReq_Ford_TrlrAidMde_D_Rq = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_WhlRotatFl_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_WhlRotatFr_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_WhlRotatRl_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_WhlRotatRr_No_Cnt, RTE_VAR_INIT) Rte_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_GearLvrPos_D_Actl, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl = 14U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_Ignition_Status, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_INIT) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val = 0.1F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_17, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePinOffst_D_Stat, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_INIT) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SelDrvMdeSte_D_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrAidEnbl_D2_Stat, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrAidMsgTxt_D2_Rq, RTE_VAR_INIT) Rte_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg41ABusHiSpd_FordVehOutdAirT_Val = 86.5F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTRaw_Val = 254U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SelDrvMdeChassis2_D_Rq, RTE_VAR_INIT) Rte_FordMsg41EBusHiSpd_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordMfgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordMissMsgDiagcInhb_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordMsg430BusHiSpd_FordVehOdom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg443BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrLampCnnct_B_Actl, RTE_VAR_INIT) Rte_FordMsg443BusHiSpd_FordVehTrlrLampCnctnStsRaw_Ford_TrlrLampCnnct_B_Actl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val = 400U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val = 181U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val = 255U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_EPAS_Failure, RTE_VAR_INIT) Rte_FordSysSt_FordEpsFailr_Ford_EPAS_Failure = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordEpsSysSt1, RTE_VAR_INIT) Rte_FordSysSt_FordEpsSysSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_FordPwrSplyEnaReq_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SteMdule_D_Stat, RTE_VAR_INIT) Rte_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperRampRate_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperScaFctr_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordSysSt_SysStReqEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQly_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVehSpdArbn_FordVehSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurr_Val = 140.75F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsCurrVal_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltg_Val = 18.75F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordEpsVltgVal_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordFeatThdSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordInhbBattVltgDiagc_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMaxBattCurr_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordMinBattVltg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordStrtStopSt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_FordVltgIf_FordTrlrBackupAssiEnad_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperRamp_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperScar_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVltgOperSt1, RTE_VAR_INIT) Rte_FordVltgIf_FordVltgOperSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_Ivtr1PwrDiscnctFltSts_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(IvtrFetFltPha1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltPha_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(IvtrFetFltTyp1, RTE_VAR_INIT) Rte_GateDrv0Ctrl_IvtrFetFltTyp_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrB_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvErrC_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HiLoadStallLimr_StallMotTqLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1Qlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwAg1Meas_HwAg1RollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgArbn_HwAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgCorrlnSt_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwAgCorrln_HwAgIdptSig_Val = 2U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrls_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_HwAgSnsrlsConf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlFrqVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlLeFrq_Val = 0.01F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSnsrls_WhlRiFrq_Val = 0.01F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgFinal_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgNotCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToMotAgCorrlnFltFld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgToSerlCom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgTrimPrfmd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVel_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_HwVelToSerlCom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionAgConf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVel_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwAgSysArbn_PinionVelConf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10Qlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10RollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9Qlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwTq9Meas_HwTq9RollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HwTqArbn_HwTq_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqCorrlnSts_Val = 15U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_HwTqCorrln_HwTqIdptSig_Val = 4U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HysCmp_HysCmpCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_HysCmp_WhlImbRejctnAmp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwAgImcCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysSt1, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysSt_Val = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysStVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_MotVelCrfImcCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoHwAgImcCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnServoIntgtrOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrSt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrSt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpDecelGainDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_InertiaCmpVelCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_InertiaCmpVel_WhlImbRejctnAmp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotAssiScaCdnd_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_EotMotTqLimCdnd_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_StallMotTqLimCdnd_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_SysMotTqCmdScaCdnd_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_ThermMotTqLimCdnd_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LimrCdng_VehSpdMotTqLimCdnd_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_DiagcStsIvtr2Inactv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_HwTqLoaMtgtnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaRateLim_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LoaSt1, RTE_VAR_INIT) Rte_LoaMgr_LoaSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgLoaMtgtnEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_LoaMgr_MotAgSnsrlsAvl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_LoaMgr_MotAndThermProtnLoaMod_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SteerMod1, RTE_VAR_INIT) Rte_LoaMgr_VehSteerMod_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2Mecl_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclQlfr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2MeclRollgCntr_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotAg2Meas_MotAg2VltgSqd_Val = 1.755625F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgABErrTerm_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgACErrTerm_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgBCErrTerm_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclCorrlnSt_Val = 7U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_MotAgCorrln_MotAgMeclIdptSig_Val = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val = 0.025F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val = 0.00011889F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimdIvs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val = 0.00011889F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimdIvs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotREstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotAgElecDly_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotDampgQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotIntglGainQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotCurrRegCfg_MotPropGainQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_MotQuadDetn_MotDirInsts_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotQuad1, RTE_VAR_INIT) Rte_MotQuadDetn_MotQuad_Val = 1U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotBackEmfVltg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxMax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrQaxCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncDax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncQax_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFfStat_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFfStat_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgSatnIndFf_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotAgElecDlyRpl_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val = 0.021651F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotTqCmdSca_MotTqCmdMrfScad_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqCmdMrfDampd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_AssiMechPolarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg0Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg1Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg2Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg3Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg4Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg5Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg6Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg7Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq0Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq1Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq2Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq3Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq4Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq5Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq6Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq7Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl0Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl1Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl2Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl3Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl4Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl5Polarity_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl6Polarity_Val = 0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl7Polarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotElecMeclPolarity_Val = 1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoEna_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwAg_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoHwVel_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PosnTrakgServo_PosnServoIntgtrSt_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctClsd_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PwrLimr_AltFltActv_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_MotTqCmdPwrLimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_PwrLimrRednFac_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_PwrUpSeq_SysStWrmIninCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Rtn_HwAgRtnOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Rtn_RtnCmdScaServo_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_RtnPahFwl_RtnCmdLimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_SysMotTqCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_StOutpCtrl_SysStReqDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopMotTqCmdSca_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopRampRate_Val = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmdBasSca_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiPahLimrActv_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Swp_HwTqSwp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Swp_MotTqCmdSwp_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_SysFricLrng_FricLrngCustEna_Logl = TRUE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_MaxLrndFric_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricEstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysFricOffs_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_SysFricLrng_SysSatnFricEstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BattVltgSt1, RTE_VAR_INIT) Rte_SysPrfmncSts_BattVltgSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_SysPrfmncSts_SysPrfmncSt_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AmbT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_AmbTVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_AssiMechT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_EngOilT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_EngOilTVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_INIT) Rte_TEstimn_IgnTiOff_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotFetT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotMagT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TEstimn_MotWidgT_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TEstimn_VehTiVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TmplMonr_TmplMonrIninTestCmpl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TqLoa_TqLoaAvl_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_TqLoa_TqLoaCmd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_TunSelnAuthy_TunSelnRtDi_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvGroup_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvIninIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvRtIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(CalCopySts1, RTE_VAR_INIT) Rte_TunSelnMngt_CalCopySts_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesIninIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesRtIdx_Val = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAEstimdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLatASerlCom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLatAVldSerlCom_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtA_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtASerlCom_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehLgtAVldSerlCom_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehSpd_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehSpdVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRate_Val = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_VehSigCdng_VehYawRateVld_Logl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_VehSpdLimr_VehSpdMotTqLim_Val = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiThermAssiSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Assi_dAssiWhlImbRejctnBlnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainBlnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_dAssiHiFrqGainWhlImbRejtcnZero; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumInpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_CmdSumOutpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltg_BattVltgPrevBattVltg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_BrdgVltgSumPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsHiBrdgVltg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolGainC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsDeltaC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsHiAvrgC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsLoAvrgC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrOffsZeroAvrgC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumAPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumBPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrSumCPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_TmpMotCurrAdcVlySum1Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevHwTq1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCcwEot1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCwEot1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8PrevHwTq8; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrCcwEot8; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrCwEot8; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_dMotAg5MeasAmpVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_dMotAg6MeasAmpVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_DigMotHwPosn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostModlnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostSlew; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnModlnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnSlew; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldModlnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldSlew; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalMotModlnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_AntiWdupCmdScaQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_CurrLoaScarPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_DualEcuLoaScarPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_FETLoaScarPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_IvtrLoaScarPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgDaxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotCtrlMotVltgQaxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdDaxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgIntglCmdQaxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrAntiWdupCmdScaQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdErrQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotCurrCmdScaQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgBrdgFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdFinal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgCmdPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDampgQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxFb; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecoupldFbDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDecoupldFbQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgDircFbQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPreLimQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgPropCmdQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFb; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxFfFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnIvsRat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrMotVltgSatnRat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_dMotCurrRegVltgLimrPhaAdvPreDly; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCoggCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdMotRplCmdPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelAvrgTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelTiStampRef; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil1OutpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_Fil2OutpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsB; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaDptOffsC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_RndNrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_InpOutpCtrlAssiGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_InpOutpCtrlVehSpdOvrd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxCurr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MaxTemp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_MinVltg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevHwTqBacklshOutp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_PrevMotVelBacklshOutp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgAssiMechTSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff1Term; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff2Term; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff3Term; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgCoeff4Term; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgHwTqSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgMotVelDampgCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadHwTqBacklsh; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_dDampgQuadMotVelBacklsh; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_OutpSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_AbsltTLimSlewStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_LstTblValRateLimrStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCtrlrTTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltCuTTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnAbsltTTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr12T; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr36T; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnThermLoadLimTblYVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EcuTMeas_dEcuTMeasEcuTCalcd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsDrpInpPwr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsModInpPwr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsMotCurrDaxEstim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ElecPwrCns_dElecPwrCnsMotCurrQaxEstim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCcwEot; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_PrevCwEot; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotAssiSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevEotDampg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevImpctPosn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDampg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEntrGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotAssiSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnEotGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnExitGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnLimPosn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvLowrBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdActvUpprBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvLowrBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgActvUpprBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgFwX0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_PrevIgnCycVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_dFordHwTqCdngFildBoostCrvAssiTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrVehSpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LkaTqReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_PrevVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_TqReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_DftVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevAmpLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevDftVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimdTqReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevLimrVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_PrevTqTrend; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRatePrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRatePrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTiPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehTireCircumPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehOdomPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperRamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordVltgOperScar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperRampRatePrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_OperScaFctrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MaxEpsBattCurrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MinBattVltgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperRamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_PrevVltgOperScar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimFetMtgtnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqLimPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqCmdFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_dHiLoadStallLimrStallMotTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevHwAg1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Abs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0Rel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Abs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1Rel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_CorrdPinionAgHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevFildRelHwAg1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevHwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevMaxHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynHwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsStordHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsVehDynHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_dHwAgSnsrlsWhlSpdHwConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PinionAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevHwAgNotCorrd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevPinionAgConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSeldHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SeldHwAgConf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10PrevHwTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9PrevHwTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnHwTqDenom; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnHwTqNumer; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevAssiCmdFildVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevHwTqFildVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseX; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_PrevRiseY; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAssiCmdFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpEffCmpTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpHwTqFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpNegAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpPosAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRawVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_dHysCmpRiseYFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelCrfOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdOffsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_DecelGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_PreScagCmpCmdPrev2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_ScaDrvrVelPrev2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelAssiBasdDampgCoeff; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelCalcdInertiaCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelFilFrq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelMotVelBasdOutpScag; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotScadDrvrVel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchBlndVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchInpVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelNotchOutpVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelRawDecelGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelScadDrvrVel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_dInertiaCmpVelTqSnsrVelFildVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotAssiScaCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevEotMotTqLimCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevStallMotTqLimCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevSysMotTqCmdScaCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevThermMotTqLimCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LimrCdng_PrevVehSpdMotTqLimCdnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnCtrlrREstimdPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnFetRFfEstimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdPreLimQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_dMotCtrlPrmEstimnMotRFfEstimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrDaxFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_dMotCurrPeakEstimnMotCurrQaxFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_dMotCurrRegCfgMotVelMrfFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrDaxCmdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrQaxCmdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgDaxFfTermPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgQaxFfTermPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxAtPeakTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxMin; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrQaxMin; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrSqdMin; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlInterCalcnCurrDaxMax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotCurrDaxBoost; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotTqCmdLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVelFildFf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDyn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDynTerm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfStat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDyn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDynTerm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfStat; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPhaAdvAtPeakTq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncDaxOverR; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncQaxOverR; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlRelncTqCoeff; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotAgElecDlyRpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotCurrQaxToMotTqGain; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Mgn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder1Pha; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Mgn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder2Pha; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Mgn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_dMotRplCoggCfgMotTqRplOrder3Pha; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqCmdSca_MotTqScaFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgCmdCtrld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgSignPhaSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTiElpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgVelDampgCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_MotVelTar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevAntiWdupCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevDerivtvOutp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrInp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevIntgtrOutp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelErr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_PrevMotVelTar; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_VelSlewRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_AntiWdupCmdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqDerivtvPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_HwTqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrInpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_IntgtrOutpPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_OutpAntiWdupCmdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdInpArbnFltMtgtnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoCmdOutpArbnFltMtgtnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoEnaTiPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwAgValRateLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_PosnServoHwVelValRateLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoCmdPreLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoEnaBlndFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoFfCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgErr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwAgTarLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoHwVelTarLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoIntgtrCmdLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PosnTrakgServo_dPosnTrakgServoPtlStFbCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_BrdgVltgRateLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_OutpVelOffsRateLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrFildMotVel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrLimDif; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMinStdOperLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotEnvlpSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrMotTqCmdIvtrLoaSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrOutpVelOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrSpdAdj; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTLimMaxCurr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqEnvlpLim4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_dPwrLimrTqLim4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgAuthy; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_PrevHwAgOffsLimd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAbsltHwAg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnAssiMechTRtnSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnBascRtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgAuthySca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwAgRtnCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwTqRtnSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Rtn_dRtnHwVelRtnSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlLowrBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlUpprBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevCmdSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlRateLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlTarSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpAssiScaCmpBlnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil02Blnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil04Blnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Blnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil12Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil1Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil2Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Blnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil34Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil3Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_dStabyCmpNotchFil4Outp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_EstimdFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_PrevMaxRawAvrgFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnEstimdFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTEstimnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTSlewLimPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuTEstimnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilAssiMechLLValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilAssiMechLpValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilCuLLValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilCuLpValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilMagLLValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilMagLpValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilSiLLValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FilSiLpValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagTEstimnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_RepInitCntrVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiTEstimnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAmbPwr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechCorrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechDampgSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnAssiMechFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnCuCorrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnMagCorrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadAmbT; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnScadEngT; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnSiCorrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_dTEstimnWghtAvrgT; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotTqCmdPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_MotVelAndTqBasdScaFacPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatADifScaFacPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotTqCmdPreScag; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaMotVelAndTqBasdScaFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaScaFacFinal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatADifScaFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehLatAEstimn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_dTqLoaVehSpdBasdScaFac; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgA; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrBreakPt2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_DmaCfgAndUse2MilliSecAdcMaxDmaTrfTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_DmaCfgAndUse2MilliSecAdcStrtTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_DmaCfgAndUse_d2MilliSecAdcActDmaTrfTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsCrcChkStrtTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsDummyRead4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcHwIdxKey; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvn2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_AdcStrtOfCnvnPeak; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_Dma2MilliSecToMotCtrlTrig; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotAgATrig; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_DmaMotCtrlTo2MilliSecTrig; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrAPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrBPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaOnTiCntrCPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MsgMissRxCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8MsgMissRxCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTiOut; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTiOut; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTiOut; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SamplePosnIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStopTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStrtTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalCycTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_ShtdwnClsChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NxtrTi_PrevTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamFailrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamWordLineRead; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamFailrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamWordLineRead; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamDblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamSngBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemDtsRamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamDblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamSngBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufADblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufBDblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemGtmRamSngBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan0RamDblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan1RamDblBitEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi0RamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi1RamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi2RamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi3RamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpiRamEccErrAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumAPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumBPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PhaOnTiSumCPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SinVltgGenn_PwmPerdRng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcFrmErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcOvrrunErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcParErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0DiagcRxMaxDataErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcFrmErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcOvrrunErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcParErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1DiagcRxMaxDataErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltInfo; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_MCalReadVrfyCritRegFltNvmInfo; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegActVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegCritRegDesVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegActVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegAdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_VrfyCritReg_dVrfyCritRegSysCritRegDesVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_IgnCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SessionTiOut; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrApplCrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpRefTiEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_RefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CcwEotRefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_CwEotRefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_CanDtcInhbRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsFactryModRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsTransptModRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_MotVelVldTrueTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsCentrNotDetdTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnVldFlgRcvryTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_AppldFinalMotTqVldRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_InpTqRawVldRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqElpdTiVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqElpdTiVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqSigInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqSigInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdSigVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertAVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_InvldMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_InvldMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqSigInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_PrpnWhlTqVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_AbsActvVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_AbsActvVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215MissTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215NotRxdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215RxdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215RxdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntLeWhlVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FrntRiWhlVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReLeWhlVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ReRiWhlVldMissMsgRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_GearLvrPosnVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMissTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDNotRxdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDRxdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsInvldSigPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_IgnStsVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildCrvtTiThd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAFaildReqdAgTiThd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneAssiImgProcgModlAVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_LaneKeepSysReqdAgInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ImgProcrModlAVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_EvasSteerAssiImgProcrModlAVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ImgProcrModlAVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LatDstRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_LgtDstRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLatVelRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_RelLgtVelRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_TiToCllsnRawVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_CntrVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlLoQlyVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkModlVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_BrkSprtVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ChksBrkModlInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_CntrBrkModlInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_QlyFacBrkModlInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_InvldMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_InvldMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459MissTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459RxdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStFaildTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPassdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgFaildTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgPassdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRateFaildTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgRatePassdTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnInvldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldFaildRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldMissRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPassdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_CanDtcInhbRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltNtcDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgFltRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgMissNtcDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistNtcDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNoDataExistRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgNotRxdRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgRxdNtcDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldNtcDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_MsgVldRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_FeatThdStsRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgInhbRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgNoAssiRcvrRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiVltgRcvrTiMaxRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_InhbBattVltgDiagcRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgInhbRefTi3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgNoAssiRcvrRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgRcvrTiMaxRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoVltgThdMidToLoRefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumAPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumBPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaOnTiSumCPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0SpiTrsmErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1RawDataAvlStrtTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0CS; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr0FRXD; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1CS; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_dHwAg1MeasSnsr1FRXD; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_VehDynRefTmr2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdRefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgConfRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewElpdRefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsHiLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsLoLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsHiLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsLoLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStampPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9TiStamp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9TiStampPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ImcEcuComStrtTiRef; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStRefTiEnaLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_TmrRefTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RefTiRampDwn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PolarityCfg_PolarityCfgSaved; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_RefTmr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_RefTmrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StackMeas_StackMeasApplCrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RefTmrLrngConstr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_AvrgElpdTiMicroSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgCumvAlgndMrfRevSVPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s15p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotCtrlMotAgMeclPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotAgCumvPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(s18p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnMotAgCumvDelta; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_GainEolAvrgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCtrlNtc5DErrCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_Ntc5DErrCnt2MilliSecPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_OffsEolAvrgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_PhaOnTiErrCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntr2MilliSecStore; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_LoopCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMax; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcFastLoopCntrMin; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_dMcuDiagcLoopCntr2MilliSecMotCtrlDif; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_PrevMotAg5Mecl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_PrevMotAg6Mecl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_MotAgCmpMotAgBackEmf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasAvrg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawCumv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnStepSize; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_dMotRplCoggCmdCoggIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_dMotVelMotAgRef; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_PrevDmaTrfCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerCyc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerDivdr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_ReqLen; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcEnaSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u9p7, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnLstTblValSlew; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr5; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_dDutyCycThermProtnMplr6; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehOutdAirTRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRatePrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVehSpdArbn_FordVehTireCircum; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag0Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag1Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0Diag2Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0StsVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes0Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0VrfyRes1Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag0Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag1Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0Diag2Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0StsVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes0Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0VrfyRes1Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1Raw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnErrThd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctFltAtInitErrAcc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_SpiTrsmErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_dSysStModTranVect; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TrsmErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrLimTerm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(u5p11, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSpdLimr_dVehSpdLimrZeroVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcEndPtr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcStrtPtr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgRngOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgSwd1RngOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x03CQlfrSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnNtc0x044QlfrSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adcf0CfgAndUse_Adcf0DiagcEndPtr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Adcf0CfgAndUse_Adcf0DiagcStrtPtr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CoreVltgMonr_CoreVltgMonrStrtUpFltPrmByte; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolGainTranCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_EolOffsTranCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotCurrEolCalSt2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolCalStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrRollgCnt1Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0RollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens0StallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1RollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeasArbn_CurrMeasArbnSens1StallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_MissUpdIninCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1ComStsErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1IntSnsrErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8ComStsErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8IntSnsrErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8PrevRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Data2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuDiagc_FastLoopCntrDiagcCfgd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5PrevRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6PrevRollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgARollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgAStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBRollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_MotAgBStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgCmp_CmpEnaCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_ElecRevCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinAdcFaildCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp1Ti; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp2Ti; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp3Ti; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalStepDir; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufIdxPrim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotVelIninCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0RxPrevLoopDataUnread; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd100MilliSecFrmCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1NrOfPnd10MilliSecFrmCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1RxPrevLoopDataUnread; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_NxtrMfgEnaCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerPidTblLen; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsAtmptCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SessionCurr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_Snsr0RollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_Snsr0StallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ClrDiagcReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE01; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE02; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE41; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEED0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF162; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF163; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuId; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(BswM_BswMEcuResetMod, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EcuResetMode; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_EolByteNTCPara; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_ReqDelayCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RstStrt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_RtnDC00Req; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_ClrDiagcFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_PrevClrDtcFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_PrevClrNtcFlg10; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_EcuIdInt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_SecdryEcuIdnReqTiOutCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FetMtgtnEnaCalIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil3ValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil4ValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil5ValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil6ValPwrUp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_NewSoftEndStopSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevSoftEndStopSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdMod; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgMod; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordEpsLifeCycMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_FordReqdEpsLifeCycModPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordDualEcuFltDiagcCom_FordCTCLoopIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePinCompAnEst_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordCmpdHwPosnQlyFacPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FordSteerPinionOffsStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07EBusHiSpd_SteerPinionAgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TurnLghtSwtch_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_ElPw_D_StatStrtStop, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_ElPw_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehElecPwrStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_PwPckTq_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPwrpkTqStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_GearRvrse_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVActlEng_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehAbsActvPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDeniedPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisadPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehEscActvPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrAidMde_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordVehWhlDirRaw1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_GearLvrPos_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_Ignition_Status, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LifeCycMde_D_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehLifeCycModPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnIntenPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTypPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LatCtlPrecision_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LatCtlRampType_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTypPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LatCtl_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMaxPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChksPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_LsmcBrkDecel_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVActlBrk_D_Qf, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SelDrvMdeChassis2_D_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehPenSelDrvModPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidGuidcRevsStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnValPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrackStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxlePrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrAidSwtch_D_RqDrv, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_ClrDiagcFlgProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmCtrlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmNodIdnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd1Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd2Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd3Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlArNmResd4Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmOnBdTestPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg5B5BusHiSpd_PwrSteerCtrlModlGatewyNmProxyPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_EPAS_Failure, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsFailrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FordEpsSysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordEpsSysStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_SteMdule_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_FordSteerModlStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToLoChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_HiToMidChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToHiChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_LoToMidChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToHiChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordVltgIf_MidToLoChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0St; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0BootstrpSplyFltPrmVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0GenericFltPrmVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(IvtrFetFltPha1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_IvtrFetFltPhaDataStore; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(IvtrFetFltTyp1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_IvtrFetFltTypDataStore; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_FetLoaMtgtnCalIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevRollCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1PrevStepSeqNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0ComStsErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IdErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0IntSnsrErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr0NoMsgErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1ComStsErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IdErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1IntSnsrErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Snsr1NoMsgErrCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1SnsrTrigNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SigQlfr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Qlfr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr0TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_PrevHwAg1Snsr1TestOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgARollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_HwAgAStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgARollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_HwAgAStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SelnCaseSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_SelnCaseSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9RollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqARollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqAStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqBRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqBStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqCRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqCStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqDRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_HwTqDStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqARollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqAStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqBStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqCStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_HwTqDStallCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_dHwTqCorrlnAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqCorrln_dHwTqCorrlnImdtCorrlnSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigResp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasIdptSigVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigResp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqIdptSigVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigResp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrIdptSigVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigResp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgMeclIdptSigVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevVltgModSrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2MeclRollgCntrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgARollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgAStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBRollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgBStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCRollgCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_MotAgCorrlnMotAgCStallCntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMinCurrNrItrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTqNrItrn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(LoaSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_LoaStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_Ntc042PrmByte; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(PwrDiscnctSts1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrUpSeq_PwrTurnOffCtrlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevSrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysFricLrngOperMod1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngOperModPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysSt1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysStMod_SysStModPrevSysSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_TEstimnFltMtgtnCalIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrNtc40PrmByte; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrWdgRstrtCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TrsmErrNtcThd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvIninIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvRtIdx; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevRamPageAcs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_RamTblSwt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_PrevSrcSeln; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotDirInstsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_MotTqCmdSignPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(sint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotQuadDetn_dMotQuadDetnTqCmdSign; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_BattVltgCorrln_dBattVltgCorrlnBattVltgAndSwd1Ok; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CoreVltgMonr_dCoreVltgMonrStrtUpTestCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_MotCurrEolOffsProcFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_WrmIninTestCmplPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_EcmOutpAndDiagc_dEcmVrfyErrOutpCtrlCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_EcmOutpAndDiagc_dEcmVrfyIntrptGennCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CodFlsSngBitErr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_CrcChkCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_PwrOnRstCrcChkCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FlsMem_dFlsMemVrfyCrcInitCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpFctCallSel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackAssiFctCallSel; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp2_EvasSteerAssiFctCallTog; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaAFetFldSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaBFetFldSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_PhaCFetFldSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_GtmCfgAndUse_SysStEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Avl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id2DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id3DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id4DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Avl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id2DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id3DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_RackLimrEot8Id4DataReadCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_McuCoreCfgAndDiagc_dMcuCoreCfgAndDiagcBistRunCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5NvmFltEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6NvmFltEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_dMotAgArbnAAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgArbn_dMotAgArbnBAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleRdyFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmStsCollctd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitSoftFailr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitSoftFailr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiAssiMechTEstimn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiDampg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiDutyCycThermProtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiEotProtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiHysCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiInertiaCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiLoaSca; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvCmd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiPullCmpActvLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiRtn; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiStallMotTqLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiSysFricLrng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiSysMotTqCmdRampRate; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgDiagcInhb; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerRunng; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsSeedReqCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SecuAcsUnlckd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SysStReqEnaOvrd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CurrMeasCorrln_LongTermCorrlnStsABC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630FChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Rtn0202Strt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltLrngEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchImcDualEcuMotCtrlMtgtnEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchSysStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpTmrCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtch; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtchNonRecFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStLrngEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualEcuIdn_EcuIdnEvlnCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FetLoaMtgtnEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_ReInitCntrFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_HwAgOverTrvlCntrNegDi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_HwAgOverTrvlCntrPosDi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_RstLimReq; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_PrevRackTrvlLimrInin; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnDetd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_dEotProtnRackTrvlLimrDi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverActvLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotActvCmdOverInactvLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverActvLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlEotDampgOverInactvLim; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtnFwl_dEotProtnFwlPinionAgConfSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordCanDtcInhb_EpsLifeCycModPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NoDataExistFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_NonAbsOffsVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelHwPosnVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwAgArbn_RelPosnLossFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_ActvNiblCtrlLoFrqTmrFlgVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LaneDprtrWarnLoFrqTmrFlgVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_LimrDftVehSpd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_DiagcClrProxyFlgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLatACmpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehMsg77Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehBrkTqVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehMsg07DMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg07DBusHiSpd_FordVehVertAVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehMsg083Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg083BusHiSpd_FordVehTurnSigVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehMsg091Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg091BusHiSpd_FordVehYawRateRawVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehMsg167Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehMsg202Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_VehVTrlrAid_B_Avail, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg213BusHiSpd_FordVehMsg213Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehMsg215Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehMsg064Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehMsg217Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldIntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg230BusHiSpd_FordVehMsg230Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg2FDBusHiSpd_FordVehMsg2FDMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3B3BusHiSpd_FordVehMsg3B3Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3CABusHiSpd_FordVehMsg3CAMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_HandsOffCnfm_B_Rq, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D3BusHiSpd_FordVehMsg3D3Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg3D7BusHiSpd_FordVehMsg3D7Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40AMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40ARxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehMsg414Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehMsg415Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41ABusHiSpd_FordVehMsg41AMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehMsg41EMiss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehMsg430Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg430BusHiSpd_FordVehMsg430Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_FordVehMsg443Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ford_TrlrLampCnnct_B_Actl, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg443BusHiSpd_FordVehTrlrLampCnctnStsRawPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FirstTranVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehMsg459Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTarVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_FordVehTrlrTrackStVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntIntPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobBtnVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FirstTranTrlrAidKnobPosVldFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_FordVehMsg47Rxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobBtnVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg47ABusHiSpd_TrlrAidKnobPosVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordMsg4B0Miss; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg4B0BusHiSpd_IniVehYawStabyInvld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordSysSt_SysStReqEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0CfgSecAtmpt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0OffStChkSecAtmpt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0SpiErrSecAtmpt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0InactvSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_Ivtr0OffStChkCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1IfFltLtch; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1InitStepSeqNrCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1LtchClr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgArbn_dHwAgArbnAgAAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgCorrln_dHwAgCorrlnAgAAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_FCentrHwAgEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_MotAgOffsEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevSmotngSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil1Ena; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PrevVehDynFil2Ena; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_WhlSpdHwAgLrndEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgKineFlt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgLtch; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_HwAgToMotAgCorrln; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_SlewSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnAAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnBAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnCAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTqArbn_dHwTqArbnDAvl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnErrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_ArbnFltPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_SysStLrngEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_NotchFilChk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevCurrMeasLoaStSwMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevHwTqLoaStSwMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevIvtrLoaStSwMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_LoaMgr_PrevMotAgLoaStSwMtgtnEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgAOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgBOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAgCorrln_dMotAgCorrlnMotAgCOk; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_DiagStsPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_StLtchPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotTqTranlDampg_dMotTqTranlDampgTmrEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_EnaCtrlStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_FctActvSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotVelCtrl_RampDwnCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_FirstRunCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctClsdSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctTestACmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrDiscnct_PwrDiscnctTestBCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_LimdAssiLoVltgPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_ReadWrOrderFlg1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_ReadWrOrderFlg2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrSply_StrtUpSelfTestCmpl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_RtnPahFwl_dRtnPahFwlOverBnd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngRunOneTi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricOffsOutpDi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AmbTVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechTInitEna; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_DualEcuFltMtgtnPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_EngOilTVldPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_FetMtgtnEnaPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_RepInitCntrFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrIninTestCmplFlg; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TmplMonr_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLatAVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevLtgAVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevVehSpdVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_PrevYawRateVld; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_ExcpnHndlg_McuDiagcData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCtrl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_256, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_LaneAssi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_128, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8p8_12_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TqOffsTbl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssi; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRaw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_s1p14_512, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotRplCoggCmd_MotCoggCmdY; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u0p16_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgBufPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotVel_MotAgTiBufPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_BlkFltTblRec1_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_BlkFltTbl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_CmdRtnBufRec1_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_CmdRtnBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_boolean_NvMProxy1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_NvMProxy_NvmBlkActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_CrcHwStsRec2_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_SyncCrc_CrcHwSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart0100MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart010MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart0CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart0CfgAndUse_Uart02MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart1100MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart110MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2048_Uart1CfgAndUse, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_Uart1CfgAndUse_Uart12MilliSecBufCnt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_CcaHwPartNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_CcaSerlNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_DiRestore; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_EpsSysSerlNr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf0; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_MfgTmpBuf4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u16_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_PerPidTbl; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CmnMfgSrv_SeedKey; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205A; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did205B; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did3003; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did301A; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_Did630F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE00; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE01; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE02; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_64, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE03; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE04; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidDE05; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE00; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE21; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE22; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_40, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE23; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE40; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE81; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE82; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE83; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE84; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE85; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE86; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE87; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidEE88; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF110; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF111; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF113; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF15F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF166; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18A; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF18C; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_24, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CustDiag_DidF190; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrLtchCntrAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_NtcFltInfoRec2_20, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DiagcMgrNtcFltAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_DiagcMgr1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgr_DtcIdxPrevSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_NtcInfoRec4_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10Ary; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_s16_DiagcMgrProxyAppl10, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcMgrNtcInfo10DebCntrAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DrvrTqEstimn_DrvrTqStPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC100Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC101Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC102Prev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u08_17, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrPrev; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u16_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RawDataBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u16_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9RawDataBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr100MilliSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr10MilliSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_2_2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_FrmFltCntr2MilliSec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrevRollgCntrRxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcResyncCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcRollgCntrResync; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_PrimSrcRxBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ResyncOnPrimActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_ResyncOnSecdryActv; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RollgCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u32_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_ImrArbnRxExtdSts2_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigDataExtdSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_RxdSigDataSrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcResyncCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcRollgCntrResync; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SecdrySrcRxBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_ImcArbnRxDataSrc2_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupDataSrc; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupMissCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_logl_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupNeverRxd; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_ImcArbnB, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_SigGroupSkipCntr; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_u8_ImcArbnA, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcArbn_TxBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_CosDelta; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_SinDelta; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1X; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder1Y; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2X; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder2Y; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3X; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary2D_s1p14_10_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotTqRplOrder3Y; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u8_48, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StackMeas_StackMeasRes; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqAry; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FilAvrgFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_12, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelBuf; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_RawAvrgFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_SatnAvrgFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_f32_4, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehBasLineFric; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilHpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiHiFrq_HwTqHpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_AssiSumLim_MotVelFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(CurrMeasEolGainCal3PhaRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolGainCalSetABC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(CurrMeasEolOffsCal3PhaRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_CurrMeas_CurrMeasEolOffsCalSetABC; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq8Meas_HwTq8Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMaxLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5CosMinLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5EolPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5RtPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMaxLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5SinMinLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg5Meas_MotAg5StVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMaxLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6CosMinLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6EolPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgRtPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6RtPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMaxLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6SinMinLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgStVariRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAg6Meas_MotAg6StVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgBrdgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotCurrRegVltgLimr_MotVltgQaxFfLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_MotVelDampgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgHwTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgMotVelLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Dampg_QuadDampgScaLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagcDataRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_DiagcData10; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DiagcDataRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DiagcMgrProxyAppl10_ProxySetNtcData10; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil1ValStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fil2ValStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(DutyCycThermProtnFilStValRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_FilStVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild3Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild4Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild5Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DutyCycThermProtn_Fild6Val; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EcuTMeas_EcuTFilStVari; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(EotNvmDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_EotNvmData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MaxHwAgCwAndCcwRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotLrng_MaxHwAgCwAndCcw; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_EotAssiScaLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_EotProtn_HwTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMotTqCmdOvrlLimr_HwVelFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaAFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaBFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_GateDrv0Ctrl_GateDrv0PhaCFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFetMtgtnFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HiLoadStallLimr_StallMotTqCmdFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwAgOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAg1Meas_HwAg1Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_PinionTqFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_RelHwAgFil2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(StordLstPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_StordLstPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSnsrls_YawRateFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwAgSysArbn_TqSnsrVelFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq9Meas_HwTq9Offs; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_AssiCmdLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_FinalOutpLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HysCmp_HwTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwAgTarLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_HwTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_MotVelLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PosnServoIntgtrLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpLongTermCmpLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_PullCmpShoTermCmpLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt1LpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_TrakgIntgtrSt2LpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_ImcSigArbn_VehSpdLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_InertiaCmpVel_TqSnsrVelFilNotchSt; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgMeasEolPrmRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotAg2Meas_MotAg2EolPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotPrmNomEolRec3, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCtrlPrmEstimn_MotPrmNom; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrDaxFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrPeakEstimn_MotCurrQaxFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotCurrRegCfg_MotVelMrfFild; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotVelLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotRplCoggPrmRec2, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRplCoggCfg_MotRplCoggPrm; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_MotVelLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrLimr_TqLimLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch1Fil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch2Fil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch3Fil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilNotchStRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_AssiNotch4Fil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StabyCmp_HwTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AssiMechTLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil1; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil2; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil3; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_AvrgFricLpFil4; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_ColTqLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricChgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysFricDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricLrngData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysFricNonLrngDataRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_FricNonLrngData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgAuthyLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwAgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_HwVelLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_LatALpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysFricLrng_VehSpdLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_SysPrfmncSts_BattVltgLpFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_AssiMechFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_CuFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_MagFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_SiFilLp; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(TFilStValRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TEstimn_TFilStVal; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TqLoa_VehLatAEstimnFil; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(OnlineCalStsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_OnlineCalSts; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_HwTqFilRec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_VehSigCdng_LatAFilRec; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmd = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_AssiSumLim_ProcdManTqCmdEna = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari = {
  2.5F, 1.0F, 2.5F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.5F, 2.5F
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(MotAgRtPrmRec1, RTE_VAR_INIT) Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari = {
  2.5F, 1.0F, 2.5F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.5F, 2.5F
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_DutyCycThermProtn_FilStVariReInitFlg = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_FordHwAgArbn_FordSnsrOutp = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint16, RTE_VAR_INIT) Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum = 65534U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0Ena = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_GateDrv0PhaReasbnDiagcEna = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0Raw = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr0TestOk = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint16, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1Raw = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(uint8, RTE_VAR_INIT) Rte_Irv_HwAg1Meas_HwAg1Snsr1TestOk = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwAg = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_HwAgSnsrls_StordHwConf = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_ImcArbn_IniTiOutChkCmpl = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgOffs = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwAgTarOffs = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_HwTqOffs = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(SysSt1, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec = 3U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(boolean, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_MotVelCrfOffs = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_ImcSigArbn_VehSpdOffs = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCtrlPrmEstimn_MotBackEmfConFf = 0.03993F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_MotCurrPeakEstimn_MotCurrEstimd = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(Ary1D_u16p0_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaX = {
  0U, 100U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(Ary1D_u2p14_2, RTE_VAR_INIT) Rte_Irv_MotTqTranlDampg_CtrldDampgScaY = {
  16384U, 0U
}; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupGain = 1.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_AntiWdupLim = 5.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvGain = 0.004F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon = 0.008F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_IntgtrGain = 0.15F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_PropGain = 0.2F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_MotVelCtrl_TqCmdLim = 8.8F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MinStdOperLim = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_MotEnvlpSpd = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
VAR(float32, RTE_VAR_INIT) Rte_Irv_PwrLimr_TqEnvlpLim1 = 0.0F; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(boolean, RTE_VAR_INIT) Rte_Irv_TEstimn_FilStVariRepInitFlg = FALSE; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint32, RTE_VAR_INIT) Rte_Irv_TmplMonr_ElpdTiMicroSec = 0U; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API Prototypes
 *********************************************************************************************************************/
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850, 3447 */ /* MD_MSR_19.8, MD_Rte_3447 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Component Data Structures
 *********************************************************************************************************************/

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt00_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst1_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  0,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt01_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst2_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  1,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt02_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst3_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  2,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt03_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst4_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  3,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt04_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst5_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  4,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn01Rt01_Dummy, RTE_CONST) Rte_Instance_AAACalRegn01Rt05_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst6_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D,
  },
  /* Instance Id section */
  5,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt00GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  0,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt00GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  0,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  1,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt01GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  1,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt02GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  2,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt02GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  2,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt03GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  3,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt03GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  3,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt04GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  4,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt04GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  4,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt05GroupA_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val,
  },
  /* Instance Id section */
  5,
  /* Vendor specific section */
};
/* PRQA L:L1 */

/* PRQA S 0850, 3408, 1504 L1 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
CONST(struct Rte_CDS_AAACalRegn02Rt01GroupB_Dummy, RTE_CONST) Rte_Instance_AAACalRegn02Rt05GroupB_Dummy =
{
  /* Port API section */
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val,
  },
  {
    Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val,
  },
  /* Instance Id section */
  5,
  /* Vendor specific section */
};
/* PRQA L:L1 */

#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 0850, 1505, 3447, 3408 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3447, MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
VAR(uint8, RTE_VAR_INIT) Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod = RTE_MODE_BswMEcuResetMod_EcuResetDisabled; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



#define RTE_STOP_SEC_CONST_UNSPECIFIED
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


FUNC(void, RTE_CODE) Rte_InitMemory_Appl10(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* set default values for internal data */
  Rte_Assi_AssiCmdBas_Val = 0.0F;
  Rte_AssiHiFrq_AssiHiFrqCmd_Val = 0.0F;
  Rte_AssiPahSum_AssiCmdSum_Val = 0.0F;
  Rte_AssiSumLim_MotTqCmd_Val = 0.0F;
  Rte_AssiSumLim_MotTqCmdLimdPreStall_Val = 0.0F;
  Rte_AssiSumLim_MotTqCmdLimrMin_Val = 8.8F;
  Rte_AssiSumLim_MotTqCmdPreLim_Val = 0.0F;
  Rte_AssiSumLim_SysProtnRednFac_Val = 0.0F;
  Rte_BattVltg_BrdgVltg_Val = 6.0F;
  Rte_BattVltgCorrln_BattSwdVltgCorrlnSts_Val = 2U;
  Rte_BattVltgCorrln_BattVltgCorrlnIdptSig_Val = 2U;
  Rte_BattVltgCorrln_DftBrdgVltgActv_Logl = FALSE;
  Rte_BattVltgCorrln_SwdVltgLimd_Logl = FALSE;
  Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl = FALSE;
  Rte_CDD_CurrMeas_MotCurrEolCalSt_Val = 0U;
  Rte_CDD_CurrMeas_MotCurrQlfr1_Val = 0U;
  Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl = FALSE;
  Rte_CDD_FlsMem_SwApplCrc_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_ActvNiblCmpIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp1_FordBlaBoxSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordLaneAssiSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordLaneDprtrWarnTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordLaneKeepAssiTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordLatCtrlTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpLrngFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordPullDriftCmpTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp1_FordResrchFctSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordTrlrBackupAssiSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp1LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp2LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp3LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehBBMsgOutp4LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiAvl_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiHandsOff_Val = 1U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLaneAssiRejctn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlLimSts_Ford_LatCtlLim_D_Stat = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLatCtrlSteerSts_Ford_LatCtlSte_D_Stat = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkDecelEnaReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehLoSpdMtnCtrlBrkTqReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrfcJamAvdHandsOnConf_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAgTarCalcn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgMax_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgOffs_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidAgWarn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidEnaSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidHitchToAxle_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidMsgTxtReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidSetUp_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTarIdn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrAidTrlrIdn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehTrlrHitchLampReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehVelMaxReqTrlrAid_Val = 255U;
  Rte_CDD_FordBlaBoxIfCmp1_FordVehVelTrlrAidReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_LaneDprtrWarnIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_LaneKeepAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_LatCtrlIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_PullDriftCmpIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpAct_Val = 0;
  Rte_CDD_FordBlaBoxIfCmp1_SrvPullDriftCmpRstVal_Val = 0;
  Rte_CDD_FordBlaBoxIfCmp1_TrlrBackupAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Ford_EsaOn_B_Stat = TRUE;
  Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref0_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup2Ref1_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref0_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1ScanGroup3Ref1_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag0_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag2_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_Adc1SelfDiag4_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdc_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_BattRtnCurrAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_BattVltg_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_BattVltgAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_BattVltgSwd1_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_BattVltgSwd1AdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_ChrgPmpDiag_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_ChrgPmpDiagAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_EcuT_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_EcuTAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_HwAg1SnsrNr_Val = 0U;
  Rte_CDD_FordT3T6McuCfg_HwAg1SnsrTyp_Val = 0U;
  Rte_CDD_FordT3T6McuCfg_MotAg2Cos_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_MotAg2CosAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotAg2Sin_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_MotAg2SinAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotAg5CosAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotAg5SinAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotAg6CosAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotAg6SinAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakAAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakBAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcPeakCAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyAAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyBAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrAdcVlyCAdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotCurrSnsrOffs1AdcFaild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_MotDrvr1IninTestCmpl_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiag_Val = 0.0F;
  Rte_CDD_FordT3T6McuCfg_PwrDiscnctSwtDiagAdcFaild_Logl = FALSE;
  Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdA_Val = 0U;
  Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdB_Val = 0U;
  Rte_CDD_GtmCfgAndUse_PhaOnTiMeasdC_Val = 0U;
  Rte_CDD_HwTq1Meas_HwTq1_Val = 0.0F;
  Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val = 0U;
  Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val = 0U;
  Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val = 0.0F;
  Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val = 0.0F;
  Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl = FALSE;
  Rte_CDD_HwTq8Meas_HwTq8_Val = 0.0F;
  Rte_CDD_HwTq8Meas_HwTq8Qlfr_Val = 0U;
  Rte_CDD_HwTq8Meas_HwTq8RollgCntr_Val = 0U;
  Rte_CDD_HwTq8Meas_RackLimrCcwEotSig8_Val = 0.0F;
  Rte_CDD_HwTq8Meas_RackLimrCwEotSig8_Val = 0.0F;
  Rte_CDD_HwTq8Meas_RackLimrEotSig8Avl_Logl = FALSE;
  Rte_CDD_McuDiagc_LoopCntr2MilliSec_Val = 0U;
  Rte_CDD_MotAg5Meas_MotAg5CosRtAmpRecpr_Val = 0.0F;
  Rte_CDD_MotAg5Meas_MotAg5CosRtOffs_Val = 0.0F;
  Rte_CDD_MotAg5Meas_MotAg5MeclQlfr_Val = 0U;
  Rte_CDD_MotAg5Meas_MotAg5MeclRollgCntr_Val = 0U;
  Rte_CDD_MotAg5Meas_MotAg5SinRtAmpRecpr_Val = 0.0F;
  Rte_CDD_MotAg5Meas_MotAg5SinRtOffs_Val = 0.0F;
  Rte_CDD_MotAg6Meas_MotAg6CosRtAmpRecpr_Val = 0.0F;
  Rte_CDD_MotAg6Meas_MotAg6CosRtOffs_Val = 0.0F;
  Rte_CDD_MotAg6Meas_MotAg6MeclQlfr_Val = 0U;
  Rte_CDD_MotAg6Meas_MotAg6MeclRollgCntr_Val = 0U;
  Rte_CDD_MotAg6Meas_MotAg6SinRtAmpRecpr_Val = 0.0F;
  Rte_CDD_MotAg6Meas_MotAg6SinRtOffs_Val = 0.0F;
  Rte_CDD_MotAgCmp_MotAgCumvAlgndCrf_Val = 0;
  Rte_CDD_MotAgCmp_MotAgCumvAlgndMrf_Val = 0;
  Rte_CDD_MotAgCmp_MotAgCumvAlgndVld_Logl = FALSE;
  Rte_CDD_MotCtrlMgr_FastLoopCntr_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAg5Cos_Val = 1.65F;
  Rte_CDD_MotCtrlMgr_MotAg5Mecl_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAg5RawMecl_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAg5Sin_Val = 1.65F;
  Rte_CDD_MotCtrlMgr_MotAg6Cos_Val = 1.65F;
  Rte_CDD_MotCtrlMgr_MotAg6Mecl_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAg6RawMecl_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAg6Sin_Val = 1.65F;
  Rte_MemCpy32(Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D, Rte_C_Ary1D_u0p16_8_0, sizeof(Ary1D_u0p16_8));
  Rte_CDD_MotCtrlMgr_MotAgBufIdx_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotAgCumvAlgndMrfRev_Val = 0;
  Rte_CDD_MotCtrlMgr_MotAgCumvInid_Logl = FALSE;
  Rte_MemCpy32(Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D, Rte_C_Ary1D_u32_8_0, sizeof(Ary1D_u32_8));
  Rte_CDD_MotCtrlMgr_MotCurrAdcVlyA_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrAdcVlyB_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrAdcVlyC_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrCorrdA_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrCorrdB_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrCorrdC_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrDax_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrQax_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotCurrRollgCntr1_Val = 0U;
  Rte_CDD_MotCtrlMgr_MotVltgDax_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotVltgDaxFild_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotVltgQax_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_MotVltgQaxFild_Val = 0.0F;
  Rte_CDD_MotCtrlMgr_Ntc5DErrCnt_Val = 0U;
  Rte_CDD_MotCtrlMgr_PhaOnTiSumA_Val = 0U;
  Rte_CDD_MotCtrlMgr_PhaOnTiSumB_Val = 0U;
  Rte_CDD_MotCtrlMgr_PhaOnTiSumC_Val = 0U;
  Rte_CDD_MotCtrlMgr_SlowLoopCntr_Val = 0U;
  Rte_CDD_MotVel_MotVelCrf_Val = 0.0F;
  Rte_CDD_MotVel_MotVelMrf_Val = 0.0F;
  Rte_CDD_MotVel_MotVelVld_Logl = FALSE;
  Rte_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val = 0U;
  Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val = 0U;
  Rte_CmnMfgSrv_AssiLnrGain_Val = 1.0F;
  Rte_CmnMfgSrv_AssiLnrGainEna_Logl = FALSE;
  Rte_CmnMfgSrv_AssiMechTEstimnDi_Logl = FALSE;
  Rte_CmnMfgSrv_DampgCmdBasDi_Logl = FALSE;
  Rte_CmnMfgSrv_DutyCycThermProtnDi_Logl = FALSE;
  Rte_CmnMfgSrv_EotProtnDi_Logl = FALSE;
  Rte_CmnMfgSrv_FricLrngDi_Logl = FALSE;
  Rte_CmnMfgSrv_HysCmpCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_IgnCntr_Val = 0U;
  Rte_CmnMfgSrv_InertiaCmpVelCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_LoaScaDi_Logl = FALSE;
  Rte_CmnMfgSrv_MfgDiagcInhb_Logl = FALSE;
  Rte_CmnMfgSrv_MfgEnaSt_Val = 0U;
  Rte_CmnMfgSrv_PullCmpCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_PullCmpLrngDi_Logl = FALSE;
  Rte_CmnMfgSrv_RtnCmdDi_Logl = FALSE;
  Rte_CmnMfgSrv_StallMotTqLimDi_Logl = FALSE;
  Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl = FALSE;
  Rte_CmnMfgSrv_SysStImdtTranReqOff_Logl = FALSE;
  Rte_CmnMfgSrv_SysStReqEnaOvrd_Logl = FALSE;
  Rte_CmnMfgSrv_VehSpdOvrd_Val = 100.0F;
  Rte_CmnMfgSrv_VehSpdOvrdEna_Logl = FALSE;
  Rte_CmplncErr_CmplncErrMotToPinion_Val = 0.0F;
  Rte_CmplncErr_CmplncErrPinionToHw_Val = 0.0F;
  Rte_CurrMeasCorrln_CurrMeasCorrlnSts_Val = 63U;
  Rte_CurrMeasCorrln_CurrMeasIdptSig_Val = 2U;
  Rte_CurrMeasCorrln_CurrMotSumABC_Val = 0.0F;
  Rte_CustDiag_ClrDiagcReq_Val = 0U;
  Rte_CustDiag_CustXcpEna_Logl = FALSE;
  Rte_CustDiag_FordAbsPrsnt_Logl = FALSE;
  Rte_CustDiag_FordActvNiblCtrlEnad_Logl = FALSE;
  Rte_CustDiag_FordActvParkAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordActvRtnEnad_Logl = TRUE;
  Rte_CustDiag_FordAfsEquid_Logl = FALSE;
  Rte_CustDiag_FordBrkPlsRejctnEnad_Logl = FALSE;
  Rte_CustDiag_FordDrvrSteerRcmdnEnad_Logl = FALSE;
  Rte_CustDiag_FordEngTqClass_Val = 2U;
  Rte_CustDiag_FordEscPrsnt_Logl = FALSE;
  Rte_CustDiag_FordEvasSteerAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordLaneCentrAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordLaneDprtrWarnEnad_Logl = FALSE;
  Rte_CustDiag_FordLaneKeepAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordPullDriftCmpEnad_Logl = FALSE;
  Rte_CustDiag_FordResrchFctEnad_Logl = FALSE;
  Rte_CustDiag_FordSelDrvModEnad_Logl = FALSE;
  Rte_CustDiag_FordSoftEndStopEnad_Logl = FALSE;
  Rte_CustDiag_FordSrvPullDriftCmpRstVal_Val = 0;
  Rte_CustDiag_FordStrtStopSt_Val = 0U;
  Rte_CustDiag_FordTqSteerCmpEnad_Logl = FALSE;
  Rte_CustDiag_FordTrfcJamAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordTrlrBackupAssi5WhlEnad_Logl = FALSE;
  Rte_CustDiag_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_CustDiag_FordTrlrBackupAssiTrigEnad_Logl = FALSE;
  Rte_CustDiag_RstReq_Val = 0U;
  Rte_CustDiag_RtnDC00Req_Val = 0U;
  Rte_Dampg_DampgCmdBas_Val = 0.0F;
  Rte_DampgPahSum_DampgCmd_Val = 0.0F;
  Rte_DiagcMgr_ClrDiagcFlgProxy_Val = 0U;
  Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl = FALSE;
  Rte_DiagcMgr_DiagcStsNonRcvrlReqDiFltPrsnt_Logl = FALSE;
  Rte_DiagcMgr_SysDiMotTqCmdSca_Val = 1.0F;
  Rte_DiagcMgr_SysDiRampRate_Val = 1.0F;
  Rte_DiagcMgr_SysStFltOutpReqDi_Logl = FALSE;
  Rte_DrvrTqEstimn_DrvrTqEstimd_Val = 0.0F;
  Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl = FALSE;
  Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val = 0.5F;
  Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl = FALSE;
  Rte_DualEcuIdn_EcuId_Val = 0U;
  Rte_DutyCycThermProtn_DutyCycThermProtnMaxOutp_Val = 0U;
  Rte_DutyCycThermProtn_ThermDutyCycProtnLoadDptLim_Val = 8.8F;
  Rte_DutyCycThermProtn_ThermDutyCycProtnTDptLim_Val = 8.8F;
  Rte_DutyCycThermProtn_ThermLimSlowFilMax_Val = 0.0F;
  Rte_DutyCycThermProtn_ThermMotTqLim_Val = 8.8F;
  Rte_DutyCycThermProtn_ThermRednFac_Val = 0.0F;
  Rte_EcuTMeas_DiagcStsLimdTPrfmnc_Logl = FALSE;
  Rte_EcuTMeas_EcuTFild_Val = 25.0F;
  Rte_ElecPwrCns_ElecInpPwrEstim_Val = 0.0F;
  Rte_ElecPwrCns_SplyCurrEstim_Val = 0.0F;
  Rte_EotLrng_HwAgCcwDetd_Logl = FALSE;
  Rte_EotLrng_HwAgCwDetd_Logl = FALSE;
  Rte_EotLrng_HwAgEotCcw_Val = -360.0F;
  Rte_EotLrng_HwAgEotCw_Val = 360.0F;
  Rte_EotProtn_EotActvCmd_Val = 0.0F;
  Rte_EotProtn_EotAssiSca_Val = 1.0F;
  Rte_EotProtn_EotDampgCmd_Val = 0.0F;
  Rte_EotProtn_EotMotTqLim_Val = 8.8F;
  Rte_EotProtnFwl_EotActvCmdLimd_Val = 0.0F;
  Rte_EotProtnFwl_EotDampgCmdLimd_Val = 0.0F;
  Rte_FordCanDtcInhb_FordCanDtcInhb_Logl = TRUE;
  Rte_FordCanDtcInhb_FordCanDtcInhb8_Val = 1U;
  Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val = 0U;
  Rte_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordExtAgCtrlArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordLatCtrlArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordPullDriftCmpArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordSpare1ArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordSpare2ArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordSpare3ArbnCmd_Val = 0U;
  Rte_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val = 0U;
  Rte_FordDualEcuFltDiagcCom_FordCtcIdx_Val = 0U;
  Rte_FordDualEcuFltDiagcCom_FordCtcSts_Val = 0U;
  Rte_FordHwAgArbn_FordCmpdHwPosn_Val = 0.0F;
  Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac_Ford_StePinCompAnEst_D_Qf = 1U;
  Rte_FordHwAgArbn_FordCmpdHwPosnQlyFac8_Val = 1U;
  Rte_FordHwAgArbn_FordCmpdHwPosntoSerlCom_Val = 0.0F;
  Rte_FordHwAgArbn_FordHwVelVld_Logl = FALSE;
  Rte_FordHwAgArbn_FordPosnOffsVld_Logl = FALSE;
  Rte_FordHwAgArbn_FordRelHwPosn_Val = 0.0F;
  Rte_FordHwAgArbn_FordRelHwPosnVld_Logl = FALSE;
  Rte_FordHwAgArbn_FordRelHwPosntoSerlCom_Val = 3353.5F;
  Rte_FordHwTqCdng_FordAppldFinalMotTq_Val = 0;
  Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl = FALSE;
  Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val = 0;
  Rte_FordHwTqCdng_FordBoostCrvInpTq_Val = 0;
  Rte_FordHwTqCdng_FordInpTqRaw_Val = 0;
  Rte_FordHwTqCdng_FordInpTqRawVld_Logl = FALSE;
  Rte_FordHwTqCdng_FordMaxAsscTq_Val = 0.0F;
  Rte_FordHwTqCdng_FordReqdFinalMotTq_Val = 0;
  Rte_FordHwTqCdng_FordSumBoostCrvInpTq_Val = 0;
  Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val = 0.0F;
  Rte_FordMotTqCmdOvrlLimr_FordMotTqCmdOvrl_Val = 0.0F;
  Rte_FordMsg077BusHiSpd_FordVehLatACmpd_Val = 17.835F;
  Rte_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val = 0U;
  Rte_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl = FALSE;
  Rte_FordMsg077BusHiSpd_FordVehLgtACmpd_Val = 17.835F;
  Rte_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val = 0U;
  Rte_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl = FALSE;
  Rte_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val = 0.0F;
  Rte_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val = 0U;
  Rte_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl = FALSE;
  Rte_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val = 74.92659F;
  Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val = 0U;
  Rte_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl = FALSE;
  Rte_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val = 0U;
  Rte_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl = FALSE;
  Rte_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val = 0U;
  Rte_FordMsg07DBusHiSpd_FordVehVertAVld_Logl = FALSE;
  Rte_FordMsg083BusHiSpd_FordVehTurnSigSwtStsRaw_Val = 0U;
  Rte_FordMsg083BusHiSpd_FordVehTurnSigVld_Logl = FALSE;
  Rte_FordMsg091BusHiSpd_FordVehYawRate_Val = 0.0F;
  Rte_FordMsg091BusHiSpd_FordVehYawRateRaw_Ford_VehYaw_W_Actl = 65534U;
  Rte_FordMsg091BusHiSpd_FordVehYawRateRawVld_Logl = FALSE;
  Rte_FordMsg167BusHiSpd_FordVehElecPwrStrtStopSts_Ford_ElPw_D_StatStrtStop = 0U;
  Rte_FordMsg167BusHiSpd_FordVehElecPwrSts_Ford_ElPw_D_Stat = 0U;
  Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTq_Val = -131072.0F;
  Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqRaw_Val = 0U;
  Rte_FordMsg167BusHiSpd_FordVehPrpnWhlTqVld_Logl = FALSE;
  Rte_FordMsg167BusHiSpd_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat = 0U;
  Rte_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl = 7U;
  Rte_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl = FALSE;
  Rte_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl = FALSE;
  Rte_FordMsg202BusHiSpd_FordVehSpdEngModl_Val = 0.0F;
  Rte_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl = FALSE;
  Rte_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf = 0U;
  Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail = FALSE;
  Rte_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl = FALSE;
  Rte_FordMsg213BusHiSpd_FordVehAbsActv_Val = 0U;
  Rte_FordMsg213BusHiSpd_FordVehAbsEscStsVld_Logl = FALSE;
  Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDenied_Val = 0U;
  Rte_FordMsg213BusHiSpd_FordVehCllsnMtgtnByBrkgDisad_Val = 0U;
  Rte_FordMsg213BusHiSpd_FordVehEscActv_Val = 0U;
  Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReq_Ford_TrlrAidMde_D_Rq = 0U;
  Rte_FordMsg215BusHiSpd_FordVehTrlrAidModReqVld_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val = 0U;
  Rte_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt = 0U;
  Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val = 0U;
  Rte_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt = 0U;
  Rte_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val = 0U;
  Rte_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt = 0U;
  Rte_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val = 0U;
  Rte_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt = 0U;
  Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val = 0.0F;
  Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl = FALSE;
  Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val = 0.0F;
  Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl = FALSE;
  Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val = 0.0F;
  Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl = FALSE;
  Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val = 0.0F;
  Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl = FALSE;
  Rte_FordMsg230BusHiSpd_FordVehGearLvrPosn_Ford_GearLvrPos_D_Actl = 14U;
  Rte_FordMsg230BusHiSpd_FordVehGearLvrPosnVldInt_Logl = FALSE;
  Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReq_Val = 0U;
  Rte_FordMsg2FDBusHiSpd_FordVehEvasSteerAssiReqVld_Logl = FALSE;
  Rte_FordMsg3B3BusHiSpd_FordVehIgnSts_Ford_Ignition_Status = 0U;
  Rte_FordMsg3B3BusHiSpd_FordVehIgnStsVld_Logl = FALSE;
  Rte_FordMsg3B3BusHiSpd_FordVehLifeCycMod_Ford_LifeCycMde_D_Actl = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneAssiImgProcgModlAVld_Logl = FALSE;
  Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnInten_Val = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneDetnWarnSts_Val = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvt_Val = 0.0F;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysCrvtRaw_Val = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysRampTyp_Val = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAg_Val = 0.0F;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysReqdAgRaw_Val = 0U;
  Rte_FordMsg3CABusHiSpd_FordVehLaneKeepSysSts_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvt_Val = 0.0F;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRate_Val = 0.0F;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRateRaw_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlCrvtRaw_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlImgProcrModlAVld_Logl = FALSE;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPah_Val = 0.0F;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffs_Val = 0.0F;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahOffsRaw_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPahRaw_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlPrcsn_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRampTyp_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlReq_Val = 0U;
  Rte_FordMsg3D3BusHiSpd_FordVehLatCtrlRingMax_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val = 0U;
  Rte_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl = FALSE;
  Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val = 0.1F;
  Rte_MemCpy32(Rte_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D, Rte_C_Ary1D_u08_17_0, sizeof(Ary1D_u08_17));
  Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val = 0.0F;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val = 0.0F;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val = 0U;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl = FALSE;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl = FALSE;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl = FALSE;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val = 0U;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val = 0U;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat = 0U;
  Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat = 0U;
  Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl = FALSE;
  Rte_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val = 0.0F;
  Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl = FALSE;
  Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl = FALSE;
  Rte_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf = 0U;
  Rte_FordMsg41ABusHiSpd_FordVehOutdAirT_Val = 86.5F;
  Rte_FordMsg41ABusHiSpd_FordVehOutdAirTRaw_Val = 254U;
  Rte_FordMsg41EBusHiSpd_FordVehPenSelDrvMod_Ford_SelDrvMdeChassis2_D_Rq = 0U;
  Rte_FordMsg41EBusHiSpd_FordVehSelDrvModChassisVld_Logl = FALSE;
  Rte_FordMsg430BusHiSpd_FordVehOdom_Val = 0.0F;
  Rte_FordMsg443BusHiSpd_FordVehTrlrLampCnctnStsRaw_Ford_TrlrLampCnnct_B_Actl = FALSE;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidAcqSts_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAg_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidHitchAgRate_Val = 400U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidIdnVal_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgSt_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrakgStVld_Logl = FALSE;
  Rte_FordMsg459BusHiSpd_FordVehTrlrAidTrlrRvsGuidcSts_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrBallToAxle_Val = 0U;
  Rte_FordMsg459BusHiSpd_FordVehTrlrHitchAgVld_Logl = FALSE;
  Rte_FordMsg459BusHiSpd_FordVehTrlrHitchRateVld_Logl = FALSE;
  Rte_FordMsg459BusHiSpd_FordVehTrlrTarVld_Logl = FALSE;
  Rte_FordMsg459BusHiSpd_TrlrAidStsThreePrsntInt_Logl = FALSE;
  Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val = 0U;
  Rte_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val = 0U;
  Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl = FALSE;
  Rte_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl = FALSE;
  Rte_FordMsg4B0BusHiSpd_FordVehYawStabyRaw_Val = 0U;
  Rte_FordMsg4B0BusHiSpd_FordVehYawStabyVld_Logl = FALSE;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMControl_Val = 0U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMNodeId_Val = 181U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved1_Val = 255U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved2_Val = 255U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved3_Val = 255U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_AutoSarNMReserved4_Val = 255U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWNMProxy_Val = 255U;
  Rte_FordMsg5B5BusHiSpd_Ford_PSCM_GWOnBoardTester_Val = 255U;
  Rte_FordSysSt_FordEpsFailr_Ford_EPAS_Failure = 0U;
  Rte_FordSysSt_FordEpsSysSt_Val = 0U;
  Rte_FordSysSt_FordPwrSplyEnaReq_Logl = FALSE;
  Rte_FordSysSt_FordSteerModlSts_Ford_SteMdule_D_Stat = 0U;
  Rte_FordSysSt_OperRampRate_Val = 1.0F;
  Rte_FordSysSt_OperScaFctr_Val = 1.0F;
  Rte_FordSysSt_SysStReqEna_Logl = FALSE;
  Rte_FordVehSpdArbn_FordVehSpd_Val = 0.0F;
  Rte_FordVehSpdArbn_FordVehSpdLoQly_Val = 0.0F;
  Rte_FordVehSpdArbn_FordVehSpdLoQlyVld_Logl = FALSE;
  Rte_FordVehSpdArbn_FordVehSpdVld_Logl = FALSE;
  Rte_FordVltgIf_FordEpsCurr_Val = 140.75F;
  Rte_FordVltgIf_FordEpsCurrVal_Logl = FALSE;
  Rte_FordVltgIf_FordEpsVltg_Val = 18.75F;
  Rte_FordVltgIf_FordEpsVltgVal_Logl = FALSE;
  Rte_FordVltgIf_FordFeatThdSts_Logl = FALSE;
  Rte_FordVltgIf_FordInhbBattVltgDiagc_Logl = FALSE;
  Rte_FordVltgIf_FordMaxBattCurr_Val = 0.0F;
  Rte_FordVltgIf_FordMinBattVltg_Val = 0.0F;
  Rte_FordVltgIf_FordVltgOperRamp_Val = 1.0F;
  Rte_FordVltgIf_FordVltgOperScar_Val = 1.0F;
  Rte_FordVltgIf_FordVltgOperSt_Val = 0U;
  Rte_GateDrv0Ctrl_DiagcStsIvtr1Inactv_Logl = FALSE;
  Rte_GateDrv0Ctrl_IvtrFetFltPha_Val = 0U;
  Rte_GateDrv0Ctrl_IvtrFetFltTyp_Val = 0U;
  Rte_GateDrv0Ctrl_MotDrvErrA_Val = 0.0F;
  Rte_GateDrv0Ctrl_MotDrvErrB_Val = 0.0F;
  Rte_GateDrv0Ctrl_MotDrvErrC_Val = 0.0F;
  Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl = FALSE;
  Rte_HiLoadStallLimr_StallMotTqLim_Val = 8.8F;
  Rte_HwAg1Meas_HwAg1_Val = 0.0F;
  Rte_HwAg1Meas_HwAg1Qlfr_Val = 0U;
  Rte_HwAg1Meas_HwAg1RollgCntr_Val = 0U;
  Rte_HwAgArbn_HwAg_Val = 0.0F;
  Rte_HwAgCorrln_HwAgCorrlnSt_Val = 1U;
  Rte_HwAgCorrln_HwAgIdptSig_Val = 2U;
  Rte_HwAgSnsrls_HwAgSnsrls_Val = 0.0F;
  Rte_HwAgSnsrls_HwAgSnsrlsConf_Val = 0.0F;
  Rte_HwAgSysArbn_HwAgFinal_Val = 0.0F;
  Rte_HwAgSysArbn_HwAgNotCorrd_Val = 0.0F;
  Rte_HwAgSysArbn_HwAgToMotAgCorrlnFltFld_Logl = FALSE;
  Rte_HwAgSysArbn_HwAgToSerlCom_Val = 0.0F;
  Rte_HwAgSysArbn_HwAgVldToSerlCom_Logl = FALSE;
  Rte_HwAgSysArbn_HwVel_Val = 0.0F;
  Rte_HwAgSysArbn_HwVelToSerlCom_Val = 0.0F;
  Rte_HwAgSysArbn_PinionAg_Val = 0.0F;
  Rte_HwAgSysArbn_PinionAgConf_Val = 0.0F;
  Rte_HwAgSysArbn_PinionVel_Val = 0.0F;
  Rte_HwAgSysArbn_PinionVelConf_Val = 0.0F;
  Rte_HwTq10Meas_HwTq10_Val = 0.0F;
  Rte_HwTq10Meas_HwTq10Qlfr_Val = 0U;
  Rte_HwTq10Meas_HwTq10RollgCntr_Val = 0U;
  Rte_HwTq9Meas_HwTq9_Val = 0.0F;
  Rte_HwTq9Meas_HwTq9Qlfr_Val = 0U;
  Rte_HwTq9Meas_HwTq9RollgCntr_Val = 0U;
  Rte_HwTqArbn_HwTq_Val = 0.0F;
  Rte_HwTqCorrln_HwTqCorrlnSts_Val = 15U;
  Rte_HwTqCorrln_HwTqIdptSig_Val = 4U;
  Rte_HysCmp_HysCmpCmd_Val = 0.0F;
  Rte_ImcSigArbn_HwAgImcCorrd_Val = 0.0F;
  Rte_ImcSigArbn_HwTqImcCorrd_Val = 0.0F;
  Rte_ImcSigArbn_ImcSysSt_Val = 3U;
  Rte_ImcSigArbn_ImcSysStVld_Logl = FALSE;
  Rte_ImcSigArbn_MotVelCrfImcCorrd_Val = 0.0F;
  Rte_ImcSigArbn_PosnServoHwAgImcCorrd_Val = 0.0F;
  Rte_ImcSigArbn_PosnServoIntgtrOffs_Val = 0.0F;
  Rte_ImcSigArbn_PosnTrakgArbnFltMtgtnEna_Logl = FALSE;
  Rte_ImcSigArbn_PosnTrakgIntgtrSt1Offs_Val = 0.0F;
  Rte_ImcSigArbn_PosnTrakgIntgtrSt2Offs_Val = 0.0F;
  Rte_ImcSigArbn_PullCmpLongTermIntgtrStOffs_Val = 0.0F;
  Rte_ImcSigArbn_PullCmpShoTermIntgtrStOffs_Val = 0.0F;
  Rte_ImcSigArbn_VehSpdImcCorrd_Val = 0.0F;
  Rte_InertiaCmpVel_InertiaCmpVelCmd_Val = 0.0F;
  Rte_LimrCdng_EotAssiScaCdnd_Val = 1.0F;
  Rte_LimrCdng_EotMotTqLimCdnd_Val = 8.8F;
  Rte_LimrCdng_StallMotTqLimCdnd_Val = 8.8F;
  Rte_LimrCdng_SysMotTqCmdScaCdnd_Val = 1.0F;
  Rte_LimrCdng_ThermMotTqLimCdnd_Val = 8.8F;
  Rte_LimrCdng_VehSpdMotTqLimCdnd_Val = 8.8F;
  Rte_LoaMgr_HwTqLoaMtgtnEna_Logl = FALSE;
  Rte_LoaMgr_LoaRateLim_Val = 1.0F;
  Rte_LoaMgr_LoaSca_Val = 1.0F;
  Rte_LoaMgr_LoaSt_Val = 0U;
  Rte_LoaMgr_MotAgLoaMtgtnEna_Logl = FALSE;
  Rte_LoaMgr_MotAndThermProtnLoaMod_Val = 0U;
  Rte_MotAg2Meas_MotAg2Mecl_Val = 0U;
  Rte_MotAg2Meas_MotAg2MeclQlfr_Val = 0U;
  Rte_MotAg2Meas_MotAg2MeclRollgCntr_Val = 0U;
  Rte_MotAg2Meas_MotAg2VltgSqd_Val = 1.755625F;
  Rte_MotAgCorrln_MotAgABErrTerm_Val = 0U;
  Rte_MotAgCorrln_MotAgACErrTerm_Val = 0U;
  Rte_MotAgCorrln_MotAgBCErrTerm_Val = 0U;
  Rte_MotAgCorrln_MotAgMeclCorrlnSt_Val = 7U;
  Rte_MotAgCorrln_MotAgMeclIdptSig_Val = 3U;
  Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val = 0.025F;
  Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val = 0.00011889F;
  Rte_MotCtrlPrmEstimn_MotInduDaxEstimdIvs_Val = 0.0F;
  Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val = 0.00011889F;
  Rte_MotCtrlPrmEstimn_MotInduQaxEstimdIvs_Val = 0.0F;
  Rte_MotCtrlPrmEstimn_MotREstimd_Val = 0.0F;
  Rte_MotCurrPeakEstimn_MotCurrPeakEstimd_Val = 0.0F;
  Rte_MotCurrPeakEstimn_MotCurrPeakEstimdFild_Val = 0.0F;
  Rte_MotCurrRegCfg_MotAgElecDly_Val = 0.0F;
  Rte_MotCurrRegCfg_MotDampgDax_Val = 0.0F;
  Rte_MotCurrRegCfg_MotDampgQax_Val = 0.0F;
  Rte_MotCurrRegCfg_MotIntglGainDax_Val = 0.0F;
  Rte_MotCurrRegCfg_MotIntglGainQax_Val = 0.0F;
  Rte_MotCurrRegCfg_MotPropGainDax_Val = 0.0F;
  Rte_MotCurrRegCfg_MotPropGainQax_Val = 0.0F;
  Rte_MotQuadDetn_MotDirInsts_Val = 1;
  Rte_MotQuadDetn_MotQuad_Val = 1U;
  Rte_MotRefMdl_MotBackEmfVltg_Val = 0.0F;
  Rte_MotRefMdl_MotCurrAg_Val = 0.0F;
  Rte_MotRefMdl_MotCurrDaxCmd_Val = 0.0F;
  Rte_MotRefMdl_MotCurrDaxMax_Val = 0.0F;
  Rte_MotRefMdl_MotCurrQaxCmd_Val = 0.0F;
  Rte_MotRefMdl_MotReacncDax_Val = 0.0F;
  Rte_MotRefMdl_MotReacncQax_Val = 0.0F;
  Rte_MotRefMdl_MotVltgDaxFf_Val = 0.0F;
  Rte_MotRefMdl_MotVltgDaxFfStat_Val = 0.0F;
  Rte_MotRefMdl_MotVltgQaxFf_Val = 0.0F;
  Rte_MotRefMdl_MotVltgQaxFfStat_Val = 0.0F;
  Rte_MotRefMdl_MotVltgSatnIndFf_Val = 0.0F;
  Rte_MotRplCoggCfg_MotAgElecDlyRpl_Val = 0.0F;
  Rte_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val = 0.021651F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val = 0.0F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val = 0.0F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val = 0.0F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val = 0.0F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val = 0.0F;
  Rte_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val = 0.0F;
  Rte_MotTqCmdSca_MotTqCmdMrfScad_Val = 0.0F;
  Rte_MotTqTranlDampg_MotTqCmdCrfDampd_Val = 0.0F;
  Rte_MotTqTranlDampg_MotTqCmdMrfDampd_Val = 0.0F;
  Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl = FALSE;
  Rte_PolarityCfg_AssiMechPolarity_Val = 1;
  Rte_PolarityCfg_HwAg0Polarity_Val = 1;
  Rte_PolarityCfg_HwAg1Polarity_Val = 1;
  Rte_PolarityCfg_HwAg2Polarity_Val = 1;
  Rte_PolarityCfg_HwAg3Polarity_Val = 1;
  Rte_PolarityCfg_HwAg4Polarity_Val = 1;
  Rte_PolarityCfg_HwAg5Polarity_Val = 1;
  Rte_PolarityCfg_HwAg6Polarity_Val = 1;
  Rte_PolarityCfg_HwAg7Polarity_Val = 1;
  Rte_PolarityCfg_HwTq0Polarity_Val = 1;
  Rte_PolarityCfg_HwTq1Polarity_Val = 1;
  Rte_PolarityCfg_HwTq2Polarity_Val = 1;
  Rte_PolarityCfg_HwTq3Polarity_Val = 1;
  Rte_PolarityCfg_HwTq4Polarity_Val = 1;
  Rte_PolarityCfg_HwTq5Polarity_Val = 1;
  Rte_PolarityCfg_HwTq6Polarity_Val = 1;
  Rte_PolarityCfg_HwTq7Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl0Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl1Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl2Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl3Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl4Polarity_Val = 1;
  Rte_PolarityCfg_MotAgMecl5Polarity_Val = 0;
  Rte_PolarityCfg_MotAgMecl6Polarity_Val = 0;
  Rte_PolarityCfg_MotAgMecl7Polarity_Val = 1;
  Rte_PolarityCfg_MotElecMeclPolarity_Val = 1;
  Rte_PosnTrakgServo_PosnServoCmd_Val = 0.0F;
  Rte_PosnTrakgServo_PosnServoIntgtrSt_Val = 0.0F;
  Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl = FALSE;
  Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl = FALSE;
  Rte_PwrDiscnct_PwrDiscnctClsd_Logl = FALSE;
  Rte_PwrLimr_MotTqCmdPwrLimd_Val = 0.0F;
  Rte_PwrLimr_PwrLimrRednFac_Val = 0.0F;
  Rte_PwrUpSeq_StrtUpSt_Val = 0U;
  Rte_PwrUpSeq_SysStWrmIninCmpl_Logl = FALSE;
  Rte_Rtn_RtnCmd_Val = 0.0F;
  Rte_RtnPahFwl_RtnCmdLimd_Val = 0.0F;
  Rte_StOutpCtrl_SysMotTqCmdSca_Val = 1.0F;
  Rte_StOutpCtrl_SysStReqDi_Logl = FALSE;
  Rte_StabyCmp_AssiCmd_Val = 0.0F;
  Rte_Swp_HwTqSwp_Val = 0.0F;
  Rte_Swp_MotTqCmdSwp_Val = 0.0F;
  Rte_SysFricLrng_MaxLrndFric_Val = 0.0F;
  Rte_SysFricLrng_SysFricEstimd_Val = 0.0F;
  Rte_SysFricLrng_SysFricOffs_Val = 0.0F;
  Rte_SysFricLrng_SysSatnFricEstimd_Val = 0.0F;
  Rte_SysPrfmncSts_BattVltgSt_Val = 0U;
  Rte_SysPrfmncSts_SysPrfmncSt_Val = 0U;
  Rte_SysStMod_SysSt_Val = 3U;
  Rte_TEstimn_AssiMechT_Val = 0.0F;
  Rte_TEstimn_MotFetT_Val = 0.0F;
  Rte_TEstimn_MotMagT_Val = 0.0F;
  Rte_TEstimn_MotWidgT_Val = 0.0F;
  Rte_TmplMonr_TmplMonrIninTestCmpl_Logl = FALSE;
  Rte_TqLoa_TqLoaAvl_Logl = FALSE;
  Rte_TqLoa_TqLoaCmd_Val = 0.0F;
  Rte_TunSelnMngt_ActvGroup_Val = 0U;
  Rte_TunSelnMngt_ActvIninIdx_Val = 0U;
  Rte_TunSelnMngt_ActvRtIdx_Val = 0U;
  Rte_TunSelnMngt_CalCopySts_Val = 0U;
  Rte_VehSigCdng_VehLatA_Val = 0.0F;
  Rte_VehSigCdng_VehLatAEstimd_Val = 0.0F;
  Rte_VehSigCdng_VehLatAEstimdVld_Logl = FALSE;
  Rte_VehSigCdng_VehLatAVld_Logl = FALSE;
  Rte_VehSigCdng_VehLgtA_Val = 0.0F;
  Rte_VehSigCdng_VehLgtAVld_Logl = FALSE;
  Rte_VehSigCdng_VehSpd_Val = 0.0F;
  Rte_VehSigCdng_VehSpdVld_Logl = FALSE;
  Rte_VehSigCdng_VehYawRate_Val = 0.0F;
  Rte_VehSigCdng_VehYawRateVld_Logl = FALSE;
  Rte_VehSpdLimr_VehSpdMotTqLim_Val = 8.8F;
  Rte_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val = 23U;
  Rte_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val = 21U;
  Rte_Assi_AssiCmdBasSca_Val = 1.0F;
  Rte_Assi_HwTqHysOvrl_Val = 0.0F;
  Rte_Assi_WhlImbRejctnAmp_Val = 0.0F;
  Rte_AssiHiFrq_WhlImbRejctnAmp_Val = 0.0F;
  Rte_AssiSumLim_MotTqCmdLimDi_Logl = FALSE;
  Rte_AssiSumLim_PinionCentrLrnCmd_Val = 0.0F;
  Rte_AssiSumLim_PinionCentrLrnEna_Logl = FALSE;
  Rte_AssiSumLim_PullCmpCmd_Val = 0.0F;
  Rte_AssiSumLim_TqSteerMtgtnCmd_Val = 0.0F;
  Rte_AssiSumLim_WhlImbRejctnCmd_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmn_ActvParkAssiTqFild_Val = 0.0F;
  Rte_CDD_FordBlaBoxIfCmn_FildVehSpdVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordEvasSteerAssiEnaReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordMsgInp1Vld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordMsgInp2Vld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordMsgInp3Vld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordMsgInp4Vld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordTrlrAidHitchAgRate_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssi5WhlEnad_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordTrlrBackupAssiTrigEnad_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsQlyFacRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehAccrPedlPosnStsVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp1LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp2LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp3LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4HiPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBlaBoxInp4LoPart_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppld_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlAppldQlyFac_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehBrkPedlVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehEngSpdVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehFrntLeWhlRollgCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehFrntRiWhlRollgCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehGearLvrPosn_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehGearPosnRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehIgnSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlStsVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehParkAidModlSysSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehReLeWhlRollgCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehReRiWhlRollgCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAgOffsDirRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidCnclReqVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidIdnNrRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobPosnVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidKnobStsVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidModReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAidSetUpRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrAxleToBmpRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBackupAssiMeasVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrBrkCnctnStsRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrEnaReqRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchAgRateRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawAgRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrHitchYawSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrIdnTypRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrLampCnctnStsRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsCnclReqRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsEnaRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrRvsMsgTxtReqRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateQlyFac_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrlrYawRateRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehTrsmDesGearRaw_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordVehYawRateVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdHi_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_FordYawRateSnsrIdLo_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_IntAgCtrlSt_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_RackToPinionRat_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_SelnDrvgModSteerModReq_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts1_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts2_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts3_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts4_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_SemiAutParlParkAgCtrlSts5_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiEnaVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiRvsVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_TrlrBackupAssiYawRateVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmn_VehSteerRat_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_VehWhlBas_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmn_VertAVld_Logl = FALSE;
  Rte_CDD_FordBlaBoxIfCmp1_FordActvNiblCtrlDiagcSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordSrvLaneDprtrWarnDiagcSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvActvNiblCmpIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneDprtrWarnIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLaneKeepAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvLatCtrlIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvPullDriftCmpIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp1_FordWrSrvTrlrBackupAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val = 0U;
  Rte_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val = 0U;
  Rte_CDD_FordT3T6McuCfg_Adc0Faild_Logl = FALSE;
  Rte_CDD_FordT3T6McuCfg_Adc1Faild_Logl = FALSE;
  Rte_CmnMfgSrv_HwAg0_Val = 0.0F;
  Rte_CmnMfgSrv_MotAg0Mecl_Val = 0U;
  Rte_CmnMfgSrv_MotAg1Mecl_Val = 0U;
  Rte_CmnMfgSrv_MotAgMecl_Val = 0U;
  Rte_Dampg_DampgCmdOvrl_Val = 0.0F;
  Rte_Dampg_DampgCmdSca_Val = 1.0F;
  Rte_DualCtrlrOutpMgr_ImcSysStVld_Val = 0U;
  Rte_DualEcuIdn_EcuComTiOut_Logl = FALSE;
  Rte_DutyCycThermProtn_IgnTiOff_Val = 0U;
  Rte_DutyCycThermProtn_VehTiVld_Logl = FALSE;
  Rte_EotLrng_HwAgDiDiagSts_Logl = FALSE;
  Rte_FordCmdArbn_FordDrvrSteerRcmdnFeatSt_Val = 0U;
  Rte_FordCmdArbn_FordExtAgCtrlFeatSt_Val = 0U;
  Rte_FordCmdArbn_FordSpare1FeatSt_Val = 0U;
  Rte_FordCmdArbn_FordSpare2FeatSt_Val = 0U;
  Rte_FordCmdArbn_FordSpare3FeatSt_Val = 0U;
  Rte_FordCmdArbn_FordSteerModlSts_Val = 0U;
  Rte_FordCmdArbn_FordSysOperMotTqCmdSca_Val = 1.0F;
  Rte_FordHwAgArbn_FordSteerAgClrFlg_Logl = FALSE;
  Rte_FordHwTqCdng_AvlMotTq_Val = 0.0F;
  Rte_FordHwTqCdng_HwTqHysOvrl_Val = 0.0F;
  Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnFctCallSts_Logl = FALSE;
  Rte_FordHwTqCmdOvrlLimr_FordDrvrSteerRcmdnTqReq_Val = 0.0F;
  Rte_FordHwTqCmdOvrlLimr_FordEvasSteerAssiFctCallSts_Logl = FALSE;
  Rte_FordHwTqCmdOvrlLimr_FordLaneKeepAssiFctCallSts_Logl = FALSE;
  Rte_FordMotTqCmdOvrlLimr_FordActvNiblCtrlFctCallSts_Logl = FALSE;
  Rte_FordMotTqCmdOvrlLimr_FordLaneDprtrWarnFctCallSts_Logl = FALSE;
  Rte_FordMotTqCmdOvrlLimr_FordLatCtrlFctCallSts_Logl = FALSE;
  Rte_FordMotTqCmdOvrlLimr_FordPullDriftCmpFctCallSts_Logl = FALSE;
  Rte_FordMotTqCmdOvrlLimr_FordSteerTqDstbcRejctnFctCallSts_Logl = FALSE;
  Rte_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl = FALSE;
  Rte_FordMsg07DBusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehDrvrSteerTqReq_Val = 0.0F;
  Rte_FordMsg082BusHiSpd_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1 = 0U;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2 = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3 = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4 = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5 = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6 = FALSE;
  Rte_FordMsg082BusHiSpd_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq = FALSE;
  Rte_FordMsg082BusHiSpd_InpTqRaw_Val = 7.875F;
  Rte_FordMsg091BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg167BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U;
  Rte_FordMsg167BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg167BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg167BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordMsg215BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordMsg216BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordMsg230BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordMsg3B3BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U;
  Rte_FordMsg3B3BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg3B3BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg3B3BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg3CCBusHiSpd_FordVehLoSpdMtnCtrlBrkTqReq_Val = 0.0F;
  Rte_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordMsg417BusHiSpd_FordVehSelDrvModSteerSts_Ford_SelDrvMdeSte_D_Stat = 0U;
  Rte_FordMsg417BusHiSpd_FordVehTrlrAidEnaSts_Ford_TrlrAidEnbl_D2_Stat = 0U;
  Rte_FordMsg417BusHiSpd_FordVehTrlrAidMsgTxtReq_Ford_TrlrAidMsgTxt_D2_Rq = 0U;
  Rte_FordMsg430BusHiSpd_FordMfgDiagcInhb_Val = 0U;
  Rte_FordMsg430BusHiSpd_FordMissMsgDiagcInhb_Val = 0U;
  Rte_FordMsg443BusHiSpd_FordTrlrBackUpAssiEnad_Logl = FALSE;
  Rte_FordMsg459BusHiSpd_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_FordVltgIf_FordStrtStopSt_Val = 0.0F;
  Rte_FordVltgIf_FordTrlrBackupAssiEnad_Logl = FALSE;
  Rte_GateDrv0Ctrl_Ivtr1PwrDiscnctFltSts_Logl = FALSE;
  Rte_HwAgSnsrls_WhlFrqVld_Logl = FALSE;
  Rte_HwAgSnsrls_WhlLeFrq_Val = 0.01F;
  Rte_HwAgSnsrls_WhlRiFrq_Val = 0.01F;
  Rte_HwAgSysArbn_HwAgTrimPrfmd_Logl = FALSE;
  Rte_HysCmp_WhlImbRejctnAmp_Val = 0.0F;
  Rte_ImcSigArbn_PosnServoHwAg_Val = 0.0F;
  Rte_ImcSigArbn_PosnTrakgIntgtrSt1_Val = 0.0F;
  Rte_ImcSigArbn_PosnTrakgIntgtrSt2_Val = 0.0F;
  Rte_ImcSigArbn_PullCmpLongTermIntgtrSt_Val = 0.0F;
  Rte_ImcSigArbn_PullCmpShoTermIntgtrSt_Val = 0.0F;
  Rte_InertiaCmpVel_InertiaCmpDecelGainDi_Logl = FALSE;
  Rte_InertiaCmpVel_WhlImbRejctnAmp_Val = 0.0F;
  Rte_LoaMgr_DiagcStsIvtr2Inactv_Logl = FALSE;
  Rte_LoaMgr_MotAgSnsrlsAvl_Logl = FALSE;
  Rte_LoaMgr_VehSteerMod_Val = 0U;
  Rte_PosnTrakgServo_PosnServoEna_Logl = FALSE;
  Rte_PosnTrakgServo_PosnServoHwAg_Val = 0.0F;
  Rte_PosnTrakgServo_PosnServoHwVel_Val = 0.0F;
  Rte_PwrLimr_AltFltActv_Logl = FALSE;
  Rte_Rtn_HwAgRtnOffs_Val = 0.0F;
  Rte_Rtn_RtnCmdSca_Val = 1.0F;
  Rte_Rtn_RtnCmdScaServo_Val = 1.0F;
  Rte_StOutpCtrl_VehStrtStopMotTqCmdSca_Val = 1.0F;
  Rte_StOutpCtrl_VehStrtStopRampRate_Val = 1.0F;
  Rte_StabyCmp_AssiCmdBasSca_Val = 0.0F;
  Rte_StabyCmp_AssiPahLimrActv_Val = 0.0F;
  Rte_SysFricLrng_FricLrngCustEna_Logl = TRUE;
  Rte_TEstimn_AmbT_Val = 0.0F;
  Rte_TEstimn_AmbTVld_Logl = FALSE;
  Rte_TEstimn_EngOilT_Val = 0.0F;
  Rte_TEstimn_EngOilTVld_Logl = FALSE;
  Rte_TEstimn_IgnTiOff_Val = 0U;
  Rte_TEstimn_VehTiVld_Logl = FALSE;
  Rte_TunSelnAuthy_TunSelnRtDi_Logl = FALSE;
  Rte_TunSelnMngt_DesIninIdx_Val = 0U;
  Rte_TunSelnMngt_DesRtIdx_Val = 0U;
  Rte_VehSigCdng_VehLatASerlCom_Val = 0.0F;
  Rte_VehSigCdng_VehLatAVldSerlCom_Logl = FALSE;
  Rte_VehSigCdng_VehLgtASerlCom_Val = 0.0F;
  Rte_VehSigCdng_VehLgtAVldSerlCom_Logl = FALSE;

  /* initialize inter-runnable variables */
  Rte_Irv_AssiSumLim_ProcdManTqCmd = 0.0F;
  Rte_Irv_AssiSumLim_ProcdManTqCmdEna = FALSE;
  Rte_Irv_CDD_MotAg5Meas_MotAg5PrtclOk = FALSE;
  Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari = Rte_C_MotAgRtPrmRec1_0;
  Rte_Irv_CDD_MotAg6Meas_MotAg6PrtclOk = FALSE;
  Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari = Rte_C_MotAgRtPrmRec1_0;
  Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt = FALSE;
  Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld = FALSE;
  Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna = FALSE;
  Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld = FALSE;
  Rte_Irv_DutyCycThermProtn_FilStVariReInitFlg = FALSE;
  Rte_Irv_FordHwAgArbn_FordSnsrOutp = 0.0F;
  Rte_Irv_FordVehSpdArbn_FordVehArbnTireCircum = 65534U;
  Rte_Irv_GateDrv0Ctrl_GateDrv0Ena = FALSE;
  Rte_Irv_GateDrv0Ctrl_GateDrv0PhaReasbnDiagcEna = FALSE;
  Rte_Irv_GateDrv0Ctrl_Ivtr0PhyFltInpActv = FALSE;
  Rte_Irv_HwAg1Meas_HwAg1Snsr0Raw = 0U;
  Rte_Irv_HwAg1Meas_HwAg1Snsr0TestOk = 0U;
  Rte_Irv_HwAg1Meas_HwAg1Snsr1Raw = 0U;
  Rte_Irv_HwAg1Meas_HwAg1Snsr1TestOk = 0U;
  Rte_Irv_HwAgSnsrls_StordHwAg = 0.0F;
  Rte_Irv_HwAgSnsrls_StordHwConf = 0.0F;
  Rte_Irv_ImcArbn_IniTiOutChkCmpl = FALSE;
  Rte_Irv_ImcSigArbn_HwAgOffs = 0.0F;
  Rte_Irv_ImcSigArbn_HwAgTarOffs = 0.0F;
  Rte_Irv_ImcSigArbn_HwTqOffs = 0.0F;
  Rte_Irv_ImcSigArbn_ImcSysSt10MilliSec = 3U;
  Rte_Irv_ImcSigArbn_ImcSysStVld10MilliSec = FALSE;
  Rte_Irv_ImcSigArbn_MotVelCrfOffs = 0.0F;
  Rte_Irv_ImcSigArbn_VehSpdOffs = 0.0F;
  Rte_Irv_MotCtrlPrmEstimn_MotBackEmfConFf = 0.03993F;
  Rte_Irv_MotCurrPeakEstimn_MotCurrEstimd = 0.0F;
  Rte_MemCpy(Rte_Irv_MotTqTranlDampg_CtrldDampgScaX, Rte_C_Ary1D_u16p0_2_1, sizeof(Ary1D_u16p0_2));
  Rte_MemCpy(Rte_Irv_MotTqTranlDampg_CtrldDampgScaY, Rte_C_Ary1D_u2p14_2_1, sizeof(Ary1D_u2p14_2));
  Rte_Irv_MotVelCtrl_AntiWdupGain = 1.0F;
  Rte_Irv_MotVelCtrl_AntiWdupLim = 5.0F;
  Rte_Irv_MotVelCtrl_DerivtvGain = 0.004F;
  Rte_Irv_MotVelCtrl_DerivtvLpFilTiCon = 0.008F;
  Rte_Irv_MotVelCtrl_IntgtrGain = 0.15F;
  Rte_Irv_MotVelCtrl_PropGain = 0.2F;
  Rte_Irv_MotVelCtrl_TqCmdLim = 8.8F;
  Rte_Irv_PwrLimr_MinStdOperLim = 0.0F;
  Rte_Irv_PwrLimr_MotEnvlpSpd = 0.0F;
  Rte_Irv_PwrLimr_TqEnvlpLim1 = 0.0F;
  Rte_Irv_TEstimn_FilStVariRepInitFlg = FALSE;
  Rte_Irv_TmplMonr_ElpdTiMicroSec = 0U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod = RTE_MODE_BswMEcuResetMod_EcuResetDisabled;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_MotAgBuf_Ary1D(P2CONST(Ary1D_u0p16_8, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D, *(data), sizeof(Ary1D_u0p16_8));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D(P2CONST(Ary1D_u32_8, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D, *(data), sizeof(Ary1D_u32_8));

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePinAn_No_Cnt_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePinAn_No_Cs_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePinCompAnEst_D_Qf_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePinComp_An_Est_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePinRelInit_An_Sns_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePw_B_Rq_Ford_StePw_B_Rq(Ford_StePw_B_Rq data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_StePw_B_Rq_837112cd, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat(Ford_DrvSteActv_B_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_DrvSteActv_B_Stat_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl(Ford_DrvSte_Tq_Actl data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_DrvSte_Tq_Actl_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_EPAS_Failure1_Ford_EPAS_Failure(Ford_EPAS_Failure data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_EPAS_Failure_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1(Ford_SAPPAngleControlStat1 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat1_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2(Ford_SAPPAngleControlStat2 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat2_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3(Ford_SAPPAngleControlStat3 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat3_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4(Ford_SAPPAngleControlStat4 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat4_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5(Ford_SAPPAngleControlStat5 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat5_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6(Ford_SAPPAngleControlStat6 data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SAPPAngleControlStat6_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SteMdule_D_Stat_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est(Ford_SteMdule_I_Est data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SteMdule_I_Est_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas(Ford_SteMdule_U_Meas data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SteMdule_U_Meas_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque(Ford_SteeringColumnTorque data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SteeringColumnTorque_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst(Ford_TrlrHitchLamp_D_Rqst data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_TrlrHitchLamp_D_Rqst_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq(Ford_VehVTrlrAid_B_Rq data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_VehVTrlrAid_B_Rq_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid(Ford_Veh_V_RqMxTrlrAid data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_Veh_V_RqMxTrlrAid_635efcb3, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActAvail_D_Actl_Ford_LaActAvail_D_Actl(Ford_LaActAvail_D_Actl data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LaActAvail_D_Actl_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaActDeny_B_Actl_Ford_LaActDeny_B_Actl(Ford_LaActDeny_B_Actl data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LaActDeny_B_Actl_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LaHandsOff_B_Actl_Ford_LaHandsOff_B_Actl(Ford_LaHandsOff_B_Actl data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  ret |= Com_SendSignal(ComConf_ComSignal_LaHandsOff_B_Actl_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrkDecelEnbl_D_Rq_Ford_LsmcBrkDecelEnbl_D_Rq(Ford_LsmcBrkDecelEnbl_D_Rq data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LsmcBrkDecelEnbl_D_Rq_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_LsmcBrk_Tq_Rq_Ford_LsmcBrk_Tq_Rq(Ford_LsmcBrk_Tq_Rq data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LsmcBrk_Tq_Rq_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TjaHandsOnCnfdnc_B_Est_Ford_TjaHandsOnCnfdnc_B_Est(Ford_TjaHandsOnCnfdnc_B_Est data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_TjaHandsOnCnfdnc_B_Est_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3CCBusHiSpd_Ford_TrlrAn_An_TrgtCalc_Ford_TrlrAn_An_TrgtCalc(Ford_TrlrAn_An_TrgtCalc data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_TrlrAn_An_TrgtCalc_3724073d, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D(P2CONST(Ary1D_u08_17, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_DATA) data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy32(Rte_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D, *(data), sizeof(Ary1D_u08_17));
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_EsaOn_B_Stat1_Ford_EsaOn_B_Stat(Ford_EsaOn_B_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_EsaOn_B_Stat_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlLim_D_Stat1_Ford_LatCtlLim_D_Stat(Ford_LatCtlLim_D_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LatCtlLim_D_Stat_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_LatCtlSte_D_Stat1_Ford_LatCtlSte_D_Stat(Ford_LatCtlSte_D_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_LatCtlSte_D_Stat_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_SelDrvMdeSte_D_Stat1_Ford_SelDrvMdeSte_D_Stat(Ford_SelDrvMdeSte_D_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_SelDrvMdeSte_D_Stat_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidEnbl_D2_Stat1_Ford_TrlrAidEnbl_D2_Stat(Ford_TrlrAidEnbl_D2_Stat data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_TrlrAidEnbl_D2_Stat_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg417BusHiSpd_Ford_TrlrAidMsgTxt_D2_Rq1_Ford_TrlrAidMsgTxt_D2_Rq(Ford_TrlrAidMsgTxt_D2_Rq data) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  ret |= Com_SendSignal(ComConf_ComSignal_TrlrAidMsgTxt_D2_Rq_51142c79, (&data)); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 0850, 3673, 1505, 3206 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(Ary1D_u0p16_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(*(data), Rte_CDD_MotCtrlMgr_MotAgBuf_Ary1D, sizeof(Ary1D_u0p16_8));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(Ary1D_u32_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_MemCpy32(*(data), Rte_CDD_MotCtrlMgr_MotAgTiBuf_Ary1D, sizeof(Ary1D_u32_8));

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CustDiag_FordVehIdnNr_Ary1D(P2VAR(Ary1D_u08_17, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy32(*(data), Rte_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D, sizeof(Ary1D_u08_17));
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData(P2VAR(Ford_VehicleGGCCData, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data) /* PRQA S 0850, 3673, 1505 */ /* MD_MSR_19.8, MD_Rte_Qac, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  (void)Com_ReceiveSignal(ComConf_ComSignal_VehicleGGCCData_575096ac, *(data)); /* PRQA S 3453 */ /* MD_MSR_19.7 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(Dcm_ProtocolType ProtocolID) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_CompareKey(P2CONST(Dcm_Data18ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_CompareKey(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemDataElementClass_DTCDetectionCounter_ReadData(P2VAR(DataArray_Type_1, AUTOMATIC, RTE_DEM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dem_CBReadData_DemDataElementClass_MonitoringCycleCounter2_ReadData(P2VAR(DataArray_Type_2, AUTOMATIC, RTE_DEM_APPL_VAR) Data) /* PRQA S 0850, 1505, 3206, 3673 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 3197 */ /* MD_Rte_3197 */


  return ret;
}


/**********************************************************************************************************************
 * Inter-runnable variable access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg5Meas_MotAg5MeasPer3_MotAg5RtVari(P2CONST(MotAgRtPrmRec1, AUTOMATIC, RTE_APPL_DATA) data)
{

  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Irv_CDD_MotAg5Meas_MotAg5RtVari = *data;
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

}

FUNC(void, RTE_CODE) Rte_IrvWrite_CDD_MotAg6Meas_MotAg6MeasPer3_MotAg6RtVari(P2CONST(MotAgRtPrmRec1, AUTOMATIC, RTE_APPL_DATA) data)
{

  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_Irv_CDD_MotAg6Meas_MotAg6RtVari = *data;
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

}

FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaX(P2VAR(Ary1D_u16p0_2, AUTOMATIC, RTE_APPL_VAR) data)
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(data, Rte_Irv_MotTqTranlDampg_CtrldDampgScaX, sizeof(Ary1D_u16p0_2));
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

}

FUNC(void, RTE_CODE) Rte_IrvRead_MotTqTranlDampg_MotTqTranlDampgPer1_CtrldDampgScaY(P2VAR(Ary1D_u2p14_2, AUTOMATIC, RTE_APPL_VAR) data)
{

  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  Rte_MemCpy(data, Rte_Irv_MotTqTranlDampg_CtrldDampgScaY, sizeof(Ary1D_u2p14_2));
  Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */

}


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt00_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt01_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt02_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt03_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt04_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn01Rt01_Dummy_TEstimnMagAmbMplr_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Rt05_DEFAULT_RTE_CALPRM_GROUP])->TEstimnMagAmbMplr_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst1_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt00GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst2_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt01GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst3_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt02GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst4_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt03GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst5_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt04GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpOutpLim_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpOutpLim_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRevGain_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRevGain_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqHpFilFrqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqHpFilFrqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqWhlImbRejctnTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnBlndY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u3p13_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiHiFrqWhlImbRejctnGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMaxY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiMotTqWhlImbRejctnMinY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_AssiWhlImbRejctnBlndScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->AssiWhlImbRejctnBlndScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHwTqY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHwTqY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff1ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff1ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff2ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff2ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff3ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff3ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgHydCoeff4ScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgHydCoeff4ScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_12_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_DampgMotVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->DampgMotVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffLossY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffLossY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpEffOffsY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpEffOffsY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOffY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpFricWhlImbRejctnOnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHwTqScaY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHwTqScaY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpHysSatnY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpHysSatnY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpScaY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpScaY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpNegHysCmpY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpNegHysCmpY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_HysCmpRiseY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->HysCmpRiseY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u0p16_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelAssiBasdDampgStatY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrq_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrq_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u7p9_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgSpdBlndY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u4p12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u1p15_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupA_Dummy_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupA_DEFAULT_RTE_CALPRM_GROUP])->InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Calprm API
 *********************************************************************************************************************/

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDeltaTqThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDeltaTqThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnSoftEndStopAuthyThd_Val(void)
{
   return ((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnSoftEndStopAuthyThd_Val;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnDampgVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnDampgVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainVehSpdTbl_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainVehSpdTbl_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u1p15_5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnLoAuthyEntrGainY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnLoAuthyEntrGainY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u12p4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnMotSpdIncptY_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnMotSpdIncptY_Ary1D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u0p16_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_EotProtnNormDampgY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->EotProtnNormDampgY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnHwAgOffsCalcdY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnHwAgOffsCalcdY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaTqY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaTqY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelX_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelX_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnScaVelY_Ary2D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnScaVelY_Ary2D;
}
/* PRQA L:L1 */

/* PRQA S 0850 L1 */ /* MD_MSR_19.8 */
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_PrmInst6_AAACalRegn02Rt01GroupB_Dummy_RtnVehSpdSeln_Ary1D(void)
{
   return &((P2CONST(Rte_Calprm_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Rt05GroupB_DEFAULT_RTE_CALPRM_GROUP])->RtnVehSpdSeln_Ary1D;
}
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_BswMEcuResetMod, RTE_CODE) Rte_Mode_BswM_Notification_SwcModeNotification_BswM_MDGP_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  return Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod(uint8 nextMode) /* PRQA S 0850, 1505 */ /* MD_MSR_19.8, MD_MSR_8.10 */
{
  Std_ReturnType ret = RTE_E_OK;

  uint8 currentMode;
  Rte_DisableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  currentMode = Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;
  if (nextMode >= 3U)
  {
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 3U)
  {
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod = nextMode;
    Rte_EnableOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 0850, 1505, 3206 */ /* MD_MSR_19.8, MD_MSR_8.10, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK;

  nextMode = nextMode;

  return ret;
}


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_BswMEcuResetMod, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_BswM_MDGP_BswMEcuResetMod_Dcm_Read_BswM_MDGP_BswMEcuResetMod(P2VAR(BswM_BswMEcuResetMod, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(BswM_BswMEcuResetMod, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  BswM_BswMEcuResetMod curMode;
  SuspendOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  *(previousMode) = Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;
  *(nextMode) = Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;
  curMode = Rte_ModeMachine_CustDiag_BswM_MSI_BswMEcuResetMod_BswM_MDGP_BswMEcuResetMod;
  ResumeOSInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return curMode;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Task_100ms_Appl10
 * Priority: 53
 * Schedule: FULL
 * Alarm:    Cycle Time 0.1 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_100ms_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  ChkPt_100msAppl10Strt();

  /* call runnable */
  DiagcMgrPer2();

  /* call runnable */
  CustDiagPer3();

  /* call runnable */
  FordMsg40ABusHiSpdPer1();

  /* call runnable */
  DutyCycThermProtnPer1();

  /* call runnable */
  HwTq1MeasPer2();

  /* call runnable */
  HwTq8MeasPer2();

  /* call runnable */
  HwTq9MeasPer2();

  /* call runnable */
  HwTq10MeasPer2();

  /* call runnable */
  MotCtrlPrmEstimnPer2();

  /* call runnable */
  MotCurrPeakEstimnPer2();

  /* call runnable */
  EcuTMeasPer1();

  /* call runnable */
  TEstimnPer1();

  /* call runnable */
  IoHwAb_Per1();

  /* call runnable */
  VrfyCritRegPer2();

  /* call runnable */
  HwAg1MeasPer5();

  /* call runnable */
  NxtrMathPer1();

  /* call runnable */
  FlsMemPer1();

  /* call runnable */
  DualEcuIdnPer1();

  /* call runnable */
  FordDualEcuFltDiagcComPer1();

  /* call runnable */
  ImcArbnPer6();

  /* call runnable */
  Uart0CfgAndUsePer4();

  /* call runnable */
  Uart1CfgAndUsePer4();

  /* call runnable */
  ImcArbnPer3();

  /* call runnable */
  CDD_XcpIfPer1();

  /* call runnable */
  ChkPt_100msAppl10End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_10msBsw_Appl10
 * Priority: 60
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_10msBsw_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call schedulable entity */
  ChkPt_10msBswAppl10Strt();

  /* call runnable */
  NvM_MainFunction();

  /* call runnable */
  NvMProxy_MainFunction();

  /* call schedulable entity */
  CanNm_MainFunction();

  /* call runnable */
  BswM_MainFunction();

  /* call schedulable entity */
  Can_MainFunction_Wakeup();

  /* call schedulable entity */
  Can_MainFunction_Mode();

  /* call schedulable entity */
  Can_MainFunction_Read();

  /* call schedulable entity */
  Fls_MainFunction();

  /* call runnable */
  ComM_MainFunction_0();

  /* call schedulable entity */
  CanSM_MainFunction();

  /* call schedulable entity */
  Com_MainFunctionRx();

  /* call runnable */
  Dem_MainFunction();

  /* call runnable */
  EcuM_MainFunction();

  /* call schedulable entity */
  Com_MainFunctionTx();

  /* call schedulable entity */
  Rte_ComSendSignalProxyPeriodic();

  /* call schedulable entity */
  Fee_30_SmallSector_MainFunction();

  /* call runnable */
  Dcm_MainFunction();

  /* call schedulable entity */
  CanXcp_MainFunction();

  /* call schedulable entity */
  Xcp_MainFunction();

  /* call schedulable entity */
  ChkPt_10msBswAppl10End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_10ms_Appl10
 * Priority: 63
 * Schedule: FULL
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_10ms_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  ChkPt_10msAppl10Strt();

  /* call runnable */
  DiagcMgrProxyAppl10Per1();

  /* call runnable */
  FordCanDtcInhbPer1();

  /* call runnable */
  CustDiagPer2();

  /* call runnable */
  FordMsg217BusHiSpdPer1();

  /* call runnable */
  FordMsg3B3BusHiSpdPer1();

  /* call runnable */
  FordMsg167BusHiSpdPer1();

  /* call runnable */
  FordMsg415BusHiSpdPer1();

  /* call runnable */
  FordMsg41ABusHiSpdPer1();

  /* call runnable */
  FordMsg41EBusHiSpdPer1();

  /* call runnable */
  FordMsg430BusHiSpdPer1();

  /* call runnable */
  FordMsg202BusHiSpdPer1();

  /* call runnable */
  FordMsg414BusHiSpdPer1();

  /* call runnable */
  FordMsg07DBusHiSpdPer1();

  /* call runnable */
  FordMsg083BusHiSpdPer1();

  /* call runnable */
  FordMsg091BusHiSpdPer1();

  /* call runnable */
  FordMsg213BusHiSpdPer1();

  /* call runnable */
  FordMsg3CABusHiSpdPer1();

  /* call runnable */
  FordMsg3D3BusHiSpdPer1();

  /* call runnable */
  FordMsg443BusHiSpdPer1();

  /* call runnable */
  FordMsg230BusHiSpdPer1();

  /* call runnable */
  FordMsg216BusHiSpdPer1();

  /* call runnable */
  FordMsg215BusHiSpdPer1();

  /* call runnable */
  FordMsg3D7BusHiSpdPer1();

  /* call runnable */
  FordMsg459BusHiSpdPer1();

  /* call runnable */
  FordMsg47ABusHiSpdPer1();

  /* call runnable */
  FordMsg077BusHiSpdPer1();

  /* call runnable */
  FordMsg2FDBusHiSpdPer1();

  /* call runnable */
  FordMsg4B0BusHiSpdPer1();

  /* call runnable */
  TunSelnMngtPer1();

  /* call runnable */
  PwrLimrPer2();

  /* call runnable */
  EotLrngPer1();

  /* call runnable */
  VrfyCritRegPer1();

  /* call runnable */
  SysFricLrngPer1();

  /* call runnable */
  CmnMfgSrvPer1();

  /* call runnable */
  ImcSigArbnPer2();

  /* call runnable */
  DualCtrlrOutpMgrPer2();

  /* call runnable */
  ElecPwrCnsPer1();

  /* call runnable */
  MotAgSwCalPer2();

  /* call runnable */
  ImcArbnPer5();

  /* call runnable */
  Uart0CfgAndUsePer3();

  /* call runnable */
  Uart1CfgAndUsePer3();

  /* call runnable */
  ImcArbnPer2();

  /* call runnable */
  FordMsg417BusHiSpdPer1();

  /* call runnable */
  FordMsg5B5BusHiSpdPer1();

  /* call runnable */
  FordMsg07EBusHiSpdPer1();

  /* call runnable */
  FordMsg082BusHiSpdPer1();

  /* call runnable */
  FordMsg3CCBusHiSpdPer1();

  /* call runnable */
  FordHwTqCdngPer2();

  /* call runnable */
  FordBlaBoxIfCmp1Per2();

  /* call runnable */
  ChkPt_10msAppl10End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_2msTmplMonr_Appl10
 * Priority: 84
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2msTmplMonr_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  TmplMonrPer1();

  /* call runnable */
  TmplMonrPer3();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_2ms_Appl10
 * Priority: 83
 * Schedule: FULL
 * Alarm:    Cycle Time 0.002 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_2ms_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  ChkPt_2msAppl10Strt();

  /* call runnable */
  Uart0CfgAndUsePer1();

  /* call runnable */
  Uart1CfgAndUsePer1();

  /* call runnable */
  ImcArbnPer4();

  /* call runnable */
  ImcArbnPer1();

  /* call runnable */
  Uart0CfgAndUsePer2();

  /* call runnable */
  Uart1CfgAndUsePer2();

  /* call runnable */
  CustDiagPer1();

  /* call runnable */
  DmaCfgAndUsePer1();

  /* call runnable */
  HwTq1MeasPer1();

  /* call runnable */
  HwTq8MeasPer1();

  /* call runnable */
  HwTq9MeasPer1();

  /* call runnable */
  HwTq10MeasPer1();

  /* call runnable */
  HwTqCorrlnPer1();

  /* call runnable */
  HwTqArbnPer1();

  /* call runnable */
  HwAg1MeasPer3();

  /* call runnable */
  HwAg1MeasPer2();

  /* call runnable */
  HwAg1MeasPer4();

  /* call runnable */
  McuDiagcPer2();

  /* call runnable */
  GtmCfgAndUsePer2();

  /* call runnable */
  GateDrv0CtrlPer1();

  /* call runnable */
  PwrDiscnctPer1();

  /* call runnable */
  MotCtrlMgrPer1();

  /* call runnable */
  Adcf1CfgAndUsePer1();

  /* call runnable */
  MotVelPer2();

  /* call runnable */
  SwpPer1();

  /* call runnable */
  AssiPer1();

  /* call runnable */
  AssiHiFrqPer1();

  /* call runnable */
  HysCmpPer1();

  /* call runnable */
  AssiPahSumPer1();

  /* call runnable */
  CmplncErrPer1();

  /* call runnable */
  HwAgSnsrlsPer1();

  /* call runnable */
  HwAgSysArbnPer1();

  /* call runnable */
  FordHwAgArbnPer1();

  /* call runnable */
  RtnPer1();

  /* call runnable */
  StabyCmpPer1();

  /* call runnable */
  DampgPer1();

  /* call runnable */
  InertiaCmpVelPer1();

  /* call runnable */
  DampgPahSumPer1();

  /* call runnable */
  RtnPahFwlPer1();

  /* call runnable */
  DiagcMgrPer1();

  /* call runnable */
  FordVltgIfPer1();

  /* call runnable */
  StOutpCtrlPer1();

  /* call runnable */
  EotProtnPer1();

  /* call runnable */
  EotProtnFwlPer1();

  /* call runnable */
  AssiSumLimPer1();

  /* call runnable */
  SwpPer2();

  /* call runnable */
  MotTqTranlDampgPer1();

  /* call runnable */
  FordT3T6McuCfgPer2();

  /* call runnable */
  Adcf1CfgAndUsePer2();

  /* call runnable */
  FordT3T6McuCfgPer3();

  /* call runnable */
  BattVltgCorrlnPer1();

  /* call runnable */
  BattVltgPer1();

  /* call runnable */
  ImcSigArbnPer1();

  /* call runnable */
  DualCtrlrOutpMgrPer1();

  /* call runnable */
  PwrLimrPer1();

  /* call runnable */
  MotTqCmdScaPer1();

  /* call runnable */
  MotQuadDetnPer1();

  /* call runnable */
  MotRefMdlPer1();

  /* call runnable */
  MotCurrRegCfgPer1();

  /* call runnable */
  MotRplCoggCfgPer1();

  /* call runnable */
  MotCurrPeakEstimnPer1();

  /* call runnable */
  MotCtrlPrmEstimnPer1();

  /* call runnable */
  MotAg5MeasPer1();

  /* call runnable */
  MotAg6MeasPer1();

  /* call runnable */
  MotAg2MeasPer1();

  /* call runnable */
  MotAgCorrlnPer1();

  /* call runnable */
  MotAgCmpPer2();

  /* call runnable */
  CurrMeasPer3();

  /* call runnable */
  CurrMeasCorrlnPer1();

  /* call runnable */
  HiLoadStallLimrPer1();

  /* call runnable */
  VehSpdLimrPer1();

  /* call runnable */
  LimrCdngPer1();

  /* call runnable */
  CurrMeasPer1();

  /* call runnable */
  FordVehSpdArbnPer1();

  /* call runnable */
  VehSigCdngPer1();

  /* call runnable */
  TqLoaPer1();

  /* call runnable */
  PwrUpSeqPer1();

  /* call runnable */
  TmplMonrPer2();

  /* call runnable */
  SysStModPer1();

  /* call runnable */
  MotCtrlMgrPer2();

  /* call runnable */
  NxtrTiPer1();

  /* call runnable */
  ExcpnHndlgPer1();

  /* call runnable */
  RamMemPer1();

  /* call runnable */
  HwAg1MeasPer1();

  /* call runnable */
  GateDrv0CtrlPer2();

  /* call runnable */
  ShtdwnMechPer1();

  /* call runnable */
  MotVelCtrlPer1();

  /* call runnable */
  PosnTrakgServoPer1();

  /* call runnable */
  DrvrTqEstimnPer1();

  /* call runnable */
  SysPrfmncStsPer1();

  /* call runnable */
  HwTq1MeasPer3Stub();

  /* call runnable */
  HwTq8MeasPer3Stub();

  /* call runnable */
  FordBlaBoxIfCmnPer1();

  /* call runnable */
  FltInjPer1();

  /* call runnable */
  Xcp2msDaq();

  /* call runnable */
  ChkPt_2msAppl10End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_4msBsw_Appl10
 * Priority: 90
 * Schedule: FULL
 * Alarm:    Cycle Time 0.004 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_4msBsw_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  WdgM_MainFunction();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_4ms_Appl10
 * Priority: 73
 * Schedule: FULL
 * Alarm:    Cycle Time 0.004 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_4ms_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  ChkPt_4msAppl10Strt();

  /* call runnable */
  LoaMgrPer1();

  /* call runnable */
  FordSysStPer1();

  /* call runnable */
  MotAg5MeasPer3();

  /* call runnable */
  MotAg6MeasPer3();

  /* call runnable */
  HwAgCorrlnPer1();

  /* call runnable */
  HwAgArbnPer1();

  /* call runnable */
  PwrSplyPer1();

  /* call runnable */
  FordCmdArbnPer1();

  /* call runnable */
  FordHwTqCmdOvrlLimrPer1();

  /* call runnable */
  FordMotTqCmdOvrlLimrPer1();

  /* call runnable */
  FordHwTqCdngPer1();

  /* call runnable */
  FordBlaBoxIfCmp1Per1();

  /* call runnable */
  FordBlaBoxIfCmp2Per1();

  /* call runnable */
  ChkPt_4msAppl10End();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_5msBsw_Appl10
 * Priority: 62
 * Schedule: FULL
 * Alarm:    Cycle Time 0.005 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(Task_5msBsw_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call schedulable entity */
  CanTp_MainFunction();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     Task_Init_Appl10
 * Priority: 98
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(Task_Init_Appl10) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  /* call runnable */
  ChkPtAppl10_Init1();

  /* call runnable */
  GuardCfgAndDiagcInit2();

  /* call runnable */
  SyncCrcInit1();

  /* call runnable */
  FlsMemInit1();

  /* call runnable */
  ClkCfgAndMonInit1();

  /* call runnable */
  DiagcMgrStubInit1();

  /* call runnable */
  DiagcMgrProxyAppl10Init1();

  /* call runnable */
  DiagcMgrInit1();

  /* call runnable */
  ExcpnHndlgInit2();

  /* call runnable */
  RamMemInit1();

  /* call runnable */
  EcmOutpAndDiagcInit2();

  /* call runnable */
  McuCoreCfgAndDiagcInit2();

  /* call runnable */
  NvMProxyInit1();

  /* call runnable */
  NxtrTiInit1();

  /* call runnable */
  DualEcuIdnInit1();

  /* call runnable */
  TunSelnMngtInit1();

  /* call runnable */
  TunSelnAuthyInit1();

  /* call runnable */
  CustDiagInit1();

  /* call runnable */
  TmplMonrInit1();

  /* call runnable */
  SysStModInit1();

  /* call runnable */
  PolarityCfgInit1();

  /* call runnable */
  CurrMeasInit1();

  /* call runnable */
  CurrMeasCorrlnInit1();

  /* call runnable */
  CurrMeasArbnInit1();

  /* call runnable */
  HwTqCorrlnInit1();

  /* call runnable */
  SinVltgGennInit1();

  /* call runnable */
  EotProtnInit1();

  /* call runnable */
  FordT3T6McuCfgInit2();

  /* call runnable */
  FordT3T6McuCfgInit3();

  /* call runnable */
  FordT3T6McuCfgInit4();

  /* call runnable */
  FordT3T6McuCfgInit5();

  /* call runnable */
  Adcf0CfgAndUseInit1();

  /* call runnable */
  Adcf1CfgAndUse_Init();

  /* call runnable */
  DmaCfgAndUseInit1();

  /* call runnable */
  GtmCfgAndUseInit1();

  /* call runnable */
  BattVltgCorrlnInit1();

  /* call runnable */
  BattVltgInit1();

  /* call runnable */
  EcuTMeasInit1();

  /* call runnable */
  TEstimnInit1();

  /* call runnable */
  MotAg5MeasInit1();

  /* call runnable */
  MotAg6MeasInit1();

  /* call runnable */
  HwTq1MeasInit1();

  /* call runnable */
  HwTq8MeasInit1();

  /* call runnable */
  HwTqArbnInit1();

  /* call runnable */
  HwTq9MeasInit1();

  /* call runnable */
  HwTq10MeasInit1();

  /* call runnable */
  HwAg1MeasInit1();

  /* call runnable */
  HwAgCorrlnInit1();

  /* call runnable */
  SwpInit1();

  /* call runnable */
  DampgInit1();

  /* call runnable */
  AssiSumLimInit1();

  /* call runnable */
  StOutpCtrlInit1();

  /* call runnable */
  PwrLimrInit1();

  /* call runnable */
  AssiHiFrqInit1();

  /* call runnable */
  StabyCmpInit1();

  /* call runnable */
  HwAgSysArbnInit1();

  /* call runnable */
  TqLoaInit1();

  /* call runnable */
  LoaMgrInit1();

  /* call runnable */
  MotTqTranlDampgInit1();

  /* call runnable */
  MotQuadDetnInit1();

  /* call runnable */
  MotCtrlPrmEstimnInit1();

  /* call runnable */
  MotRefMdlInit1();

  /* call runnable */
  MotCurrRegCfgInit1();

  /* call runnable */
  MotCurrRegVltgLimrInit1();

  /* call runnable */
  MotCurrPeakEstimnInit1();

  /* call runnable */
  HiLoadStallLimrInit1();

  /* call runnable */
  HysCmpInit1();

  /* call runnable */
  VehSigCdngInit1();

  /* call runnable */
  EotLrngInit1();

  /* call runnable */
  MotAg2MeasInit1();

  /* call runnable */
  MotAgArbnInit1();

  /* call runnable */
  DutyCycThermProtnInit1();

  /* call runnable */
  MotAgCorrlnInit1();

  /* call runnable */
  PwrUpSeqInit1();

  /* call runnable */
  VrfyCritRegInit1();

  /* call runnable */
  CmplncErrInit1();

  /* call runnable */
  EotProtnFwlInit1();

  /* call runnable */
  RtnPahFwlInit1();

  /* call runnable */
  MotRplCoggCfgInit1();

  /* call runnable */
  MotRplCoggCmdInit1();

  /* call runnable */
  MotVelCtrlInit1();

  /* call runnable */
  MotTqCmdScaInit1();

  /* call runnable */
  PwrSplyInit1();

  /* call runnable */
  SysFricLrngInit1();

  /* call runnable */
  McuDiagcInit1();

  /* call runnable */
  MotVelInit1();

  /* call runnable */
  InertiaCmpVelInit1();

  /* call runnable */
  HwAgSnsrlsInit1();

  /* call runnable */
  GateDrv0CtrlInit1();

  /* call runnable */
  MotAgCmpInit1();

  /* call runnable */
  RtnInit1();

  /* call runnable */
  PwrDiscnctInit1();

  /* call runnable */
  ShtdwnMechInit1();

  /* call runnable */
  NxtrMathInit1();

  /* call runnable */
  MotAgSwCalInit1();

  /* call runnable */
  CmnMfgSrvInit1();

  /* call runnable */
  NxtrCalIdsInit1();

  /* call runnable */
  NxtrSwIdsInit1();

  /* call runnable */
  CDD_XcpIfInit1();

  /* call runnable */
  DiagSrvInit1();

  /* call runnable */
  Uart0CfgAndUseInit1();

  /* call runnable */
  Uart1CfgAndUseInit1();

  /* call runnable */
  ImcArbnInit1();

  /* call runnable */
  ImcSigArbnInit1();

  /* call runnable */
  DrvrTqEstimnInit1();

  /* call runnable */
  PosnTrakgServoInit1();

  /* call runnable */
  SysPrfmncStsInit1();

  /* call runnable */
  DualCtrlrOutpMgrInit1();

  /* call runnable */
  FordMsg07EBusHiSpdInit1();

  /* call runnable */
  FordMsg082BusHiSpdInit1();

  /* call runnable */
  FordMsg167BusHiSpdInit1();

  /* call runnable */
  FordMsg217BusHiSpdInit1();

  /* call runnable */
  FordMsg3B3BusHiSpdInit1();

  /* call runnable */
  FordMsg40ABusHiSpdInit1();

  /* call runnable */
  FordMsg415BusHiSpdInit1();

  /* call runnable */
  FordMsg417BusHiSpdInit1();

  /* call runnable */
  FordMsg41ABusHiSpdInit1();

  /* call runnable */
  FordMsg41EBusHiSpdInit1();

  /* call runnable */
  FordMsg430BusHiSpdInit1();

  /* call runnable */
  FordMsg5B5BusHiSpdInit1();

  /* call runnable */
  FordMsg202BusHiSpdInit1();

  /* call runnable */
  FordMsg414BusHiSpdInit1();

  /* call runnable */
  FordMsg07DBusHiSpdInit1();

  /* call runnable */
  FordMsg083BusHiSpdInit1();

  /* call runnable */
  FordMsg091BusHiSpdInit1();

  /* call runnable */
  FordMsg213BusHiSpdInit1();

  /* call runnable */
  FordMsg3CABusHiSpdInit1();

  /* call runnable */
  FordMsg3CCBusHiSpdInit1();

  /* call runnable */
  FordMsg3D3BusHiSpdInit1();

  /* call runnable */
  FordMsg443BusHiSpdInit1();

  /* call runnable */
  FordMsg230BusHiSpdInit1();

  /* call runnable */
  FordMsg216BusHiSpdInit1();

  /* call runnable */
  FordMsg215BusHiSpdInit1();

  /* call runnable */
  FordMsg3D7BusHiSpdInit1();

  /* call runnable */
  FordMsg459BusHiSpdInit1();

  /* call runnable */
  FordMsg47ABusHiSpdInit1();

  /* call runnable */
  FordMsg077BusHiSpdInit1();

  /* call runnable */
  FordMsg2FDBusHiSpdInit1();

  /* call runnable */
  FordMsg4B0BusHiSpdInit1();

  /* call runnable */
  FordCmdArbnInit1();

  /* call runnable */
  FordHwTqCmdOvrlLimrInit1();

  /* call runnable */
  FordMotTqCmdOvrlLimrInit1();

  /* call runnable */
  FordCanDtcInhbInit1();

  /* call runnable */
  FordHwAgArbnInit1();

  /* call runnable */
  FordHwTqCdngInit1();

  /* call runnable */
  FordSysStInit1();

  /* call runnable */
  FordVehSpdArbnInit1();

  /* call runnable */
  FordVltgIfInit1();

  /* call runnable */
  FordDualEcuFltDiagcComInit1();

  /* call runnable */
  FordBlaBoxIfCmnInit1();

  /* call runnable */
  FordBlaBoxIfCmp1Init1();

  /* call runnable */
  FordBlaBoxIfCmp2Init1();

  /* call runnable */
  CoreVltgMonrInit2();

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt04_Dummy);

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt00_Dummy);

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt03_Dummy);

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt05_Dummy);

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt02_Dummy);

  /* call runnable */
  CalRegn01Rt01DummyInit1(&Rte_Instance_AAACalRegn01Rt01_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt00GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt01GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt02GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt03GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt04GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupADummyInit1(&Rte_Instance_AAACalRegn02Rt05GroupA_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt00GroupB_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt05GroupB_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt03GroupB_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt04GroupB_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt02GroupB_Dummy);

  /* call runnable */
  CalRegn02Rt01GroupBDummyInit1(&Rte_Instance_AAACalRegn02Rt01GroupB_Dummy);

  /* call runnable */
  StackMeasInit1();

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_3197:  MISRA rule: -
     Reason:     The variable is not written by the code in all possible code variants. Due to this, the variable is initialized.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: -
     Reason:     The parameter's are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

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

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 7.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
