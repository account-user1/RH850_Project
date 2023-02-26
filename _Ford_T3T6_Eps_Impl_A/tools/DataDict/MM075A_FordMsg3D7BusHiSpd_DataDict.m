%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Apr-2018 11:07:31       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM075A = DataDict.FDD;
MM075A.Version = '2.0.X';
MM075A.LongName = 'Ford Message 3D7 Bus High Speed';
MM075A.ShoName  = 'FordMsg3D7BusHiSpd';
MM075A.DesignASIL = 'B';
MM075A.Description = [...
  'The purpose of the Ford Message 3D7 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Evas' ...
  'ive Steer Assist functions from CAN. The Ford Message 3D7 function wil' ...
  'l perform the missing message and signal invalid diagnostics as well a' ...
  's provide a validity flag for the signal values and received message.D' ...
  'etailed requirements have implemented the FordDBC file for guidance.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg3D7BusHiSpdInit1 = DataDict.Runnable;
FordMsg3D7BusHiSpdInit1.Context = 'Rte';
FordMsg3D7BusHiSpdInit1.TimeStep = 0;
FordMsg3D7BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg3D7BusHiSpdPer1 = DataDict.Runnable;
FordMsg3D7BusHiSpdPer1.Context = 'Rte';
FordMsg3D7BusHiSpdPer1.TimeStep = 0.01;
FordMsg3D7BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds '];

ComIPduCallout_Steer_Assist_Data_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Steer_Assist_Data_FD1.Context = 'NonRte';
ComIPduCallout_Steer_Assist_Data_FD1.Description = [...
  'Server Runnable for Clear Diagnostics'];
ComIPduCallout_Steer_Assist_Data_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Steer_Assist_Data_FD1.Return.Type = 'None';
ComIPduCallout_Steer_Assist_Data_FD1.Return.Min = [];
ComIPduCallout_Steer_Assist_Data_FD1.Return.Max = [];
ComIPduCallout_Steer_Assist_Data_FD1.Return.TestTolerance = [];
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).Name = 'EsaEnbl';
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Steer_Assist_Data_FD1.Arguments(1).Description = [...
  'EsaEnbl is set to one when service is invoked'];

ComTimeoutNotification_EsaEnbl_D2_Rq = DataDict.SrvRunnable;
ComTimeoutNotification_EsaEnbl_D2_Rq.Context = 'NonRte';
ComTimeoutNotification_EsaEnbl_D2_Rq.Description = [...
  'Server Runnable for Serial Communication Input Disable'];
ComTimeoutNotification_EsaEnbl_D2_Rq.Return = DataDict.CSReturn;
ComTimeoutNotification_EsaEnbl_D2_Rq.Return.Type = 'None';
ComTimeoutNotification_EsaEnbl_D2_Rq.Return.Min = [];
ComTimeoutNotification_EsaEnbl_D2_Rq.Return.Max = [];
ComTimeoutNotification_EsaEnbl_D2_Rq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg3D7BusHiSpdInit1','FordMsg3D7BusHiSpdPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi value obtained at root lay' ...
  'er of model and gives the RefTmr.'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg3D7BusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time from SimnTi value, handles counter wrappin' ...
  'g, and subtracts RefTmr,provides the TiSpan'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Wrapped value of the current time';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FordMsg3D7BusHiSpdPer1'};
SetNtcSts.Description = 'Set the NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Returns the NTC Qualifier status';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Contains NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Provides the Parameter byte information'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Pass the current NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Used to Implements ISO based error accumulator strategy'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
ClrDiagcFlgProxy = DataDict.IpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostic Flag Proxy';
ClrDiagcFlgProxy.Description = [...
  'When ClrDiagcFlgProxy is True, Diagnostic test is performed'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC.Data Ty' ...
  'pe: Boolean with Min value “False”(0), Init value “True”(1) and Maxval' ...
  'ue “True”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Evasive Steer Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'This signal is set to 1 in order to set the missing NTC and invalid NT' ...
  'C to pass or fail.Data Type: Boolean with Min value “False”(0), Init v' ...
  'alue “False”(0) and Max value “True”(1)'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


Ford_CmbbObjClass_D_Stat1 = DataDict.IpSignal;
Ford_CmbbObjClass_D_Stat1.LongName = 'Collision Mitigation By Braking Object Type Classification';
Ford_CmbbObjClass_D_Stat1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer datatype should be used. Datatype:  ' ...
  'Ford_CmbbObjClass_D_Stat.Sourcesignal range:[0,15].Elements are: 0 - "' ...
  'Cx0_Undetermined", 1 - "Cx1_Vehicle", 2 - "Cx2_Motorcycle", 3 - "Cx3_T' ...
  'ruck", 4 - "Cx5_Bicycle",5 - "Cx6_Unclassified_Vehicle", 6 - "Cx7_NotU' ...
  'sed_1", 7 - "Cx8_NotUsed_2", 8 - "Cx9_NotUsed_3", 9 - "CxA_NotUsed_4",' ...
  ' 10 - "CxB_NotUsed_5", 11 - "CxC_NotUsed_6", 12 - "CxD_NotUsed_7",13 -' ...
  ' "CxE_NotUsed_8", 14 - "CxF_NotUsed_9"'];
Ford_CmbbObjClass_D_Stat1.DocUnits = 'Cnt';
Ford_CmbbObjClass_D_Stat1.EngDT = enum.Ford_CmbbObjClass_D_Stat;
Ford_CmbbObjClass_D_Stat1.EngInit = Ford_CmbbObjClass_D_Stat.Cx0_Undetermined;
Ford_CmbbObjClass_D_Stat1.EngMin = Ford_CmbbObjClass_D_Stat.Cx0_Undetermined;
Ford_CmbbObjClass_D_Stat1.EngMax = Ford_CmbbObjClass_D_Stat.CxF_NotUsed_9;
Ford_CmbbObjClass_D_Stat1.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjClass_D_Stat1.ReadType = 'Rte';


Ford_CmbbObjColl_T_Actl = DataDict.IpSignal;
Ford_CmbbObjColl_T_Actl.LongName = 'Collision Mitigation By Braking Time To Collision';
Ford_CmbbObjColl_T_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Customer datatype should be used. Datatype:  F' ...
  'ord_CmbbObjColl_T_Actl.Source signal range: [0,125]. Elements are: 126' ...
  ' -"Cx7E_NoDataExists", 127 -"Cx7F_Faulty"'];
