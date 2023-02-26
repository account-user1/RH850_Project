%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 03-May-2018 11:42:28       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM124A = DataDict.FDD;
MM124A.Version = '2.0.X';
MM124A.LongName = 'Ford Message 077 Bus High Speed';
MM124A.ShoName  = 'FordMsg077BusHiSpd';
MM124A.DesignASIL = 'B';
MM124A.Description = [...
  'The purpose of the Ford Message 077 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Torq' ...
  'ue Steer Compensation, Brake Oscillation Reduction, Lane Keep Assist, ' ...
  'Traffic Jam Assist, Lane Centering Assist, Pull Drift Compensation, Tr' ...
  'ailer Backup Assistance, and Evasive Steering Assist function from CAN' ...
  '. The Ford Message 077 function will perform the missing message and s' ...
  'ignal invalid diagnostics as well as provide a validity flag for the s' ...
  'ignal values and received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg077BusHiSpdInit1 = DataDict.Runnable;
FordMsg077BusHiSpdInit1.Context = 'Rte';
FordMsg077BusHiSpdInit1.TimeStep = 0;
FordMsg077BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg077BusHiSpdPer1 = DataDict.Runnable;
FordMsg077BusHiSpdPer1.Context = 'Rte';
FordMsg077BusHiSpdPer1.TimeStep = 0.01;
FordMsg077BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond '];

ComIPduCallout_BrakeSnData_3_FD1 = DataDict.SrvRunnable;
ComIPduCallout_BrakeSnData_3_FD1.Context = 'NonRte';
ComIPduCallout_BrakeSnData_3_FD1.Description = [...
  'server runnable used to notify the message is received.'];
ComIPduCallout_BrakeSnData_3_FD1.Return = DataDict.CSReturn;
ComIPduCallout_BrakeSnData_3_FD1.Return.Type = 'None';
ComIPduCallout_BrakeSnData_3_FD1.Return.Min = [];
ComIPduCallout_BrakeSnData_3_FD1.Return.Max = [];
ComIPduCallout_BrakeSnData_3_FD1.Return.TestTolerance = [];
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).Name = 'TrailerAid';
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BrakeSnData_3_FD1.Arguments(1).Description = [...
  'This signal notifies that the message is received successfully.'];

ComTimeoutNotification_VehLatComp_A_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_VehLatComp_A_Actl.Context = 'NonRte';
ComTimeoutNotification_VehLatComp_A_Actl.Description = [...
  'server runnable used to notify the message timeout has happened.'];
ComTimeoutNotification_VehLatComp_A_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_VehLatComp_A_Actl.Return.Type = 'None';
ComTimeoutNotification_VehLatComp_A_Actl.Return.Min = [];
ComTimeoutNotification_VehLatComp_A_Actl.Return.Max = [];
ComTimeoutNotification_VehLatComp_A_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg077BusHiSpdInit1','FordMsg077BusHiSpdPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time fromthe SimnTi value obtained at root laye' ...
  'r of model and gives the RefTmr.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg077BusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time fromSimnTi value, handles counter wrapping' ...
  ', and subtracts RefTmr,provides the TiSpan'];
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
SetNtcSts.CallLocation = {'FordMsg077BusHiSpdPer1'};
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
FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 to enable the diagnostics'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 0;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordClrDiagcFlgProxy = DataDict.IpSignal;
FordClrDiagcFlgProxy.LongName = 'Clear Diagnostic Flag Proxy';
FordClrDiagcFlgProxy.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordClrDiagcFlgProxy.DocUnits = 'Cnt';
FordClrDiagcFlgProxy.EngDT = dt.lgc;
FordClrDiagcFlgProxy.EngInit = 0;
FordClrDiagcFlgProxy.EngMin = 0;
FordClrDiagcFlgProxy.EngMax = 1;
FordClrDiagcFlgProxy.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordClrDiagcFlgProxy.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Electric Power Steering Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Evasive Steering Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordLaneKeepAssiEnad = DataDict.IpSignal;
FordLaneKeepAssiEnad.LongName = 'Lane Keep Assist Enabled';
FordLaneKeepAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordLaneKeepAssiEnad.DocUnits = 'Cnt';
FordLaneKeepAssiEnad.EngDT = dt.lgc;
FordLaneKeepAssiEnad.EngInit = 0;
FordLaneKeepAssiEnad.EngMin = 0;
FordLaneKeepAssiEnad.EngMax = 1;
FordLaneKeepAssiEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordLaneKeepAssiEnad.ReadType = 'Rte';


FordPullDriftCmpEnad = DataDict.IpSignal;
FordPullDriftCmpEnad.LongName = 'Pull Drift Compensation Enabled';
FordPullDriftCmpEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordPullDriftCmpEnad.DocUnits = 'Cnt';
FordPullDriftCmpEnad.EngDT = dt.lgc;
FordPullDriftCmpEnad.EngInit = 0;
FordPullDriftCmpEnad.EngMin = 0;
FordPullDriftCmpEnad.EngMax = 1;
FordPullDriftCmpEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordPullDriftCmpEnad.ReadType = 'Rte';


FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Torque Steer Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordTqSteerCmpEnad.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 0;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Trailer Backup Assistance Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg077BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_VehLatComp_A_Actl = DataDict.IpSignal;
Ford_VehLatComp_A_Actl.LongName = 'Vehicle Lateral Acceleration Compensated';
Ford_VehLatComp_A_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehLatComp_A_Actl.Ele' ...
  'ments are: 0-1021 - "Regular Integer" , 1022 - "Cx3FE_NoDataExists"102' ...
  '3 - "Cx3FF_Fault"'];
Ford_VehLatComp_A_Actl.DocUnits = 'Cnt';
Ford_VehLatComp_A_Actl.EngDT = dt.u16;
Ford_VehLatComp_A_Actl.EngInit = 1022;
Ford_VehLatComp_A_Actl.EngMin = 0;
Ford_VehLatComp_A_Actl.EngMax = 1023;
Ford_VehLatComp_A_Actl.ReadIn = {'FordMsg077BusHiSpdPer1'};
Ford_VehLatComp_A_Actl.ReadType = 'Rte';


Ford_VehLongComp_A_Actl = DataDict.IpSignal;
Ford_VehLongComp_A_Actl.LongName = 'Vehicle Longitudinal Acceleration Compensated';
Ford_VehLongComp_A_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehLongComp_A_Actl.El' ...
  'ements are: 0-1021 - "Regular Integer" , 1022 - "Cx3FE_NoDataExists"10' ...
  '23 - "Cx3FF_Fault"'];
Ford_VehLongComp_A_Actl.DocUnits = 'Cnt';
Ford_VehLongComp_A_Actl.EngDT = dt.u16;
Ford_VehLongComp_A_Actl.EngInit = 1022;
Ford_VehLongComp_A_Actl.EngMin = 0;
Ford_VehLongComp_A_Actl.EngMax = 1023;
Ford_VehLongComp_A_Actl.ReadIn = {'FordMsg077BusHiSpdPer1'};
Ford_VehLongComp_A_Actl.ReadType = 'Rte';


Ford_VehOverGnd_V_Est = DataDict.IpSignal;
Ford_VehOverGnd_V_Est.LongName = 'Vehicle Speed Over Ground';
Ford_VehOverGnd_V_Est.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehOverGnd_V_Est.Elem' ...
  'ents are: 0-65533 - "Regular Integer" , 65534 - "CxFFFE_Unknown"65535 ' ...
  '- "CxFFFF_Invalid"'];
Ford_VehOverGnd_V_Est.DocUnits = 'Cnt';
Ford_VehOverGnd_V_Est.EngDT = dt.u16;
Ford_VehOverGnd_V_Est.EngInit = 0;
Ford_VehOverGnd_V_Est.EngMin = 0;
Ford_VehOverGnd_V_Est.EngMax = 65535;
Ford_VehOverGnd_V_Est.ReadIn = {'FordMsg077BusHiSpdPer1'};
Ford_VehOverGnd_V_Est.ReadType = 'Rte';


Ford_VehYawComp_W_Actl = DataDict.IpSignal;
Ford_VehYawComp_W_Actl.LongName = 'Vehicle Yaw Rate Compensated';
Ford_VehYawComp_W_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehYawComp_W_Actl.Ele' ...
  'ments are: 0-4093 - "Regular Integer" , 4094 - "CxFFE_NoDataExists"409' ...
  '5 - "CxFFF_Fault"'];
