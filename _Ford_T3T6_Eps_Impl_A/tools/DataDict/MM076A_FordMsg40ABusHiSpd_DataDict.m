%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Feb-2018 11:33:02       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM076A = DataDict.FDD;
MM076A.Version = '3.0.X';
MM076A.LongName = 'Ford Message 40A Bus High Speed';
MM076A.ShoName  = 'FordMsg40ABusHiSpd';
MM076A.DesignASIL = 'QM';
MM076A.Description = [...
  'The purpose of the Ford Message 40A Bus High Speed function is to prov' ...
  'ide the Electric Power Steering systemwith signal values for the globa' ...
  'l configuration function from CAN.The Ford Message 40A function will p' ...
  'erform the missing message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg40ABusHiSpdInit1 = DataDict.Runnable;
FordMsg40ABusHiSpdInit1.Context = 'Rte';
FordMsg40ABusHiSpdInit1.TimeStep = 0;
FordMsg40ABusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg40ABusHiSpdPer1 = DataDict.Runnable;
FordMsg40ABusHiSpdPer1.Context = 'Rte';
FordMsg40ABusHiSpdPer1.TimeStep = 0.01;
FordMsg40ABusHiSpdPer1.Description = 'Periodic Runnable at 0.01 sec';

ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2 = DataDict.SrvRunnable;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Context = 'NonRte';
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Description = [...
  'Server Runnable to provide a message reception service when a new mess' ...
  'age is received'];
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Return = DataDict.CSReturn;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Return.Type = 'None';
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Return.Min = [];
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Return.Max = [];
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Return.TestTolerance = [];
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).Name = 'GGCC_Config';
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2.Arguments(1).Description = [...
  'Argument GGCC_Config set to true once this server runnable is called'];

ComTimeoutNotification_VehicleGGCCData = DataDict.SrvRunnable;
ComTimeoutNotification_VehicleGGCCData.Context = 'NonRte';
ComTimeoutNotification_VehicleGGCCData.Description = [...
  'Server Runnable to determine if the message is missing'];
