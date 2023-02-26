%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Apr-2018 10:38:39       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM057A = DataDict.FDD;
MM057A.Version = '1.0.X';
MM057A.LongName = 'Ford Message 215 Bus High Speed';
MM057A.ShoName  = 'FordMsg215BusHiSpd';
MM057A.DesignASIL = 'B';
MM057A.Description = [...
  'The purpose of the Ford Message 215 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with Trailer Back up Assist and' ...
  ' Gear Lever Position signals from CAN. The Ford Message 215 function w' ...
  'ill perform the missing message and signal invalid diagnostics as well' ...
  ' as provide a validity signal for the signal values and received messa' ...
  'ge'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg215BusHiSpdInit1 = DataDict.Runnable;
FordMsg215BusHiSpdInit1.Context = 'Rte';
FordMsg215BusHiSpdInit1.TimeStep = 0;
FordMsg215BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg215BusHiSpdPer1 = DataDict.Runnable;
FordMsg215BusHiSpdPer1.Context = 'Rte';
FordMsg215BusHiSpdPer1.TimeStep = 0.01;
FordMsg215BusHiSpdPer1.Description = [...
  'Periodic runnable runnning at 0.01 second rate.'];

ComIPduCallout_APIM_Send_Signals_2_FD1 = DataDict.SrvRunnable;
ComIPduCallout_APIM_Send_Signals_2_FD1.Context = 'NonRte';
ComIPduCallout_APIM_Send_Signals_2_FD1.Description = [...
  'server runnable used to notify the message is received.'];
ComIPduCallout_APIM_Send_Signals_2_FD1.Return = DataDict.CSReturn;
ComIPduCallout_APIM_Send_Signals_2_FD1.Return.Type = 'None';
ComIPduCallout_APIM_Send_Signals_2_FD1.Return.Min = [];
ComIPduCallout_APIM_Send_Signals_2_FD1.Return.Max = [];
ComIPduCallout_APIM_Send_Signals_2_FD1.Return.TestTolerance = [];
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).Name = 'TrlrAidMde';
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_APIM_Send_Signals_2_FD1.Arguments(1).Description = [...
  'This signal notifies that the message is received successfully.'];

ComTimeoutNotification_TrlrAidMde_D_Rq = DataDict.SrvRunnable;
ComTimeoutNotification_TrlrAidMde_D_Rq.Context = 'NonRte';
ComTimeoutNotification_TrlrAidMde_D_Rq.Description = [...
  'server runnable used to notify the message timeout has happened.'];
ComTimeoutNotification_TrlrAidMde_D_Rq.Return = DataDict.CSReturn;
ComTimeoutNotification_TrlrAidMde_D_Rq.Return.Type = 'None';
ComTimeoutNotification_TrlrAidMde_D_Rq.Return.Min = [];
ComTimeoutNotification_TrlrAidMde_D_Rq.Return.Max = [];
ComTimeoutNotification_TrlrAidMde_D_Rq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg215BusHiSpdInit1','FordMsg215BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg215BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg215BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg215BusHiSpdPer1'};
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
FordCanDtcInhb.ReadIn = {'FordMsg215BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg215BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'Trailer Back Up Assist Enabled signal is a message signal which is rec' ...
  'eived from CAN bus and which will be used for Diagnostics of received ' ...
  'message'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg215BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_TrlrAidMde_D_Rq1 = DataDict.IpSignal;
Ford_TrlrAidMde_D_Rq1.LongName = 'Ford Trailer Aid Mode Request';
Ford_TrlrAidMde_D_Rq1.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidMde_D_Rq. Elem' ...
  'ents are:  0 - "Cx0_NoRequest", 1 - "Cx1_Mode_1", 2 - "Cx2_Mode_2", 3 ' ...
  '- "Cx3_Mode_3"'];
Ford_TrlrAidMde_D_Rq1.DocUnits = 'Cnt';
Ford_TrlrAidMde_D_Rq1.EngDT = enum.Ford_TrlrAidMde_D_Rq;
Ford_TrlrAidMde_D_Rq1.EngInit = Ford_TrlrAidMde_D_Rq.Cx0_NoRequest;
Ford_TrlrAidMde_D_Rq1.EngMin = Ford_TrlrAidMde_D_Rq.Cx0_NoRequest;
Ford_TrlrAidMde_D_Rq1.EngMax = Ford_TrlrAidMde_D_Rq.Cx3_Mode_3;
Ford_TrlrAidMde_D_Rq1.ReadIn = {'FordMsg215BusHiSpdPer1'};
Ford_TrlrAidMde_D_Rq1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehTrlrAidModReq = DataDict.OpSignal;
FordVehTrlrAidModReq.LongName = 'Ford Vehicle Trailer Aid Mode Request';
FordVehTrlrAidModReq.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidMde_D_Rq. Elem' ...
  'ents are:  0 - "Cx0_NoRequest", 1 - "Cx1_Mode_1", 2 - "Cx2_Mode_2", 3 ' ...
  '- "Cx3_Mode_3"'];