Ford_CmbbObjColl_T_Actl.DocUnits = 'Cnt';
Ford_CmbbObjColl_T_Actl.EngDT = dt.u08;
Ford_CmbbObjColl_T_Actl.EngInit = 126;
Ford_CmbbObjColl_T_Actl.EngMin = 0;
Ford_CmbbObjColl_T_Actl.EngMax = 127;
Ford_CmbbObjColl_T_Actl.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjColl_T_Actl.ReadType = 'Rte';


Ford_CmbbObjConfdnc_D_Stat1 = DataDict.IpSignal;
Ford_CmbbObjConfdnc_D_Stat1.LongName = 'Collision Mitigation By Braking Object Data Confidence Level';
Ford_CmbbObjConfdnc_D_Stat1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer datatype should be used. Datatype:  ' ...
  'Ford_CmbbObjConfdnc_D_Stat.Source signal range: [0,3]. Elements are: 0' ...
  '- "Cx0_NotDetermined", 1 - "Cx1_Low", 2 - "Cx2_Medium", 3 - "Cx3_High"' ...
  ''];
Ford_CmbbObjConfdnc_D_Stat1.DocUnits = 'Cnt';
Ford_CmbbObjConfdnc_D_Stat1.EngDT = enum.Ford_CmbbObjConfdnc_D_Stat;
Ford_CmbbObjConfdnc_D_Stat1.EngInit = Ford_CmbbObjConfdnc_D_Stat.Cx0_NotDetermined;
Ford_CmbbObjConfdnc_D_Stat1.EngMin = Ford_CmbbObjConfdnc_D_Stat.Cx0_NotDetermined;
Ford_CmbbObjConfdnc_D_Stat1.EngMax = Ford_CmbbObjConfdnc_D_Stat.Cx3_High;
Ford_CmbbObjConfdnc_D_Stat1.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjConfdnc_D_Stat1.ReadType = 'Rte';


Ford_CmbbObjDistLat_L_Actl = DataDict.IpSignal;
Ford_CmbbObjDistLat_L_Actl.LongName = 'Collision Mitigation By Braking Lateral Distance';
Ford_CmbbObjDistLat_L_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_CmbbObjDistLat_L_Actl.Source si' ...
  'gnal range: [0,509] Elements are: 510 - "Cx1FE_NoDataExists", 511 - "C' ...
  'x1FF_Faulty" '];
Ford_CmbbObjDistLat_L_Actl.DocUnits = 'Cnt';
Ford_CmbbObjDistLat_L_Actl.EngDT = dt.u16;
Ford_CmbbObjDistLat_L_Actl.EngInit = 510;
Ford_CmbbObjDistLat_L_Actl.EngMin = 0;
Ford_CmbbObjDistLat_L_Actl.EngMax = 511;
Ford_CmbbObjDistLat_L_Actl.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjDistLat_L_Actl.ReadType = 'Rte';


Ford_CmbbObjDistLong_L_Actl = DataDict.IpSignal;
Ford_CmbbObjDistLong_L_Actl.LongName = 'Collision Mitigation By Braking Longitudinal Distance';
Ford_CmbbObjDistLong_L_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_CmbbObjDistLong_L_Actl.Source s' ...
  'ignal range: [0,1021]. Elements are: 1022 - "Cx3FE_NoDataExist", 1023 ' ...
  '- "Cx3FF_Faulty"'];
Ford_CmbbObjDistLong_L_Actl.DocUnits = 'Cnt';
Ford_CmbbObjDistLong_L_Actl.EngDT = dt.u16;
Ford_CmbbObjDistLong_L_Actl.EngInit = 1022;
Ford_CmbbObjDistLong_L_Actl.EngMin = 0;
Ford_CmbbObjDistLong_L_Actl.EngMax = 1023;
Ford_CmbbObjDistLong_L_Actl.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjDistLong_L_Actl.ReadType = 'Rte';


Ford_CmbbObjRelLat_V_Actl = DataDict.IpSignal;
Ford_CmbbObjRelLat_V_Actl.LongName = 'Collision Mitigation By Braking Relative Lateral Velocity';
Ford_CmbbObjRelLat_V_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_CmbbObjRelLat_V_Actl.Source sig' ...
  'nal range: [0,509]. Elements are: 510 - "Cx1FE_NoDataExists", 511 - "C' ...
  'x1FF_Faulty"'];
Ford_CmbbObjRelLat_V_Actl.DocUnits = 'Cnt';
Ford_CmbbObjRelLat_V_Actl.EngDT = dt.u16;
Ford_CmbbObjRelLat_V_Actl.EngInit = 510;
Ford_CmbbObjRelLat_V_Actl.EngMin = 0;
Ford_CmbbObjRelLat_V_Actl.EngMax = 511;
Ford_CmbbObjRelLat_V_Actl.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjRelLat_V_Actl.ReadType = 'Rte';


Ford_CmbbObjRelLong_V_Actl = DataDict.IpSignal;
Ford_CmbbObjRelLong_V_Actl.LongName = 'Collision Mitigation By Braking Relative Longitudinal Velocity';
Ford_CmbbObjRelLong_V_Actl.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Datatype: Ford_CmbbObjRelLong_V_Actl.Source si' ...
  'gnal range: [0,1021]. Elements are: 1022 - "Cx3FE_NoDataExists", 1023 ' ...
  '- "Cx3FF_Faulty"'];
Ford_CmbbObjRelLong_V_Actl.DocUnits = 'Cnt';
Ford_CmbbObjRelLong_V_Actl.EngDT = dt.u16;
Ford_CmbbObjRelLong_V_Actl.EngInit = 1022;
Ford_CmbbObjRelLong_V_Actl.EngMin = 0;
Ford_CmbbObjRelLong_V_Actl.EngMax = 1023;
Ford_CmbbObjRelLong_V_Actl.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_CmbbObjRelLong_V_Actl.ReadType = 'Rte';


Ford_EsaEnbl_D2_Rq1 = DataDict.IpSignal;
Ford_EsaEnbl_D2_Rq1.LongName = 'Evasive Steer Assist Enabled Request';
Ford_EsaEnbl_D2_Rq1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer datatype should be used. Datatype:  ' ...
  'Ford_EsaEnbl_D2_Rq.Source signal range: [0,3]. Elements are: 0 - "Cx0_' ...
  'Disabled", 1 - "Cx1_Pending", 2 - "Cx2_Enabled", 3 - "Cx3_NotConfigure' ...
  'd"'];
