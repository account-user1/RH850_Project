%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Apr-2018 17:03:19       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM134A = DataDict.FDD;
MM134A.Version = '1.0.X';
MM134A.LongName = 'Ford Message 2FD Bus High Speed';
MM134A.ShoName  = 'FordMsg2FDBusHiSpd';
MM134A.DesignASIL = 'B';
MM134A.Description = [...
  'The purpose of the Ford Message 2FD Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with Trailer Back up Assist and' ...
  ' Gear Lever Position signals from CAN. The Ford Message 2FD function w' ...
  'ill perform the missing message and signal invalid diagnostics as well' ...
  ' as provide a validity signal for the signal values and received messa' ...
  'ge.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg2FDBusHiSpdInit1 = DataDict.Runnable;
FordMsg2FDBusHiSpdInit1.Context = 'Rte';
FordMsg2FDBusHiSpdInit1.TimeStep = 0;
FordMsg2FDBusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg2FDBusHiSpdPer1 = DataDict.Runnable;
FordMsg2FDBusHiSpdPer1.Context = 'Rte';
FordMsg2FDBusHiSpdPer1.TimeStep = 0.01;
FordMsg2FDBusHiSpdPer1.Description = [...
  'Periodic runnable runnning at 0.01 second rate.'];

ComIPduCallout_Mc_Send_Signals_2_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Mc_Send_Signals_2_FD1.Context = 'NonRte';
ComIPduCallout_Mc_Send_Signals_2_FD1.Description = [...
  'server runnable used to notify the message is received.'];
ComIPduCallout_Mc_Send_Signals_2_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Mc_Send_Signals_2_FD1.Return.Type = 'None';
ComIPduCallout_Mc_Send_Signals_2_FD1.Return.Min = [];
ComIPduCallout_Mc_Send_Signals_2_FD1.Return.Max = [];
ComIPduCallout_Mc_Send_Signals_2_FD1.Return.TestTolerance = [];
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).Name = 'Mc_Send_Signals_2';
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Mc_Send_Signals_2_FD1.Arguments(1).Description = [...
  'This signal notifies that the message is received successfully.'];

ComTimeoutNotification_EsaOn_B_Rq = DataDict.SrvRunnable;
ComTimeoutNotification_EsaOn_B_Rq.Context = 'NonRte';
ComTimeoutNotification_EsaOn_B_Rq.Description = [...
  'server runnable used to notify the message timeout has happened.'];
