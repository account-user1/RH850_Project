%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Apr-2018 11:32:55       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM089A = DataDict.FDD;
MM089A.Version = '2.0.X';
MM089A.LongName = 'Ford Message 4B0 Bus High Speed';
MM089A.ShoName  = 'FordMsg4B0BusHiSpd';
MM089A.DesignASIL = 'B';
MM089A.Description = [...
  'The purpose of the Ford Message 4B0 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Torq' ...
  'ue Steer Compensation, Brake Oscillation Reduction, Lane Detection War' ...
  'ning, LKA, Traffic Jam Assist, Lane Center Assist, and Evasive Steer A' ...
  'ssist functions from CAN. The Ford Message 4B0 function will perform t' ...
  'he missing message and signal invalid diagnostics as well as provide a' ...
  ' validity flag for the signal values and received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg4B0BusHiSpdInit1 = DataDict.Runnable;
FordMsg4B0BusHiSpdInit1.Context = 'Rte';
FordMsg4B0BusHiSpdInit1.TimeStep = 0;
FordMsg4B0BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg4B0BusHiSpdPer1 = DataDict.Runnable;
FordMsg4B0BusHiSpdPer1.Context = 'Rte';
FordMsg4B0BusHiSpdPer1.TimeStep = 0.01;
FordMsg4B0BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond '];

ComIPduCallout_ABS_BrkBst_Data_FD1 = DataDict.SrvRunnable;
ComIPduCallout_ABS_BrkBst_Data_FD1.Context = 'NonRte';
ComIPduCallout_ABS_BrkBst_Data_FD1.Description = [...
  'It provides a message reception service when a new message is received' ...
  '.'];
ComIPduCallout_ABS_BrkBst_Data_FD1.Return = DataDict.CSReturn;
ComIPduCallout_ABS_BrkBst_Data_FD1.Return.Type = 'None';
ComIPduCallout_ABS_BrkBst_Data_FD1.Return.Min = [];
ComIPduCallout_ABS_BrkBst_Data_FD1.Return.Max = [];
ComIPduCallout_ABS_BrkBst_Data_FD1.Return.TestTolerance = [];
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).Name = 'ABS_BrkBst_Data';
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_ABS_BrkBst_Data_FD1.Arguments(1).Description = 'It is a message reception flag.';

ComTimeoutNotification_YawStabilityIndex = DataDict.SrvRunnable;
ComTimeoutNotification_YawStabilityIndex.Context = 'NonRte';
ComTimeoutNotification_YawStabilityIndex.Description = [...
  'It provides a message timeout service to determine if the message is m' ...
  'issing.'];
ComTimeoutNotification_YawStabilityIndex.Return = DataDict.CSReturn;
ComTimeoutNotification_YawStabilityIndex.Return.Type = 'None';
ComTimeoutNotification_YawStabilityIndex.Return.Min = [];
ComTimeoutNotification_YawStabilityIndex.Return.Max = [];
ComTimeoutNotification_YawStabilityIndex.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg4B0BusHiSpdInit1','FordMsg4B0BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg4B0BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg4B0BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Ford Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performed.'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC.'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Ford Evasive Steering Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Ford Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Torque Steering Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
FordTqSteerCmpEnad.ReadType = 'Rte';


Ford_YawStabilityIndex = DataDict.IpSignal;
Ford_YawStabilityIndex.LongName = 'Ford Yaw Stability Index';
Ford_YawStabilityIndex.Description = [...
  'Customer datatype should be used. Datatype: Ford_YawStabilityIndex. El' ...
  'ements are:  510 - "Cx1FE_NoDataExists",  511 - "Cx1FF_Fault"'];
Ford_YawStabilityIndex.DocUnits = 'Cnt';
Ford_YawStabilityIndex.EngDT = dt.u16;
Ford_YawStabilityIndex.EngInit = 256;
Ford_YawStabilityIndex.EngMin = 0;
Ford_YawStabilityIndex.EngMax = 511;
Ford_YawStabilityIndex.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
Ford_YawStabilityIndex.ReadType = 'Rte';