Ford_EsaEnbl_D2_Rq1.DocUnits = 'Cnt';
Ford_EsaEnbl_D2_Rq1.EngDT = enum.Ford_EsaEnbl_D2_Rq;
Ford_EsaEnbl_D2_Rq1.EngInit = Ford_EsaEnbl_D2_Rq.Cx0_Disabled;
Ford_EsaEnbl_D2_Rq1.EngMin = Ford_EsaEnbl_D2_Rq.Cx0_Disabled;
Ford_EsaEnbl_D2_Rq1.EngMax = Ford_EsaEnbl_D2_Rq.Cx3_NotConfigured;
Ford_EsaEnbl_D2_Rq1.ReadIn = {'FordMsg3D7BusHiSpdPer1'};
Ford_EsaEnbl_D2_Rq1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehCllsnMtgtnByBrkgLatDstRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgLatDstRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance Raw';
FordVehCllsnMtgtnByBrkgLatDstRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Lateral Distance to' ...
  ' be used by EPS'];
FordVehCllsnMtgtnByBrkgLatDstRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLatDstRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgLatDstRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngInit = 510;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngMax = 511;
FordVehCllsnMtgtnByBrkgLatDstRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgLatDstRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgLatDstRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgLgtDstRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgLgtDstRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance Raw';
FordVehCllsnMtgtnByBrkgLgtDstRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Longitudinal Distan' ...
  'ceto be used by EPS'];
FordVehCllsnMtgtnByBrkgLgtDstRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLgtDstRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngInit = 1022;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngMax = 1023;
FordVehCllsnMtgtnByBrkgLgtDstRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgLgtDstRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgLgtDstRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Data Confidence Level Raw';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Object Data Confide' ...
  'nce Levelto be used by EPS'];
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngDT = enum.Ford_CmbbObjConfdnc_D_Stat;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngInit = Ford_CmbbObjConfdnc_D_Stat.Cx0_NotDetermined;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngMin = Ford_CmbbObjConfdnc_D_Stat.Cx0_NotDetermined;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngMax = Ford_CmbbObjConfdnc_D_Stat.Cx3_High;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgObjTypClassnRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Type Classification Raw';
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Object Type Classif' ...
  'icationto be used by EPS'];
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngDT = enum.Ford_CmbbObjClass_D_Stat;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngInit = Ford_CmbbObjClass_D_Stat.Cx0_Undetermined;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngMin = Ford_CmbbObjClass_D_Stat.Cx0_Undetermined;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngMax = Ford_CmbbObjClass_D_Stat.CxF_NotUsed_9;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgRelLatVelRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity Raw';
FordVehCllsnMtgtnByBrkgRelLatVelRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Relative Lateral Ve' ...
  'locity to be used by EPS'];
FordVehCllsnMtgtnByBrkgRelLatVelRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLatVelRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngInit = 510;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngMax = 511;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgRelLatVelRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgRelLgtVelRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity Raw';
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Relative Longitudin' ...
  'al Velocity to be used by EPS'];
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngInit = 1022;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngMax = 1023;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgTiToCllsnRaw = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision Raw';
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.Description = [...
  'Processed value of Collision Mitigation By Braking Time to Collision t' ...
  'o be used by EPS'];
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngInit = 126;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngMax = 127;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.WriteType = 'Rte';


FordVehEvasSteerAssiEnadReqRaw = DataDict.OpSignal;
FordVehEvasSteerAssiEnadReqRaw.LongName = 'Ford Vehicle Evasive Steer Assist Enabled Request Raw';
FordVehEvasSteerAssiEnadReqRaw.Description = [...
  'Processed value of Evasive Steer Assist Enable Request to be used by E' ...
  'PS'];
FordVehEvasSteerAssiEnadReqRaw.DocUnits = 'Cnt';
FordVehEvasSteerAssiEnadReqRaw.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehEvasSteerAssiEnadReqRaw.EngDT = enum.Ford_EsaEnbl_D2_Rq;
FordVehEvasSteerAssiEnadReqRaw.EngInit = Ford_EsaEnbl_D2_Rq.Cx0_Disabled;
FordVehEvasSteerAssiEnadReqRaw.EngMin = Ford_EsaEnbl_D2_Rq.Cx0_Disabled;
FordVehEvasSteerAssiEnadReqRaw.EngMax = Ford_EsaEnbl_D2_Rq.Cx3_NotConfigured;
FordVehEvasSteerAssiEnadReqRaw.TestTolerance = 0;
FordVehEvasSteerAssiEnadReqRaw.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehEvasSteerAssiEnadReqRaw.WriteType = 'Rte';


FordVehEvasSteerAssiImgProcrModlAVld = DataDict.OpSignal;
FordVehEvasSteerAssiImgProcrModlAVld.LongName = 'Ford Vehicle Evasive Steer Assist Image Processor Module A Valid';
FordVehEvasSteerAssiImgProcrModlAVld.Description = [...
  'FordVehEvasSteerAssiImgProcrModlAVld is set to true or false based on ' ...
  'following signal :Ford Vehicle Collision Mitigation By Braking Lateral' ...
  ' Distance Quality,Ford Vehicle Collision Mitigation By Braking Longitu' ...
  'dinal Distance Quality,Ford Vehicle Collision Mitigation By Braking Re' ...
  'lative Lateral Velocity Quality,Ford Vehicle Collision Mitigation By B' ...
  'raking Relative Longitudinal Velocity QualityAND Ford Vehicle Collisio' ...
  'n Mitigation By Braking Time To Collision Quality'];
FordVehEvasSteerAssiImgProcrModlAVld.DocUnits = 'Cnt';
FordVehEvasSteerAssiImgProcrModlAVld.SwcShoName = 'FordMsg3D7BusHiSpd';
FordVehEvasSteerAssiImgProcrModlAVld.EngDT = dt.lgc;
FordVehEvasSteerAssiImgProcrModlAVld.EngInit = 0;
FordVehEvasSteerAssiImgProcrModlAVld.EngMin = 0;
FordVehEvasSteerAssiImgProcrModlAVld.EngMax = 1;
FordVehEvasSteerAssiImgProcrModlAVld.TestTolerance = 0;
FordVehEvasSteerAssiImgProcrModlAVld.WrittenIn = {'FordMsg3D7BusHiSpdPer1'};
FordVehEvasSteerAssiImgProcrModlAVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd = DataDict.Calibration;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.LongName = 'Ford Message 3D7 Bus High Speed Image Processor Module A Valid Missing Threshold';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.EngVal = 500;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.EngMin = 0;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.EngMax = 6000;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.CustomerVisible = false;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.Online = false;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.Impact = 'H';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.GraphLink = {''};
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.Monotony = 'None';
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.MaxGrad = 0;
FordMsg3D7BusHiSpdImgProcrModlAVldMissThd.PortName = 'FordMsg3D7BusHiSpdImgProcrModlAVldMissThd';


FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Image Processor Module A Valid Passed Threshold';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to True'];
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.EngVal = 5000;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.Online = false;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.Impact = 'H';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd.PortName = 'FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd';


FordMsg3D7BusHiSpdLatDstInvldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Lateral Distance Invalid Failed Threshold';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Collision Mitigation By Braking Late' ...
  'ral Distance Invalid NTC'];
FordMsg3D7BusHiSpdLatDstInvldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.Online = false;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdLatDstInvldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdLatDstInvldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLatDstInvldFaildThd.PortName = 'FordMsg3D7BusHiSpdLatDstInvldFaildThd';


FordMsg3D7BusHiSpdLatDstInvldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Lateral Distance Invalid Passed Threshold';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Collision Mitigation By Braking Latera' ...
  'l Distance Invalid NTC'];
FordMsg3D7BusHiSpdLatDstInvldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.Online = false;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdLatDstInvldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdLatDstInvldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLatDstInvldPassdThd.PortName = 'FordMsg3D7BusHiSpdLatDstInvldPassdThd';


FordMsg3D7BusHiSpdLatDstRawVldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Lateral Distance Quality Valid Failed Threshold';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.Online = false;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.Impact = 'H';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLatDstRawVldFaildThd.PortName = 'FordMsg3D7BusHiSpdLatDstRawVldFaildThd';


FordMsg3D7BusHiSpdLgtDstInvldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Longitudinal Distance Invalid Failed Threshold';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Collision Mitigation By Braking Long' ...
  'itudinal Distance Invalid NTC'];
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.Online = false;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLgtDstInvldFaildThd.PortName = 'FordMsg3D7BusHiSpdLgtDstInvldFaildThd';


FordMsg3D7BusHiSpdLgtDstInvldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Longitudinal Distance Invalid Passed Threshold';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Collision Mitigation By Braking Longit' ...
  'udinal Distance Invalid NTC'];
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.Online = false;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLgtDstInvldPassdThd.PortName = 'FordMsg3D7BusHiSpdLgtDstInvldPassdThd';


FordMsg3D7BusHiSpdLgtDstRawVldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Longitudinal Distance Quality Valid Failed Threshold';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.Online = false;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.Impact = 'H';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdLgtDstRawVldFaildThd.PortName = 'FordMsg3D7BusHiSpdLgtDstRawVldFaildThd';


FordMsg3D7BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Missing Message Failed Threshold';
FordMsg3D7BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg3D7BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdMissMsgFaildThd.EngVal = 500;
FordMsg3D7BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdMissMsgFaildThd.Online = false;
FordMsg3D7BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdMissMsgFaildThd.PortName = 'FordMsg3D7BusHiSpdMissMsgFaildThd';


FordMsg3D7BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Missing Message Passed Threshold';
FordMsg3D7BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg3D7BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdMissMsgPassdThd.Online = false;
FordMsg3D7BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdMissMsgPassdThd.PortName = 'FordMsg3D7BusHiSpdMissMsgPassdThd';


FordMsg3D7BusHiSpdRelLatVelInvldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Lateral Velocity Invalid Failed Threshold';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Collision Mitigation By Braking Rela' ...
  'tive Lateral Velocity Invalid NTC'];
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.Online = false;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLatVelInvldFaildThd.PortName = 'FordMsg3D7BusHiSpdRelLatVelInvldFaildThd';


FordMsg3D7BusHiSpdRelLatVelInvldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Lateral Velocity Invalid Passed Threshold';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.Description = [...
  'Threshold to Reset the Ford Vehicle Collision Mitigation By Braking Re' ...
  'lative Lateral Velocity Invalid NTC'];
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.Online = false;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLatVelInvldPassdThd.PortName = 'FordMsg3D7BusHiSpdRelLatVelInvldPassdThd';


FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Lateral Velocity Quality Valid Failed Threshold';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.Online = false;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.Impact = 'H';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd.PortName = 'FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd';


FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Longitudinal Velocity Invalid Failed Threshold';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Collision Mitigation By Braking Rela' ...
  'tive Longitudinal Velocity Invalid NTC'];
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.Online = false;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd.PortName = 'FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd';


FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Longitudinal Velocity Invalid Passed Threshold';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.Description = [...
  'Threshold to Reset the Ford Vehicle Collision Mitigation By Braking Re' ...
  'lative Longitudinal Velocity Invalid NTC'];
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.Online = false;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd.PortName = 'FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd';


FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Relative Longitudinal Velocity Quality Valid Failed Threshold';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.Online = false;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.Impact = 'H';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd.PortName = 'FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd';


FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Time To Collision Invalid Failed Threshold';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Collision Mitigation By BrakingTime ' ...
  'To Collision Invalid NTC'];
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.Online = false;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.Impact = 'L';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd.PortName = 'FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd';


FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd = DataDict.Calibration;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.LongName = 'Ford Message 3D7 Bus High Speed Time To Collision Invalid Passed Threshold';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.Description = [...
  'Threshold to Reset the Ford Vehicle Collision Mitigation By BrakingTim' ...
  'e To Collision Invalid NTC'];
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.EngVal = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.EngMin = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.EngMax = 6000;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.CustomerVisible = false;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.Online = false;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.Impact = 'L';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.GraphLink = {''};
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.Monotony = 'None';
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.MaxGrad = 0;
FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd.PortName = 'FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd';


FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd = DataDict.Calibration;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.LongName = 'Ford Message 3D7 Bus High Speed Time to Collision Raw Valid Failed Threshold';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Evasive Steer Assist Image Processor' ...
  ' Module A Valid to False'];
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.EngDT = dt.u16;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.EngVal = 0;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.EngMin = 0;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.EngMax = 6000;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.Cardinality = 'Cmn';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.CustomerVisible = false;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.Online = false;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.Impact = 'H';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.GraphLink = {''};
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.Monotony = 'None';
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.MaxGrad = 0;
FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd.PortName = 'FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd';



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
ClrDiagcFlgProxyPrev = DataDict.PIM;
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagc Flag Proxy';
ClrDiagcFlgProxyPrev.Description = 'Clear Diagc Flag Proxy';
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


