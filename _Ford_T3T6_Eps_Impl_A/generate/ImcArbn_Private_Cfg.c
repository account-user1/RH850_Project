
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   ImcArbn_Cfg.c
* Module Description: Private configuration source file for IMC Arbitration
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       tzyksv %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                                 SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 15/Jan/17  1       Akilan    ImcArbn Initial Version                                                       EA4#9291
* 01/Feb/17  2       Akilan    Changed positions of start bit and destination size                           EA4#9291
* 17/Mar/17  3       JK        Anomaly fix EA4#10556 - Incorrect bit mask                                    EA4#10576
**********************************************************************************************************************/
#include "Rte_ImcArbn.h"
/************************************************ Include Statements *************************************************/
#include "ImcArbn_Private_Cfg.h"
/******************************************** File Level Rule Deviations *********************************************/

/*********** ImcArbn Signal Wrapper functions prototype ************************/
/* Wrapper function to get value of EcuId */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetEcuId(void);
/* Wrapper function to get value of VehSpd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetVehSpd(void);
/* Wrapper function to get value of RstReq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetRstReq(void);
/* Wrapper function to get value of DiagcStsNonRcrvlReqDiFltPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetDiagcStsNonRcrvlReqDiFltPrsnt(void);
/* Wrapper function to get value of DualEcuMotCtrlMtgtnEna */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetDualEcuMotCtrlMtgtnEna(void);
/* Wrapper function to get value of HwAg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwAg(void);
/* Wrapper function to get value of HwTq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwTq(void);
/* Wrapper function to get value of MotVel */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetMotVel(void);
/* Wrapper function to get value of PosnServoIntgtrSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPosnServoIntgtrSt(void);
/* Wrapper function to get value of SysSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetSysSt(void);
/* Wrapper function to get value of VehSpdVld */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetVehSpdVld(void);
/* Wrapper function to get value of FordCtcIdx */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordCtcIdx(void);
/* Wrapper function to get value of FordCtcSts */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordCtcSts(void);
/* Wrapper function to get value of FordAbsPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordAbsPrsnt(void);
/* Wrapper function to get value of FordActvParkAssiEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvParkAssiEnad(void);
/* Wrapper function to get value of FordActvRtnEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvRtnEnad(void);
/* Wrapper function to get value of FordAfsEquid */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordAfsEquid(void);
/* Wrapper function to get value of FordEngTqClass */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEngTqClass(void);
/* Wrapper function to get value of FordEscPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEscPrsnt(void);
/* Wrapper function to get value of FordSelDrvModEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSelDrvModEnad(void);
/* Wrapper function to get value of FordSoftEndStopEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSoftEndStopEnad(void);
/* Wrapper function to get value of FordStrtStopSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordStrtStopSt(void);
/* Wrapper function to get value of FordDrvrSteerRcmdnEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordDrvrSteerRcmdnEnad(void);
/* Wrapper function to get value of RtnDC00Req */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetRtnDC00Req(void);
/* Wrapper function to get value of ClrDiagcReq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetClrDiagcReq(void);
/* Wrapper function to get value of PinionAg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPinionAg(void);
/* Wrapper function to get value of PinionAgConf */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPinionAgConf(void);
/* Wrapper function to get value of HwAgToMotAgCorrlnFltFld */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwAgToMotAgCorrlnFltFld(void);
/* Wrapper function to get value of FordColTqOvrl */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordColTqOvrl(void);
/* Wrapper function to get value of BattVltg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetBattVltg(void);
/* Wrapper function to get value of BattRtnCurr */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetBattRtnCurr(void);
/* Wrapper function to get value of FordMotTqCmdOvrl */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordMotTqCmdOvrl(void);
/* Wrapper function to get value of FordSteerTqDstbcRejctnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSteerTqDstbcRejctnArbnCmd(void);
/* Wrapper function to get value of FordSpare3ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare3ArbnCmd(void);
/* Wrapper function to get value of FordSpare2ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare2ArbnCmd(void);
/* Wrapper function to get value of FordSpare1ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare1ArbnCmd(void);
/* Wrapper function to get value of FordPullDriftCmpLrngArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordPullDriftCmpLrngArbnCmd(void);
/* Wrapper function to get value of FordPullDriftCmpArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordPullDriftCmpArbnCmd(void);
/* Wrapper function to get value of FordLatCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLatCtrlArbnCmd(void);
/* Wrapper function to get value of FordLaneKeepAssiArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLaneKeepAssiArbnCmd(void);
/* Wrapper function to get value of FordLaneDprtrWarnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLaneDprtrWarnArbnCmd(void);
/* Wrapper function to get value of FordExtAgCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordExtAgCtrlArbnCmd(void);
/* Wrapper function to get value of FordEvasSteerAssiArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEvasSteerAssiArbnCmd(void);
/* Wrapper function to get value of FordDrvrSteerRcmdnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordDrvrSteerRcmdnArbnCmd(void);
/* Wrapper function to get value of FordActvNiblCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvNiblCtrlArbnCmd(void);

/*************** [START]Configuration of individual Signal Groups **************/
/* Signal configuration for the signal group Imc00SignalGroup  */
static const SigPrmRec1  IMC00SIGNALGROUP_REC[] =
{
    {
        &GetDiagcStsNonRcrvlReqDiFltPrsnt, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_DIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16, /* Signal ID */
        11U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetDualEcuMotCtrlMtgtnEna, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_DUALECUMOTCTRLMTGTNENA_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetEcuId, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_ECUID_CNT_U16, /* Signal ID */
        12U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetSysSt, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_SYSST_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetVehSpdVld, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_VEHSPDVLD_CNT_U16, /* Signal ID */
        9U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc01SignalGroup  */
static const SigPrmRec1  IMC01SIGNALGROUP_REC[] =
{
    {
        &GetHwAg, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWAG_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc02SignalGroup  */
static const SigPrmRec1  IMC02SIGNALGROUP_REC[] =
{
    {
        &GetHwTq, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWTQ_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc03SignalGroup  */
static const SigPrmRec1  IMC03SIGNALGROUP_REC[] =
{
    {
        &GetMotVel, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_MOTVEL_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc04SignalGroup  */
static const SigPrmRec1  IMC04SIGNALGROUP_REC[] =
{
    {
        &GetHwTq, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWTQ_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc05SignalGroup  */
static const SigPrmRec1  IMC05SIGNALGROUP_REC[] =
{
    {
        &GetVehSpd, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_VEHSPD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc06SignalGroup  */
static const SigPrmRec1  IMC06SIGNALGROUP_REC[] =
{
    {
        &GetHwTq, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWTQ_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc07SignalGroup  */
static const SigPrmRec1  IMC07SIGNALGROUP_REC[] =
{
    {
        &GetPosnServoIntgtrSt, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_POSNSERVOINTGTRST_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc08SignalGroup  */
static const SigPrmRec1  IMC08SIGNALGROUP_REC[] =
{
    {
        &GetHwTq, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWTQ_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupCustDiagcEcuConfDid  */
static const SigPrmRec1  IMCARBNSIGNALGROUPCUSTDIAGCECUCONFDID_REC[] =
{
    {
        &GetFordAbsPrsnt, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDABSPRSNT_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordEscPrsnt, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDESCPRSNT_CNT_U16, /* Signal ID */
        1U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordAfsEquid, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDAFSEQUID_CNT_U16, /* Signal ID */
        2U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordEngTqClass, /* Pointer to the Signal wrapper function */
        0x00000007U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDENGTQCLASS_CNT_U16, /* Signal ID */
        3U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordActvParkAssiEnad, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDACTVPARKASSIENAD_CNT_U16, /* Signal ID */
        6U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordActvRtnEnad, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDACTVRTNENAD_CNT_U16, /* Signal ID */
        7U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordSoftEndStopEnad, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDSOFTENDSTOPENAD_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordStrtStopSt, /* Pointer to the Signal wrapper function */
        0x00000003U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDSTRTSTOPST_CNT_U16, /* Signal ID */
        9U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordSelDrvModEnad, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDSELDRVMODENAD_CNT_U16, /* Signal ID */
        11U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordDrvrSteerRcmdnEnad, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDDRVRSTEERRCMDNENAD_CNT_U16, /* Signal ID */
        12U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordDualEcuFltDiagc  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDDUALECUFLTDIAGC_REC[] =
{
    {
        &GetFordCtcIdx, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDCTCIDX_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordCtcSts, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDCTCSTS_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupCustDiagcReq  */
static const SigPrmRec1  IMCARBNSIGNALGROUPCUSTDIAGCREQ_REC[] =
{
    {
        &GetRstReq, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_RSTREQ_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetClrDiagcReq, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_CLRDIAGCREQ_CNT_U16, /* Signal ID */
        2U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetRtnDC00Req, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_RTNDC00REQ_CNT_U16, /* Signal ID */
        3U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc09SignalGroup  */
static const SigPrmRec1  IMC09SIGNALGROUP_REC[] =
{
    {
        &GetPinionAgConf, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_PINIONAGCONF_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc10SignalGroup  */
static const SigPrmRec1  IMC10SIGNALGROUP_REC[] =
{
    {
        &GetPinionAg, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_PINIONAG_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group Imc11SignalGroup  */
static const SigPrmRec1  IMC11SIGNALGROUP_REC[] =
{
    {
        &GetHwAgToMotAgCorrlnFltFld, /* Pointer to the Signal wrapper function */
        0x00000001U, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_HWAGTOMOTAGCORRLNFLTFLD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordHwTqCmdOvrlLimr  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDHWTQCMDOVRLLIMR_REC[] =
{
    {
        &GetFordColTqOvrl, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDCOLTQOVRL_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordMotTqCmdOvrlLimr  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDMOTTQCMDOVRLLIMR_REC[] =
{
    {
        &GetFordMotTqCmdOvrl, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDMOTTQCMDOVRL_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordCmdArbn1  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDCMDARBN1_REC[] =
{
    {
        &GetFordActvNiblCtrlArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDACTVNIBLCTRLARBNCMD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordDrvrSteerRcmdnArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDDRVRSTEERRCMDNARBNCMD_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordEvasSteerAssiArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDEVASSTEERASSIARBNCMD_CNT_U16, /* Signal ID */
        16U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordExtAgCtrlArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDEXTAGCTRLARBNCMD_CNT_U16, /* Signal ID */
        24U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordCmdArbn2  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDCMDARBN2_REC[] =
{
    {
        &GetFordLaneDprtrWarnArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLANEDPRTRWARNARBNCMD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordLaneKeepAssiArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLANEKEEPASSIARBNCMD_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordLatCtrlArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLATCTRLARBNCMD_CNT_U16, /* Signal ID */
        16U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordPullDriftCmpArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDPULLDRIFTCMPARBNCMD_CNT_U16, /* Signal ID */
        24U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordVltgIf1  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDVLTGIF1_REC[] =
{
    {
        &GetBattRtnCurr, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_BATTRTNCURR_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordVltgIf2  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDVLTGIF2_REC[] =
{
    {
        &GetBattVltg, /* Pointer to the Signal wrapper function */
        0xFFFFFFFFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_BATTVLTG_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordCmdArbn3  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDCMDARBN3_REC[] =
{
    {
        &GetFordSteerTqDstbcRejctnArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDSTEERTQDSTBCREJCTNARBNCMD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

};
/* Signal configuration for the signal group ImcArbnSignalGroupFordCmdArbn4  */
static const SigPrmRec1  IMCARBNSIGNALGROUPFORDCMDARBN4_REC[] =
{
    {
        &GetFordLaneDprtrWarnArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLANEDPRTRWARNARBNCMD_CNT_U16, /* Signal ID */
        0U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordLaneKeepAssiArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLANEKEEPASSIARBNCMD_CNT_U16, /* Signal ID */
        8U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordLatCtrlArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDLATCTRLARBNCMD_CNT_U16, /* Signal ID */
        16U, /* Start position of the Signal in the Signal Group */
    },

    {
        &GetFordPullDriftCmpArbnCmd, /* Pointer to the Signal wrapper function */
        0x000000FFU, /* Bitmask used for the signal to pack or unpack the signal */
        IMCARBN_FORDPULLDRIFTCMPARBNCMD_CNT_U16, /* Signal ID */
        24U, /* Start position of the Signal in the Signal Group */
    },

};
/************************ [END]Configuration of individual Signal Groups *******/

/************************ [START]Configuration of all Signal Groups ************/
const SigGroupRec1 SIGGROUPCONFIG_REC[IMCARBN_TOTALNROFSIGGROUP_CNT_U08] =
{
/*************** [START]Signal Groups Configured under 2ms Rate Group **********/
/*************** [END]Signal Groups Configured under 2ms Rate Group ************/
/*************** [START]Signal Groups Configured under 10ms Rate Group *********/
    {
        &IMC00SIGNALGROUP_REC[0], /*Signal Group Structure */
        5U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC00SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC01SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC01SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC02SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC02SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC03SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC03SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC04SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC04SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC05SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC05SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC06SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC06SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC07SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC07SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC08SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC08SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPCUSTDIAGCREQ_REC[0], /*Signal Group Structure */
        3U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPCUSTDIAGCREQ_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC09SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC09SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC10SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC10SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMC11SIGNALGROUP_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMC11SIGNALGROUP_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDHWTQCMDOVRLLIMR_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDHWTQCMDOVRLLIMR_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDMOTTQCMDOVRLLIMR_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDMOTTQCMDOVRLLIMR_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDCMDARBN1_REC[0], /*Signal Group Structure */
        4U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN1_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDCMDARBN2_REC[0], /*Signal Group Structure */
        4U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN2_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDVLTGIF1_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDVLTGIF1_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDVLTGIF2_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDVLTGIF2_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDCMDARBN3_REC[0], /*Signal Group Structure */
        1U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN3_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDCMDARBN4_REC[0], /*Signal Group Structure */
        4U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDCMDARBN4_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
/*************** [END]Signal Groups Configured under 10ms Rate Group ***********/
/*************** [START]Signal Groups Configured under 100ms Rate Group ********/
    {
        &IMCARBNSIGNALGROUPCUSTDIAGCECUCONFDID_REC[0], /*Signal Group Structure */
        10U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPCUSTDIAGCECUCONFDID_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
    {
        &IMCARBNSIGNALGROUPFORDDUALECUFLTDIAGC_REC[0], /*Signal Group Structure */
        2U, /* Number of Signals Configured under the Signal Group */
        IMCARBN_IMCARBNSIGNALGROUPFORDDUALECUFLTDIAGC_CNT_U08, /* Signal Group ID */
        FALSE, /* Transmit on Primary Source only */
    },
/*************** [END]Signal Groups Configured under 100ms Rate Group **********/
};
/************************ [END]Configuration of all Signal Groups **************/

/***********[START] Signal functions definitions *******************************/
/* Wrapper function to get value of EcuId */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetEcuId(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_EcuId_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of VehSpd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetVehSpd(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_VehSpd_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of RstReq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetRstReq(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_RstReq_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of DiagcStsNonRcrvlReqDiFltPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetDiagcStsNonRcrvlReqDiFltPrsnt(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_DiagcStsNonRcrvlReqDiFltPrsnt_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of DualEcuMotCtrlMtgtnEna */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetDualEcuMotCtrlMtgtnEna(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of HwAg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwAg(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_HwAg_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of HwTq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwTq(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_HwTq_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of MotVel */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetMotVel(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_MotVel_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of PosnServoIntgtrSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPosnServoIntgtrSt(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_PosnServoIntgtrSt_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of SysSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetSysSt(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_SysSt_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of VehSpdVld */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetVehSpdVld(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_VehSpdVld_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordCtcIdx */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordCtcIdx(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordCtcIdx_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordCtcSts */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordCtcSts(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordCtcSts_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordAbsPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordAbsPrsnt(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordAbsPrsnt_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordActvParkAssiEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvParkAssiEnad(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordActvParkAssiEnad_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordActvRtnEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvRtnEnad(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordActvRtnEnad_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordAfsEquid */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordAfsEquid(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordAfsEquid_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordEngTqClass */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEngTqClass(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordEngTqClass_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordEscPrsnt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEscPrsnt(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordEscPrsnt_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSelDrvModEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSelDrvModEnad(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordSelDrvModEnad_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSoftEndStopEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSoftEndStopEnad(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordSoftEndStopEnad_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordStrtStopSt */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordStrtStopSt(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordStrtStopSt_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordDrvrSteerRcmdnEnad */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordDrvrSteerRcmdnEnad(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_FordDrvrSteerRcmdnEnad_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of RtnDC00Req */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetRtnDC00Req(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_RtnDC00Req_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of ClrDiagcReq */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetClrDiagcReq(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_ClrDiagcReq_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of PinionAg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPinionAg(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_PinionAg_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of PinionAgConf */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetPinionAgConf(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_PinionAgConf_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of HwAgToMotAgCorrlnFltFld */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetHwAgToMotAgCorrlnFltFld(void)
{
    uint32 RetVal_Uls_T_u32;
    boolean SigVal_Uls_T_logl;
    (void)Rte_Read_HwAgToMotAgCorrlnFltFld_Logl(&SigVal_Uls_T_logl); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_logl;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordColTqOvrl */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordColTqOvrl(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_FordColTqOvrl_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of BattVltg */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetBattVltg(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_BattVltg_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of BattRtnCurr */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetBattRtnCurr(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_BattRtnCurr_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordMotTqCmdOvrl */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordMotTqCmdOvrl(void)
{
    uint32 RetVal_Uls_T_u32;
    float32 SigVal_Uls_T_f32;
    (void)Rte_Read_FordMotTqCmdOvrl_Val(&SigVal_Uls_T_f32); 
    RetVal_Uls_T_u32 =  *((uint32*)&SigVal_Uls_T_f32);
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSteerTqDstbcRejctnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSteerTqDstbcRejctnArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSpare3ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare3ArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordSpare3ArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSpare2ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare2ArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordSpare2ArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordSpare1ArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordSpare1ArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordSpare1ArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordPullDriftCmpLrngArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordPullDriftCmpLrngArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordPullDriftCmpLrngArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordPullDriftCmpArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordPullDriftCmpArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordPullDriftCmpArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordLatCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLatCtrlArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordLatCtrlArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordLaneKeepAssiArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLaneKeepAssiArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordLaneKeepAssiArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordLaneDprtrWarnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordLaneDprtrWarnArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordLaneDprtrWarnArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordExtAgCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordExtAgCtrlArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordExtAgCtrlArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordEvasSteerAssiArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordEvasSteerAssiArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordEvasSteerAssiArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordDrvrSteerRcmdnArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordDrvrSteerRcmdnArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordDrvrSteerRcmdnArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/* Wrapper function to get value of FordActvNiblCtrlArbnCmd */
static FUNC(uint32, RTE_IMCARBN_APPL_CODE) GetFordActvNiblCtrlArbnCmd(void)
{
    uint32 RetVal_Uls_T_u32;
    uint8 SigVal_Uls_T_u08;
    (void)Rte_Read_FordActvNiblCtrlArbnCmd_Val(&SigVal_Uls_T_u08); 
    RetVal_Uls_T_u32 =  (uint32)SigVal_Uls_T_u08;
    return(RetVal_Uls_T_u32);
}
/***********[END] Signal functions definitions *********************************/


