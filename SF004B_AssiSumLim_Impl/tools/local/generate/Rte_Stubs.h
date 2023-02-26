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
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_AssiCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_DampgCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_EotActvCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_EotAssiSca;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_EotDampgCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_EotMotTqLim;
extern VAR(boolean, AUTOMATIC) AssiSumLim_Ip_HwTqLoaMtgtnEna;
extern VAR(boolean, AUTOMATIC) AssiSumLim_Ip_MotTqCmdLimDi;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_MotTqCmdOvrl;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_MotVelMrf;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_PinionCentrLrnCmd;
extern VAR(boolean, AUTOMATIC) AssiSumLim_Ip_PinionCentrLrnEna;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_PullCmpCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_PwrLimrRednFac;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_RtnCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_StallMotTqLim;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_SysMotTqCmdSca;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_ThermMotTqLim;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_ThermRednFac;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_TqLoaCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_TqSteerMtgtnCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_VehSpd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_VehSpdMotTqLim;
extern VAR(float32, AUTOMATIC) AssiSumLim_Ip_WhlImbRejctnCmd;

/* Outputs */
extern VAR(float32, AUTOMATIC) AssiSumLim_Op_MotTqCmd;
extern VAR(float32, AUTOMATIC) AssiSumLim_Op_MotTqCmdLimdPreStall;
extern VAR(float32, AUTOMATIC) AssiSumLim_Op_MotTqCmdLimrMin;
extern VAR(float32, AUTOMATIC) AssiSumLim_Op_MotTqCmdPreLim;
extern VAR(float32, AUTOMATIC) AssiSumLim_Op_SysProtnRednFac;

/* Calibrations */
extern CONST(u10p6, AUTOMATIC) AssiSumLim_Cal_AssiSumLimBlndCmdSumFrqLimX[2];
extern CONST(u10p6, AUTOMATIC) AssiSumLim_Cal_AssiSumLimBlndCmdSumFrqLimY[2];
extern CONST(boolean, AUTOMATIC) AssiSumLim_Cal_AssiSumLimCmdSumFilActv;
extern CONST(u11p5, AUTOMATIC) AssiSumLim_Cal_AssiSumLimHiSpdCmdSumFrqLimX[8];
extern CONST(u10p6, AUTOMATIC) AssiSumLim_Cal_AssiSumLimHiSpdCmdSumFrqLimY[8];
extern CONST(u11p5, AUTOMATIC) AssiSumLim_Cal_AssiSumLimLoSpdCmdSumFrqLimX[8];
extern CONST(u10p6, AUTOMATIC) AssiSumLim_Cal_AssiSumLimLoSpdCmdSumFrqLimY[8];
extern CONST(float32, AUTOMATIC) AssiSumLim_Cal_AssiSumLimMotVelLpFilFrq;
extern CONST(uint16, AUTOMATIC) AssiSumLim_Cal_AssiSumLimNtc0x0C4FailStep;
extern CONST(uint16, AUTOMATIC) AssiSumLim_Cal_AssiSumLimNtc0x0C4PassStep;
extern CONST(float32, AUTOMATIC) AssiSumLim_Cal_AssiSumLimPullCmpLim;

/* PIMs */
extern VAR(float32, AUTOMATIC) AssiSumLim_Pim_CmdSumInpPrev;
extern VAR(float32, AUTOMATIC) AssiSumLim_Pim_CmdSumOutpPrev;
extern VAR(FilLpRec1, AUTOMATIC) AssiSumLim_Pim_MotVelFilLp;

/* IRVs */
extern VAR(float32, AUTOMATIC) AssiSumLim_Irv_ProcdManTqCmd;
extern VAR(boolean, AUTOMATIC) AssiSumLim_Irv_ProcdManTqCmdEna;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) AssiSumLim_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) AssiSumLim_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) AssiSumLim_Srv_GetNtcQlfrSts_Return;
extern VAR(NtcNr1, AUTOMATIC) AssiSumLim_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) AssiSumLim_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) AssiSumLim_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) AssiSumLim_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) AssiSumLim_Srv_SetNtcSts_Return;
extern VAR(float32, AUTOMATIC) AssiSumLim_Cli_SetManTqCmd_ManTqCmd;
extern VAR(boolean, AUTOMATIC) AssiSumLim_Cli_SetManTqCmd_ManTqCmdEna;
extern VAR(Std_ReturnType, AUTOMATIC) AssiSumLim_Cli_SetManTqCmd_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmd_Val
# undef Rte_Read_AssiCmd_Val
#endif
#define Rte_Read_AssiCmd_Val(data) (*(data) = AssiSumLim_Ip_AssiCmd)

