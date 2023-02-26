%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 03-May-2018 13:33:50       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM092A = DataDict.FDD;
MM092A.Version = '1.0.X';
MM092A.LongName = 'Ford Message 47 Bus High Speed';
MM092A.ShoName  = 'FordMsg47ABusHiSpd';
MM092A.DesignASIL = 'B';
MM092A.Description = [...
  'The purpose of the Ford Message 47A Bus High Speed function is to prov' ...
  'idethe Electric Power Steering system with signal values for the Trail' ...
  'er Back UpAssist and Electric Power Steering functions from CAN. The F' ...
  'ord Message 47Afunction will perform the missing message and signal in' ...
  'valid diagnostic as wellas provide a validity signal for the received ' ...
  'message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg47ABusHiSpdInit1 = DataDict.Runnable;
FordMsg47ABusHiSpdInit1.Context = 'Rte';
FordMsg47ABusHiSpdInit1.TimeStep = 0;
FordMsg47ABusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg47ABusHiSpdPer1 = DataDict.Runnable;
FordMsg47ABusHiSpdPer1.Context = 'Rte';
FordMsg47ABusHiSpdPer1.TimeStep = 0.01;
FordMsg47ABusHiSpdPer1.Description = 'Periodic Runnable at 0.01 sec';

ComIPduCallout_TrailerInfo_2_FD1 = DataDict.SrvRunnable;
ComIPduCallout_TrailerInfo_2_FD1.Context = 'NonRte';
ComIPduCallout_TrailerInfo_2_FD1.Description = [...
  'Server Runnable for clear diagnostics'];
ComIPduCallout_TrailerInfo_2_FD1.Return = DataDict.CSReturn;
ComIPduCallout_TrailerInfo_2_FD1.Return.Type = 'None';
ComIPduCallout_TrailerInfo_2_FD1.Return.Min = [];
ComIPduCallout_TrailerInfo_2_FD1.Return.Max = [];
ComIPduCallout_TrailerInfo_2_FD1.Return.TestTolerance = [];
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).Name = 'TrailerInfo2';
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_TrailerInfo_2_FD1.Arguments(1).Description = [...
  'This signal notifies that the message is received successfully.'];

ComTimeoutNotification_TrlrAidSwtch_D_RqDrv = DataDict.SrvRunnable;
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Context = 'NonRte';
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Description = [...
  'Server Runnable for disabling serial communication'];
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Return = DataDict.CSReturn;
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Return.Type = 'None';
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Return.Min = [];
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Return.Max = [];
ComTimeoutNotification_TrlrAidSwtch_D_RqDrv.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg47ABusHiSpdPer1','FordMsg47ABusHiSpdInit1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg47ABusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg47ABusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg47ABusHiSpdPer1'};
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
FordCanDtcInhb.ReadIn = {'FordMsg47ABusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Electric Power Steering Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg47ABusHiSpdPer1'};
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
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg47ABusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_TrlrAidCtl_U_RqDrv = DataDict.IpSignal;
Ford_TrlrAidCtl_U_RqDrv.LongName = 'Trailer Aid Control';
Ford_TrlrAidCtl_U_RqDrv.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidCtl_U_RqDrv. E' ...
  'lements: 4094 - "CxFFE_NoDataExists", 4095 - "CxFFF_Faulty"'];
Ford_TrlrAidCtl_U_RqDrv.DocUnits = 'Cnt';
Ford_TrlrAidCtl_U_RqDrv.EngDT = dt.u16;
Ford_TrlrAidCtl_U_RqDrv.EngInit = 0;
Ford_TrlrAidCtl_U_RqDrv.EngMin = 0;
Ford_TrlrAidCtl_U_RqDrv.EngMax = 4095;
Ford_TrlrAidCtl_U_RqDrv.ReadIn = {'FordMsg47ABusHiSpdPer1'};
Ford_TrlrAidCtl_U_RqDrv.ReadType = 'Rte';


Ford_TrlrAidSwtch_D_RqDrv1 = DataDict.IpSignal;
Ford_TrlrAidSwtch_D_RqDrv1.LongName = 'Trailer Aid Switch';
Ford_TrlrAidSwtch_D_RqDrv1.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidSwtch_D_RqDrv.' ...
  '  Elements: 0 - "Cx0_Not_Pressed", 1 - "Cx1_Pressed", 2 - "Cx2_NotUsed' ...
  '", 3 - "Cx3_Faulty"'];
