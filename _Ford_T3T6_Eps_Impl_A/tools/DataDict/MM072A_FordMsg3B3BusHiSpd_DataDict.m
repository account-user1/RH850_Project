%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Feb-2018 11:27:44       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM072A = DataDict.FDD;
MM072A.Version = '3.0.X';
MM072A.LongName = 'Ford Message 3B3 Bus High Speed';
MM072A.ShoName  = 'FordMsg3B3BusHiSpd';
MM072A.DesignASIL = 'QM';
MM072A.Description = [...
  'The purpose of the Ford Message 3B3 Bus High Speed function is to prov' ...
  'ide the Electric PowerSteering system with signal values for the Trail' ...
  'er Back Up Assist and Electric Power Steering functions from CAN. The ' ...
  'Ford Message 3B3 function will perform the missing message and signal ' ...
  'invalid diagnostic as well as provide a validity signal for the receiv' ...
  'ed message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg3B3BusHiSpdInit1 = DataDict.Runnable;
FordMsg3B3BusHiSpdInit1.Context = 'Rte';
FordMsg3B3BusHiSpdInit1.TimeStep = 0;
FordMsg3B3BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg3B3BusHiSpdPer1 = DataDict.Runnable;
FordMsg3B3BusHiSpdPer1.Context = 'Rte';
FordMsg3B3BusHiSpdPer1.TimeStep = 0.01;
FordMsg3B3BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_BodyInfo_3_HS2 = DataDict.SrvRunnable;
ComIPduCallout_BodyInfo_3_HS2.Context = 'NonRte';
ComIPduCallout_BodyInfo_3_HS2.Description = [...
  'Server Runnable for clear diagnostics'];
ComIPduCallout_BodyInfo_3_HS2.Return = DataDict.CSReturn;
ComIPduCallout_BodyInfo_3_HS2.Return.Type = 'None';
ComIPduCallout_BodyInfo_3_HS2.Return.Min = [];
ComIPduCallout_BodyInfo_3_HS2.Return.Max = [];
ComIPduCallout_BodyInfo_3_HS2.Return.TestTolerance = [];
ComIPduCallout_BodyInfo_3_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).Name = 'BodyInfo';
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BodyInfo_3_HS2.Arguments(1).Description = [...
  'Argument BodyInfo set to true once this server runnable is called'];

ComTimeoutNotification_Ignition_Status = DataDict.SrvRunnable;
ComTimeoutNotification_Ignition_Status.Context = 'NonRte';
ComTimeoutNotification_Ignition_Status.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_Ignition_Status.Return = DataDict.CSReturn;
ComTimeoutNotification_Ignition_Status.Return.Type = 'None';
ComTimeoutNotification_Ignition_Status.Return.Min = [];
ComTimeoutNotification_Ignition_Status.Return.Max = [];
ComTimeoutNotification_Ignition_Status.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg3B3BusHiSpdInit1','FordMsg3B3BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg3B3BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg3B3BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordInvldMsgDiagcInhb = DataDict.IpSignal;
FordInvldMsgDiagcInhb.LongName = 'Ford Invalid Message Diagnostic Inhibit';
FordInvldMsgDiagcInhb.Description = [...
  'When Invalid Message Diagnostic Inhibit is False, Diagnostic test is p' ...
  'erformed'];
FordInvldMsgDiagcInhb.DocUnits = 'Cnt';
FordInvldMsgDiagcInhb.EngDT = dt.u08;
FordInvldMsgDiagcInhb.EngInit = 0;
FordInvldMsgDiagcInhb.EngMin = 0;
FordInvldMsgDiagcInhb.EngMax = 1;
FordInvldMsgDiagcInhb.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
FordInvldMsgDiagcInhb.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Manufacturer Diagnostic Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Manufacturer Diagnostic Inhibit is False, Diagnostic test is perf' ...
  'ormed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
FordMfgDiagcInhb.ReadType = 'Rte';


FordMissMsgDiagcInhb = DataDict.IpSignal;
FordMissMsgDiagcInhb.LongName = 'Ford Missing Message Diagnostic Inhibit';
FordMissMsgDiagcInhb.Description = [...
  'When Missing Message Diagnostic Inhibit is FALSE, Diagnostic test is p' ...
  'erformed'];