EvasSteerAssiImgProcrModlAVldPassdRefTi = DataDict.PIM;
EvasSteerAssiImgProcrModlAVldPassdRefTi.LongName = 'Evasive Steer Assist Image Processor Module A Valid Passed Reference Time';
EvasSteerAssiImgProcrModlAVldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Evasive Steer Assist Image Processor Module A V' ...
  'alidwill increment or reset based on the conditions'];
EvasSteerAssiImgProcrModlAVldPassdRefTi.DocUnits = 'Cnt';
EvasSteerAssiImgProcrModlAVldPassdRefTi.EngDT = dt.u32;
EvasSteerAssiImgProcrModlAVldPassdRefTi.EngMin = 0;
EvasSteerAssiImgProcrModlAVldPassdRefTi.EngMax = 4294967295;
EvasSteerAssiImgProcrModlAVldPassdRefTi.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance Invalid Failed Reference Time';
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance Invalid Passed Reference Time';
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLatDstRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLatDstRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance Raw Previous';
FordVehCllsnMtgtnByBrkgLatDstRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Collision Mitigation By Br' ...
  'aking Lateral Distance Raw'];
FordVehCllsnMtgtnByBrkgLatDstRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLatDstRawPrev.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLatDstRawPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgLatDstRawPrev.EngMax = 511;
FordVehCllsnMtgtnByBrkgLatDstRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance Invalid Failed Reference Time';
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance Invalid Passed Reference Time';
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgLgtDstRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance Raw Previous';
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Collision Mitigation By Br' ...
  'aking Longitudinal Distance Raw'];
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.EngMax = 1023;
FordVehCllsnMtgtnByBrkgLgtDstRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Data Confidence Level Raw Previous';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Collision Mitigation By Br' ...
  'aking Object Data Confidence Level Raw'];
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.EngDT = enum.Ford_CmbbObjConfdnc_D_Stat;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.EngMin = Ford_CmbbObjConfdnc_D_Stat.Cx0_NotDetermined;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.EngMax = Ford_CmbbObjConfdnc_D_Stat.Cx3_High;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Type Classification Raw Previous';
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Collision Mitigation By Br' ...
  'aking Object Type Classification Raw'];
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.EngDT = enum.Ford_CmbbObjClass_D_Stat;
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.EngMin = Ford_CmbbObjClass_D_Stat.Cx0_Undetermined;
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.EngMax = Ford_CmbbObjClass_D_Stat.CxF_NotUsed_9;
FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity Invalid Failed Reference Time';
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity Invalid Passed Reference Time';
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLatVelRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity Raw Previous';
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.Description = [...
  'Used to previous value of Ford Vehicle Collision Mitigation By Braking' ...
  ' Relative Lateral Velocity Raw Previous'];
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.EngMax = 511;
FordVehCllsnMtgtnByBrkgRelLatVelRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity Invalid Failed Reference Time';
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity Invalid Passed Reference Time';
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity Raw Previous';
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Collision Mitigation By Br' ...
  'aking Relative Longitudinal Velocity Raw Previous'];
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.EngMax = 1023;
FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision Invalid Failed Reference Time';
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi = DataDict.PIM;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision Invalid Passed Reference Time';
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.EngDT = dt.u32;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.EngMin = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.EngMax = 4294967295;
FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision Raw Previous';
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Collision Mitigation' ...
  ' By Braking Time To Collision Raw'];
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.EngMax = 127;
FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev.InitRowCol = [1  1];


FordVehEvasSteerAssiEnadReqRawPrev = DataDict.PIM;
FordVehEvasSteerAssiEnadReqRawPrev.LongName = 'Ford Vehicle Evasive Steer Assist Enabled Request Raw Previous';
FordVehEvasSteerAssiEnadReqRawPrev.Description = [...
  'Used to hold previous value of outputFord Vehicle Evasive Steer Assist' ...
  ' Enabled Request Raw'];
FordVehEvasSteerAssiEnadReqRawPrev.DocUnits = 'Cnt';
FordVehEvasSteerAssiEnadReqRawPrev.EngDT = enum.Ford_EsaEnbl_D2_Rq;
FordVehEvasSteerAssiEnadReqRawPrev.EngMin = Ford_EsaEnbl_D2_Rq.Cx0_Disabled;
FordVehEvasSteerAssiEnadReqRawPrev.EngMax = Ford_EsaEnbl_D2_Rq.Cx3_NotConfigured;
FordVehEvasSteerAssiEnadReqRawPrev.InitRowCol = [1  1];


FordVehEvasSteerAssiImgProcrModlAVldPrev = DataDict.PIM;
FordVehEvasSteerAssiImgProcrModlAVldPrev.LongName = 'Ford Vehicle Evasive Steer Assist Image Processor Module A Valid Previous';
FordVehEvasSteerAssiImgProcrModlAVldPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Evasive Steer Assist' ...
  ' Image Processor Module A Valid'];
FordVehEvasSteerAssiImgProcrModlAVldPrev.DocUnits = 'Cnt';
FordVehEvasSteerAssiImgProcrModlAVldPrev.EngDT = dt.lgc;
FordVehEvasSteerAssiImgProcrModlAVldPrev.EngMin = 0;
FordVehEvasSteerAssiImgProcrModlAVldPrev.EngMax = 1;
FordVehEvasSteerAssiImgProcrModlAVldPrev.InitRowCol = [1  1];


FordVehMsg3D7Miss = DataDict.PIM;
FordVehMsg3D7Miss.LongName = 'Ford Vehicle Message 3D7 Miss';
FordVehMsg3D7Miss.Description = [...
  'Used to hold value of Ford Vehicle message 3D7 miss'];
FordVehMsg3D7Miss.DocUnits = 'Cnt';
FordVehMsg3D7Miss.EngDT = dt.lgc;
FordVehMsg3D7Miss.EngMin = 0;
FordVehMsg3D7Miss.EngMax = 1;
FordVehMsg3D7Miss.InitRowCol = [1  1];


ImgProcrModlAVldMissRefTi = DataDict.PIM;
ImgProcrModlAVldMissRefTi.LongName = 'Image Processor Module A Valid Missing Reference Time';
ImgProcrModlAVldMissRefTi.Description = [...
  'Timer for Ford Vehicle Collision Mitigation By Braking Time to Collisi' ...
  'on Invalid will increment or reset based on the conditions'];
