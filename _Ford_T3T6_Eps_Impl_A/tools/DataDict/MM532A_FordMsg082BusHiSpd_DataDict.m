%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Nov-2017 15:05:36       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM532A = DataDict.FDD;
MM532A.Version = '2.0.X';
MM532A.LongName = 'Ford Message 082 Bus High Speed';
MM532A.ShoName  = 'FordMsg082BusHiSpd';
MM532A.DesignASIL = 'QM';
MM532A.Description = [...
  'The purpose of the Ford Message 082 Bus High Speed function is to tran' ...
  'smitElectric Power Assisted Steering information to other vehicle modu' ...
  'les.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg082BusHiSpdInit1 = DataDict.Runnable;
FordMsg082BusHiSpdInit1.Context = 'Rte';
FordMsg082BusHiSpdInit1.TimeStep = 0;
FordMsg082BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg082BusHiSpdPer1 = DataDict.Runnable;
FordMsg082BusHiSpdPer1.Context = 'Rte';
FordMsg082BusHiSpdPer1.TimeStep = 0.01;
FordMsg082BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
ElecPwrSteerCurr = DataDict.IpSignal;
ElecPwrSteerCurr.LongName = 'Electric Power Steering Current';
ElecPwrSteerCurr.Description = [...
  'Recieve Electric Power Steering Current signal as an input from EPS an' ...
  'd transmit to CAN bus'];
ElecPwrSteerCurr.DocUnits = 'Ampr';
ElecPwrSteerCurr.EngDT = dt.float32;
ElecPwrSteerCurr.EngInit = 140.75;
ElecPwrSteerCurr.EngMin = -64;
ElecPwrSteerCurr.EngMax = 140.75;
ElecPwrSteerCurr.ReadIn = {'FordMsg082BusHiSpdPer1'};
ElecPwrSteerCurr.ReadType = 'Rte';


ElecPwrSteerVltg = DataDict.IpSignal;
ElecPwrSteerVltg.LongName = 'Electric Power Steering Voltage';
ElecPwrSteerVltg.Description = [...
  'Recieve Electric Power Steering Voltage signal as an input from EPS an' ...
  'd transmit to CAN bus'];
ElecPwrSteerVltg.DocUnits = 'Volt';
ElecPwrSteerVltg.EngDT = dt.float32;
ElecPwrSteerVltg.EngInit = 18.75;
ElecPwrSteerVltg.EngMin = 6;
ElecPwrSteerVltg.EngMax = 18.75;
ElecPwrSteerVltg.ReadIn = {'FordMsg082BusHiSpdPer1'};
ElecPwrSteerVltg.ReadType = 'Rte';


FordElecPwrAssidSteerFailr = DataDict.IpSignal;
FordElecPwrAssidSteerFailr.LongName = 'Ford Electric Power Assisted Steering Failure';
FordElecPwrAssidSteerFailr.Description = [...
  'Recieve Ford Electric Power Assisted Steering Failure signal as an inp' ...
  'ut from EPS and transmit to CAN bus '];
FordElecPwrAssidSteerFailr.DocUnits = 'Cnt';
FordElecPwrAssidSteerFailr.EngDT = enum.Ford_EPAS_Failure;
FordElecPwrAssidSteerFailr.EngInit = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
FordElecPwrAssidSteerFailr.EngMin = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
FordElecPwrAssidSteerFailr.EngMax = Ford_EPAS_Failure.Cx3_SERVICE_POWER_STEERING_NOW;
FordElecPwrAssidSteerFailr.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordElecPwrAssidSteerFailr.ReadType = 'Rte';


FordSteerModlSts = DataDict.IpSignal;
FordSteerModlSts.LongName = 'Ford Steering Module Status';
FordSteerModlSts.Description = [...
  'Recieve Steering Module Status Raw as an input from EPS and transmit t' ...
  'o CAN bus'];
FordSteerModlSts.DocUnits = 'Cnt';
FordSteerModlSts.EngDT = enum.Ford_SteMdule_D_Stat;
FordSteerModlSts.EngInit = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
FordSteerModlSts.EngMin = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
FordSteerModlSts.EngMax = Ford_SteMdule_D_Stat.Cx7_NotUsed;
FordSteerModlSts.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordSteerModlSts.ReadType = 'Rte';


FordVehDrvrSteerActvnSts = DataDict.IpSignal;
FordVehDrvrSteerActvnSts.LongName = 'Ford Vehicle Driver Steering Activation Status';
FordVehDrvrSteerActvnSts.Description = [...
  'Recieve Ford Vehicle Driver Steering Activation Status as an input fro' ...
  'm EPS and transmit to CAN bus'];
FordVehDrvrSteerActvnSts.DocUnits = 'Cnt';
FordVehDrvrSteerActvnSts.EngDT = enum.Ford_DrvSteActv_B_Stat;
FordVehDrvrSteerActvnSts.EngInit = Ford_DrvSteActv_B_Stat.Cx0_Inactive;
FordVehDrvrSteerActvnSts.EngMin = Ford_DrvSteActv_B_Stat.Cx0_Inactive;
FordVehDrvrSteerActvnSts.EngMax = Ford_DrvSteActv_B_Stat.Cx1_Active;
FordVehDrvrSteerActvnSts.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehDrvrSteerActvnSts.ReadType = 'Rte';


FordVehDrvrSteerTqReq = DataDict.IpSignal;
FordVehDrvrSteerTqReq.LongName = 'Ford Vehicle Driver Steering Torque Request';
FordVehDrvrSteerTqReq.Description = [...
  'Recieve Ford Vehicle Velocity Trailer Aid Request as an input from EPS' ...
  ' and transmit to CAN bus'];
FordVehDrvrSteerTqReq.DocUnits = 'HwNwtMtr';
FordVehDrvrSteerTqReq.EngDT = dt.float32;
FordVehDrvrSteerTqReq.EngInit = 0;
FordVehDrvrSteerTqReq.EngMin = -8;
FordVehDrvrSteerTqReq.EngMax = 7.9375;
FordVehDrvrSteerTqReq.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehDrvrSteerTqReq.ReadType = 'Rte';


FordVehReCamrLiSts = DataDict.IpSignal;
FordVehReCamrLiSts.LongName = 'Ford Vehicle Rear Camera Light Status';
FordVehReCamrLiSts.Description = [...
  'Recieve Ford Vehicle Rear Camera Light Status as an input from EPS and' ...
  ' transmit to CAN bus'];
FordVehReCamrLiSts.DocUnits = 'Cnt';
FordVehReCamrLiSts.EngDT = enum.Ford_TrlrHitchLamp_D_Rqst;
FordVehReCamrLiSts.EngInit = Ford_TrlrHitchLamp_D_Rqst.Cx0_Off;
FordVehReCamrLiSts.EngMin = Ford_TrlrHitchLamp_D_Rqst.Cx0_Off;
FordVehReCamrLiSts.EngMax = Ford_TrlrHitchLamp_D_Rqst.Cx1_On;
FordVehReCamrLiSts.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehReCamrLiSts.ReadType = 'Rte';


FordVehSAPPAgCtrlSts1 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts1.LongName = 'Ford Vehicle SAPP Angle Control Status 1';
FordVehSAPPAgCtrlSts1.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 1 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts1.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts1.EngDT = enum.Ford_SAPPAngleControlStat1;
FordVehSAPPAgCtrlSts1.EngInit = Ford_SAPPAngleControlStat1.Cx0_Closed;
FordVehSAPPAgCtrlSts1.EngMin = Ford_SAPPAngleControlStat1.Cx0_Closed;
FordVehSAPPAgCtrlSts1.EngMax = Ford_SAPPAngleControlStat1.Cx3_Fault;
FordVehSAPPAgCtrlSts1.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts1.ReadType = 'Rte';


FordVehSAPPAgCtrlSts2 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts2.LongName = 'Ford Vehicle SAPP Angle Control Status 2';
FordVehSAPPAgCtrlSts2.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 2 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts2.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts2.EngDT = enum.Ford_SAPPAngleControlStat2;
FordVehSAPPAgCtrlSts2.EngInit = Ford_SAPPAngleControlStat2.Cx0_NoRel_ExtSteeringAngleReqx;
FordVehSAPPAgCtrlSts2.EngMin = Ford_SAPPAngleControlStat2.Cx0_NoRel_ExtSteeringAngleReqx;
FordVehSAPPAgCtrlSts2.EngMax = Ford_SAPPAngleControlStat2.Cx1_Rel_ExtSteeringAngleReqx;
FordVehSAPPAgCtrlSts2.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts2.ReadType = 'Rte';


FordVehSAPPAgCtrlSts3 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts3.LongName = 'Ford Vehicle SAPP Angle Control Status 3';
FordVehSAPPAgCtrlSts3.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 3 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts3.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts3.EngDT = enum.Ford_SAPPAngleControlStat3;
FordVehSAPPAgCtrlSts3.EngInit = Ford_SAPPAngleControlStat3.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts3.EngMin = Ford_SAPPAngleControlStat3.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts3.EngMax = Ford_SAPPAngleControlStat3.Cx1_EARactiveNoReverseEngage;
FordVehSAPPAgCtrlSts3.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts3.ReadType = 'Rte';


FordVehSAPPAgCtrlSts4 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts4.LongName = 'Ford Vehicle SAPP Angle Control Status 4';
FordVehSAPPAgCtrlSts4.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 4 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts4.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts4.EngDT = enum.Ford_SAPPAngleControlStat4;
FordVehSAPPAgCtrlSts4.EngInit = Ford_SAPPAngleControlStat4.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts4.EngMin = Ford_SAPPAngleControlStat4.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts4.EngMax = Ford_SAPPAngleControlStat4.Cx1_SpeedLimitExceededEAROn;
FordVehSAPPAgCtrlSts4.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts4.ReadType = 'Rte';


FordVehSAPPAgCtrlSts5 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts5.LongName = 'Ford Vehicle SAPP Angle Control Status 5';
FordVehSAPPAgCtrlSts5.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 5 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts5.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts5.EngDT = enum.Ford_SAPPAngleControlStat5;
FordVehSAPPAgCtrlSts5.EngInit = Ford_SAPPAngleControlStat5.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts5.EngMin = Ford_SAPPAngleControlStat5.Cx0_ExternalSigContentOKforEAC;
FordVehSAPPAgCtrlSts5.EngMax = Ford_SAPPAngleControlStat5.Cx1_StrgColTorqueExceed_EAROn;
FordVehSAPPAgCtrlSts5.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts5.ReadType = 'Rte';


FordVehSAPPAgCtrlSts6 = DataDict.IpSignal;
FordVehSAPPAgCtrlSts6.LongName = 'Ford Vehicle SAPP Angle Control Status 6';
FordVehSAPPAgCtrlSts6.Description = [...
  'Recieve Ford Vehicle SAPP Angle Control Status 6 as an input from EPS ' ...
  'and transmit to CAN bus'];
FordVehSAPPAgCtrlSts6.DocUnits = 'Cnt';
FordVehSAPPAgCtrlSts6.EngDT = enum.Ford_SAPPAngleControlStat6;
FordVehSAPPAgCtrlSts6.EngInit = Ford_SAPPAngleControlStat6.Cx0_RequestedAngleCanBeReached;
FordVehSAPPAgCtrlSts6.EngMin = Ford_SAPPAngleControlStat6.Cx0_RequestedAngleCanBeReached;
FordVehSAPPAgCtrlSts6.EngMax = Ford_SAPPAngleControlStat6.Cx1_RequestedAngleNotReached;
FordVehSAPPAgCtrlSts6.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehSAPPAgCtrlSts6.ReadType = 'Rte';


FordVehVelMaxReqTrlrAid = DataDict.IpSignal;
FordVehVelMaxReqTrlrAid.LongName = 'Ford Vehicle Velocity Maximum Request Trailer Aid';
FordVehVelMaxReqTrlrAid.Description = [...
  'Recieve Ford Vehicle Velocity Maximum Request Trailer Aid as an input ' ...
  'from EPS and transmit to CAN bus'];
FordVehVelMaxReqTrlrAid.DocUnits = 'Cnt';
FordVehVelMaxReqTrlrAid.EngDT = dt.u08;
FordVehVelMaxReqTrlrAid.EngInit = 255;
FordVehVelMaxReqTrlrAid.EngMin = 0;
FordVehVelMaxReqTrlrAid.EngMax = 255;
FordVehVelMaxReqTrlrAid.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehVelMaxReqTrlrAid.ReadType = 'Rte';


FordVehVelTrlrAidReq = DataDict.IpSignal;
FordVehVelTrlrAidReq.LongName = 'Ford Vehicle Velocity Trailer Aid Request';
FordVehVelTrlrAidReq.Description = [...
  'Recieve Ford Vehicle Velocity Trailer Aid Request as an input from EPS' ...
  ' and transmit to CAN bus'];
FordVehVelTrlrAidReq.DocUnits = 'Cnt';
FordVehVelTrlrAidReq.EngDT = enum.Ford_VehVTrlrAid_B_Rq;
FordVehVelTrlrAidReq.EngInit = Ford_VehVTrlrAid_B_Rq.Cx0_NoRequest;
FordVehVelTrlrAidReq.EngMin = Ford_VehVTrlrAid_B_Rq.Cx0_NoRequest;
FordVehVelTrlrAidReq.EngMax = Ford_VehVTrlrAid_B_Rq.Cx1_Request;
FordVehVelTrlrAidReq.ReadIn = {'FordMsg082BusHiSpdPer1'};
FordVehVelTrlrAidReq.ReadType = 'Rte';


InpTqRaw = DataDict.IpSignal;
InpTqRaw.LongName = 'Input Torque Raw';
InpTqRaw.Description = [...
  'Recieve Input Torque Raw as an input from EPS and transmit to CAN bus'];
InpTqRaw.DocUnits = 'HwNwtMtr';
InpTqRaw.EngDT = dt.float32;
InpTqRaw.EngInit = 7.875;
InpTqRaw.EngMin = -8;
InpTqRaw.EngMax = 7.875;
InpTqRaw.ReadIn = {'FordMsg082BusHiSpdPer1'};
InpTqRaw.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Ford_DrvSteActv_B_Stat1 = DataDict.OpSignal;
Ford_DrvSteActv_B_Stat1.LongName = 'Ford Driver Steering Activation Status';
Ford_DrvSteActv_B_Stat1.Description = [...
  'processed value of Ford Vehicle Driver Steering Activation Status'];
Ford_DrvSteActv_B_Stat1.DocUnits = 'Cnt';
Ford_DrvSteActv_B_Stat1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_DrvSteActv_B_Stat1.EngDT = enum.Ford_DrvSteActv_B_Stat;
Ford_DrvSteActv_B_Stat1.EngInit = Ford_DrvSteActv_B_Stat.Cx0_Inactive;
Ford_DrvSteActv_B_Stat1.EngMin = Ford_DrvSteActv_B_Stat.Cx0_Inactive;
Ford_DrvSteActv_B_Stat1.EngMax = Ford_DrvSteActv_B_Stat.Cx1_Active;
Ford_DrvSteActv_B_Stat1.TestTolerance = 0;
Ford_DrvSteActv_B_Stat1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_DrvSteActv_B_Stat1.WriteType = 'Rte';


Ford_DrvSte_Tq_Actl = DataDict.OpSignal;
Ford_DrvSte_Tq_Actl.LongName = 'Ford Driver Steering Torque Actual';
Ford_DrvSte_Tq_Actl.Description = [...
  'processed value of Ford Vehicle Driver Steering Torque Request'];
Ford_DrvSte_Tq_Actl.DocUnits = 'Cnt';
Ford_DrvSte_Tq_Actl.SwcShoName = 'FordMsg082BusHiSpd';
Ford_DrvSte_Tq_Actl.EngDT = dt.u08;
Ford_DrvSte_Tq_Actl.EngInit = 0;
Ford_DrvSte_Tq_Actl.EngMin = 0;
Ford_DrvSte_Tq_Actl.EngMax = 255;
Ford_DrvSte_Tq_Actl.TestTolerance = 0;
Ford_DrvSte_Tq_Actl.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_DrvSte_Tq_Actl.WriteType = 'Rte';


Ford_EPAS_Failure1 = DataDict.OpSignal;
Ford_EPAS_Failure1.LongName = 'Ford Electric Power Assisted Steering Failure';
Ford_EPAS_Failure1.Description = [...
  'processed value of Ford Electric Power Assisted Steering Failure'];
Ford_EPAS_Failure1.DocUnits = 'Cnt';
Ford_EPAS_Failure1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_EPAS_Failure1.EngDT = enum.Ford_EPAS_Failure;
Ford_EPAS_Failure1.EngInit = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
Ford_EPAS_Failure1.EngMin = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
Ford_EPAS_Failure1.EngMax = Ford_EPAS_Failure.Cx3_SERVICE_POWER_STEERING_NOW;
Ford_EPAS_Failure1.TestTolerance = 0;
Ford_EPAS_Failure1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_EPAS_Failure1.WriteType = 'Rte';


Ford_SAPPAngleControlStat1_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat1_1.LongName = 'Ford SAPP Angle Control Status 1';
Ford_SAPPAngleControlStat1_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 1'];
Ford_SAPPAngleControlStat1_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat1_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat1_1.EngDT = enum.Ford_SAPPAngleControlStat1;
Ford_SAPPAngleControlStat1_1.EngInit = Ford_SAPPAngleControlStat1.Cx0_Closed;
Ford_SAPPAngleControlStat1_1.EngMin = Ford_SAPPAngleControlStat1.Cx0_Closed;
Ford_SAPPAngleControlStat1_1.EngMax = Ford_SAPPAngleControlStat1.Cx3_Fault;
Ford_SAPPAngleControlStat1_1.TestTolerance = 0;
Ford_SAPPAngleControlStat1_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat1_1.WriteType = 'Rte';


Ford_SAPPAngleControlStat2_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat2_1.LongName = 'Ford SAPP Angle Control Status 2';
Ford_SAPPAngleControlStat2_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 2'];
Ford_SAPPAngleControlStat2_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat2_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat2_1.EngDT = enum.Ford_SAPPAngleControlStat2;
Ford_SAPPAngleControlStat2_1.EngInit = Ford_SAPPAngleControlStat2.Cx0_NoRel_ExtSteeringAngleReqx;
Ford_SAPPAngleControlStat2_1.EngMin = Ford_SAPPAngleControlStat2.Cx0_NoRel_ExtSteeringAngleReqx;
Ford_SAPPAngleControlStat2_1.EngMax = Ford_SAPPAngleControlStat2.Cx1_Rel_ExtSteeringAngleReqx;
Ford_SAPPAngleControlStat2_1.TestTolerance = 0;
Ford_SAPPAngleControlStat2_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat2_1.WriteType = 'Rte';


Ford_SAPPAngleControlStat3_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat3_1.LongName = 'Ford SAPP Angle Control Status 3';
Ford_SAPPAngleControlStat3_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 3'];
Ford_SAPPAngleControlStat3_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat3_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat3_1.EngDT = enum.Ford_SAPPAngleControlStat3;
Ford_SAPPAngleControlStat3_1.EngInit = Ford_SAPPAngleControlStat3.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat3_1.EngMin = Ford_SAPPAngleControlStat3.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat3_1.EngMax = Ford_SAPPAngleControlStat3.Cx1_EARactiveNoReverseEngage;
Ford_SAPPAngleControlStat3_1.TestTolerance = 0;
Ford_SAPPAngleControlStat3_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat3_1.WriteType = 'Rte';


Ford_SAPPAngleControlStat4_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat4_1.LongName = 'Ford SAPP Angle Control Status 4';
Ford_SAPPAngleControlStat4_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 4'];
Ford_SAPPAngleControlStat4_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat4_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat4_1.EngDT = enum.Ford_SAPPAngleControlStat4;
Ford_SAPPAngleControlStat4_1.EngInit = Ford_SAPPAngleControlStat4.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat4_1.EngMin = Ford_SAPPAngleControlStat4.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat4_1.EngMax = Ford_SAPPAngleControlStat4.Cx1_SpeedLimitExceededEAROn;
Ford_SAPPAngleControlStat4_1.TestTolerance = 0;
Ford_SAPPAngleControlStat4_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat4_1.WriteType = 'Rte';


Ford_SAPPAngleControlStat5_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat5_1.LongName = 'Ford SAPP Angle Control Status 5';
Ford_SAPPAngleControlStat5_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 5'];
Ford_SAPPAngleControlStat5_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat5_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat5_1.EngDT = enum.Ford_SAPPAngleControlStat5;
Ford_SAPPAngleControlStat5_1.EngInit = Ford_SAPPAngleControlStat5.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat5_1.EngMin = Ford_SAPPAngleControlStat5.Cx0_ExternalSigContentOKforEAC;
Ford_SAPPAngleControlStat5_1.EngMax = Ford_SAPPAngleControlStat5.Cx1_StrgColTorqueExceed_EAROn;
Ford_SAPPAngleControlStat5_1.TestTolerance = 0;
Ford_SAPPAngleControlStat5_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat5_1.WriteType = 'Rte';


Ford_SAPPAngleControlStat6_1 = DataDict.OpSignal;
Ford_SAPPAngleControlStat6_1.LongName = 'Ford SAPP Angle Control Status 6';
Ford_SAPPAngleControlStat6_1.Description = [...
  'processed value of Ford Vehicle SAPP Angle Control Status 6'];
Ford_SAPPAngleControlStat6_1.DocUnits = 'Cnt';
Ford_SAPPAngleControlStat6_1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SAPPAngleControlStat6_1.EngDT = enum.Ford_SAPPAngleControlStat6;
Ford_SAPPAngleControlStat6_1.EngInit = Ford_SAPPAngleControlStat6.Cx0_RequestedAngleCanBeReached;
Ford_SAPPAngleControlStat6_1.EngMin = Ford_SAPPAngleControlStat6.Cx0_RequestedAngleCanBeReached;
Ford_SAPPAngleControlStat6_1.EngMax = Ford_SAPPAngleControlStat6.Cx1_RequestedAngleNotReached;
Ford_SAPPAngleControlStat6_1.TestTolerance = 0;
Ford_SAPPAngleControlStat6_1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SAPPAngleControlStat6_1.WriteType = 'Rte';


Ford_SteMdule_D_Stat1 = DataDict.OpSignal;
Ford_SteMdule_D_Stat1.LongName = 'Ford Steering Module Status';
Ford_SteMdule_D_Stat1.Description = [...
  'processed value of Ford Steering Module Status'];
Ford_SteMdule_D_Stat1.DocUnits = 'Cnt';
Ford_SteMdule_D_Stat1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SteMdule_D_Stat1.EngDT = enum.Ford_SteMdule_D_Stat;
Ford_SteMdule_D_Stat1.EngInit = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
Ford_SteMdule_D_Stat1.EngMin = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
Ford_SteMdule_D_Stat1.EngMax = Ford_SteMdule_D_Stat.Cx7_NotUsed;
Ford_SteMdule_D_Stat1.TestTolerance = 0;
Ford_SteMdule_D_Stat1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SteMdule_D_Stat1.WriteType = 'Rte';


Ford_SteMdule_I_Est = DataDict.OpSignal;
Ford_SteMdule_I_Est.LongName = 'Ford Steering Module Estimated Current';
Ford_SteMdule_I_Est.Description = [...
  'processed value of Electric Power Steering Current'];
Ford_SteMdule_I_Est.DocUnits = 'Cnt';
Ford_SteMdule_I_Est.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SteMdule_I_Est.EngDT = dt.u16;
Ford_SteMdule_I_Est.EngInit = 4095;
Ford_SteMdule_I_Est.EngMin = 0;
Ford_SteMdule_I_Est.EngMax = 4095;
Ford_SteMdule_I_Est.TestTolerance = 0;
Ford_SteMdule_I_Est.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SteMdule_I_Est.WriteType = 'Rte';


Ford_SteMdule_U_Meas = DataDict.OpSignal;
Ford_SteMdule_U_Meas.LongName = 'Ford Steering Module Measured Voltage';
Ford_SteMdule_U_Meas.Description = [...
  'processed value of Electric Power Steering Voltage'];
Ford_SteMdule_U_Meas.DocUnits = 'Cnt';
Ford_SteMdule_U_Meas.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SteMdule_U_Meas.EngDT = dt.u08;
Ford_SteMdule_U_Meas.EngInit = 255;
Ford_SteMdule_U_Meas.EngMin = 0;
Ford_SteMdule_U_Meas.EngMax = 255;
Ford_SteMdule_U_Meas.TestTolerance = 0;
Ford_SteMdule_U_Meas.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SteMdule_U_Meas.WriteType = 'Rte';


Ford_SteeringColumnTorque = DataDict.OpSignal;
Ford_SteeringColumnTorque.LongName = 'Ford Steering Column Torque';
Ford_SteeringColumnTorque.Description = [...
  'processed value of Input Torque Raw'];
Ford_SteeringColumnTorque.DocUnits = 'Cnt';
Ford_SteeringColumnTorque.SwcShoName = 'FordMsg082BusHiSpd';
Ford_SteeringColumnTorque.EngDT = dt.u08;
Ford_SteeringColumnTorque.EngInit = 255;
Ford_SteeringColumnTorque.EngMin = 0;
Ford_SteeringColumnTorque.EngMax = 255;
Ford_SteeringColumnTorque.TestTolerance = 0;
Ford_SteeringColumnTorque.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_SteeringColumnTorque.WriteType = 'Rte';


Ford_TrlrHitchLamp_D_Rqst1 = DataDict.OpSignal;
Ford_TrlrHitchLamp_D_Rqst1.LongName = 'Ford Trailer Hitch Lamp Request';
Ford_TrlrHitchLamp_D_Rqst1.Description = [...
  'processed value of Ford Vehicle Rear Camera Light Status'];
Ford_TrlrHitchLamp_D_Rqst1.DocUnits = 'Cnt';
Ford_TrlrHitchLamp_D_Rqst1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_TrlrHitchLamp_D_Rqst1.EngDT = enum.Ford_TrlrHitchLamp_D_Rqst;
Ford_TrlrHitchLamp_D_Rqst1.EngInit = Ford_TrlrHitchLamp_D_Rqst.Cx0_Off;
Ford_TrlrHitchLamp_D_Rqst1.EngMin = Ford_TrlrHitchLamp_D_Rqst.Cx0_Off;
Ford_TrlrHitchLamp_D_Rqst1.EngMax = Ford_TrlrHitchLamp_D_Rqst.Cx1_On;
Ford_TrlrHitchLamp_D_Rqst1.TestTolerance = 0;
Ford_TrlrHitchLamp_D_Rqst1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_TrlrHitchLamp_D_Rqst1.WriteType = 'Rte';


Ford_VehVTrlrAid_B_Rq1 = DataDict.OpSignal;
Ford_VehVTrlrAid_B_Rq1.LongName = 'Ford Vehicle Velocity Trailer Aid Request';
Ford_VehVTrlrAid_B_Rq1.Description = [...
  'processed value of Ford Vehicle Velocity Trailer Aid Request'];
Ford_VehVTrlrAid_B_Rq1.DocUnits = 'Cnt';
Ford_VehVTrlrAid_B_Rq1.SwcShoName = 'FordMsg082BusHiSpd';
Ford_VehVTrlrAid_B_Rq1.EngDT = enum.Ford_VehVTrlrAid_B_Rq;
Ford_VehVTrlrAid_B_Rq1.EngInit = Ford_VehVTrlrAid_B_Rq.Cx0_NoRequest;
Ford_VehVTrlrAid_B_Rq1.EngMin = Ford_VehVTrlrAid_B_Rq.Cx0_NoRequest;
Ford_VehVTrlrAid_B_Rq1.EngMax = Ford_VehVTrlrAid_B_Rq.Cx1_Request;
Ford_VehVTrlrAid_B_Rq1.TestTolerance = 0;
Ford_VehVTrlrAid_B_Rq1.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_VehVTrlrAid_B_Rq1.WriteType = 'Rte';


Ford_Veh_V_RqMxTrlrAid = DataDict.OpSignal;
Ford_Veh_V_RqMxTrlrAid.LongName = 'Ford Vehicle Velocity Request Maximum Trailer Aid';
Ford_Veh_V_RqMxTrlrAid.Description = [...
  'processed value of Ford Vehicle Velocity Maximum Request Trailer Aid'];
Ford_Veh_V_RqMxTrlrAid.DocUnits = 'Cnt';
Ford_Veh_V_RqMxTrlrAid.SwcShoName = 'FordMsg082BusHiSpd';
Ford_Veh_V_RqMxTrlrAid.EngDT = dt.u08;
Ford_Veh_V_RqMxTrlrAid.EngInit = 255;
Ford_Veh_V_RqMxTrlrAid.EngMin = 0;
Ford_Veh_V_RqMxTrlrAid.EngMax = 255;
Ford_Veh_V_RqMxTrlrAid.TestTolerance = 0;
Ford_Veh_V_RqMxTrlrAid.WrittenIn = {'FordMsg082BusHiSpdPer1'};
Ford_Veh_V_RqMxTrlrAid.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DRVRSTEERTQACTOFFS_HWNWTMTR_F32 = DataDict.Constant;
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.LongName = 'Driver Steering Torque Actual Offset';
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.Description = [...
  'Offset value for converting Requested Driver Steering Torque into deci' ...
  'mal'];
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.EngDT = dt.float32;
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.EngVal = 8;
DRVRSTEERTQACTOFFS_HWNWTMTR_F32.Define = 'Local';


DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32 = DataDict.Constant;
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.LongName = 'Driver Steering Torque Actual Scaling Factor';
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.Description = [...
  'Scaling factor for converting Requested Driver Steering Torque into de' ...
  'cimal'];
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.DocUnits = 'HwNwtMtrPerCnt';
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.EngDT = dt.float32;
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.EngVal = 0.0625;
DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32.Define = 'Local';


ELECPWRSTEERVLTGMAX_VOLT_F32 = DataDict.Constant;
ELECPWRSTEERVLTGMAX_VOLT_F32.LongName = 'Electric Power Steering Voltage Maximum';
ELECPWRSTEERVLTGMAX_VOLT_F32.Description = [...
  'Maximum value of Electric Power Steering Voltage'];
ELECPWRSTEERVLTGMAX_VOLT_F32.DocUnits = 'Volt';
ELECPWRSTEERVLTGMAX_VOLT_F32.EngDT = dt.float32;
ELECPWRSTEERVLTGMAX_VOLT_F32.EngVal = 18.75;
ELECPWRSTEERVLTGMAX_VOLT_F32.Define = 'Local';


ELECPWRSTEERVLTGMIN_VOLT_F32 = DataDict.Constant;
ELECPWRSTEERVLTGMIN_VOLT_F32.LongName = 'Electric Power Steering Voltage Minimum';
ELECPWRSTEERVLTGMIN_VOLT_F32.Description = [...
  'Minimum value of Electric Power Steering Voltage'];
ELECPWRSTEERVLTGMIN_VOLT_F32.DocUnits = 'Volt';
ELECPWRSTEERVLTGMIN_VOLT_F32.EngDT = dt.float32;
ELECPWRSTEERVLTGMIN_VOLT_F32.EngVal = 6;
ELECPWRSTEERVLTGMIN_VOLT_F32.Define = 'Local';


MAXLIM_CNT_U08 = DataDict.Constant;
MAXLIM_CNT_U08.LongName = 'Maximum Limit';
MAXLIM_CNT_U08.Description = [...
  'Common constant used to define maximum limit value for U08 output sign' ...
  'als'];
MAXLIM_CNT_U08.DocUnits = 'Cnt';
MAXLIM_CNT_U08.EngDT = dt.u08;
MAXLIM_CNT_U08.EngVal = 255;
MAXLIM_CNT_U08.Define = 'Local';


MINLIM_CNT_U08 = DataDict.Constant;
MINLIM_CNT_U08.LongName = 'Minimum Limit';
MINLIM_CNT_U08.Description = [...
  'Common constant used to define minimum limit value for U08 output sign' ...
  'als'];
MINLIM_CNT_U08.DocUnits = 'Cnt';
MINLIM_CNT_U08.EngDT = dt.u08;
MINLIM_CNT_U08.EngVal = 0;
MINLIM_CNT_U08.Define = 'Local';


STEERCOLTQOFFS_HWNWTMTR_F32 = DataDict.Constant;
STEERCOLTQOFFS_HWNWTMTR_F32.LongName = 'Input Torque Raw';
STEERCOLTQOFFS_HWNWTMTR_F32.Description = [...
  'Offset value for converting Input Torque value into decimal'];
STEERCOLTQOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
STEERCOLTQOFFS_HWNWTMTR_F32.EngDT = dt.float32;
STEERCOLTQOFFS_HWNWTMTR_F32.EngVal = 8;
STEERCOLTQOFFS_HWNWTMTR_F32.Define = 'Local';


STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32 = DataDict.Constant;
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.LongName = 'Input Torque Raw Scaling factor';
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.Description = [...
  'Scaling factor for converting Input Torque value into decimal'];
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.DocUnits = 'HwNwtMtrPerCnt';
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.EngDT = dt.float32;
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.EngVal = 0.0625;
STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32.Define = 'Local';


STEERMODLESTIMDCURRMAX_CNT_U16 = DataDict.Constant;
STEERMODLESTIMDCURRMAX_CNT_U16.LongName = 'Steering Module Estimated Current Maximum';
STEERMODLESTIMDCURRMAX_CNT_U16.Description = [...
  'Maximum value of Steering Module Estimated Current'];
STEERMODLESTIMDCURRMAX_CNT_U16.DocUnits = 'Cnt';
STEERMODLESTIMDCURRMAX_CNT_U16.EngDT = dt.u16;
STEERMODLESTIMDCURRMAX_CNT_U16.EngVal = 4095;
STEERMODLESTIMDCURRMAX_CNT_U16.Define = 'Local';


STEERMODLESTIMDCURRMIN_CNT_U16 = DataDict.Constant;
STEERMODLESTIMDCURRMIN_CNT_U16.LongName = 'Steering Module Estimated Current Minimum';
STEERMODLESTIMDCURRMIN_CNT_U16.Description = [...
  'Minimum value of Steering Module Estimated Current'];
STEERMODLESTIMDCURRMIN_CNT_U16.DocUnits = 'Cnt';
STEERMODLESTIMDCURRMIN_CNT_U16.EngDT = dt.u16;
STEERMODLESTIMDCURRMIN_CNT_U16.EngVal = 0;
STEERMODLESTIMDCURRMIN_CNT_U16.Define = 'Local';


STEERMODLESTIMDCURROFFS_AMPR_F32 = DataDict.Constant;
STEERMODLESTIMDCURROFFS_AMPR_F32.LongName = 'Steering Module Estimated Current Offset';
STEERMODLESTIMDCURROFFS_AMPR_F32.Description = [...
  'Offset value for converting EPS current value into decimal'];
STEERMODLESTIMDCURROFFS_AMPR_F32.DocUnits = 'Ampr';
STEERMODLESTIMDCURROFFS_AMPR_F32.EngDT = dt.float32;
STEERMODLESTIMDCURROFFS_AMPR_F32.EngVal = 64;
STEERMODLESTIMDCURROFFS_AMPR_F32.Define = 'Local';


STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32 = DataDict.Constant;
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.LongName = 'Steering Module Estimated Current Scaling Factor';
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.Description = [...
  'Scaling factor for converting EPS current value into decimal'];
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.DocUnits = 'AmprPerCnt';
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.EngDT = dt.float32;
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.EngVal = 0.05;
STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32.Define = 'Local';


STEERMODLMEASDVLTGOFFS_VOLT_F32 = DataDict.Constant;
STEERMODLMEASDVLTGOFFS_VOLT_F32.LongName = 'Steering Module Measured Voltage Offset';
STEERMODLMEASDVLTGOFFS_VOLT_F32.Description = [...
  'Offset value for converting EPS Voltage value into decimal'];
STEERMODLMEASDVLTGOFFS_VOLT_F32.DocUnits = 'Volt';
STEERMODLMEASDVLTGOFFS_VOLT_F32.EngDT = dt.float32;
STEERMODLMEASDVLTGOFFS_VOLT_F32.EngVal = 6;
STEERMODLMEASDVLTGOFFS_VOLT_F32.Define = 'Local';


STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32 = DataDict.Constant;
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.LongName = 'Steering Module Measured Voltage Scaling Factor';
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.Description = [...
  'Scaling factor for converting EPS Voltage value into decimal'];
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.DocUnits = 'VoltPerCnt';
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.EngDT = dt.float32;
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.EngVal = 0.05;
STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