ComTimeoutNotification_VehicleGGCCData.Return = DataDict.CSReturn;
ComTimeoutNotification_VehicleGGCCData.Return.Type = 'None';
ComTimeoutNotification_VehicleGGCCData.Return.Min = [];
ComTimeoutNotification_VehicleGGCCData.Return.Max = [];
ComTimeoutNotification_VehicleGGCCData.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg40ABusHiSpdInit1','FordMsg40ABusHiSpdPer1','ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2','ComTimeoutNotification_VehicleGGCCData'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg40ABusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg40ABusHiSpdPer1','ComIPduCallout_GGCC_Config_Mgmt_ID_1_HS2','ComTimeoutNotification_VehicleGGCCData'};
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
ClrDiagcFlgProxy.EngInit = 1;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg40ABusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 to enable the diagnostics'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg40ABusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg40ABusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Mfg Diagc Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Mfg Diagc Inhibit is True, Diagnostic test is performed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg40ABusHiSpdPer1'};
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
FordMissMsgDiagcInhb.ReadIn = {'FordMsg40ABusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


Ford_VehGGCCData = DataDict.IpSignal;
Ford_VehGGCCData.LongName = 'Ford Vehicle Global Configuration Data';
Ford_VehGGCCData.Description = [...
  'This signal is transmitted with the first 2 bytes of the CAN data fiel' ...
  'd used as a hexidecimal identifier(CDID) to specify which signal the r' ...
  'emaining 6 bytes of data will be applied.'];
Ford_VehGGCCData.DocUnits = 'Cnt';
Ford_VehGGCCData.EngDT = dt.u08;
Ford_VehGGCCData.EngInit =  ...
   [0                0                0                0                0                0                0                0];
Ford_VehGGCCData.EngMin = 0;
Ford_VehGGCCData.EngMax = 255;
Ford_VehGGCCData.ReadIn = {'FordMsg40ABusHiSpdPer1'};
Ford_VehGGCCData.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehGlbRealTi = DataDict.OpSignal;
FordVehGlbRealTi.LongName = 'Ford Vehicle Global Real Time';
FordVehGlbRealTi.Description = [...
  'Processed signal of input Vehicle Global Configuration Data'];
FordVehGlbRealTi.DocUnits = 'Sec';
FordVehGlbRealTi.SwcShoName = 'FordMsg40ABusHiSpd';
FordVehGlbRealTi.EngDT = dt.float32;
FordVehGlbRealTi.EngInit = 0.1;
FordVehGlbRealTi.EngMin = 0.1;
FordVehGlbRealTi.EngMax = 429496729.5;
FordVehGlbRealTi.TestTolerance = 0;
FordVehGlbRealTi.WrittenIn = {'FordMsg40ABusHiSpdPer1'};
FordVehGlbRealTi.WriteType = 'Rte';


FordVehIdnNr = DataDict.OpSignal;
FordVehIdnNr.LongName = 'Ford Vehicle Identification Number';
FordVehIdnNr.Description = [...
  'Processed signal of input Vehicle Global Configuration Data'];
FordVehIdnNr.DocUnits = 'Cnt';
FordVehIdnNr.SwcShoName = 'FordMsg40ABusHiSpd';
FordVehIdnNr.EngDT = dt.u08;
FordVehIdnNr.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
FordVehIdnNr.EngMin = 0;
FordVehIdnNr.EngMax = 255;
FordVehIdnNr.TestTolerance = 0;
FordVehIdnNr.WrittenIn = {'FordMsg40ABusHiSpdPer1'};
FordVehIdnNr.WriteType = 'Rte';


FordVehTireCircum = DataDict.OpSignal;
FordVehTireCircum.LongName = 'Ford Vehicle Tire Circumference';
FordVehTireCircum.Description = [...
  'Processed signal of input Vehicle Global Configuration Data'];
FordVehTireCircum.DocUnits = 'MilliMtr';
FordVehTireCircum.SwcShoName = 'FordMsg40ABusHiSpd';
FordVehTireCircum.EngDT = dt.float32;
FordVehTireCircum.EngInit = 65534;
FordVehTireCircum.EngMin = 0;
FordVehTireCircum.EngMax = 65535;
FordVehTireCircum.TestTolerance = 0;
FordVehTireCircum.WrittenIn = {'FordMsg40ABusHiSpdPer1'};
FordVehTireCircum.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg40ABusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg40ABusHiSpdMissMsgFaildThd.LongName = 'Ford Message 40 A Bus High Speed Missing Message Failed Threshold';
FordMsg40ABusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg40ABusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg40ABusHiSpdMissMsgFaildThd.EngDT = dt.u16p0;
FordMsg40ABusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg40ABusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg40ABusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg40ABusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg40ABusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg40ABusHiSpdMissMsgFaildThd.Online = false;
FordMsg40ABusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg40ABusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg40ABusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg40ABusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg40ABusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg40ABusHiSpdMissMsgFaildThd.PortName = 'FordMsg40ABusHiSpdMissMsgFaildThd';


FordMsg40ABusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg40ABusHiSpdMissMsgPassdThd.LongName = 'Ford Message 40 A Bus High Speed Missing Message Passed Threshold';
FordMsg40ABusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg40ABusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg40ABusHiSpdMissMsgPassdThd.EngDT = dt.u16p0;
FordMsg40ABusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg40ABusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg40ABusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg40ABusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg40ABusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg40ABusHiSpdMissMsgPassdThd.Online = false;
FordMsg40ABusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg40ABusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg40ABusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg40ABusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg40ABusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg40ABusHiSpdMissMsgPassdThd.PortName = 'FordMsg40ABusHiSpdMissMsgPassdThd';



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
FordClrDiagcFlgProxyPrev = DataDict.PIM;
FordClrDiagcFlgProxyPrev.LongName = 'Ford Clear Diagc Flag Proxy';
FordClrDiagcFlgProxyPrev.Description = 'Ford Clear Diagc Flag Proxy';
FordClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
FordClrDiagcFlgProxyPrev.EngDT = dt.u08;
FordClrDiagcFlgProxyPrev.EngMin = 0;
FordClrDiagcFlgProxyPrev.EngMax = 1;
FordClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FordVehGlbRealTiPrev = DataDict.PIM;
FordVehGlbRealTiPrev.LongName = 'Ford Vehicle Global Real Time Previous';
FordVehGlbRealTiPrev.Description = [...
  'Previous value of Ford Vehicle Global Real Time'];
FordVehGlbRealTiPrev.DocUnits = 'Sec';
FordVehGlbRealTiPrev.EngDT = dt.float32;
FordVehGlbRealTiPrev.EngMin = 0;
FordVehGlbRealTiPrev.EngMax = 429496729.5;
FordVehGlbRealTiPrev.InitRowCol = [1  1];


FordVehIdnNrC100Prev = DataDict.PIM;
FordVehIdnNrC100Prev.LongName = 'Ford Vehicle Identification Number C1 00 Previous';
FordVehIdnNrC100Prev.Description = [...
  'Previous value of Ford Vehicle Identification Number C 100'];
FordVehIdnNrC100Prev.DocUnits = 'Cnt';
FordVehIdnNrC100Prev.EngDT = dt.u08;
FordVehIdnNrC100Prev.EngMin = 0;
FordVehIdnNrC100Prev.EngMax = 255;
FordVehIdnNrC100Prev.InitRowCol = [1  6];


FordVehIdnNrC101Prev = DataDict.PIM;
FordVehIdnNrC101Prev.LongName = 'Ford Vehicle Identification Number C1 01 Previous';
FordVehIdnNrC101Prev.Description = [...
  'Previous value of Ford Vehicle Identification Number C 101'];
FordVehIdnNrC101Prev.DocUnits = 'Cnt';
FordVehIdnNrC101Prev.EngDT = dt.u08;
FordVehIdnNrC101Prev.EngMin = 0;
FordVehIdnNrC101Prev.EngMax = 255;
FordVehIdnNrC101Prev.InitRowCol = [1  6];


FordVehIdnNrC102Prev = DataDict.PIM;
FordVehIdnNrC102Prev.LongName = 'Ford Vehicle Identification Number C1 02 Previous';
FordVehIdnNrC102Prev.Description = [...
  'Previous value of Ford Vehicle Identification Number C 102'];
FordVehIdnNrC102Prev.DocUnits = 'Cnt';
FordVehIdnNrC102Prev.EngDT = dt.u08;
FordVehIdnNrC102Prev.EngMin = 0;
FordVehIdnNrC102Prev.EngMax = 255;
FordVehIdnNrC102Prev.InitRowCol = [1  5];


FordVehIdnNrPrev = DataDict.PIM;
FordVehIdnNrPrev.LongName = 'Ford Vehicle Identification Number Previous';
FordVehIdnNrPrev.Description = [...
  'Previous value of Ford Vehicle Identification Number'];
FordVehIdnNrPrev.DocUnits = 'Cnt';
FordVehIdnNrPrev.EngDT = dt.u08;
FordVehIdnNrPrev.EngMin = 0;
FordVehIdnNrPrev.EngMax = 255;
FordVehIdnNrPrev.InitRowCol = [1  17];


FordVehMsg40AMiss = DataDict.PIM;
FordVehMsg40AMiss.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg40AMiss.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehMsg40AMiss.DocUnits = 'Cnt';
FordVehMsg40AMiss.EngDT = dt.lgc;
FordVehMsg40AMiss.EngMin = 0;
FordVehMsg40AMiss.EngMax = 1;
FordVehMsg40AMiss.InitRowCol = [1  1];


FordVehMsg40ARxd = DataDict.PIM;
FordVehMsg40ARxd.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg40ARxd.Description = [...
  'Previous value of Ford Vehicle Propulsion Wheel Torque Valid'];
FordVehMsg40ARxd.DocUnits = 'Cnt';
FordVehMsg40ARxd.EngDT = dt.lgc;
FordVehMsg40ARxd.EngMin = 0;
FordVehMsg40ARxd.EngMax = 1;
FordVehMsg40ARxd.InitRowCol = [1  1];


FordVehTireCircumPrev = DataDict.PIM;
FordVehTireCircumPrev.LongName = 'Ford Vehicle Tire Circumference Previous';
FordVehTireCircumPrev.Description = [...
  'Previous value of Ford Vehicle Tire Circumference'];
FordVehTireCircumPrev.DocUnits = 'MilliMtr';
FordVehTireCircumPrev.EngDT = dt.float32;
FordVehTireCircumPrev.EngMin = 0;
FordVehTireCircumPrev.EngMax = 65535;
FordVehTireCircumPrev.InitRowCol = [1  1];


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
  'ue is multiplied by this constant to convert millisecond to count'];
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


