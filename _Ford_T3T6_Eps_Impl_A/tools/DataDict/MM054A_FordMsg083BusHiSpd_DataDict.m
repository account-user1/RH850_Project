%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Apr-2018 16:21:37       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM054A = DataDict.FDD;
MM054A.Version = '2.0.X';
MM054A.LongName = 'Ford Message 083 Bus High Speed';
MM054A.ShoName  = 'FordMsg083BusHiSpd';
MM054A.DesignASIL = 'B';
MM054A.Description = [...
  'The purpose of the Ford Message 083 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Lane' ...
  ' Detection Warning function from CAN. The Ford Message 083 function wi' ...
  'll perform the missing message diagnostics as well asprovide a validit' ...
  'y flag for the signal values and received message. Detailed requiremen' ...
  'ts have implemented the Ford DBC file for guidance.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg083BusHiSpdInit1 = DataDict.Runnable;
FordMsg083BusHiSpdInit1.Context = 'Rte';
FordMsg083BusHiSpdInit1.TimeStep = 0;
FordMsg083BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg083BusHiSpdPer1 = DataDict.Runnable;
FordMsg083BusHiSpdPer1.Context = 'Rte';
FordMsg083BusHiSpdPer1.TimeStep = 0.01;
FordMsg083BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_Steering_Data_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Steering_Data_FD1.Context = 'NonRte';
ComIPduCallout_Steering_Data_FD1.Description = [...
  'Server Runnable for clear diagnostics'];
ComIPduCallout_Steering_Data_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Steering_Data_FD1.Return.Type = 'None';
ComIPduCallout_Steering_Data_FD1.Return.Min = [];
ComIPduCallout_Steering_Data_FD1.Return.Max = [];
ComIPduCallout_Steering_Data_FD1.Return.TestTolerance = [];
ComIPduCallout_Steering_Data_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Steering_Data_FD1.Arguments(1).Name = 'Steering';
ComIPduCallout_Steering_Data_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Steering_Data_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Steering_Data_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Steering_Data_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Steering_Data_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Steering_Data_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Steering_Data_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Steering_Data_FD1.Arguments(1).Description = [...
  'BrakeSnData is set to one when service is invoked'];

ComTimeoutNotification_TurnLghtSwtch_D_Stat = DataDict.SrvRunnable;
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Context = 'NonRte';
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Description = [...
  'Server Runnable for disabling serial communication'];
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Return = DataDict.CSReturn;
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Return.Type = 'None';
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Return.Min = [];
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Return.Max = [];
ComTimeoutNotification_TurnLghtSwtch_D_Stat.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg083BusHiSpdInit1','FordMsg083BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg083BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg083BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg083BusHiSpdPer1'};
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
FordCanDtcInhb.ReadIn = {'FordMsg083BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg083BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordLaneDetnWarnEnad = DataDict.IpSignal;
FordLaneDetnWarnEnad.LongName = 'Lane Detection Warning Enabled';
FordLaneDetnWarnEnad.Description = [...
  'This signal is set to 1 in order to set the missing NTC to pass orfail' ...
  ''];
FordLaneDetnWarnEnad.DocUnits = 'Cnt';
FordLaneDetnWarnEnad.EngDT = dt.lgc;
FordLaneDetnWarnEnad.EngInit = 0;
FordLaneDetnWarnEnad.EngMin = 0;
FordLaneDetnWarnEnad.EngMax = 1;
FordLaneDetnWarnEnad.ReadIn = {'FordMsg083BusHiSpdPer1'};
FordLaneDetnWarnEnad.ReadType = 'Rte';


Ford_TurnLghtSwtch_D_Stat1 = DataDict.IpSignal;
Ford_TurnLghtSwtch_D_Stat1.LongName = 'Ford Turn Signal Switch Status';
Ford_TurnLghtSwtch_D_Stat1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed. Datatype: Ford_TurnLghtSwtch_D_Stat.Elements are: 0 - "Cx0_Of' ...
  'f", 1 - "Cx1_Left", 2 - "Cx2_Right", 3 - "Cx3_Unused_Treat_As_Off'];
Ford_TurnLghtSwtch_D_Stat1.DocUnits = 'Cnt';
Ford_TurnLghtSwtch_D_Stat1.EngDT = enum.Ford_TurnLghtSwtch_D_Stat;
Ford_TurnLghtSwtch_D_Stat1.EngInit = Ford_TurnLghtSwtch_D_Stat.Cx0_Off;
Ford_TurnLghtSwtch_D_Stat1.EngMin = Ford_TurnLghtSwtch_D_Stat.Cx0_Off;
Ford_TurnLghtSwtch_D_Stat1.EngMax = Ford_TurnLghtSwtch_D_Stat.Cx3_Unused_Treat_As_Off;
Ford_TurnLghtSwtch_D_Stat1.ReadIn = {'FordMsg083BusHiSpdPer1'};
Ford_TurnLghtSwtch_D_Stat1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehTurnSigSwtStsRaw = DataDict.OpSignal;
FordVehTurnSigSwtStsRaw.LongName = 'Ford Vehicle Turn Signal Switch Status Raw';
FordVehTurnSigSwtStsRaw.Description = [...
  'Processed value of Vehcile Turn Signal Switch Status Raw which is used' ...
  ' by EPS'];
FordVehTurnSigSwtStsRaw.DocUnits = 'Cnt';
FordVehTurnSigSwtStsRaw.SwcShoName = 'FordMsg083BusHiSpd';
FordVehTurnSigSwtStsRaw.EngDT = enum.Ford_TurnLghtSwtch_D_Stat;
FordVehTurnSigSwtStsRaw.EngInit = Ford_TurnLghtSwtch_D_Stat.Cx0_Off;
FordVehTurnSigSwtStsRaw.EngMin = Ford_TurnLghtSwtch_D_Stat.Cx0_Off;
FordVehTurnSigSwtStsRaw.EngMax = Ford_TurnLghtSwtch_D_Stat.Cx3_Unused_Treat_As_Off;
FordVehTurnSigSwtStsRaw.TestTolerance = 0;
FordVehTurnSigSwtStsRaw.WrittenIn = {'FordMsg083BusHiSpdPer1'};
FordVehTurnSigSwtStsRaw.WriteType = 'Rte';


FordVehTurnSigVld = DataDict.OpSignal;
FordVehTurnSigVld.LongName = 'Ford Vehicle Turn Signal Valid';
FordVehTurnSigVld.Description = [...
  'This signal Check the validity of Ford Vehicle Turn Signal'];
FordVehTurnSigVld.DocUnits = 'Cnt';
FordVehTurnSigVld.SwcShoName = 'FordMsg083BusHiSpd';
FordVehTurnSigVld.EngDT = dt.lgc;
FordVehTurnSigVld.EngInit = 0;
FordVehTurnSigVld.EngMin = 0;
FordVehTurnSigVld.EngMax = 1;
FordVehTurnSigVld.TestTolerance = 0;
FordVehTurnSigVld.WrittenIn = {'FordMsg083BusHiSpdPer1'};
FordVehTurnSigVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg083BusHiSpdFordVehTurnSigVldThd = DataDict.Calibration;
FordMsg083BusHiSpdFordVehTurnSigVldThd.LongName = 'Ford Message 083 Bus High Speed Ford Vehicle Turn Signal Valid Threshold';
FordMsg083BusHiSpdFordVehTurnSigVldThd.Description = [...
  'Threshold to set Ford Vehicle Turn Signal to True'];
FordMsg083BusHiSpdFordVehTurnSigVldThd.DocUnits = 'MilliSec';
FordMsg083BusHiSpdFordVehTurnSigVldThd.EngDT = dt.u16;
FordMsg083BusHiSpdFordVehTurnSigVldThd.EngVal = 0;
FordMsg083BusHiSpdFordVehTurnSigVldThd.EngMin = 0;
FordMsg083BusHiSpdFordVehTurnSigVldThd.EngMax = 6000;
FordMsg083BusHiSpdFordVehTurnSigVldThd.Cardinality = 'Cmn';
FordMsg083BusHiSpdFordVehTurnSigVldThd.CustomerVisible = false;
FordMsg083BusHiSpdFordVehTurnSigVldThd.Online = false;
FordMsg083BusHiSpdFordVehTurnSigVldThd.Impact = 'H';
FordMsg083BusHiSpdFordVehTurnSigVldThd.TuningOwner = 'EPDT';
FordMsg083BusHiSpdFordVehTurnSigVldThd.GraphLink = {''};
FordMsg083BusHiSpdFordVehTurnSigVldThd.Monotony = 'None';
FordMsg083BusHiSpdFordVehTurnSigVldThd.MaxGrad = 0;
FordMsg083BusHiSpdFordVehTurnSigVldThd.PortName = 'FordMsg083BusHiSpdFordVehTurnSigVldThd';


FordMsg083BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg083BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 083 Bus High Speed Missing Message Failed Threshold';
FordMsg083BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg083BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg083BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg083BusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg083BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg083BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg083BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg083BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg083BusHiSpdMissMsgFaildThd.Online = false;
FordMsg083BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg083BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg083BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg083BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg083BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg083BusHiSpdMissMsgFaildThd.PortName = 'FordMsg083BusHiSpdMissMsgFaildThd';


FordMsg083BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg083BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 083 Bus High Speed Missing Message Passed Threshold';
FordMsg083BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg083BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg083BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg083BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg083BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg083BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg083BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg083BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg083BusHiSpdMissMsgPassdThd.Online = false;
FordMsg083BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg083BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg083BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg083BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg083BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg083BusHiSpdMissMsgPassdThd.PortName = 'FordMsg083BusHiSpdMissMsgPassdThd';


FordMsg083BusHiSpdVehTurnSigVldMissMsgThd = DataDict.Calibration;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.LongName = 'Ford Message 083 Bus High Speed Vehicle Turn Signal Valid Missing Message Threshold';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.Description = [...
  'Threshold to set Ford Vehicle Turn Signal to False when message is mis' ...
  'sing'];
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.EngDT = dt.u16;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.EngVal = 5000;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.EngMin = 0;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.EngMax = 6000;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.Cardinality = 'Cmn';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.CustomerVisible = false;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.Online = false;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.Impact = 'H';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.GraphLink = {''};
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.Monotony = 'None';
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.MaxGrad = 0;
FordMsg083BusHiSpdVehTurnSigVldMissMsgThd.PortName = 'FordMsg083BusHiSpdVehTurnSigVldMissMsgThd';



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


FordVehMsg083Miss = DataDict.PIM;
FordVehMsg083Miss.LongName = 'Ford Vehicle Message 083 Missing';
FordVehMsg083Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg083Miss.DocUnits = 'Cnt';
FordVehMsg083Miss.EngDT = dt.lgc;
FordVehMsg083Miss.EngMin = 0;
FordVehMsg083Miss.EngMax = 1;
FordVehMsg083Miss.InitRowCol = [1  1];


FordVehTurnSigSwtStsRawPrev = DataDict.PIM;
FordVehTurnSigSwtStsRawPrev.LongName = 'Ford Vehicle Turn Signal Switch Status Raw Previous';
FordVehTurnSigSwtStsRawPrev.Description = [...
  'Previous value of Ford Vehicle Turn Signal Switch Status Raw '];
FordVehTurnSigSwtStsRawPrev.DocUnits = 'Cnt';
FordVehTurnSigSwtStsRawPrev.EngDT = enum.Ford_TurnLghtSwtch_D_Stat;
FordVehTurnSigSwtStsRawPrev.EngMin = Ford_TurnLghtSwtch_D_Stat.Cx0_Off;
FordVehTurnSigSwtStsRawPrev.EngMax = Ford_TurnLghtSwtch_D_Stat.Cx3_Unused_Treat_As_Off;
FordVehTurnSigSwtStsRawPrev.InitRowCol = [1  1];


FordVehTurnSigVldMissMsgRefTi = DataDict.PIM;
FordVehTurnSigVldMissMsgRefTi.LongName = 'Ford Vehicle Turn Signal Valid Missing Message Reference Time';
FordVehTurnSigVldMissMsgRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
FordVehTurnSigVldMissMsgRefTi.DocUnits = 'Cnt';
FordVehTurnSigVldMissMsgRefTi.EngDT = dt.u32;
FordVehTurnSigVldMissMsgRefTi.EngMin = 0;
FordVehTurnSigVldMissMsgRefTi.EngMax = 4294967295;
FordVehTurnSigVldMissMsgRefTi.InitRowCol = [1  1];


FordVehTurnSigVldPrev = DataDict.PIM;
FordVehTurnSigVldPrev.LongName = 'Ford Vehicle Turn Signal Valid Previous';
FordVehTurnSigVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Turn Signal Valid '];
FordVehTurnSigVldPrev.DocUnits = 'Cnt';
FordVehTurnSigVldPrev.EngDT = dt.lgc;
FordVehTurnSigVldPrev.EngMin = 0;
FordVehTurnSigVldPrev.EngMax = 1;
FordVehTurnSigVldPrev.InitRowCol = [1  1];


FordVehTurnSigVldRefTi = DataDict.PIM;
FordVehTurnSigVldRefTi.LongName = 'Ford Vehicle Turn Signal Valid Reference Time';
FordVehTurnSigVldRefTi.Description = [...
  'Timer to update Ford Vehicle Turn Signal Valid as true or false based ' ...
  'on calibration threshold'];
FordVehTurnSigVldRefTi.DocUnits = 'Cnt';
FordVehTurnSigVldRefTi.EngDT = dt.u32;
FordVehTurnSigVldRefTi.EngMin = 0;
FordVehTurnSigVldRefTi.EngMax = 4294967295;
FordVehTurnSigVldRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the message' ...
  ' availabilty'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the message' ...
  'availabilty'];
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
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg083MissMsg = DataDict.NTC;
FordMsg083MissMsg.NtcNr = NtcNr1.NTCNR_0X116;
FordMsg083MissMsg.NtcTyp = 'None';
FordMsg083MissMsg.LongName = 'Ford Message 083 Missing Message';
FordMsg083MissMsg.Description = 'NTC is used to check whether message is missing or not';
FordMsg083MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg083MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg083MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg083MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