LaneDetnWarnEnad = DataDict.IpSignal;
LaneDetnWarnEnad.LongName = 'Lane Detection Warning Enabled';
LaneDetnWarnEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
LaneDetnWarnEnad.DocUnits = 'Cnt';
LaneDetnWarnEnad.EngDT = dt.lgc;
LaneDetnWarnEnad.EngInit = 0;
LaneDetnWarnEnad.EngMin = 0;
LaneDetnWarnEnad.EngMax = 1;
LaneDetnWarnEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
LaneDetnWarnEnad.ReadType = 'Rte';


LaneKeepAssiEnad = DataDict.IpSignal;
LaneKeepAssiEnad.LongName = 'Lane Keep Assist Enabled';
LaneKeepAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
LaneKeepAssiEnad.DocUnits = 'Cnt';
LaneKeepAssiEnad.EngDT = dt.lgc;
LaneKeepAssiEnad.EngInit = 0;
LaneKeepAssiEnad.EngMin = 0;
LaneKeepAssiEnad.EngMax = 1;
LaneKeepAssiEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
LaneKeepAssiEnad.ReadType = 'Rte';


TrfcJamAssiEnad = DataDict.IpSignal;
TrfcJamAssiEnad.LongName = 'Traffic Jam Assist Enabled';
TrfcJamAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
TrfcJamAssiEnad.DocUnits = 'Cnt';
TrfcJamAssiEnad.EngDT = dt.lgc;
TrfcJamAssiEnad.EngInit = 0;
TrfcJamAssiEnad.EngMin = 0;
TrfcJamAssiEnad.EngMax = 1;
TrfcJamAssiEnad.ReadIn = {'FordMsg4B0BusHiSpdPer1'};
TrfcJamAssiEnad.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehYawStabyRaw = DataDict.OpSignal;
FordVehYawStabyRaw.LongName = 'Ford Vehicle Yaw Stability Raw';
FordVehYawStabyRaw.Description = [...
  'Customer datatype should be used. Datatype: Ford_YawStabilityIndex. El' ...
  'ements are:  510 - "Cx1FE_NoDataExists",  511 - "Cx1FF_Fault"'];
FordVehYawStabyRaw.DocUnits = 'Cnt';
FordVehYawStabyRaw.SwcShoName = 'FordMsg4B0BusHiSpd';
FordVehYawStabyRaw.EngDT = dt.u16;
FordVehYawStabyRaw.EngInit = 256;
FordVehYawStabyRaw.EngMin = 0;
FordVehYawStabyRaw.EngMax = 511;
FordVehYawStabyRaw.TestTolerance = 0;
FordVehYawStabyRaw.WrittenIn = {'FordMsg4B0BusHiSpdPer1'};
FordVehYawStabyRaw.WriteType = 'Rte';


FordVehYawStabyVld = DataDict.OpSignal;
FordVehYawStabyVld.LongName = 'Ford Vehicle Yaw Stability Valid';
FordVehYawStabyVld.Description = [...
  'This signal will be true if the message is present otherwise false'];
FordVehYawStabyVld.DocUnits = 'Cnt';
FordVehYawStabyVld.SwcShoName = 'FordMsg4B0BusHiSpd';
FordVehYawStabyVld.EngDT = dt.lgc;
FordVehYawStabyVld.EngInit = 0;
FordVehYawStabyVld.EngMin = 0;
FordVehYawStabyVld.EngMax = 1;
FordVehYawStabyVld.TestTolerance = 0;
FordVehYawStabyVld.WrittenIn = {'FordMsg4B0BusHiSpdPer1'};
FordVehYawStabyVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg4B0BusHiSpdCanDtcInhbTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.LongName = 'Can DTC Inhibit Time Threshold';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.Description = [...
  'It is the time threshold to check whether the condition that the FordC' ...
  'anDtcInhb is False lasts long enough.'];
FordMsg4B0BusHiSpdCanDtcInhbTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.EngVal = 2000;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.EngMin = 0;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.Online = false;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.Impact = 'L';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdCanDtcInhbTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdCanDtcInhbTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdCanDtcInhbTiThd.PortName = 'FordMsg4B0BusHiSpdCanDtcInhbTiThd';


FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.LongName = 'Message Fault Diagnostic Time Threshold';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.Description = [...
  'It is the time threshold to check whether the condition that the value' ...
  ' in the message is equal to 511 in NTC diagnostic logic lasts long eno' ...
  'ugh.'];
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.EngVal = 0;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.Online = false;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.Impact = 'L';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd.PortName = 'FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd';


FordMsg4B0BusHiSpdMsgFltTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgFltTiThd.LongName = 'Message Fault Time Threshold';
FordMsg4B0BusHiSpdMsgFltTiThd.Description = [...
  'It is the time threshold to check whether the condition that the value' ...
  ' in the message is equal to 511 lasts long enough.'];
FordMsg4B0BusHiSpdMsgFltTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgFltTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgFltTiThd.EngVal = 0;
FordMsg4B0BusHiSpdMsgFltTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgFltTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgFltTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgFltTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgFltTiThd.Online = false;
FordMsg4B0BusHiSpdMsgFltTiThd.Impact = 'H';
FordMsg4B0BusHiSpdMsgFltTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgFltTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgFltTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgFltTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgFltTiThd.PortName = 'FordMsg4B0BusHiSpdMsgFltTiThd';


FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.LongName = 'Message Missing NTC Diagnostic Time Threshold';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.Description = [...
  'It is the time threshold to check whether the condition that the messa' ...
  'ge is missing in NTC diagnostic logic lasts long enough.'];
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.EngVal = 100;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.Online = false;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.Impact = 'L';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd.PortName = 'FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd';


FordMsg4B0BusHiSpdMsgMissTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgMissTiThd.LongName = 'Message Missing Time Threshold';
FordMsg4B0BusHiSpdMsgMissTiThd.Description = [...
  'It is the time threshold to check whether the condition that the messa' ...
  'ge is missing lasts long enough.'];
FordMsg4B0BusHiSpdMsgMissTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgMissTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgMissTiThd.EngVal = 10;
FordMsg4B0BusHiSpdMsgMissTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgMissTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgMissTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgMissTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgMissTiThd.Online = false;
FordMsg4B0BusHiSpdMsgMissTiThd.Impact = 'H';
FordMsg4B0BusHiSpdMsgMissTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgMissTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgMissTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgMissTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgMissTiThd.PortName = 'FordMsg4B0BusHiSpdMsgMissTiThd';


FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.LongName = 'Message Received NTC Diagnostic Time Threshold';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.Description = [...
  'It is the time threshold to check whether the condition that the messa' ...
  'ge is received lasts long enough.'];
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.EngVal = 0;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.Online = false;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.Impact = 'L';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd.PortName = 'FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd';


FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.LongName = 'Message Valid NTC Diagnostic Time Threshold';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.Description = [...
  'It is the time threshold to check whether the condition that the value' ...
  ' in the message is less than 510 in NTC diagnostic lasts long enough.'];
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.EngVal = 0;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.Online = false;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.Impact = 'L';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd.PortName = 'FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd';


FordMsg4B0BusHiSpdMsgVldTiThd = DataDict.Calibration;
FordMsg4B0BusHiSpdMsgVldTiThd.LongName = 'Message Valid Time Threshold';
FordMsg4B0BusHiSpdMsgVldTiThd.Description = [...
  'It is the time threshold to check whether the condition that the value' ...
  ' in the message is less than 510 lasts long enough.'];
FordMsg4B0BusHiSpdMsgVldTiThd.DocUnits = 'MilliSec';
FordMsg4B0BusHiSpdMsgVldTiThd.EngDT = dt.u16p0;
FordMsg4B0BusHiSpdMsgVldTiThd.EngVal = 5000;
FordMsg4B0BusHiSpdMsgVldTiThd.EngMin = 0;
FordMsg4B0BusHiSpdMsgVldTiThd.EngMax = 6000;
FordMsg4B0BusHiSpdMsgVldTiThd.Cardinality = 'Cmn';
FordMsg4B0BusHiSpdMsgVldTiThd.CustomerVisible = false;
FordMsg4B0BusHiSpdMsgVldTiThd.Online = false;
FordMsg4B0BusHiSpdMsgVldTiThd.Impact = 'H';
FordMsg4B0BusHiSpdMsgVldTiThd.TuningOwner = 'EPDT';
FordMsg4B0BusHiSpdMsgVldTiThd.GraphLink = {''};
FordMsg4B0BusHiSpdMsgVldTiThd.Monotony = 'None';
FordMsg4B0BusHiSpdMsgVldTiThd.MaxGrad = Inf;
FordMsg4B0BusHiSpdMsgVldTiThd.PortName = 'FordMsg4B0BusHiSpdMsgVldTiThd';



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
CanDtcInhbRefTi.LongName = 'Can Dtc Inhibit Reference timer';
CanDtcInhbRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
CanDtcInhbRefTi.DocUnits = 'Cnt';
CanDtcInhbRefTi.EngDT = dt.u32;
CanDtcInhbRefTi.EngMin = 0;
CanDtcInhbRefTi.EngMax = 4294967295;
CanDtcInhbRefTi.InitRowCol = [1  1];


