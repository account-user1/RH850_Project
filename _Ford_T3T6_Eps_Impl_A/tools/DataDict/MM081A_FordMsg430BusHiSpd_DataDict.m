%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Dec-2017 13:41:29       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM081A = DataDict.FDD;
MM081A.Version = '2.1.X';
MM081A.LongName = 'Ford Message 430 Bus High Speed';
MM081A.ShoName  = 'FordMsg430BusHiSpd';
MM081A.DesignASIL = 'QM';
MM081A.Description = [...
  'The purpose of the Ford Message 430 Bus High Speed function is to prov' ...
  'ide the Electric Power Steeringsystem with vehicle odometer, climate, ' ...
  'and Trailer Back Up Assist signals from CAN. The Ford Message430 funct' ...
  'ion will perform the missing message and signal invalid diagnostics as' ...
  ' well as provide avalidity signal for the signal values and received m' ...
  'essage.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg430BusHiSpdInit1 = DataDict.Runnable;
FordMsg430BusHiSpdInit1.Context = 'Rte';
FordMsg430BusHiSpdInit1.TimeStep = 0;
FordMsg430BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg430BusHiSpdPer1 = DataDict.Runnable;
FordMsg430BusHiSpdPer1.Context = 'Rte';
FordMsg430BusHiSpdPer1.TimeStep = 0.01;
FordMsg430BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond'];

ComIPduCallout_Cluster_Info1_HS2 = DataDict.SrvRunnable;
ComIPduCallout_Cluster_Info1_HS2.Context = 'NonRte';
ComIPduCallout_Cluster_Info1_HS2.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_Cluster_Info1_HS2.Return = DataDict.CSReturn;
ComIPduCallout_Cluster_Info1_HS2.Return.Type = 'None';
ComIPduCallout_Cluster_Info1_HS2.Return.Min = [];
ComIPduCallout_Cluster_Info1_HS2.Return.Max = [];
ComIPduCallout_Cluster_Info1_HS2.Return.TestTolerance = [];
ComIPduCallout_Cluster_Info1_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).Name = 'Cluster_Info1';
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_Cluster_Info1_HS2.Arguments(1).Description = [...
  'Argument Cluster_Info1 set to true once this server runnable is called' ...
  ''];

ComTimeoutNotification_OdometerMasterValue = DataDict.SrvRunnable;
ComTimeoutNotification_OdometerMasterValue.Context = 'NonRte';
ComTimeoutNotification_OdometerMasterValue.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_OdometerMasterValue.Return = DataDict.CSReturn;
ComTimeoutNotification_OdometerMasterValue.Return.Type = 'None';
ComTimeoutNotification_OdometerMasterValue.Return.Min = [];
ComTimeoutNotification_OdometerMasterValue.Return.Max = [];
ComTimeoutNotification_OdometerMasterValue.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg430BusHiSpdInit1','FordMsg430BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg430BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg430BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg430BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test NTC'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg430BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibratable value or some fixed value t' ...
  'o FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg430BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Manufacturing Diagnostic Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Manufacturing Diagnostic Inhibit is False, Diagnostic test is per' ...
  'formed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg430BusHiSpdPer1'};
FordMfgDiagcInhb.ReadType = 'Rte';


FordMissMsgDiagcInhb = DataDict.IpSignal;
FordMissMsgDiagcInhb.LongName = 'Ford Missing Message Diagnostic Inhibit';
FordMissMsgDiagcInhb.Description = [...
  'When MissMsgDiagcInhb is FALSE, Diagnostic test is performed'];