DTCENA_CNT_U08 = DataDict.Constant;
DTCENA_CNT_U08.LongName = 'DTC Enable';
DTCENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'l'];
DTCENA_CNT_U08.DocUnits = 'Cnt';
DTCENA_CNT_U08.EngDT = dt.u08;
DTCENA_CNT_U08.EngVal = 0;
DTCENA_CNT_U08.Define = 'Local';


FORDVEHGLBREALTIINIT_SEC_F32 = DataDict.Constant;
FORDVEHGLBREALTIINIT_SEC_F32.LongName = 'Ford Vehicle Global Real Time Initial';
FORDVEHGLBREALTIINIT_SEC_F32.Description = [...
  'Initial value of Ford Vehicle Global Real Time'];
FORDVEHGLBREALTIINIT_SEC_F32.DocUnits = 'Sec';
FORDVEHGLBREALTIINIT_SEC_F32.EngDT = dt.float32;
FORDVEHGLBREALTIINIT_SEC_F32.EngVal = 0.1;
FORDVEHGLBREALTIINIT_SEC_F32.Define = 'Local';


FORDVEHGLBREALTIMAX_SEC_F32 = DataDict.Constant;
FORDVEHGLBREALTIMAX_SEC_F32.LongName = 'Ford Vehicle Global Real Time Maximum';
FORDVEHGLBREALTIMAX_SEC_F32.Description = [...
  'Maximum value of Ford Vehicle Global Real Time'];
