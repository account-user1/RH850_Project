%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 04-Apr-2018 15:50:56       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM066A = DataDict.FDD;
MM066A.Version = '2.0.X';
MM066A.LongName = 'Ford Message 230 Bus High Speed';
MM066A.ShoName  = 'FordMsg230BusHiSpd';
MM066A.DesignASIL = 'B';
MM066A.Description = [...
  'The purpose of the Ford Message 230 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering systemwith Trailer Back up Assist and ' ...
  'Gear Lever Position signals from CAN. The Ford Message 230 function wi' ...
  'llperform the missing message and signal invalid diagnostics as well a' ...
  's provide a validity signal for the signalvalues and received message.' ...
  ''];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg230BusHiSpdInit1 = DataDict.Runnable;
FordMsg230BusHiSpdInit1.Context = 'Rte';
FordMsg230BusHiSpdInit1.TimeStep = 0;
FordMsg230BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg230BusHiSpdPer1 = DataDict.Runnable;
FordMsg230BusHiSpdPer1.Context = 'Rte';
FordMsg230BusHiSpdPer1.TimeStep = 0.01;
FordMsg230BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_TransGearData_FD1 = DataDict.SrvRunnable;
ComIPduCallout_TransGearData_FD1.Context = 'NonRte';
ComIPduCallout_TransGearData_FD1.Description = [...
  'Server Runnable for Message reception'];
ComIPduCallout_TransGearData_FD1.Return = DataDict.CSReturn;
ComIPduCallout_TransGearData_FD1.Return.Type = 'None';
ComIPduCallout_TransGearData_FD1.Return.Min = [];
ComIPduCallout_TransGearData_FD1.Return.Max = [];
ComIPduCallout_TransGearData_FD1.Return.TestTolerance = [];
ComIPduCallout_TransGearData_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_TransGearData_FD1.Arguments(1).Name = 'TransGearData';
ComIPduCallout_TransGearData_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_TransGearData_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_TransGearData_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_TransGearData_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_TransGearData_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_TransGearData_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_TransGearData_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_TransGearData_FD1.Arguments(1).Description = [...
  'TransGearData is set to one when service is invoked'];

ComTimeoutNotification_GearLvrPos_D_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_GearLvrPos_D_Actl.Context = 'NonRte';
ComTimeoutNotification_GearLvrPos_D_Actl.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_GearLvrPos_D_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_GearLvrPos_D_Actl.Return.Type = 'None';
ComTimeoutNotification_GearLvrPos_D_Actl.Return.Min = [];
ComTimeoutNotification_GearLvrPos_D_Actl.Return.Max = [];
ComTimeoutNotification_GearLvrPos_D_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg230BusHiSpdInit1','FordMsg230BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg230BusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time fromSimnTi value, handles counter wrapping' ...
  'and subtracts RefTmr,provides the TiSpan'];
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
SetNtcSts.CallLocation = {'FordMsg230BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg230BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC.Custome' ...
  'r datatype should be used. Data Type: Boolean with Min value “False”(0' ...
  '), Init value “True”(1) and Max value “True”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg230BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg230BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'It is a message signal which is received from CAN bus which will bepro' ...
  'cessed and used in EPS.Customer datatype should be used. Data Type: Bo' ...
  'olean with Min value “False”(0),Init value “False”(0) and Max value “T' ...
  'rue”(1)'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg230BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_GearLvrPos_D_Actl1 = DataDict.IpSignal;
Ford_GearLvrPos_D_Actl1.LongName = 'Ford Gear Lever Position';
Ford_GearLvrPos_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS.Customer Data type : Ford_GearLvrPos_D_Actl; C' ...
  'x0_Park(0), Cx1_Reverse(1), Cx2_Neutral(2), Cx3_Drive(3), Cx4_Sport_Dr' ...
  'iveSport(4), Cx5_Low(5), Cx6_first(6), Cx7_second(7), Cx8_third(8),Cx9' ...
  '_fourth(9), CxA_fifth(10), CxB_sixth(11), CxC_Undefined_Treat_as_Fault' ...
  '(12), CxD_Undefined_Treat_as_Fault(13), CxE_Unknown_Position(14)CxF_Fa' ...
  'ult(15).'];