FordMissMsgDiagcInhb.DocUnits = 'Cnt';
FordMissMsgDiagcInhb.EngDT = dt.u08;
FordMissMsgDiagcInhb.EngInit = 0;
FordMissMsgDiagcInhb.EngMin = 0;
FordMissMsgDiagcInhb.EngMax = 1;
FordMissMsgDiagcInhb.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


FordTrlrBackUpAssiEnad = DataDict.IpSignal;
FordTrlrBackUpAssiEnad.LongName = 'Ford Trailer Back Up Assist Enabled';
FordTrlrBackUpAssiEnad.Description = [...
  'This signal should be set to 1 in order to Diagnose NTC'];
FordTrlrBackUpAssiEnad.DocUnits = 'Cnt';
FordTrlrBackUpAssiEnad.EngDT = dt.lgc;
FordTrlrBackUpAssiEnad.EngInit = 0;
FordTrlrBackUpAssiEnad.EngMin = 0;
FordTrlrBackUpAssiEnad.EngMax = 1;
FordTrlrBackUpAssiEnad.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
FordTrlrBackUpAssiEnad.ReadType = 'Rte';


Ford_Ignition_Status1 = DataDict.IpSignal;
Ford_Ignition_Status1.LongName = 'Ford Ignition Status';
Ford_Ignition_Status1.Description = [...
  'Accepts Ignition Status as input signal from CAN'];
Ford_Ignition_Status1.DocUnits = 'Cnt';
Ford_Ignition_Status1.EngDT = enum.Ford_Ignition_Status;
Ford_Ignition_Status1.EngInit = Ford_Ignition_Status.Cx0_Unknown;
Ford_Ignition_Status1.EngMin = Ford_Ignition_Status.Cx0_Unknown;
Ford_Ignition_Status1.EngMax = Ford_Ignition_Status.CxF_Invalid;
Ford_Ignition_Status1.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
Ford_Ignition_Status1.ReadType = 'Rte';


Ford_LifeCycMde_D_Actl1 = DataDict.IpSignal;
Ford_LifeCycMde_D_Actl1.LongName = 'Ford Life Cycle Mode';
Ford_LifeCycMde_D_Actl1.Description = [...
  'Accepts Life Cycle Mode as input signal from CAN'];
Ford_LifeCycMde_D_Actl1.DocUnits = 'Cnt';
Ford_LifeCycMde_D_Actl1.EngDT = enum.Ford_LifeCycMde_D_Actl;
Ford_LifeCycMde_D_Actl1.EngInit = Ford_LifeCycMde_D_Actl.Cx0_Normal;
Ford_LifeCycMde_D_Actl1.EngMin = Ford_LifeCycMde_D_Actl.Cx0_Normal;
Ford_LifeCycMde_D_Actl1.EngMax = Ford_LifeCycMde_D_Actl.Cx3_Transport;
Ford_LifeCycMde_D_Actl1.ReadIn = {'FordMsg3B3BusHiSpdPer1'};
Ford_LifeCycMde_D_Actl1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehIgnSts = DataDict.OpSignal;
FordVehIgnSts.LongName = 'Ford Vehicle Ignition Status';
FordVehIgnSts.Description = [...
  'Processed Ignition Status signal to be used by EPS'];
FordVehIgnSts.DocUnits = 'Cnt';
FordVehIgnSts.SwcShoName = 'FordMsg3B3BusHiSpd';
FordVehIgnSts.EngDT = enum.Ford_Ignition_Status;
FordVehIgnSts.EngInit = Ford_Ignition_Status.Cx0_Unknown;
FordVehIgnSts.EngMin = Ford_Ignition_Status.Cx0_Unknown;
FordVehIgnSts.EngMax = Ford_Ignition_Status.CxF_Invalid;
FordVehIgnSts.TestTolerance = 0;
FordVehIgnSts.WrittenIn = {'FordMsg3B3BusHiSpdPer1'};
FordVehIgnSts.WriteType = 'Rte';


FordVehIgnStsVld = DataDict.OpSignal;
FordVehIgnStsVld.LongName = 'Ford Vehicle Ignition Status Valid';
FordVehIgnStsVld.Description = [...
  'This signal Check the validity of Ford Vehicle Ignition Status signal'];
