%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-Apr-2018 12:06:54       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 4 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM079A = DataDict.FDD;
MM079A.Version = '4.0.X';
MM079A.LongName = 'Ford Message 41 E Bus High Speed';
MM079A.ShoName  = 'FordMsg41EBusHiSpd';
MM079A.DesignASIL = 'B';
MM079A.Description = [...
  'The purpose of the Ford Message 41E Bus High Speed function is to prov' ...
  'idethe Electric Power Steering system with signal values for the Selec' ...
  't DriveMode  function from CAN. The Ford Message 41E function will per' ...
  'form themissing message and signal invalid diagnostics as well as prov' ...
  'ide a validity flag for the signal values and received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg41EBusHiSpdInit1 = DataDict.Runnable;
FordMsg41EBusHiSpdInit1.Context = 'Rte';
FordMsg41EBusHiSpdInit1.TimeStep = 0;
FordMsg41EBusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg41EBusHiSpdPer1 = DataDict.Runnable;
FordMsg41EBusHiSpdPer1.Context = 'Rte';
FordMsg41EBusHiSpdPer1.TimeStep = 0.01;
FordMsg41EBusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds '];

ComIPduCallout_BrakeSysFeatures_3_FD1 = DataDict.SrvRunnable;
ComIPduCallout_BrakeSysFeatures_3_FD1.Context = 'NonRte';
ComIPduCallout_BrakeSysFeatures_3_FD1.Description = [...
  ' Server Runnable for Message reception'];
ComIPduCallout_BrakeSysFeatures_3_FD1.Return = DataDict.CSReturn;
ComIPduCallout_BrakeSysFeatures_3_FD1.Return.Type = 'None';
ComIPduCallout_BrakeSysFeatures_3_FD1.Return.Min = [];
ComIPduCallout_BrakeSysFeatures_3_FD1.Return.Max = [];
ComIPduCallout_BrakeSysFeatures_3_FD1.Return.TestTolerance = [];
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).Name = 'BrakeSysFeatures';
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BrakeSysFeatures_3_FD1.Arguments(1).Description = [...
  'BrakeSysFeatures is set to one when service is invoked'];

ComTimeoutNotification_SelDrvMdeChassis2_D_Rq = DataDict.SrvRunnable;
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Context = 'NonRte';
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Return = DataDict.CSReturn;
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Return.Type = 'None';
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Return.Min = [];
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Return.Max = [];
ComTimeoutNotification_SelDrvMdeChassis2_D_Rq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg41EBusHiSpdInit1','FordMsg41EBusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg41EBusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg41EBusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg41EBusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC. Custom' ...
  'er datatype should be used. Data Type: Boolean with Min value “False”(' ...
  '0), Init value “True”(1) and Max value “True”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg41EBusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode ';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg41EBusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordSelDrvModEnad = DataDict.IpSignal;
FordSelDrvModEnad.LongName = 'Ford Select Drive Mode Enabled';
FordSelDrvModEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC. Custom' ...
  'er datatype should be used. Data Type: Boolean with Min value “False”(' ...
  '0), Init value “True”(1) and Max value “True”(1)'];
FordSelDrvModEnad.DocUnits = 'Cnt';
FordSelDrvModEnad.EngDT = dt.lgc;
FordSelDrvModEnad.EngInit = 0;
FordSelDrvModEnad.EngMin = 0;
FordSelDrvModEnad.EngMax = 1;
FordSelDrvModEnad.ReadIn = {'FordMsg41EBusHiSpdPer1'};
FordSelDrvModEnad.ReadType = 'Rte';


Ford_SelDrvMdeChassis2_D_Rq1 = DataDict.IpSignal;
Ford_SelDrvMdeChassis2_D_Rq1.LongName = 'Ford Personalization Select Drive Mode';
Ford_SelDrvMdeChassis2_D_Rq1.Description = [...
  'Accepts Personalization Select Drive Mode as input signal from CAN. Cu' ...
  'stomer Data type : Ford_SelDrvMdeChassis2_D_Rq Source signal range:[0,' ...
  '31] Cx00_NormalMode(0), Cx01_NormalAdaptiveMode(1), Cx02_EconomyMode(2' ...
  '), Cx03_SportMode(3)Cx04_SportAdaptiveMode(4), Cx05_ComfortMode(5), Cx' ...
  '06_ComfortAdaptiveMode(6), Cx07_LowMuMode(7), Cx08_MudAndRutsMode(8), ' ...
  'Cx09_SandMode(9), Cx0A_RockCrawlMode(10), Cx0B_TowHaulMode(11), Cx0C_H' ...
  'ighSpeedDesertMode(12), Cx0D_TrackMode(13)Cx0E_RoughRoadMode(14), Cx0F' ...
  '_NotUsed2(15), Cx10_NotUsed3(16), Cx11_NotUsed4(17), Cx12_NotUsed5(18)' ...
  ', Cx13_NotUsed6(19), Cx14_NotUsed7(20), Cx15_NotUsed8(21), Cx16_NotUse' ...
  'd9(22), Cx17_NotUsed10(23), Cx18_NotUsed11(24)Cx19_NotUsed12(25), Cx1A' ...
  '_NotUsed13(26), Cx1B_NotUsed14(27), Cx1C_NotUsed15(28), Cx1D_NotUsed16' ...
  '(29), Cx1E_NotUsed17(30), Cx1F_Faulty(31)'];