Ford_GearLvrPos_D_Actl1.DocUnits = 'Cnt';
Ford_GearLvrPos_D_Actl1.EngDT = enum.Ford_GearLvrPos_D_Actl;
Ford_GearLvrPos_D_Actl1.EngInit = Ford_GearLvrPos_D_Actl.CxE_Unknown_Position;
Ford_GearLvrPos_D_Actl1.EngMin = Ford_GearLvrPos_D_Actl.Cx0_Park;
Ford_GearLvrPos_D_Actl1.EngMax = Ford_GearLvrPos_D_Actl.CxF_Fault;
Ford_GearLvrPos_D_Actl1.ReadIn = {'FordMsg230BusHiSpdPer1'};
Ford_GearLvrPos_D_Actl1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehGearLvrPosn = DataDict.OpSignal;
FordVehGearLvrPosn.LongName = 'Ford Vehicle Gear Lever Position';
FordVehGearLvrPosn.Description = [...
  'Processed value of Gear Lever Position to be used by EPS'];
FordVehGearLvrPosn.DocUnits = 'Cnt';
FordVehGearLvrPosn.SwcShoName = 'FordMsg230BusHiSpd';
FordVehGearLvrPosn.EngDT = enum.Ford_GearLvrPos_D_Actl;
FordVehGearLvrPosn.EngInit = Ford_GearLvrPos_D_Actl.CxE_Unknown_Position;
FordVehGearLvrPosn.EngMin = Ford_GearLvrPos_D_Actl.Cx0_Park;
FordVehGearLvrPosn.EngMax = Ford_GearLvrPos_D_Actl.CxF_Fault;
FordVehGearLvrPosn.TestTolerance = 0;
FordVehGearLvrPosn.WrittenIn = {'FordMsg230BusHiSpdPer1'};
FordVehGearLvrPosn.WriteType = 'Rte';


FordVehGearLvrPosnVldInt = DataDict.OpSignal;
FordVehGearLvrPosnVldInt.LongName = 'Ford Vehicle Gear Lever Position Valid Internal';
FordVehGearLvrPosnVldInt.Description = [...
  'This output tells if the value for Ford Vehicle Gear Lever Position is' ...
  ' valid or not'];
FordVehGearLvrPosnVldInt.DocUnits = 'Cnt';
FordVehGearLvrPosnVldInt.SwcShoName = 'FordMsg230BusHiSpd';
FordVehGearLvrPosnVldInt.EngDT = dt.lgc;
FordVehGearLvrPosnVldInt.EngInit = 0;
FordVehGearLvrPosnVldInt.EngMin = 0;
FordVehGearLvrPosnVldInt.EngMax = 1;
FordVehGearLvrPosnVldInt.TestTolerance = 0;
FordVehGearLvrPosnVldInt.WrittenIn = {'FordMsg230BusHiSpdPer1'};
FordVehGearLvrPosnVldInt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd = DataDict.Calibration;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.LongName = 'Ford Message 230 Bus High Speed Ford Vehicle Gear Lever Position Failed Time Threshold';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Gear Lever Position Valid to ' ...
  'False'];
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.EngDT = dt.u16;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.EngVal = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.EngMin = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.EngMax = 6000;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.CustomerVisible = false;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.Online = false;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.Impact = 'H';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.GraphLink = {''};
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.Monotony = 'None';
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.MaxGrad = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd.PortName = 'FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd';


FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd = DataDict.Calibration;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.LongName = 'Ford Message 230 Bus High Speed Ford Vehicle Gear Lever Position Passed Time Threshold';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Gear Lever Position Valid to ' ...
  'True'];
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.EngDT = dt.u16;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.EngVal = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.EngMin = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.EngMax = 6000;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.CustomerVisible = false;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.Online = false;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.Impact = 'H';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.GraphLink = {''};
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.Monotony = 'None';
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.MaxGrad = 0;
FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd.PortName = 'FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd';


