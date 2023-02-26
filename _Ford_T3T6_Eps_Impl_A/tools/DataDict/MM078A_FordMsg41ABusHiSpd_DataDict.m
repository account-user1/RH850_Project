%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Mar-2018 15:32:44       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM078A = DataDict.FDD;
MM078A.Version = '3.0.X';
MM078A.LongName = 'Ford Message 41A Bus High Speed';
MM078A.ShoName  = 'FordMsg41ABusHiSpd';
MM078A.DesignASIL = 'B';
MM078A.Description = [...
  'The purpose of the Ford Message 41A Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with vehicle odometer, climate,' ...
  ' and Trailer Back Up Assist signals from CAN. The Ford Message 41A fun' ...
  'ction will perform the missing message and signal invalid diagnostics ' ...
  'as well as provide a validity signal for the signal values and receive' ...
  'd message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg41ABusHiSpdInit1 = DataDict.Runnable;
FordMsg41ABusHiSpdInit1.Context = 'Rte';
FordMsg41ABusHiSpdInit1.TimeStep = 0;
FordMsg41ABusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg41ABusHiSpdPer1 = DataDict.Runnable;
FordMsg41ABusHiSpdPer1.Context = 'Rte';
FordMsg41ABusHiSpdPer1.TimeStep = 0.01;
FordMsg41ABusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond'];

ComIPduCallout_Climate_Control_Data_FD1 = DataDict.SrvRunnable;
ComIPduCallout_Climate_Control_Data_FD1.Context = 'NonRte';
ComIPduCallout_Climate_Control_Data_FD1.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_Climate_Control_Data_FD1.Return = DataDict.CSReturn;
ComIPduCallout_Climate_Control_Data_FD1.Return.Type = 'None';
ComIPduCallout_Climate_Control_Data_FD1.Return.Min = [];
ComIPduCallout_Climate_Control_Data_FD1.Return.Max = [];
ComIPduCallout_Climate_Control_Data_FD1.Return.TestTolerance = [];
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).Name = 'ClimateControlData';
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Climate_Control_Data_FD1.Arguments(1).Description = [...
  'ClimateControlData is set to one when service is invoked'];

ComTimeoutNotification_Outside_Air_Temp_Stat = DataDict.SrvRunnable;
ComTimeoutNotification_Outside_Air_Temp_Stat.Context = 'NonRte';
ComTimeoutNotification_Outside_Air_Temp_Stat.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_Outside_Air_Temp_Stat.Return = DataDict.CSReturn;
ComTimeoutNotification_Outside_Air_Temp_Stat.Return.Type = 'None';
ComTimeoutNotification_Outside_Air_Temp_Stat.Return.Min = [];
ComTimeoutNotification_Outside_Air_Temp_Stat.Return.Max = [];
ComTimeoutNotification_Outside_Air_Temp_Stat.Return.TestTolerance = [];
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1) = DataDict.CSArguments;
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).Name = 'ClimateControlData';
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).EngDT = dt.lgc;
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).EngMin = 0;
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).EngMax = 1;
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).TestTolerance = 0;
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).Units = 'Cnt';
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).Direction = 'Out';
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).InitRowCol = [1  1];
ComTimeoutNotification_Outside_Air_Temp_Stat.Arguments(1).Description = [...
  'Server Runnable for Message Timeout'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg41ABusHiSpdInit1','FordMsg41ABusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg41ABusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg41ABusHiSpdPer1'};
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
  'This signal should be set to 1 in order to Test Diagnostic NTC'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg41ABusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC. Custom' ...
  'er datatype should be used. Data Type: Boolean with Min value "False"(' ...
  '0), Init value "True"(1) and Max value "True"(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg41ABusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg41ABusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


Ford_Outside_Air_Temp_Stat = DataDict.IpSignal;
Ford_Outside_Air_Temp_Stat.LongName = 'Ford Outside Air Temperature Status';
Ford_Outside_Air_Temp_Stat.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS. Customer Doc Unit:Ford_Outside_Air_Temp_Stat ' ...
  ',Source signal range:[0,255],CxFE_Unknown(254), CxFF_Invalid(255).'];
Ford_Outside_Air_Temp_Stat.DocUnits = 'Cnt';
Ford_Outside_Air_Temp_Stat.EngDT = dt.u16;
Ford_Outside_Air_Temp_Stat.EngInit = 254;
Ford_Outside_Air_Temp_Stat.EngMin = 0;
Ford_Outside_Air_Temp_Stat.EngMax = 255;
Ford_Outside_Air_Temp_Stat.ReadIn = {'FordMsg41ABusHiSpdPer1'};
Ford_Outside_Air_Temp_Stat.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehOutdAirT = DataDict.OpSignal;
FordVehOutdAirT.LongName = 'Ford Vehicle Outside Air Temperature';
FordVehOutdAirT.Description = [...
  'Processed value of Ford Outside Air Temperature Status to be used by E' ...
  'PS'];
