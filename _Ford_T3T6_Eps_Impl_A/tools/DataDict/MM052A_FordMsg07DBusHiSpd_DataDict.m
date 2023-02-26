%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 03-Apr-2018 10:29:32       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM052A = DataDict.FDD;
MM052A.Version = '2.0.X';
MM052A.LongName = 'Ford Message 07D Bus High Speed';
MM052A.ShoName  = 'FordMsg07DBusHiSpd';
MM052A.DesignASIL = 'B';
MM052A.Description = [...
  'The purpose of the Ford Message 07D Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Brak' ...
  'e Oscillation Reduction and Trailer Back Up Assist function from CAN. ' ...
  'The Ford Message 07D function will perform the missing message diagnos' ...
  'tic, signal invalid diagnostic, and provide a validity flag for the re' ...
  'ceived message and signal values.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg07DBusHiSpdInit1 = DataDict.Runnable;
FordMsg07DBusHiSpdInit1.Context = 'Rte';
FordMsg07DBusHiSpdInit1.TimeStep = 0;
FordMsg07DBusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg07DBusHiSpdPer1 = DataDict.Runnable;
FordMsg07DBusHiSpdPer1.Context = 'Rte';
FordMsg07DBusHiSpdPer1.TimeStep = 0.01;
FordMsg07DBusHiSpdPer1.Description = 'Periodic Runnable at 0.01sec';

ComIPduCallout_BrakeSnData_4_FD1 = DataDict.SrvRunnable;
ComIPduCallout_BrakeSnData_4_FD1.Context = 'NonRte';
ComIPduCallout_BrakeSnData_4_FD1.Description = [...
  'Server Runnable for clear diagnostics'];
ComIPduCallout_BrakeSnData_4_FD1.Return = DataDict.CSReturn;
ComIPduCallout_BrakeSnData_4_FD1.Return.Type = 'None';
ComIPduCallout_BrakeSnData_4_FD1.Return.Min = [];
ComIPduCallout_BrakeSnData_4_FD1.Return.Max = [];
ComIPduCallout_BrakeSnData_4_FD1.Return.TestTolerance = [];
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).Name = 'BrakeSnData';
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BrakeSnData_4_FD1.Arguments(1).Description = [...
  'BrakeSnData is set to one when service is invoked'];

ComTimeoutNotification_BrkTot_Tq_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_BrkTot_Tq_Actl.Context = 'NonRte';
ComTimeoutNotification_BrkTot_Tq_Actl.Description = [...
  'Server Runnable for disabling serial communication'];
ComTimeoutNotification_BrkTot_Tq_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_BrkTot_Tq_Actl.Return.Type = 'None';
ComTimeoutNotification_BrkTot_Tq_Actl.Return.Min = [];
ComTimeoutNotification_BrkTot_Tq_Actl.Return.Max = [];
ComTimeoutNotification_BrkTot_Tq_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg07DBusHiSpdInit1','FordMsg07DBusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg07DBusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg07DBusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg07DBusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Ford Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'Ford Brake Oscillation Reduction Enabled signal is a message signal wh' ...
  'ich is received from CAN bus and which will be used for Diagnostics of' ...
  ' received message'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg07DBusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performed'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg07DBusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg07DBusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Ford Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'Ford Trailer Back Up Assist Enabled signal is a message signal which i' ...
  's received from CAN bus and which will be used for Diagnostics of rece' ...
  'ived message'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg07DBusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_BrkTot_Tq_Actl = DataDict.IpSignal;
Ford_BrkTot_Tq_Actl.LongName = 'Ford Brake Total Torque Actual';
Ford_BrkTot_Tq_Actl.Description = [...
  'Ford Brake Total Torque Actual signal is a message signal which is rec' ...
  'eived from CAN bus and which will be processed and used in EPS. Custom' ...
  'er Data type : Ford_BrkTot_Tq_Actl,Source signal range: [0,8189], Cx1F' ...
  'FE_Unknown(8190) and Cx1FFF_Fault(8191).'];