ClrDiagcFlgProxyPrev = DataDict.PIM;
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostic Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = [...
  'It stores the previous value of ClrDiagcFlgProxy.'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FordMsg4B0Miss = DataDict.PIM;
FordMsg4B0Miss.LongName = 'Ford Message 4B0 Missing';
FordMsg4B0Miss.Description = [...
  'It is used to indicate that the service ComTimeoutNotification_YawStab' ...
  'ilityIndex is called and the message is missing.'];
FordMsg4B0Miss.DocUnits = 'Cnt';
FordMsg4B0Miss.EngDT = dt.lgc;
FordMsg4B0Miss.EngMin = 0;
FordMsg4B0Miss.EngMax = 1;
FordMsg4B0Miss.InitRowCol = [1  1];


FordVehYawStabyRawPrev = DataDict.PIM;
FordVehYawStabyRawPrev.LongName = 'Ford Vehicle Yaw Stability Raw Previous';
FordVehYawStabyRawPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Stability Raw Previous'];
FordVehYawStabyRawPrev.DocUnits = 'Cnt';
FordVehYawStabyRawPrev.EngDT = dt.u16;
FordVehYawStabyRawPrev.EngMin = 0;
FordVehYawStabyRawPrev.EngMax = 511;
FordVehYawStabyRawPrev.InitRowCol = [1  1];


FordVehYawStabyVldPrev = DataDict.PIM;
FordVehYawStabyVldPrev.LongName = 'Ford Vehicle Yaw Stability Valid Previous';
FordVehYawStabyVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Yaw Stability Valid'];
FordVehYawStabyVldPrev.DocUnits = 'Cnt';
FordVehYawStabyVldPrev.EngDT = dt.lgc;
FordVehYawStabyVldPrev.EngMin = 0;
FordVehYawStabyVldPrev.EngMax = 1;
FordVehYawStabyVldPrev.InitRowCol = [1  1];


IniVehYawStabyInvld = DataDict.PIM;
IniVehYawStabyInvld.LongName = 'Initial Vehicle Yaw Stability Invalid';
IniVehYawStabyInvld.Description = [...
  'It is used to set FordVehYawStabyVld to True for the first time withou' ...
  't time delay. It is set to False after FordVehYawStabyVld is set to Fa' ...
  'lse for the first time. Therefore, setting FordVehYawStabyVld to True ' ...
  'has a time delay after the first time.'];
IniVehYawStabyInvld.DocUnits = 'Cnt';
IniVehYawStabyInvld.EngDT = dt.lgc;
IniVehYawStabyInvld.EngMin = 0;
IniVehYawStabyInvld.EngMax = 1;
IniVehYawStabyInvld.InitRowCol = [1  1];


MsgFltNtcDiagcRefTi = DataDict.PIM;
MsgFltNtcDiagcRefTi.LongName = 'Message Fault NTC Diagnostic Reference Time';
MsgFltNtcDiagcRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time in NTC ' ...
  'diagnostic during which the value in the message is equal to 511.'];
MsgFltNtcDiagcRefTi.DocUnits = 'Cnt';
MsgFltNtcDiagcRefTi.EngDT = dt.u32;
MsgFltNtcDiagcRefTi.EngMin = 0;
MsgFltNtcDiagcRefTi.EngMax = 4294967295;
MsgFltNtcDiagcRefTi.InitRowCol = [1  1];


MsgFltRefTi = DataDict.PIM;
MsgFltRefTi.LongName = 'Message Fault Reference Time';
MsgFltRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time during ' ...
  'which the value in the message is equal to 511.'];
MsgFltRefTi.DocUnits = 'Cnt';
MsgFltRefTi.EngDT = dt.u32;
MsgFltRefTi.EngMin = 0;
MsgFltRefTi.EngMax = 4294967295;
MsgFltRefTi.InitRowCol = [1  1];


