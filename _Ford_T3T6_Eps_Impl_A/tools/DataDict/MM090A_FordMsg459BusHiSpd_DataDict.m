%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Apr-2018 18:09:28       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM090A = DataDict.FDD;
MM090A.Version = '1.0.X';
MM090A.LongName = 'Ford Message 459 Bus High Speed';
MM090A.ShoName  = 'FordMsg459BusHiSpd';
MM090A.DesignASIL = 'B';
MM090A.Description = [...
  'The purpose of the Ford Message 459 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with Trailer Back up Assist sig' ...
  'nals from CAN.The Ford Message 459 function will perform the missing m' ...
  'essage and signal invalid diagnostics as well as provide a validity si' ...
  'gnal for the signal values and received message'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg459BusHiSpdInit1 = DataDict.Runnable;
FordMsg459BusHiSpdInit1.Context = 'Rte';
FordMsg459BusHiSpdInit1.TimeStep = 0;
FordMsg459BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg459BusHiSpdPer1 = DataDict.Runnable;
FordMsg459BusHiSpdPer1.Context = 'Rte';
FordMsg459BusHiSpdPer1.TimeStep = 0.01;
FordMsg459BusHiSpdPer1.Description = [...
  'Periodic runnable runnning at 0.01 second rate.'];

ComIPduCallout_TrailerAidStat3_FD1 = DataDict.SrvRunnable;
ComIPduCallout_TrailerAidStat3_FD1.Context = 'NonRte';
ComIPduCallout_TrailerAidStat3_FD1.Description = [...
  'server runnable used to notify the message is received.'];
ComIPduCallout_TrailerAidStat3_FD1.Return = DataDict.CSReturn;
ComIPduCallout_TrailerAidStat3_FD1.Return.Type = 'None';
ComIPduCallout_TrailerAidStat3_FD1.Return.Min = [];
ComIPduCallout_TrailerAidStat3_FD1.Return.Max = [];
ComIPduCallout_TrailerAidStat3_FD1.Return.TestTolerance = [];
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).Name = 'TrailerAid';
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_TrailerAidStat3_FD1.Arguments(1).Description = [...
  'This signal notifies that the message is received successfully.'];

ComTimeoutNotification_HitchToVehAxle_L_Calc = DataDict.SrvRunnable;
ComTimeoutNotification_HitchToVehAxle_L_Calc.Context = 'NonRte';
ComTimeoutNotification_HitchToVehAxle_L_Calc.Description = [...
  'server runnable used to notify the message timeout has happened.'];
ComTimeoutNotification_HitchToVehAxle_L_Calc.Return = DataDict.CSReturn;
ComTimeoutNotification_HitchToVehAxle_L_Calc.Return.Type = 'None';
ComTimeoutNotification_HitchToVehAxle_L_Calc.Return.Min = [];
ComTimeoutNotification_HitchToVehAxle_L_Calc.Return.Max = [];
ComTimeoutNotification_HitchToVehAxle_L_Calc.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg459BusHiSpdInit1','FordMsg459BusHiSpdPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi value obtained at root lay' ...
  'erof model and gives the RefTmr.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg459BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg459BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg459BusHiSpdPer1'};
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
FordCanDtcInhb.ReadIn = {'FordMsg459BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'Ford EPS Life Cycle Mode / Modulo';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.lgc;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg459BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'When FordTrlrBackupAssiEnad is TRUE, Diagnostic test is performed'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg459BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_HitchToVehAxle_L_Calc = DataDict.IpSignal;
Ford_HitchToVehAxle_L_Calc.LongName = 'Ford Hitch to Vehicle Axle L Calculation';
Ford_HitchToVehAxle_L_Calc.Description = [...
  'Customer datatype should be used. Datatype: Ford_HitchToVehAxle_L_Calc' ...
  '.Elements are: 0-254 - "Regular Integer" , 255 - "CxFF_Faulty"'];
Ford_HitchToVehAxle_L_Calc.DocUnits = 'Cnt';
Ford_HitchToVehAxle_L_Calc.EngDT = dt.u08;
Ford_HitchToVehAxle_L_Calc.EngInit = 255;
Ford_HitchToVehAxle_L_Calc.EngMin = 0;
Ford_HitchToVehAxle_L_Calc.EngMax = 255;
Ford_HitchToVehAxle_L_Calc.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_HitchToVehAxle_L_Calc.ReadType = 'Rte';


Ford_TrlrAidTrgtId_No_Actl = DataDict.IpSignal;
Ford_TrlrAidTrgtId_No_Actl.LongName = 'Ford Trailer Aid Target Identification number Actual';
Ford_TrlrAidTrgtId_No_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidTrgtId_No_Actl' ...
  '.Elements are: 0-31 - "Regular Integer"'];
Ford_TrlrAidTrgtId_No_Actl.DocUnits = 'Cnt';
Ford_TrlrAidTrgtId_No_Actl.EngDT = dt.u08;
Ford_TrlrAidTrgtId_No_Actl.EngInit = 0;
Ford_TrlrAidTrgtId_No_Actl.EngMin = 0;
Ford_TrlrAidTrgtId_No_Actl.EngMax = 31;
Ford_TrlrAidTrgtId_No_Actl.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrAidTrgtId_No_Actl.ReadType = 'Rte';


Ford_TrlrAid_An3_Actl = DataDict.IpSignal;
Ford_TrlrAid_An3_Actl.LongName = 'Ford Trailer Aid Angle3 Actual';
Ford_TrlrAid_An3_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_An3_Actl.Elem' ...
  'ents are: 0-2046 - "Regular Integer" , 2047 - "Cx7FF_Faulty"'];
Ford_TrlrAid_An3_Actl.DocUnits = 'Cnt';
Ford_TrlrAid_An3_Actl.EngDT = dt.u16;
Ford_TrlrAid_An3_Actl.EngInit = 720;
Ford_TrlrAid_An3_Actl.EngMin = 0;
Ford_TrlrAid_An3_Actl.EngMax = 2047;
Ford_TrlrAid_An3_Actl.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrAid_An3_Actl.ReadType = 'Rte';


Ford_TrlrAid_AnRate2_Actl = DataDict.IpSignal;
Ford_TrlrAid_AnRate2_Actl.LongName = 'Ford Trailer Aid Angle Rate2 Actual';
Ford_TrlrAid_AnRate2_Actl.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_AnRate2_Actl.' ...
  'Elements are: 0-1022 - "Regular Integer" , 1023 - "CxFF_Faulty"'];
Ford_TrlrAid_AnRate2_Actl.DocUnits = 'Cnt';
Ford_TrlrAid_AnRate2_Actl.EngDT = dt.u16;
Ford_TrlrAid_AnRate2_Actl.EngInit = 400;
Ford_TrlrAid_AnRate2_Actl.EngMin = 0;
Ford_TrlrAid_AnRate2_Actl.EngMax = 1023;
Ford_TrlrAid_AnRate2_Actl.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrAid_AnRate2_Actl.ReadType = 'Rte';


Ford_TrlrAid_D2_Stat1 = DataDict.IpSignal;
Ford_TrlrAid_D2_Stat1.LongName = 'Ford Trailer Aid D2 Status';
Ford_TrlrAid_D2_Stat1.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_D2_Stat.  Ele' ...
  'ments are: 0 - "Cx0_NotTracking"  1 -  "Cx1_Initializing" 2 - "Cx2_Dri' ...
  'veStraighRequested"  3 - "Cx3_TurnRequested"  4 - "Cx4_TrackingLowConf' ...
  'idence" 5 -  "Cx5_TrackingMediumConfidence" 6 -"Cx6_TrackingHighConfid' ...
  'ence" 7 -  "Cx7_TrackingUnknownConfidence"  8 -  "Cx8_TrackingLost"  9' ...
  ' -  "Cx9_IncorrectLighting" 10 -  "CxA_DirtyCamera"  11 - "CxB_NotUsed' ...
  '_1" 12 -  "CxC_NotUsed_2" 13 - "CxD_NotUsed_3" 14 - "CxE_NotUsed_4" 15' ...
  ' - "CxF_Faulty" '];