FordVehIgnStsVld.DocUnits = 'Cnt';
FordVehIgnStsVld.SwcShoName = 'FordMsg3B3BusHiSpd';
FordVehIgnStsVld.EngDT = dt.lgc;
FordVehIgnStsVld.EngInit = 0;
FordVehIgnStsVld.EngMin = 0;
FordVehIgnStsVld.EngMax = 1;
FordVehIgnStsVld.TestTolerance = 0;
FordVehIgnStsVld.WrittenIn = {'FordMsg3B3BusHiSpdPer1'};
FordVehIgnStsVld.WriteType = 'Rte';


FordVehLifeCycMod = DataDict.OpSignal;
FordVehLifeCycMod.LongName = 'Ford Vehicle life Cycle Mode';
FordVehLifeCycMod.Description = [...
  'Processed Ford Vehicle Life Cycle Mode signal to be used by EPS'];
FordVehLifeCycMod.DocUnits = 'Cnt';
FordVehLifeCycMod.SwcShoName = 'FordMsg3B3BusHiSpd';
FordVehLifeCycMod.EngDT = enum.Ford_LifeCycMde_D_Actl;
FordVehLifeCycMod.EngInit = Ford_LifeCycMde_D_Actl.Cx0_Normal;
FordVehLifeCycMod.EngMin = Ford_LifeCycMde_D_Actl.Cx0_Normal;
FordVehLifeCycMod.EngMax = Ford_LifeCycMde_D_Actl.Cx3_Transport;
FordVehLifeCycMod.TestTolerance = 0;
FordVehLifeCycMod.WrittenIn = {'FordMsg3B3BusHiSpdPer1'};
FordVehLifeCycMod.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg3B3BusHiSpdIgnStsVldFaildThd = DataDict.Calibration;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.LongName = 'Ford Message 3B3 Bus High Speed Ignition Status Valid Failed Threshold';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.Description = [...
  'Threshold to set the Valid message NTC'];
FordMsg3B3BusHiSpdIgnStsVldFaildThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.EngVal = 0;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.EngMin = 0;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.EngMax = 6000;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.CustomerVisible = false;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.Online = false;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.Impact = 'H';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.GraphLink = {''};
FordMsg3B3BusHiSpdIgnStsVldFaildThd.Monotony = 'None';
FordMsg3B3BusHiSpdIgnStsVldFaildThd.MaxGrad = 0;
FordMsg3B3BusHiSpdIgnStsVldFaildThd.PortName = 'FordMsg3B3BusHiSpdIgnStsVldFaildThd';


FordMsg3B3BusHiSpdIgnStsVldMissThd = DataDict.Calibration;
FordMsg3B3BusHiSpdIgnStsVldMissThd.LongName = 'Ford Message 3B3 Bus High Speed Ignition Status Valid Missing Threshold';
FordMsg3B3BusHiSpdIgnStsVldMissThd.Description = [...
  'Threshold to set the Valid message NTC'];
FordMsg3B3BusHiSpdIgnStsVldMissThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdIgnStsVldMissThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdIgnStsVldMissThd.EngVal = 100;
FordMsg3B3BusHiSpdIgnStsVldMissThd.EngMin = 0;
FordMsg3B3BusHiSpdIgnStsVldMissThd.EngMax = 6000;
FordMsg3B3BusHiSpdIgnStsVldMissThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdIgnStsVldMissThd.CustomerVisible = false;
FordMsg3B3BusHiSpdIgnStsVldMissThd.Online = false;
FordMsg3B3BusHiSpdIgnStsVldMissThd.Impact = 'H';
FordMsg3B3BusHiSpdIgnStsVldMissThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdIgnStsVldMissThd.GraphLink = {''};
FordMsg3B3BusHiSpdIgnStsVldMissThd.Monotony = 'None';
FordMsg3B3BusHiSpdIgnStsVldMissThd.MaxGrad = 0;
FordMsg3B3BusHiSpdIgnStsVldMissThd.PortName = 'FordMsg3B3BusHiSpdIgnStsVldMissThd';


FordMsg3B3BusHiSpdIgnStsVldPassdThd = DataDict.Calibration;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.LongName = 'Ford Message 3B3 Bus High Speed Ignition Status Valid Passed Threshold';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.Description = [...
  'Threshold to clear the Ignition Status message NTC'];