Ford_TrlrAidSwtch_D_RqDrv1.DocUnits = 'Cnt';
Ford_TrlrAidSwtch_D_RqDrv1.EngDT = enum.Ford_TrlrAidSwtch_D_RqDrv;
Ford_TrlrAidSwtch_D_RqDrv1.EngInit = Ford_TrlrAidSwtch_D_RqDrv.Cx0_Not_Pressed;
Ford_TrlrAidSwtch_D_RqDrv1.EngMin = Ford_TrlrAidSwtch_D_RqDrv.Cx0_Not_Pressed;
Ford_TrlrAidSwtch_D_RqDrv1.EngMax = Ford_TrlrAidSwtch_D_RqDrv.Cx3_Faulty;
Ford_TrlrAidSwtch_D_RqDrv1.ReadIn = {'FordMsg47ABusHiSpdPer1'};
Ford_TrlrAidSwtch_D_RqDrv1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehTrlrAidKnobBtn = DataDict.OpSignal;
FordVehTrlrAidKnobBtn.LongName = 'Ford Vehicle Trailer Aid Knob Button';
FordVehTrlrAidKnobBtn.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidSwtch_D_RqDrv.' ...
  '  Elements: 0 - "Cx0_Not_Pressed", 1 - "Cx1_Pressed", 2 - "Cx2_NotUsed' ...
  '", 3 - "Cx3_Faulty"'];
FordVehTrlrAidKnobBtn.DocUnits = 'Cnt';
FordVehTrlrAidKnobBtn.SwcShoName = 'FordMsg47ABusHiSpd';
FordVehTrlrAidKnobBtn.EngDT = enum.Ford_TrlrAidSwtch_D_RqDrv;
FordVehTrlrAidKnobBtn.EngInit = Ford_TrlrAidSwtch_D_RqDrv.Cx0_Not_Pressed;
FordVehTrlrAidKnobBtn.EngMin = Ford_TrlrAidSwtch_D_RqDrv.Cx0_Not_Pressed;
FordVehTrlrAidKnobBtn.EngMax = Ford_TrlrAidSwtch_D_RqDrv.Cx3_Faulty;
FordVehTrlrAidKnobBtn.TestTolerance = 0;
FordVehTrlrAidKnobBtn.WrittenIn = {'FordMsg47ABusHiSpdPer1'};
FordVehTrlrAidKnobBtn.WriteType = 'Rte';


FordVehTrlrAidKnobPosn = DataDict.OpSignal;
FordVehTrlrAidKnobPosn.LongName = 'Ford Vehicle Transmission Desired Gear Raw';
FordVehTrlrAidKnobPosn.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidCtl_U_RqDrv. E' ...
  'lements: 4094 - "CxFFE_NoDataExists", 4095 - "CxFFF_Faulty"'];
FordVehTrlrAidKnobPosn.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosn.SwcShoName = 'FordMsg47ABusHiSpd';
FordVehTrlrAidKnobPosn.EngDT = dt.u16;
FordVehTrlrAidKnobPosn.EngInit = 0;
FordVehTrlrAidKnobPosn.EngMin = 0;
FordVehTrlrAidKnobPosn.EngMax = 4095;
FordVehTrlrAidKnobPosn.TestTolerance = 0;
FordVehTrlrAidKnobPosn.WrittenIn = {'FordMsg47ABusHiSpdPer1'};
FordVehTrlrAidKnobPosn.WriteType = 'Rte';


FordVehTrlrBackupAssiKnobPosnVld = DataDict.OpSignal;
FordVehTrlrBackupAssiKnobPosnVld.LongName = 'Ford Vehicle Trailer Ais Knob Position Valid';
FordVehTrlrBackupAssiKnobPosnVld.Description = [...
  'Ford Vehicle Transmission Desired Gear Raw Valid Internal'];
FordVehTrlrBackupAssiKnobPosnVld.DocUnits = 'Cnt';
FordVehTrlrBackupAssiKnobPosnVld.SwcShoName = 'FordMsg47ABusHiSpd';
FordVehTrlrBackupAssiKnobPosnVld.EngDT = dt.lgc;
FordVehTrlrBackupAssiKnobPosnVld.EngInit = 0;
FordVehTrlrBackupAssiKnobPosnVld.EngMin = 0;
FordVehTrlrBackupAssiKnobPosnVld.EngMax = 1;
FordVehTrlrBackupAssiKnobPosnVld.TestTolerance = 0;
FordVehTrlrBackupAssiKnobPosnVld.WrittenIn = {'FordMsg47ABusHiSpdPer1'};
FordVehTrlrBackupAssiKnobPosnVld.WriteType = 'Rte';