Ford_TrlrAid_D2_Stat1.DocUnits = 'Cnt';
Ford_TrlrAid_D2_Stat1.EngDT = enum.Ford_TrlrAid_D2_Stat;
Ford_TrlrAid_D2_Stat1.EngInit = Ford_TrlrAid_D2_Stat.Cx0_NotTracking;
Ford_TrlrAid_D2_Stat1.EngMin = Ford_TrlrAid_D2_Stat.Cx0_NotTracking;
Ford_TrlrAid_D2_Stat1.EngMax = Ford_TrlrAid_D2_Stat.CxF_Faulty;
Ford_TrlrAid_D2_Stat1.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrAid_D2_Stat1.ReadType = 'Rte';


Ford_TrlrRvrse_D_Stat1 = DataDict.IpSignal;
Ford_TrlrRvrse_D_Stat1.LongName = 'Ford Trailer Reverse D Status';
Ford_TrlrRvrse_D_Stat1.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrRvrse_D_Stat.  El' ...
  'ements are: 0 - "Cx0_Off"  1 -  "Cx1_On"2 - "Cx2_TrailerReverseGuidanc' ...
  'eLite" 3 -  "Cx3_Faulty" '];
Ford_TrlrRvrse_D_Stat1.DocUnits = 'Cnt';
Ford_TrlrRvrse_D_Stat1.EngDT = enum.Ford_TrlrRvrse_D_Stat;
Ford_TrlrRvrse_D_Stat1.EngInit = Ford_TrlrRvrse_D_Stat.Cx0_Off;
Ford_TrlrRvrse_D_Stat1.EngMin = Ford_TrlrRvrse_D_Stat.Cx0_Off;
Ford_TrlrRvrse_D_Stat1.EngMax = Ford_TrlrRvrse_D_Stat.Cx3_Faulty;
Ford_TrlrRvrse_D_Stat1.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrRvrse_D_Stat1.ReadType = 'Rte';


Ford_TrlrTrgtAcquire_D_Stat1 = DataDict.IpSignal;
Ford_TrlrTrgtAcquire_D_Stat1.LongName = 'Ford Trailer Target Acquire D Status';
Ford_TrlrTrgtAcquire_D_Stat1.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrTrgtAcquire_D_Sta' ...
  't.  Elements are: 0 - "Cx0_Null"  1 -  "Cx1_TargetAcquired"   2 - "Cx2' ...
  '_TargetNotAcquired"3 -   "Cx3_Processing" 4 -  "Cx4_RVCforTBA_Activate' ...
  'd"  5 -  "Cx5_NotUsed_1" 6 - "Cx6_NotUsed_2" 7 -   "Cx7_Faulty"'];
Ford_TrlrTrgtAcquire_D_Stat1.DocUnits = 'Cnt';
Ford_TrlrTrgtAcquire_D_Stat1.EngDT = enum.Ford_TrlrTrgtAcquire_D_Stat;
Ford_TrlrTrgtAcquire_D_Stat1.EngInit = Ford_TrlrTrgtAcquire_D_Stat.Cx0_Null;
Ford_TrlrTrgtAcquire_D_Stat1.EngMin = Ford_TrlrTrgtAcquire_D_Stat.Cx0_Null;
Ford_TrlrTrgtAcquire_D_Stat1.EngMax = Ford_TrlrTrgtAcquire_D_Stat.Cx7_Faulty;
Ford_TrlrTrgtAcquire_D_Stat1.ReadIn = {'FordMsg459BusHiSpdPer1'};
Ford_TrlrTrgtAcquire_D_Stat1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehTrlrAidAcqSts = DataDict.OpSignal;
FordVehTrlrAidAcqSts.LongName = 'Ford Vehicle Trailer Aid Acquire Status';
FordVehTrlrAidAcqSts.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrTrgtAcquire_D_Sta' ...
  't.  Elements are: 0 - "Cx0_Null"  1 -  "Cx1_TargetAcquired"   2 - "Cx2' ...
  '_TargetNotAcquired"3 -   "Cx3_Processing" 4 -  "Cx4_RVCforTBA_Activate' ...
  'd"  5 -  "Cx5_NotUsed_1" 6 - "Cx6_NotUsed_2" 7 -   "Cx7_Faulty"'];
FordVehTrlrAidAcqSts.DocUnits = 'Cnt';
FordVehTrlrAidAcqSts.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidAcqSts.EngDT = enum.Ford_TrlrTrgtAcquire_D_Stat;
FordVehTrlrAidAcqSts.EngInit = Ford_TrlrTrgtAcquire_D_Stat.Cx0_Null;
FordVehTrlrAidAcqSts.EngMin = Ford_TrlrTrgtAcquire_D_Stat.Cx0_Null;
FordVehTrlrAidAcqSts.EngMax = Ford_TrlrTrgtAcquire_D_Stat.Cx7_Faulty;
FordVehTrlrAidAcqSts.TestTolerance = 0;
FordVehTrlrAidAcqSts.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidAcqSts.WriteType = 'Rte';


FordVehTrlrAidHitchAg = DataDict.OpSignal;
FordVehTrlrAidHitchAg.LongName = 'Ford Vehicle Trailer Aid Hitch Angle';
FordVehTrlrAidHitchAg.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_An3_Actl.Elem' ...
  'ents are: 0-2046 - "Regular Integer" , 2047 - "Cx7FF_Faulty"'];
FordVehTrlrAidHitchAg.DocUnits = 'Cnt';
FordVehTrlrAidHitchAg.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidHitchAg.EngDT = dt.u16;
FordVehTrlrAidHitchAg.EngInit = 720;
FordVehTrlrAidHitchAg.EngMin = 0;
FordVehTrlrAidHitchAg.EngMax = 2047;
FordVehTrlrAidHitchAg.TestTolerance = 0;
FordVehTrlrAidHitchAg.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidHitchAg.WriteType = 'Rte';


FordVehTrlrAidHitchAgRate = DataDict.OpSignal;
FordVehTrlrAidHitchAgRate.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate';
FordVehTrlrAidHitchAgRate.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_AnRate2_Actl.' ...
  'Elements are: 0-1022 - "Regular Integer" , 1023 - "CxFF_Faulty"'];
FordVehTrlrAidHitchAgRate.DocUnits = 'Cnt';
FordVehTrlrAidHitchAgRate.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidHitchAgRate.EngDT = dt.u16;
FordVehTrlrAidHitchAgRate.EngInit = 400;
FordVehTrlrAidHitchAgRate.EngMin = 0;
FordVehTrlrAidHitchAgRate.EngMax = 1023;
FordVehTrlrAidHitchAgRate.TestTolerance = 0;
FordVehTrlrAidHitchAgRate.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidHitchAgRate.WriteType = 'Rte';


FordVehTrlrAidIdnVal = DataDict.OpSignal;
FordVehTrlrAidIdnVal.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Raw';
FordVehTrlrAidIdnVal.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidTrgtId_No_Actl' ...
  '.Elements are: 0-31 - "Regular Integer"'];
FordVehTrlrAidIdnVal.DocUnits = 'Cnt';
FordVehTrlrAidIdnVal.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidIdnVal.EngDT = dt.u08;
FordVehTrlrAidIdnVal.EngInit = 0;
FordVehTrlrAidIdnVal.EngMin = 0;
FordVehTrlrAidIdnVal.EngMax = 31;
FordVehTrlrAidIdnVal.TestTolerance = 0;
FordVehTrlrAidIdnVal.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidIdnVal.WriteType = 'Rte';