Ford_VehYawComp_W_Actl.DocUnits = 'Cnt';
Ford_VehYawComp_W_Actl.EngDT = dt.u16;
Ford_VehYawComp_W_Actl.EngInit = 4094;
Ford_VehYawComp_W_Actl.EngMin = 0;
Ford_VehYawComp_W_Actl.EngMax = 4095;
Ford_VehYawComp_W_Actl.ReadIn = {'FordMsg077BusHiSpdPer1'};
Ford_VehYawComp_W_Actl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehLatACmpd = DataDict.OpSignal;
FordVehLatACmpd.LongName = 'Ford Vehicle Lateral Acceleration Compensated';
FordVehLatACmpd.Description = [...
  'Processed value of Ford Vehicle Lateral Acceleration Compensated Raw t' ...
  'o be used by EPS'];
FordVehLatACmpd.DocUnits = 'MtrPerSecSqd';
FordVehLatACmpd.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLatACmpd.EngDT = dt.float32;
FordVehLatACmpd.EngInit = 17.835;
FordVehLatACmpd.EngMin = -17.9;
FordVehLatACmpd.EngMax = 17.835;
FordVehLatACmpd.TestTolerance = 0;
FordVehLatACmpd.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLatACmpd.WriteType = 'Rte';


FordVehLatACmpdRaw = DataDict.OpSignal;
FordVehLatACmpdRaw.LongName = 'Ford Vehicle Lateral Acceleration Compensated Raw';
FordVehLatACmpdRaw.Description = [...
  'Processed value of Vehicle Lateral Acceleration Compensated to be used' ...
  ' by EPS'];
FordVehLatACmpdRaw.DocUnits = 'Cnt';
FordVehLatACmpdRaw.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLatACmpdRaw.EngDT = dt.u16;
FordVehLatACmpdRaw.EngInit = 1022;
FordVehLatACmpdRaw.EngMin = 0;
FordVehLatACmpdRaw.EngMax = 1023;
FordVehLatACmpdRaw.TestTolerance = 0;
FordVehLatACmpdRaw.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLatACmpdRaw.WriteType = 'Rte';


FordVehLatACmpdVld = DataDict.OpSignal;
FordVehLatACmpdVld.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid';
FordVehLatACmpdVld.Description = [...
  'This output tells if the value for Ford Vehicle Lateral Acceleration C' ...
  'ompensated Valid is valid or not'];
FordVehLatACmpdVld.DocUnits = 'Cnt';
FordVehLatACmpdVld.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLatACmpdVld.EngDT = dt.lgc;
FordVehLatACmpdVld.EngInit = 0;
FordVehLatACmpdVld.EngMin = 0;
FordVehLatACmpdVld.EngMax = 1;
FordVehLatACmpdVld.TestTolerance = 0;
FordVehLatACmpdVld.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLatACmpdVld.WriteType = 'Rte';


FordVehLgtACmpd = DataDict.OpSignal;
FordVehLgtACmpd.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated';
FordVehLgtACmpd.Description = [...
  'Processed value of Ford Vehicle Longitudinal Acceleration Compensated ' ...
  'Raw to be used by EPS'];
FordVehLgtACmpd.DocUnits = 'MtrPerSecSqd';
FordVehLgtACmpd.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLgtACmpd.EngDT = dt.float32;
FordVehLgtACmpd.EngInit = 17.835;
FordVehLgtACmpd.EngMin = -17.9;
FordVehLgtACmpd.EngMax = 17.835;
FordVehLgtACmpd.TestTolerance = 0;
FordVehLgtACmpd.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLgtACmpd.WriteType = 'Rte';


FordVehLgtACmpdRaw = DataDict.OpSignal;
FordVehLgtACmpdRaw.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Raw';
FordVehLgtACmpdRaw.Description = [...
  'Processed value of Vehicle Longitudinal Acceleration Compensated to be' ...
  ' used by EPS'];
FordVehLgtACmpdRaw.DocUnits = 'Cnt';
FordVehLgtACmpdRaw.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLgtACmpdRaw.EngDT = dt.u16;
FordVehLgtACmpdRaw.EngInit = 1022;
FordVehLgtACmpdRaw.EngMin = 0;
FordVehLgtACmpdRaw.EngMax = 1023;
FordVehLgtACmpdRaw.TestTolerance = 0;
FordVehLgtACmpdRaw.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLgtACmpdRaw.WriteType = 'Rte';


FordVehLgtACmpdVld = DataDict.OpSignal;
FordVehLgtACmpdVld.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid';
FordVehLgtACmpdVld.Description = [...
  'This output tells if the value for Ford Vehicle Longitudinal Accelerat' ...
  'ion Compensated Valid is valid or not'];
FordVehLgtACmpdVld.DocUnits = 'Cnt';
FordVehLgtACmpdVld.SwcShoName = 'FordMsg077BusHiSpd';
FordVehLgtACmpdVld.EngDT = dt.lgc;
FordVehLgtACmpdVld.EngInit = 0;
FordVehLgtACmpdVld.EngMin = 0;
FordVehLgtACmpdVld.EngMax = 1;
FordVehLgtACmpdVld.TestTolerance = 0;
FordVehLgtACmpdVld.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehLgtACmpdVld.WriteType = 'Rte';


FordVehSpdOverGnd = DataDict.OpSignal;
FordVehSpdOverGnd.LongName = 'Ford Vehicle Speed Over Ground';
FordVehSpdOverGnd.Description = [...
  'Processed value of Ford Vehicle Speed Over Ground Raw to be used by EP' ...
  'S'];
FordVehSpdOverGnd.DocUnits = 'Kph';
FordVehSpdOverGnd.SwcShoName = 'FordMsg077BusHiSpd';
FordVehSpdOverGnd.EngDT = dt.float32;
FordVehSpdOverGnd.EngInit = 0;
FordVehSpdOverGnd.EngMin = 0;
FordVehSpdOverGnd.EngMax = 655.33;
FordVehSpdOverGnd.TestTolerance = 0;
FordVehSpdOverGnd.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehSpdOverGnd.WriteType = 'Rte';


FordVehSpdOverGndRaw = DataDict.OpSignal;
FordVehSpdOverGndRaw.LongName = 'Ford Vehicle Speed Over Ground Raw';
FordVehSpdOverGndRaw.Description = [...
  'Processed value of Vehicle Speed Over Ground to be used by EPS'];
FordVehSpdOverGndRaw.DocUnits = 'Cnt';
FordVehSpdOverGndRaw.SwcShoName = 'FordMsg077BusHiSpd';
FordVehSpdOverGndRaw.EngDT = dt.u16;
FordVehSpdOverGndRaw.EngInit = 0;
FordVehSpdOverGndRaw.EngMin = 0;
FordVehSpdOverGndRaw.EngMax = 65535;
FordVehSpdOverGndRaw.TestTolerance = 0;
FordVehSpdOverGndRaw.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehSpdOverGndRaw.WriteType = 'Rte';


FordVehSpdOverGndVld = DataDict.OpSignal;
FordVehSpdOverGndVld.LongName = 'Ford Vehicle Speed Over Ground Valid';
FordVehSpdOverGndVld.Description = [...
  'This output tells if the value for Ford Vehicle Speed Over Ground Vali' ...
  'd is valid or not'];
FordVehSpdOverGndVld.DocUnits = 'Cnt';
FordVehSpdOverGndVld.SwcShoName = 'FordMsg077BusHiSpd';
FordVehSpdOverGndVld.EngDT = dt.lgc;
FordVehSpdOverGndVld.EngInit = 0;
FordVehSpdOverGndVld.EngMin = 0;
FordVehSpdOverGndVld.EngMax = 1;
FordVehSpdOverGndVld.TestTolerance = 0;
FordVehSpdOverGndVld.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehSpdOverGndVld.WriteType = 'Rte';


FordVehYawRateCmpd = DataDict.OpSignal;
FordVehYawRateCmpd.LongName = 'Ford Vehicle Yaw Rate Compensated';
FordVehYawRateCmpd.Description = [...
  'Processed value of Ford Vehicle Yaw Rate Compensated Raw to be used by' ...
  ' EPS'];
FordVehYawRateCmpd.DocUnits = 'HwDegPerSec';
FordVehYawRateCmpd.SwcShoName = 'FordMsg077BusHiSpd';
FordVehYawRateCmpd.EngDT = dt.float32;
FordVehYawRateCmpd.EngInit = 74.92659;
FordVehYawRateCmpd.EngMin = -75;
FordVehYawRateCmpd.EngMax = 74.92659;
FordVehYawRateCmpd.TestTolerance = 0;
FordVehYawRateCmpd.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehYawRateCmpd.WriteType = 'Rte';


FordVehYawRateCmpdRaw = DataDict.OpSignal;
FordVehYawRateCmpdRaw.LongName = 'Ford Vehicle Yaw Rate Compensated Raw';
FordVehYawRateCmpdRaw.Description = [...
  'Processed value of Vehicle Yaw Rate Compensated to be used by EPS'];