Ford_BrkTot_Tq_Actl.DocUnits = 'Cnt';
Ford_BrkTot_Tq_Actl.EngDT = dt.u16;
Ford_BrkTot_Tq_Actl.EngInit = 0;
Ford_BrkTot_Tq_Actl.EngMin = 0;
Ford_BrkTot_Tq_Actl.EngMax = 8191;
Ford_BrkTot_Tq_Actl.ReadIn = {'FordMsg07DBusHiSpdPer1'};
Ford_BrkTot_Tq_Actl.ReadType = 'Rte';


Ford_VehVertComp_A_Actl = DataDict.IpSignal;
Ford_VehVertComp_A_Actl.LongName = 'Ford Vehicle Vertical Compensated Acceleration Actual';
Ford_VehVertComp_A_Actl.Description = [...
  'Ford Vehicle Vertical Compensated Acceleration Actual signal is a mess' ...
  'age signal which is received from CAN bus and which will be processed ' ...
  'and used in EPS. Customer Data type : Ford_VehVertComp_A_Actl,Source s' ...
  'ignal range: [0,1021], Cx3FE_NoDataExists(1022) and Cx3FF_Fault(1023).' ...
  ''];
Ford_VehVertComp_A_Actl.DocUnits = 'Cnt';
Ford_VehVertComp_A_Actl.EngDT = dt.u16;
Ford_VehVertComp_A_Actl.EngInit = 0;
Ford_VehVertComp_A_Actl.EngMin = 0;
Ford_VehVertComp_A_Actl.EngMax = 1023;
Ford_VehVertComp_A_Actl.ReadIn = {'FordMsg07DBusHiSpdPer1'};
Ford_VehVertComp_A_Actl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehActBrkTqRaw = DataDict.OpSignal;
FordVehActBrkTqRaw.LongName = 'Ford Vehicle Actual Brake Torque Raw';
FordVehActBrkTqRaw.Description = [...
  'Processed value of Ford Vehicle Actual Brake Torque Raw to be used by ' ...
  'EPS'];
FordVehActBrkTqRaw.DocUnits = 'Cnt';
FordVehActBrkTqRaw.SwcShoName = 'FordMsg07DBusHiSpd';
FordVehActBrkTqRaw.EngDT = dt.u16;
FordVehActBrkTqRaw.EngInit = 0;
FordVehActBrkTqRaw.EngMin = 0;
FordVehActBrkTqRaw.EngMax = 8191;
FordVehActBrkTqRaw.TestTolerance = 0;
FordVehActBrkTqRaw.WrittenIn = {'FordMsg07DBusHiSpdPer1'};
FordVehActBrkTqRaw.WriteType = 'Rte';


FordVehBrkTqVld = DataDict.OpSignal;
FordVehBrkTqVld.LongName = 'Ford Vehicle Brake Torque Valid';
FordVehBrkTqVld.Description = [...
  'This signal Check the validity of Ford Vehicle Brake Torque '];
FordVehBrkTqVld.DocUnits = 'Cnt';
FordVehBrkTqVld.SwcShoName = 'FordMsg07DBusHiSpd';
FordVehBrkTqVld.EngDT = dt.lgc;
FordVehBrkTqVld.EngInit = 0;
FordVehBrkTqVld.EngMin = 0;
FordVehBrkTqVld.EngMax = 1;
FordVehBrkTqVld.TestTolerance = 0;
FordVehBrkTqVld.WrittenIn = {'FordMsg07DBusHiSpdPer1'};
FordVehBrkTqVld.WriteType = 'Rte';


FordVehVertACmpdRaw = DataDict.OpSignal;
FordVehVertACmpdRaw.LongName = 'Ford Vehicle Vertical Acceleration Compensated Raw';
FordVehVertACmpdRaw.Description = [...
  'Processed value of Ford Vehicle Vertical Acceleration Compensated Raw ' ...
  'to be used by EPS'];
FordVehVertACmpdRaw.DocUnits = 'Cnt';
FordVehVertACmpdRaw.SwcShoName = 'FordMsg07DBusHiSpd';
FordVehVertACmpdRaw.EngDT = dt.u16;
FordVehVertACmpdRaw.EngInit = 0;
FordVehVertACmpdRaw.EngMin = 0;
FordVehVertACmpdRaw.EngMax = 1023;
FordVehVertACmpdRaw.TestTolerance = 0;
FordVehVertACmpdRaw.WrittenIn = {'FordMsg07DBusHiSpdPer1'};
FordVehVertACmpdRaw.WriteType = 'Rte';