FordMsg230BusHiSpdGearLvrPosnMissTiThd = DataDict.Calibration;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.LongName = 'Ford Message 230 Bus High Speed Gear Lever Position Missing Time Threshold';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.Description = [...
  'Threshold to set the output Ford Vehicle Gear Lever Position Valid to ' ...
  'False'];
FordMsg230BusHiSpdGearLvrPosnMissTiThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.EngDT = dt.u16;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.EngVal = 5000;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.EngMin = 0;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.EngMax = 6000;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.CustomerVisible = false;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.Online = false;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.Impact = 'H';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.GraphLink = {''};
FordMsg230BusHiSpdGearLvrPosnMissTiThd.Monotony = 'None';
FordMsg230BusHiSpdGearLvrPosnMissTiThd.MaxGrad = 0;
FordMsg230BusHiSpdGearLvrPosnMissTiThd.PortName = 'FordMsg230BusHiSpdGearLvrPosnMissTiThd';


FordMsg230BusHiSpdInvldSigFaildThd = DataDict.Calibration;
FordMsg230BusHiSpdInvldSigFaildThd.LongName = 'Ford Message 230 Bus High Speed Invalid Signal Failed Threshold';
FordMsg230BusHiSpdInvldSigFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg230BusHiSpdInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdInvldSigFaildThd.EngDT = dt.u16;
FordMsg230BusHiSpdInvldSigFaildThd.EngVal = 0;
FordMsg230BusHiSpdInvldSigFaildThd.EngMin = 0;
FordMsg230BusHiSpdInvldSigFaildThd.EngMax = 6000;
FordMsg230BusHiSpdInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdInvldSigFaildThd.CustomerVisible = false;
FordMsg230BusHiSpdInvldSigFaildThd.Online = false;
FordMsg230BusHiSpdInvldSigFaildThd.Impact = 'L';
FordMsg230BusHiSpdInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdInvldSigFaildThd.GraphLink = {''};
FordMsg230BusHiSpdInvldSigFaildThd.Monotony = 'None';
FordMsg230BusHiSpdInvldSigFaildThd.MaxGrad = 0;
FordMsg230BusHiSpdInvldSigFaildThd.PortName = 'FordMsg230BusHiSpdInvldSigFaildThd';


FordMsg230BusHiSpdInvldSigPassdThd = DataDict.Calibration;
FordMsg230BusHiSpdInvldSigPassdThd.LongName = 'Ford Message 230 Bus High Speed Invalid Signal Passed Threshold';
FordMsg230BusHiSpdInvldSigPassdThd.Description = [...
  'Threshold to Reset the Invalid message NTC'];
FordMsg230BusHiSpdInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdInvldSigPassdThd.EngDT = dt.u16;
FordMsg230BusHiSpdInvldSigPassdThd.EngVal = 0;
FordMsg230BusHiSpdInvldSigPassdThd.EngMin = 0;
FordMsg230BusHiSpdInvldSigPassdThd.EngMax = 6000;
FordMsg230BusHiSpdInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdInvldSigPassdThd.CustomerVisible = false;
FordMsg230BusHiSpdInvldSigPassdThd.Online = false;
FordMsg230BusHiSpdInvldSigPassdThd.Impact = 'L';
FordMsg230BusHiSpdInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdInvldSigPassdThd.GraphLink = {''};
FordMsg230BusHiSpdInvldSigPassdThd.Monotony = 'None';
FordMsg230BusHiSpdInvldSigPassdThd.MaxGrad = 0;
FordMsg230BusHiSpdInvldSigPassdThd.PortName = 'FordMsg230BusHiSpdInvldSigPassdThd';


FordMsg230BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg230BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 230 Bus High Speed Missing Message Failed Threshold';
FordMsg230BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg230BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg230BusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg230BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg230BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg230BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg230BusHiSpdMissMsgFaildThd.Online = false;
FordMsg230BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg230BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg230BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg230BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg230BusHiSpdMissMsgFaildThd.PortName = 'FordMsg230BusHiSpdMissMsgFaildThd';