Ford_SelDrvMdeChassis2_D_Rq1.DocUnits = 'Cnt';
Ford_SelDrvMdeChassis2_D_Rq1.EngDT = enum.Ford_SelDrvMdeChassis2_D_Rq;
Ford_SelDrvMdeChassis2_D_Rq1.EngInit = Ford_SelDrvMdeChassis2_D_Rq.Cx00_NormalMode;
Ford_SelDrvMdeChassis2_D_Rq1.EngMin = Ford_SelDrvMdeChassis2_D_Rq.Cx00_NormalMode;
Ford_SelDrvMdeChassis2_D_Rq1.EngMax = Ford_SelDrvMdeChassis2_D_Rq.Cx1F_Faulty;
Ford_SelDrvMdeChassis2_D_Rq1.ReadIn = {'FordMsg41EBusHiSpdPer1'};
Ford_SelDrvMdeChassis2_D_Rq1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehPenSelDrvMod = DataDict.OpSignal;
FordVehPenSelDrvMod.LongName = 'Ford Vehicle Personalization Select Drive Mode';
FordVehPenSelDrvMod.Description = [...
  'Processed Personalization Select Drive Mode to be used by EPS'];
FordVehPenSelDrvMod.DocUnits = 'Cnt';
FordVehPenSelDrvMod.SwcShoName = 'FordMsg41EBusHiSpd';
FordVehPenSelDrvMod.EngDT = enum.Ford_SelDrvMdeChassis2_D_Rq;
FordVehPenSelDrvMod.EngInit = Ford_SelDrvMdeChassis2_D_Rq.Cx00_NormalMode;
FordVehPenSelDrvMod.EngMin = Ford_SelDrvMdeChassis2_D_Rq.Cx00_NormalMode;
FordVehPenSelDrvMod.EngMax = Ford_SelDrvMdeChassis2_D_Rq.Cx1F_Faulty;
FordVehPenSelDrvMod.TestTolerance = 0;
FordVehPenSelDrvMod.WrittenIn = {'FordMsg41EBusHiSpdPer1'};
FordVehPenSelDrvMod.WriteType = 'Rte';


FordVehSelDrvModChassisVld = DataDict.OpSignal;
FordVehSelDrvModChassisVld.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid';
FordVehSelDrvModChassisVld.Description = [...
  'This signal Check the validity of Ford Vehicle Select Drive Mode Chass' ...
  'is signal'];
FordVehSelDrvModChassisVld.DocUnits = 'Cnt';
FordVehSelDrvModChassisVld.SwcShoName = 'FordMsg41EBusHiSpd';
FordVehSelDrvModChassisVld.EngDT = dt.lgc;
FordVehSelDrvModChassisVld.EngInit = 0;
FordVehSelDrvModChassisVld.EngMin = 0;
FordVehSelDrvModChassisVld.EngMax = 1;
FordVehSelDrvModChassisVld.TestTolerance = 0;
FordVehSelDrvModChassisVld.WrittenIn = {'FordMsg41EBusHiSpdPer1'};
FordVehSelDrvModChassisVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg41EBusHiSpdChassisVldMissFaildThd = DataDict.Calibration;
FordMsg41EBusHiSpdChassisVldMissFaildThd.LongName = 'Ford Message 41 E Bus High Speed Chassis Valid Missing Failed Threshold';
FordMsg41EBusHiSpdChassisVldMissFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Select Drive Mode Chassis Val' ...
  'id to False'];