FordVehVertAVld = DataDict.OpSignal;
FordVehVertAVld.LongName = 'Ford Vehicle Vertical Acceleration Valid';
FordVehVertAVld.Description = [...
  'This signal Check the validity of Ford Vehicle Vertical Acceleration '];
FordVehVertAVld.DocUnits = 'Cnt';
FordVehVertAVld.SwcShoName = 'FordMsg07DBusHiSpd';
FordVehVertAVld.EngDT = dt.lgc;
FordVehVertAVld.EngInit = 0;
FordVehVertAVld.EngMin = 0;
FordVehVertAVld.EngMax = 1;
FordVehVertAVld.TestTolerance = 0;
FordVehVertAVld.WrittenIn = {'FordMsg07DBusHiSpdPer1'};
FordVehVertAVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd = DataDict.Calibration;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.LongName = 'Ford Message 07D Bus High Speed Actual Brake Torque Signal Invalid Passed Threshold';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.Description = [...
  'Threshold to update the Ford Vehicle Brake Torque Validity signal when' ...
  'the Ford Brake Total Torque Actual signal is invalid'];
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.EngDT = dt.u16;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.EngVal = 0;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.EngMin = 0;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.EngMax = 6000;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.CustomerVisible = false;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.Online = false;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.Impact = 'L';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.GraphLink = {''};
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.Monotony = 'None';
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.MaxGrad = 0;
FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd.PortName = 'FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd';


FordMsg07DBusHiSpdFordVehActBrkTqInvldThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Actual Brake Torque Invalid Threshold';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.Description = [...
  'Threshold to set Ford Vehicle Actual Brake Torque Invalid to False'];
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.EngVal = 0;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.Online = false;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehActBrkTqInvldThd.PortName = 'FordMsg07DBusHiSpdFordVehActBrkTqInvldThd';


FordMsg07DBusHiSpdFordVehActBrkTqVldThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Actual Brake Torque Valid Threshold';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.Description = [...
  'Threshold to set Ford Vehicle Actual Brake Torque Valid to True'];
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.EngVal = 0;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.Online = false;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehActBrkTqVldThd.PortName = 'FordMsg07DBusHiSpdFordVehActBrkTqVldThd';


FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Brake Torque Valid Missing Message Threshold';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.Description = [...
  'Threshold to set Ford Vehicle Actual Brake Torque Valid to False'];
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.EngVal = 5000;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.Online = false;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd.PortName = 'FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd';


FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Vertical Acceleration Compensated Signal Invalid Threshold';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.Description = [...
  'Threshold to set Ford Vehicle Vertical Acceleration Compensated Signal' ...
  ' Invalid to False'];
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.EngVal = 0;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.Online = false;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd.PortName = 'FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd';


FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Vertical Acceleration Compensated Signal Valid Threshold';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.Description = [...
  'Threshold to set Ford Vehicle Vertical Acceleration Compensated Signal' ...
  ' Valid to True'];
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.EngVal = 5000;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.Online = false;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd.PortName = 'FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd';


FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd = DataDict.Calibration;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.LongName = 'Ford Message 07D Bus High Speed Ford Vehicle Vertical Acceleration Valid Missing Message Threshold';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.Description = [...
  'Threshold to set Ford Vehicle Vertical Acceleration Compensated Signal' ...
  ' Invalid to False'];
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.EngDT = dt.u16;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.EngVal = 5000;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.EngMin = 0;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.EngMax = 6000;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.CustomerVisible = false;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.Online = false;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.Impact = 'H';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.GraphLink = {''};
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.Monotony = 'None';
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.MaxGrad = 0;
FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd.PortName = 'FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd';