FordVehTrlrBackupAssiKnobVld = DataDict.OpSignal;
FordVehTrlrBackupAssiKnobVld.LongName = 'Ford Vehicle Trailer Ais Knob Valid';
FordVehTrlrBackupAssiKnobVld.Description = [...
  'Ford Vehicle Transmission Desired Gear Raw Valid Internal'];
FordVehTrlrBackupAssiKnobVld.DocUnits = 'Cnt';
FordVehTrlrBackupAssiKnobVld.SwcShoName = 'FordMsg47ABusHiSpd';
FordVehTrlrBackupAssiKnobVld.EngDT = dt.lgc;
FordVehTrlrBackupAssiKnobVld.EngInit = 0;
FordVehTrlrBackupAssiKnobVld.EngMin = 0;
FordVehTrlrBackupAssiKnobVld.EngMax = 1;
FordVehTrlrBackupAssiKnobVld.TestTolerance = 0;
FordVehTrlrBackupAssiKnobVld.WrittenIn = {'FordMsg47ABusHiSpdPer1'};
FordVehTrlrBackupAssiKnobVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg47ABusHiSpdMissMsgFaildTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdMissMsgFaildTiThd.LongName = 'Ford Message 47 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg47ABusHiSpdMissMsgFaildTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg47ABusHiSpdMissMsgFaildTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdMissMsgFaildTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdMissMsgFaildTiThd.EngVal = 100;
FordMsg47ABusHiSpdMissMsgFaildTiThd.EngMin = 0;
FordMsg47ABusHiSpdMissMsgFaildTiThd.EngMax = 6000;
FordMsg47ABusHiSpdMissMsgFaildTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdMissMsgFaildTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdMissMsgFaildTiThd.Online = false;
FordMsg47ABusHiSpdMissMsgFaildTiThd.Impact = 'L';
FordMsg47ABusHiSpdMissMsgFaildTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdMissMsgFaildTiThd.GraphLink = {''};
FordMsg47ABusHiSpdMissMsgFaildTiThd.Monotony = 'None';
FordMsg47ABusHiSpdMissMsgFaildTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdMissMsgFaildTiThd.PortName = 'FordMsg47ABusHiSpdMissMsgFaildTiThd';


FordMsg47ABusHiSpdMissMsgPassdTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdMissMsgPassdTiThd.LongName = 'Ford Message 176 Missing Message Passed Timer Threshold';
FordMsg47ABusHiSpdMissMsgPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg47ABusHiSpdMissMsgPassdTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdMissMsgPassdTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdMissMsgPassdTiThd.EngVal = 0;
FordMsg47ABusHiSpdMissMsgPassdTiThd.EngMin = 0;
FordMsg47ABusHiSpdMissMsgPassdTiThd.EngMax = 6000;
FordMsg47ABusHiSpdMissMsgPassdTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdMissMsgPassdTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdMissMsgPassdTiThd.Online = false;
FordMsg47ABusHiSpdMissMsgPassdTiThd.Impact = 'L';
FordMsg47ABusHiSpdMissMsgPassdTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdMissMsgPassdTiThd.GraphLink = {''};
FordMsg47ABusHiSpdMissMsgPassdTiThd.Monotony = 'None';
FordMsg47ABusHiSpdMissMsgPassdTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdMissMsgPassdTiThd.PortName = 'FordMsg47ABusHiSpdMissMsgPassdTiThd';


FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.LongName = 'Ford Message 47 Bus High Speed Trailer Aid Knob Button Failed Threshold';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.EngVal = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd';


FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.LongName = 'Ford Message 47 Trailer Aid Knob Button Invalid Passed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.EngVal = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd';


FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.LongName = 'Ford Message 47 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.EngVal = 100;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd';


FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.LongName = 'Ford Message 47 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.EngVal = 100;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd';


FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.LongName = 'Ford Message 47 Bus High Speed Trailer Aid Knob Position Failed Threshold';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.EngVal = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd';


FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.LongName = 'Ford Message 47 Trailer Aid Knob Position Invalid Passed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.EngVal = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd';


FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.LongName = 'Ford Message 47 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.EngVal = 100;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd';


FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd = DataDict.Calibration;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.LongName = 'Ford Message 47 Bus High Speed Missing Message Failed Timer Threshold';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.DocUnits = 'MilliSec';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.EngDT = dt.u16;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.EngVal = 100;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.EngMin = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.EngMax = 6000;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.Cardinality = 'Cmn';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.CustomerVisible = false;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.Online = false;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.Impact = 'L';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.TuningOwner = 'EPDT';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.GraphLink = {''};
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.Monotony = 'None';
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.MaxGrad = 0;
FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd.PortName = 'FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd';



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


FirstTranTrlrAidKnobBtnVldFlg = DataDict.PIM;
FirstTranTrlrAidKnobBtnVldFlg.LongName = 'First Transition Trailer Aid Knob Button Valid Flag';
FirstTranTrlrAidKnobBtnVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranTrlrAidKnobBtnVldFlg.DocUnits = 'Cnt';
FirstTranTrlrAidKnobBtnVldFlg.EngDT = dt.lgc;
FirstTranTrlrAidKnobBtnVldFlg.EngMin = 0;
FirstTranTrlrAidKnobBtnVldFlg.EngMax = 1;
FirstTranTrlrAidKnobBtnVldFlg.InitRowCol = [1  1];


FirstTranTrlrAidKnobPosVldFlg = DataDict.PIM;
FirstTranTrlrAidKnobPosVldFlg.LongName = 'First Transition Trailer Aid Knob Position Valid Flag';
FirstTranTrlrAidKnobPosVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranTrlrAidKnobPosVldFlg.DocUnits = 'Cnt';
FirstTranTrlrAidKnobPosVldFlg.EngDT = dt.lgc;
FirstTranTrlrAidKnobPosVldFlg.EngMin = 0;
FirstTranTrlrAidKnobPosVldFlg.EngMax = 1;
FirstTranTrlrAidKnobPosVldFlg.InitRowCol = [1  1];


FordVehMsg47Miss = DataDict.PIM;
FordVehMsg47Miss.LongName = 'Ford Vehicle Trailer Info Miss Flag';
FordVehMsg47Miss.Description = [...
  'Ford Vehicle Trailer Info Miss Flag'];
FordVehMsg47Miss.DocUnits = 'Cnt';
FordVehMsg47Miss.EngDT = dt.lgc;
FordVehMsg47Miss.EngMin = 0;
FordVehMsg47Miss.EngMax = 1;
FordVehMsg47Miss.InitRowCol = [1  1];


FordVehMsg47Rxd = DataDict.PIM;
FordVehMsg47Rxd.LongName = 'Ford Vehicle Trailer Info Received Flag';
FordVehMsg47Rxd.Description = [...
  'Ford Vehicle Trailer Info Received Flag'];
FordVehMsg47Rxd.DocUnits = 'Cnt';
FordVehMsg47Rxd.EngDT = dt.lgc;
FordVehMsg47Rxd.EngMin = 0;
FordVehMsg47Rxd.EngMax = 1;
FordVehMsg47Rxd.InitRowCol = [1  1];


FordVehTrlrAidKnobBtnInvldFaildRefTi = DataDict.PIM;
FordVehTrlrAidKnobBtnInvldFaildRefTi.LongName = 'Trailer Aid Knob Button Invalid Failed Reference Timer';
FordVehTrlrAidKnobBtnInvldFaildRefTi.Description = [...
  'Timer for Trailer Aid Knob Button Valid Failed Reference Time will inc' ...
  'rement or reset based on the conditions'];
FordVehTrlrAidKnobBtnInvldFaildRefTi.DocUnits = 'Cnt';
FordVehTrlrAidKnobBtnInvldFaildRefTi.EngDT = dt.u32;
FordVehTrlrAidKnobBtnInvldFaildRefTi.EngMin = 0;
FordVehTrlrAidKnobBtnInvldFaildRefTi.EngMax = 4294967295;
FordVehTrlrAidKnobBtnInvldFaildRefTi.InitRowCol = [1  1];


FordVehTrlrAidKnobBtnInvldPassdRefTi = DataDict.PIM;
FordVehTrlrAidKnobBtnInvldPassdRefTi.LongName = 'Trailer Aid Knob Button Invalid Failed Reference Time';
FordVehTrlrAidKnobBtnInvldPassdRefTi.Description = [...
  'Trailer Aid Knob Button Passed Reference Timer'];