FordVehOutdAirT.DocUnits = 'DegCgrd';
FordVehOutdAirT.SwcShoName = 'FordMsg41ABusHiSpd';
FordVehOutdAirT.EngDT = dt.float32;
FordVehOutdAirT.EngInit = 86.5;
FordVehOutdAirT.EngMin = -40;
FordVehOutdAirT.EngMax = 86.5;
FordVehOutdAirT.TestTolerance = 0.25;
FordVehOutdAirT.WrittenIn = {'FordMsg41ABusHiSpdPer1'};
FordVehOutdAirT.WriteType = 'Rte';


FordVehOutdAirTRaw = DataDict.OpSignal;
FordVehOutdAirTRaw.LongName = 'Ford Vehicle Outside Air Temperature Raw';
FordVehOutdAirTRaw.Description = [...
  'Processed value of Ford Outside Air Temperature Status to be used by E' ...
  'PS'];
FordVehOutdAirTRaw.DocUnits = 'Cnt';
FordVehOutdAirTRaw.SwcShoName = 'FordMsg41ABusHiSpd';
FordVehOutdAirTRaw.EngDT = dt.u16;
FordVehOutdAirTRaw.EngInit = 254;
FordVehOutdAirTRaw.EngMin = 0;
FordVehOutdAirTRaw.EngMax = 255;
FordVehOutdAirTRaw.TestTolerance = 0;
FordVehOutdAirTRaw.WrittenIn = {'FordMsg41ABusHiSpdPer1'};
FordVehOutdAirTRaw.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg41ABusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg41ABusHiSpdMissMsgFaildThd.LongName = 'Ford Message 41 A Bus High Speed Missing Message Failed Threshold';
FordMsg41ABusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg41ABusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg41ABusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg41ABusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg41ABusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg41ABusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg41ABusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg41ABusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg41ABusHiSpdMissMsgFaildThd.Online = false;
FordMsg41ABusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg41ABusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg41ABusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg41ABusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg41ABusHiSpdMissMsgFaildThd.MaxGrad = Inf;
FordMsg41ABusHiSpdMissMsgFaildThd.PortName = 'FordMsg41ABusHiSpdMissMsgFaildThd';


FordMsg41ABusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg41ABusHiSpdMissMsgPassdThd.LongName = 'Ford Message 41 A Bus High Speed Missing Message Passed Threshold';
FordMsg41ABusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg41ABusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg41ABusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg41ABusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg41ABusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg41ABusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg41ABusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg41ABusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg41ABusHiSpdMissMsgPassdThd.Online = false;
FordMsg41ABusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg41ABusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg41ABusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg41ABusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg41ABusHiSpdMissMsgPassdThd.MaxGrad = Inf;
FordMsg41ABusHiSpdMissMsgPassdThd.PortName = 'FordMsg41ABusHiSpdMissMsgPassdThd';



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
  'Previous value of Clear Diagnostic Flag Proxy'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FordVehMsg41AMiss = DataDict.PIM;
FordVehMsg41AMiss.LongName = 'Ford Vehicle Message 41A Missing';
FordVehMsg41AMiss.Description = [...
  'Previous value of Ford Vehicle Message 41A Missing'];
FordVehMsg41AMiss.DocUnits = 'Cnt';
FordVehMsg41AMiss.EngDT = dt.lgc;
FordVehMsg41AMiss.EngMin = 0;
FordVehMsg41AMiss.EngMax = 1;
FordVehMsg41AMiss.InitRowCol = [1  1];


FordVehOutdAirTPrev = DataDict.PIM;
FordVehOutdAirTPrev.LongName = 'Ford Vehicle Outside Air Temperature Previous';
FordVehOutdAirTPrev.Description = [...
  'Previous value of Ford Vehicle Outside Air Temperature'];
FordVehOutdAirTPrev.DocUnits = 'DegCgrd';
FordVehOutdAirTPrev.EngDT = dt.float32;
FordVehOutdAirTPrev.EngMin = -40;
FordVehOutdAirTPrev.EngMax = 86.5;
FordVehOutdAirTPrev.InitRowCol = [1  1];


FordVehOutdAirTRawPrev = DataDict.PIM;
FordVehOutdAirTRawPrev.LongName = 'Ford Vehicle Outside Air Temperature Raw Previous';
FordVehOutdAirTRawPrev.Description = [...
  'Previous value of Ford Vehicle Outside Air Temperature Raw'];