MsgMissNtcDiagcRefTi = DataDict.PIM;
MsgMissNtcDiagcRefTi.LongName = 'Message Missing NTC Diagnostic Reference Time';
MsgMissNtcDiagcRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time in NTC ' ...
  'diagnostic during which the message is missing.'];
MsgMissNtcDiagcRefTi.DocUnits = 'Cnt';
MsgMissNtcDiagcRefTi.EngDT = dt.u32;
MsgMissNtcDiagcRefTi.EngMin = 0;
MsgMissNtcDiagcRefTi.EngMax = 4294967295;
MsgMissNtcDiagcRefTi.InitRowCol = [1  1];


MsgNoDataExistNtcDiagcRefTi = DataDict.PIM;
MsgNoDataExistNtcDiagcRefTi.LongName = 'Message No Data Exist NTC Diagnostic Reference Time';
MsgNoDataExistNtcDiagcRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time in NTC ' ...
  'diagnostic during which the value in the message is equal to 510.'];
MsgNoDataExistNtcDiagcRefTi.DocUnits = 'Cnt';
MsgNoDataExistNtcDiagcRefTi.EngDT = dt.u32;
MsgNoDataExistNtcDiagcRefTi.EngMin = 0;
MsgNoDataExistNtcDiagcRefTi.EngMax = 4294967295;
MsgNoDataExistNtcDiagcRefTi.InitRowCol = [1  1];


MsgNoDataExistRefTi = DataDict.PIM;
MsgNoDataExistRefTi.LongName = 'Message No Data Exist Reference Time';
MsgNoDataExistRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time during ' ...
  'which the value in the message is equal to 510.'];
MsgNoDataExistRefTi.DocUnits = 'Cnt';
MsgNoDataExistRefTi.EngDT = dt.u32;
MsgNoDataExistRefTi.EngMin = 0;
MsgNoDataExistRefTi.EngMax = 4294967295;
MsgNoDataExistRefTi.InitRowCol = [1  1];


MsgNotRxdRefTi = DataDict.PIM;
MsgNotRxdRefTi.LongName = 'Message Not Received Reference Time';
MsgNotRxdRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time durig w' ...
  'hich the message is not received.'];
MsgNotRxdRefTi.DocUnits = 'Cnt';
MsgNotRxdRefTi.EngDT = dt.u32;
MsgNotRxdRefTi.EngMin = 0;
MsgNotRxdRefTi.EngMax = 4294967295;
MsgNotRxdRefTi.InitRowCol = [1  1];


MsgRxdNtcDiagcRefTi = DataDict.PIM;
MsgRxdNtcDiagcRefTi.LongName = 'Message Received NTC Diagnostic Reference Time';
MsgRxdNtcDiagcRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time in NTC ' ...
  'diagnostic during which the message is received.'];
MsgRxdNtcDiagcRefTi.DocUnits = 'Cnt';
MsgRxdNtcDiagcRefTi.EngDT = dt.u32;
MsgRxdNtcDiagcRefTi.EngMin = 0;
MsgRxdNtcDiagcRefTi.EngMax = 4294967295;
MsgRxdNtcDiagcRefTi.InitRowCol = [1  1];


MsgVldNtcDiagcRefTi = DataDict.PIM;
MsgVldNtcDiagcRefTi.LongName = 'Message Valid NTC Diagnostic Reference Time';
MsgVldNtcDiagcRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time in NTC ' ...
  'diagnostic during which the value in the message is less than 510.'];
MsgVldNtcDiagcRefTi.DocUnits = 'Cnt';
MsgVldNtcDiagcRefTi.EngDT = dt.u32;
MsgVldNtcDiagcRefTi.EngMin = 0;
MsgVldNtcDiagcRefTi.EngMax = 4294967295;
MsgVldNtcDiagcRefTi.InitRowCol = [1  1];


MsgVldRefTi = DataDict.PIM;
MsgVldRefTi.LongName = 'Message Valid Reference Time';
MsgVldRefTi.Description = [...
  'It is used as the reference time to calculate the elapsed time during ' ...
  'which the value in the message is less than 510.'];