#ifdef Rte_Read_DampgCmd_Val
# undef Rte_Read_DampgCmd_Val
#endif
#define Rte_Read_DampgCmd_Val(data) (*(data) = AssiSumLim_Ip_DampgCmd)

#ifdef Rte_Read_EotActvCmd_Val
# undef Rte_Read_EotActvCmd_Val
#endif
#define Rte_Read_EotActvCmd_Val(data) (*(data) = AssiSumLim_Ip_EotActvCmd)

#ifdef Rte_Read_EotAssiSca_Val
# undef Rte_Read_EotAssiSca_Val
#endif
#define Rte_Read_EotAssiSca_Val(data) (*(data) = AssiSumLim_Ip_EotAssiSca)

#ifdef Rte_Read_EotDampgCmd_Val
# undef Rte_Read_EotDampgCmd_Val
#endif
#define Rte_Read_EotDampgCmd_Val(data) (*(data) = AssiSumLim_Ip_EotDampgCmd)

#ifdef Rte_Read_EotMotTqLim_Val
# undef Rte_Read_EotMotTqLim_Val
#endif
#define Rte_Read_EotMotTqLim_Val(data) (*(data) = AssiSumLim_Ip_EotMotTqLim)

#ifdef Rte_Read_HwTqLoaMtgtnEna_Logl
# undef Rte_Read_HwTqLoaMtgtnEna_Logl
#endif
#define Rte_Read_HwTqLoaMtgtnEna_Logl(data) (*(data) = AssiSumLim_Ip_HwTqLoaMtgtnEna)

#ifdef Rte_Read_MotTqCmdLimDi_Logl
# undef Rte_Read_MotTqCmdLimDi_Logl
#endif
#define Rte_Read_MotTqCmdLimDi_Logl(data) (*(data) = AssiSumLim_Ip_MotTqCmdLimDi)

#ifdef Rte_Read_MotTqCmdOvrl_Val
# undef Rte_Read_MotTqCmdOvrl_Val
#endif
#define Rte_Read_MotTqCmdOvrl_Val(data) (*(data) = AssiSumLim_Ip_MotTqCmdOvrl)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = AssiSumLim_Ip_MotVelMrf)

#ifdef Rte_Read_PinionCentrLrnCmd_Val
# undef Rte_Read_PinionCentrLrnCmd_Val
#endif
#define Rte_Read_PinionCentrLrnCmd_Val(data) (*(data) = AssiSumLim_Ip_PinionCentrLrnCmd)

#ifdef Rte_Read_PinionCentrLrnEna_Logl
# undef Rte_Read_PinionCentrLrnEna_Logl
#endif
#define Rte_Read_PinionCentrLrnEna_Logl(data) (*(data) = AssiSumLim_Ip_PinionCentrLrnEna)

#ifdef Rte_Read_PullCmpCmd_Val
# undef Rte_Read_PullCmpCmd_Val
#endif
#define Rte_Read_PullCmpCmd_Val(data) (*(data) = AssiSumLim_Ip_PullCmpCmd)

#ifdef Rte_Read_PwrLimrRednFac_Val
# undef Rte_Read_PwrLimrRednFac_Val
#endif
#define Rte_Read_PwrLimrRednFac_Val(data) (*(data) = AssiSumLim_Ip_PwrLimrRednFac)

#ifdef Rte_Read_RtnCmd_Val
# undef Rte_Read_RtnCmd_Val
#endif
#define Rte_Read_RtnCmd_Val(data) (*(data) = AssiSumLim_Ip_RtnCmd)