FordMsg07DBusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg07DBusHiSpdMissMsgFaildThd.LongName = 'Ford Message 07D Bus High Speed Missing Message Failed Threshold';
FordMsg07DBusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg07DBusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg07DBusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg07DBusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg07DBusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg07DBusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg07DBusHiSpdMissMsgFaildThd.Online = false;
FordMsg07DBusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg07DBusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg07DBusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg07DBusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg07DBusHiSpdMissMsgFaildThd.PortName = 'FordMsg07DBusHiSpdMissMsgFaildThd';


FordMsg07DBusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg07DBusHiSpdMissMsgPassdThd.LongName = 'Ford Message 07D Bus High Speed Missing Message Passed Threshold';
FordMsg07DBusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to reset the Missing message NTC'];
FordMsg07DBusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg07DBusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg07DBusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg07DBusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg07DBusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg07DBusHiSpdMissMsgPassdThd.Online = false;
FordMsg07DBusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg07DBusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg07DBusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg07DBusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg07DBusHiSpdMissMsgPassdThd.PortName = 'FordMsg07DBusHiSpdMissMsgPassdThd';


FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd = DataDict.Calibration;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.LongName = 'Ford Message 07D Vehicle Actual Torque Brake Bus High Speed Invalid Failed Threshold';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Actual Torque Brake Invalid NTC'];
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.EngDT = dt.u16;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.EngVal = 0;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.EngMin = 0;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.EngMax = 6000;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.CustomerVisible = false;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.Online = false;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.Impact = 'L';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.GraphLink = {''};
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.Monotony = 'None';
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.MaxGrad = 0;
FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd.PortName = 'FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd';


FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd = DataDict.Calibration;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.LongName = 'Ford Message 07D Vertical Acceleration Compensated Signal Bus High Speed Invalid Failed Threshold';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.Description = [...
  'Threshold to set the Ford Vehicle Vertical Acceleration Compensated Si' ...
  'gnal Invalid NTC'];
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.EngDT = dt.u16;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.EngVal = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.EngMin = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.EngMax = 6000;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.CustomerVisible = false;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.Online = false;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.Impact = 'L';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.GraphLink = {''};
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.Monotony = 'None';
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.MaxGrad = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd.PortName = 'FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd';


FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd = DataDict.Calibration;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.LongName = 'Ford Message 07D Bus High Speed Vertical Acceleration Compensated Signal Invalid Passed Threshold';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.Description = [...
  'Threshold to reset the Ford Vehicle Vertical Acceleration Compensated ' ...
  'Signal Invalid NTC'];
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.DocUnits = 'MilliSec';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.EngDT = dt.u16;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.EngVal = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.EngMin = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.EngMax = 6000;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.Cardinality = 'Cmn';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.CustomerVisible = false;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.Online = false;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.Impact = 'L';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.TuningOwner = 'EPDT';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.GraphLink = {''};
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.Monotony = 'None';
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.MaxGrad = 0;
FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd.PortName = 'FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd';



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


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehActBrkTqRawPrev = DataDict.PIM;
FordVehActBrkTqRawPrev.LongName = 'Ford Vehicle Actual Brake Torque Raw Previous';
FordVehActBrkTqRawPrev.Description = [...
  'Holds previous value of FordVehActBrkTqRaw when FordMsg07D message is ' ...
  'missing'];
FordVehActBrkTqRawPrev.DocUnits = 'Cnt';
FordVehActBrkTqRawPrev.EngDT = dt.u16;
FordVehActBrkTqRawPrev.EngMin = 0;
FordVehActBrkTqRawPrev.EngMax = 8191;
FordVehActBrkTqRawPrev.InitRowCol = [1  1];


FordVehActBrkTqSigInvldFaildRefTi = DataDict.PIM;
FordVehActBrkTqSigInvldFaildRefTi.LongName = 'Ford Vehicle Actual Brake Torque Signal Invalid Failed Reference Time';
FordVehActBrkTqSigInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons for NTC0x110'];
FordVehActBrkTqSigInvldFaildRefTi.DocUnits = 'Cnt';
FordVehActBrkTqSigInvldFaildRefTi.EngDT = dt.u32;
FordVehActBrkTqSigInvldFaildRefTi.EngMin = 0;
FordVehActBrkTqSigInvldFaildRefTi.EngMax = 4294967295;
FordVehActBrkTqSigInvldFaildRefTi.InitRowCol = [1  1];