FordMsg41EBusHiSpdChassisVldMissFaildThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdChassisVldMissFaildThd.EngDT = dt.u16;
FordMsg41EBusHiSpdChassisVldMissFaildThd.EngVal = 5000;
FordMsg41EBusHiSpdChassisVldMissFaildThd.EngMin = 0;
FordMsg41EBusHiSpdChassisVldMissFaildThd.EngMax = 6000;
FordMsg41EBusHiSpdChassisVldMissFaildThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdChassisVldMissFaildThd.CustomerVisible = false;
FordMsg41EBusHiSpdChassisVldMissFaildThd.Online = false;
FordMsg41EBusHiSpdChassisVldMissFaildThd.Impact = 'H';
FordMsg41EBusHiSpdChassisVldMissFaildThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdChassisVldMissFaildThd.GraphLink = {''};
FordMsg41EBusHiSpdChassisVldMissFaildThd.Monotony = 'None';
FordMsg41EBusHiSpdChassisVldMissFaildThd.MaxGrad = 0;
FordMsg41EBusHiSpdChassisVldMissFaildThd.PortName = 'FordMsg41EBusHiSpdChassisVldMissFaildThd';


FordMsg41EBusHiSpdChassisVldSigFaildThd = DataDict.Calibration;
FordMsg41EBusHiSpdChassisVldSigFaildThd.LongName = 'Ford Message 41 E Bus High Speed Chassis Valid Signal Failed Threshold';
FordMsg41EBusHiSpdChassisVldSigFaildThd.Description = [...
  'Threshold to set the output Ford Vehicle Select Drive Mode Chassis Val' ...
  'id to False'];
FordMsg41EBusHiSpdChassisVldSigFaildThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdChassisVldSigFaildThd.EngDT = dt.u16;
FordMsg41EBusHiSpdChassisVldSigFaildThd.EngVal = 0;
FordMsg41EBusHiSpdChassisVldSigFaildThd.EngMin = 0;
FordMsg41EBusHiSpdChassisVldSigFaildThd.EngMax = 6000;
FordMsg41EBusHiSpdChassisVldSigFaildThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdChassisVldSigFaildThd.CustomerVisible = false;
FordMsg41EBusHiSpdChassisVldSigFaildThd.Online = false;
FordMsg41EBusHiSpdChassisVldSigFaildThd.Impact = 'H';
FordMsg41EBusHiSpdChassisVldSigFaildThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdChassisVldSigFaildThd.GraphLink = {''};
FordMsg41EBusHiSpdChassisVldSigFaildThd.Monotony = 'None';
FordMsg41EBusHiSpdChassisVldSigFaildThd.MaxGrad = 0;
FordMsg41EBusHiSpdChassisVldSigFaildThd.PortName = 'FordMsg41EBusHiSpdChassisVldSigFaildThd';


FordMsg41EBusHiSpdChassisVldSigPassdThd = DataDict.Calibration;
FordMsg41EBusHiSpdChassisVldSigPassdThd.LongName = 'Ford Message 41 E Bus High Speed Chassis Valid Signal Passed Threshold';
FordMsg41EBusHiSpdChassisVldSigPassdThd.Description = [...
  'Threshold to set the output Ford Vehicle Select Drive Mode Chassis Val' ...
  'id to True'];
FordMsg41EBusHiSpdChassisVldSigPassdThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdChassisVldSigPassdThd.EngDT = dt.u16;
FordMsg41EBusHiSpdChassisVldSigPassdThd.EngVal = 0;
FordMsg41EBusHiSpdChassisVldSigPassdThd.EngMin = 0;
FordMsg41EBusHiSpdChassisVldSigPassdThd.EngMax = 6000;
FordMsg41EBusHiSpdChassisVldSigPassdThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdChassisVldSigPassdThd.CustomerVisible = false;
FordMsg41EBusHiSpdChassisVldSigPassdThd.Online = false;
FordMsg41EBusHiSpdChassisVldSigPassdThd.Impact = 'H';
FordMsg41EBusHiSpdChassisVldSigPassdThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdChassisVldSigPassdThd.GraphLink = {''};
FordMsg41EBusHiSpdChassisVldSigPassdThd.Monotony = 'None';
FordMsg41EBusHiSpdChassisVldSigPassdThd.MaxGrad = 0;
FordMsg41EBusHiSpdChassisVldSigPassdThd.PortName = 'FordMsg41EBusHiSpdChassisVldSigPassdThd';