#ifdef Rte_Read_StallMotTqLim_Val
# undef Rte_Read_StallMotTqLim_Val
#endif
#define Rte_Read_StallMotTqLim_Val(data) (*(data) = AssiSumLim_Ip_StallMotTqLim)

#ifdef Rte_Read_SysMotTqCmdSca_Val
# undef Rte_Read_SysMotTqCmdSca_Val
#endif
#define Rte_Read_SysMotTqCmdSca_Val(data) (*(data) = AssiSumLim_Ip_SysMotTqCmdSca)

#ifdef Rte_Read_ThermMotTqLim_Val
# undef Rte_Read_ThermMotTqLim_Val
#endif
#define Rte_Read_ThermMotTqLim_Val(data) (*(data) = AssiSumLim_Ip_ThermMotTqLim)

#ifdef Rte_Read_ThermRednFac_Val
# undef Rte_Read_ThermRednFac_Val
#endif
#define Rte_Read_ThermRednFac_Val(data) (*(data) = AssiSumLim_Ip_ThermRednFac)

#ifdef Rte_Read_TqLoaCmd_Val
# undef Rte_Read_TqLoaCmd_Val
#endif
#define Rte_Read_TqLoaCmd_Val(data) (*(data) = AssiSumLim_Ip_TqLoaCmd)

#ifdef Rte_Read_TqSteerMtgtnCmd_Val
# undef Rte_Read_TqSteerMtgtnCmd_Val
#endif
#define Rte_Read_TqSteerMtgtnCmd_Val(data) (*(data) = AssiSumLim_Ip_TqSteerMtgtnCmd)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = AssiSumLim_Ip_VehSpd)

#ifdef Rte_Read_VehSpdMotTqLim_Val
# undef Rte_Read_VehSpdMotTqLim_Val
#endif
#define Rte_Read_VehSpdMotTqLim_Val(data) (*(data) = AssiSumLim_Ip_VehSpdMotTqLim)

#ifdef Rte_Read_WhlImbRejctnCmd_Val
# undef Rte_Read_WhlImbRejctnCmd_Val
#endif
#define Rte_Read_WhlImbRejctnCmd_Val(data) (*(data) = AssiSumLim_Ip_WhlImbRejctnCmd)


/*** Output Stubs ***/

#ifdef Rte_Write_MotTqCmd_Val
# undef Rte_Write_MotTqCmd_Val
#endif
#define Rte_Write_MotTqCmd_Val(data) (AssiSumLim_Op_MotTqCmd = (data))

#ifdef Rte_Write_MotTqCmdLimdPreStall_Val
# undef Rte_Write_MotTqCmdLimdPreStall_Val
#endif
#define Rte_Write_MotTqCmdLimdPreStall_Val(data) (AssiSumLim_Op_MotTqCmdLimdPreStall = (data))

#ifdef Rte_Write_MotTqCmdLimrMin_Val
# undef Rte_Write_MotTqCmdLimrMin_Val
#endif
#define Rte_Write_MotTqCmdLimrMin_Val(data) (AssiSumLim_Op_MotTqCmdLimrMin = (data))

#ifdef Rte_Write_MotTqCmdPreLim_Val
# undef Rte_Write_MotTqCmdPreLim_Val
#endif
#define Rte_Write_MotTqCmdPreLim_Val(data) (AssiSumLim_Op_MotTqCmdPreLim = (data))

#ifdef Rte_Write_SysProtnRednFac_Val
# undef Rte_Write_SysProtnRednFac_Val
#endif
#define Rte_Write_SysProtnRednFac_Val(data) (AssiSumLim_Op_SysProtnRednFac = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D
# undef Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D
#endif
#define Rte_Prm_AssiSumLimBlndCmdSumFrqLimX_Ary1D() (&(AssiSumLim_Cal_AssiSumLimBlndCmdSumFrqLimX[0]))

#ifdef Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D
# undef Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D
#endif
#define Rte_Prm_AssiSumLimBlndCmdSumFrqLimY_Ary1D() (&(AssiSumLim_Cal_AssiSumLimBlndCmdSumFrqLimY[0]))