FordVehYawRateCmpdRaw.DocUnits = 'Cnt';
FordVehYawRateCmpdRaw.SwcShoName = 'FordMsg077BusHiSpd';
FordVehYawRateCmpdRaw.EngDT = dt.u16;
FordVehYawRateCmpdRaw.EngInit = 4094;
FordVehYawRateCmpdRaw.EngMin = 0;
FordVehYawRateCmpdRaw.EngMax = 4095;
FordVehYawRateCmpdRaw.TestTolerance = 0;
FordVehYawRateCmpdRaw.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehYawRateCmpdRaw.WriteType = 'Rte';


FordVehYawRateCmpdVld = DataDict.OpSignal;
FordVehYawRateCmpdVld.LongName = 'Ford Vehicle Yaw Rate Compensated Valid';
FordVehYawRateCmpdVld.Description = [...
  'This output tells if the value for Ford Vehicle Yaw Rate Compensated V' ...
  'alid is valid or not'];
FordVehYawRateCmpdVld.DocUnits = 'Cnt';
FordVehYawRateCmpdVld.SwcShoName = 'FordMsg077BusHiSpd';
FordVehYawRateCmpdVld.EngDT = dt.lgc;
FordVehYawRateCmpdVld.EngInit = 0;
FordVehYawRateCmpdVld.EngMin = 0;
FordVehYawRateCmpdVld.EngMax = 1;
FordVehYawRateCmpdVld.TestTolerance = 0;
FordVehYawRateCmpdVld.WrittenIn = {'FordMsg077BusHiSpdPer1'};
FordVehYawRateCmpdVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg077BusHiSpdCanDtcInhbThd = DataDict.Calibration;
FordMsg077BusHiSpdCanDtcInhbThd.LongName = 'Ford Message 077 Bus High Speed CAN DTC Inhibit Threshold';
FordMsg077BusHiSpdCanDtcInhbThd.Description = [...
  'It is a calibratable threshold used to enable the diagnostics of $077 ' ...
  'Message'];
FordMsg077BusHiSpdCanDtcInhbThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdCanDtcInhbThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdCanDtcInhbThd.EngVal = 2000;
FordMsg077BusHiSpdCanDtcInhbThd.EngMin = 0;
FordMsg077BusHiSpdCanDtcInhbThd.EngMax = 6000;
FordMsg077BusHiSpdCanDtcInhbThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdCanDtcInhbThd.CustomerVisible = false;
FordMsg077BusHiSpdCanDtcInhbThd.Online = false;
FordMsg077BusHiSpdCanDtcInhbThd.Impact = 'L';
FordMsg077BusHiSpdCanDtcInhbThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdCanDtcInhbThd.GraphLink = {''};
FordMsg077BusHiSpdCanDtcInhbThd.Monotony = 'None';
FordMsg077BusHiSpdCanDtcInhbThd.MaxGrad = 0;
FordMsg077BusHiSpdCanDtcInhbThd.PortName = 'FordMsg077BusHiSpdCanDtcInhbThd';


FordMsg077BusHiSpdLatACmpdInvldSigFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.LongName = 'Ford Message 077 Bus High Speed Lateral Acceleration Compensated Invalid Signal Failed Threshold';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Lateral Acceleration Compensated Inv' ...
  'alid NTC'];
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.EngVal = 0;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.EngMin = 0;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.EngMax = 6000;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.Online = false;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.Impact = 'L';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.GraphLink = {''};
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.Monotony = 'None';
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdLatACmpdInvldSigFaildThd.PortName = 'FordMsg077BusHiSpdLatACmpdInvldSigFaildThd';


FordMsg077BusHiSpdLatACmpdInvldSigPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.LongName = 'Ford Message 077 Bus High Speed Lateral Acceleration Compensated Invalid Signal Passed Threshold';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.Description = [...
  'Threshold to clear the Ford Vehicle Lateral Acceleration Compensated I' ...
  'nvalid NTC'];
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.EngVal = 0;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.EngMin = 0;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.EngMax = 6000;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.Online = false;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.Impact = 'L';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.GraphLink = {''};
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.Monotony = 'None';
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdLatACmpdInvldSigPassdThd.PortName = 'FordMsg077BusHiSpdLatACmpdInvldSigPassdThd';


FordMsg077BusHiSpdLatACmpdVldMissThd = DataDict.Calibration;
FordMsg077BusHiSpdLatACmpdVldMissThd.LongName = 'Ford Message 077 Bus High Speed Lateral Acceleration Compensated Valid Missing Threshold';
FordMsg077BusHiSpdLatACmpdVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Lateral Acceleration Compensa' ...
  'ted Valid'];
FordMsg077BusHiSpdLatACmpdVldMissThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLatACmpdVldMissThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLatACmpdVldMissThd.EngVal = 100;
FordMsg077BusHiSpdLatACmpdVldMissThd.EngMin = 0;
FordMsg077BusHiSpdLatACmpdVldMissThd.EngMax = 6000;
FordMsg077BusHiSpdLatACmpdVldMissThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLatACmpdVldMissThd.CustomerVisible = false;
FordMsg077BusHiSpdLatACmpdVldMissThd.Online = false;
FordMsg077BusHiSpdLatACmpdVldMissThd.Impact = 'H';
FordMsg077BusHiSpdLatACmpdVldMissThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLatACmpdVldMissThd.GraphLink = {''};
FordMsg077BusHiSpdLatACmpdVldMissThd.Monotony = 'None';
FordMsg077BusHiSpdLatACmpdVldMissThd.MaxGrad = 0;
FordMsg077BusHiSpdLatACmpdVldMissThd.PortName = 'FordMsg077BusHiSpdLatACmpdVldMissThd';


FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.LongName = 'Ford Message 077 Bus High Speed Longitudinal Acceleration Compensated Invalid Signal Failed Threshold';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Longitudinal Acceleration Compensate' ...
  'd Invalid NTC'];
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.EngVal = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.EngMin = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.EngMax = 6000;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.Online = false;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.Impact = 'L';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.GraphLink = {''};
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.Monotony = 'None';
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd.PortName = 'FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd';


FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.LongName = 'Ford Message 077 Bus High Speed Longitudinal Acceleration Compensated Invalid Signal Passed Threshold';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.Description = [...
  'Threshold to clear the Ford Vehicle Longitudinal Acceleration Compensa' ...
  'ted Invalid NTC'];
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.EngVal = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.EngMin = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.EngMax = 6000;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.Online = false;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.Impact = 'L';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.GraphLink = {''};
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.Monotony = 'None';
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd.PortName = 'FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd';


FordMsg077BusHiSpdLgtACmpdVldMissThd = DataDict.Calibration;
FordMsg077BusHiSpdLgtACmpdVldMissThd.LongName = 'Ford Message 077 Bus High Speed Longitudinal Acceleration Compensated Valid Missing Threshold';
FordMsg077BusHiSpdLgtACmpdVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Longitudinal Acceleration Com' ...
  'pensated Valid to false'];
FordMsg077BusHiSpdLgtACmpdVldMissThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdLgtACmpdVldMissThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdLgtACmpdVldMissThd.EngVal = 100;
FordMsg077BusHiSpdLgtACmpdVldMissThd.EngMin = 0;
FordMsg077BusHiSpdLgtACmpdVldMissThd.EngMax = 6000;
FordMsg077BusHiSpdLgtACmpdVldMissThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdLgtACmpdVldMissThd.CustomerVisible = false;
FordMsg077BusHiSpdLgtACmpdVldMissThd.Online = false;
FordMsg077BusHiSpdLgtACmpdVldMissThd.Impact = 'H';
FordMsg077BusHiSpdLgtACmpdVldMissThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdLgtACmpdVldMissThd.GraphLink = {''};
FordMsg077BusHiSpdLgtACmpdVldMissThd.Monotony = 'None';
FordMsg077BusHiSpdLgtACmpdVldMissThd.MaxGrad = 0;
FordMsg077BusHiSpdLgtACmpdVldMissThd.PortName = 'FordMsg077BusHiSpdLgtACmpdVldMissThd';


FordMsg077BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 077 Bus High Speed Missing Message Failed Threshold';
FordMsg077BusHiSpdMissMsgFaildThd.Description = [...
  'It is a calibratable threshold used to set the Missing Message Ntc'];
FordMsg077BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdMissMsgFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdMissMsgFaildThd.EngVal = 100;
FordMsg077BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg077BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg077BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdMissMsgFaildThd.Online = false;
FordMsg077BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg077BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg077BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg077BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdMissMsgFaildThd.PortName = 'FordMsg077BusHiSpdMissMsgFaildThd';


FordMsg077BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 077 Bus High Speed Missing Message Passed Threshold';
FordMsg077BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the Misssing message NTC'];
FordMsg077BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdMissMsgPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg077BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg077BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg077BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdMissMsgPassdThd.Online = false;
FordMsg077BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg077BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg077BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg077BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdMissMsgPassdThd.PortName = 'FordMsg077BusHiSpdMissMsgPassdThd';