FordVehActBrkTqSigInvldPassdRefTi = DataDict.PIM;
FordVehActBrkTqSigInvldPassdRefTi.LongName = 'Ford Vehicle Actual Brake Torque Signal Invalid Passed Reference Time';
FordVehActBrkTqSigInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons for NTC0x110'];
FordVehActBrkTqSigInvldPassdRefTi.DocUnits = 'Cnt';
FordVehActBrkTqSigInvldPassdRefTi.EngDT = dt.u32;
FordVehActBrkTqSigInvldPassdRefTi.EngMin = 0;
FordVehActBrkTqSigInvldPassdRefTi.EngMax = 4294967295;
FordVehActBrkTqSigInvldPassdRefTi.InitRowCol = [1  1];


FordVehActBrkTqVldFaildRefTi = DataDict.PIM;
FordVehActBrkTqVldFaildRefTi.LongName = 'Ford Vehicle Actual Brake Torque Valid Failed Reference Time';
FordVehActBrkTqVldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Actual Brake Torque Valid Failed Reference Time' ...
  ' will increment or reset based on the conditions'];
FordVehActBrkTqVldFaildRefTi.DocUnits = 'Cnt';
FordVehActBrkTqVldFaildRefTi.EngDT = dt.u32;
FordVehActBrkTqVldFaildRefTi.EngMin = 0;
FordVehActBrkTqVldFaildRefTi.EngMax = 4294967295;
FordVehActBrkTqVldFaildRefTi.InitRowCol = [1  1];


FordVehActBrkTqVldPassdRefTi = DataDict.PIM;
FordVehActBrkTqVldPassdRefTi.LongName = 'Ford Vehicle Actual Brake Torque Valid Passed Reference Time';
FordVehActBrkTqVldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Actual Brake Torque Valid Passed Reference Time' ...
  ' will increment or reset based on the conditions'];
FordVehActBrkTqVldPassdRefTi.DocUnits = 'Cnt';
FordVehActBrkTqVldPassdRefTi.EngDT = dt.u32;
FordVehActBrkTqVldPassdRefTi.EngMin = 0;
FordVehActBrkTqVldPassdRefTi.EngMax = 4294967295;
FordVehActBrkTqVldPassdRefTi.InitRowCol = [1  1];


FordVehBrkTqVldMissMsgRefTi = DataDict.PIM;
FordVehBrkTqVldMissMsgRefTi.LongName = 'Ford Vehicle Brake Torque Valid Missing Message Reference Time';
FordVehBrkTqVldMissMsgRefTi.Description = [...
  'Timer to update Ford Vehicle Brake Torque Valid signal as true or fals' ...
  'e when FordMsg07D message is missing'];
FordVehBrkTqVldMissMsgRefTi.DocUnits = 'Cnt';
FordVehBrkTqVldMissMsgRefTi.EngDT = dt.u32;
FordVehBrkTqVldMissMsgRefTi.EngMin = 0;
FordVehBrkTqVldMissMsgRefTi.EngMax = 4294967295;
FordVehBrkTqVldMissMsgRefTi.InitRowCol = [1  1];


FordVehBrkTqVldPrev = DataDict.PIM;
FordVehBrkTqVldPrev.LongName = 'Ford Vehicle Brake Torque Valid Previous';
FordVehBrkTqVldPrev.Description = [...
  'Holds previous value of FordVehBrkTqVld when FordMsg07D message is mis' ...
  'sing'];
FordVehBrkTqVldPrev.DocUnits = 'Cnt';
FordVehBrkTqVldPrev.EngDT = dt.lgc;
FordVehBrkTqVldPrev.EngMin = 0;
FordVehBrkTqVldPrev.EngMax = 1;
FordVehBrkTqVldPrev.InitRowCol = [1  1];


FordVehMsg07DMiss = DataDict.PIM;
FordVehMsg07DMiss.LongName = 'Ford Vehicle Message 07D Missing';
FordVehMsg07DMiss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg07DMiss.DocUnits = 'Cnt';
FordVehMsg07DMiss.EngDT = dt.lgc;
FordVehMsg07DMiss.EngMin = 0;
FordVehMsg07DMiss.EngMax = 1;
FordVehMsg07DMiss.InitRowCol = [1  1];


