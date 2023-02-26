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

/* Calibrations */
extern CONST(uint32, AUTOMATIC) ImcArbn_Cal_ImcArbnEcuIninTiOutThd;
extern CONST(uint8, AUTOMATIC) ImcArbn_Cal_ImcArbnFrmFltThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_FrmFltCntr100MilliSec[2][2];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_FrmFltCntr10MilliSec[2][2];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_FrmFltCntr2MilliSec[2][2];
extern VAR(uint32, AUTOMATIC) ImcArbn_Pim_ImcEcuComStrtTiRef;
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_PrevRollgCntrRxd[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_PrimSrcResyncCntr[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_PrimSrcRollgCntrResync[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_PrimSrcRxBuf[256][8];
extern VAR(boolean, AUTOMATIC) ImcArbn_Pim_ResyncOnPrimActv[256];
extern VAR(boolean, AUTOMATIC) ImcArbn_Pim_ResyncOnSecdryActv[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_RollgCntr[3];
extern VAR(uint32, AUTOMATIC) ImcArbn_Pim_RxdSigData[8192];
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Pim_RxdSigDataExtdSts[8192];
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Pim_RxdSigDataSrc[8192];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_SecdrySrcResyncCntr[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_SecdrySrcRollgCntrResync[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_SecdrySrcRxBuf[256][8];
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Pim_SigGroupDataSrc[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_SigGroupMissCntr[256];
extern VAR(boolean, AUTOMATIC) ImcArbn_Pim_SigGroupNeverRxd[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_SigGroupSkipCntr[256];
extern VAR(uint8, AUTOMATIC) ImcArbn_Pim_TxBuf[256][8];

/* IRVs */
extern VAR(boolean, AUTOMATIC) ImcArbn_Irv_IniTiOutChkCmpl;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) ImcArbn_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) ImcArbn_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) ImcArbn_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) ImcArbn_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Srv_SetNtcSts_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_f32_SigId;
extern VAR(float32, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_f32_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_f32_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_f32_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_f32_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_logl_SigId;
extern VAR(boolean, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_logl_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_logl_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_logl_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_logl_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s08_SigId;
extern VAR(sint8, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s08_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s08_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s08_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s08_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s16_SigId;
extern VAR(sint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s16_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s16_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s16_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s16_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s32_SigId;
extern VAR(sint32, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s32_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s32_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s32_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_s32_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u08_SigId;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u08_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u08_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u08_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u08_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u16_SigId;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u16_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u16_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u16_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u16_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u32_SigId;
extern VAR(uint32, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u32_Data;
extern VAR(ImcArbnRxExtdSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u32_Sts;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u32_DataSrc;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcDataExtdSts_u32_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_f32_SigId;
extern VAR(float32, AUTOMATIC) ImcArbn_Cli_GetSigImcData_f32_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_f32_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_f32_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_logl_SigId;
extern VAR(boolean, AUTOMATIC) ImcArbn_Cli_GetSigImcData_logl_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_logl_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_logl_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s08_SigId;
extern VAR(sint8, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s08_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s08_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s08_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s16_SigId;
extern VAR(sint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s16_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s16_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s16_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s32_SigId;
extern VAR(sint32, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s32_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s32_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_s32_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u08_SigId;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u08_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u08_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u08_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u16_SigId;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u16_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u16_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u16_Return;
extern VAR(uint16, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u32_SigId;
extern VAR(uint32, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u32_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u32_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetSigImcData_u32_Return;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetTxRateGroup_RateGroup;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetTxRateGroup_Buf[2048];
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetTxRateGroup_Return;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetTxSigGroup_SigGroupId;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_GetTxSigGroup_Buf[8];
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_GetTxSigGroup_Return;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_SetRxSigGroup_SigGroup;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) ImcArbn_Cli_SetRxSigGroup_DataSrc;
extern VAR(uint8, AUTOMATIC) ImcArbn_Cli_SetRxSigGroup_Buf[8];
extern VAR(Std_ReturnType, AUTOMATIC) ImcArbn_Cli_SetRxSigGroup_Return;


/*** Calibration Stubs ***/

#ifdef Rte_Prm_ImcArbnEcuIninTiOutThd_Val
# undef Rte_Prm_ImcArbnEcuIninTiOutThd_Val
#endif
#define Rte_Prm_ImcArbnEcuIninTiOutThd_Val() (ImcArbn_Cal_ImcArbnEcuIninTiOutThd)

#ifdef Rte_Prm_ImcArbnFrmFltThd_Val
# undef Rte_Prm_ImcArbnFrmFltThd_Val
#endif
#define Rte_Prm_ImcArbnFrmFltThd_Val() (ImcArbn_Cal_ImcArbnFrmFltThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FrmFltCntr100MilliSec
# undef Rte_Pim_FrmFltCntr100MilliSec
#endif
#define Rte_Pim_FrmFltCntr100MilliSec() (&(ImcArbn_Pim_FrmFltCntr100MilliSec[0][0]))

#ifdef Rte_Pim_FrmFltCntr10MilliSec
# undef Rte_Pim_FrmFltCntr10MilliSec
#endif
#define Rte_Pim_FrmFltCntr10MilliSec() (&(ImcArbn_Pim_FrmFltCntr10MilliSec[0][0]))

#ifdef Rte_Pim_FrmFltCntr2MilliSec
# undef Rte_Pim_FrmFltCntr2MilliSec
#endif
#define Rte_Pim_FrmFltCntr2MilliSec() (&(ImcArbn_Pim_FrmFltCntr2MilliSec[0][0]))

#ifdef Rte_Pim_ImcEcuComStrtTiRef
# undef Rte_Pim_ImcEcuComStrtTiRef
#endif
#define Rte_Pim_ImcEcuComStrtTiRef() (&ImcArbn_Pim_ImcEcuComStrtTiRef)

#ifdef Rte_Pim_PrevRollgCntrRxd
# undef Rte_Pim_PrevRollgCntrRxd
#endif
#define Rte_Pim_PrevRollgCntrRxd() (&(ImcArbn_Pim_PrevRollgCntrRxd[0]))

#ifdef Rte_Pim_PrimSrcResyncCntr
# undef Rte_Pim_PrimSrcResyncCntr
#endif
#define Rte_Pim_PrimSrcResyncCntr() (&(ImcArbn_Pim_PrimSrcResyncCntr[0]))

#ifdef Rte_Pim_PrimSrcRollgCntrResync
# undef Rte_Pim_PrimSrcRollgCntrResync
#endif
#define Rte_Pim_PrimSrcRollgCntrResync() (&(ImcArbn_Pim_PrimSrcRollgCntrResync[0]))

#ifdef Rte_Pim_PrimSrcRxBuf
# undef Rte_Pim_PrimSrcRxBuf
#endif
#define Rte_Pim_PrimSrcRxBuf() (&(ImcArbn_Pim_PrimSrcRxBuf[0][0]))

#ifdef Rte_Pim_ResyncOnPrimActv
# undef Rte_Pim_ResyncOnPrimActv
#endif
#define Rte_Pim_ResyncOnPrimActv() (&(ImcArbn_Pim_ResyncOnPrimActv[0]))

#ifdef Rte_Pim_ResyncOnSecdryActv
# undef Rte_Pim_ResyncOnSecdryActv
#endif
#define Rte_Pim_ResyncOnSecdryActv() (&(ImcArbn_Pim_ResyncOnSecdryActv[0]))

#ifdef Rte_Pim_RollgCntr
# undef Rte_Pim_RollgCntr
#endif
#define Rte_Pim_RollgCntr() (&(ImcArbn_Pim_RollgCntr[0]))

#ifdef Rte_Pim_RxdSigData
# undef Rte_Pim_RxdSigData
#endif
#define Rte_Pim_RxdSigData() (&(ImcArbn_Pim_RxdSigData[0]))

#ifdef Rte_Pim_RxdSigDataExtdSts
# undef Rte_Pim_RxdSigDataExtdSts
#endif
#define Rte_Pim_RxdSigDataExtdSts() (&(ImcArbn_Pim_RxdSigDataExtdSts[0]))

#ifdef Rte_Pim_RxdSigDataSrc
# undef Rte_Pim_RxdSigDataSrc
#endif
#define Rte_Pim_RxdSigDataSrc() (&(ImcArbn_Pim_RxdSigDataSrc[0]))

#ifdef Rte_Pim_SecdrySrcResyncCntr
# undef Rte_Pim_SecdrySrcResyncCntr
#endif
#define Rte_Pim_SecdrySrcResyncCntr() (&(ImcArbn_Pim_SecdrySrcResyncCntr[0]))

#ifdef Rte_Pim_SecdrySrcRollgCntrResync
# undef Rte_Pim_SecdrySrcRollgCntrResync
#endif
#define Rte_Pim_SecdrySrcRollgCntrResync() (&(ImcArbn_Pim_SecdrySrcRollgCntrResync[0]))

#ifdef Rte_Pim_SecdrySrcRxBuf
# undef Rte_Pim_SecdrySrcRxBuf
#endif
#define Rte_Pim_SecdrySrcRxBuf() (&(ImcArbn_Pim_SecdrySrcRxBuf[0][0]))

#ifdef Rte_Pim_SigGroupDataSrc
# undef Rte_Pim_SigGroupDataSrc
#endif
#define Rte_Pim_SigGroupDataSrc() (&(ImcArbn_Pim_SigGroupDataSrc[0]))

#ifdef Rte_Pim_SigGroupMissCntr
# undef Rte_Pim_SigGroupMissCntr
#endif
#define Rte_Pim_SigGroupMissCntr() (&(ImcArbn_Pim_SigGroupMissCntr[0]))

#ifdef Rte_Pim_SigGroupNeverRxd
# undef Rte_Pim_SigGroupNeverRxd
#endif
#define Rte_Pim_SigGroupNeverRxd() (&(ImcArbn_Pim_SigGroupNeverRxd[0]))

#ifdef Rte_Pim_SigGroupSkipCntr
# undef Rte_Pim_SigGroupSkipCntr
#endif
#define Rte_Pim_SigGroupSkipCntr() (&(ImcArbn_Pim_SigGroupSkipCntr[0]))

#ifdef Rte_Pim_TxBuf
# undef Rte_Pim_TxBuf
#endif
#define Rte_Pim_TxBuf() (&(ImcArbn_Pim_TxBuf[0][0]))


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl
# undef Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl
#endif
#define Rte_IrvRead_ImcArbnPer4_IniTiOutChkCmpl() (ImcArbn_Irv_IniTiOutChkCmpl)

#ifdef Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl
# undef Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl
#endif
#define Rte_IrvRead_ImcArbnPer5_IniTiOutChkCmpl() (ImcArbn_Irv_IniTiOutChkCmpl)

#ifdef Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl
# undef Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl
#endif
#define Rte_IrvRead_ImcArbnPer6_IniTiOutChkCmpl() (ImcArbn_Irv_IniTiOutChkCmpl)

#ifdef Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl
# undef Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl
#endif
#define Rte_IrvWrite_ImcArbnPer6_IniTiOutChkCmpl(data) (ImcArbn_Irv_IniTiOutChkCmpl = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