FordMsg077BusHiSpdOverGndInvldSigFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.LongName = 'Ford Message 077 Bus High Speed Over Ground Invalid Signal Failed Threshold';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Speed Over Ground Invalid NTC'];
FordMsg077BusHiSpdOverGndInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.EngVal = 0;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.EngMin = 0;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.EngMax = 6000;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.Online = false;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.Impact = 'L';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.GraphLink = {''};
FordMsg077BusHiSpdOverGndInvldSigFaildThd.Monotony = 'None';
FordMsg077BusHiSpdOverGndInvldSigFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdOverGndInvldSigFaildThd.PortName = 'FordMsg077BusHiSpdOverGndInvldSigFaildThd';


FordMsg077BusHiSpdOverGndInvldSigPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.LongName = 'Ford Message 077 Bus High Speed Over Ground Invalid Signal Passed Threshold';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.Description = [...
  'Threshold to clear the Ford Vehicle Speed Over Ground Invalid NTC'];
FordMsg077BusHiSpdOverGndInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.EngVal = 0;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.EngMin = 0;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.EngMax = 6000;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.Online = false;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.Impact = 'L';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.GraphLink = {''};
FordMsg077BusHiSpdOverGndInvldSigPassdThd.Monotony = 'None';
FordMsg077BusHiSpdOverGndInvldSigPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdOverGndInvldSigPassdThd.PortName = 'FordMsg077BusHiSpdOverGndInvldSigPassdThd';


FordMsg077BusHiSpdVehLatACmpdVldFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Lateral Acceleration Compensated Failed Threshold';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Lateral Acceleration Compensa' ...
  'ted Valid'];
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.EngVal = 0;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.EngMin = 0;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.EngMax = 6000;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.Online = false;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.Impact = 'H';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.GraphLink = {''};
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.Monotony = 'None';
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdVehLatACmpdVldFaildThd.PortName = 'FordMsg077BusHiSpdVehLatACmpdVldFaildThd';


FordMsg077BusHiSpdVehLatACmpdVldPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Lateral Acceleration Compensated Passed Threshold';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Lateral Acceleration Compensa' ...
  'ted Valid'];
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.EngVal = 5000;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.EngMin = 0;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.EngMax = 6000;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.Online = false;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.Impact = 'H';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.GraphLink = {''};
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.Monotony = 'None';
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdVehLatACmpdVldPassdThd.PortName = 'FordMsg077BusHiSpdVehLatACmpdVldPassdThd';


FordMsg077BusHiSpdVehLgtACmpdVldFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Longitudinal Acceleration Compensated Failed Threshold';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Longitudinal Acceleration Com' ...
  'pensated Valid'];
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.EngVal = 0;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.EngMin = 0;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.EngMax = 6000;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.Online = false;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.Impact = 'H';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.GraphLink = {''};
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.Monotony = 'None';
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdVehLgtACmpdVldFaildThd.PortName = 'FordMsg077BusHiSpdVehLgtACmpdVldFaildThd';


FordMsg077BusHiSpdVehLgtACmpdVldPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Longitudinal Acceleration Compensated Passed Threshold';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Longitudinal Acceleration Com' ...
  'pensated Valid'];
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.EngVal = 500;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.EngMin = 0;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.EngMax = 6000;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.Online = false;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.Impact = 'H';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.GraphLink = {''};
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.Monotony = 'None';
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdVehLgtACmpdVldPassdThd.PortName = 'FordMsg077BusHiSpdVehLgtACmpdVldPassdThd';


FordMsg077BusHiSpdVehSpdOverGndVldFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Speed Over Ground Failed Threshold';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Speed Over Ground Valid'];
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.EngVal = 0;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.EngMin = 0;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.EngMax = 6000;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.Online = false;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.Impact = 'H';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.GraphLink = {''};
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.Monotony = 'None';
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdVehSpdOverGndVldFaildThd.PortName = 'FordMsg077BusHiSpdVehSpdOverGndVldFaildThd';


FordMsg077BusHiSpdVehSpdOverGndVldMissThd = DataDict.Calibration;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Speed Over Ground Missing Threshold';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Speed Over Ground Valid'];
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.EngVal = 100;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.EngMin = 0;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.EngMax = 6000;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.CustomerVisible = false;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.Online = false;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.Impact = 'H';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.GraphLink = {''};
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.Monotony = 'None';
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.MaxGrad = 0;
FordMsg077BusHiSpdVehSpdOverGndVldMissThd.PortName = 'FordMsg077BusHiSpdVehSpdOverGndVldMissThd';


FordMsg077BusHiSpdVehSpdOverGndVldPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Speed Over Ground Passed Threshold';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Speed Over Ground Valid'];
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.EngVal = 0;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.EngMin = 0;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.EngMax = 6000;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.Online = false;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.Impact = 'H';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.GraphLink = {''};
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.Monotony = 'None';
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdVehSpdOverGndVldPassdThd.PortName = 'FordMsg077BusHiSpdVehSpdOverGndVldPassdThd';


FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Yaw Rate Compensated Failed Threshold';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Compensated Valid'];
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.EngVal = 0;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.EngMin = 0;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.EngMax = 6000;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.Online = false;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.Impact = 'H';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.GraphLink = {''};
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.Monotony = 'None';
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd.PortName = 'FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd';


FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.LongName = 'Ford Message 077 Bus High Speed Vehicle Yaw Rate Compensated Passed Threshold';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Compensated Valid'];
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.EngVal = 5000;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.EngMin = 0;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.EngMax = 6000;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.Online = false;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.Impact = 'H';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.GraphLink = {''};
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.Monotony = 'None';
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd.PortName = 'FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd';


FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd = DataDict.Calibration;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.LongName = 'Ford Message 077 Bus High Speed Yaw Rate Compensated Invalid Signal Failed Threshold';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Yaw Rate Compensated Invalid NTC'];
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.EngVal = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.EngMin = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.EngMax = 6000;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.CustomerVisible = false;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.Online = false;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.Impact = 'L';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.GraphLink = {''};
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.Monotony = 'None';
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.MaxGrad = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd.PortName = 'FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd';


FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd = DataDict.Calibration;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.LongName = 'Ford Message 077 Bus High Speed Yaw Rate Compensated Invalid Signal Passed Threshold';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.Description = [...
  'Threshold to clear the Ford Vehicle Yaw Rate Compensated Invalid NTC'];
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.EngVal = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.EngMin = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.EngMax = 6000;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.CustomerVisible = false;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.Online = false;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.Impact = 'L';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.GraphLink = {''};
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.Monotony = 'None';
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.MaxGrad = 0;
FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd.PortName = 'FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd';


FordMsg077BusHiSpdYawRateCmpdVldMissThd = DataDict.Calibration;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.LongName = 'Ford Message 077 Bus High Speed Yaw Rate Compensated Missing Threshold';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.Description = [...
  'Threshold to set the output Ford Vehicle Yaw Rate Compensated Valid'];
FordMsg077BusHiSpdYawRateCmpdVldMissThd.DocUnits = 'MilliSec';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.EngDT = dt.u16p0;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.EngVal = 100;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.EngMin = 0;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.EngMax = 6000;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.Cardinality = 'Cmn';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.CustomerVisible = false;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.Online = false;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.Impact = 'H';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.TuningOwner = 'EPDT';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.GraphLink = {''};
FordMsg077BusHiSpdYawRateCmpdVldMissThd.Monotony = 'None';
FordMsg077BusHiSpdYawRateCmpdVldMissThd.MaxGrad = 0;
FordMsg077BusHiSpdYawRateCmpdVldMissThd.PortName = 'FordMsg077BusHiSpdYawRateCmpdVldMissThd';



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
CanDtcInhbRefTi = DataDict.PIM;
CanDtcInhbRefTi.LongName = 'CAN DTC Inhibit Reference Time';
CanDtcInhbRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
CanDtcInhbRefTi.DocUnits = 'Cnt';
CanDtcInhbRefTi.EngDT = dt.u32;
CanDtcInhbRefTi.EngMin = 0;
CanDtcInhbRefTi.EngMax = 4294967295;
CanDtcInhbRefTi.InitRowCol = [1  1];


DiagcClrProxyFlgPrev = DataDict.PIM;
DiagcClrProxyFlgPrev.LongName = 'Clear Diagnostic Flag Proxy Previous';
DiagcClrProxyFlgPrev.Description = [...
  'Hold the Previous value of Clear Diagnostic Flag Proxy'];