FordMsg3B3BusHiSpdIgnStsVldPassdThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.EngVal = 0;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.EngMin = 0;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.EngMax = 6000;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.CustomerVisible = false;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.Online = false;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.Impact = 'H';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.GraphLink = {''};
FordMsg3B3BusHiSpdIgnStsVldPassdThd.Monotony = 'None';
FordMsg3B3BusHiSpdIgnStsVldPassdThd.MaxGrad = 0;
FordMsg3B3BusHiSpdIgnStsVldPassdThd.PortName = 'FordMsg3B3BusHiSpdIgnStsVldPassdThd';


FordMsg3B3BusHiSpdInvldSigFaildThd = DataDict.Calibration;
FordMsg3B3BusHiSpdInvldSigFaildThd.LongName = 'Ford Message 3B3 Bus High Speed Invalid Signal Failed Threshold';
FordMsg3B3BusHiSpdInvldSigFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg3B3BusHiSpdInvldSigFaildThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdInvldSigFaildThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdInvldSigFaildThd.EngVal = 0;
FordMsg3B3BusHiSpdInvldSigFaildThd.EngMin = 0;
FordMsg3B3BusHiSpdInvldSigFaildThd.EngMax = 6000;
FordMsg3B3BusHiSpdInvldSigFaildThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdInvldSigFaildThd.CustomerVisible = false;
FordMsg3B3BusHiSpdInvldSigFaildThd.Online = false;
FordMsg3B3BusHiSpdInvldSigFaildThd.Impact = 'L';
FordMsg3B3BusHiSpdInvldSigFaildThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdInvldSigFaildThd.GraphLink = {''};
FordMsg3B3BusHiSpdInvldSigFaildThd.Monotony = 'None';
FordMsg3B3BusHiSpdInvldSigFaildThd.MaxGrad = 0;
FordMsg3B3BusHiSpdInvldSigFaildThd.PortName = 'FordMsg3B3BusHiSpdInvldSigFaildThd';


FordMsg3B3BusHiSpdInvldSigPassdThd = DataDict.Calibration;
FordMsg3B3BusHiSpdInvldSigPassdThd.LongName = 'Ford Message 3B3 Bus High Speed Invalid Signal Passed Threshold';
FordMsg3B3BusHiSpdInvldSigPassdThd.Description = [...
  'Threshold to clear the Invalid message NTC'];
FordMsg3B3BusHiSpdInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdInvldSigPassdThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdInvldSigPassdThd.EngVal = 0;
FordMsg3B3BusHiSpdInvldSigPassdThd.EngMin = 0;
FordMsg3B3BusHiSpdInvldSigPassdThd.EngMax = 6000;
FordMsg3B3BusHiSpdInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdInvldSigPassdThd.CustomerVisible = false;
FordMsg3B3BusHiSpdInvldSigPassdThd.Online = false;
FordMsg3B3BusHiSpdInvldSigPassdThd.Impact = 'L';
FordMsg3B3BusHiSpdInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdInvldSigPassdThd.GraphLink = {''};
FordMsg3B3BusHiSpdInvldSigPassdThd.Monotony = 'None';
FordMsg3B3BusHiSpdInvldSigPassdThd.MaxGrad = 0;
FordMsg3B3BusHiSpdInvldSigPassdThd.PortName = 'FordMsg3B3BusHiSpdInvldSigPassdThd';


FordMsg3B3BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg3B3BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 3B3 Bus High Speed Missing Message Failed Threshold';
FordMsg3B3BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg3B3BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdMissMsgFaildThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdMissMsgFaildThd.EngVal = 100;
FordMsg3B3BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg3B3BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg3B3BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg3B3BusHiSpdMissMsgFaildThd.Online = false;
FordMsg3B3BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg3B3BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg3B3BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg3B3BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg3B3BusHiSpdMissMsgFaildThd.PortName = 'FordMsg3B3BusHiSpdMissMsgFaildThd';


