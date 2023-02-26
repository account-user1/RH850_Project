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
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordInvldMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Ip_FordTrlrBackUpAssiEnad;
extern VAR(Ford_ElPw_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Ip_Ford_ElPw_D_Stat1;
extern VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC) FordMsg167BusHiSpd_Ip_Ford_ElPw_D_StatStrtStop1;
extern VAR(uint16, AUTOMATIC) FordMsg167BusHiSpd_Ip_Ford_PrplWhlTot2_Tq_Actl;
extern VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Ip_Ford_PwPckTq_D_Stat1;

/* Outputs */
extern VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehElecPwrStrtStopSts;
extern VAR(Ford_ElPw_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehElecPwrSts;
extern VAR(float32, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehPrpnWhlTq;
extern VAR(uint16, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehPrpnWhlTqRaw;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehPrpnWhlTqVld;
extern VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Op_FordVehPwrpkTqSts;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdMissMsgPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqMissTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(Ford_ElPw_D_StatStrtStop, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehElecPwrStrtStopStsPrev;
extern VAR(Ford_ElPw_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehElecPwrStsPrev;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehMsg167Miss;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehMsg167Rxd;
extern VAR(float32, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqPrev;
extern VAR(uint16, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqVldPrev;
extern VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordMsg167BusHiSpd_Pim_FordVehPwrpkTqStsPrev;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_MissMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_PrpnWhlTqVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_PrpnWhlTqVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Pim_PrpnWhlTqVldPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg167BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg167BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg167BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg167BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg167BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg167BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordBrkOscnRednEnad_Logl
# undef Rte_Read_FordBrkOscnRednEnad_Logl
#endif
#define Rte_Read_FordBrkOscnRednEnad_Logl(data) (*(data) = FordMsg167BusHiSpd_Ip_FordBrkOscnRednEnad)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordInvldMsgDiagcInhb_Val
# undef Rte_Read_FordInvldMsgDiagcInhb_Val
#endif
#define Rte_Read_FordInvldMsgDiagcInhb_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_FordInvldMsgDiagcInhb)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_FordTqSteerCmpEnad_Logl
# undef Rte_Read_FordTqSteerCmpEnad_Logl
#endif
#define Rte_Read_FordTqSteerCmpEnad_Logl(data) (*(data) = FordMsg167BusHiSpd_Ip_FordTqSteerCmpEnad)

#ifdef Rte_Read_FordTrlrBackUpAssiEnad_Logl
# undef Rte_Read_FordTrlrBackUpAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackUpAssiEnad_Logl(data) (*(data) = FordMsg167BusHiSpd_Ip_FordTrlrBackUpAssiEnad)

#ifdef Rte_Read_Ford_ElPw_D_Stat1_Val
# undef Rte_Read_Ford_ElPw_D_Stat1_Val
#endif
#define Rte_Read_Ford_ElPw_D_Stat1_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_Ford_ElPw_D_Stat1)

#ifdef Rte_Read_Ford_ElPw_D_StatStrtStop1_Val
# undef Rte_Read_Ford_ElPw_D_StatStrtStop1_Val
#endif
#define Rte_Read_Ford_ElPw_D_StatStrtStop1_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_Ford_ElPw_D_StatStrtStop1)

#ifdef Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Val
# undef Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Val
#endif
#define Rte_Read_Ford_PrplWhlTot2_Tq_Actl_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_Ford_PrplWhlTot2_Tq_Actl)

#ifdef Rte_Read_Ford_PwPckTq_D_Stat1_Val
# undef Rte_Read_Ford_PwPckTq_D_Stat1_Val
#endif
#define Rte_Read_Ford_PwPckTq_D_Stat1_Val(data) (*(data) = FordMsg167BusHiSpd_Ip_Ford_PwPckTq_D_Stat1)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehElecPwrStrtStopSts_Val
# undef Rte_Write_FordVehElecPwrStrtStopSts_Val
#endif
#define Rte_Write_FordVehElecPwrStrtStopSts_Val(data) (FordMsg167BusHiSpd_Op_FordVehElecPwrStrtStopSts = (data))

#ifdef Rte_Write_FordVehElecPwrSts_Val
# undef Rte_Write_FordVehElecPwrSts_Val
#endif
#define Rte_Write_FordVehElecPwrSts_Val(data) (FordMsg167BusHiSpd_Op_FordVehElecPwrSts = (data))

#ifdef Rte_Write_FordVehPrpnWhlTq_Val
# undef Rte_Write_FordVehPrpnWhlTq_Val
#endif
#define Rte_Write_FordVehPrpnWhlTq_Val(data) (FordMsg167BusHiSpd_Op_FordVehPrpnWhlTq = (data))

#ifdef Rte_Write_FordVehPrpnWhlTqRaw_Val
# undef Rte_Write_FordVehPrpnWhlTqRaw_Val
#endif
#define Rte_Write_FordVehPrpnWhlTqRaw_Val(data) (FordMsg167BusHiSpd_Op_FordVehPrpnWhlTqRaw = (data))

#ifdef Rte_Write_FordVehPrpnWhlTqVld_Logl
# undef Rte_Write_FordVehPrpnWhlTqVld_Logl
#endif
#define Rte_Write_FordVehPrpnWhlTqVld_Logl(data) (FordMsg167BusHiSpd_Op_FordVehPrpnWhlTqVld = (data))

#ifdef Rte_Write_FordVehPwrpkTqSts_Val
# undef Rte_Write_FordVehPwrpkTqSts_Val
#endif
#define Rte_Write_FordVehPwrpkTqSts_Val(data) (FordMsg167BusHiSpd_Op_FordVehPwrpkTqSts = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdMissMsgFaildTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdMissMsgFaildTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdMissMsgPassdTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdMissMsgPassdTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqFaildTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqMissTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqMissTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqPassdTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqSigInvldFaildTiThd)

#ifdef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val
# undef Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val
#endif
#define Rte_Prm_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd_Val() (FordMsg167BusHiSpd_Cal_FordMsg167BusHiSpdPrpnWhlTqSigInvldPassdTiThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg167BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg167BusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehElecPwrStrtStopStsPrev
# undef Rte_Pim_FordVehElecPwrStrtStopStsPrev
#endif
#define Rte_Pim_FordVehElecPwrStrtStopStsPrev() (&FordMsg167BusHiSpd_Pim_FordVehElecPwrStrtStopStsPrev)

#ifdef Rte_Pim_FordVehElecPwrStsPrev
# undef Rte_Pim_FordVehElecPwrStsPrev
#endif
#define Rte_Pim_FordVehElecPwrStsPrev() (&FordMsg167BusHiSpd_Pim_FordVehElecPwrStsPrev)

#ifdef Rte_Pim_FordVehMsg167Miss
# undef Rte_Pim_FordVehMsg167Miss
#endif
#define Rte_Pim_FordVehMsg167Miss() (&FordMsg167BusHiSpd_Pim_FordVehMsg167Miss)

#ifdef Rte_Pim_FordVehMsg167Rxd
# undef Rte_Pim_FordVehMsg167Rxd
#endif
#define Rte_Pim_FordVehMsg167Rxd() (&FordMsg167BusHiSpd_Pim_FordVehMsg167Rxd)

#ifdef Rte_Pim_FordVehPrpnWhlTqPrev
# undef Rte_Pim_FordVehPrpnWhlTqPrev
#endif
#define Rte_Pim_FordVehPrpnWhlTqPrev() (&FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqPrev)

#ifdef Rte_Pim_FordVehPrpnWhlTqRawPrev
# undef Rte_Pim_FordVehPrpnWhlTqRawPrev
#endif
#define Rte_Pim_FordVehPrpnWhlTqRawPrev() (&FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqRawPrev)

#ifdef Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi
# undef Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi
#endif
#define Rte_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi() (&FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqSigInvldFaildRefTi)

#ifdef Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi
# undef Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi
#endif
#define Rte_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi() (&FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqSigInvldPassdRefTi)

#ifdef Rte_Pim_FordVehPrpnWhlTqVldPrev
# undef Rte_Pim_FordVehPrpnWhlTqVldPrev
#endif
#define Rte_Pim_FordVehPrpnWhlTqVldPrev() (&FordMsg167BusHiSpd_Pim_FordVehPrpnWhlTqVldPrev)

#ifdef Rte_Pim_FordVehPwrpkTqStsPrev
# undef Rte_Pim_FordVehPwrpkTqStsPrev
#endif
#define Rte_Pim_FordVehPwrpkTqStsPrev() (&FordMsg167BusHiSpd_Pim_FordVehPwrpkTqStsPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg167BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg167BusHiSpd_Pim_MissMsgPassdRefTi)

#ifdef Rte_Pim_PrpnWhlTqVldFaildRefTi
# undef Rte_Pim_PrpnWhlTqVldFaildRefTi
#endif
#define Rte_Pim_PrpnWhlTqVldFaildRefTi() (&FordMsg167BusHiSpd_Pim_PrpnWhlTqVldFaildRefTi)

#ifdef Rte_Pim_PrpnWhlTqVldMissRefTi
# undef Rte_Pim_PrpnWhlTqVldMissRefTi
#endif
#define Rte_Pim_PrpnWhlTqVldMissRefTi() (&FordMsg167BusHiSpd_Pim_PrpnWhlTqVldMissRefTi)

#ifdef Rte_Pim_PrpnWhlTqVldPassdRefTi
# undef Rte_Pim_PrpnWhlTqVldPassdRefTi
#endif
#define Rte_Pim_PrpnWhlTqVldPassdRefTi() (&FordMsg167BusHiSpd_Pim_PrpnWhlTqVldPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