FordMsg41EBusHiSpdInvldMsgFaildThd = DataDict.Calibration;
FordMsg41EBusHiSpdInvldMsgFaildThd.LongName = 'Ford Message 41 E Bus High Speed Invalid Message Failed Threshold';
FordMsg41EBusHiSpdInvldMsgFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg41EBusHiSpdInvldMsgFaildThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdInvldMsgFaildThd.EngDT = dt.u16;
FordMsg41EBusHiSpdInvldMsgFaildThd.EngVal = 0;
FordMsg41EBusHiSpdInvldMsgFaildThd.EngMin = 0;
FordMsg41EBusHiSpdInvldMsgFaildThd.EngMax = 6000;
FordMsg41EBusHiSpdInvldMsgFaildThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdInvldMsgFaildThd.CustomerVisible = false;
FordMsg41EBusHiSpdInvldMsgFaildThd.Online = false;
FordMsg41EBusHiSpdInvldMsgFaildThd.Impact = 'L';
FordMsg41EBusHiSpdInvldMsgFaildThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdInvldMsgFaildThd.GraphLink = {''};
FordMsg41EBusHiSpdInvldMsgFaildThd.Monotony = 'None';
FordMsg41EBusHiSpdInvldMsgFaildThd.MaxGrad = 0;
FordMsg41EBusHiSpdInvldMsgFaildThd.PortName = 'FordMsg41EBusHiSpdInvldMsgFaildThd';


FordMsg41EBusHiSpdInvldMsgPassdThd = DataDict.Calibration;
FordMsg41EBusHiSpdInvldMsgPassdThd.LongName = 'Ford Message 41 E Bus High Speed Invalid Message Passed Threshold';
FordMsg41EBusHiSpdInvldMsgPassdThd.Description = [...
  'Threshold to clear the Invalid message NTC'];
FordMsg41EBusHiSpdInvldMsgPassdThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdInvldMsgPassdThd.EngDT = dt.u16;
FordMsg41EBusHiSpdInvldMsgPassdThd.EngVal = 0;
FordMsg41EBusHiSpdInvldMsgPassdThd.EngMin = 0;
FordMsg41EBusHiSpdInvldMsgPassdThd.EngMax = 6000;
FordMsg41EBusHiSpdInvldMsgPassdThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdInvldMsgPassdThd.CustomerVisible = false;
FordMsg41EBusHiSpdInvldMsgPassdThd.Online = false;
FordMsg41EBusHiSpdInvldMsgPassdThd.Impact = 'L';
FordMsg41EBusHiSpdInvldMsgPassdThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdInvldMsgPassdThd.GraphLink = {''};
FordMsg41EBusHiSpdInvldMsgPassdThd.Monotony = 'None';
FordMsg41EBusHiSpdInvldMsgPassdThd.MaxGrad = 0;
FordMsg41EBusHiSpdInvldMsgPassdThd.PortName = 'FordMsg41EBusHiSpdInvldMsgPassdThd';


FordMsg41EBusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg41EBusHiSpdMissMsgFaildThd.LongName = 'Ford Message 41 E Bus High Speed Missing Message Failed Threshold';
FordMsg41EBusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg41EBusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg41EBusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg41EBusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg41EBusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg41EBusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg41EBusHiSpdMissMsgFaildThd.Online = false;
FordMsg41EBusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg41EBusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg41EBusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg41EBusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg41EBusHiSpdMissMsgFaildThd.PortName = 'FordMsg41EBusHiSpdMissMsgFaildThd';


FordMsg41EBusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg41EBusHiSpdMissMsgPassdThd.LongName = 'Ford Message 41 E Bus High Speed Missing Message Passed Threshold';
FordMsg41EBusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the Missing message NTC'];
FordMsg41EBusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg41EBusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg41EBusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg41EBusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg41EBusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg41EBusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg41EBusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg41EBusHiSpdMissMsgPassdThd.Online = false;
FordMsg41EBusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg41EBusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg41EBusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg41EBusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg41EBusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg41EBusHiSpdMissMsgPassdThd.PortName = 'FordMsg41EBusHiSpdMissMsgPassdThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SelnDrvgModMapSteerModY = DataDict.ImprtdCal;
SelnDrvgModMapSteerModY.DocUnits = 'Cnt';
SelnDrvgModMapSteerModY.EngDT = dt.u16;
SelnDrvgModMapSteerModY.EngVal =  ...
   [0                1                2                3                4                5                6                7                8                9               10               11               12               13               14               15               16               17               18               19               20               21               22               23               24               25               26               27               28               29               30               31];