FordMsg3B3BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg3B3BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 3B3 Bus High Speed Missing Message Passed Threshold';
FordMsg3B3BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the Missing message NTC'];
FordMsg3B3BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg3B3BusHiSpdMissMsgPassdThd.EngDT = dt.u16p0;
FordMsg3B3BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg3B3BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg3B3BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg3B3BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg3B3BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg3B3BusHiSpdMissMsgPassdThd.Online = false;
FordMsg3B3BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg3B3BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg3B3BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg3B3BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg3B3BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg3B3BusHiSpdMissMsgPassdThd.PortName = 'FordMsg3B3BusHiSpdMissMsgPassdThd';



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
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostics Flag Proxy';
ClrDiagcFlgProxyPrev.Description = [...
  'Used to hold previous value of Clear Diagnostics Flag Proxy Previous'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate first transition form Missing message fa' ...
  'iled to passed '];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehIgnStsInvldSigFaildRefTi = DataDict.PIM;
FordVehIgnStsInvldSigFaildRefTi.LongName = 'Ford Vehicle Ignition Status Invalid Signal Failed Reference Time';
FordVehIgnStsInvldSigFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehIgnStsInvldSigFaildRefTi.DocUnits = 'Cnt';
FordVehIgnStsInvldSigFaildRefTi.EngDT = dt.u32;
FordVehIgnStsInvldSigFaildRefTi.EngMin = 0;
FordVehIgnStsInvldSigFaildRefTi.EngMax = 4294967295;
FordVehIgnStsInvldSigFaildRefTi.InitRowCol = [1  1];


FordVehIgnStsInvldSigPassdRefTi = DataDict.PIM;
FordVehIgnStsInvldSigPassdRefTi.LongName = 'Ford Vehicle Ignition Status Invalid Signal Passed Reference Time';
FordVehIgnStsInvldSigPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehIgnStsInvldSigPassdRefTi.DocUnits = 'Cnt';
FordVehIgnStsInvldSigPassdRefTi.EngDT = dt.u32;
FordVehIgnStsInvldSigPassdRefTi.EngMin = 0;
FordVehIgnStsInvldSigPassdRefTi.EngMax = 4294967295;
FordVehIgnStsInvldSigPassdRefTi.InitRowCol = [1  1];


FordVehIgnStsPrev = DataDict.PIM;
FordVehIgnStsPrev.LongName = 'Ford Vehicle Ignition Status Previous';
FordVehIgnStsPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Ignition Status'];
FordVehIgnStsPrev.DocUnits = 'Cnt';
FordVehIgnStsPrev.EngDT = enum.Ford_Ignition_Status;
FordVehIgnStsPrev.EngMin = Ford_Ignition_Status.Cx0_Unknown;
FordVehIgnStsPrev.EngMax = Ford_Ignition_Status.CxF_Invalid;
FordVehIgnStsPrev.InitRowCol = [1  1];


FordVehIgnStsVldPrev = DataDict.PIM;
FordVehIgnStsVldPrev.LongName = 'Ford Vehicle Ignition Status Valid Previous';
FordVehIgnStsVldPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Ignition Status Valid'];
FordVehIgnStsVldPrev.DocUnits = 'Cnt';
FordVehIgnStsVldPrev.EngDT = dt.lgc;
FordVehIgnStsVldPrev.EngMin = 0;
FordVehIgnStsVldPrev.EngMax = 1;
FordVehIgnStsVldPrev.InitRowCol = [1  1];


FordVehLifeCycModPrev = DataDict.PIM;
FordVehLifeCycModPrev.LongName = 'Ford Vehicle Life Cycle Mode Previous';
FordVehLifeCycModPrev.Description = [...
  'Hold the Previous value of Ford Vehicle Life Cycle Mode'];
FordVehLifeCycModPrev.DocUnits = 'Cnt';
FordVehLifeCycModPrev.EngDT = enum.Ford_LifeCycMde_D_Actl;
FordVehLifeCycModPrev.EngMin = Ford_LifeCycMde_D_Actl.Cx0_Normal;
FordVehLifeCycModPrev.EngMax = Ford_LifeCycMde_D_Actl.Cx3_Transport;
FordVehLifeCycModPrev.InitRowCol = [1  1];