ComTimeoutNotification_EsaOn_B_Rq.Return = DataDict.CSReturn;
ComTimeoutNotification_EsaOn_B_Rq.Return.Type = 'None';
ComTimeoutNotification_EsaOn_B_Rq.Return.Min = [];
ComTimeoutNotification_EsaOn_B_Rq.Return.Max = [];
ComTimeoutNotification_EsaOn_B_Rq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg2FDBusHiSpdInit1','FordMsg2FDBusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg2FDBusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time from the SimnTi value, handles counter wra' ...
  'pping, and subtracts RefTmr,provides the TiSpan'];
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
SetNtcSts.CallLocation = {'FordMsg2FDBusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg2FDBusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performed'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg2FDBusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode / Modulo';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg2FDBusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Ford Evasive Steer Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'Evasive Steer Assist Enabled signal is a message signal which is recei' ...
  'ved from CAN bus and which will be used for Diagnostics of received me' ...
  'ssage'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordMsg2FDBusHiSpdPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


Ford_EsaOn_B_Rq1 = DataDict.IpSignal;
Ford_EsaOn_B_Rq1.LongName = 'Ford Vehicle Evasive Steer Assist Request';
Ford_EsaOn_B_Rq1.Description = [...
  'Customer datatype should be used. Datatype: Ford_EsaOn_B_Rq. Elements ' ...
  'are:  0 - "Cx0_Off", 1 - "Cx1_On"'];
Ford_EsaOn_B_Rq1.DocUnits = 'Cnt';
Ford_EsaOn_B_Rq1.EngDT = enum.Ford_EsaOn_B_Rq;
Ford_EsaOn_B_Rq1.EngInit = Ford_EsaOn_B_Rq.Cx1_On;
Ford_EsaOn_B_Rq1.EngMin = Ford_EsaOn_B_Rq.Cx0_Off;
Ford_EsaOn_B_Rq1.EngMax = Ford_EsaOn_B_Rq.Cx1_On;
Ford_EsaOn_B_Rq1.ReadIn = {'FordMsg2FDBusHiSpdPer1'};
Ford_EsaOn_B_Rq1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehEvasSteerAssiReq = DataDict.OpSignal;
FordVehEvasSteerAssiReq.LongName = 'Ford Vehicle Evasive Steer Assist Request';
FordVehEvasSteerAssiReq.Description = [...
  'Customer datatype should be used. Datatype: Ford_EsaOn_B_Rq. Elements ' ...
  'are:  0 - "Cx0_Off", 1 - "Cx1_On"'];
FordVehEvasSteerAssiReq.DocUnits = 'Cnt';
FordVehEvasSteerAssiReq.SwcShoName = 'FordMsg2FDBusHiSpd';
FordVehEvasSteerAssiReq.EngDT = enum.Ford_EsaOn_B_Rq;
FordVehEvasSteerAssiReq.EngInit = Ford_EsaOn_B_Rq.Cx1_On;
FordVehEvasSteerAssiReq.EngMin = Ford_EsaOn_B_Rq.Cx0_Off;
FordVehEvasSteerAssiReq.EngMax = Ford_EsaOn_B_Rq.Cx1_On;
FordVehEvasSteerAssiReq.TestTolerance = 0;
FordVehEvasSteerAssiReq.WrittenIn = {'FordMsg2FDBusHiSpdPer1'};
FordVehEvasSteerAssiReq.WriteType = 'Rte';


FordVehEvasSteerAssiReqVld = DataDict.OpSignal;
FordVehEvasSteerAssiReqVld.LongName = 'Ford Vehicle Evasive Steer Assist Request Valid';
FordVehEvasSteerAssiReqVld.Description = [...
  'Validity signal used to capture information related to Ford Vehicle Ev' ...
  'asive Steer Assist Request.'];
FordVehEvasSteerAssiReqVld.DocUnits = 'Cnt';
FordVehEvasSteerAssiReqVld.SwcShoName = 'FordMsg2FDBusHiSpd';
FordVehEvasSteerAssiReqVld.EngDT = dt.lgc;
FordVehEvasSteerAssiReqVld.EngInit = 0;
FordVehEvasSteerAssiReqVld.EngMin = 0;
FordVehEvasSteerAssiReqVld.EngMax = 1;
FordVehEvasSteerAssiReqVld.TestTolerance = 0;
FordVehEvasSteerAssiReqVld.WrittenIn = {'FordMsg2FDBusHiSpdPer1'};
FordVehEvasSteerAssiReqVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd = DataDict.Calibration;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.LongName = 'Ford Vehicle Evasive Steer Assist Request Valid Not Received Timer Threshold';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.Description = [...
  'Threshold to Reset the validity flag'];
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.DocUnits = 'MilliSec';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.EngDT = dt.u16;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.EngVal = 5000;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.EngMin = 0;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.EngMax = 6000;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.Cardinality = 'Cmn';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.CustomerVisible = false;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.Online = false;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.Impact = 'H';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.TuningOwner = 'EPDT';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.GraphLink = {''};
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.Monotony = 'None';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.MaxGrad = 0;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd.PortName = 'FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd';


FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd = DataDict.Calibration;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.LongName = 'Ford Vehicle Evasive Steer Assist Request Valid Received Timer Threshold';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.Description = [...
  'Threshold to Reset the validity flag'];
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.DocUnits = 'MilliSec';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.EngDT = dt.u16;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.EngVal = 5000;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.EngMin = 0;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.EngMax = 6000;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.Cardinality = 'Cmn';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.CustomerVisible = false;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.Online = false;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.Impact = 'H';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.TuningOwner = 'EPDT';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.GraphLink = {''};
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.Monotony = 'None';
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.MaxGrad = 0;
FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd.PortName = 'FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd';


FordMsg2FDBusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 2FD Bus High Speed Missing Message Failed Timer Threshold';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg2FDBusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.EngVal = 5000;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg2FDBusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg2FDBusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg2FDBusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg2FDBusHiSpdMissMsgFaildTiThd';


FordMsg2FDBusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 2FD Bus High Speed Missing Message Passed Timer Threshold';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg2FDBusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg2FDBusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg2FDBusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg2FDBusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg2FDBusHiSpdMissMsgPassdTiThd';



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
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostic Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = [...
  'PIM used to store the previous value of CLear Diagnostic Flag Proxy si' ...
  'gnal.'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'PIM used to identify whether the message is the first message or not.'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehEvasSteerAssiReqPrev = DataDict.PIM;
FordVehEvasSteerAssiReqPrev.LongName = 'Ford Vehicle Evasive Steer Assist Request Previous';
FordVehEvasSteerAssiReqPrev.Description = [...
  'PIM used to store the previous value of Ford Vehicle Evasive Steer Ass' ...
  'ist Request.'];
FordVehEvasSteerAssiReqPrev.DocUnits = 'Cnt';
FordVehEvasSteerAssiReqPrev.EngDT = enum.Ford_EsaOn_B_Rq;
FordVehEvasSteerAssiReqPrev.EngMin = Ford_EsaOn_B_Rq.Cx0_Off;
FordVehEvasSteerAssiReqPrev.EngMax = Ford_EsaOn_B_Rq.Cx1_On;
FordVehEvasSteerAssiReqPrev.InitRowCol = [1  1];


FordVehEvasSteerAssiReqVldPrev = DataDict.PIM;
FordVehEvasSteerAssiReqVldPrev.LongName = 'Ford Vehicle Evasive Steer Assist Request Valid Previous';
FordVehEvasSteerAssiReqVldPrev.Description = [...
  'PIM used to store the previous value of Ford Vehicle Evasive Steer Ass' ...
  'ist Request Valid.'];
FordVehEvasSteerAssiReqVldPrev.DocUnits = 'Cnt';
FordVehEvasSteerAssiReqVldPrev.EngDT = dt.lgc;
FordVehEvasSteerAssiReqVldPrev.EngMin = 0;
FordVehEvasSteerAssiReqVldPrev.EngMax = 1;
FordVehEvasSteerAssiReqVldPrev.InitRowCol = [1  1];


FordVehMsg2FDMiss = DataDict.PIM;
FordVehMsg2FDMiss.LongName = 'Ford Vehicle Message 2FD Missing';
FordVehMsg2FDMiss.Description = [...
  'PIM used to identify whether the message is missing or not.'];
FordVehMsg2FDMiss.DocUnits = 'Cnt';
FordVehMsg2FDMiss.EngDT = dt.lgc;
FordVehMsg2FDMiss.EngMin = 0;
FordVehMsg2FDMiss.EngMax = 1;
FordVehMsg2FDMiss.InitRowCol = [1  1];


FordVehMsg2FDMissTmr = DataDict.PIM;
FordVehMsg2FDMissTmr.LongName = 'Ford Vehicle Message 2FD Missing Timer';
FordVehMsg2FDMissTmr.Description = [...
  'PIM used to store the time related to missing message timer'];
FordVehMsg2FDMissTmr.DocUnits = 'Cnt';
FordVehMsg2FDMissTmr.EngDT = dt.u32;
FordVehMsg2FDMissTmr.EngMin = 0;
FordVehMsg2FDMissTmr.EngMax = 4294967295;
FordVehMsg2FDMissTmr.InitRowCol = [1  1];


FordVehMsg2FDNotRxdRefTi = DataDict.PIM;
FordVehMsg2FDNotRxdRefTi.LongName = 'Ford Vehicle Message 2FD Not Received Reference Time';
FordVehMsg2FDNotRxdRefTi.Description = [...
  'PIM used to store the time related to not received message'];
FordVehMsg2FDNotRxdRefTi.DocUnits = 'Cnt';
FordVehMsg2FDNotRxdRefTi.EngDT = dt.u32;
FordVehMsg2FDNotRxdRefTi.EngMin = 0;
FordVehMsg2FDNotRxdRefTi.EngMax = 4294967295;
FordVehMsg2FDNotRxdRefTi.InitRowCol = [1  1];


FordVehMsg2FDRxdRefTi = DataDict.PIM;
FordVehMsg2FDRxdRefTi.LongName = 'Ford Vehicle Message 2FD Received Reference Time';
FordVehMsg2FDRxdRefTi.Description = [...
  'PIM used to store the time related to received message.'];
FordVehMsg2FDRxdRefTi.DocUnits = 'Cnt';
FordVehMsg2FDRxdRefTi.EngDT = dt.u32;
FordVehMsg2FDRxdRefTi.EngMin = 0;
FordVehMsg2FDRxdRefTi.EngMax = 4294967295;
FordVehMsg2FDRxdRefTi.InitRowCol = [1  1];


FordVehMsg2FDRxdTmr = DataDict.PIM;
FordVehMsg2FDRxdTmr.LongName = 'Ford Vehicle Message 2FD Received Timer';
FordVehMsg2FDRxdTmr.Description = [...
  'PIM used to store the time related to received message timer'];
FordVehMsg2FDRxdTmr.DocUnits = 'Cnt';
FordVehMsg2FDRxdTmr.EngDT = dt.u32;
FordVehMsg2FDRxdTmr.EngMin = 0;
FordVehMsg2FDRxdTmr.EngMax = 4294967295;
FordVehMsg2FDRxdTmr.InitRowCol = [1  1];



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


DIAGENA_CNT_LGC = DataDict.Constant;
DIAGENA_CNT_LGC.LongName = 'DIAGNOSTICS Enable';
DIAGENA_CNT_LGC.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibitsignal' ...
  ', Missing Message Diagnostic Inhibit, Manufacturing Diagnostic Inhibit' ...
  ',Invalid Message Diagnostic Inhibit.'];
DIAGENA_CNT_LGC.DocUnits = 'Cnt';
DIAGENA_CNT_LGC.EngDT = dt.lgc;
DIAGENA_CNT_LGC.EngVal = 0;
DIAGENA_CNT_LGC.Define = 'Local';


FEATACTV_CNT_LGC = DataDict.Constant;
FEATACTV_CNT_LGC.LongName = 'Feature Active';
FEATACTV_CNT_LGC.Description = [...
  'To check whether the feature is active so that diagnostics can be perf' ...
  'ormed'];
FEATACTV_CNT_LGC.DocUnits = 'Cnt';
FEATACTV_CNT_LGC.EngDT = dt.lgc;
FEATACTV_CNT_LGC.EngVal = 1;
FEATACTV_CNT_LGC.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the Electric Power Steering Life Cycle Mode.'];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg2FDMissMsg = DataDict.NTC;
FordMsg2FDMissMsg.NtcNr = NtcNr1.NTCNR_0X191;
FordMsg2FDMissMsg.NtcTyp = 'None';
FordMsg2FDMissMsg.LongName = 'Ford Message 2FD Missing Message';
FordMsg2FDMissMsg.Description = 'Ford Message 2FD Missing Message Diagnostic trouble code is used to store message missing information.';
FordMsg2FDMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg2FDMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg2FDMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg2FDMissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