SelnDrvgModMapSteerModY.EngMin = 0;
SelnDrvgModMapSteerModY.EngMax = 31;
SelnDrvgModMapSteerModY.PortName = 'SelnDrvgModMapSteerModY';
SelnDrvgModMapSteerModY.Description = 'Imported Calibration from CF063A';


SelnDrvgModSelDrvModChassis2X = DataDict.ImprtdCal;
SelnDrvgModSelDrvModChassis2X.DocUnits = 'Cnt';
SelnDrvgModSelDrvModChassis2X.EngDT = dt.u16;
SelnDrvgModSelDrvModChassis2X.EngVal =  ...
   [0                1                2                3                4                5                6                7                8                9               10               11               12               13               14               15               16               17               18               19               20               21               22               23               24               25               26               27               28               29               30               31];
SelnDrvgModSelDrvModChassis2X.EngMin = 0;
SelnDrvgModSelDrvModChassis2X.EngMax = 31;
SelnDrvgModSelDrvModChassis2X.PortName = 'SelnDrvgModSelDrvModChassis2X';
SelnDrvgModSelDrvModChassis2X.Description = 'Imported Calibration from CF063A';



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


FordVehMsg41EMiss = DataDict.PIM;
FordVehMsg41EMiss.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg41EMiss.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehMsg41EMiss.DocUnits = 'Cnt';
FordVehMsg41EMiss.EngDT = dt.lgc;
FordVehMsg41EMiss.EngMin = 0;
FordVehMsg41EMiss.EngMax = 1;
FordVehMsg41EMiss.InitRowCol = [1  1];


FordVehPenSelDrvModPrev = DataDict.PIM;
FordVehPenSelDrvModPrev.LongName = 'Ford Vehicle Personalization Select Drive Mode Previous';
FordVehPenSelDrvModPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Personalization Select Drive M' ...
  'ode'];
FordVehPenSelDrvModPrev.DocUnits = 'Cnt';
FordVehPenSelDrvModPrev.EngDT = enum.Ford_SelDrvMdeChassis2_D_Rq;
FordVehPenSelDrvModPrev.EngMin = Ford_SelDrvMdeChassis2_D_Rq.Cx00_NormalMode;
FordVehPenSelDrvModPrev.EngMax = Ford_SelDrvMdeChassis2_D_Rq.Cx1F_Faulty;
FordVehPenSelDrvModPrev.InitRowCol = [1  1];


FordVehSelDrvModChassisVldFaildRefTi = DataDict.PIM;
FordVehSelDrvModChassisVldFaildRefTi.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid Failed Reference Time';
FordVehSelDrvModChassisVldFaildRefTi.Description = [...
  'Timer for Select Drive Mode Chassis Valid Failed Reference Time willin' ...
  'crement or reset based on the conditions'];
FordVehSelDrvModChassisVldFaildRefTi.DocUnits = 'Cnt';
FordVehSelDrvModChassisVldFaildRefTi.EngDT = dt.u32;
FordVehSelDrvModChassisVldFaildRefTi.EngMin = 0;
FordVehSelDrvModChassisVldFaildRefTi.EngMax = 4294967295;
FordVehSelDrvModChassisVldFaildRefTi.InitRowCol = [1  1];


FordVehSelDrvModChassisVldMissRefTi = DataDict.PIM;
FordVehSelDrvModChassisVldMissRefTi.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid Missing Reference Time';
FordVehSelDrvModChassisVldMissRefTi.Description = [...
  'Timer for Ford Vehicle Select Drive Mode Chassis Valid Missing Referen' ...
  'ce Time will incrementor reset based on the conditions'];
FordVehSelDrvModChassisVldMissRefTi.DocUnits = 'Cnt';
FordVehSelDrvModChassisVldMissRefTi.EngDT = dt.u32;
FordVehSelDrvModChassisVldMissRefTi.EngMin = 0;
FordVehSelDrvModChassisVldMissRefTi.EngMax = 4294967295;
FordVehSelDrvModChassisVldMissRefTi.InitRowCol = [1  1];


FordVehSelDrvModChassisVldPassdRefTi = DataDict.PIM;
FordVehSelDrvModChassisVldPassdRefTi.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid Passed Reference Time';
FordVehSelDrvModChassisVldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Select Drive Mode Chassis Valid Passed Referenc' ...
  'e Time will increment or reset based on the conditions'];