FORDVEHGLBREALTIMAX_SEC_F32.DocUnits = 'Sec';
FORDVEHGLBREALTIMAX_SEC_F32.EngDT = dt.float32;
FORDVEHGLBREALTIMAX_SEC_F32.EngVal = 429496729.5;
FORDVEHGLBREALTIMAX_SEC_F32.Define = 'Local';


FORDVEHGLBREALTIMIN_SEC_F32 = DataDict.Constant;
FORDVEHGLBREALTIMIN_SEC_F32.LongName = 'Ford Vehicle Global Real Time Minimum';
FORDVEHGLBREALTIMIN_SEC_F32.Description = [...
  'Minimum value of Ford Vehicle Global Real Time'];
FORDVEHGLBREALTIMIN_SEC_F32.DocUnits = 'Sec';
FORDVEHGLBREALTIMIN_SEC_F32.EngDT = dt.float32;
FORDVEHGLBREALTIMIN_SEC_F32.EngVal = 0.1;
FORDVEHGLBREALTIMIN_SEC_F32.Define = 'Local';


FORDVEHGLBREALTIVAL_SEC_F32 = DataDict.Constant;
FORDVEHGLBREALTIVAL_SEC_F32.LongName = 'Ford Vehicle Global Real Time Value';
FORDVEHGLBREALTIVAL_SEC_F32.Description = [...
  'Maximum value of Ford Vehicle Global Real Time'];
