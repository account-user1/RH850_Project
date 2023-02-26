%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 26-Mar-2018 15:44:43       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM086A = DataDict.FDD;
MM086A.Version = '2.0.X';
MM086A.LongName = 'Ford Message 443 Bus High Speed';
MM086A.ShoName  = 'FordMsg443BusHiSpd';
MM086A.DesignASIL = 'B';
MM086A.Description = [...
  'The purpose of the Ford Message 443 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Trai' ...
  'ler Back Up Assist function from CAN. The Ford Message 443 function wi' ...
  'll perform the missing message diagnostic.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg443BusHiSpdInit1 = DataDict.Runnable;
FordMsg443BusHiSpdInit1.Context = 'Rte';
FordMsg443BusHiSpdInit1.TimeStep = 0;
FordMsg443BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg443BusHiSpdPer1 = DataDict.Runnable;
FordMsg443BusHiSpdPer1.Context = 'Rte';
FordMsg443BusHiSpdPer1.TimeStep = 0.01;
FordMsg443BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds '];

ComIPduCallout_TrailerInfo_FD1 = DataDict.SrvRunnable;
ComIPduCallout_TrailerInfo_FD1.Context = 'NonRte';
ComIPduCallout_TrailerInfo_FD1.Description = [...
  ' Server Runnable for Message reception'];
ComIPduCallout_TrailerInfo_FD1.Return = DataDict.CSReturn;
ComIPduCallout_TrailerInfo_FD1.Return.Type = 'None';
ComIPduCallout_TrailerInfo_FD1.Return.Min = [];
ComIPduCallout_TrailerInfo_FD1.Return.Max = [];
ComIPduCallout_TrailerInfo_FD1.Return.TestTolerance = [];
ComIPduCallout_TrailerInfo_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_TrailerInfo_FD1.Arguments(1).Name = 'TrailerInfo';
ComIPduCallout_TrailerInfo_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_TrailerInfo_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_TrailerInfo_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_TrailerInfo_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_TrailerInfo_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_TrailerInfo_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_TrailerInfo_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_TrailerInfo_FD1.Arguments(1).Description = [...
  'TrailerInfo is set to one when service is invoked'];

ComTimeoutNotification_TrlrLampCnnct_B_Actl = DataDict.SrvRunnable;
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Context = 'NonRte';
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Return = DataDict.CSReturn;
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Return.Type = 'None';
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Return.Min = [];
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Return.Max = [];
ComTimeoutNotification_TrlrLampCnnct_B_Actl.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg443BusHiSpdInit1','FordMsg443BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg443BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg443BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg443BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'When CAN DTC Inhibit is FALSE, Diagnostic test is performed. Customer ' ...
  'datatype should be used. Data Type: Boolean with Min value "False"(0),' ...
  'Init value "True"(1) and Max value "True"(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg443BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide threshold value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg443BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer datatype should be used. Data Type :' ...
  'Boolean with Min value "False"(0), Init value "False"(0) and Max value' ...
  '"True"(1)'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg443BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_TrlrLampCnnct_B_Actl1 = DataDict.IpSignal;
Ford_TrlrLampCnnct_B_Actl1.LongName = 'Trailer Lamp Connection Status';
Ford_TrlrLampCnnct_B_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Customer Data type: Ford_TrlrLampCnnct_B_Actl' ...
  ' Cx0_No(0), Cx1_Yes(1).'];
Ford_TrlrLampCnnct_B_Actl1.DocUnits = 'Cnt';
Ford_TrlrLampCnnct_B_Actl1.EngDT = enum.Ford_TrlrLampCnnct_B_Actl;
Ford_TrlrLampCnnct_B_Actl1.EngInit = Ford_TrlrLampCnnct_B_Actl.Cx0_No;
Ford_TrlrLampCnnct_B_Actl1.EngMin = Ford_TrlrLampCnnct_B_Actl.Cx0_No;
Ford_TrlrLampCnnct_B_Actl1.EngMax = Ford_TrlrLampCnnct_B_Actl.Cx1_Yes;
Ford_TrlrLampCnnct_B_Actl1.ReadIn = {'FordMsg443BusHiSpdPer1'};
Ford_TrlrLampCnnct_B_Actl1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehTrlrLampCnctnStsRaw = DataDict.OpSignal;
FordVehTrlrLampCnctnStsRaw.LongName = 'Ford Vehicle Trailer Lamp Connection Status Raw';
FordVehTrlrLampCnctnStsRaw.Description = [...
  'Processed value of TrlrLampCnctnSts'];