FordVehTrlrAidTrakgSt = DataDict.OpSignal;
FordVehTrlrAidTrakgSt.LongName = 'Ford Vehicle Trailer Aid Track Status';
FordVehTrlrAidTrakgSt.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_D2_Stat.  Ele' ...
  'ments are: 0 - "Cx0_NotTracking"  1 -  "Cx1_Initializing" 2 - "Cx2_Dri' ...
  'veStraighRequested"  3 - "Cx3_TurnRequested"  4 - "Cx4_TrackingLowConf' ...
  'idence" 5 -  "Cx5_TrackingMediumConfidence" 6 -"Cx6_TrackingHighConfid' ...
  'ence" 7 -  "Cx7_TrackingUnknownConfidence"  8 -  "Cx8_TrackingLost"  9' ...
  ' -  "Cx9_IncorrectLighting" 10 -  "CxA_DirtyCamera"  11 - "CxB_NotUsed' ...
  '_1" 12 -  "CxC_NotUsed_2" 13 - "CxD_NotUsed_3" 14 - "CxE_NotUsed_4" 15' ...
  ' - "CxF_Faulty" '];
FordVehTrlrAidTrakgSt.DocUnits = 'Cnt';
FordVehTrlrAidTrakgSt.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidTrakgSt.EngDT = enum.Ford_TrlrAid_D2_Stat;
FordVehTrlrAidTrakgSt.EngInit = Ford_TrlrAid_D2_Stat.Cx0_NotTracking;
FordVehTrlrAidTrakgSt.EngMin = Ford_TrlrAid_D2_Stat.Cx0_NotTracking;
FordVehTrlrAidTrakgSt.EngMax = Ford_TrlrAid_D2_Stat.CxF_Faulty;
FordVehTrlrAidTrakgSt.TestTolerance = 0;
FordVehTrlrAidTrakgSt.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidTrakgSt.WriteType = 'Rte';


FordVehTrlrAidTrlrRvsGuidcSts = DataDict.OpSignal;
FordVehTrlrAidTrlrRvsGuidcSts.LongName = 'Ford Vehicle Trailer Aid Trailer Reverse Guidance status';
FordVehTrlrAidTrlrRvsGuidcSts.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrRvrse_D_Stat.  El' ...
  'ements are: 0 - "Cx0_Off"  1 -  "Cx1_On"2 - "Cx2_TrailerReverseGuidanc' ...
  'eLite" 3 -  "Cx3_Faulty" '];
FordVehTrlrAidTrlrRvsGuidcSts.DocUnits = 'Cnt';
FordVehTrlrAidTrlrRvsGuidcSts.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrAidTrlrRvsGuidcSts.EngDT = enum.Ford_TrlrRvrse_D_Stat;
FordVehTrlrAidTrlrRvsGuidcSts.EngInit = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcSts.EngMin = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcSts.EngMax = Ford_TrlrRvrse_D_Stat.Cx3_Faulty;
FordVehTrlrAidTrlrRvsGuidcSts.TestTolerance = 0;
FordVehTrlrAidTrlrRvsGuidcSts.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrAidTrlrRvsGuidcSts.WriteType = 'Rte';


FordVehTrlrBallToAxle = DataDict.OpSignal;
FordVehTrlrBallToAxle.LongName = 'Ford Vehicle Trailer Ball To Axle';
FordVehTrlrBallToAxle.Description = [...
  'Customer datatype should be used. Datatype: Ford_HitchToVehAxle_L_Calc' ...
  'Elements are: 0-254 - "Regular Integer" , 255 - "CxFF_Faulty"'];
FordVehTrlrBallToAxle.DocUnits = 'Cnt';
FordVehTrlrBallToAxle.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrBallToAxle.EngDT = dt.u08;
FordVehTrlrBallToAxle.EngInit = 255;
FordVehTrlrBallToAxle.EngMin = 0;
FordVehTrlrBallToAxle.EngMax = 255;
FordVehTrlrBallToAxle.TestTolerance = 0;
FordVehTrlrBallToAxle.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrBallToAxle.WriteType = 'Rte';


FordVehTrlrHitchAgVld = DataDict.OpSignal;
FordVehTrlrHitchAgVld.LongName = 'Ford Vehicle Trailer Hitch Angle Valid';
FordVehTrlrHitchAgVld.Description = [...
  'Ford Vehicle Trailer Hitch Angle Valid is updated when message is rece' ...
  'ived or missing'];
FordVehTrlrHitchAgVld.DocUnits = 'Cnt';
FordVehTrlrHitchAgVld.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrHitchAgVld.EngDT = dt.lgc;
FordVehTrlrHitchAgVld.EngInit = 0;
FordVehTrlrHitchAgVld.EngMin = 0;
FordVehTrlrHitchAgVld.EngMax = 1;
FordVehTrlrHitchAgVld.TestTolerance = 0;
FordVehTrlrHitchAgVld.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrHitchAgVld.WriteType = 'Rte';


FordVehTrlrHitchRateVld = DataDict.OpSignal;
FordVehTrlrHitchRateVld.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Valid';
FordVehTrlrHitchRateVld.Description = [...
  'Ford Vehicle Trailer Hitch Angle Rate Valid is updated when message is' ...
  ' received or missing'];
FordVehTrlrHitchRateVld.DocUnits = 'Cnt';
FordVehTrlrHitchRateVld.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrHitchRateVld.EngDT = dt.lgc;
FordVehTrlrHitchRateVld.EngInit = 0;
FordVehTrlrHitchRateVld.EngMin = 0;
FordVehTrlrHitchRateVld.EngMax = 1;
FordVehTrlrHitchRateVld.TestTolerance = 0;
FordVehTrlrHitchRateVld.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrHitchRateVld.WriteType = 'Rte';


FordVehTrlrTarVld = DataDict.OpSignal;
FordVehTrlrTarVld.LongName = 'Ford Vehicle Trailer Target Valid';
FordVehTrlrTarVld.Description = [...
  'Ford Vehicle Trailer Target Valid is updated when message is received ' ...
  'or missing'];
FordVehTrlrTarVld.DocUnits = 'Cnt';
FordVehTrlrTarVld.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrTarVld.EngDT = dt.lgc;
FordVehTrlrTarVld.EngInit = 0;
FordVehTrlrTarVld.EngMin = 0;
FordVehTrlrTarVld.EngMax = 1;
FordVehTrlrTarVld.TestTolerance = 0;
FordVehTrlrTarVld.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrTarVld.WriteType = 'Rte';


FordVehTrlrTrakgStVld = DataDict.OpSignal;
FordVehTrlrTrakgStVld.LongName = 'Ford Vehicle Trailer Track State Valid';
FordVehTrlrTrakgStVld.Description = [...
  'Ford Vehicle Trailer Track State Valid is updated when message is rece' ...
  'ived or missing'];
FordVehTrlrTrakgStVld.DocUnits = 'Cnt';
FordVehTrlrTrakgStVld.SwcShoName = 'FordMsg459BusHiSpd';
FordVehTrlrTrakgStVld.EngDT = dt.lgc;
FordVehTrlrTrakgStVld.EngInit = 0;
FordVehTrlrTrakgStVld.EngMin = 0;
FordVehTrlrTrakgStVld.EngMax = 1;
FordVehTrlrTrakgStVld.TestTolerance = 0;
FordVehTrlrTrakgStVld.WrittenIn = {'FordMsg459BusHiSpdPer1'};
FordVehTrlrTrakgStVld.WriteType = 'Rte';


TrlrAidStsThreePrsntInt = DataDict.OpSignal;
TrlrAidStsThreePrsntInt.LongName = 'Trailer Aid Status Three Present Internal';
TrlrAidStsThreePrsntInt.Description = [...
  'Trailer Aid Status Three Present Internal is updated when message is r' ...
  'eceived or missing'];