FordVehOutdAirTRawPrev.DocUnits = 'Cnt';
FordVehOutdAirTRawPrev.EngDT = dt.u16;
FordVehOutdAirTRawPrev.EngMin = 0;
FordVehOutdAirTRawPrev.EngMax = 255;
FordVehOutdAirTRawPrev.InitRowCol = [1  1];


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


FORDVEHOUTDAIRTMAX_DEGCGRD_F32 = DataDict.Constant;
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.LongName = 'Ford Vehicle Outside Air Temperature Maximum';
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.Description = [...
  'Maximum value of Ford Vehicle Outside Air Temperature'];
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.DocUnits = 'DegCgrd';
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.EngDT = dt.float32;
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.EngVal = 86.5;
FORDVEHOUTDAIRTMAX_DEGCGRD_F32.Define = 'Local';


FORDVEHOUTDAIRTMIN_DEGCGRD_F32 = DataDict.Constant;
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.LongName = 'Ford Vehicle Outside Air Temperature Minimum';
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.Description = [...
  'Minimum value of Ford Vehicle Outside Air Temperature'];
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.DocUnits = 'DegCgrd';
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.EngDT = dt.float32;
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.EngVal = -40;
FORDVEHOUTDAIRTMIN_DEGCGRD_F32.Define = 'Local';


FORDVEHOUTDAIRTOFFS_DEGCGRD_F32 = DataDict.Constant;
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.LongName = 'Ford vehicle Outside Air Temperature Offset';
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.Description = [...
  'Offset for Ford vehicle Outside Air Temperature'];
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.DocUnits = 'DegCgrd';
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.EngDT = dt.float32;
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.EngVal = 40;
FORDVEHOUTDAIRTOFFS_DEGCGRD_F32.Define = 'Local';


FORDVEHOUTDAIRTRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHOUTDAIRTRAWMAX_CNT_U16.LongName = 'Ford Vehicle Outside Air Temperature Raw Maximum';
FORDVEHOUTDAIRTRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Outside Air Temperature Raw'];
FORDVEHOUTDAIRTRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHOUTDAIRTRAWMAX_CNT_U16.EngDT = dt.u08;
FORDVEHOUTDAIRTRAWMAX_CNT_U16.EngVal = 255;
FORDVEHOUTDAIRTRAWMAX_CNT_U16.Define = 'Local';


FORDVEHOUTDAIRTRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHOUTDAIRTRAWMIN_CNT_U16.LongName = 'Ford Vehicle Outside Air Temperature Raw Minimum';
FORDVEHOUTDAIRTRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Outside Air Temperature Raw'];
FORDVEHOUTDAIRTRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHOUTDAIRTRAWMIN_CNT_U16.EngDT = dt.u08;
FORDVEHOUTDAIRTRAWMIN_CNT_U16.EngVal = 0;
FORDVEHOUTDAIRTRAWMIN_CNT_U16.Define = 'Local';


FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16 = DataDict.Constant;
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.LongName = 'Ford Vehicle Outside Air Temperature Raw CxFE_Unknown';
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.Description = [...
  'Initial value of Ford Outside Air Temperature Raw'];
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.DocUnits = 'Cnt';
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.EngDT = dt.u16;
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.EngVal = 254;
FORDVEHOUTDAIRTRAWUNKNOWN_CNT_U16.Define = 'Local';


FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32 = DataDict.Constant;
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.LongName = 'Ford Vehicle Outside Air Temperature Scaling Factor';
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Outside Air Temperature'];
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.DocUnits = 'DegCgrdPerCnt';
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.EngDT = dt.float32;
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.EngVal = 0.5;
FORDVEHOUTDAIRTSCAGFAC_DEGCGRDPERCNT_F32.Define = 'Local';


FORDVEHOUTDAIRT_DEGCGRD_F32 = DataDict.Constant;
FORDVEHOUTDAIRT_DEGCGRD_F32.LongName = 'Ford Vehicle Outside Air Temperature';
FORDVEHOUTDAIRT_DEGCGRD_F32.Description = [...
  'Initial Value of Ford Vehicle Outside Air Temperature '];
FORDVEHOUTDAIRT_DEGCGRD_F32.DocUnits = 'DegCgrd';
FORDVEHOUTDAIRT_DEGCGRD_F32.EngDT = dt.float32;
FORDVEHOUTDAIRT_DEGCGRD_F32.EngVal = 86.5;
FORDVEHOUTDAIRT_DEGCGRD_F32.Define = 'Local';


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
FordMsg41AMissMsg = DataDict.NTC;
FordMsg41AMissMsg.NtcNr = NtcNr1.NTCNR_0X19A;
FordMsg41AMissMsg.NtcTyp = 'Deb';
FordMsg41AMissMsg.LongName = 'Ford Message 41A Missing Message';
FordMsg41AMissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg41AMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg41AMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg41AMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg41AMissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