FordVehMsg3B3Miss = DataDict.PIM;
FordVehMsg3B3Miss.LongName = 'Ford Vehicle Message 3B3 Missing';
FordVehMsg3B3Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg3B3Miss.DocUnits = 'Cnt';
FordVehMsg3B3Miss.EngDT = dt.lgc;
FordVehMsg3B3Miss.EngMin = 0;
FordVehMsg3B3Miss.EngMax = 1;
FordVehMsg3B3Miss.InitRowCol = [1  1];


FordVehMsg3B3Rxd = DataDict.PIM;
FordVehMsg3B3Rxd.LongName = 'Ford Vehicle Message 3B3 Received';
FordVehMsg3B3Rxd.Description = [...
  'Flag for missing message diagnostics, it is true when message is recei' ...
  'ved.'];
FordVehMsg3B3Rxd.DocUnits = 'Cnt';
FordVehMsg3B3Rxd.EngDT = dt.lgc;
FordVehMsg3B3Rxd.EngMin = 0;
FordVehMsg3B3Rxd.EngMax = 1;
FordVehMsg3B3Rxd.InitRowCol = [1  1];


IgnStsVldFaildRefTi = DataDict.PIM;
IgnStsVldFaildRefTi.LongName = 'Ignition Status Valid Failed Reference Time';
IgnStsVldFaildRefTi.Description = [...
  'Timer for Ignition Status Valid Failed Reference Time will increment o' ...
  'r reset based on the conditions'];
IgnStsVldFaildRefTi.DocUnits = 'Cnt';
IgnStsVldFaildRefTi.EngDT = dt.u32;
IgnStsVldFaildRefTi.EngMin = 0;
IgnStsVldFaildRefTi.EngMax = 4294967295;
IgnStsVldFaildRefTi.InitRowCol = [1  1];


IgnStsVldMissRefTi = DataDict.PIM;
IgnStsVldMissRefTi.LongName = 'Ignition Status Valid Missing Reference Time';
IgnStsVldMissRefTi.Description = [...
  'Timer for Ignition Status Valid Missing Reference Time will increment ' ...
  'or reset based on the conditions'];
IgnStsVldMissRefTi.DocUnits = 'Cnt';
IgnStsVldMissRefTi.EngDT = dt.u32;
IgnStsVldMissRefTi.EngMin = 0;
IgnStsVldMissRefTi.EngMax = 4294967295;
IgnStsVldMissRefTi.InitRowCol = [1  1];


IgnStsVldPassdRefTi = DataDict.PIM;
IgnStsVldPassdRefTi.LongName = 'Ignition Status Valid Passed Reference Time';
IgnStsVldPassdRefTi.Description = [...
  'Timer for Ignition Status Valid Passed Reference Time will increment o' ...
  'r reset based on the conditions'];
IgnStsVldPassdRefTi.DocUnits = 'Cnt';
IgnStsVldPassdRefTi.EngDT = dt.u32;
IgnStsVldPassdRefTi.EngMin = 0;
IgnStsVldPassdRefTi.EngMax = 4294967295;
IgnStsVldPassdRefTi.InitRowCol = [1  1];


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
  'Timer for missing message will increment or reset based on the conditi' ...
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
DIAGENA_CNT_U08.LongName = 'Diagnostic Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'FordMissMsgDiagcInhb,FordMfgDiagcInhb,FordInvldMsgDiagcInhbl'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


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
FordMsg3B3MissMsg = DataDict.NTC;
FordMsg3B3MissMsg.NtcNr = NtcNr1.NTCNR_0X143;
FordMsg3B3MissMsg.NtcTyp = 'None';
FordMsg3B3MissMsg.LongName = 'Ford Message 3B3 Missing Message';
FordMsg3B3MissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg3B3MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg3B3MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg3B3MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg3B3MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehIgnStsInvldMsg = DataDict.NTC;
FordVehIgnStsInvldMsg.NtcNr = NtcNr1.NTCNR_0X144;
FordVehIgnStsInvldMsg.NtcTyp = 'None';
FordVehIgnStsInvldMsg.LongName = 'Ford Vehicle Ignition Status Invalid message';
FordVehIgnStsInvldMsg.Description = 'Used to set the NTC if message is invalid';
FordVehIgnStsInvldMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehIgnStsInvldMsg.NtcStInfo.Bit0Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit1Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit2Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit3Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit4Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit5Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit6Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStInfo.Bit7Descr = 'Unused';
FordVehIgnStsInvldMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