FordVehVertACmpdRawPrev = DataDict.PIM;
FordVehVertACmpdRawPrev.LongName = 'Ford Vehicle Vertical Acceleration Compensated Raw Previous';
FordVehVertACmpdRawPrev.Description = [...
  'Holds previous value of FordVehVertACmpdRaw when FordMsg07D message is' ...
  ' missing'];
FordVehVertACmpdRawPrev.DocUnits = 'Cnt';
FordVehVertACmpdRawPrev.EngDT = dt.u16;
FordVehVertACmpdRawPrev.EngMin = 0;
FordVehVertACmpdRawPrev.EngMax = 1023;
FordVehVertACmpdRawPrev.InitRowCol = [1  1];


FordVehVertACmpdSigInvldFaildRefTi = DataDict.PIM;
FordVehVertACmpdSigInvldFaildRefTi.LongName = 'Ford Vehicle Vertical Acceleration Compensated Signal Invalid Failed Reference Time';
FordVehVertACmpdSigInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons for NTC0x111'];
FordVehVertACmpdSigInvldFaildRefTi.DocUnits = 'Cnt';
FordVehVertACmpdSigInvldFaildRefTi.EngDT = dt.u32;
FordVehVertACmpdSigInvldFaildRefTi.EngMin = 0;
FordVehVertACmpdSigInvldFaildRefTi.EngMax = 4294967295;
FordVehVertACmpdSigInvldFaildRefTi.InitRowCol = [1  1];


FordVehVertACmpdSigInvldPassdRefTi = DataDict.PIM;
FordVehVertACmpdSigInvldPassdRefTi.LongName = 'Ford Vehicle Vertical Acceleration Compensated Signal Invalid Passed Reference Time';
FordVehVertACmpdSigInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons for NTC0x111'];
FordVehVertACmpdSigInvldPassdRefTi.DocUnits = 'Cnt';
FordVehVertACmpdSigInvldPassdRefTi.EngDT = dt.u32;
FordVehVertACmpdSigInvldPassdRefTi.EngMin = 0;
FordVehVertACmpdSigInvldPassdRefTi.EngMax = 4294967295;
FordVehVertACmpdSigInvldPassdRefTi.InitRowCol = [1  1];


FordVehVertACmpdSigVldFaildRefTi = DataDict.PIM;
FordVehVertACmpdSigVldFaildRefTi.LongName = 'Ford Vehicle Vertical Acceleration Compensated Signal Valid Failed Reference Time';
FordVehVertACmpdSigVldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Vertical Acceleration Compensated Signal Valid ' ...
  'Failed Reference Time will increment or reset based on the conditions'];
FordVehVertACmpdSigVldFaildRefTi.DocUnits = 'Cnt';
FordVehVertACmpdSigVldFaildRefTi.EngDT = dt.u32;
FordVehVertACmpdSigVldFaildRefTi.EngMin = 0;
FordVehVertACmpdSigVldFaildRefTi.EngMax = 4294967295;
FordVehVertACmpdSigVldFaildRefTi.InitRowCol = [1  1];


FordVehVertACmpdSigVldPassdRefTi = DataDict.PIM;
FordVehVertACmpdSigVldPassdRefTi.LongName = 'Ford Vehicle Vertical Acceleration Compensated Signal Valid Passed Reference Time';
FordVehVertACmpdSigVldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Vertical Acceleration Compensated Signal Valid ' ...
  'Passed Reference Time will increment or reset based on the conditions'];
FordVehVertACmpdSigVldPassdRefTi.DocUnits = 'Cnt';
FordVehVertACmpdSigVldPassdRefTi.EngDT = dt.u32;
FordVehVertACmpdSigVldPassdRefTi.EngMin = 0;
FordVehVertACmpdSigVldPassdRefTi.EngMax = 4294967295;
FordVehVertACmpdSigVldPassdRefTi.InitRowCol = [1  1];