FORDVEHGLBREALTIVAL_SEC_F32.DocUnits = 'Sec';
FORDVEHGLBREALTIVAL_SEC_F32.EngDT = dt.float32;
FORDVEHGLBREALTIVAL_SEC_F32.EngVal = 429496729.5;
FORDVEHGLBREALTIVAL_SEC_F32.Define = 'Local';


FORDVEHTIRECIRCUMINIT_MILLIMTR_F32 = DataDict.Constant;
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.LongName = ' Ford Vehicle Tire Circumference Initial Value';
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.Description = [...
  'Initial value of Ford Vehicle Tire Circumference'];
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.DocUnits = 'MilliMtr';
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.EngDT = dt.float32;
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.EngVal = 65534;
FORDVEHTIRECIRCUMINIT_MILLIMTR_F32.Define = 'Local';


FORDVEHTIRECIRCUMMAX_MILLIMTR_F32 = DataDict.Constant;
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.LongName = 'Ford Vehicle Tire Circumference Maximum';
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.Description = [...
  'Maximum value of Ford Vehicle Tire Circumference'];
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.DocUnits = 'MilliMtr';
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.EngDT = dt.float32;
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.EngVal = 65535;
FORDVEHTIRECIRCUMMAX_MILLIMTR_F32.Define = 'Local';


FORDVEHTIRECIRCUMMIN_MILLIMTR_F32 = DataDict.Constant;
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.LongName = 'Ford Vehicle Tire Circumference Minimum';
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.Description = [...
  'Minimum value of Ford Vehicle Tire Circumference'];
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.DocUnits = 'MilliMtr';
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.EngDT = dt.float32;
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.EngVal = 0;
FORDVEHTIRECIRCUMMIN_MILLIMTR_F32.Define = 'Local';


GLBCFGDATASCAG_SECPERCNT_F32 = DataDict.Constant;
GLBCFGDATASCAG_SECPERCNT_F32.LongName = 'Global Configuration Data Scaling';
GLBCFGDATASCAG_SECPERCNT_F32.Description = [...
  'Scale factor of Global Configuration Data'];
GLBCFGDATASCAG_SECPERCNT_F32.DocUnits = 'SecPerCnt';
GLBCFGDATASCAG_SECPERCNT_F32.EngDT = dt.float32;
GLBCFGDATASCAG_SECPERCNT_F32.EngVal = 0.1;
GLBCFGDATASCAG_SECPERCNT_F32.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


SHIFTBYTEFIVE_CNT_U08 = DataDict.Constant;
SHIFTBYTEFIVE_CNT_U08.LongName = 'Shift Byte Five';
SHIFTBYTEFIVE_CNT_U08.Description = 'Used to bit shift by Eight';
SHIFTBYTEFIVE_CNT_U08.DocUnits = 'Cnt';
SHIFTBYTEFIVE_CNT_U08.EngDT = dt.u08;
SHIFTBYTEFIVE_CNT_U08.EngVal = 8;
SHIFTBYTEFIVE_CNT_U08.Define = 'Local';


SHIFTBYTESEVEN_CNT_U08 = DataDict.Constant;
SHIFTBYTESEVEN_CNT_U08.LongName = 'Shift Byte Seven';
SHIFTBYTESEVEN_CNT_U08.Description = 'Used to bit shift by Twenty four';
SHIFTBYTESEVEN_CNT_U08.DocUnits = 'Cnt';
SHIFTBYTESEVEN_CNT_U08.EngDT = dt.u08;
SHIFTBYTESEVEN_CNT_U08.EngVal = 24;
SHIFTBYTESEVEN_CNT_U08.Define = 'Local';