FordVehTrlrAidKnobBtnInvldPassdRefTi.DocUnits = 'Cnt';
FordVehTrlrAidKnobBtnInvldPassdRefTi.EngDT = dt.u32;
FordVehTrlrAidKnobBtnInvldPassdRefTi.EngMin = 0;
FordVehTrlrAidKnobBtnInvldPassdRefTi.EngMax = 4294967295;
FordVehTrlrAidKnobBtnInvldPassdRefTi.InitRowCol = [1  1];


FordVehTrlrAidKnobBtnPrev = DataDict.PIM;
FordVehTrlrAidKnobBtnPrev.LongName = 'Ford Trailer Ais Knon Button Previous';
FordVehTrlrAidKnobBtnPrev.Description = [...
  'Ford Gear Position Raw Valid Previous'];
FordVehTrlrAidKnobBtnPrev.DocUnits = 'Cnt';
FordVehTrlrAidKnobBtnPrev.EngDT = enum.Ford_TrlrAidSwtch_D_RqDrv;
FordVehTrlrAidKnobBtnPrev.EngMin = Ford_TrlrAidSwtch_D_RqDrv.Cx0_Not_Pressed;
FordVehTrlrAidKnobBtnPrev.EngMax = Ford_TrlrAidSwtch_D_RqDrv.Cx3_Faulty;
FordVehTrlrAidKnobBtnPrev.InitRowCol = [1  1];


FordVehTrlrAidKnobPosnInvldFaildRefTi = DataDict.PIM;
FordVehTrlrAidKnobPosnInvldFaildRefTi.LongName = 'Trailer Aid Knob Position Invalid Failed Reference Timer';
FordVehTrlrAidKnobPosnInvldFaildRefTi.Description = [...
  'Timer for Trailer Aid Knob Position Valid Failed Reference Time will i' ...
  'ncrement or reset based on the conditions'];
FordVehTrlrAidKnobPosnInvldFaildRefTi.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosnInvldFaildRefTi.EngDT = dt.u32;
FordVehTrlrAidKnobPosnInvldFaildRefTi.EngMin = 0;
FordVehTrlrAidKnobPosnInvldFaildRefTi.EngMax = 4294967295;
FordVehTrlrAidKnobPosnInvldFaildRefTi.InitRowCol = [1  1];


FordVehTrlrAidKnobPosnInvldPassdRefTi = DataDict.PIM;
FordVehTrlrAidKnobPosnInvldPassdRefTi.LongName = 'Trailer Aid Knob Position Invalid Failed Reference Time';
FordVehTrlrAidKnobPosnInvldPassdRefTi.Description = [...
  'Trailer Aid Knob Position Passed Reference Timer'];
FordVehTrlrAidKnobPosnInvldPassdRefTi.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosnInvldPassdRefTi.EngDT = dt.u32;
FordVehTrlrAidKnobPosnInvldPassdRefTi.EngMin = 0;
FordVehTrlrAidKnobPosnInvldPassdRefTi.EngMax = 4294967295;
FordVehTrlrAidKnobPosnInvldPassdRefTi.InitRowCol = [1  1];


FordVehTrlrAidKnobPosnPrev = DataDict.PIM;
FordVehTrlrAidKnobPosnPrev.LongName = 'Ford Trailer Ais Knon Position Previous';
FordVehTrlrAidKnobPosnPrev.Description = [...
  'Ford Gear Position Raw Valid Previous'];
FordVehTrlrAidKnobPosnPrev.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosnPrev.EngDT = dt.u16;
FordVehTrlrAidKnobPosnPrev.EngMin = 0;
FordVehTrlrAidKnobPosnPrev.EngMax = 4095;
FordVehTrlrAidKnobPosnPrev.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Referene Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Referene Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];


TrlrAidKnobBtnVldFaildRefTi = DataDict.PIM;
TrlrAidKnobBtnVldFaildRefTi.LongName = 'Trailer Aid Knob Button Valid Timer';
TrlrAidKnobBtnVldFaildRefTi.Description = [...
  'Trailer Aid Knob Button Valid Failed Reference Time will increment or ' ...
  'reset based on the conditions'];