FordVehTrlrAidModReq.DocUnits = 'Cnt';
FordVehTrlrAidModReq.SwcShoName = 'FordMsg215BusHiSpd';
FordVehTrlrAidModReq.EngDT = enum.Ford_TrlrAidMde_D_Rq;
FordVehTrlrAidModReq.EngInit = Ford_TrlrAidMde_D_Rq.Cx0_NoRequest;
FordVehTrlrAidModReq.EngMin = Ford_TrlrAidMde_D_Rq.Cx0_NoRequest;
FordVehTrlrAidModReq.EngMax = Ford_TrlrAidMde_D_Rq.Cx3_Mode_3;
FordVehTrlrAidModReq.TestTolerance = 0;
FordVehTrlrAidModReq.WrittenIn = {'FordMsg215BusHiSpdPer1'};
FordVehTrlrAidModReq.WriteType = 'Rte';


FordVehTrlrAidModReqVld = DataDict.OpSignal;
FordVehTrlrAidModReqVld.LongName = 'Ford Vehicle Trailer Aid Mode Request Valid';
FordVehTrlrAidModReqVld.Description = [...
  'Used for Ford Vehicle Trailer Aid Mode Request Validity information.'];
FordVehTrlrAidModReqVld.DocUnits = 'Cnt';
FordVehTrlrAidModReqVld.SwcShoName = 'FordMsg215BusHiSpd';
FordVehTrlrAidModReqVld.EngDT = dt.lgc;
FordVehTrlrAidModReqVld.EngInit = 0;
FordVehTrlrAidModReqVld.EngMin = 0;
FordVehTrlrAidModReqVld.EngMax = 1;
FordVehTrlrAidModReqVld.TestTolerance = 0;
FordVehTrlrAidModReqVld.WrittenIn = {'FordMsg215BusHiSpdPer1'};
FordVehTrlrAidModReqVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd = DataDict.Calibration;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.LongName = 'Ford Message 215 Bus High Speed Ford Vehicle Trailer Aid Mode Request Valid Not Received Timer Threshold';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.DocUnits = 'MilliSec';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.EngDT = dt.u16;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.EngVal = 5000;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.EngMin = 0;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.EngMax = 6000;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.Cardinality = 'Cmn';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.CustomerVisible = false;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.Online = false;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.Impact = 'L';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.TuningOwner = 'EPDT';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.GraphLink = {''};
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.Monotony = 'None';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.MaxGrad = 0;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd.PortName = 'FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd';


FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd = DataDict.Calibration;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.LongName = 'Ford Message 215 Bus High Speed Ford Vehicle Trailer Aid Mode Request Valid Received Timer Threshold';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.DocUnits = 'MilliSec';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.EngDT = dt.u16;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.EngVal = 0;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.EngMin = 0;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.EngMax = 6000;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.Cardinality = 'Cmn';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.CustomerVisible = false;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.Online = false;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.Impact = 'L';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.TuningOwner = 'EPDT';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.GraphLink = {''};
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.Monotony = 'None';
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.MaxGrad = 0;
FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd.PortName = 'FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd';


FordMsg215BusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg215BusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 215 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg215BusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg215BusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg215BusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg215BusHiSpdMissMsgFaildTiThd.EngVal = 5000;
FordMsg215BusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg215BusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg215BusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg215BusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg215BusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg215BusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg215BusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg215BusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg215BusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg215BusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg215BusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg215BusHiSpdMissMsgFaildTiThd';


FordMsg215BusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg215BusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 215 Bus High Speed Missing Message Passed Timer Threshold';
FordMsg215BusHiSpdMissMsgPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg215BusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg215BusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg215BusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg215BusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg215BusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg215BusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg215BusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg215BusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg215BusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg215BusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg215BusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg215BusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg215BusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg215BusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg215BusHiSpdMissMsgPassdTiThd';



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


FordVehMsg215Miss = DataDict.PIM;
FordVehMsg215Miss.LongName = 'Ford Vehicle Message 215 Missing';
FordVehMsg215Miss.Description = [...
  'PIM used to identify whether the message is missing or not.'];
FordVehMsg215Miss.DocUnits = 'Cnt';
FordVehMsg215Miss.EngDT = dt.lgc;
FordVehMsg215Miss.EngMin = 0;
FordVehMsg215Miss.EngMax = 1;
FordVehMsg215Miss.InitRowCol = [1  1];