FordVehVertAVldMissMsgRefTi = DataDict.PIM;
FordVehVertAVldMissMsgRefTi.LongName = 'Ford Vehicle Vertical Acceleration Valid Missing Message Reference Time';
FordVehVertAVldMissMsgRefTi.Description = [...
  'Timer for Ford Vehicle Vertical Acceleration Compensated Signal Valid ' ...
  'Missing Reference Time will increment or reset based on the conditions' ...
  ''];
FordVehVertAVldMissMsgRefTi.DocUnits = 'Cnt';
FordVehVertAVldMissMsgRefTi.EngDT = dt.u32;
FordVehVertAVldMissMsgRefTi.EngMin = 0;
FordVehVertAVldMissMsgRefTi.EngMax = 4294967295;
FordVehVertAVldMissMsgRefTi.InitRowCol = [1  1];


FordVehVertAVldPrev = DataDict.PIM;
FordVehVertAVldPrev.LongName = 'Ford Vehicle Vertical Acceleration Valid Previous';
FordVehVertAVldPrev.Description = [...
  'Previous Value of Ford Vehicle Vertical Acceleration Valid'];
FordVehVertAVldPrev.DocUnits = 'Cnt';
FordVehVertAVldPrev.EngDT = dt.lgc;
FordVehVertAVldPrev.EngMin = 0;
FordVehVertAVldPrev.EngMax = 1;
FordVehVertAVldPrev.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
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
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Timer Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = [...
  'It is constant threshold of 5000ms '];
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
  'Constant use to indicate debounce stepsize as 65535'];
DEBSTEP_CNT_U16.DocUnits = 'Cnt';
DEBSTEP_CNT_U16.EngDT = dt.u16;
DEBSTEP_CNT_U16.EngVal = 65535;
DEBSTEP_CNT_U16.Define = 'Local';


FAULTACTLBRKTQ_CNT_U16 = DataDict.Constant;
FAULTACTLBRKTQ_CNT_U16.LongName = 'Fault Actual Brake Torque';
FAULTACTLBRKTQ_CNT_U16.Description = [...
  'Threshold to verify Ford Vehicle Actual Brake Torque is Fault'];
FAULTACTLBRKTQ_CNT_U16.DocUnits = 'Cnt';
FAULTACTLBRKTQ_CNT_U16.EngDT = dt.u16;
FAULTACTLBRKTQ_CNT_U16.EngVal = 8191;
FAULTACTLBRKTQ_CNT_U16.Define = 'Local';


FAULTVERTACMPD_CNT_U16 = DataDict.Constant;
FAULTVERTACMPD_CNT_U16.LongName = 'Fault Vertical Acceleration Compensated';
FAULTVERTACMPD_CNT_U16.Description = [...
  'Threshold to verify Ford Vehicle Vertical Acceleration Compensated is ' ...
  'Fault'];
FAULTVERTACMPD_CNT_U16.DocUnits = 'Cnt';
FAULTVERTACMPD_CNT_U16.EngDT = dt.u16;
FAULTVERTACMPD_CNT_U16.EngVal = 1023;
FAULTVERTACMPD_CNT_U16.Define = 'Local';


FORDVEHACTBRKTQRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHACTBRKTQRAWMAX_CNT_U16.LongName = 'Ford Vehicle Actual Brake Torque Raw Maximum';
FORDVEHACTBRKTQRAWMAX_CNT_U16.Description = [...
  'It is used for limiting Ford Vehicle Actual Brake Torque Raw'];
FORDVEHACTBRKTQRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHACTBRKTQRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHACTBRKTQRAWMAX_CNT_U16.EngVal = 8191;
FORDVEHACTBRKTQRAWMAX_CNT_U16.Define = 'Local';


FORDVEHACTBRKTQRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHACTBRKTQRAWMIN_CNT_U16.LongName = 'Ford Vehicle Actual Brake Torque Raw Minimum';
FORDVEHACTBRKTQRAWMIN_CNT_U16.Description = [...
  'It is used for limiting Ford Vehicle Actual Brake Torque Raw'];
FORDVEHACTBRKTQRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHACTBRKTQRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHACTBRKTQRAWMIN_CNT_U16.EngVal = 0;
FORDVEHACTBRKTQRAWMIN_CNT_U16.Define = 'Local';


FORDVEHVERTACMPDRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHVERTACMPDRAWMAX_CNT_U16.LongName = 'Ford Vehicle Vertical Acceleration Compensated Raw Minimum';
FORDVEHVERTACMPDRAWMAX_CNT_U16.Description = [...
  'It is used for limiting Ford Vehicle Vertical Acceleration Compensated' ...
  ' Raw'];
FORDVEHVERTACMPDRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHVERTACMPDRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHVERTACMPDRAWMAX_CNT_U16.EngVal = 1023;
FORDVEHVERTACMPDRAWMAX_CNT_U16.Define = 'Local';


FORDVEHVERTACMPDRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHVERTACMPDRAWMIN_CNT_U16.LongName = 'Ford Vehicle Vertical Acceleration Compensated Raw Maximum';
FORDVEHVERTACMPDRAWMIN_CNT_U16.Description = [...
  'It is used for limiting Ford Vehicle Vertical Acceleration Compensated' ...
  ' Raw'];
FORDVEHVERTACMPDRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHVERTACMPDRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHVERTACMPDRAWMIN_CNT_U16.EngVal = 0;
FORDVEHVERTACMPDRAWMIN_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


NODATAVERTACMPD_CNT_U16 = DataDict.Constant;
NODATAVERTACMPD_CNT_U16.LongName = 'No Data Exist Vertical Acceleration Compensated';
NODATAVERTACMPD_CNT_U16.Description = [...
  'Threshold to verify Ford Vehicle Vertical Acceleration Compensated is ' ...
  'NO Data Exist'];
NODATAVERTACMPD_CNT_U16.DocUnits = 'Cnt';
NODATAVERTACMPD_CNT_U16.EngDT = dt.u16;
NODATAVERTACMPD_CNT_U16.EngVal = 1022;
NODATAVERTACMPD_CNT_U16.Define = 'Local';


UKWNACTLBRKTQ_CNT_U16 = DataDict.Constant;
UKWNACTLBRKTQ_CNT_U16.LongName = 'Unknown Actual Brake Torque';
UKWNACTLBRKTQ_CNT_U16.Description = [...
  'Threshold to verify Ford Vehicle Actual Brake Torque is Unknown'];
UKWNACTLBRKTQ_CNT_U16.DocUnits = 'Cnt';
UKWNACTLBRKTQ_CNT_U16.EngDT = dt.u16;
UKWNACTLBRKTQ_CNT_U16.EngVal = 8190;
UKWNACTLBRKTQ_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg07DMissMsg = DataDict.NTC;
FordMsg07DMissMsg.NtcNr = NtcNr1.NTCNR_0X10F;
FordMsg07DMissMsg.NtcTyp = 'None';
FordMsg07DMissMsg.LongName = 'Ford Message 07D Missing Message';
FordMsg07DMissMsg.Description = 'Ford Message 07D Missing Message Diagnostic';
FordMsg07DMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg07DMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg07DMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg07DMissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehActBrkTqSigInvld = DataDict.NTC;
FordVehActBrkTqSigInvld.NtcNr = NtcNr1.NTCNR_0X110;
FordVehActBrkTqSigInvld.NtcTyp = 'None';
FordVehActBrkTqSigInvld.LongName = 'Ford Vehicle Actual Brake Torque Signal Invalid';
FordVehActBrkTqSigInvld.Description = 'Ford Message 07D Invalid Message Diagnostic';
FordVehActBrkTqSigInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehActBrkTqSigInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehActBrkTqSigInvld.NtcStsLockdThisIgnCyc = 0;


FordVehVertACmpdSigInvld = DataDict.NTC;
FordVehVertACmpdSigInvld.NtcNr = NtcNr1.NTCNR_0X111;
FordVehVertACmpdSigInvld.NtcTyp = 'None';
FordVehVertACmpdSigInvld.LongName = 'Ford Vehicle Vertical Acceleration Compensated Signal Invalid';
FordVehVertACmpdSigInvld.Description = 'Ford Message 07D Invalid Message Diagnostic';
FordVehVertACmpdSigInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehVertACmpdSigInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehVertACmpdSigInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