TrlrAidStsThreePrsntInt.DocUnits = 'Cnt';
TrlrAidStsThreePrsntInt.SwcShoName = 'FordMsg459BusHiSpd';
TrlrAidStsThreePrsntInt.EngDT = dt.lgc;
TrlrAidStsThreePrsntInt.EngInit = 0;
TrlrAidStsThreePrsntInt.EngMin = 0;
TrlrAidStsThreePrsntInt.EngMax = 1;
TrlrAidStsThreePrsntInt.TestTolerance = 0;
TrlrAidStsThreePrsntInt.WrittenIn = {'FordMsg459BusHiSpdPer1'};
TrlrAidStsThreePrsntInt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg459BusHiSpdDiagMsgMissTmrThd = DataDict.Calibration;
FordMsg459BusHiSpdDiagMsgMissTmrThd.LongName = 'Missing Message Diag';
FordMsg459BusHiSpdDiagMsgMissTmrThd.Description = [...
  'Threshold to set the Missing message NTC'];
FordMsg459BusHiSpdDiagMsgMissTmrThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdDiagMsgMissTmrThd.EngDT = dt.u16;
FordMsg459BusHiSpdDiagMsgMissTmrThd.EngVal = 5000;
FordMsg459BusHiSpdDiagMsgMissTmrThd.EngMin = 0;
FordMsg459BusHiSpdDiagMsgMissTmrThd.EngMax = 6000;
FordMsg459BusHiSpdDiagMsgMissTmrThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdDiagMsgMissTmrThd.CustomerVisible = false;
FordMsg459BusHiSpdDiagMsgMissTmrThd.Online = false;
FordMsg459BusHiSpdDiagMsgMissTmrThd.Impact = 'L';
FordMsg459BusHiSpdDiagMsgMissTmrThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdDiagMsgMissTmrThd.GraphLink = {''};
FordMsg459BusHiSpdDiagMsgMissTmrThd.Monotony = 'None';
FordMsg459BusHiSpdDiagMsgMissTmrThd.MaxGrad = 0;
FordMsg459BusHiSpdDiagMsgMissTmrThd.PortName = 'FordMsg459BusHiSpdDiagMsgMissTmrThd';


FordMsg459BusHiSpdHitchAgInvldFaildThd = DataDict.Calibration;
FordMsg459BusHiSpdHitchAgInvldFaildThd.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Failed Threshold ';
FordMsg459BusHiSpdHitchAgInvldFaildThd.Description = [...
  'Threshold to set the invalid message diagnostic 0x1A7'];
FordMsg459BusHiSpdHitchAgInvldFaildThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdHitchAgInvldFaildThd.EngDT = dt.u16;
FordMsg459BusHiSpdHitchAgInvldFaildThd.EngVal = 0;
FordMsg459BusHiSpdHitchAgInvldFaildThd.EngMin = 0;
FordMsg459BusHiSpdHitchAgInvldFaildThd.EngMax = 6000;
FordMsg459BusHiSpdHitchAgInvldFaildThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdHitchAgInvldFaildThd.CustomerVisible = false;
FordMsg459BusHiSpdHitchAgInvldFaildThd.Online = false;
FordMsg459BusHiSpdHitchAgInvldFaildThd.Impact = 'L';
FordMsg459BusHiSpdHitchAgInvldFaildThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdHitchAgInvldFaildThd.GraphLink = {''};
FordMsg459BusHiSpdHitchAgInvldFaildThd.Monotony = 'None';
FordMsg459BusHiSpdHitchAgInvldFaildThd.MaxGrad = 0;
FordMsg459BusHiSpdHitchAgInvldFaildThd.PortName = 'FordMsg459BusHiSpdHitchAgInvldFaildThd';


FordMsg459BusHiSpdHitchAgInvldPassdThd = DataDict.Calibration;
FordMsg459BusHiSpdHitchAgInvldPassdThd.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Passed Threshold ';
FordMsg459BusHiSpdHitchAgInvldPassdThd.Description = [...
  'Threshold to recover the invalid message diagnostic 0x1A7'];
FordMsg459BusHiSpdHitchAgInvldPassdThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdHitchAgInvldPassdThd.EngDT = dt.u16;
FordMsg459BusHiSpdHitchAgInvldPassdThd.EngVal = 0;
FordMsg459BusHiSpdHitchAgInvldPassdThd.EngMin = 0;
FordMsg459BusHiSpdHitchAgInvldPassdThd.EngMax = 6000;
FordMsg459BusHiSpdHitchAgInvldPassdThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdHitchAgInvldPassdThd.CustomerVisible = false;
FordMsg459BusHiSpdHitchAgInvldPassdThd.Online = false;
FordMsg459BusHiSpdHitchAgInvldPassdThd.Impact = 'L';
FordMsg459BusHiSpdHitchAgInvldPassdThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdHitchAgInvldPassdThd.GraphLink = {''};
FordMsg459BusHiSpdHitchAgInvldPassdThd.Monotony = 'None';
FordMsg459BusHiSpdHitchAgInvldPassdThd.MaxGrad = 0;
FordMsg459BusHiSpdHitchAgInvldPassdThd.PortName = 'FordMsg459BusHiSpdHitchAgInvldPassdThd';


FordMsg459BusHiSpdHitchAgRateInvldFaildThd = DataDict.Calibration;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Invalid Failed Threshold ';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.Description = [...
  'Threshold to set the invalid message diagnostic 0x1A5'];
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.EngDT = dt.u16;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.EngVal = 0;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.EngMin = 0;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.EngMax = 6000;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.CustomerVisible = false;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.Online = false;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.Impact = 'L';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.GraphLink = {''};
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.Monotony = 'None';
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.MaxGrad = 0;
FordMsg459BusHiSpdHitchAgRateInvldFaildThd.PortName = 'FordMsg459BusHiSpdHitchAgRateInvldFaildThd';


FordMsg459BusHiSpdHitchAgRateInvldPassdThd = DataDict.Calibration;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Invalid Passed Threshold ';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.Description = [...
  'Threshold to recover the invalid message diagnostic 0x1A5'];
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.EngDT = dt.u16;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.EngVal = 0;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.EngMin = 0;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.EngMax = 6000;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.CustomerVisible = false;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.Online = false;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.Impact = 'L';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.GraphLink = {''};
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.Monotony = 'None';
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.MaxGrad = 0;
FordMsg459BusHiSpdHitchAgRateInvldPassdThd.PortName = 'FordMsg459BusHiSpdHitchAgRateInvldPassdThd';


FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd = DataDict.Calibration;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.LongName = 'Present Flag Message Missing Timer';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.Description = [...
  'Threshold to confirm the Missing message.'];
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.EngDT = dt.u16;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.EngVal = 5000;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.EngMin = 0;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.EngMax = 6000;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.CustomerVisible = false;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.Online = false;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.Impact = 'L';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.GraphLink = {''};
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.Monotony = 'None';
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.MaxGrad = 0;
FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd.PortName = 'FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd';


FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd = DataDict.Calibration;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.LongName = 'Missing Message Diag Recover ';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.Description = [...
  'Threshold to Reset the Missing message NTC'];
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.EngDT = dt.u16;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.EngVal = 0;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.EngMin = 0;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.EngMax = 6000;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.CustomerVisible = false;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.Online = false;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.Impact = 'L';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.GraphLink = {''};
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.Monotony = 'None';
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.MaxGrad = 0;
FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd.PortName = 'FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd';


FordMsg459BusHiSpdRcvrPrsntFlgTmrThd = DataDict.Calibration;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.LongName = 'Present Flag Recover Timer';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.Description = [...
  'Threshold to confirm the New Message.'];
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.EngDT = dt.u16;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.EngVal = 0;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.EngMin = 0;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.EngMax = 6000;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.CustomerVisible = false;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.Online = false;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.Impact = 'L';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.GraphLink = {''};
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.Monotony = 'None';
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.MaxGrad = 0;
FordMsg459BusHiSpdRcvrPrsntFlgTmrThd.PortName = 'FordMsg459BusHiSpdRcvrPrsntFlgTmrThd';


FordMsg459BusHiSpdTrackStInvldFaildThd = DataDict.Calibration;
FordMsg459BusHiSpdTrackStInvldFaildThd.LongName = 'Ford Vehicle Trailer Aid Track State Invalid Failed Threshold ';
FordMsg459BusHiSpdTrackStInvldFaildThd.Description = [...
  'Threshold to failed the invalid message diagnostic 0x1A6'];