FordVehSelDrvModChassisVldPassdRefTi.DocUnits = 'Cnt';
FordVehSelDrvModChassisVldPassdRefTi.EngDT = dt.u32;
FordVehSelDrvModChassisVldPassdRefTi.EngMin = 0;
FordVehSelDrvModChassisVldPassdRefTi.EngMax = 4294967295;
FordVehSelDrvModChassisVldPassdRefTi.InitRowCol = [1  1];


FordVehSelDrvModChassisVldPrev = DataDict.PIM;
FordVehSelDrvModChassisVldPrev.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid Previous';
FordVehSelDrvModChassisVldPrev.Description = [...
  'Previous Value of Ford Vehicle Select Drive Mode Chassis Valid'];
FordVehSelDrvModChassisVldPrev.DocUnits = 'Cnt';
FordVehSelDrvModChassisVldPrev.EngDT = dt.lgc;
FordVehSelDrvModChassisVldPrev.EngMin = 0;
FordVehSelDrvModChassisVldPrev.EngMax = 1;
FordVehSelDrvModChassisVldPrev.InitRowCol = [1  1];


InvldMsgFaildRefTi = DataDict.PIM;
InvldMsgFaildRefTi.LongName = 'Invalid Message Failed Reference Time';
InvldMsgFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
InvldMsgFaildRefTi.DocUnits = 'MilliSec';
InvldMsgFaildRefTi.EngDT = dt.u32;
InvldMsgFaildRefTi.EngMin = 0;
InvldMsgFaildRefTi.EngMax = 4294967295;
InvldMsgFaildRefTi.InitRowCol = [1  1];


InvldMsgPassdRefTi = DataDict.PIM;
InvldMsgPassdRefTi.LongName = 'Invalid Message Passed Reference Time';
InvldMsgPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
InvldMsgPassdRefTi.DocUnits = 'MilliSec';
InvldMsgPassdRefTi.EngDT = dt.u32;
InvldMsgPassdRefTi.EngMin = 0;
InvldMsgPassdRefTi.EngMax = 4294967295;
InvldMsgPassdRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'MilliSec';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for missing message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'MilliSec';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
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


FIXDVAL_MILLISEC_U16 = DataDict.Constant;
FIXDVAL_MILLISEC_U16.LongName = 'Fixed Value';
FIXDVAL_MILLISEC_U16.Description = [...
  'Pass constant value 5000 if EpsLifeCycMod is one'];
FIXDVAL_MILLISEC_U16.DocUnits = 'MilliSec';
FIXDVAL_MILLISEC_U16.EngDT = dt.u16;
FIXDVAL_MILLISEC_U16.EngVal = 5000;
FIXDVAL_MILLISEC_U16.Define = 'Local';


FORDVEHPENSELDRVMOD_CNT_U08 = DataDict.Constant;
FORDVEHPENSELDRVMOD_CNT_U08.LongName = 'Ford Vehicle Personalization Select Drive Mode';
FORDVEHPENSELDRVMOD_CNT_U08.Description = [...
  'Ford Vehicle Personalization Select Drive Mode is not mapped to a valu' ...
  'e equal to 0xFF in a 32 point calibratable table.'];
FORDVEHPENSELDRVMOD_CNT_U08.DocUnits = 'Cnt';
FORDVEHPENSELDRVMOD_CNT_U08.EngDT = dt.u08;
FORDVEHPENSELDRVMOD_CNT_U08.EngVal = 255;
FORDVEHPENSELDRVMOD_CNT_U08.Define = 'Local';


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
FordMsg41EMissMsg = DataDict.NTC;
FordMsg41EMissMsg.NtcNr = NtcNr1.NTCNR_0X16B;
FordMsg41EMissMsg.NtcTyp = 'None';
FordMsg41EMissMsg.LongName = 'Ford Message 41 E Missing Message';
FordMsg41EMissMsg.Description = 'Ford Message 41 E Missing Message Diagnostic';
FordMsg41EMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg41EMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg41EMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg41EMissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehPenSelDrvModInvldMsg = DataDict.NTC;
FordVehPenSelDrvModInvldMsg.NtcNr = NtcNr1.NTCNR_0X16C;
FordVehPenSelDrvModInvldMsg.NtcTyp = 'None';
FordVehPenSelDrvModInvldMsg.LongName = 'Ford Vehicle Personalization Select Drive Mode Invalid Message';
FordVehPenSelDrvModInvldMsg.Description = 'Ford Message 41 E Invalid Message Diagnostic';
FordVehPenSelDrvModInvldMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit0Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit1Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit2Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit3Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit4Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit5Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit6Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStInfo.Bit7Descr = 'Unused';
FordVehPenSelDrvModInvldMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