MsgVldRefTi.DocUnits = 'Cnt';
MsgVldRefTi.EngDT = dt.u32;
MsgVldRefTi.EngMin = 0;
MsgVldRefTi.EngMax = 4294967295;
MsgVldRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Count to Millisecond';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The Constant ' ...
  'value is multiplied by this threshold to convert millisec to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


FORDVEHYAWSATBYRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHYAWSATBYRAWMAX_CNT_U16.LongName = 'Ford Vehicle Yaw Stability Raw Max';
FORDVEHYAWSATBYRAWMAX_CNT_U16.Description = [...
  'It is used in the saturation block to limit the maximum value of FordV' ...
  'ehYawStabyRaw.'];
FORDVEHYAWSATBYRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHYAWSATBYRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHYAWSATBYRAWMAX_CNT_U16.EngVal = 511;
FORDVEHYAWSATBYRAWMAX_CNT_U16.Define = 'Local';


FORDVEHYAWSATBYRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHYAWSATBYRAWMIN_CNT_U16.LongName = 'Ford Vehicle Yaw Stability Raw Min';
FORDVEHYAWSATBYRAWMIN_CNT_U16.Description = [...
  'It is used in the saturation block to limit the minimum value of FordV' ...
  'ehYawStabyRaw.'];
FORDVEHYAWSATBYRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHYAWSATBYRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHYAWSATBYRAWMIN_CNT_U16.EngVal = 0;
FORDVEHYAWSATBYRAWMIN_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


MSGFLT_CNT_U16 = DataDict.Constant;
MSGFLT_CNT_U16.LongName = 'Message Fault';
MSGFLT_CNT_U16.Description = [...
  'When the output FordVehYawStabyRaw equal to the value, it means Messag' ...
  'e Fault in the message.'];
MSGFLT_CNT_U16.DocUnits = 'Cnt';
MSGFLT_CNT_U16.EngDT = dt.u16;
MSGFLT_CNT_U16.EngVal = 511;
MSGFLT_CNT_U16.Define = 'Local';


MSGNODATAEXIST_CNT_U16 = DataDict.Constant;
MSGNODATAEXIST_CNT_U16.LongName = 'Message No Data Exist';
MSGNODATAEXIST_CNT_U16.Description = [...
  'When the output FordVehYawStabyRaw equal to the value, it means No Dat' ...
  'a Exists in the message.'];
MSGNODATAEXIST_CNT_U16.DocUnits = 'Cnt';
MSGNODATAEXIST_CNT_U16.EngDT = dt.u16;
MSGNODATAEXIST_CNT_U16.EngVal = 510;
MSGNODATAEXIST_CNT_U16.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No Debounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


NTCDIAGCCONTITHD_MILLISEC_U32 = DataDict.Constant;
NTCDIAGCCONTITHD_MILLISEC_U32.LongName = 'NTC Diagnostic Constant Time Threshold';
NTCDIAGCCONTITHD_MILLISEC_U32.Description = [...
  'It is the constant threshold to check whether set the NTC. It is used ' ...
  'for NTC 0x18D and 0x18E.'];
NTCDIAGCCONTITHD_MILLISEC_U32.DocUnits = 'MilliSec';
NTCDIAGCCONTITHD_MILLISEC_U32.EngDT = dt.u32;
NTCDIAGCCONTITHD_MILLISEC_U32.EngVal = 5000;
NTCDIAGCCONTITHD_MILLISEC_U32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg4B0MissMsg = DataDict.NTC;
FordMsg4B0MissMsg.NtcNr = NtcNr1.NTCNR_0X18D;
FordMsg4B0MissMsg.NtcTyp = 'None';
FordMsg4B0MissMsg.LongName = 'Ford Message 4B0 Missing Message ';
FordMsg4B0MissMsg.Description = 'FordMsg4B0 Missing Message Diagnostic';
FordMsg4B0MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg4B0MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg4B0MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg4B0MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehYawStabyInvld = DataDict.NTC;
FordVehYawStabyInvld.NtcNr = NtcNr1.NTCNR_0X18E;
FordVehYawStabyInvld.NtcTyp = 'None';
FordVehYawStabyInvld.LongName = 'Ford Vehicle Yaw Stability Invalid';
FordVehYawStabyInvld.Description = 'Ford Vehicle Yaw Stability Invalid Diagnostic';
FordVehYawStabyInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehYawStabyInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehYawStabyInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehYawStabyInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
