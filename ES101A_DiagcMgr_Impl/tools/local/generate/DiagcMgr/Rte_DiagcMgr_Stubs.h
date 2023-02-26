/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

/* Inputs */
extern VAR(float32, AUTOMATIC) DiagcMgr_Ip_BrdgVltg;
extern VAR(float32, AUTOMATIC) DiagcMgr_Ip_EcuTFild;
extern VAR(float32, AUTOMATIC) DiagcMgr_Ip_HwTq;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Ip_IgnCntr;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Ip_MfgDiagcInhb;
extern VAR(MfgEnaSt1, AUTOMATIC) DiagcMgr_Ip_MfgEnaSt;
extern VAR(float32, AUTOMATIC) DiagcMgr_Ip_MotTqCmdMrfScad;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Ip_SwApplCrc;
extern VAR(SysSt1, AUTOMATIC) DiagcMgr_Ip_SysSt;

/* Outputs */
extern VAR(uint8, AUTOMATIC) DiagcMgr_Op_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Op_DiagcStsCtrldShtDwnFltPrsnt;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Op_DiagcStsNonRcvrlReqDiFltPrsnt;
extern VAR(float32, AUTOMATIC) DiagcMgr_Op_SysDiMotTqCmdSca;
extern VAR(float32, AUTOMATIC) DiagcMgr_Op_SysDiRampRate;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Op_SysStFltOutpReqDi;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) DiagcMgr_Cal_DiagcMgrFltResp[512];