ImgProcrModlAVldMissRefTi.DocUnits = 'Cnt';
ImgProcrModlAVldMissRefTi.EngDT = dt.u32;
ImgProcrModlAVldMissRefTi.EngMin = 0;
ImgProcrModlAVldMissRefTi.EngMax = 4294967295;
ImgProcrModlAVldMissRefTi.InitRowCol = [1  1];


LatDstRawVldFaildRefTi = DataDict.PIM;
LatDstRawVldFaildRefTi.LongName = 'Lateral Distance Raw Valid Failed Reference Time';
LatDstRawVldFaildRefTi.Description = [...
  'Timer to set Ford Vehicle Evasive Steer Assist Image Processor Module ' ...
  'A Valid to false'];
LatDstRawVldFaildRefTi.DocUnits = 'Cnt';
LatDstRawVldFaildRefTi.EngDT = dt.u32;
LatDstRawVldFaildRefTi.EngMin = 0;
LatDstRawVldFaildRefTi.EngMax = 4294967295;
LatDstRawVldFaildRefTi.InitRowCol = [1  1];


LgtDstRawVldFaildRefTi = DataDict.PIM;
LgtDstRawVldFaildRefTi.LongName = 'Longitudinal Distance Raw Valid Failed Reference Time';
LgtDstRawVldFaildRefTi.Description = [...
  'Timer to set Ford Vehicle Evasive Steer Assist Image Processor Module ' ...
  'A Valid to false'];
LgtDstRawVldFaildRefTi.DocUnits = 'Cnt';
LgtDstRawVldFaildRefTi.EngDT = dt.u32;
LgtDstRawVldFaildRefTi.EngMin = 0;
LgtDstRawVldFaildRefTi.EngMax = 4294967295;
LgtDstRawVldFaildRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];


RelLatVelRawVldFaildRefTi = DataDict.PIM;
RelLatVelRawVldFaildRefTi.LongName = 'Relative Lateral Velocity Raw Valid Failed Reference Time';
RelLatVelRawVldFaildRefTi.Description = [...
  'Timer to set Ford Vehicle Evasive Steer Assist Image Processor Module ' ...
  'A Valid to false'];
RelLatVelRawVldFaildRefTi.DocUnits = 'Cnt';
RelLatVelRawVldFaildRefTi.EngDT = dt.u32;
RelLatVelRawVldFaildRefTi.EngMin = 0;
RelLatVelRawVldFaildRefTi.EngMax = 4294967295;
RelLatVelRawVldFaildRefTi.InitRowCol = [1  1];


RelLgtVelRawVldFaildRefTi = DataDict.PIM;
RelLgtVelRawVldFaildRefTi.LongName = 'Relative Longitudinal Velocity Raw ValidFailed Reference Time';
RelLgtVelRawVldFaildRefTi.Description = [...
  'Timer to set Ford Vehicle Evasive Steer Assist Image Processor Module ' ...
  'A Valid to false'];
RelLgtVelRawVldFaildRefTi.DocUnits = 'Cnt';
RelLgtVelRawVldFaildRefTi.EngDT = dt.u32;
RelLgtVelRawVldFaildRefTi.EngMin = 0;
RelLgtVelRawVldFaildRefTi.EngMax = 4294967295;
RelLgtVelRawVldFaildRefTi.InitRowCol = [1  1];


TiToCllsnRawVldFaildRefTi = DataDict.PIM;
TiToCllsnRawVldFaildRefTi.LongName = 'Time to Collision Raw Valid Failed Reference Time';
TiToCllsnRawVldFaildRefTi.Description = [...
  'Timer to set Ford Vehicle Evasive Steer Assist Image Processor Module ' ...
  'A Valid to false'];
TiToCllsnRawVldFaildRefTi.DocUnits = 'Cnt';
TiToCllsnRawVldFaildRefTi.EngDT = dt.u32;
TiToCllsnRawVldFaildRefTi.EngMin = 0;
TiToCllsnRawVldFaildRefTi.EngMax = 4294967295;
TiToCllsnRawVldFaildRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus Hi Speed Fixed Time Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = [...
  'Pass constant value 5000 if EpsLifeCycMod is one'];
BUSHISPDFIXDTITHD_MILLISEC_U16.DocUnits = 'MilliSec';
BUSHISPDFIXDTITHD_MILLISEC_U16.EngDT = dt.u16;
BUSHISPDFIXDTITHD_MILLISEC_U16.EngVal = 5000;
BUSHISPDFIXDTITHD_MILLISEC_U16.Define = 'Local';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ueis multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


DEBSTEP_CNT_U16 = DataDict.Constant;
DEBSTEP_CNT_U16.LongName = 'Debounce Step';
DEBSTEP_CNT_U16.Description = [...
  'Used for Set the Delay to Set or Clear Fault'];
DEBSTEP_CNT_U16.DocUnits = 'Cnt';
DEBSTEP_CNT_U16.EngDT = dt.u16;
DEBSTEP_CNT_U16.EngVal = 65535;
DEBSTEP_CNT_U16.Define = 'Local';


DSTRAWMINVAL_CNT_U16 = DataDict.Constant;
DSTRAWMINVAL_CNT_U16.LongName = 'Distance Raw Minimum Value';
DSTRAWMINVAL_CNT_U16.Description = [...
  'It is the minimum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Longitudinal Distance Raw and Ford Vehicle Collision Mitigatio' ...
  'n By Braking Lateral Distance Raw are limited'];
DSTRAWMINVAL_CNT_U16.DocUnits = 'Cnt';
DSTRAWMINVAL_CNT_U16.EngDT = dt.u16;
DSTRAWMINVAL_CNT_U16.EngVal = 0;
DSTRAWMINVAL_CNT_U16.Define = 'Local';


FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16 = DataDict.Constant;
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.LongName = ' Ford Vehicle Collision Mitigation By Braking Lateral Distance Raw Threshold';
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Time to Collision Raw and to set No Data Exist state for Ford Vehicle ' ...
  'Collision Mitigation By Braking Time to Collision Quality'];
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.DocUnits = 'Cnt';
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.EngDT = dt.u16;
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.EngVal = 509;
FORDVEHCLLSNMTGTNBYBRKGLATRAWTHD_CNT_U16.Define = 'Local';


FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16 = DataDict.Constant;
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.LongName = ' Ford Vehicle Collision Mitigation By Braking Lateral Distance Raw Threshold';
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Time to Collision Raw and to set No Data Exist state for Ford Vehicle ' ...
  'Collision Mitigation By Braking Time to Collision Quality'];
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.DocUnits = 'Cnt';
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.EngDT = dt.u16;
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.EngVal = 1021;
FORDVEHCLLSNMTGTNBYBRKGLGTRAWTHD_CNT_U16.Define = 'Local';


FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16 = DataDict.Constant;
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.LongName = ' Ford Vehicle Collision Mitigation By Braking Lateral Distance Raw Threshold';
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Time to Collision Raw and to set No Data Exist state for Ford Vehicle ' ...
  'Collision Mitigation By Braking Time to Collision Quality'];
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.DocUnits = 'Cnt';
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.EngDT = dt.u08;
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.EngVal = 125;
FORDVEHCLLSNMTGTNBYBRKGTITOCLLSNRAWTHD_CNT_U16.Define = 'Local';


LATDSTRAWMAXVAL_CNT_U16 = DataDict.Constant;
LATDSTRAWMAXVAL_CNT_U16.LongName = 'Lateral Distance Raw Maximum Value';
LATDSTRAWMAXVAL_CNT_U16.Description = [...
  'It is the maximum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Lateral Distance Raw is limited and to set Fault state for For' ...
  'd Vehicle Collision Mitigation By Braking Lateral Distance Quality'];
LATDSTRAWMAXVAL_CNT_U16.DocUnits = 'Cnt';
LATDSTRAWMAXVAL_CNT_U16.EngDT = dt.u16;
LATDSTRAWMAXVAL_CNT_U16.EngVal = 511;
LATDSTRAWMAXVAL_CNT_U16.Define = 'Local';


LATDSTRAWNODATAEXIST_CNT_U16 = DataDict.Constant;
LATDSTRAWNODATAEXIST_CNT_U16.LongName = 'Lateral Distance Raw No Data Exsist';
LATDSTRAWNODATAEXIST_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Lateral Distance Raw and to set NoDataExist state for Ford Vehicle Col' ...
  'lision Mitigation By Braking Lateral Distance Quality'];
LATDSTRAWNODATAEXIST_CNT_U16.DocUnits = 'Cnt';
LATDSTRAWNODATAEXIST_CNT_U16.EngDT = dt.u16;
LATDSTRAWNODATAEXIST_CNT_U16.EngVal = 510;
LATDSTRAWNODATAEXIST_CNT_U16.Define = 'Local';


LGTDSTRAWMAXVAL_CNT_U16 = DataDict.Constant;
LGTDSTRAWMAXVAL_CNT_U16.LongName = 'Longitudinal Distance Raw Maximum Value ';
LGTDSTRAWMAXVAL_CNT_U16.Description = [...
  'It is the maximum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Longitudinal Distance Raw is limited and to set the Fault stat' ...
  'e for Ford Vehicle Collision Mitigation By Braking Longitudinal Distan' ...
  'ce Quality'];
LGTDSTRAWMAXVAL_CNT_U16.DocUnits = 'Cnt';
LGTDSTRAWMAXVAL_CNT_U16.EngDT = dt.u16;
LGTDSTRAWMAXVAL_CNT_U16.EngVal = 1023;
LGTDSTRAWMAXVAL_CNT_U16.Define = 'Local';


LGTDSTRAWNODATAEXIST_CNT_U16 = DataDict.Constant;
LGTDSTRAWNODATAEXIST_CNT_U16.LongName = 'Longitudinal Distance Raw No Data Exsist';
LGTDSTRAWNODATAEXIST_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Longitudinal Distance Raw and to set the NoDataExist state for Ford Ve' ...
  'hicle Collision Mitigation By Braking Longitudinal Distance Quality'];
LGTDSTRAWNODATAEXIST_CNT_U16.DocUnits = 'Cnt';
LGTDSTRAWNODATAEXIST_CNT_U16.EngDT = dt.u16;
LGTDSTRAWNODATAEXIST_CNT_U16.EngVal = 1022;
LGTDSTRAWNODATAEXIST_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


RELLATVELRAWMAXVAL_CNT_U16 = DataDict.Constant;
RELLATVELRAWMAXVAL_CNT_U16.LongName = 'Relative Lateral Velocity Raw Maximum Value';
RELLATVELRAWMAXVAL_CNT_U16.Description = [...
  'It is the maximum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Relative Lateral Velocity Raw is limited and to set Fault stat' ...
  'e for Ford Vehicle Collision Mitigation By Braking Relative Lateral Ve' ...
  'locity Quality '];
RELLATVELRAWMAXVAL_CNT_U16.DocUnits = 'Cnt';
RELLATVELRAWMAXVAL_CNT_U16.EngDT = dt.u16;
RELLATVELRAWMAXVAL_CNT_U16.EngVal = 511;
RELLATVELRAWMAXVAL_CNT_U16.Define = 'Local';


RELLATVELRAWNODATAEXIST_CNT_U16 = DataDict.Constant;
RELLATVELRAWNODATAEXIST_CNT_U16.LongName = 'Relative Lateral Velocity Raw No Data Exsist';
RELLATVELRAWNODATAEXIST_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Relative Lateral Velocity Raw and to set NoDataExist state for Ford Ve' ...
  'hicle Collision Mitigation By Braking Relative Lateral Velocity Qualit' ...
  'y '];
RELLATVELRAWNODATAEXIST_CNT_U16.DocUnits = 'Cnt';
RELLATVELRAWNODATAEXIST_CNT_U16.EngDT = dt.u16;
RELLATVELRAWNODATAEXIST_CNT_U16.EngVal = 510;
RELLATVELRAWNODATAEXIST_CNT_U16.Define = 'Local';


RELLGTVELRAWMAXVAL_CNT_U16 = DataDict.Constant;
RELLGTVELRAWMAXVAL_CNT_U16.LongName = 'Longitudinal Maximum Value ';
RELLGTVELRAWMAXVAL_CNT_U16.Description = [...
  'It is the maximum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Relative Longitudinal Velocity Raw is limited and to set the F' ...
  'ault state for Ford Vehicle Collision Mitigation By Braking Relative L' ...
  'ongitudinal Velocity Quality'];
RELLGTVELRAWMAXVAL_CNT_U16.DocUnits = 'Cnt';
RELLGTVELRAWMAXVAL_CNT_U16.EngDT = dt.u16;
RELLGTVELRAWMAXVAL_CNT_U16.EngVal = 1023;
RELLGTVELRAWMAXVAL_CNT_U16.Define = 'Local';