TrlrAidKnobBtnVldFaildRefTi.DocUnits = 'Cnt';
TrlrAidKnobBtnVldFaildRefTi.EngDT = dt.u32;
TrlrAidKnobBtnVldFaildRefTi.EngMin = 0;
TrlrAidKnobBtnVldFaildRefTi.EngMax = 4294967295;
TrlrAidKnobBtnVldFaildRefTi.InitRowCol = [1  1];


TrlrAidKnobBtnVldMissRefTi = DataDict.PIM;
TrlrAidKnobBtnVldMissRefTi.LongName = 'Trailer Aid Knob Button Missing Valid Timer';
TrlrAidKnobBtnVldMissRefTi.Description = [...
  'Trailer Aid Knob Button Missing Valid Passed Reference Time will incre' ...
  'ment or reset based on the conditions'];
TrlrAidKnobBtnVldMissRefTi.DocUnits = 'Cnt';
TrlrAidKnobBtnVldMissRefTi.EngDT = dt.u32;
TrlrAidKnobBtnVldMissRefTi.EngMin = 0;
TrlrAidKnobBtnVldMissRefTi.EngMax = 4294967295;
TrlrAidKnobBtnVldMissRefTi.InitRowCol = [1  1];


TrlrAidKnobBtnVldPassdRefTi = DataDict.PIM;
TrlrAidKnobBtnVldPassdRefTi.LongName = 'Trailer Aid Knob Button Valid Passed Timer';
TrlrAidKnobBtnVldPassdRefTi.Description = [...
  'Trailer Aid Knob Button Valid Passed Reference Time will increment or ' ...
  'reset based on the conditions'];
TrlrAidKnobBtnVldPassdRefTi.DocUnits = 'Cnt';
TrlrAidKnobBtnVldPassdRefTi.EngDT = dt.u32;
TrlrAidKnobBtnVldPassdRefTi.EngMin = 0;
TrlrAidKnobBtnVldPassdRefTi.EngMax = 4294967295;
TrlrAidKnobBtnVldPassdRefTi.InitRowCol = [1  1];


TrlrAidKnobBtnVldPrev = DataDict.PIM;
TrlrAidKnobBtnVldPrev.LongName = 'Ford Gear Position Raw Valid Previous';
TrlrAidKnobBtnVldPrev.Description = [...
  'Ford Gear Position Raw Valid Previous'];
TrlrAidKnobBtnVldPrev.DocUnits = 'Cnt';
TrlrAidKnobBtnVldPrev.EngDT = dt.lgc;
TrlrAidKnobBtnVldPrev.EngMin = 0;
TrlrAidKnobBtnVldPrev.EngMax = 1;
TrlrAidKnobBtnVldPrev.InitRowCol = [1  1];


TrlrAidKnobPosVldFaildRefTi = DataDict.PIM;
TrlrAidKnobPosVldFaildRefTi.LongName = 'Trailer Aid Knob Position Valid Failed Timer';
TrlrAidKnobPosVldFaildRefTi.Description = [...
  'Timer for Propulsion Wheel Torque Valid Failed Reference Time will inc' ...
  'rement or reset based on the conditions'];
TrlrAidKnobPosVldFaildRefTi.DocUnits = 'Cnt';
TrlrAidKnobPosVldFaildRefTi.EngDT = dt.u32;
TrlrAidKnobPosVldFaildRefTi.EngMin = 0;
TrlrAidKnobPosVldFaildRefTi.EngMax = 4294967295;
TrlrAidKnobPosVldFaildRefTi.InitRowCol = [1  1];


TrlrAidKnobPosVldMissRefTi = DataDict.PIM;
TrlrAidKnobPosVldMissRefTi.LongName = 'Trailer Aid Knob Position Valid Passed Timer';
TrlrAidKnobPosVldMissRefTi.Description = [...
  'Trailer Aid Knob Position Valid Passed Reference Time will increment o' ...
  'r reset based on the conditions'];
TrlrAidKnobPosVldMissRefTi.DocUnits = 'Cnt';
TrlrAidKnobPosVldMissRefTi.EngDT = dt.u32;
TrlrAidKnobPosVldMissRefTi.EngMin = 0;
TrlrAidKnobPosVldMissRefTi.EngMax = 4294967295;
TrlrAidKnobPosVldMissRefTi.InitRowCol = [1  1];