FordMsg230BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg230BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 230 Bus High Speed Missing Message Passed Threshold';
FordMsg230BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to reset the Missing message NTC'];
FordMsg230BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg230BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg230BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg230BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg230BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg230BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg230BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg230BusHiSpdMissMsgPassdThd.Online = false;
FordMsg230BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg230BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg230BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg230BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg230BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg230BusHiSpdMissMsgPassdThd.PortName = 'FordMsg230BusHiSpdMissMsgPassdThd';



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
ClrDiagcFlgProxyPrev.Description = 'Clear Diagc Flag Proxy Previous';
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


FordVehGearLvrPosnInvldFaildRefTi = DataDict.PIM;
FordVehGearLvrPosnInvldFaildRefTi.LongName = 'Ford Vehicle Gear Lever Position Invalid Failed Reference Time';
FordVehGearLvrPosnInvldFaildRefTi.Description = [...
  'Timer for Invalid message will increment or reset based on the conditi' ...
  'on'];
FordVehGearLvrPosnInvldFaildRefTi.DocUnits = 'Cnt';
FordVehGearLvrPosnInvldFaildRefTi.EngDT = dt.u32;
FordVehGearLvrPosnInvldFaildRefTi.EngMin = 0;
FordVehGearLvrPosnInvldFaildRefTi.EngMax = 4294967295;
FordVehGearLvrPosnInvldFaildRefTi.InitRowCol = [1  1];


FordVehGearLvrPosnInvldPassdRefTi = DataDict.PIM;
FordVehGearLvrPosnInvldPassdRefTi.LongName = 'Ford Vehicle Gear Lever Position Invalid Passed Reference Time';
FordVehGearLvrPosnInvldPassdRefTi.Description = [...
  'Timer for Invalid message will increment or reset based on the conditi' ...
  'on'];
FordVehGearLvrPosnInvldPassdRefTi.DocUnits = 'Cnt';
FordVehGearLvrPosnInvldPassdRefTi.EngDT = dt.u32;
FordVehGearLvrPosnInvldPassdRefTi.EngMin = 0;
FordVehGearLvrPosnInvldPassdRefTi.EngMax = 4294967295;
FordVehGearLvrPosnInvldPassdRefTi.InitRowCol = [1  1];


FordVehGearLvrPosnPrev = DataDict.PIM;
FordVehGearLvrPosnPrev.LongName = 'Ford Vehicle Gear Lever Position Previous';
FordVehGearLvrPosnPrev.Description = [...
  'Previous value of Ford Vehicle Gear Lever Position'];
FordVehGearLvrPosnPrev.DocUnits = 'Cnt';
FordVehGearLvrPosnPrev.EngDT = enum.Ford_GearLvrPos_D_Actl;
FordVehGearLvrPosnPrev.EngMin = Ford_GearLvrPos_D_Actl.Cx0_Park;
FordVehGearLvrPosnPrev.EngMax = Ford_GearLvrPos_D_Actl.CxF_Fault;
FordVehGearLvrPosnPrev.InitRowCol = [1  1];


FordVehGearLvrPosnVldFaildRefTi = DataDict.PIM;
FordVehGearLvrPosnVldFaildRefTi.LongName = 'Ford Vehicle Gear Lever Position Valid Failed Reference Time';
FordVehGearLvrPosnVldFaildRefTi.Description = [...
  'Timer for Gear Lever Position Valid Failed Reference Time willincremen' ...
  't or reset based on the conditions'];
FordVehGearLvrPosnVldFaildRefTi.DocUnits = 'Cnt';
FordVehGearLvrPosnVldFaildRefTi.EngDT = dt.u32;
FordVehGearLvrPosnVldFaildRefTi.EngMin = 0;
FordVehGearLvrPosnVldFaildRefTi.EngMax = 4294967295;
FordVehGearLvrPosnVldFaildRefTi.InitRowCol = [1  1];