FordMsg459BusHiSpdTrackStInvldFaildThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrackStInvldFaildThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrackStInvldFaildThd.EngVal = 0;
FordMsg459BusHiSpdTrackStInvldFaildThd.EngMin = 0;
FordMsg459BusHiSpdTrackStInvldFaildThd.EngMax = 6000;
FordMsg459BusHiSpdTrackStInvldFaildThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrackStInvldFaildThd.CustomerVisible = false;
FordMsg459BusHiSpdTrackStInvldFaildThd.Online = false;
FordMsg459BusHiSpdTrackStInvldFaildThd.Impact = 'L';
FordMsg459BusHiSpdTrackStInvldFaildThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrackStInvldFaildThd.GraphLink = {''};
FordMsg459BusHiSpdTrackStInvldFaildThd.Monotony = 'None';
FordMsg459BusHiSpdTrackStInvldFaildThd.MaxGrad = 0;
FordMsg459BusHiSpdTrackStInvldFaildThd.PortName = 'FordMsg459BusHiSpdTrackStInvldFaildThd';


FordMsg459BusHiSpdTrackStInvldPassdThd = DataDict.Calibration;
FordMsg459BusHiSpdTrackStInvldPassdThd.LongName = 'Ford Vehicle Trailer Aid Track State Invalid Passed Threshold ';
FordMsg459BusHiSpdTrackStInvldPassdThd.Description = [...
  'Threshold to recover the invalid message diagnostic 0x1A6'];
FordMsg459BusHiSpdTrackStInvldPassdThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrackStInvldPassdThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrackStInvldPassdThd.EngVal = 0;
FordMsg459BusHiSpdTrackStInvldPassdThd.EngMin = 0;
FordMsg459BusHiSpdTrackStInvldPassdThd.EngMax = 6000;
FordMsg459BusHiSpdTrackStInvldPassdThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrackStInvldPassdThd.CustomerVisible = false;
FordMsg459BusHiSpdTrackStInvldPassdThd.Online = false;
FordMsg459BusHiSpdTrackStInvldPassdThd.Impact = 'L';
FordMsg459BusHiSpdTrackStInvldPassdThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrackStInvldPassdThd.GraphLink = {''};
FordMsg459BusHiSpdTrackStInvldPassdThd.Monotony = 'None';
FordMsg459BusHiSpdTrackStInvldPassdThd.MaxGrad = 0;
FordMsg459BusHiSpdTrackStInvldPassdThd.PortName = 'FordMsg459BusHiSpdTrackStInvldPassdThd';


FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.LongName = 'Trailer Hitch Angle Valid Invalid Message Threshold';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Angle Valid when t' ...
  'he message is Invalid.'];
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.EngVal = 0;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.Online = false;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd.PortName = 'FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd';


FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.LongName = 'Trailer Hitch Angle Valid Miss Message Threshold';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Angle Valid when t' ...
  'he message is missing.'];
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.EngVal = 5000;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.Online = false;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd.PortName = 'FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd';


FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.LongName = 'Trailer Hitch Rate Valid Invalid Message Threshold ';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Rate Valid when th' ...
  'e message is Invalid.'];
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.EngVal = 0;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.Online = false;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd.PortName = 'FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd';


FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.LongName = 'Trailer Hitch Rate Valid Miss Message Threshold ';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Rate Valid when th' ...
  'e message is missing.'];
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.EngVal = 5000;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.Online = false;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd.PortName = 'FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd';


FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.LongName = 'Trailer Hitch Angle Valid Recover Threshold ';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Angle Valid when t' ...
  'he message is present.'];
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.EngVal = 0;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.EngMin = 0;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.Online = false;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.Impact = 'H';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd.PortName = 'FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd';


FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.LongName = 'Trailer Hitch Rate Valid Recover Threshold ';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Hitch Rate Valid when th' ...
  'e message is present.'];
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.EngVal = 0;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.EngMin = 0;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.Online = false;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.Impact = 'H';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd.PortName = 'FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd';


FordMsg459BusHiSpdTrlrRcvrTarVldThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.LongName = 'Trailer Target Valid Recover Threshold ';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Target Valid when the me' ...
  'ssage is present.'];
FordMsg459BusHiSpdTrlrRcvrTarVldThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.EngVal = 0;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.EngMin = 0;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.Online = false;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.Impact = 'H';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrRcvrTarVldThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrRcvrTarVldThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrRcvrTarVldThd.PortName = 'FordMsg459BusHiSpdTrlrRcvrTarVldThd';


FordMsg459BusHiSpdTrlrRcvrTrackStVldThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.LongName = 'Trailer Track State Valid Recover Threshold ';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Track State Valid when t' ...
  'he message is present.'];
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.EngVal = 0;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.EngMin = 0;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.Online = false;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.Impact = 'H';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrRcvrTrackStVldThd.PortName = 'FordMsg459BusHiSpdTrlrRcvrTrackStVldThd';


FordMsg459BusHiSpdTrlrTarVldMissMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.LongName = 'Trailer Target Valid Miss Message Threshold';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Target Valid when the me' ...
  'ssage is missing.'];
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.EngVal = 5000;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.Online = false;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrTarVldMissMsgThd.PortName = 'FordMsg459BusHiSpdTrlrTarVldMissMsgThd';


FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.LongName = 'Trailer Track State Valid Invalid Message Threshold ';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Track State Valid when t' ...
  'he message is Invalid.'];
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.EngVal = 0;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.Online = false;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd.PortName = 'FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd';


FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd = DataDict.Calibration;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.LongName = 'Trailer Track State Valid Miss Message Threshold ';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.Description = [...
  'Threshold to  update the Ford Vehicle Trailer Track State Valid when t' ...
  'he message is missing.'];
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.DocUnits = 'MilliSec';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.EngDT = dt.u16;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.EngVal = 5000;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.EngMin = 0;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.EngMax = 6000;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.Cardinality = 'Cmn';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.CustomerVisible = false;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.Online = false;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.Impact = 'H';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.TuningOwner = 'EPDT';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.GraphLink = {''};
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.Monotony = 'None';
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.MaxGrad = 0;
FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd.PortName = 'FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd';



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


FordVehMsg459Miss = DataDict.PIM;
FordVehMsg459Miss.LongName = 'Ford Vehicle Message 459 Missing';
FordVehMsg459Miss.Description = [...
  'PIM used to identify whether the message is missing or not.'];
FordVehMsg459Miss.DocUnits = 'Cnt';
FordVehMsg459Miss.EngDT = dt.lgc;
FordVehMsg459Miss.EngMin = 0;
FordVehMsg459Miss.EngMax = 1;
FordVehMsg459Miss.InitRowCol = [1  1];


FordVehMsg459MissTmr = DataDict.PIM;
FordVehMsg459MissTmr.LongName = 'Ford Vehicle Message 459 Missing Timer';
FordVehMsg459MissTmr.Description = [...
  'PIM used to store the time related to missing message timer'];
FordVehMsg459MissTmr.DocUnits = 'Cnt';
FordVehMsg459MissTmr.EngDT = dt.u32;
FordVehMsg459MissTmr.EngMin = 0;
FordVehMsg459MissTmr.EngMax = 4294967295;
FordVehMsg459MissTmr.InitRowCol = [1  1];


FordVehMsg459RxdTmr = DataDict.PIM;
FordVehMsg459RxdTmr.LongName = 'Ford Vehicle Message 459 Received Timer';
FordVehMsg459RxdTmr.Description = [...
  'PIM used to store the time related to received message timer'];
FordVehMsg459RxdTmr.DocUnits = 'Cnt';
FordVehMsg459RxdTmr.EngDT = dt.u32;
FordVehMsg459RxdTmr.EngMin = 0;
FordVehMsg459RxdTmr.EngMax = 4294967295;
FordVehMsg459RxdTmr.InitRowCol = [1  1];