DiagcClrProxyFlgPrev.DocUnits = 'Cnt';
DiagcClrProxyFlgPrev.EngDT = dt.lgc;
DiagcClrProxyFlgPrev.EngMin = 0;
DiagcClrProxyFlgPrev.EngMax = 1;
DiagcClrProxyFlgPrev.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'PIM to check whether it is a first transition or not'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehLatACmpdInvldFaildRefTi = DataDict.PIM;
FordVehLatACmpdInvldFaildRefTi.LongName = 'Ford Vehicle Lateral Acceleration Compensated Invalid Failed Reference Time';
FordVehLatACmpdInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehLatACmpdInvldFaildRefTi.DocUnits = 'Cnt';
FordVehLatACmpdInvldFaildRefTi.EngDT = dt.u32;
FordVehLatACmpdInvldFaildRefTi.EngMin = 0;
FordVehLatACmpdInvldFaildRefTi.EngMax = 4294967295;
FordVehLatACmpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehLatACmpdInvldPassdRefTi = DataDict.PIM;
FordVehLatACmpdInvldPassdRefTi.LongName = 'Ford Vehicle Lateral Acceleration Compensated Invalid Passed Reference Time';
FordVehLatACmpdInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehLatACmpdInvldPassdRefTi.DocUnits = 'Cnt';
FordVehLatACmpdInvldPassdRefTi.EngDT = dt.u32;
FordVehLatACmpdInvldPassdRefTi.EngMin = 0;
FordVehLatACmpdInvldPassdRefTi.EngMax = 4294967295;
FordVehLatACmpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehLatACmpdPrev = DataDict.PIM;
FordVehLatACmpdPrev.LongName = 'Ford Vehicle Lateral Acceleration Compensated Previous';
FordVehLatACmpdPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Lateral Acceleration Compensat' ...
  'ed'];
FordVehLatACmpdPrev.DocUnits = 'MtrPerSecSqd';
FordVehLatACmpdPrev.EngDT = dt.float32;
FordVehLatACmpdPrev.EngMin = -17.9;
FordVehLatACmpdPrev.EngMax = 17.835;
FordVehLatACmpdPrev.InitRowCol = [1  1];


FordVehLatACmpdRawPrev = DataDict.PIM;
FordVehLatACmpdRawPrev.LongName = 'Ford Vehicle Lateral Acceleration Compensated Raw Previous';
FordVehLatACmpdRawPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehLatComp_A_Actl.Ele' ...
  'ments are: 0-1021 - "Regular Integer" , 1022 - "Cx3FE_NoDataExists"102' ...
  '3 - "Cx3FF_Fault"'];
FordVehLatACmpdRawPrev.DocUnits = 'Cnt';
FordVehLatACmpdRawPrev.EngDT = dt.u16;
FordVehLatACmpdRawPrev.EngMin = 0;
FordVehLatACmpdRawPrev.EngMax = 1023;
FordVehLatACmpdRawPrev.InitRowCol = [1  1];