SHIFTBYTESIX_CNT_U08 = DataDict.Constant;
SHIFTBYTESIX_CNT_U08.LongName = 'Shift Byte Six';
SHIFTBYTESIX_CNT_U08.Description = 'Used to bit shift by Sixteen';
SHIFTBYTESIX_CNT_U08.DocUnits = 'Cnt';
SHIFTBYTESIX_CNT_U08.EngDT = dt.u08;
SHIFTBYTESIX_CNT_U08.EngVal = 16;
SHIFTBYTESIX_CNT_U08.Define = 'Local';


VEHCFGDATASCAG_MILLIMTRPERCNT_F32 = DataDict.Constant;
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.LongName = 'Vehicle Configuration Data Scaling';
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.Description = [...
  'Scale factor of Vehicle Configuration Data'];
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.DocUnits = 'MilliMtrPerCnt';
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.EngDT = dt.float32;
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.EngVal = 1;
VEHCFGDATASCAG_MILLIMTRPERCNT_F32.Define = 'Local';


VEHGLBCFGDATABYTE1VALC0_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE1VALC0_CNT_U08.LongName = 'Vehicle Global Configuration Data Byte1 Value C0';
VEHGLBCFGDATABYTE1VALC0_CNT_U08.Description = [...
  'This value is used to compare Byte 1 of Vehicle Global Configuration D' ...
  'ata with C0'];
VEHGLBCFGDATABYTE1VALC0_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE1VALC0_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE1VALC0_CNT_U08.EngVal = 192;
VEHGLBCFGDATABYTE1VALC0_CNT_U08.Define = 'Local';


VEHGLBCFGDATABYTE1VALC1_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE1VALC1_CNT_U08.LongName = 'Vehicle Global Configuration Data Byte1 Value C1';
VEHGLBCFGDATABYTE1VALC1_CNT_U08.Description = [...
  'This value is used to compare Byte 1 of Vehicle Global Configuration D' ...
  'ata with C1'];
VEHGLBCFGDATABYTE1VALC1_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE1VALC1_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE1VALC1_CNT_U08.EngVal = 193;
VEHGLBCFGDATABYTE1VALC1_CNT_U08.Define = 'Local';


VEHGLBCFGDATABYTE2VAL00_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE2VAL00_CNT_U08.LongName = 'Vehicle Global Configuration Data Byte2 Value 00';
VEHGLBCFGDATABYTE2VAL00_CNT_U08.Description = [...
  'This value is used to compare Byte 2 of Vehicle Global Configuration D' ...
  'ata with 00'];
VEHGLBCFGDATABYTE2VAL00_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE2VAL00_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE2VAL00_CNT_U08.EngVal = 0;
VEHGLBCFGDATABYTE2VAL00_CNT_U08.Define = 'Local';


VEHGLBCFGDATABYTE2VAL01_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE2VAL01_CNT_U08.LongName = 'Vehicle Global Configuration Data One Value';
VEHGLBCFGDATABYTE2VAL01_CNT_U08.Description = [...
  'This value is used to compare Byte 2 of Vehicle Global Configuration D' ...
  'ata with 01'];
VEHGLBCFGDATABYTE2VAL01_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE2VAL01_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE2VAL01_CNT_U08.EngVal = 1;
VEHGLBCFGDATABYTE2VAL01_CNT_U08.Define = 'Local';


VEHGLBCFGDATABYTE2VAL02_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE2VAL02_CNT_U08.LongName = 'Vehicle Global Configuration Data Two Value';
VEHGLBCFGDATABYTE2VAL02_CNT_U08.Description = [...
  'This value is used to compare Byte 2 of Vehicle Global Configuration D' ...
  'ata with 02'];
VEHGLBCFGDATABYTE2VAL02_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE2VAL02_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE2VAL02_CNT_U08.EngVal = 2;
VEHGLBCFGDATABYTE2VAL02_CNT_U08.Define = 'Local';