FordVehMsg215MissTmr = DataDict.PIM;
FordVehMsg215MissTmr.LongName = 'Ford Vehicle Message 215 Missing Timer';
FordVehMsg215MissTmr.Description = [...
  'PIM used to store the time related to missing message timer'];
FordVehMsg215MissTmr.DocUnits = 'Cnt';
FordVehMsg215MissTmr.EngDT = dt.u32;
FordVehMsg215MissTmr.EngMin = 0;
FordVehMsg215MissTmr.EngMax = 4294967295;
FordVehMsg215MissTmr.InitRowCol = [1  1];


FordVehMsg215NotRxdRefTi = DataDict.PIM;
FordVehMsg215NotRxdRefTi.LongName = 'Ford Vehicle Message 215 Not Received Reference Time';
FordVehMsg215NotRxdRefTi.Description = [...
  'PIM used to store the time related to not received message'];
FordVehMsg215NotRxdRefTi.DocUnits = 'Cnt';
FordVehMsg215NotRxdRefTi.EngDT = dt.u32;
FordVehMsg215NotRxdRefTi.EngMin = 0;
FordVehMsg215NotRxdRefTi.EngMax = 4294967295;
FordVehMsg215NotRxdRefTi.InitRowCol = [1  1];


FordVehMsg215RxdRefTi = DataDict.PIM;
FordVehMsg215RxdRefTi.LongName = 'Ford Vehicle Message 215 Received Reference Time';
FordVehMsg215RxdRefTi.Description = [...
  'PIM used to store the time related to received message.'];
FordVehMsg215RxdRefTi.DocUnits = 'Cnt';
FordVehMsg215RxdRefTi.EngDT = dt.u32;
FordVehMsg215RxdRefTi.EngMin = 0;
FordVehMsg215RxdRefTi.EngMax = 4294967295;
FordVehMsg215RxdRefTi.InitRowCol = [1  1];


FordVehMsg215RxdTmr = DataDict.PIM;
FordVehMsg215RxdTmr.LongName = 'Ford Vehicle Message 215 Received Timer';
FordVehMsg215RxdTmr.Description = [...
  'PIM used to store the time related to received message timer'];
FordVehMsg215RxdTmr.DocUnits = 'Cnt';
FordVehMsg215RxdTmr.EngDT = dt.u32;
FordVehMsg215RxdTmr.EngMin = 0;
FordVehMsg215RxdTmr.EngMax = 4294967295;
FordVehMsg215RxdTmr.InitRowCol = [1  1];


FordVehTrlrAidModReqPrev = DataDict.PIM;
FordVehTrlrAidModReqPrev.LongName = 'Ford Vehicle Trailer Aid Mode Request Previous';
FordVehTrlrAidModReqPrev.Description = [...
  'PIM used to store the previous value of Ford Vehicle Trailer Aid Mode ' ...
  'Request.'];
FordVehTrlrAidModReqPrev.DocUnits = 'Cnt';
FordVehTrlrAidModReqPrev.EngDT = enum.Ford_TrlrAidMde_D_Rq;
FordVehTrlrAidModReqPrev.EngMin = Ford_TrlrAidMde_D_Rq.Cx0_NoRequest;
FordVehTrlrAidModReqPrev.EngMax = Ford_TrlrAidMde_D_Rq.Cx3_Mode_3;
FordVehTrlrAidModReqPrev.InitRowCol = [1  1];


FordVehTrlrAidModReqVldPrev = DataDict.PIM;
FordVehTrlrAidModReqVldPrev.LongName = 'Ford Vehicle Trailer Aid Mode Request Valid Previous';
FordVehTrlrAidModReqVldPrev.Description = [...
  'PIM used to store the previous value of Ford Vehicle Trailer Aid Mode ' ...
  'Request Valid.'];
FordVehTrlrAidModReqVldPrev.DocUnits = 'Cnt';
FordVehTrlrAidModReqVldPrev.EngDT = dt.lgc;
FordVehTrlrAidModReqVldPrev.EngMin = 0;
FordVehTrlrAidModReqVldPrev.EngMax = 1;
FordVehTrlrAidModReqVldPrev.InitRowCol = [1  1];



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
FordMsg215MissMsg = DataDict.NTC;
FordMsg215MissMsg.NtcNr = NtcNr1.NTCNR_0X18F;
FordMsg215MissMsg.NtcTyp = 'None';
FordMsg215MissMsg.LongName = 'Ford Message 215 Missing Message';
FordMsg215MissMsg.Description = 'Ford Message 215 Missing Message Diagnostic trouble code is used to store message missing information.';
FordMsg215MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg215MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg215MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg215MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