FordVehGearLvrPosnVldIntPrev = DataDict.PIM;
FordVehGearLvrPosnVldIntPrev.LongName = 'Ford Vehicle Gear Lever Position Valid Internal Previous';
FordVehGearLvrPosnVldIntPrev.Description = [...
  'Previous value of Ford Vehicle Gear Lever Position Valid Internal'];
FordVehGearLvrPosnVldIntPrev.DocUnits = 'Cnt';
FordVehGearLvrPosnVldIntPrev.EngDT = dt.lgc;
FordVehGearLvrPosnVldIntPrev.EngMin = 0;
FordVehGearLvrPosnVldIntPrev.EngMax = 1;
FordVehGearLvrPosnVldIntPrev.InitRowCol = [1  1];


FordVehGearLvrPosnVldPassdRefTi = DataDict.PIM;
FordVehGearLvrPosnVldPassdRefTi.LongName = 'Ford Vehicle Gear Lever Position Valid Passed Reference Time';
FordVehGearLvrPosnVldPassdRefTi.Description = [...
  'Timer for Gear Lever Position Valid Failed Reference Time willincremen' ...
  't or reset based on the conditions'];
FordVehGearLvrPosnVldPassdRefTi.DocUnits = 'Cnt';
FordVehGearLvrPosnVldPassdRefTi.EngDT = dt.u32;
FordVehGearLvrPosnVldPassdRefTi.EngMin = 0;
FordVehGearLvrPosnVldPassdRefTi.EngMax = 4294967295;
FordVehGearLvrPosnVldPassdRefTi.InitRowCol = [1  1];


FordVehMsg230Miss = DataDict.PIM;
FordVehMsg230Miss.LongName = 'Ford Vehicle Message 230 Missing';
FordVehMsg230Miss.Description = [...
  'Used to hold value of Ford Vehicle message 230 miss'];
FordVehMsg230Miss.DocUnits = 'Cnt';
FordVehMsg230Miss.EngDT = dt.lgc;
FordVehMsg230Miss.EngMin = 0;
FordVehMsg230Miss.EngMax = 1;
FordVehMsg230Miss.InitRowCol = [1  1];


GearLvrPosnVldMissRefTi = DataDict.PIM;
GearLvrPosnVldMissRefTi.LongName = 'Gear Lever Position Valid Missing Reference Time';
GearLvrPosnVldMissRefTi.Description = [...
  'Timer for Gear Lever Position Valid Missing Reference Time will increm' ...
  'entor reset based on the conditions'];
GearLvrPosnVldMissRefTi.DocUnits = 'Cnt';
GearLvrPosnVldMissRefTi.EngDT = dt.u32;
GearLvrPosnVldMissRefTi.EngMin = 0;
GearLvrPosnVldMissRefTi.EngMax = 4294967295;
GearLvrPosnVldMissRefTi.InitRowCol = [1  1];


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
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Timer Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = 'It is constant threshold of 5000ms';
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


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  'on the EPSLifeCycMod'];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg230MissMsg = DataDict.NTC;
FordMsg230MissMsg.NtcNr = NtcNr1.NTCNR_0X141;
FordMsg230MissMsg.NtcTyp = 'None';
FordMsg230MissMsg.LongName = 'Ford Message 230 Missing Message';
FordMsg230MissMsg.Description = 'Ford Message 230 Missing Message Diagnostic';
FordMsg230MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg230MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg230MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg230MissMsg.NtcStsLockdThisIgnCyc = 0;


GearLvrPosnInvld = DataDict.NTC;
GearLvrPosnInvld.NtcNr = NtcNr1.NTCNR_0X142;
GearLvrPosnInvld.NtcTyp = 'None';
GearLvrPosnInvld.LongName = 'Gear Lever Position Invalid';
GearLvrPosnInvld.Description = 'Ford Message 230 Invalid Message Diagnostic';
GearLvrPosnInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
GearLvrPosnInvld.NtcStInfo.Bit0Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit1Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit2Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit3Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit4Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit5Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit6Descr = 'Unused';
GearLvrPosnInvld.NtcStInfo.Bit7Descr = 'Unused';
GearLvrPosnInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