FordVehTrlrLampCnctnStsRaw.DocUnits = 'Cnt';
FordVehTrlrLampCnctnStsRaw.SwcShoName = 'FordMsg443BusHiSpd';
FordVehTrlrLampCnctnStsRaw.EngDT = enum.Ford_TrlrLampCnnct_B_Actl;
FordVehTrlrLampCnctnStsRaw.EngInit = Ford_TrlrLampCnnct_B_Actl.Cx0_No;
FordVehTrlrLampCnctnStsRaw.EngMin = Ford_TrlrLampCnnct_B_Actl.Cx0_No;
FordVehTrlrLampCnctnStsRaw.EngMax = Ford_TrlrLampCnnct_B_Actl.Cx1_Yes;
FordVehTrlrLampCnctnStsRaw.TestTolerance = 0;
FordVehTrlrLampCnctnStsRaw.WrittenIn = {'FordMsg443BusHiSpdPer1'};
FordVehTrlrLampCnctnStsRaw.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg443BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg443BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 443 Bus High Speed Missing Message Failed Threshold';
FordMsg443BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg443BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg443BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg443BusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg443BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg443BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg443BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg443BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg443BusHiSpdMissMsgFaildThd.Online = false;
FordMsg443BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg443BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg443BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg443BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg443BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg443BusHiSpdMissMsgFaildThd.PortName = 'FordMsg443BusHiSpdMissMsgFaildThd';


FordMsg443BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg443BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 443 Bus High Speed Missing Message Passed Threshold';
FordMsg443BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg443BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg443BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg443BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg443BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg443BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg443BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg443BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg443BusHiSpdMissMsgPassdThd.Online = false;
FordMsg443BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg443BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg443BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg443BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg443BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg443BusHiSpdMissMsgPassdThd.PortName = 'FordMsg443BusHiSpdMissMsgPassdThd';



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


FordVehMsg443Miss = DataDict.PIM;
FordVehMsg443Miss.LongName = 'Ford Vehicle Trailer Lamp Connection Status Previous';
FordVehMsg443Miss.Description = [...
  'Previous value of Ford Vehicle Trailer Lamp Connection Status'];
FordVehMsg443Miss.DocUnits = 'Cnt';
FordVehMsg443Miss.EngDT = dt.lgc;
FordVehMsg443Miss.EngMin = 0;
FordVehMsg443Miss.EngMax = 1;
FordVehMsg443Miss.InitRowCol = [1  1];


FordVehTrlrLampCnctnStsRawPrev = DataDict.PIM;
FordVehTrlrLampCnctnStsRawPrev.LongName = 'Ford Vehicle Trailer Lamp Connection Status Raw Previous';
FordVehTrlrLampCnctnStsRawPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Trailer Lamp Connection Status' ...
  ' Raw'];
FordVehTrlrLampCnctnStsRawPrev.DocUnits = 'Cnt';
FordVehTrlrLampCnctnStsRawPrev.EngDT = enum.Ford_TrlrLampCnnct_B_Actl;
FordVehTrlrLampCnctnStsRawPrev.EngMin = Ford_TrlrLampCnnct_B_Actl.Cx0_No;
FordVehTrlrLampCnctnStsRawPrev.EngMax = Ford_TrlrLampCnnct_B_Actl.Cx1_Yes;
FordVehTrlrLampCnctnStsRawPrev.InitRowCol = [1  1];


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
FordMsg443MissMsg = DataDict.NTC;
FordMsg443MissMsg.NtcNr = NtcNr1.NTCNR_0X17F;
FordMsg443MissMsg.NtcTyp = 'None';
FordMsg443MissMsg.LongName = 'Ford Message 443 Missing Message';
FordMsg443MissMsg.Description = '';
FordMsg443MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg443MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg443MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg443MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