VEHGLBCFGDATABYTE2VAL04_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATABYTE2VAL04_CNT_U08.LongName = 'Vehicle Global Configuration Data Byte 2 Value 04';
VEHGLBCFGDATABYTE2VAL04_CNT_U08.Description = [...
  'This value is used to compare Byte 2 of Vehicle Global Configuration D' ...
  'ata with 04'];
VEHGLBCFGDATABYTE2VAL04_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATABYTE2VAL04_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATABYTE2VAL04_CNT_U08.EngVal = 4;
VEHGLBCFGDATABYTE2VAL04_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXFIVE_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXFIVE_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Six';
VEHGLBCFGDATAIDXFIVE_CNT_U08.Description = [...
  'Value used to extract Byte Six of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXFIVE_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXFIVE_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXFIVE_CNT_U08.EngVal = 5;
VEHGLBCFGDATAIDXFIVE_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXFOUR_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXFOUR_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Five';
VEHGLBCFGDATAIDXFOUR_CNT_U08.Description = [...
  'Value used to extract Byte Five of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXFOUR_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXFOUR_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXFOUR_CNT_U08.EngVal = 4;
VEHGLBCFGDATAIDXFOUR_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXONE_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXONE_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Two';
VEHGLBCFGDATAIDXONE_CNT_U08.Description = [...
  'Value used to extract Byte Two of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXONE_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXONE_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXONE_CNT_U08.EngVal = 1;
VEHGLBCFGDATAIDXONE_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXSEVEN_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXSEVEN_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Eight';
VEHGLBCFGDATAIDXSEVEN_CNT_U08.Description = [...
  'Value used to extract Byte eight of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXSEVEN_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXSEVEN_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXSEVEN_CNT_U08.EngVal = 7;
VEHGLBCFGDATAIDXSEVEN_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXSIX_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXSIX_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Seven';
VEHGLBCFGDATAIDXSIX_CNT_U08.Description = [...
  'Value used to extract Byte Seven of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXSIX_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXSIX_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXSIX_CNT_U08.EngVal = 6;
VEHGLBCFGDATAIDXSIX_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXTHREE_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXTHREE_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Four';
VEHGLBCFGDATAIDXTHREE_CNT_U08.Description = [...
  'Value used to extract Byte Four of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXTHREE_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXTHREE_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXTHREE_CNT_U08.EngVal = 3;
VEHGLBCFGDATAIDXTHREE_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXTWO_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXTWO_CNT_U08.LongName = 'Vehicle Global Configuration Data Index Three';
VEHGLBCFGDATAIDXTWO_CNT_U08.Description = [...
  'Value used to extract Byte Three of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXTWO_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXTWO_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXTWO_CNT_U08.EngVal = 2;
VEHGLBCFGDATAIDXTWO_CNT_U08.Define = 'Local';


VEHGLBCFGDATAIDXZERO_CNT_U08 = DataDict.Constant;
VEHGLBCFGDATAIDXZERO_CNT_U08.LongName = 'Vehicle Global Configuration Data Index One';
VEHGLBCFGDATAIDXZERO_CNT_U08.Description = [...
  'Value used to extract Byte One of Vehicle Global Configuration Data'];
VEHGLBCFGDATAIDXZERO_CNT_U08.DocUnits = 'Cnt';
VEHGLBCFGDATAIDXZERO_CNT_U08.EngDT = dt.u08;
VEHGLBCFGDATAIDXZERO_CNT_U08.EngVal = 0;
VEHGLBCFGDATAIDXZERO_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg40AMissMsg = DataDict.NTC;
FordMsg40AMissMsg.NtcNr = NtcNr1.NTCNR_0X163;
FordMsg40AMissMsg.NtcTyp = 'None';
FordMsg40AMissMsg.LongName = 'Ford Message 40 A Missing Message';
FordMsg40AMissMsg.Description = 'Ford Message 40 A Missing Message Diagnostic';
FordMsg40AMissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg40AMissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg40AMissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg40AMissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