FordVehTrlrAidAcqStsPrev = DataDict.PIM;
FordVehTrlrAidAcqStsPrev.LongName = 'Ford Vehicle Trailer Aid Acquire Status Previous';
FordVehTrlrAidAcqStsPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrTrgtAcquire_D_Sta' ...
  't.  Elements are: 0 - "Cx0_Null"  1 -  "Cx1_TargetAcquired"2 - "Cx2_Ta' ...
  'rgetNotAcquired" 3 -   "Cx3_Processing"  4 -  "Cx4_RVCforTBA_Activated' ...
  '"  5 -  "Cx5_NotUsed_1"  6 - "Cx6_NotUsed_2" 7 -   "Cx7_Faulty"'];
FordVehTrlrAidAcqStsPrev.DocUnits = 'Cnt';
FordVehTrlrAidAcqStsPrev.EngDT = enum.Ford_TrlrTrgtAcquire_D_Stat;
FordVehTrlrAidAcqStsPrev.EngMin = Ford_TrlrTrgtAcquire_D_Stat.Cx0_Null;
FordVehTrlrAidAcqStsPrev.EngMax = Ford_TrlrTrgtAcquire_D_Stat.Cx7_Faulty;
FordVehTrlrAidAcqStsPrev.InitRowCol = [1  1];


FordVehTrlrAidGuidcRevsStsPrev = DataDict.PIM;
FordVehTrlrAidGuidcRevsStsPrev.LongName = 'Ford Vehicle Trailer Aid Trailer Reverse Guidance Status Previous';
FordVehTrlrAidGuidcRevsStsPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrRvrse_D_Stat.  El' ...
  'ements are: 0 - "Cx0_Off"  1 -  "Cx1_On"2 - "Cx2_TrailerReverseGuidanc' ...
  'eLite" 3 -  "Cx3_Faulty" '];
FordVehTrlrAidGuidcRevsStsPrev.DocUnits = 'Cnt';
FordVehTrlrAidGuidcRevsStsPrev.EngDT = enum.Ford_TrlrRvrse_D_Stat;
FordVehTrlrAidGuidcRevsStsPrev.EngMin = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidGuidcRevsStsPrev.EngMax = Ford_TrlrRvrse_D_Stat.Cx3_Faulty;
FordVehTrlrAidGuidcRevsStsPrev.InitRowCol = [1  1];


FordVehTrlrAidHitchAgPrev = DataDict.PIM;
FordVehTrlrAidHitchAgPrev.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Previous';
FordVehTrlrAidHitchAgPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_An3_Actl.Elem' ...
  'ents are: 0-2046 - "Regular Integer" , 2047 - "Cx7FF_Faulty"'];
FordVehTrlrAidHitchAgPrev.DocUnits = 'Cnt';
FordVehTrlrAidHitchAgPrev.EngDT = dt.u16;
FordVehTrlrAidHitchAgPrev.EngMin = 0;
FordVehTrlrAidHitchAgPrev.EngMax = 2047;
FordVehTrlrAidHitchAgPrev.InitRowCol = [1  1];


FordVehTrlrAidHitchAgRatePrev = DataDict.PIM;
FordVehTrlrAidHitchAgRatePrev.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Previous';
FordVehTrlrAidHitchAgRatePrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_AnRate2_Actl.' ...
  'Elements are: 0-1022 - "Regular Integer" , 1023 - "CxFF_Faulty"'];
FordVehTrlrAidHitchAgRatePrev.DocUnits = 'Cnt';
FordVehTrlrAidHitchAgRatePrev.EngDT = dt.u16;
FordVehTrlrAidHitchAgRatePrev.EngMin = 0;
FordVehTrlrAidHitchAgRatePrev.EngMax = 1023;
FordVehTrlrAidHitchAgRatePrev.InitRowCol = [1  1];


FordVehTrlrAidIdnValPrev = DataDict.PIM;
FordVehTrlrAidIdnValPrev.LongName = 'Ford Vehicle Trailer Aid Trailer Identification Value Previous';
FordVehTrlrAidIdnValPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAidTrgtId_No_Actl' ...
  '.Elements are: 0-31 - "Regular Integer"'];
FordVehTrlrAidIdnValPrev.DocUnits = 'Cnt';
FordVehTrlrAidIdnValPrev.EngDT = dt.u08;
FordVehTrlrAidIdnValPrev.EngMin = 0;
FordVehTrlrAidIdnValPrev.EngMax = 31;
FordVehTrlrAidIdnValPrev.InitRowCol = [1  1];


FordVehTrlrAidTrackStFaildTmr = DataDict.PIM;
FordVehTrlrAidTrackStFaildTmr.LongName = 'Ford Vehicle Trailer Aid Track State Failed Timer';
FordVehTrlrAidTrackStFaildTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrAidTrackSt Failed Ref' ...
  'erence Timer'];
FordVehTrlrAidTrackStFaildTmr.DocUnits = 'Cnt';
FordVehTrlrAidTrackStFaildTmr.EngDT = dt.u32;
FordVehTrlrAidTrackStFaildTmr.EngMin = 0;
FordVehTrlrAidTrackStFaildTmr.EngMax = 4294967295;
FordVehTrlrAidTrackStFaildTmr.InitRowCol = [1  1];


FordVehTrlrAidTrackStPassdTmr = DataDict.PIM;
FordVehTrlrAidTrackStPassdTmr.LongName = 'Ford Vehicle Trailer Aid Track State Passed Timer';
FordVehTrlrAidTrackStPassdTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrAidTrackSt Passed Ref' ...
  'erence Timer'];
FordVehTrlrAidTrackStPassdTmr.DocUnits = 'Cnt';
FordVehTrlrAidTrackStPassdTmr.EngDT = dt.u32;
FordVehTrlrAidTrackStPassdTmr.EngMin = 0;
FordVehTrlrAidTrackStPassdTmr.EngMax = 4294967295;
FordVehTrlrAidTrackStPassdTmr.InitRowCol = [1  1];


FordVehTrlrAidTrackStPrev = DataDict.PIM;
FordVehTrlrAidTrackStPrev.LongName = 'Ford Vehicle Trailer Aid Track State Previous';
FordVehTrlrAidTrackStPrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrAid_D2_Stat.  Ele' ...
  'ments are: 0 - "Cx0_NotTracking"  1 -  "Cx1_Initializing" 2 - "Cx2_Dri' ...
  'veStraighRequested"  3 - "Cx3_TurnRequested"  4 - "Cx4_TrackingLowConf' ...
  'idence" 5 -  "Cx5_TrackingMediumConfidence" 6 -"Cx6_TrackingHighConfid' ...
  'ence" 7 -  "Cx7_TrackingUnknownConfidence"  8 -  "Cx8_TrackingLost"  9' ...
  ' -  "Cx9_IncorrectLighting" 10 -  "CxA_DirtyCamera"  11 - "CxB_NotUsed' ...
  '_1" 12 -  "CxC_NotUsed_2" 13 - "CxD_NotUsed_3" 14 - "CxE_NotUsed_4" 15' ...
  ' - "CxF_Faulty" '];
FordVehTrlrAidTrackStPrev.DocUnits = 'Cnt';
FordVehTrlrAidTrackStPrev.EngDT = enum.Ford_TrlrAid_D2_Stat;
FordVehTrlrAidTrackStPrev.EngMin = Ford_TrlrAid_D2_Stat.Cx0_NotTracking;
FordVehTrlrAidTrackStPrev.EngMax = Ford_TrlrAid_D2_Stat.CxF_Faulty;
FordVehTrlrAidTrackStPrev.InitRowCol = [1  1];


FordVehTrlrBallToAxlePrev = DataDict.PIM;
FordVehTrlrBallToAxlePrev.LongName = 'Ford Vehicle Trailer Ball To Axle Previous';
FordVehTrlrBallToAxlePrev.Description = [...
  'Customer datatype should be used. Datatype: Ford_HitchToVehAxle_L_Calc' ...
  'Elements are: 0-254 - "Regular Integer" , 255 - "CxFF_Faulty"'];