/* PIMs */
extern VAR(uint32, AUTOMATIC) DiagcMgr_Pim_DiagcMgrApplCrc;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Pim_DiagcMgrLtchCntrAry[20];
extern VAR(NtcFltInfoRec2, AUTOMATIC) DiagcMgr_Pim_DiagcMgrNtcFltAry[20];
extern VAR(SnpshtDataRec2, AUTOMATIC) DiagcMgr_Pim_SnpshtDataAry[20];
extern VAR(uint8, AUTOMATIC) DiagcMgr_Pim_ClrDiagcFlg;
extern VAR(uint16, AUTOMATIC) DiagcMgr_Pim_DtcEnaSts;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Pim_DtcIdxPrevSts[65535];
extern VAR(uint8, AUTOMATIC) DiagcMgr_Pim_PrevClrDtcFlg;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) DiagcMgr_Srv_DiagcMgrApplCrc_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgr_Srv_DiagcMgrApplCrc_SetRamBlockStatus_Return;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Srv_DiagcMgrLtchCntrAry_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgr_Srv_DiagcMgrLtchCntrAry_SetRamBlockStatus_Return;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl0_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl1_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl2_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl3_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl4_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl5_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl6_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl7_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl8_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl9_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Srv_GetDiagcDataAppl10_DiagcData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Srv_GetMcuDiagcSpplData_McuDiagcData1;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl0_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl0_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl1_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl1_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl2_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl2_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl3_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl3_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl4_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl4_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl5_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl5_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl6_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl6_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl7_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl7_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl8_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl8_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl9_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl9_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl10_DebCntrIdx;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Srv_GetNtcDebCntrAppl10_DebCntr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl0_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl0_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl1_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl1_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl2_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl2_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl3_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl3_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl4_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl4_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl5_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl5_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl6_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl6_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl7_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl7_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl8_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl8_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl9_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl9_NtcInfo;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl10_NtcInfoIdx;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Srv_GetNtcInfoAppl10_NtcInfo;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Srv_SnpshtDataAry_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgr_Srv_SnpshtDataAry_SetRamBlockStatus_Return;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_f32_SnpshtDataCnvd;
extern VAR(float32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_f32_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_logl_SnpshtDataCnvd;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_logl_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s08_SnpshtDataCnvd;
extern VAR(sint8, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s08_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s16_SnpshtDataCnvd;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s16_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s32_SnpshtDataCnvd;
extern VAR(sint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_s32_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_u08_SnpshtDataCnvd;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_u08_SnpshtData;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_u16_SnpshtDataCnvd;
extern VAR(uint16, AUTOMATIC) DiagcMgr_Cli_CnvSnpshtData_u16_SnpshtData;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_DiagcMgrIninCore_ApplIdx;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_DiagcMgrIninCore_NtcInfoArySize;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Cli_DiagcMgrIninCore_NtcInfoAry[65535];
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Cli_DiagcMgrIninCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Cli_DiagcMgrIninCore_ProxySetNtcData;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgr_Cli_GetNtcActvCore_NtcNr;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Cli_GetNtcActvCore_NtcActv;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgr_Cli_GetNtcQlfrStsCore_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) DiagcMgr_Cli_GetNtcQlfrStsCore_NtcQlfr;
extern VAR(NtcNr1, AUTOMATIC) DiagcMgr_Cli_GetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_GetNtcStsCore_NtcInfoSts;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_ReadLtchCntrData_ReadLtchCntrAry[20];
extern VAR(ReadFltInfoRec1, AUTOMATIC) DiagcMgr_Cli_ReadNtcFltAry_DiagcMgrReadFltInfo[20];
extern VAR(NtcNr1, AUTOMATIC) DiagcMgr_Cli_ReadNtcInfoAndDebCntr_NtcNr;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Cli_ReadNtcInfoAndDebCntr_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Cli_ReadNtcInfoAndDebCntr_DebCntr;
extern VAR(SnpshtDataRec2, AUTOMATIC) DiagcMgr_Cli_ReadSnpshtData_ReadSnpshtAry[8];
extern VAR(NtcNr1, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_NtcNr;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_NtcSts;
extern VAR(uint16, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_DebStep;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_DiagcData;
extern VAR(DiagcDataRec2, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_ProxySetNtcData;
extern VAR(NtcInfoRec4, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_NtcInfo;
extern VAR(sint16, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_NtcInfoDebCntr;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData2;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtDataPrsnt;
extern VAR(Std_ReturnType, AUTOMATIC) DiagcMgr_Cli_SetNtcStsCore_Return;
extern VAR(boolean, AUTOMATIC) DiagcMgr_Cli_UpdDtcEnaCdn_DtcEnaCdnSts;
extern VAR(uint8, AUTOMATIC) DiagcMgr_Cli_UpdDtcEnaCdn_DtcEnaCdnId;
/*** Input Stubs ***/

#ifdef Rte_Read_BrdgVltg_Val
# undef Rte_Read_BrdgVltg_Val
#endif
#define Rte_Read_BrdgVltg_Val(data) (*(data) = DiagcMgr_Ip_BrdgVltg)

#ifdef Rte_Read_EcuTFild_Val
# undef Rte_Read_EcuTFild_Val
#endif
#define Rte_Read_EcuTFild_Val(data) (*(data) = DiagcMgr_Ip_EcuTFild)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = DiagcMgr_Ip_HwTq)

#ifdef Rte_Read_IgnCntr_Val
# undef Rte_Read_IgnCntr_Val
#endif
#define Rte_Read_IgnCntr_Val(data) (*(data) = DiagcMgr_Ip_IgnCntr)

#ifdef Rte_Read_MfgDiagcInhb_Logl
# undef Rte_Read_MfgDiagcInhb_Logl
#endif
#define Rte_Read_MfgDiagcInhb_Logl(data) (*(data) = DiagcMgr_Ip_MfgDiagcInhb)

#ifdef Rte_Read_MfgEnaSt_Val
# undef Rte_Read_MfgEnaSt_Val
#endif
#define Rte_Read_MfgEnaSt_Val(data) (*(data) = DiagcMgr_Ip_MfgEnaSt)

#ifdef Rte_Read_MotTqCmdMrfScad_Val
# undef Rte_Read_MotTqCmdMrfScad_Val
#endif
#define Rte_Read_MotTqCmdMrfScad_Val(data) (*(data) = DiagcMgr_Ip_MotTqCmdMrfScad)

#ifdef Rte_Read_SwApplCrc_Val
# undef Rte_Read_SwApplCrc_Val
#endif
#define Rte_Read_SwApplCrc_Val(data) (*(data) = DiagcMgr_Ip_SwApplCrc)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = DiagcMgr_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_ClrDiagcFlgProxy_Val
# undef Rte_Write_ClrDiagcFlgProxy_Val
#endif
#define Rte_Write_ClrDiagcFlgProxy_Val(data) (DiagcMgr_Op_ClrDiagcFlgProxy = (data))

#ifdef Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl
# undef Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl
#endif
#define Rte_Write_DiagcStsCtrldShtDwnFltPrsnt_Logl(data) (DiagcMgr_Op_DiagcStsCtrldShtDwnFltPrsnt = (data))

#ifdef Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl
# undef Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl
#endif
#define Rte_Write_DiagcStsNonRcvrlReqDiFltPrsnt_Logl(data) (DiagcMgr_Op_DiagcStsNonRcvrlReqDiFltPrsnt = (data))

#ifdef Rte_Write_SysDiMotTqCmdSca_Val
# undef Rte_Write_SysDiMotTqCmdSca_Val
#endif
#define Rte_Write_SysDiMotTqCmdSca_Val(data) (DiagcMgr_Op_SysDiMotTqCmdSca = (data))

#ifdef Rte_Write_SysDiRampRate_Val
# undef Rte_Write_SysDiRampRate_Val
#endif
#define Rte_Write_SysDiRampRate_Val(data) (DiagcMgr_Op_SysDiRampRate = (data))

#ifdef Rte_Write_SysStFltOutpReqDi_Logl
# undef Rte_Write_SysStFltOutpReqDi_Logl
#endif
#define Rte_Write_SysStFltOutpReqDi_Logl(data) (DiagcMgr_Op_SysStFltOutpReqDi = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DiagcMgrFltResp_Ary1D
# undef Rte_Prm_DiagcMgrFltResp_Ary1D
#endif
#define Rte_Prm_DiagcMgrFltResp_Ary1D() (&(DiagcMgr_Cal_DiagcMgrFltResp[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_DiagcMgrApplCrc
# undef Rte_Pim_DiagcMgrApplCrc
#endif
#define Rte_Pim_DiagcMgrApplCrc() (&DiagcMgr_Pim_DiagcMgrApplCrc)

#ifdef Rte_Pim_DiagcMgrLtchCntrAry
# undef Rte_Pim_DiagcMgrLtchCntrAry
#endif
#define Rte_Pim_DiagcMgrLtchCntrAry() (&(DiagcMgr_Pim_DiagcMgrLtchCntrAry[0]))

#ifdef Rte_Pim_DiagcMgrNtcFltAry
# undef Rte_Pim_DiagcMgrNtcFltAry
#endif
#define Rte_Pim_DiagcMgrNtcFltAry() (&(DiagcMgr_Pim_DiagcMgrNtcFltAry[0]))

#ifdef Rte_Pim_SnpshtDataAry
# undef Rte_Pim_SnpshtDataAry
#endif
#define Rte_Pim_SnpshtDataAry() (&(DiagcMgr_Pim_SnpshtDataAry[0]))

#ifdef Rte_Pim_ClrDiagcFlg
# undef Rte_Pim_ClrDiagcFlg
#endif
#define Rte_Pim_ClrDiagcFlg() (&DiagcMgr_Pim_ClrDiagcFlg)

#ifdef Rte_Pim_DtcEnaSts
# undef Rte_Pim_DtcEnaSts
#endif
#define Rte_Pim_DtcEnaSts() (&DiagcMgr_Pim_DtcEnaSts)

#ifdef Rte_Pim_DtcIdxPrevSts
# undef Rte_Pim_DtcIdxPrevSts
#endif
#define Rte_Pim_DtcIdxPrevSts() (&(DiagcMgr_Pim_DtcIdxPrevSts[0]))

#ifdef Rte_Pim_PrevClrDtcFlg
# undef Rte_Pim_PrevClrDtcFlg
#endif
#define Rte_Pim_PrevClrDtcFlg() (&DiagcMgr_Pim_PrevClrDtcFlg)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_DiagcMgr_Stub(void);


#endif
