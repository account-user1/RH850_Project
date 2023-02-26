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
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_EcuId;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordActvNiblCtrlFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordDrvrSteerRcmdnFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordEvasSteerAssiFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordExtAgCtrlFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordLaneDprtrWarnFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordLaneKeepAssiFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordLatCtrlFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordPullDriftCmpFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordPullDriftCmpLrngFeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordSpare1FeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordSpare2FeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordSpare3FeatSt;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordSteerModlSts;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Ip_FordSteerTqDstbcRejctnFeatSt;
extern VAR(float32, AUTOMATIC) FordCmdArbn_Ip_FordSysOperMotTqCmdSca;

/* Outputs */
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordActvNiblCtrlArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordDrvrSteerRcmdnArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordEvasSteerAssiArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordExtAgCtrlArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordLaneDprtrWarnArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordLaneKeepAssiArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordLatCtrlArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordPullDriftCmpArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordPullDriftCmpLrngArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordSpare1ArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordSpare2ArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordSpare3ArbnCmd;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Op_FordSteerTqDstbcRejctnArbnCmd;

/* Calibrations */
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnActvNiblCtrlDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnActvNiblCtrlDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnDrvrSteerDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnDrvrSteerRcmdnDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnEvasSteerAssiDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnEvasSteerDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnExtAgCtrlDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnExtAgDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLaneDprtrWarnDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLaneDprtrWarnDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLaneKeepAssiDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLaneKeepAssiDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLatCtrlDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnLatCtrlDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnNonStMask[13];
extern CONST(float32, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnNormAssiTqThd;
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnPullDriftCmpDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnPullDriftCmpDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnPullDriftCmpLrngDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnPullDriftCmpLrngDeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare1Deactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare1DeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare2Deactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare2DeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare3Deactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSpare3DeniedActvnReq[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSteerDstbcDeactvn[13];
extern CONST(boolean, AUTOMATIC) FordCmdArbn_Cal_FordCmdArbnSteerDstbcDeniedActvnReq[13];

/* IRVs */
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordActvNiblCtrlFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordDrvrSteerRcmdnFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordEvasSteerAssiFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordLaneDprtrWarnFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordLatCtrlFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordPullDriftCmpFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordPullDriftCmpLrngFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordSpare1Feat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordSpare2Feat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordSpare3Feat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_FordSteerTqDstbcRejctnFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_LaneKeepAssiFeat;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Irv_SteerSts;

/* Arguments and Returns */
extern VAR(uint16, AUTOMATIC) FordCmdArbn_Srv_GetSigImcData_u08_SigId;
extern VAR(uint8, AUTOMATIC) FordCmdArbn_Srv_GetSigImcData_u08_Data;
extern VAR(ImcArbnRxSts1, AUTOMATIC) FordCmdArbn_Srv_GetSigImcData_u08_Sts;
extern VAR(Std_ReturnType, AUTOMATIC) FordCmdArbn_Srv_GetSigImcData_u08_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_EcuId_Val
# undef Rte_Read_EcuId_Val
#endif
#define Rte_Read_EcuId_Val(data) (*(data) = FordCmdArbn_Ip_EcuId)

#ifdef Rte_Read_FordActvNiblCtrlFeatSt_Val
# undef Rte_Read_FordActvNiblCtrlFeatSt_Val
#endif
#define Rte_Read_FordActvNiblCtrlFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordActvNiblCtrlFeatSt)

#ifdef Rte_Read_FordDrvrSteerRcmdnFeatSt_Val
# undef Rte_Read_FordDrvrSteerRcmdnFeatSt_Val
#endif
#define Rte_Read_FordDrvrSteerRcmdnFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordDrvrSteerRcmdnFeatSt)

#ifdef Rte_Read_FordEvasSteerAssiFeatSt_Val
# undef Rte_Read_FordEvasSteerAssiFeatSt_Val
#endif
#define Rte_Read_FordEvasSteerAssiFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordEvasSteerAssiFeatSt)

#ifdef Rte_Read_FordExtAgCtrlFeatSt_Val
# undef Rte_Read_FordExtAgCtrlFeatSt_Val
#endif
#define Rte_Read_FordExtAgCtrlFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordExtAgCtrlFeatSt)

#ifdef Rte_Read_FordLaneDprtrWarnFeatSt_Val
# undef Rte_Read_FordLaneDprtrWarnFeatSt_Val
#endif
#define Rte_Read_FordLaneDprtrWarnFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordLaneDprtrWarnFeatSt)

#ifdef Rte_Read_FordLaneKeepAssiFeatSt_Val
# undef Rte_Read_FordLaneKeepAssiFeatSt_Val
#endif
#define Rte_Read_FordLaneKeepAssiFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordLaneKeepAssiFeatSt)

#ifdef Rte_Read_FordLatCtrlFeatSt_Val
# undef Rte_Read_FordLatCtrlFeatSt_Val
#endif
#define Rte_Read_FordLatCtrlFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordLatCtrlFeatSt)

#ifdef Rte_Read_FordPullDriftCmpFeatSt_Val
# undef Rte_Read_FordPullDriftCmpFeatSt_Val
#endif
#define Rte_Read_FordPullDriftCmpFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordPullDriftCmpFeatSt)

#ifdef Rte_Read_FordPullDriftCmpLrngFeatSt_Val
# undef Rte_Read_FordPullDriftCmpLrngFeatSt_Val
#endif
#define Rte_Read_FordPullDriftCmpLrngFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordPullDriftCmpLrngFeatSt)

#ifdef Rte_Read_FordSpare1FeatSt_Val
# undef Rte_Read_FordSpare1FeatSt_Val
#endif
#define Rte_Read_FordSpare1FeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordSpare1FeatSt)

#ifdef Rte_Read_FordSpare2FeatSt_Val
# undef Rte_Read_FordSpare2FeatSt_Val
#endif
#define Rte_Read_FordSpare2FeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordSpare2FeatSt)

#ifdef Rte_Read_FordSpare3FeatSt_Val
# undef Rte_Read_FordSpare3FeatSt_Val
#endif
#define Rte_Read_FordSpare3FeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordSpare3FeatSt)

#ifdef Rte_Read_FordSteerModlSts_Val
# undef Rte_Read_FordSteerModlSts_Val
#endif
#define Rte_Read_FordSteerModlSts_Val(data) (*(data) = FordCmdArbn_Ip_FordSteerModlSts)

#ifdef Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val
# undef Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val
#endif
#define Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val(data) (*(data) = FordCmdArbn_Ip_FordSteerTqDstbcRejctnFeatSt)

#ifdef Rte_Read_FordSysOperMotTqCmdSca_Val
# undef Rte_Read_FordSysOperMotTqCmdSca_Val
#endif
#define Rte_Read_FordSysOperMotTqCmdSca_Val(data) (*(data) = FordCmdArbn_Ip_FordSysOperMotTqCmdSca)


/*** Output Stubs ***/

#ifdef Rte_Write_FordActvNiblCtrlArbnCmd_Val
# undef Rte_Write_FordActvNiblCtrlArbnCmd_Val
#endif
#define Rte_Write_FordActvNiblCtrlArbnCmd_Val(data) (FordCmdArbn_Op_FordActvNiblCtrlArbnCmd = (data))

#ifdef Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val
# undef Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val
#endif
#define Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val(data) (FordCmdArbn_Op_FordDrvrSteerRcmdnArbnCmd = (data))

#ifdef Rte_Write_FordEvasSteerAssiArbnCmd_Val
# undef Rte_Write_FordEvasSteerAssiArbnCmd_Val
#endif
#define Rte_Write_FordEvasSteerAssiArbnCmd_Val(data) (FordCmdArbn_Op_FordEvasSteerAssiArbnCmd = (data))

#ifdef Rte_Write_FordExtAgCtrlArbnCmd_Val
# undef Rte_Write_FordExtAgCtrlArbnCmd_Val
#endif
#define Rte_Write_FordExtAgCtrlArbnCmd_Val(data) (FordCmdArbn_Op_FordExtAgCtrlArbnCmd = (data))

#ifdef Rte_Write_FordLaneDprtrWarnArbnCmd_Val
# undef Rte_Write_FordLaneDprtrWarnArbnCmd_Val
#endif
#define Rte_Write_FordLaneDprtrWarnArbnCmd_Val(data) (FordCmdArbn_Op_FordLaneDprtrWarnArbnCmd = (data))

#ifdef Rte_Write_FordLaneKeepAssiArbnCmd_Val
# undef Rte_Write_FordLaneKeepAssiArbnCmd_Val
#endif
#define Rte_Write_FordLaneKeepAssiArbnCmd_Val(data) (FordCmdArbn_Op_FordLaneKeepAssiArbnCmd = (data))

#ifdef Rte_Write_FordLatCtrlArbnCmd_Val
# undef Rte_Write_FordLatCtrlArbnCmd_Val
#endif
#define Rte_Write_FordLatCtrlArbnCmd_Val(data) (FordCmdArbn_Op_FordLatCtrlArbnCmd = (data))

#ifdef Rte_Write_FordPullDriftCmpArbnCmd_Val
# undef Rte_Write_FordPullDriftCmpArbnCmd_Val
#endif
#define Rte_Write_FordPullDriftCmpArbnCmd_Val(data) (FordCmdArbn_Op_FordPullDriftCmpArbnCmd = (data))

#ifdef Rte_Write_FordPullDriftCmpLrngArbnCmd_Val
# undef Rte_Write_FordPullDriftCmpLrngArbnCmd_Val
#endif
#define Rte_Write_FordPullDriftCmpLrngArbnCmd_Val(data) (FordCmdArbn_Op_FordPullDriftCmpLrngArbnCmd = (data))

#ifdef Rte_Write_FordSpare1ArbnCmd_Val
# undef Rte_Write_FordSpare1ArbnCmd_Val
#endif
#define Rte_Write_FordSpare1ArbnCmd_Val(data) (FordCmdArbn_Op_FordSpare1ArbnCmd = (data))

#ifdef Rte_Write_FordSpare2ArbnCmd_Val
# undef Rte_Write_FordSpare2ArbnCmd_Val
#endif
#define Rte_Write_FordSpare2ArbnCmd_Val(data) (FordCmdArbn_Op_FordSpare2ArbnCmd = (data))

#ifdef Rte_Write_FordSpare3ArbnCmd_Val
# undef Rte_Write_FordSpare3ArbnCmd_Val
#endif
#define Rte_Write_FordSpare3ArbnCmd_Val(data) (FordCmdArbn_Op_FordSpare3ArbnCmd = (data))

#ifdef Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val
# undef Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val
#endif
#define Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val(data) (FordCmdArbn_Op_FordSteerTqDstbcRejctnArbnCmd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnActvNiblCtrlDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnActvNiblCtrlDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnDrvrSteerDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnDrvrSteerRcmdnDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnEvasSteerAssiDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnEvasSteerDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnExtAgCtrlDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnExtAgDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLaneDprtrWarnDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLaneDprtrWarnDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLaneKeepAssiDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLaneKeepAssiDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLatCtrlDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnLatCtrlDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnNonStMask_Ary1D
# undef Rte_Prm_FordCmdArbnNonStMask_Ary1D
#endif
#define Rte_Prm_FordCmdArbnNonStMask_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnNonStMask[0]))

#ifdef Rte_Prm_FordCmdArbnNormAssiTqThd_Val
# undef Rte_Prm_FordCmdArbnNormAssiTqThd_Val
#endif
#define Rte_Prm_FordCmdArbnNormAssiTqThd_Val() (FordCmdArbn_Cal_FordCmdArbnNormAssiTqThd)

#ifdef Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnPullDriftCmpDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnPullDriftCmpDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnPullDriftCmpLrngDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnPullDriftCmpLrngDeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D
# undef Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare1Deactvn[0]))

#ifdef Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare1DeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D
# undef Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare2Deactvn[0]))

#ifdef Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare2DeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D
# undef Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare3Deactvn[0]))

#ifdef Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSpare3DeniedActvnReq[0]))

#ifdef Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D
# undef Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSteerDstbcDeactvn[0]))

#ifdef Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D
# undef Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D
#endif
#define Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D() (&(FordCmdArbn_Cal_FordCmdArbnSteerDstbcDeniedActvnReq[0]))


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat() (FordCmdArbn_Irv_FordActvNiblCtrlFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat(data) (FordCmdArbn_Irv_FordActvNiblCtrlFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat() (FordCmdArbn_Irv_FordDrvrSteerRcmdnFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(data) (FordCmdArbn_Irv_FordDrvrSteerRcmdnFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat() (FordCmdArbn_Irv_FordEvasSteerAssiFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat(data) (FordCmdArbn_Irv_FordEvasSteerAssiFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat() (FordCmdArbn_Irv_FordLaneDprtrWarnFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat(data) (FordCmdArbn_Irv_FordLaneDprtrWarnFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat() (FordCmdArbn_Irv_FordLatCtrlFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat(data) (FordCmdArbn_Irv_FordLatCtrlFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat() (FordCmdArbn_Irv_FordPullDriftCmpFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat(data) (FordCmdArbn_Irv_FordPullDriftCmpFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat() (FordCmdArbn_Irv_FordPullDriftCmpLrngFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(data) (FordCmdArbn_Irv_FordPullDriftCmpLrngFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat
# undef Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat() (FordCmdArbn_Irv_FordSpare1Feat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat(data) (FordCmdArbn_Irv_FordSpare1Feat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat
# undef Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat() (FordCmdArbn_Irv_FordSpare2Feat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat(data) (FordCmdArbn_Irv_FordSpare2Feat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat
# undef Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat() (FordCmdArbn_Irv_FordSpare3Feat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat(data) (FordCmdArbn_Irv_FordSpare3Feat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat
# undef Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat() (FordCmdArbn_Irv_FordSteerTqDstbcRejctnFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(data) (FordCmdArbn_Irv_FordSteerTqDstbcRejctnFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat
# undef Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat
#endif
#define Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat() (FordCmdArbn_Irv_LaneKeepAssiFeat)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat
# undef Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat(data) (FordCmdArbn_Irv_LaneKeepAssiFeat = (data))

#ifdef Rte_IrvRead_FordCmdArbnPer2_SteerSts
# undef Rte_IrvRead_FordCmdArbnPer2_SteerSts
#endif
#define Rte_IrvRead_FordCmdArbnPer2_SteerSts() (FordCmdArbn_Irv_SteerSts)

#ifdef Rte_IrvWrite_FordCmdArbnPer1_SteerSts
# undef Rte_IrvWrite_FordCmdArbnPer1_SteerSts
#endif
#define Rte_IrvWrite_FordCmdArbnPer1_SteerSts(data) (FordCmdArbn_Irv_SteerSts = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