FordVehLatACmpdVldFaildRefTi = DataDict.PIM;
FordVehLatACmpdVldFaildRefTi.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid Failed Reference Time';
FordVehLatACmpdVldFaildRefTi.Description = [...
  'Timer for Valid failed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehLatACmpdVldFaildRefTi.DocUnits = 'Cnt';
FordVehLatACmpdVldFaildRefTi.EngDT = dt.u32;
FordVehLatACmpdVldFaildRefTi.EngMin = 0;
FordVehLatACmpdVldFaildRefTi.EngMax = 4294967295;
FordVehLatACmpdVldFaildRefTi.InitRowCol = [1  1];


FordVehLatACmpdVldMissRefTi = DataDict.PIM;
FordVehLatACmpdVldMissRefTi.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid Missing Reference Time';
FordVehLatACmpdVldMissRefTi.Description = [...
  'Timer for Lateral Acceleration Compensated Valid Miss Reference Time w' ...
  'ill increment or reset based on the conditions'];
FordVehLatACmpdVldMissRefTi.DocUnits = 'Cnt';
FordVehLatACmpdVldMissRefTi.EngDT = dt.u32;
FordVehLatACmpdVldMissRefTi.EngMin = 0;
FordVehLatACmpdVldMissRefTi.EngMax = 4294967295;
FordVehLatACmpdVldMissRefTi.InitRowCol = [1  1];


FordVehLatACmpdVldPassdRefTi = DataDict.PIM;
FordVehLatACmpdVldPassdRefTi.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid Passed Reference Time';
FordVehLatACmpdVldPassdRefTi.Description = [...
  'Timer for Valid passed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehLatACmpdVldPassdRefTi.DocUnits = 'Cnt';
FordVehLatACmpdVldPassdRefTi.EngDT = dt.u32;
FordVehLatACmpdVldPassdRefTi.EngMin = 0;
FordVehLatACmpdVldPassdRefTi.EngMax = 4294967295;
FordVehLatACmpdVldPassdRefTi.InitRowCol = [1  1];


FordVehLatACmpdVldPrev = DataDict.PIM;
FordVehLatACmpdVldPrev.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid Previous';
FordVehLatACmpdVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Lateral Acceleration Compensat' ...
  'ed Valid'];
FordVehLatACmpdVldPrev.DocUnits = 'Cnt';
FordVehLatACmpdVldPrev.EngDT = dt.lgc;
FordVehLatACmpdVldPrev.EngMin = 0;
FordVehLatACmpdVldPrev.EngMax = 1;
FordVehLatACmpdVldPrev.InitRowCol = [1  1];


FordVehLgtACmpdInvldFaildRefTi = DataDict.PIM;
FordVehLgtACmpdInvldFaildRefTi.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Invalid Failed Reference Time';
FordVehLgtACmpdInvldFaildRefTi.Description = [...
  'Timer for Invalid failed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehLgtACmpdInvldFaildRefTi.DocUnits = 'Cnt';
FordVehLgtACmpdInvldFaildRefTi.EngDT = dt.u32;
FordVehLgtACmpdInvldFaildRefTi.EngMin = 0;
FordVehLgtACmpdInvldFaildRefTi.EngMax = 4294967295;
FordVehLgtACmpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehLgtACmpdInvldPassdRefTi = DataDict.PIM;
FordVehLgtACmpdInvldPassdRefTi.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Invalid Passed Reference Time';
FordVehLgtACmpdInvldPassdRefTi.Description = [...
  'Timer for Invalid passed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehLgtACmpdInvldPassdRefTi.DocUnits = 'Cnt';
FordVehLgtACmpdInvldPassdRefTi.EngDT = dt.u32;
FordVehLgtACmpdInvldPassdRefTi.EngMin = 0;
FordVehLgtACmpdInvldPassdRefTi.EngMax = 4294967295;
FordVehLgtACmpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehLgtACmpdPrev = DataDict.PIM;
FordVehLgtACmpdPrev.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Previous';
FordVehLgtACmpdPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Longitudinal Acceleration Comp' ...
  'ensated'];
FordVehLgtACmpdPrev.DocUnits = 'MtrPerSecSqd';
FordVehLgtACmpdPrev.EngDT = dt.float32;
FordVehLgtACmpdPrev.EngMin = -17.9;
FordVehLgtACmpdPrev.EngMax = 17.835;
FordVehLgtACmpdPrev.InitRowCol = [1  1];


FordVehLgtACmpdRawPrev = DataDict.PIM;
FordVehLgtACmpdRawPrev.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Raw Previous';
FordVehLgtACmpdRawPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehLongComp_A_Actl.El' ...
  'ements are: 0-1021 - "Regular Integer" , 1022 - "Cx3FE_NoDataExists"10' ...
  '23 - "Cx3FF_Fault"'];
FordVehLgtACmpdRawPrev.DocUnits = 'Cnt';
FordVehLgtACmpdRawPrev.EngDT = dt.u16;
FordVehLgtACmpdRawPrev.EngMin = 0;
FordVehLgtACmpdRawPrev.EngMax = 1023;
FordVehLgtACmpdRawPrev.InitRowCol = [1  1];


FordVehLgtACmpdVldFaildRefTi = DataDict.PIM;
FordVehLgtACmpdVldFaildRefTi.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid Failed Reference Time';
FordVehLgtACmpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehLgtACmpdVldFaildRefTi.DocUnits = 'Cnt';
FordVehLgtACmpdVldFaildRefTi.EngDT = dt.u32;
FordVehLgtACmpdVldFaildRefTi.EngMin = 0;
FordVehLgtACmpdVldFaildRefTi.EngMax = 4294967295;
FordVehLgtACmpdVldFaildRefTi.InitRowCol = [1  1];


FordVehLgtACmpdVldMissRefTi = DataDict.PIM;
FordVehLgtACmpdVldMissRefTi.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid Missing Reference Time';
FordVehLgtACmpdVldMissRefTi.Description = [...
  'Timer for Longitudinal Acceleration Compensated Valid Miss Reference T' ...
  'ime will increment or reset based on the conditions'];
FordVehLgtACmpdVldMissRefTi.DocUnits = 'Cnt';
FordVehLgtACmpdVldMissRefTi.EngDT = dt.u32;
FordVehLgtACmpdVldMissRefTi.EngMin = 0;
FordVehLgtACmpdVldMissRefTi.EngMax = 4294967295;
FordVehLgtACmpdVldMissRefTi.InitRowCol = [1  1];


FordVehLgtACmpdVldPassdRefTi = DataDict.PIM;
FordVehLgtACmpdVldPassdRefTi.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid Passed Reference Time';
FordVehLgtACmpdVldPassdRefTi.Description = [...
  'Timer for Valid Passed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehLgtACmpdVldPassdRefTi.DocUnits = 'Cnt';
FordVehLgtACmpdVldPassdRefTi.EngDT = dt.u32;
FordVehLgtACmpdVldPassdRefTi.EngMin = 0;
FordVehLgtACmpdVldPassdRefTi.EngMax = 4294967295;
FordVehLgtACmpdVldPassdRefTi.InitRowCol = [1  1];


FordVehLgtACmpdVldPrev = DataDict.PIM;
FordVehLgtACmpdVldPrev.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid Previous';
FordVehLgtACmpdVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Longitudinal Acceleration Comp' ...
  'ensated Valid'];
FordVehLgtACmpdVldPrev.DocUnits = 'Cnt';
FordVehLgtACmpdVldPrev.EngDT = dt.lgc;
FordVehLgtACmpdVldPrev.EngMin = 0;
FordVehLgtACmpdVldPrev.EngMax = 1;
FordVehLgtACmpdVldPrev.InitRowCol = [1  1];


FordVehMsg77Miss = DataDict.PIM;
FordVehMsg77Miss.LongName = 'Ford Vehicle Message 457 Missing';
FordVehMsg77Miss.Description = [...
  'PIM used to identify whether the message is missing or not.'];
FordVehMsg77Miss.DocUnits = 'Cnt';
FordVehMsg77Miss.EngDT = dt.lgc;
FordVehMsg77Miss.EngMin = 0;
FordVehMsg77Miss.EngMax = 1;
FordVehMsg77Miss.InitRowCol = [1  1];


FordVehSpdOverGndInvldFaildRefTi = DataDict.PIM;
FordVehSpdOverGndInvldFaildRefTi.LongName = 'Ford Vehicle Speed Over Ground Invalid Failed Reference Time';
FordVehSpdOverGndInvldFaildRefTi.Description = [...
  'Timer for Invalid Failed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehSpdOverGndInvldFaildRefTi.DocUnits = 'Cnt';
FordVehSpdOverGndInvldFaildRefTi.EngDT = dt.u32;
FordVehSpdOverGndInvldFaildRefTi.EngMin = 0;
FordVehSpdOverGndInvldFaildRefTi.EngMax = 4294967295;
FordVehSpdOverGndInvldFaildRefTi.InitRowCol = [1  1];


FordVehSpdOverGndInvldPassdRefTi = DataDict.PIM;
FordVehSpdOverGndInvldPassdRefTi.LongName = 'Ford Vehicle Speed Over Ground Invalid Passed Reference Time';
FordVehSpdOverGndInvldPassdRefTi.Description = [...
  'Timer for Invalid Passed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehSpdOverGndInvldPassdRefTi.DocUnits = 'Cnt';
FordVehSpdOverGndInvldPassdRefTi.EngDT = dt.u32;
FordVehSpdOverGndInvldPassdRefTi.EngMin = 0;
FordVehSpdOverGndInvldPassdRefTi.EngMax = 4294967295;
FordVehSpdOverGndInvldPassdRefTi.InitRowCol = [1  1];


FordVehSpdOverGndPrev = DataDict.PIM;
FordVehSpdOverGndPrev.LongName = 'Ford Vehicle Speed Over Ground Previous';
FordVehSpdOverGndPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Speed Over Ground'];
FordVehSpdOverGndPrev.DocUnits = 'Kph';
FordVehSpdOverGndPrev.EngDT = dt.float32;
FordVehSpdOverGndPrev.EngMin = 0;
FordVehSpdOverGndPrev.EngMax = 655.33;
FordVehSpdOverGndPrev.InitRowCol = [1  1];


FordVehSpdOverGndRawPrev = DataDict.PIM;
FordVehSpdOverGndRawPrev.LongName = 'Ford Vehicle Speed Over Ground Raw Previous';
FordVehSpdOverGndRawPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehOverGnd_V_Est.Elem' ...
  'ents are: 0-65533 - "Regular Integer" , 65534 - "CxFFFE_Unknown"65535 ' ...
  '- "CxFFFF_Invalid"'];
FordVehSpdOverGndRawPrev.DocUnits = 'Cnt';
FordVehSpdOverGndRawPrev.EngDT = dt.u16;
FordVehSpdOverGndRawPrev.EngMin = 0;
FordVehSpdOverGndRawPrev.EngMax = 65535;
FordVehSpdOverGndRawPrev.InitRowCol = [1  1];


FordVehSpdOverGndVldFaildRefTi = DataDict.PIM;
FordVehSpdOverGndVldFaildRefTi.LongName = 'Ford Vehicle Speed Over Ground Valid Failed Reference Time';
FordVehSpdOverGndVldFaildRefTi.Description = [...
  'Timer for Valid Failed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehSpdOverGndVldFaildRefTi.DocUnits = 'Cnt';
FordVehSpdOverGndVldFaildRefTi.EngDT = dt.u32;
FordVehSpdOverGndVldFaildRefTi.EngMin = 0;
FordVehSpdOverGndVldFaildRefTi.EngMax = 4294967295;
FordVehSpdOverGndVldFaildRefTi.InitRowCol = [1  1];


FordVehSpdOverGndVldMissRefTi = DataDict.PIM;
FordVehSpdOverGndVldMissRefTi.LongName = 'Ford Vehicle Speed Over Ground Valid Missing Reference Time';
FordVehSpdOverGndVldMissRefTi.Description = [...
  'Timer for Vehicle Speed Over Ground Valid Miss Reference Time will inc' ...
  'rement or reset based on the conditions'];
FordVehSpdOverGndVldMissRefTi.DocUnits = 'Cnt';
FordVehSpdOverGndVldMissRefTi.EngDT = dt.u32;
FordVehSpdOverGndVldMissRefTi.EngMin = 0;
FordVehSpdOverGndVldMissRefTi.EngMax = 4294967295;
FordVehSpdOverGndVldMissRefTi.InitRowCol = [1  1];


FordVehSpdOverGndVldPassdRefTi = DataDict.PIM;
FordVehSpdOverGndVldPassdRefTi.LongName = 'Ford Vehicle Speed Over Ground Valid Passed Reference Time';
FordVehSpdOverGndVldPassdRefTi.Description = [...
  'Timer for Valid Passed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehSpdOverGndVldPassdRefTi.DocUnits = 'Cnt';
FordVehSpdOverGndVldPassdRefTi.EngDT = dt.u32;
FordVehSpdOverGndVldPassdRefTi.EngMin = 0;
FordVehSpdOverGndVldPassdRefTi.EngMax = 4294967295;
FordVehSpdOverGndVldPassdRefTi.InitRowCol = [1  1];


FordVehSpdOverGndVldPrev = DataDict.PIM;
FordVehSpdOverGndVldPrev.LongName = 'Ford Vehicle Speed Over Ground Valid Previous';
FordVehSpdOverGndVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Speed Over Ground Valid'];
FordVehSpdOverGndVldPrev.DocUnits = 'Cnt';
FordVehSpdOverGndVldPrev.EngDT = dt.lgc;
FordVehSpdOverGndVldPrev.EngMin = 0;
FordVehSpdOverGndVldPrev.EngMax = 1;
FordVehSpdOverGndVldPrev.InitRowCol = [1  1];


FordVehYawRateCmpdInvldFaildRefTi = DataDict.PIM;
FordVehYawRateCmpdInvldFaildRefTi.LongName = 'Ford Vehicle Yaw Rate Compensated Invalid Failed Reference Time';
FordVehYawRateCmpdInvldFaildRefTi.Description = [...
  'Timer for Invalid Failed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehYawRateCmpdInvldFaildRefTi.DocUnits = 'Cnt';
FordVehYawRateCmpdInvldFaildRefTi.EngDT = dt.u32;
FordVehYawRateCmpdInvldFaildRefTi.EngMin = 0;
FordVehYawRateCmpdInvldFaildRefTi.EngMax = 4294967295;
FordVehYawRateCmpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehYawRateCmpdInvldPassdRefTi = DataDict.PIM;
FordVehYawRateCmpdInvldPassdRefTi.LongName = 'Ford Vehicle Yaw Rate Compensated Invalid Passed Reference Time';
FordVehYawRateCmpdInvldPassdRefTi.Description = [...
  'Timer for Invalid Passed reference timer will increment or reset based' ...
  ' on the conditions'];
FordVehYawRateCmpdInvldPassdRefTi.DocUnits = 'Cnt';
FordVehYawRateCmpdInvldPassdRefTi.EngDT = dt.u32;
FordVehYawRateCmpdInvldPassdRefTi.EngMin = 0;
FordVehYawRateCmpdInvldPassdRefTi.EngMax = 4294967295;
FordVehYawRateCmpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehYawRateCmpdPrev = DataDict.PIM;
FordVehYawRateCmpdPrev.LongName = 'Ford Vehicle Yaw Rate Compensated Previous';
FordVehYawRateCmpdPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Rate Compensated'];
FordVehYawRateCmpdPrev.DocUnits = 'HwDegPerSec';
FordVehYawRateCmpdPrev.EngDT = dt.float32;
FordVehYawRateCmpdPrev.EngMin = -75;
FordVehYawRateCmpdPrev.EngMax = 74.92659;
FordVehYawRateCmpdPrev.InitRowCol = [1  1];


FordVehYawRateCmpdRawPrev = DataDict.PIM;
FordVehYawRateCmpdRawPrev.LongName = 'Ford Vehicle Yaw Rate Compensated Raw Previous';
FordVehYawRateCmpdRawPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_VehYawComp_W_Actl.Ele' ...
  'ments are: 0-4093 - "Regular Integer" , 4094 - "CxFFE_NoDataExists"409' ...
  '5 - "CxFFF_Fault"'];
FordVehYawRateCmpdRawPrev.DocUnits = 'Cnt';
FordVehYawRateCmpdRawPrev.EngDT = dt.u16;
FordVehYawRateCmpdRawPrev.EngMin = 0;
FordVehYawRateCmpdRawPrev.EngMax = 4095;
FordVehYawRateCmpdRawPrev.InitRowCol = [1  1];


FordVehYawRateCmpdVldFaildRefTi = DataDict.PIM;
FordVehYawRateCmpdVldFaildRefTi.LongName = 'Ford Vehicle Yaw Rate Compensated Valid Failed Reference Time';
FordVehYawRateCmpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehYawRateCmpdVldFaildRefTi.DocUnits = 'Cnt';
FordVehYawRateCmpdVldFaildRefTi.EngDT = dt.u32;
FordVehYawRateCmpdVldFaildRefTi.EngMin = 0;
FordVehYawRateCmpdVldFaildRefTi.EngMax = 4294967295;
FordVehYawRateCmpdVldFaildRefTi.InitRowCol = [1  1];


FordVehYawRateCmpdVldMissRefTi = DataDict.PIM;
FordVehYawRateCmpdVldMissRefTi.LongName = 'Ford Vehicle Yaw Rate Compensated Valid Missing Reference Time';
FordVehYawRateCmpdVldMissRefTi.Description = [...
  'Timer for Vehicle Yaw Rate Compensated Valid Miss Reference Time will ' ...
  'increment or reset based on the conditions'];
FordVehYawRateCmpdVldMissRefTi.DocUnits = 'Cnt';
FordVehYawRateCmpdVldMissRefTi.EngDT = dt.u32;
FordVehYawRateCmpdVldMissRefTi.EngMin = 0;
FordVehYawRateCmpdVldMissRefTi.EngMax = 4294967295;
FordVehYawRateCmpdVldMissRefTi.InitRowCol = [1  1];


FordVehYawRateCmpdVldPassdRefTi = DataDict.PIM;
FordVehYawRateCmpdVldPassdRefTi.LongName = 'Ford Vehicle Yaw Rate Compensated Valid Passed Reference Time';
FordVehYawRateCmpdVldPassdRefTi.Description = [...
  'Timer for Valid Passed reference timer will increment or reset based o' ...
  'n the conditions'];
FordVehYawRateCmpdVldPassdRefTi.DocUnits = 'Cnt';
FordVehYawRateCmpdVldPassdRefTi.EngDT = dt.u32;
FordVehYawRateCmpdVldPassdRefTi.EngMin = 0;
FordVehYawRateCmpdVldPassdRefTi.EngMax = 4294967295;
FordVehYawRateCmpdVldPassdRefTi.InitRowCol = [1  1];


FordVehYawRateCmpdVldPrev = DataDict.PIM;
FordVehYawRateCmpdVldPrev.LongName = 'Ford Vehicle Yaw Rate Compensated Valid Previous';
FordVehYawRateCmpdVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Rate Compensated Valid'];
FordVehYawRateCmpdVldPrev.DocUnits = 'Cnt';
FordVehYawRateCmpdVldPrev.EngDT = dt.lgc;
FordVehYawRateCmpdVldPrev.EngMin = 0;
FordVehYawRateCmpdVldPrev.EngMax = 1;
FordVehYawRateCmpdVldPrev.InitRowCol = [1  1];


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



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Fixed Value';
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
  'ue is multiplied by this constant to convert millisecond to count'];
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


DTCENA_CNT_LGC = DataDict.Constant;
DTCENA_CNT_LGC.LongName = 'DTC Enable';
DTCENA_CNT_LGC.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'l'];
DTCENA_CNT_LGC.DocUnits = 'Cnt';
DTCENA_CNT_LGC.EngDT = dt.lgc;
DTCENA_CNT_LGC.EngVal = 0;
DTCENA_CNT_LGC.Define = 'Local';


FEATACTV_CNT_LGC = DataDict.Constant;
FEATACTV_CNT_LGC.LongName = 'Feature Active';
FEATACTV_CNT_LGC.Description = [...
  'To check whether the feature is active'];
FEATACTV_CNT_LGC.DocUnits = 'Cnt';
FEATACTV_CNT_LGC.EngDT = dt.lgc;
FEATACTV_CNT_LGC.EngVal = 1;
FEATACTV_CNT_LGC.Define = 'Local';


FORDVEHACMPDFLT_MTRPERSECSQD_F32 = DataDict.Constant;
FORDVEHACMPDFLT_MTRPERSECSQD_F32.LongName = 'Ford Vehicle Acceleration Compensated Fault';
FORDVEHACMPDFLT_MTRPERSECSQD_F32.Description = [...
  'Maximum value of Ford Vehicle Acceleration Compensated'];
FORDVEHACMPDFLT_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
FORDVEHACMPDFLT_MTRPERSECSQD_F32.EngDT = dt.float32;
FORDVEHACMPDFLT_MTRPERSECSQD_F32.EngVal = 17.835;
FORDVEHACMPDFLT_MTRPERSECSQD_F32.Define = 'Local';


FORDVEHACMPDOFFS_MTRPERSECSQD_F32 = DataDict.Constant;
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.LongName = 'Ford Vehicle Acceleration Compensated Offset';
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.Description = [...
  'Offset for Ford Vehicle Acceleration Compensated'];
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.EngDT = dt.float32;
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.EngVal = 17.9;
FORDVEHACMPDOFFS_MTRPERSECSQD_F32.Define = 'Local';


FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32 = DataDict.Constant;
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.LongName = 'Ford Vehicle Acceleration Compensated Raw Minimum';
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.Description = [...
  'Minimum value of Ford Vehicle Acceleration Compensated Raw'];
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.EngDT = dt.float32;
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.EngVal = -17.9;
FORDVEHACMPDRAWMIN_MTRPERSECSQD_F32.Define = 'Local';


FORDVEHACMPDRAW_CNT_U16 = DataDict.Constant;
FORDVEHACMPDRAW_CNT_U16.LongName = 'Ford Vehicle Acceleration Compensated Raw';
FORDVEHACMPDRAW_CNT_U16.Description = [...
  'Initialize value for Ford Vehicle Acceleration Compensated Raw'];
FORDVEHACMPDRAW_CNT_U16.DocUnits = 'Cnt';
FORDVEHACMPDRAW_CNT_U16.EngDT = dt.u16;
FORDVEHACMPDRAW_CNT_U16.EngVal = 1022;
FORDVEHACMPDRAW_CNT_U16.Define = 'Local';


FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32 = DataDict.Constant;
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.LongName = 'Ford Vehicle Acceleration Compensated Scaling Factor';
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Acceleration Compensated'];
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.DocUnits = 'MtrPerSecSqdPerCnt';
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.EngDT = dt.float32;
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.EngVal = 0.035;
FORDVEHACMPDSCAGFAC_MTRPERSECSQDPERCNT_F32.Define = 'Local';


FORDVEHACMPD_MTRPERSECSQD_F32 = DataDict.Constant;
FORDVEHACMPD_MTRPERSECSQD_F32.LongName = 'Ford Vehicle Acceleration Compensated';
FORDVEHACMPD_MTRPERSECSQD_F32.Description = [...
  'Initialise value for Ford Vehicle Acceleration Compensated'];
FORDVEHACMPD_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
FORDVEHACMPD_MTRPERSECSQD_F32.EngDT = dt.float32;
FORDVEHACMPD_MTRPERSECSQD_F32.EngVal = 17.835;
FORDVEHACMPD_MTRPERSECSQD_F32.Define = 'Local';


FORDVEHSPDOVERGNDMAX_KPH_F32 = DataDict.Constant;
FORDVEHSPDOVERGNDMAX_KPH_F32.LongName = 'Ford Vehicle Speed Over Ground Maximum';
FORDVEHSPDOVERGNDMAX_KPH_F32.Description = [...
  'Maximum value of Ford Vehicle Speed Over Ground'];
FORDVEHSPDOVERGNDMAX_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDOVERGNDMAX_KPH_F32.EngDT = dt.float32;
FORDVEHSPDOVERGNDMAX_KPH_F32.EngVal = 655.33;
FORDVEHSPDOVERGNDMAX_KPH_F32.Define = 'Local';


FORDVEHSPDOVERGNDMIN_KPH_F32 = DataDict.Constant;
FORDVEHSPDOVERGNDMIN_KPH_F32.LongName = 'Ford Vehicle Speed Over Ground Minimum';
FORDVEHSPDOVERGNDMIN_KPH_F32.Description = [...
  'Minimum value of Ford Vehicle Speed Over Ground'];
FORDVEHSPDOVERGNDMIN_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDOVERGNDMIN_KPH_F32.EngDT = dt.float32;
FORDVEHSPDOVERGNDMIN_KPH_F32.EngVal = 0;
FORDVEHSPDOVERGNDMIN_KPH_F32.Define = 'Local';


FORDVEHSPDOVERGNDRAWUKWN_CNT_U16 = DataDict.Constant;
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.LongName = 'Ford Vehicle Speed Over Ground Raw Unknown';
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.Description = [...
  'Threshold value for Ford Vehicle Speed Over Ground Raw Unknown'];
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.DocUnits = 'Cnt';
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.EngDT = dt.u16;
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.EngVal = 65534;
FORDVEHSPDOVERGNDRAWUKWN_CNT_U16.Define = 'Local';


FORDVEHSPDOVERGNDRAW_CNT_U16 = DataDict.Constant;
FORDVEHSPDOVERGNDRAW_CNT_U16.LongName = 'Ford Vehicle Speed Over Ground Raw Minimum';
FORDVEHSPDOVERGNDRAW_CNT_U16.Description = [...
  'Initialize value of Ford Vehicle Speed Over Ground Raw'];
FORDVEHSPDOVERGNDRAW_CNT_U16.DocUnits = 'Cnt';
FORDVEHSPDOVERGNDRAW_CNT_U16.EngDT = dt.u16;
FORDVEHSPDOVERGNDRAW_CNT_U16.EngVal = 0;
FORDVEHSPDOVERGNDRAW_CNT_U16.Define = 'Local';


FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32 = DataDict.Constant;
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.LongName = 'Ford Vehicle Speed Over Ground Scaling Factor';
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Speed Over Ground'];
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.DocUnits = 'KphPerCnt';
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.EngDT = dt.float32;
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.EngVal = 0.01;
FORDVEHSPDOVERGNDSCAGFAC_KPHPERCNT_F32.Define = 'Local';


FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32 = DataDict.Constant;
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.LongName = 'Ford Vehicle Yaw Rate Compensated Maximum';
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.Description = [...
  'Maximum value of Ford Vehicle Yaw Rate Compensated'];
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.EngDT = dt.float32;
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.EngVal = 74.92659;
FORDVEHYAWRATECMPDMAX_HWDEGPERSEC_F32.Define = 'Local';


FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32 = DataDict.Constant;
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.LongName = 'Ford Vehicle Yaw Rate Compensated Minimum';
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.Description = [...
  'Minimum value of Ford Vehicle Yaw Rate Compensated'];
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.EngDT = dt.float32;
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.EngVal = -75;
FORDVEHYAWRATECMPDMIN_HWDEGPERSEC_F32.Define = 'Local';


FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32 = DataDict.Constant;
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.LongName = 'Ford Vehicle Yaw Rate Compensated Offset';
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.Description = [...
  'Offset Value of Ford Vehicle Yaw Rate Compensated '];
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.EngDT = dt.float32;
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.EngVal = 75;
FORDVEHYAWRATECMPDOFFS_HWDEGPERSEC_F32.Define = 'Local';


FORDVEHYAWRATECMPDRAW_CNT_U16 = DataDict.Constant;
FORDVEHYAWRATECMPDRAW_CNT_U16.LongName = 'Ford vehicle Yaw Rate Compensated Raw';
FORDVEHYAWRATECMPDRAW_CNT_U16.Description = [...
  'Value to initialise Ford vehicle Yaw Rate Compensated Raw'];
FORDVEHYAWRATECMPDRAW_CNT_U16.DocUnits = 'Cnt';
FORDVEHYAWRATECMPDRAW_CNT_U16.EngDT = dt.u16;
FORDVEHYAWRATECMPDRAW_CNT_U16.EngVal = 4094;
FORDVEHYAWRATECMPDRAW_CNT_U16.Define = 'Local';


FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32 = DataDict.Constant;
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.LongName = 'Ford Vehicle Yaw Rate Compensated Scaling Factor';
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Yaw Rate Compensated'];
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.DocUnits = 'HwDegPerSecPerCnt';
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.EngDT = dt.float32;
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.EngVal = 0.03663;
FORDVEHYAWRATECMPDSCAGFAC_HWDEGPERSECPERCNT_F32.Define = 'Local';


FORDVEHYAWRATECMPD_HWDEGPERSEC_F32 = DataDict.Constant;
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.LongName = 'Ford Vehicle Yaw Rate Compensated';
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.Description = [...
  'Value to initialise Ford vehicle Yaw Rate Compensated'];
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.DocUnits = 'HwDegPerSec';
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.EngDT = dt.float32;
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.EngVal = 74.92659;
FORDVEHYAWRATECMPD_HWDEGPERSEC_F32.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg077MissMsg = DataDict.NTC;
FordMsg077MissMsg.NtcNr = NtcNr1.NTCNR_0X105;
FordMsg077MissMsg.NtcTyp = 'None';
FordMsg077MissMsg.LongName = 'Ford Message 077 Missing Message';
FordMsg077MissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg077MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg077MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg077MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg077MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehLatACmpdInvld = DataDict.NTC;
FordVehLatACmpdInvld.NtcNr = NtcNr1.NTCNR_0X106;
FordVehLatACmpdInvld.NtcTyp = 'None';
FordVehLatACmpdInvld.LongName = 'Ford Vehicle Lateral Acceleration Compensated Invalid';
FordVehLatACmpdInvld.Description = 'Ford Vehicle Lateral Acceleration Compensated Invalid Diagnostic';
FordVehLatACmpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehLatACmpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehLatACmpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehLatACmpdInvld.NtcStsLockdThisIgnCyc = 0;


FordVehLgtACmpdInvld = DataDict.NTC;
FordVehLgtACmpdInvld.NtcNr = NtcNr1.NTCNR_0X107;
FordVehLgtACmpdInvld.NtcTyp = 'None';
FordVehLgtACmpdInvld.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Invalid';
FordVehLgtACmpdInvld.Description = 'Ford Vehicle Longitudinal Acceleration Compensated Invalid Diagnostic';
FordVehLgtACmpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehLgtACmpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehLgtACmpdInvld.NtcStsLockdThisIgnCyc = 0;


FordVehSpdOverGndInvld = DataDict.NTC;
FordVehSpdOverGndInvld.NtcNr = NtcNr1.NTCNR_0X109;
FordVehSpdOverGndInvld.NtcTyp = 'None';
FordVehSpdOverGndInvld.LongName = 'Ford Vehicle Speed Over Ground Invalid';
FordVehSpdOverGndInvld.Description = 'Ford Vehicle Speed Over Ground Invalid Diagnostic';
FordVehSpdOverGndInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehSpdOverGndInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehSpdOverGndInvld.NtcStsLockdThisIgnCyc = 0;


FordVehYawRateCmpdInvld = DataDict.NTC;
FordVehYawRateCmpdInvld.NtcNr = NtcNr1.NTCNR_0X108;
FordVehYawRateCmpdInvld.NtcTyp = 'None';
FordVehYawRateCmpdInvld.LongName = 'Ford Vehicle Yaw Rate Compensated Invalid';
FordVehYawRateCmpdInvld.Description = 'Ford Vehicle Yaw Rate Compensated Invalid Diagnostic';
FordVehYawRateCmpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehYawRateCmpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehYawRateCmpdInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