FordVehTrlrBallToAxlePrev.DocUnits = 'Cnt';
FordVehTrlrBallToAxlePrev.EngDT = dt.u08;
FordVehTrlrBallToAxlePrev.EngMin = 0;
FordVehTrlrBallToAxlePrev.EngMax = 255;
FordVehTrlrBallToAxlePrev.InitRowCol = [1  1];


FordVehTrlrHitchAgFaildTmr = DataDict.PIM;
FordVehTrlrHitchAgFaildTmr.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Failed Timer';
FordVehTrlrHitchAgFaildTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrHitchAg Failed Refere' ...
  'nce Timer'];
FordVehTrlrHitchAgFaildTmr.DocUnits = 'Cnt';
FordVehTrlrHitchAgFaildTmr.EngDT = dt.u32;
FordVehTrlrHitchAgFaildTmr.EngMin = 0;
FordVehTrlrHitchAgFaildTmr.EngMax = 4294967295;
FordVehTrlrHitchAgFaildTmr.InitRowCol = [1  1];


FordVehTrlrHitchAgPassdTmr = DataDict.PIM;
FordVehTrlrHitchAgPassdTmr.LongName = 'Ford Vehicle Trailer Hitch Angle Passed Timer';
FordVehTrlrHitchAgPassdTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrHitchAg Passed Refere' ...
  'nce Timer'];
FordVehTrlrHitchAgPassdTmr.DocUnits = 'Cnt';
FordVehTrlrHitchAgPassdTmr.EngDT = dt.u32;
FordVehTrlrHitchAgPassdTmr.EngMin = 0;
FordVehTrlrHitchAgPassdTmr.EngMax = 4294967295;
FordVehTrlrHitchAgPassdTmr.InitRowCol = [1  1];


FordVehTrlrHitchAgRateFaildTmr = DataDict.PIM;
FordVehTrlrHitchAgRateFaildTmr.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Failed Timer';
FordVehTrlrHitchAgRateFaildTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrHitchAgRate Failed Re' ...
  'ference Timer'];
FordVehTrlrHitchAgRateFaildTmr.DocUnits = 'Cnt';
FordVehTrlrHitchAgRateFaildTmr.EngDT = dt.u32;
FordVehTrlrHitchAgRateFaildTmr.EngMin = 0;
FordVehTrlrHitchAgRateFaildTmr.EngMax = 4294967295;
FordVehTrlrHitchAgRateFaildTmr.InitRowCol = [1  1];


FordVehTrlrHitchAgRatePassdTmr = DataDict.PIM;
FordVehTrlrHitchAgRatePassdTmr.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Passed Timer';
FordVehTrlrHitchAgRatePassdTmr.Description = [...
  'PIM used to store the time related to FordVehTrlrHitchAgRate Passed Re' ...
  'ference Timer'];
FordVehTrlrHitchAgRatePassdTmr.DocUnits = 'Cnt';
FordVehTrlrHitchAgRatePassdTmr.EngDT = dt.u32;
FordVehTrlrHitchAgRatePassdTmr.EngMin = 0;
FordVehTrlrHitchAgRatePassdTmr.EngMax = 4294967295;
FordVehTrlrHitchAgRatePassdTmr.InitRowCol = [1  1];


FordVehTrlrHitchAgVldPrev = DataDict.PIM;
FordVehTrlrHitchAgVldPrev.LongName = 'Ford Vehicle Trailer Hitch Angle Valid Previous';
FordVehTrlrHitchAgVldPrev.Description = [...
  'PIM used for Ford Vehicle Trailer Hitch Angle Valid Previous value.'];
FordVehTrlrHitchAgVldPrev.DocUnits = 'Cnt';
FordVehTrlrHitchAgVldPrev.EngDT = dt.lgc;
FordVehTrlrHitchAgVldPrev.EngMin = 0;
FordVehTrlrHitchAgVldPrev.EngMax = 1;
FordVehTrlrHitchAgVldPrev.InitRowCol = [1  1];


FordVehTrlrHitchRateVldPrev = DataDict.PIM;
FordVehTrlrHitchRateVldPrev.LongName = 'Ford Vehicle Trailer Hitch Rate Valid Previous';
FordVehTrlrHitchRateVldPrev.Description = [...
  'PIM used for Ford Vehicle Trailer Hitch Rate Valid Previous value.'];
FordVehTrlrHitchRateVldPrev.DocUnits = 'Cnt';
FordVehTrlrHitchRateVldPrev.EngDT = dt.lgc;
FordVehTrlrHitchRateVldPrev.EngMin = 0;
FordVehTrlrHitchRateVldPrev.EngMax = 1;
FordVehTrlrHitchRateVldPrev.InitRowCol = [1  1];


FordVehTrlrTarVldPrev = DataDict.PIM;
FordVehTrlrTarVldPrev.LongName = 'Ford Vehicle Trailer Target Valid Previous';
FordVehTrlrTarVldPrev.Description = [...
  'PIM used for Ford Vehicle Trailer Target Valid Previous value.'];
FordVehTrlrTarVldPrev.DocUnits = 'Cnt';
FordVehTrlrTarVldPrev.EngDT = dt.lgc;
FordVehTrlrTarVldPrev.EngMin = 0;
FordVehTrlrTarVldPrev.EngMax = 1;
FordVehTrlrTarVldPrev.InitRowCol = [1  1];


FordVehTrlrTrackStVldPrev = DataDict.PIM;
FordVehTrlrTrackStVldPrev.LongName = 'Ford Vehicle Trailer Track State Valid Previous';
FordVehTrlrTrackStVldPrev.Description = [...
  'PIM used for Ford Vehicle Trailer Track State Valid Previous value.'];
FordVehTrlrTrackStVldPrev.DocUnits = 'Cnt';
FordVehTrlrTrackStVldPrev.EngDT = dt.lgc;
FordVehTrlrTrackStVldPrev.EngMin = 0;
FordVehTrlrTrackStVldPrev.EngMax = 1;
FordVehTrlrTrackStVldPrev.InitRowCol = [1  1];


TrlrAidStsThreePrsntIntPrev = DataDict.PIM;
TrlrAidStsThreePrsntIntPrev.LongName = 'Trailer Aid Status Three Present Internal Previous';
TrlrAidStsThreePrsntIntPrev.Description = [...
  'PIM used for Trailer Aid Status Three Present Internal Previous value.' ...
  ''];
TrlrAidStsThreePrsntIntPrev.DocUnits = 'Cnt';
TrlrAidStsThreePrsntIntPrev.EngDT = dt.lgc;
TrlrAidStsThreePrsntIntPrev.EngMin = 0;
TrlrAidStsThreePrsntIntPrev.EngMax = 1;
TrlrAidStsThreePrsntIntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BALLTOAXLEINIT_CNT_U8 = DataDict.Constant;
BALLTOAXLEINIT_CNT_U8.LongName = 'Ball to Axle Initialization';
BALLTOAXLEINIT_CNT_U8.Description = [...
  ' Initialization for Ball to Axle PIMs'];
BALLTOAXLEINIT_CNT_U8.DocUnits = 'Cnt';
BALLTOAXLEINIT_CNT_U8.EngDT = dt.u08;
BALLTOAXLEINIT_CNT_U8.EngVal = 255;
BALLTOAXLEINIT_CNT_U8.Define = 'Local';


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
  ''];
DIAGENA_CNT_LGC.DocUnits = 'Cnt';
DIAGENA_CNT_LGC.EngDT = dt.lgc;
DIAGENA_CNT_LGC.EngVal = 0;
DIAGENA_CNT_LGC.Define = 'Local';


FEATACTV_CNT_LGC = DataDict.Constant;
FEATACTV_CNT_LGC.LongName = 'Feature Active';
FEATACTV_CNT_LGC.Description = [...
  'To check whether the feature is active'];