TrlrAidKnobPosVldPassdRefTi = DataDict.PIM;
TrlrAidKnobPosVldPassdRefTi.LongName = 'Trailer Aid Knob Position Valid Passed Timer';
TrlrAidKnobPosVldPassdRefTi.Description = [...
  'Trailer Aid Knob Position Valid Passed Reference Time will increment o' ...
  'r reset based on the conditions'];
TrlrAidKnobPosVldPassdRefTi.DocUnits = 'Cnt';
TrlrAidKnobPosVldPassdRefTi.EngDT = dt.u32;
TrlrAidKnobPosVldPassdRefTi.EngMin = 0;
TrlrAidKnobPosVldPassdRefTi.EngMax = 4294967295;
TrlrAidKnobPosVldPassdRefTi.InitRowCol = [1  1];


TrlrAidKnobPosVldPrev = DataDict.PIM;
TrlrAidKnobPosVldPrev.LongName = 'Ford Gear Position Raw Valid Previous';
TrlrAidKnobPosVldPrev.Description = [...
  'Ford Gear Position Raw Valid Previous'];
TrlrAidKnobPosVldPrev.DocUnits = 'Cnt';
TrlrAidKnobPosVldPrev.EngDT = dt.lgc;
TrlrAidKnobPosVldPrev.EngMin = 0;
TrlrAidKnobPosVldPrev.EngMax = 1;
TrlrAidKnobPosVldPrev.InitRowCol = [1  1];



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


DIAGENA_CNT_U08 = DataDict.Constant;
DIAGENA_CNT_U08.LongName = 'DIAGNOSTICS Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'FordMissMsgDiagcInhb,MfgDiagcInhb,FordInvldMsgDiagcInhbl'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


FEATACTV_CNT_U08 = DataDict.Constant;
FEATACTV_CNT_U08.LongName = 'Feature Active';
FEATACTV_CNT_U08.Description = [...
  'To check whether the feature is active so that diagnostics can be perf' ...
  'ormed'];
FEATACTV_CNT_U08.DocUnits = 'Cnt';
FEATACTV_CNT_U08.EngDT = dt.u08;
FEATACTV_CNT_U08.EngVal = 1;
FEATACTV_CNT_U08.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


TRLRAIDKNOBBTNMAX_CNT_U16 = DataDict.Constant;
TRLRAIDKNOBBTNMAX_CNT_U16.LongName = 'Trailer Aid Knob Button Max';
TRLRAIDKNOBBTNMAX_CNT_U16.Description = 'Trailer Aid Knob Button Max Value';
TRLRAIDKNOBBTNMAX_CNT_U16.DocUnits = 'Cnt';
TRLRAIDKNOBBTNMAX_CNT_U16.EngDT = dt.u16;
TRLRAIDKNOBBTNMAX_CNT_U16.EngVal = 4095;
TRLRAIDKNOBBTNMAX_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg47MissMsg = DataDict.NTC;
FordMsg47MissMsg.NtcNr = NtcNr1.NTCNR_0X1A8;
FordMsg47MissMsg.NtcTyp = 'None';
FordMsg47MissMsg.LongName = 'Ford Message 47 Missing Message';
FordMsg47MissMsg.Description = 'Ford Message 47 Missing Message Diagnostic';
FordMsg47MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg47MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg47MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg47MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehTrlrAidKnobBtnInvld = DataDict.NTC;
FordVehTrlrAidKnobBtnInvld.NtcNr = NtcNr1.NTCNR_0X1A9;
FordVehTrlrAidKnobBtnInvld.NtcTyp = 'None';
FordVehTrlrAidKnobBtnInvld.LongName = 'Ford Vehicle Trailer Aid Knob Button Signal Invalid';
FordVehTrlrAidKnobBtnInvld.Description = 'Ford Message 47 Invalid Message Diagnostic';
FordVehTrlrAidKnobBtnInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehTrlrAidKnobBtnInvld.NtcStsLockdThisIgnCyc = 0;


FordVehTrlrAidKnobPosInvld = DataDict.NTC;
FordVehTrlrAidKnobPosInvld.NtcNr = NtcNr1.NTCNR_0X1AA;
FordVehTrlrAidKnobPosInvld.NtcTyp = 'None';
FordVehTrlrAidKnobPosInvld.LongName = 'Ford Vehicle Trailer Aid Knob Position Signal Invalid';
FordVehTrlrAidKnobPosInvld.Description = 'Ford Message 47 Invalid Message Diagnostic';
FordVehTrlrAidKnobPosInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehTrlrAidKnobPosInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