#ifdef Rte_Prm_AssiSumLimCmdSumFilActv_Logl
# undef Rte_Prm_AssiSumLimCmdSumFilActv_Logl
#endif
#define Rte_Prm_AssiSumLimCmdSumFilActv_Logl() (AssiSumLim_Cal_AssiSumLimCmdSumFilActv)

#ifdef Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D
# undef Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D
#endif
#define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimX_Ary1D() (&(AssiSumLim_Cal_AssiSumLimHiSpdCmdSumFrqLimX[0]))

#ifdef Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D
# undef Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D
#endif
#define Rte_Prm_AssiSumLimHiSpdCmdSumFrqLimY_Ary1D() (&(AssiSumLim_Cal_AssiSumLimHiSpdCmdSumFrqLimY[0]))

#ifdef Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D
# undef Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D
#endif
#define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimX_Ary1D() (&(AssiSumLim_Cal_AssiSumLimLoSpdCmdSumFrqLimX[0]))

#ifdef Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D
# undef Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D
#endif
#define Rte_Prm_AssiSumLimLoSpdCmdSumFrqLimY_Ary1D() (&(AssiSumLim_Cal_AssiSumLimLoSpdCmdSumFrqLimY[0]))

#ifdef Rte_Prm_AssiSumLimMotVelLpFilFrq_Val
# undef Rte_Prm_AssiSumLimMotVelLpFilFrq_Val
#endif
#define Rte_Prm_AssiSumLimMotVelLpFilFrq_Val() (AssiSumLim_Cal_AssiSumLimMotVelLpFilFrq)

#ifdef Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val
# undef Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val
#endif
#define Rte_Prm_AssiSumLimNtc0x0C4FailStep_Val() (AssiSumLim_Cal_AssiSumLimNtc0x0C4FailStep)

#ifdef Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val
# undef Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val
#endif
#define Rte_Prm_AssiSumLimNtc0x0C4PassStep_Val() (AssiSumLim_Cal_AssiSumLimNtc0x0C4PassStep)

#ifdef Rte_Prm_AssiSumLimPullCmpLim_Val
# undef Rte_Prm_AssiSumLimPullCmpLim_Val
#endif
#define Rte_Prm_AssiSumLimPullCmpLim_Val() (AssiSumLim_Cal_AssiSumLimPullCmpLim)


/*** PIM Stubs ***/

#ifdef Rte_Pim_CmdSumInpPrev
# undef Rte_Pim_CmdSumInpPrev
#endif
#define Rte_Pim_CmdSumInpPrev() (&AssiSumLim_Pim_CmdSumInpPrev)

#ifdef Rte_Pim_CmdSumOutpPrev
# undef Rte_Pim_CmdSumOutpPrev
#endif
#define Rte_Pim_CmdSumOutpPrev() (&AssiSumLim_Pim_CmdSumOutpPrev)

#ifdef Rte_Pim_MotVelFilLp
# undef Rte_Pim_MotVelFilLp
#endif
#define Rte_Pim_MotVelFilLp() (&AssiSumLim_Pim_MotVelFilLp)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd
# undef Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd
#endif
#define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmd() (AssiSumLim_Irv_ProcdManTqCmd)

#ifdef Rte_IrvWrite_SetManTqCmd_ProcdManTqCmd
# undef Rte_IrvWrite_SetManTqCmd_ProcdManTqCmd
#endif
#define Rte_IrvWrite_SetManTqCmd_ProcdManTqCmd(data) (AssiSumLim_Irv_ProcdManTqCmd = (data))

#ifdef Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna
# undef Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna
#endif
#define Rte_IrvRead_AssiSumLimPer1_ProcdManTqCmdEna() (AssiSumLim_Irv_ProcdManTqCmdEna)

#ifdef Rte_IrvWrite_SetManTqCmd_ProcdManTqCmdEna
# undef Rte_IrvWrite_SetManTqCmd_ProcdManTqCmdEna
#endif
#define Rte_IrvWrite_SetManTqCmd_ProcdManTqCmdEna(data) (AssiSumLim_Irv_ProcdManTqCmdEna = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