FEATACTV_CNT_LGC.DocUnits = 'Cnt';
FEATACTV_CNT_LGC.EngDT = dt.lgc;
FEATACTV_CNT_LGC.EngVal = 1;
FEATACTV_CNT_LGC.Define = 'Local';


FORDVEHTRLRAIDHITCHAGMAX_CNT_U16 = DataDict.Constant;
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Maximum';
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.Description = [...
  ' Ford Vehicle Trailer Aid Hitch Angle Maximum'];
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.EngDT = dt.u16;
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.EngVal = 2047;
FORDVEHTRLRAIDHITCHAGMAX_CNT_U16.Define = 'Local';


FORDVEHTRLRAIDHITCHAGMIN_CNT_U16 = DataDict.Constant;
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Maximum';
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.Description = [...
  ' Ford Vehicle Trailer Aid Hitch Angle Minimum'];
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.EngDT = dt.u16;
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.EngVal = 0;
FORDVEHTRLRAIDHITCHAGMIN_CNT_U16.Define = 'Local';


FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16 = DataDict.Constant;
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum';
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.Description = [...
  'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum'];
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.EngDT = dt.u16;
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.EngVal = 1023;
FORDVEHTRLRAIDHITCHAGRATEMAX_CNT_U16.Define = 'Local';


FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16 = DataDict.Constant;
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum';
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.Description = [...
  'Ford Vehicle Trailer Aid Hitch Angle Rate Minimum'];
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.EngDT = dt.u16;
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.EngVal = 0;
FORDVEHTRLRAIDHITCHAGRATEMIN_CNT_U16.Define = 'Local';


FORDVEHTRLRAIDIDNVALMAX_CNT_U8 = DataDict.Constant;
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Maximum';
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.Description = [...
  ' Ford Vehicle Trailer Aid Hitch Angle Maximum'];
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.DocUnits = 'Cnt';
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.EngDT = dt.u08;
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.EngVal = 31;
FORDVEHTRLRAIDIDNVALMAX_CNT_U8.Define = 'Local';


FORDVEHTRLRAIDIDNVALMIN_CNT_U8 = DataDict.Constant;
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Maximum';
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.Description = [...
  ' Ford Vehicle Trailer Aid Hitch Angle Minimum'];
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.DocUnits = 'Cnt';
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.EngDT = dt.u08;
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.EngVal = 0;
FORDVEHTRLRAIDIDNVALMIN_CNT_U8.Define = 'Local';


FORDVEHTRLRBALLTOAXLEMAX_CNT_U8 = DataDict.Constant;
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum';
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.Description = [...
  'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum'];
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.DocUnits = 'Cnt';
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.EngDT = dt.u08;
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.EngVal = 255;
FORDVEHTRLRBALLTOAXLEMAX_CNT_U8.Define = 'Local';


FORDVEHTRLRBALLTOAXLEMIN_CNT_U8 = DataDict.Constant;
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Maximum';
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.Description = [...
  'Ford Vehicle Trailer Aid Hitch Angle Rate Minimum'];
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.DocUnits = 'Cnt';
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.EngDT = dt.u08;
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.EngVal = 0;
FORDVEHTRLRBALLTOAXLEMIN_CNT_U8.Define = 'Local';


HITCHAGINIT_CNT_U16 = DataDict.Constant;
HITCHAGINIT_CNT_U16.LongName = 'Hitch Angle Initialization';
HITCHAGINIT_CNT_U16.Description = [...
  ' Initialization for Hitch Angle PIMs'];
HITCHAGINIT_CNT_U16.DocUnits = 'Cnt';
HITCHAGINIT_CNT_U16.EngDT = dt.u16;
HITCHAGINIT_CNT_U16.EngVal = 720;
HITCHAGINIT_CNT_U16.Define = 'Local';


HITCHAGRATEINIT_CNT_U16 = DataDict.Constant;
HITCHAGRATEINIT_CNT_U16.LongName = 'Hitch Angle Initialization';
HITCHAGRATEINIT_CNT_U16.Description = [...
  ' Initialization for Hitch Angle PIMs'];
HITCHAGRATEINIT_CNT_U16.DocUnits = 'Cnt';
HITCHAGRATEINIT_CNT_U16.EngDT = dt.u16;
HITCHAGRATEINIT_CNT_U16.EngVal = 400;
HITCHAGRATEINIT_CNT_U16.Define = 'Local';


MODSEL_CNT_LGC = DataDict.Constant;
MODSEL_CNT_LGC.LongName = 'Mode Select';
MODSEL_CNT_LGC.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the Electric Power Steering Life Cycle Mode.'];
MODSEL_CNT_LGC.DocUnits = 'Cnt';
MODSEL_CNT_LGC.EngDT = dt.lgc;
MODSEL_CNT_LGC.EngVal = 1;
MODSEL_CNT_LGC.Define = 'Local';


PREVINIT_CNT_U8 = DataDict.Constant;
PREVINIT_CNT_U8.LongName = 'Previous Initialization';
PREVINIT_CNT_U8.Description = [...
  ' Initialization for outputs and PIMs'];
PREVINIT_CNT_U8.DocUnits = 'Cnt';
PREVINIT_CNT_U8.EngDT = dt.u08;
PREVINIT_CNT_U8.EngVal = 0;
PREVINIT_CNT_U8.Define = 'Local';


VALIDINIT_CNT_LGC = DataDict.Constant;
VALIDINIT_CNT_LGC.LongName = 'Valid Initialization';
VALIDINIT_CNT_LGC.Description = [...
  'Initialization of Previous Value PIMs'];
VALIDINIT_CNT_LGC.DocUnits = 'Cnt';
VALIDINIT_CNT_LGC.EngDT = dt.lgc;
VALIDINIT_CNT_LGC.EngVal = 0;
VALIDINIT_CNT_LGC.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg459MissMsg = DataDict.NTC;
FordMsg459MissMsg.NtcNr = NtcNr1.NTCNR_0X1A4;
FordMsg459MissMsg.NtcTyp = 'None';
FordMsg459MissMsg.LongName = 'Ford Message 459 Missing Message';
FordMsg459MissMsg.Description = 'Ford Message 459 Missing Message Diagnostic';
FordMsg459MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg459MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg459MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg459MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehTrlrAidHitchAgInvld = DataDict.NTC;
FordVehTrlrAidHitchAgInvld.NtcNr = NtcNr1.NTCNR_0X1A7;
FordVehTrlrAidHitchAgInvld.NtcTyp = 'None';
FordVehTrlrAidHitchAgInvld.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Invalid';
FordVehTrlrAidHitchAgInvld.Description = 'Ford Vehicle Trailer Aid Hitch Angle Invalid';
FordVehTrlrAidHitchAgInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehTrlrAidHitchAgInvld.NtcStsLockdThisIgnCyc = 0;


FordVehTrlrAidHitchAgRateInvld = DataDict.NTC;
FordVehTrlrAidHitchAgRateInvld.NtcNr = NtcNr1.NTCNR_0X1A5;
FordVehTrlrAidHitchAgRateInvld.NtcTyp = 'None';
FordVehTrlrAidHitchAgRateInvld.LongName = 'Ford Vehicle Trailer Aid Hitch Angle Rate Invalid';
FordVehTrlrAidHitchAgRateInvld.Description = 'Ford Vehicle Trailer Aid Hitch Angle Rate Invalid';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehTrlrAidHitchAgRateInvld.NtcStsLockdThisIgnCyc = 0;


FordVehTrlrAidTrackStInvld = DataDict.NTC;
FordVehTrlrAidTrackStInvld.NtcNr = NtcNr1.NTCNR_0X1A6;
FordVehTrlrAidTrackStInvld.NtcTyp = 'None';
FordVehTrlrAidTrackStInvld.LongName = 'Ford Vehicle Trailer Aid Track State Invalid';
FordVehTrlrAidTrackStInvld.Description = 'Ford Vehicle Trailer Aid Track State Invalid';
FordVehTrlrAidTrackStInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehTrlrAidTrackStInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
