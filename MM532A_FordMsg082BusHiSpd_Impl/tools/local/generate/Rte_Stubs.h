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
extern VAR(float32, AUTOMATIC) FordMsg082BusHiSpd_Ip_ElecPwrSteerCurr;
extern VAR(float32, AUTOMATIC) FordMsg082BusHiSpd_Ip_ElecPwrSteerVltg;
extern VAR(Ford_EPAS_Failure, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordElecPwrAssidSteerFailr;
extern VAR(Ford_SteMdule_D_Stat, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordSteerModlSts;
extern VAR(Ford_DrvSteActv_B_Stat, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehDrvrSteerActvnSts;
extern VAR(float32, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehDrvrSteerTqReq;
extern VAR(Ford_TrlrHitchLamp_D_Rqst, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehReCamrLiSts;
extern VAR(Ford_SAPPAngleControlStat1, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts1;
extern VAR(Ford_SAPPAngleControlStat2, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts2;
extern VAR(Ford_SAPPAngleControlStat3, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts3;
extern VAR(Ford_SAPPAngleControlStat4, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts4;
extern VAR(Ford_SAPPAngleControlStat5, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts5;
extern VAR(Ford_SAPPAngleControlStat6, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts6;
extern VAR(uint8, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehVelMaxReqTrlrAid;
extern VAR(Ford_VehVTrlrAid_B_Rq, AUTOMATIC) FordMsg082BusHiSpd_Ip_FordVehVelTrlrAidReq;
extern VAR(float32, AUTOMATIC) FordMsg082BusHiSpd_Ip_InpTqRaw;

/* Outputs */
extern VAR(Ford_DrvSteActv_B_Stat, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_DrvSteActv_B_Stat1;
extern VAR(uint8, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_DrvSte_Tq_Actl;
extern VAR(Ford_EPAS_Failure, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_EPAS_Failure1;
extern VAR(Ford_SAPPAngleControlStat1, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat1_1;
extern VAR(Ford_SAPPAngleControlStat2, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat2_1;
extern VAR(Ford_SAPPAngleControlStat3, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat3_1;
extern VAR(Ford_SAPPAngleControlStat4, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat4_1;
extern VAR(Ford_SAPPAngleControlStat5, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat5_1;
extern VAR(Ford_SAPPAngleControlStat6, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat6_1;
extern VAR(Ford_SteMdule_D_Stat, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SteMdule_D_Stat1;
extern VAR(uint16, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SteMdule_I_Est;
extern VAR(uint8, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SteMdule_U_Meas;
extern VAR(uint8, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_SteeringColumnTorque;
extern VAR(Ford_TrlrHitchLamp_D_Rqst, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_TrlrHitchLamp_D_Rqst1;
extern VAR(Ford_VehVTrlrAid_B_Rq, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_VehVTrlrAid_B_Rq1;
extern VAR(uint8, AUTOMATIC) FordMsg082BusHiSpd_Op_Ford_Veh_V_RqMxTrlrAid;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_ElecPwrSteerCurr_Val
# undef Rte_Read_ElecPwrSteerCurr_Val
#endif
#define Rte_Read_ElecPwrSteerCurr_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_ElecPwrSteerCurr)

#ifdef Rte_Read_ElecPwrSteerVltg_Val
# undef Rte_Read_ElecPwrSteerVltg_Val
#endif
#define Rte_Read_ElecPwrSteerVltg_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_ElecPwrSteerVltg)

#ifdef Rte_Read_FordElecPwrAssidSteerFailr_Val
# undef Rte_Read_FordElecPwrAssidSteerFailr_Val
#endif
#define Rte_Read_FordElecPwrAssidSteerFailr_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordElecPwrAssidSteerFailr)

#ifdef Rte_Read_FordSteerModlSts_Val
# undef Rte_Read_FordSteerModlSts_Val
#endif
#define Rte_Read_FordSteerModlSts_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordSteerModlSts)

#ifdef Rte_Read_FordVehDrvrSteerActvnSts_Val
# undef Rte_Read_FordVehDrvrSteerActvnSts_Val
#endif
#define Rte_Read_FordVehDrvrSteerActvnSts_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehDrvrSteerActvnSts)

#ifdef Rte_Read_FordVehDrvrSteerTqReq_Val
# undef Rte_Read_FordVehDrvrSteerTqReq_Val
#endif
#define Rte_Read_FordVehDrvrSteerTqReq_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehDrvrSteerTqReq)

#ifdef Rte_Read_FordVehReCamrLiSts_Val
# undef Rte_Read_FordVehReCamrLiSts_Val
#endif
#define Rte_Read_FordVehReCamrLiSts_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehReCamrLiSts)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts1_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts1_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts1_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts1)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts2_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts2_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts2_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts2)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts3_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts3_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts3_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts3)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts4_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts4_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts4_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts4)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts5_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts5_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts5_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts5)

#ifdef Rte_Read_FordVehSAPPAgCtrlSts6_Val
# undef Rte_Read_FordVehSAPPAgCtrlSts6_Val
#endif
#define Rte_Read_FordVehSAPPAgCtrlSts6_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehSAPPAgCtrlSts6)

#ifdef Rte_Read_FordVehVelMaxReqTrlrAid_Val
# undef Rte_Read_FordVehVelMaxReqTrlrAid_Val
#endif
#define Rte_Read_FordVehVelMaxReqTrlrAid_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehVelMaxReqTrlrAid)

#ifdef Rte_Read_FordVehVelTrlrAidReq_Val
# undef Rte_Read_FordVehVelTrlrAidReq_Val
#endif
#define Rte_Read_FordVehVelTrlrAidReq_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_FordVehVelTrlrAidReq)

#ifdef Rte_Read_InpTqRaw_Val
# undef Rte_Read_InpTqRaw_Val
#endif
#define Rte_Read_InpTqRaw_Val(data) (*(data) = FordMsg082BusHiSpd_Ip_InpTqRaw)


/*** Output Stubs ***/

#ifdef Rte_Write_Ford_DrvSteActv_B_Stat1_Val
# undef Rte_Write_Ford_DrvSteActv_B_Stat1_Val
#endif
#define Rte_Write_Ford_DrvSteActv_B_Stat1_Val(data) (FordMsg082BusHiSpd_Op_Ford_DrvSteActv_B_Stat1 = (data))

#ifdef Rte_Write_Ford_DrvSte_Tq_Actl_Val
# undef Rte_Write_Ford_DrvSte_Tq_Actl_Val
#endif
#define Rte_Write_Ford_DrvSte_Tq_Actl_Val(data) (FordMsg082BusHiSpd_Op_Ford_DrvSte_Tq_Actl = (data))

#ifdef Rte_Write_Ford_EPAS_Failure1_Val
# undef Rte_Write_Ford_EPAS_Failure1_Val
#endif
#define Rte_Write_Ford_EPAS_Failure1_Val(data) (FordMsg082BusHiSpd_Op_Ford_EPAS_Failure1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat1_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat1_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat1_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat1_1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat2_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat2_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat2_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat2_1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat3_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat3_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat3_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat3_1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat4_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat4_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat4_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat4_1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat5_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat5_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat5_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat5_1 = (data))

#ifdef Rte_Write_Ford_SAPPAngleControlStat6_1_Val
# undef Rte_Write_Ford_SAPPAngleControlStat6_1_Val
#endif
#define Rte_Write_Ford_SAPPAngleControlStat6_1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SAPPAngleControlStat6_1 = (data))

#ifdef Rte_Write_Ford_SteMdule_D_Stat1_Val
# undef Rte_Write_Ford_SteMdule_D_Stat1_Val
#endif
#define Rte_Write_Ford_SteMdule_D_Stat1_Val(data) (FordMsg082BusHiSpd_Op_Ford_SteMdule_D_Stat1 = (data))

#ifdef Rte_Write_Ford_SteMdule_I_Est_Val
# undef Rte_Write_Ford_SteMdule_I_Est_Val
#endif
#define Rte_Write_Ford_SteMdule_I_Est_Val(data) (FordMsg082BusHiSpd_Op_Ford_SteMdule_I_Est = (data))

#ifdef Rte_Write_Ford_SteMdule_U_Meas_Val
# undef Rte_Write_Ford_SteMdule_U_Meas_Val
#endif
#define Rte_Write_Ford_SteMdule_U_Meas_Val(data) (FordMsg082BusHiSpd_Op_Ford_SteMdule_U_Meas = (data))

#ifdef Rte_Write_Ford_SteeringColumnTorque_Val
# undef Rte_Write_Ford_SteeringColumnTorque_Val
#endif
#define Rte_Write_Ford_SteeringColumnTorque_Val(data) (FordMsg082BusHiSpd_Op_Ford_SteeringColumnTorque = (data))

#ifdef Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Val
# undef Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Val
#endif
#define Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Val(data) (FordMsg082BusHiSpd_Op_Ford_TrlrHitchLamp_D_Rqst1 = (data))

#ifdef Rte_Write_Ford_VehVTrlrAid_B_Rq1_Val
# undef Rte_Write_Ford_VehVTrlrAid_B_Rq1_Val
#endif
#define Rte_Write_Ford_VehVTrlrAid_B_Rq1_Val(data) (FordMsg082BusHiSpd_Op_Ford_VehVTrlrAid_B_Rq1 = (data))

#ifdef Rte_Write_Ford_Veh_V_RqMxTrlrAid_Val
# undef Rte_Write_Ford_Veh_V_RqMxTrlrAid_Val
#endif
#define Rte_Write_Ford_Veh_V_RqMxTrlrAid_Val(data) (FordMsg082BusHiSpd_Op_Ford_Veh_V_RqMxTrlrAid = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