FordMissMsgDiagcInhb.DocUnits = 'Cnt';
FordMissMsgDiagcInhb.EngDT = dt.u08;
FordMissMsgDiagcInhb.EngInit = 0;
FordMissMsgDiagcInhb.EngMin = 0;
FordMissMsgDiagcInhb.EngMax = 1;
FordMissMsgDiagcInhb.ReadIn = {'FordMsg430BusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


Ford_OdometerMasterValue = DataDict.IpSignal;
Ford_OdometerMasterValue.LongName = 'Ford Odometer Master Value';
Ford_OdometerMasterValue.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_OdometerMasterValue.DocUnits = 'Cnt';
Ford_OdometerMasterValue.EngDT = dt.u32;
Ford_OdometerMasterValue.EngInit = 0;
Ford_OdometerMasterValue.EngMin = 0;
Ford_OdometerMasterValue.EngMax = 16777215;
Ford_OdometerMasterValue.ReadIn = {'FordMsg430BusHiSpdPer1'};
Ford_OdometerMasterValue.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehOdom = DataDict.OpSignal;
FordVehOdom.LongName = 'Ford Vehicle Odometer';
FordVehOdom.Description = [...
  'Ford_OdometerMasterValue is assigned to Ford Vehicle Odometer to be us' ...
  'ed by EPS'];
FordVehOdom.DocUnits = 'KiloMtr';
FordVehOdom.SwcShoName = 'FordMsg430BusHiSpd';
FordVehOdom.EngDT = dt.float32;
FordVehOdom.EngInit = 0;
FordVehOdom.EngMin = 0;
FordVehOdom.EngMax = 16777215;
FordVehOdom.TestTolerance = 0.0005;
FordVehOdom.WrittenIn = {'FordMsg430BusHiSpdPer1'};
FordVehOdom.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg430BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg430BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 430 Bus High Speed Missing Message Failed Threshold';
FordMsg430BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg430BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg430BusHiSpdMissMsgFaildThd.EngDT = dt.u16p0;
FordMsg430BusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg430BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg430BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg430BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg430BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg430BusHiSpdMissMsgFaildThd.Online = false;
FordMsg430BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg430BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg430BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg430BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg430BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg430BusHiSpdMissMsgFaildThd.PortName = 'FordMsg430BusHiSpdMissMsgFaildThd';


FordMsg430BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg430BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 430 Bus High Speed Missing Message Passed Threshold';
FordMsg430BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg430BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg430BusHiSpdMissMsgPassdThd.EngDT = dt.u16p0;
FordMsg430BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg430BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg430BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg430BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg430BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg430BusHiSpdMissMsgPassdThd.Online = false;
FordMsg430BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg430BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg430BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg430BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg430BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg430BusHiSpdMissMsgPassdThd.PortName = 'FordMsg430BusHiSpdMissMsgPassdThd';



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
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostics Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = [...
  'Used to hold previous value of Clear Diagnostics Flag Proxy'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FordVehMsg430Miss = DataDict.PIM;
FordVehMsg430Miss.LongName = 'Ford Vehicle Message 430 Missing';
FordVehMsg430Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg430Miss.DocUnits = 'Cnt';
FordVehMsg430Miss.EngDT = dt.lgc;
FordVehMsg430Miss.EngMin = 0;
FordVehMsg430Miss.EngMax = 1;
FordVehMsg430Miss.InitRowCol = [1  1];


FordVehMsg430Rxd = DataDict.PIM;
FordVehMsg430Rxd.LongName = 'Ford Vehicle Message 430 Received';
FordVehMsg430Rxd.Description = [...
  'Flag for missing message diagnostics, it is true when message is recei' ...
  'ved.'];
FordVehMsg430Rxd.DocUnits = 'Cnt';
FordVehMsg430Rxd.EngDT = dt.lgc;
FordVehMsg430Rxd.EngMin = 0;
FordVehMsg430Rxd.EngMax = 1;
FordVehMsg430Rxd.InitRowCol = [1  1];


FordVehOdomPrev = DataDict.PIM;
FordVehOdomPrev.LongName = 'Ford Vehicle Odometer Previous';
FordVehOdomPrev.Description = [...
  'Previous Value for Ford Vehicle Odometer'];
FordVehOdomPrev.DocUnits = 'KiloMtr';
FordVehOdomPrev.EngDT = dt.float32;
FordVehOdomPrev.EngMin = 0;
FordVehOdomPrev.EngMax = 16777215;
FordVehOdomPrev.InitRowCol = [1  1];


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
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Time Threshold';
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


DIAGENA_CNT_U08 = DataDict.Constant;
DIAGENA_CNT_U08.LongName = 'DTC Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  'on the EPSLifeCycMod'];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


ODOMMAX_KILOMTR_F32 = DataDict.Constant;
ODOMMAX_KILOMTR_F32.LongName = 'Odometer Maximum';
ODOMMAX_KILOMTR_F32.Description = 'Maximum valid values for Odometer';
ODOMMAX_KILOMTR_F32.DocUnits = 'KiloMtr';
ODOMMAX_KILOMTR_F32.EngDT = dt.float32;
ODOMMAX_KILOMTR_F32.EngVal = 16777215;
ODOMMAX_KILOMTR_F32.Define = 'Local';


ODOMMIN_KILOMTR_F32 = DataDict.Constant;
ODOMMIN_KILOMTR_F32.LongName = 'Odometer Minimum';
ODOMMIN_KILOMTR_F32.Description = 'Minimum valid values for Odometer';
ODOMMIN_KILOMTR_F32.DocUnits = 'KiloMtr';
ODOMMIN_KILOMTR_F32.EngDT = dt.float32;
ODOMMIN_KILOMTR_F32.EngVal = 0;
ODOMMIN_KILOMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg430MissMsg = DataDict.NTC;
FordMsg430MissMsg.NtcNr = NtcNr1.NTCNR_0X16D;
FordMsg430MissMsg.NtcTyp = 'None';
FordMsg430MissMsg.LongName = 'Ford Message 430 Missing Message';
FordMsg430MissMsg.Description = '';
FordMsg430MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg430MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg430MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg430MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