RELLGTVELRAWNODATAEXIST_CNT_U16 = DataDict.Constant;
RELLGTVELRAWNODATAEXIST_CNT_U16.LongName = 'Relative Longitudinal Velocity Raw No Data Exsist';
RELLGTVELRAWNODATAEXIST_CNT_U16.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Relative Longitudinal Velocity Raw and to set the NoDataExist state fo' ...
  'r Ford Vehicle Collision Mitigation By Braking Relative Longitudinal V' ...
  'elocity Quality'];
RELLGTVELRAWNODATAEXIST_CNT_U16.DocUnits = 'Cnt';
RELLGTVELRAWNODATAEXIST_CNT_U16.EngDT = dt.u16;
RELLGTVELRAWNODATAEXIST_CNT_U16.EngVal = 1022;
RELLGTVELRAWNODATAEXIST_CNT_U16.Define = 'Local';


TITOCLLSNRAWMAX_CNT_U08 = DataDict.Constant;
TITOCLLSNRAWMAX_CNT_U08.LongName = 'Time to Collision Raw Maximum';
TITOCLLSNRAWMAX_CNT_U08.Description = [...
  'It is the Max value to which Ford Vehicle Collision Mitigation By Brak' ...
  'ing Time to Collision Raw is limited and to set Fault state for Ford V' ...
  'ehicle Collision Mitigation By Braking Time to Collision Quality'];
TITOCLLSNRAWMAX_CNT_U08.DocUnits = 'Cnt';
TITOCLLSNRAWMAX_CNT_U08.EngDT = dt.u08;
TITOCLLSNRAWMAX_CNT_U08.EngVal = 127;
TITOCLLSNRAWMAX_CNT_U08.Define = 'Local';


TITOCLLSNRAWMIN_CNT_U08 = DataDict.Constant;
TITOCLLSNRAWMIN_CNT_U08.LongName = 'Time to Collision Raw Minimum';
TITOCLLSNRAWMIN_CNT_U08.Description = [...
  'It is the minimum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Time to Collision Raw is limited'];
TITOCLLSNRAWMIN_CNT_U08.DocUnits = 'Cnt';
TITOCLLSNRAWMIN_CNT_U08.EngDT = dt.u08;
TITOCLLSNRAWMIN_CNT_U08.EngVal = 0;
TITOCLLSNRAWMIN_CNT_U08.Define = 'Local';


TITOCLLSNRAWNODATAEXIST_CNT_U08 = DataDict.Constant;
TITOCLLSNRAWNODATAEXIST_CNT_U08.LongName = 'Time to Collision Raw No Data Exist';
TITOCLLSNRAWNODATAEXIST_CNT_U08.Description = [...
  'It is used to initialize Ford Vehicle Collision Mitigation By Braking ' ...
  'Time to Collision Raw and to set No Data Exist state for Ford Vehicle ' ...
  'Collision Mitigation By Braking Time to Collision Quality'];
TITOCLLSNRAWNODATAEXIST_CNT_U08.DocUnits = 'Cnt';
TITOCLLSNRAWNODATAEXIST_CNT_U08.EngDT = dt.u08;
TITOCLLSNRAWNODATAEXIST_CNT_U08.EngVal = 126;
TITOCLLSNRAWNODATAEXIST_CNT_U08.Define = 'Local';


VELRAWMINVAL_CNT_U16 = DataDict.Constant;
VELRAWMINVAL_CNT_U16.LongName = 'Velocity Raw Minimum Value';
VELRAWMINVAL_CNT_U16.Description = [...
  'It is the minimum value to which Ford Vehicle Collision Mitigation By ' ...
  'Braking Relative Lateral Velocity Raw and Ford Vehicle Collision Mitig' ...
  'ation By Braking Relative Longitudinal Velocity Raw are limited'];
VELRAWMINVAL_CNT_U16.DocUnits = 'Cnt';
VELRAWMINVAL_CNT_U16.EngDT = dt.u16;
VELRAWMINVAL_CNT_U16.EngVal = 0;
VELRAWMINVAL_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg3D7MissMsg = DataDict.NTC;
FordMsg3D7MissMsg.NtcNr = NtcNr1.NTCNR_0X15A;
FordMsg3D7MissMsg.NtcTyp = 'None';
FordMsg3D7MissMsg.LongName = 'Ford Message 3D7 Missing Message';
FordMsg3D7MissMsg.Description = 'Ford Message Missing Message Diagnostic';
FordMsg3D7MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg3D7MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg3D7MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg3D7MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehCllsnMtgtnByBrkgLatDstInvld = DataDict.NTC;
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcNr = NtcNr1.NTCNR_0X15C;
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcTyp = 'None';
FordVehCllsnMtgtnByBrkgLatDstInvld.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance Invalid';
FordVehCllsnMtgtnByBrkgLatDstInvld.Description = 'Ford Message 3D7 Invalid Diagnostic';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLatDstInvld.NtcStsLockdThisIgnCyc = 0;


FordVehCllsnMtgtnByBrkgLgtDstInvld = DataDict.NTC;
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcNr = NtcNr1.NTCNR_0X15B;
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcTyp = 'None';
FordVehCllsnMtgtnByBrkgLgtDstInvld.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance Invalid';
FordVehCllsnMtgtnByBrkgLgtDstInvld.Description = 'Ford Message 3D7 Invalid Diagnostic';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehCllsnMtgtnByBrkgLgtDstInvld.NtcStsLockdThisIgnCyc = 0;


FordVehCllsnMtgtnByBrkgRelLatVelInvld = DataDict.NTC;
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcNr = NtcNr1.NTCNR_0X15E;
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcTyp = 'None';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity Invalid';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.Description = 'Ford Message 3D7 Invalid Diagnostic';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLatVelInvld.NtcStsLockdThisIgnCyc = 0;


FordVehCllsnMtgtnByBrkgRelLgtVelInvld = DataDict.NTC;
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcNr = NtcNr1.NTCNR_0X15D;
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcTyp = 'None';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity Invalid';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.Description = 'Ford Message 3D7 Invalid Diagnostic';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehCllsnMtgtnByBrkgRelLgtVelInvld.NtcStsLockdThisIgnCyc = 0;


FordVehCllsnMtgtnByBrkgTiToCllsnInvld = DataDict.NTC;
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcNr = NtcNr1.NTCNR_0X15F;
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcTyp = 'None';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision Invalid';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.Description = 'Ford Message 3D7 Invalid Diagnostic';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehCllsnMtgtnByBrkgTiToCllsnInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
