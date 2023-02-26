%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Mar-2018 13:12:07       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM077A = DataDict.FDD;
MM077A.Version = '3.1.X';
MM077A.LongName = 'Ford Message 415 Bus High Speed';
MM077A.ShoName  = 'FordMsg415BusHiSpd';
MM077A.DesignASIL = 'B';
MM077A.Description = [...
  'The purpose of the Ford Message 415 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering systemwith signal values for vehicle s' ...
  'peed and the Trailer Back Up Assist function from CAN. The Ford Messag' ...
  'e 415function will perform the missing message and signal invalid diag' ...
  'nostics as well as provide a validity signalfor the signal values and ' ...
  'received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg415BusHiSpdInit1 = DataDict.Runnable;
FordMsg415BusHiSpdInit1.Context = 'Rte';
FordMsg415BusHiSpdInit1.TimeStep = 0;
FordMsg415BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg415BusHiSpdPer1 = DataDict.Runnable;
FordMsg415BusHiSpdPer1.Context = 'Rte';
FordMsg415BusHiSpdPer1.TimeStep = 0.01;
FordMsg415BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_BrakeSysFeatures_HS2 = DataDict.SrvRunnable;
ComIPduCallout_BrakeSysFeatures_HS2.Context = 'NonRte';
ComIPduCallout_BrakeSysFeatures_HS2.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_BrakeSysFeatures_HS2.Return = DataDict.CSReturn;
ComIPduCallout_BrakeSysFeatures_HS2.Return.Type = 'None';
ComIPduCallout_BrakeSysFeatures_HS2.Return.Min = [];
ComIPduCallout_BrakeSysFeatures_HS2.Return.Max = [];
ComIPduCallout_BrakeSysFeatures_HS2.Return.TestTolerance = [];
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).Name = 'BrakeSysFeatures';
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_BrakeSysFeatures_HS2.Arguments(1).Description = [...
  'Argument BrakeSysFeatures set to true once this server runnable is cal' ...
  'led'];

ComTimeoutNotification_Veh_V_ActlBrk = DataDict.SrvRunnable;
ComTimeoutNotification_Veh_V_ActlBrk.Context = 'NonRte';
ComTimeoutNotification_Veh_V_ActlBrk.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_Veh_V_ActlBrk.Return = DataDict.CSReturn;
ComTimeoutNotification_Veh_V_ActlBrk.Return.Type = 'None';
ComTimeoutNotification_Veh_V_ActlBrk.Return.Min = [];
ComTimeoutNotification_Veh_V_ActlBrk.Return.Max = [];
ComTimeoutNotification_Veh_V_ActlBrk.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg415BusHiSpdInit1','FordMsg415BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg415BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg415BusHiSpdPer1'};
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
ClrDiagcFlgProxy.LongName = 'ClrDiagcFlgProxy Inhibit';
ClrDiagcFlgProxy.Description = [...
  'When ClrDiagcFlgProxy is True, Diagnostic test is performed'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg415BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordAbsPrsnt = DataDict.IpSignal;
FordAbsPrsnt.LongName = 'ABS Present';
FordAbsPrsnt.Description = [...
  'This signal is set to 1 in order to set the missing NTC to pass or fai' ...
  'l'];
FordAbsPrsnt.DocUnits = 'Cnt';
FordAbsPrsnt.EngDT = dt.lgc;
FordAbsPrsnt.EngInit = 0;
FordAbsPrsnt.EngMin = 0;
FordAbsPrsnt.EngMax = 1;
FordAbsPrsnt.ReadIn = {'FordMsg415BusHiSpdPer1'};
FordAbsPrsnt.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg415BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg415BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordInvldMsgDiagcInhb = DataDict.IpSignal;
FordInvldMsgDiagcInhb.LongName = 'Ford Invalid Message Diagnostics Inhibit';
FordInvldMsgDiagcInhb.Description = [...
  'When Invalid Message Diagnostics Inhibit is False, Diagnostic test is ' ...
  'performed'];
FordInvldMsgDiagcInhb.DocUnits = 'Cnt';
FordInvldMsgDiagcInhb.EngDT = dt.u08;
FordInvldMsgDiagcInhb.EngInit = 0;
FordInvldMsgDiagcInhb.EngMin = 0;
FordInvldMsgDiagcInhb.EngMax = 1;
FordInvldMsgDiagcInhb.ReadIn = {'FordMsg415BusHiSpdPer1'};
FordInvldMsgDiagcInhb.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Manufacturing Diagnostics Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Manufacturing Diagnostics Inhibit is False, Diagnostic test is pe' ...
  'rformed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg415BusHiSpdPer1'};
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
FordMissMsgDiagcInhb.ReadIn = {'FordMsg415BusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'This signal is set to 1 in order to set the missing NTC to pass or fai' ...
  'l'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg415BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_LsmcBrkDecel_D_Stat1 = DataDict.IpSignal;
Ford_LsmcBrkDecel_D_Stat1.LongName = 'Low Speed Motion Control Brake Support Status';
Ford_LsmcBrkDecel_D_Stat1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_LsmcBrkDecel_D_Stat1.DocUnits = 'Cnt';
Ford_LsmcBrkDecel_D_Stat1.EngDT = enum.Ford_LsmcBrkDecel_D_Stat;
Ford_LsmcBrkDecel_D_Stat1.EngInit = Ford_LsmcBrkDecel_D_Stat.Cx0_Off;
Ford_LsmcBrkDecel_D_Stat1.EngMin = Ford_LsmcBrkDecel_D_Stat.Cx0_Off;
Ford_LsmcBrkDecel_D_Stat1.EngMax = Ford_LsmcBrkDecel_D_Stat.Cx7_NotUsed_3;
Ford_LsmcBrkDecel_D_Stat1.ReadIn = {'FordMsg415BusHiSpdPer1'};
Ford_LsmcBrkDecel_D_Stat1.ReadType = 'Rte';


Ford_VehVActlBrk_D_Qf1 = DataDict.IpSignal;
Ford_VehVActlBrk_D_Qf1.LongName = 'Vehicle Speed Quality Factor Brake Module';
Ford_VehVActlBrk_D_Qf1.Description = [...
  'This signal contributes in calculation of checksum alongwith VehSpdBrk' ...
  'Modlsignal and VehSpdCntrBrkModl signal'];
Ford_VehVActlBrk_D_Qf1.DocUnits = 'Cnt';
Ford_VehVActlBrk_D_Qf1.EngDT = enum.Ford_VehVActlBrk_D_Qf;
Ford_VehVActlBrk_D_Qf1.EngInit = Ford_VehVActlBrk_D_Qf.Cx0_Faulty;
Ford_VehVActlBrk_D_Qf1.EngMin = Ford_VehVActlBrk_D_Qf.Cx0_Faulty;
Ford_VehVActlBrk_D_Qf1.EngMax = Ford_VehVActlBrk_D_Qf.Cx3_OK;
Ford_VehVActlBrk_D_Qf1.ReadIn = {'FordMsg415BusHiSpdPer1'};
Ford_VehVActlBrk_D_Qf1.ReadType = 'Rte';


Ford_VehVActlBrk_No_Cnt = DataDict.IpSignal;
Ford_VehVActlBrk_No_Cnt.LongName = 'Vehicle Speed Counter Brake Module';
Ford_VehVActlBrk_No_Cnt.Description = [...
  'This signal contributes in calculation of checksum alongwith VehSpdBrk' ...
  'Modlsignal and VehSpdQlyFacBrkModl signal'];
Ford_VehVActlBrk_No_Cnt.DocUnits = 'Cnt';
Ford_VehVActlBrk_No_Cnt.EngDT = dt.u08;
Ford_VehVActlBrk_No_Cnt.EngInit = 0;
Ford_VehVActlBrk_No_Cnt.EngMin = 0;
Ford_VehVActlBrk_No_Cnt.EngMax = 15;
Ford_VehVActlBrk_No_Cnt.ReadIn = {'FordMsg415BusHiSpdPer1'};
Ford_VehVActlBrk_No_Cnt.ReadType = 'Rte';


Ford_VehVActlBrk_No_Cs = DataDict.IpSignal;
Ford_VehVActlBrk_No_Cs.LongName = 'Vehicle Speed Checksum Brake Module';
Ford_VehVActlBrk_No_Cs.Description = [...
  'This signal is compared with calculated checksum in order to set thech' ...
  'ecksum flag to set/reset the checksum NTC'];
Ford_VehVActlBrk_No_Cs.DocUnits = 'Cnt';
Ford_VehVActlBrk_No_Cs.EngDT = dt.u08;
Ford_VehVActlBrk_No_Cs.EngInit = 0;
Ford_VehVActlBrk_No_Cs.EngMin = 0;
Ford_VehVActlBrk_No_Cs.EngMax = 255;
Ford_VehVActlBrk_No_Cs.ReadIn = {'FordMsg415BusHiSpdPer1'};
Ford_VehVActlBrk_No_Cs.ReadType = 'Rte';


Ford_Veh_V_ActlBrk = DataDict.IpSignal;
Ford_Veh_V_ActlBrk.LongName = 'Vehicle Speed Brake Module';
Ford_Veh_V_ActlBrk.Description = [...
  'This signal is used to calculate the checksum signal'];
Ford_Veh_V_ActlBrk.DocUnits = 'Cnt';
Ford_Veh_V_ActlBrk.EngDT = dt.u16;
Ford_Veh_V_ActlBrk.EngInit = 0;
Ford_Veh_V_ActlBrk.EngMin = 0;
Ford_Veh_V_ActlBrk.EngMax = 65535;
Ford_Veh_V_ActlBrk.ReadIn = {'FordMsg415BusHiSpdPer1'};
Ford_Veh_V_ActlBrk.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehLoSpdMtnCtrlBrkSprtSts = DataDict.OpSignal;
FordVehLoSpdMtnCtrlBrkSprtSts.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Status';
FordVehLoSpdMtnCtrlBrkSprtSts.Description = [...
  'Processed value of Low Speed Motion Control Brake Support to be used b' ...
  'y EPS'];
FordVehLoSpdMtnCtrlBrkSprtSts.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtSts.SwcShoName = 'FordMsg415BusHiSpd';
FordVehLoSpdMtnCtrlBrkSprtSts.EngDT = enum.Ford_LsmcBrkDecel_D_Stat;
FordVehLoSpdMtnCtrlBrkSprtSts.EngInit = Ford_LsmcBrkDecel_D_Stat.Cx0_Off;
FordVehLoSpdMtnCtrlBrkSprtSts.EngMin = Ford_LsmcBrkDecel_D_Stat.Cx0_Off;
FordVehLoSpdMtnCtrlBrkSprtSts.EngMax = Ford_LsmcBrkDecel_D_Stat.Cx7_NotUsed_3;
FordVehLoSpdMtnCtrlBrkSprtSts.TestTolerance = 0;
FordVehLoSpdMtnCtrlBrkSprtSts.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehLoSpdMtnCtrlBrkSprtSts.WriteType = 'Rte';


FordVehLoSpdMtnCtrlBrkSprtStsRaw = DataDict.OpSignal;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Status Raw';
FordVehLoSpdMtnCtrlBrkSprtStsRaw.Description = [...
  'Low Speed Motion Control Brake Support Status is assigned to Ford Vehi' ...
  'cleLow Speed Motion Control Brake Support Status Raw to be used by EPS' ...
  ''];
FordVehLoSpdMtnCtrlBrkSprtStsRaw.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtStsRaw.SwcShoName = 'FordMsg415BusHiSpd';
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngDT = dt.u08;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngInit = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngMax = 7;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.TestTolerance = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehLoSpdMtnCtrlBrkSprtStsRaw.WriteType = 'Rte';


FordVehLoSpdMtnCtrlBrkSprtVld = DataDict.OpSignal;
FordVehLoSpdMtnCtrlBrkSprtVld.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Valid';
FordVehLoSpdMtnCtrlBrkSprtVld.Description = [...
  'This signal Check the validity of Ford Vehicle Low Speed Motion Contro' ...
  'lBrake Support signal'];
FordVehLoSpdMtnCtrlBrkSprtVld.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtVld.SwcShoName = 'FordMsg415BusHiSpd';
FordVehLoSpdMtnCtrlBrkSprtVld.EngDT = dt.lgc;
FordVehLoSpdMtnCtrlBrkSprtVld.EngInit = 0;
FordVehLoSpdMtnCtrlBrkSprtVld.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtVld.EngMax = 1;
FordVehLoSpdMtnCtrlBrkSprtVld.TestTolerance = 0;
FordVehLoSpdMtnCtrlBrkSprtVld.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehLoSpdMtnCtrlBrkSprtVld.WriteType = 'Rte';


FordVehSpdBrkModl = DataDict.OpSignal;
FordVehSpdBrkModl.LongName = 'Ford Vehicle Speed Brake Module';
FordVehSpdBrkModl.Description = [...
  'Processed value of Vehicle Speed Brake Module to be used by EPS'];
FordVehSpdBrkModl.DocUnits = 'Kph';
FordVehSpdBrkModl.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdBrkModl.EngDT = dt.float32;
FordVehSpdBrkModl.EngInit = 0;
FordVehSpdBrkModl.EngMin = 0;
FordVehSpdBrkModl.EngMax = 655.35;
FordVehSpdBrkModl.TestTolerance = 0.005;
FordVehSpdBrkModl.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdBrkModl.WriteType = 'Rte';


FordVehSpdBrkModlLoQlyVld = DataDict.OpSignal;
FordVehSpdBrkModlLoQlyVld.LongName = 'Ford Vehicle Speed Brake Module Low Quality Valid';
FordVehSpdBrkModlLoQlyVld.Description = [...
  'This output tells if the value for Ford Vehicle Speed Brake Module Low' ...
  ' Quality is valid or not'];
FordVehSpdBrkModlLoQlyVld.DocUnits = 'Cnt';
FordVehSpdBrkModlLoQlyVld.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdBrkModlLoQlyVld.EngDT = dt.lgc;
FordVehSpdBrkModlLoQlyVld.EngInit = 0;
FordVehSpdBrkModlLoQlyVld.EngMin = 0;
FordVehSpdBrkModlLoQlyVld.EngMax = 1;
FordVehSpdBrkModlLoQlyVld.TestTolerance = 0;
FordVehSpdBrkModlLoQlyVld.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdBrkModlLoQlyVld.WriteType = 'Rte';


FordVehSpdBrkModlRaw = DataDict.OpSignal;
FordVehSpdBrkModlRaw.LongName = 'Ford Vehicle Speed Brake Module Raw';
FordVehSpdBrkModlRaw.Description = [...
  'Vehicle Speed Brake Module is assigned to Ford Vehicle Speed BrakeModu' ...
  'le Raw to be used by EPS'];
FordVehSpdBrkModlRaw.DocUnits = 'Cnt';
FordVehSpdBrkModlRaw.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdBrkModlRaw.EngDT = dt.u16;
FordVehSpdBrkModlRaw.EngInit = 0;
FordVehSpdBrkModlRaw.EngMin = 0;
FordVehSpdBrkModlRaw.EngMax = 65535;
FordVehSpdBrkModlRaw.TestTolerance = 0;
FordVehSpdBrkModlRaw.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdBrkModlRaw.WriteType = 'Rte';


FordVehSpdBrkModlVld = DataDict.OpSignal;
FordVehSpdBrkModlVld.LongName = 'Ford Vehicle Speed Brake Module Valid';
FordVehSpdBrkModlVld.Description = [...
  'This output tells if the value for Ford Vehicle PSpeed Brake Moduleis ' ...
  'valid or not'];
FordVehSpdBrkModlVld.DocUnits = 'Cnt';
FordVehSpdBrkModlVld.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdBrkModlVld.EngDT = dt.lgc;
FordVehSpdBrkModlVld.EngInit = 0;
FordVehSpdBrkModlVld.EngMin = 0;
FordVehSpdBrkModlVld.EngMax = 1;
FordVehSpdBrkModlVld.TestTolerance = 0;
FordVehSpdBrkModlVld.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdBrkModlVld.WriteType = 'Rte';


FordVehSpdChksBrkModl = DataDict.OpSignal;
FordVehSpdChksBrkModl.LongName = 'Ford Vehicle Speed Checksum Brake Module';
FordVehSpdChksBrkModl.Description = [...
  'Calculated by using the least significant 8 bits of the sum of the lea' ...
  'stsignificant 8 bits of the Vehicle Speed Brake Module signal checksum' ...
  ' andleast significant 8 bits of the Vehicle Speed Counter Brake Module' ...
  ' signalchecksum and the least significant 8 bits of the Vehicle Speed ' ...
  'QualityFactor Brake Module signal checksum'];
FordVehSpdChksBrkModl.DocUnits = 'Cnt';
FordVehSpdChksBrkModl.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdChksBrkModl.EngDT = dt.u08;
FordVehSpdChksBrkModl.EngInit = 0;
FordVehSpdChksBrkModl.EngMin = 0;
FordVehSpdChksBrkModl.EngMax = 255;
FordVehSpdChksBrkModl.TestTolerance = 0;
FordVehSpdChksBrkModl.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdChksBrkModl.WriteType = 'Rte';


FordVehSpdCntrBrkModl = DataDict.OpSignal;
FordVehSpdCntrBrkModl.LongName = 'Ford Vehicle Speed Counter Brake Module';
FordVehSpdCntrBrkModl.Description = [...
  'Vehicle Speed Counter Brake Module is assigned to Ford Vehicle SpeedCo' ...
  'unter Brake Module to be used by EPS'];
FordVehSpdCntrBrkModl.DocUnits = 'Cnt';
FordVehSpdCntrBrkModl.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdCntrBrkModl.EngDT = dt.u08;
FordVehSpdCntrBrkModl.EngInit = 0;
FordVehSpdCntrBrkModl.EngMin = 0;
FordVehSpdCntrBrkModl.EngMax = 15;
FordVehSpdCntrBrkModl.TestTolerance = 0;
FordVehSpdCntrBrkModl.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdCntrBrkModl.WriteType = 'Rte';


FordVehSpdQlyFacBrkModl = DataDict.OpSignal;
FordVehSpdQlyFacBrkModl.LongName = 'Ford Vehicle Speed Quality Factor Brake Module';
FordVehSpdQlyFacBrkModl.Description = [...
  'Processed value of Vehicle Speed Quality Factor Brake Module to be use' ...
  'dby EPS'];
FordVehSpdQlyFacBrkModl.DocUnits = 'Cnt';
FordVehSpdQlyFacBrkModl.SwcShoName = 'FordMsg415BusHiSpd';
FordVehSpdQlyFacBrkModl.EngDT = enum.Ford_VehVActlBrk_D_Qf;
FordVehSpdQlyFacBrkModl.EngInit = Ford_VehVActlBrk_D_Qf.Cx3_OK;
FordVehSpdQlyFacBrkModl.EngMin = Ford_VehVActlBrk_D_Qf.Cx0_Faulty;
FordVehSpdQlyFacBrkModl.EngMax = Ford_VehVActlBrk_D_Qf.Cx3_OK;
FordVehSpdQlyFacBrkModl.TestTolerance = 0;
FordVehSpdQlyFacBrkModl.WrittenIn = {'FordMsg415BusHiSpdPer1'};
FordVehSpdQlyFacBrkModl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Low Quality Valid Failed Threshold';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlLoQlyVld to False'];
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.Online = false;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd.PortName = 'FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd';


FordMsg415BusHiSpdBrkModlLoQlyVldMissThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Low Quality Valid Missing Threshold';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlLoQlyVld to False'];
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.Online = false;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldMissThd.PortName = 'FordMsg415BusHiSpdBrkModlLoQlyVldMissThd';


FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Low Quality Valid Passed Threshold';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlLoQlyVld to True'];
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.Online = false;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd.PortName = 'FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd';


FordMsg415BusHiSpdBrkModlVldFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlVldFaildThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Valid Failed Threshold';
FordMsg415BusHiSpdBrkModlVldFaildThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlVld to False'];
FordMsg415BusHiSpdBrkModlVldFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlVldFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlVldFaildThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlVldFaildThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlVldFaildThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlVldFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlVldFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlVldFaildThd.Online = false;
FordMsg415BusHiSpdBrkModlVldFaildThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlVldFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlVldFaildThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlVldFaildThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlVldFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlVldFaildThd.PortName = 'FordMsg415BusHiSpdBrkModlVldFaildThd';


FordMsg415BusHiSpdBrkModlVldMissThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlVldMissThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Valid Missing Threshold';
FordMsg415BusHiSpdBrkModlVldMissThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlVld to False'];
FordMsg415BusHiSpdBrkModlVldMissThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlVldMissThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlVldMissThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlVldMissThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlVldMissThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlVldMissThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlVldMissThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlVldMissThd.Online = false;
FordMsg415BusHiSpdBrkModlVldMissThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlVldMissThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlVldMissThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlVldMissThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlVldMissThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlVldMissThd.PortName = 'FordMsg415BusHiSpdBrkModlVldMissThd';


FordMsg415BusHiSpdBrkModlVldPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkModlVldPassdThd.LongName = 'Ford Message 415 Bus High Speed Brake Module Valid Passed Threshold';
FordMsg415BusHiSpdBrkModlVldPassdThd.Description = [...
  'Threshold to set the FordVehSpdBrkModlVld to True'];
FordMsg415BusHiSpdBrkModlVldPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkModlVldPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkModlVldPassdThd.EngVal = 0;
FordMsg415BusHiSpdBrkModlVldPassdThd.EngMin = 0;
FordMsg415BusHiSpdBrkModlVldPassdThd.EngMax = 6000;
FordMsg415BusHiSpdBrkModlVldPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkModlVldPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkModlVldPassdThd.Online = false;
FordMsg415BusHiSpdBrkModlVldPassdThd.Impact = 'H';
FordMsg415BusHiSpdBrkModlVldPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkModlVldPassdThd.GraphLink = {''};
FordMsg415BusHiSpdBrkModlVldPassdThd.Monotony = 'None';
FordMsg415BusHiSpdBrkModlVldPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkModlVldPassdThd.PortName = 'FordMsg415BusHiSpdBrkModlVldPassdThd';


FordMsg415BusHiSpdBrkSprtVldMissThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkSprtVldMissThd.LongName = 'Ford Message 415 Bus High Speed Brake Support Valid Missing Threshold';
FordMsg415BusHiSpdBrkSprtVldMissThd.Description = [...
  'Threshold to set the FordVehLoSpdMtnCtrlBrkSupportVld to False'];
FordMsg415BusHiSpdBrkSprtVldMissThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkSprtVldMissThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkSprtVldMissThd.EngVal = 0;
FordMsg415BusHiSpdBrkSprtVldMissThd.EngMin = 0;
FordMsg415BusHiSpdBrkSprtVldMissThd.EngMax = 6000;
FordMsg415BusHiSpdBrkSprtVldMissThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkSprtVldMissThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkSprtVldMissThd.Online = false;
FordMsg415BusHiSpdBrkSprtVldMissThd.Impact = 'H';
FordMsg415BusHiSpdBrkSprtVldMissThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkSprtVldMissThd.GraphLink = {''};
FordMsg415BusHiSpdBrkSprtVldMissThd.Monotony = 'None';
FordMsg415BusHiSpdBrkSprtVldMissThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkSprtVldMissThd.PortName = 'FordMsg415BusHiSpdBrkSprtVldMissThd';


FordMsg415BusHiSpdBrkSprtVldPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdBrkSprtVldPassdThd.LongName = 'Ford Message 415 Bus High Speed Brake Support Valid Passed Threshold';
FordMsg415BusHiSpdBrkSprtVldPassdThd.Description = [...
  'Threshold to set the FordVehLoSpdMtnCtrlBrkSupportVld to True'];
FordMsg415BusHiSpdBrkSprtVldPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdBrkSprtVldPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdBrkSprtVldPassdThd.EngVal = 0;
FordMsg415BusHiSpdBrkSprtVldPassdThd.EngMin = 0;
FordMsg415BusHiSpdBrkSprtVldPassdThd.EngMax = 6000;
FordMsg415BusHiSpdBrkSprtVldPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdBrkSprtVldPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdBrkSprtVldPassdThd.Online = false;
FordMsg415BusHiSpdBrkSprtVldPassdThd.Impact = 'H';
FordMsg415BusHiSpdBrkSprtVldPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdBrkSprtVldPassdThd.GraphLink = {''};
FordMsg415BusHiSpdBrkSprtVldPassdThd.Monotony = 'None';
FordMsg415BusHiSpdBrkSprtVldPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdBrkSprtVldPassdThd.PortName = 'FordMsg415BusHiSpdBrkSprtVldPassdThd';


FordMsg415BusHiSpdChksBrkModlInvldFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.LongName = 'Ford Message 415 Bus High Speed Checksum Brake Module Invalid Failed Threshold';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.EngVal = 0;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.EngMin = 0;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.EngMax = 6000;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.Online = false;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.Impact = 'L';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.GraphLink = {''};
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.Monotony = 'None';
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdChksBrkModlInvldFaildThd.PortName = 'FordMsg415BusHiSpdChksBrkModlInvldFaildThd';


FordMsg415BusHiSpdChksBrkModlInvldPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.LongName = 'Ford Message 415 Bus High Speed Checksum Brake Module Invalid Passed Threshold';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.Description = [...
  'Threshold to Reset Ford Message 415 Bus High Speed Checksum Brake Modu' ...
  'le Invalid NTC'];
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.EngVal = 0;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.EngMin = 0;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.EngMax = 6000;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.Online = false;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.Impact = 'L';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.GraphLink = {''};
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.Monotony = 'None';
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdChksBrkModlInvldPassdThd.PortName = 'FordMsg415BusHiSpdChksBrkModlInvldPassdThd';


FordMsg415BusHiSpdCntrBrkModlInvldFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.LongName = 'Ford Message 415 Bus High Speed Counter Brake Module Invalid Failed Threshold';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.EngVal = 0;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.EngMin = 0;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.EngMax = 6000;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.Online = false;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.Impact = 'L';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.GraphLink = {''};
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.Monotony = 'None';
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdCntrBrkModlInvldFaildThd.PortName = 'FordMsg415BusHiSpdCntrBrkModlInvldFaildThd';


FordMsg415BusHiSpdCntrBrkModlInvldPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.LongName = 'Ford Message 415 Bus High Speed Counter Brake Module Invalid Passed Threshold';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.Description = [...
  'Threshold to Reset Ford Message 415 Bus High Speed Counter Brake Modul' ...
  'e Invalid NTC'];
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.EngVal = 0;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.EngMin = 0;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.EngMax = 6000;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.Online = false;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.Impact = 'L';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.GraphLink = {''};
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.Monotony = 'None';
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdCntrBrkModlInvldPassdThd.PortName = 'FordMsg415BusHiSpdCntrBrkModlInvldPassdThd';


FordMsg415BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 415 Bus High Speed Missing Message Failed Threshold';
FordMsg415BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg415BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdMissMsgFaildThd.EngVal = 100;
FordMsg415BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg415BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg415BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdMissMsgFaildThd.Online = false;
FordMsg415BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg415BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg415BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg415BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdMissMsgFaildThd.PortName = 'FordMsg415BusHiSpdMissMsgFaildThd';


FordMsg415BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 415 Bus High Speed Missing Message Passed Threshold';
FordMsg415BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg415BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg415BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg415BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg415BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdMissMsgPassdThd.Online = false;
FordMsg415BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg415BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg415BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg415BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdMissMsgPassdThd.PortName = 'FordMsg415BusHiSpdMissMsgPassdThd';


FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd = DataDict.Calibration;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.LongName = 'Ford Message 415 Bus High Speed  Quality Factor Brake Module Invalid Failed Threshold';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.EngDT = dt.u16;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.EngVal = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.EngMin = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.EngMax = 6000;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.CustomerVisible = false;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.Online = false;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.Impact = 'L';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.GraphLink = {''};
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.Monotony = 'None';
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.MaxGrad = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd.PortName = 'FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd';


FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd = DataDict.Calibration;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.LongName = 'Ford Message 415 Bus High Speed  Quality Factor Brake Module Invalid Passed Threshold';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.Description = [...
  'Threshold to Reset Ford Message 415 Bus High Speed  Quality Factor Bra' ...
  'ke Module Invalid NTC'];
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.DocUnits = 'MilliSec';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.EngDT = dt.u16;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.EngVal = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.EngMin = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.EngMax = 6000;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.Cardinality = 'Cmn';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.CustomerVisible = false;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.Online = false;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.Impact = 'L';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.TuningOwner = 'EPDT';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.GraphLink = {''};
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.Monotony = 'None';
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.MaxGrad = 0;
FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd.PortName = 'FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd';



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
BrkModlLoQlyVldFaildRefTi = DataDict.PIM;
BrkModlLoQlyVldFaildRefTi.LongName = 'Brake Module Low Quality Valid Failed Reference Time';
BrkModlLoQlyVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
BrkModlLoQlyVldFaildRefTi.DocUnits = 'Cnt';
BrkModlLoQlyVldFaildRefTi.EngDT = dt.u32;
BrkModlLoQlyVldFaildRefTi.EngMin = 0;
BrkModlLoQlyVldFaildRefTi.EngMax = 4294967295;
BrkModlLoQlyVldFaildRefTi.InitRowCol = [1  1];


BrkModlLoQlyVldMissRefTi = DataDict.PIM;
BrkModlLoQlyVldMissRefTi.LongName = 'Brake Module Low Quality Valid Missing Reference Time';
BrkModlLoQlyVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
BrkModlLoQlyVldMissRefTi.DocUnits = 'Cnt';
BrkModlLoQlyVldMissRefTi.EngDT = dt.u32;
BrkModlLoQlyVldMissRefTi.EngMin = 0;
BrkModlLoQlyVldMissRefTi.EngMax = 4294967295;
BrkModlLoQlyVldMissRefTi.InitRowCol = [1  1];


BrkModlLoQlyVldPassdRefTi = DataDict.PIM;
BrkModlLoQlyVldPassdRefTi.LongName = 'Brake Module Low Quality Valid Passed Reference Time';
BrkModlLoQlyVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
BrkModlLoQlyVldPassdRefTi.DocUnits = 'Cnt';
BrkModlLoQlyVldPassdRefTi.EngDT = dt.u32;
BrkModlLoQlyVldPassdRefTi.EngMin = 0;
BrkModlLoQlyVldPassdRefTi.EngMax = 4294967295;
BrkModlLoQlyVldPassdRefTi.InitRowCol = [1  1];


BrkModlVldFaildRefTi = DataDict.PIM;
BrkModlVldFaildRefTi.LongName = 'Brake Module Valid Failed Reference Time';
BrkModlVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
BrkModlVldFaildRefTi.DocUnits = 'Cnt';
BrkModlVldFaildRefTi.EngDT = dt.u32;
BrkModlVldFaildRefTi.EngMin = 0;
BrkModlVldFaildRefTi.EngMax = 4294967295;
BrkModlVldFaildRefTi.InitRowCol = [1  1];


BrkModlVldMissRefTi = DataDict.PIM;
BrkModlVldMissRefTi.LongName = 'Brake Module Valid Missing Reference Time';
BrkModlVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
BrkModlVldMissRefTi.DocUnits = 'Cnt';
BrkModlVldMissRefTi.EngDT = dt.u32;
BrkModlVldMissRefTi.EngMin = 0;
BrkModlVldMissRefTi.EngMax = 4294967295;
BrkModlVldMissRefTi.InitRowCol = [1  1];


BrkModlVldPassdRefTi = DataDict.PIM;
BrkModlVldPassdRefTi.LongName = 'Brake Module Valid Passed Reference Time';
BrkModlVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
BrkModlVldPassdRefTi.DocUnits = 'Cnt';
BrkModlVldPassdRefTi.EngDT = dt.u32;
BrkModlVldPassdRefTi.EngMin = 0;
BrkModlVldPassdRefTi.EngMax = 4294967295;
BrkModlVldPassdRefTi.InitRowCol = [1  1];


BrkSprtVldMissRefTi = DataDict.PIM;
BrkSprtVldMissRefTi.LongName = 'Brake Support Valid Missing Reference Time';
BrkSprtVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
BrkSprtVldMissRefTi.DocUnits = 'Cnt';
BrkSprtVldMissRefTi.EngDT = dt.u32;
BrkSprtVldMissRefTi.EngMin = 0;
BrkSprtVldMissRefTi.EngMax = 4294967295;
BrkSprtVldMissRefTi.InitRowCol = [1  1];


BrkSprtVldPassdRefTi = DataDict.PIM;
BrkSprtVldPassdRefTi.LongName = 'Brake Support Valid Passed Reference Time';
BrkSprtVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
BrkSprtVldPassdRefTi.DocUnits = 'Cnt';
BrkSprtVldPassdRefTi.EngDT = dt.u32;
BrkSprtVldPassdRefTi.EngMin = 0;
BrkSprtVldPassdRefTi.EngMax = 4294967295;
BrkSprtVldPassdRefTi.InitRowCol = [1  1];


ChksBrkModlInvldFaildRefTi = DataDict.PIM;
ChksBrkModlInvldFaildRefTi.LongName = 'Checksum Brake Module Invalid Failed Reference Time';
ChksBrkModlInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
ChksBrkModlInvldFaildRefTi.DocUnits = 'Cnt';
ChksBrkModlInvldFaildRefTi.EngDT = dt.u32;
ChksBrkModlInvldFaildRefTi.EngMin = 0;
ChksBrkModlInvldFaildRefTi.EngMax = 4294967295;
ChksBrkModlInvldFaildRefTi.InitRowCol = [1  1];


ChksBrkModlInvldPassdRefTi = DataDict.PIM;
ChksBrkModlInvldPassdRefTi.LongName = 'Checksum Brake Module Invalid Passed Reference Time';
ChksBrkModlInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
ChksBrkModlInvldPassdRefTi.DocUnits = 'Cnt';
ChksBrkModlInvldPassdRefTi.EngDT = dt.u32;
ChksBrkModlInvldPassdRefTi.EngMin = 0;
ChksBrkModlInvldPassdRefTi.EngMax = 4294967295;
ChksBrkModlInvldPassdRefTi.InitRowCol = [1  1];


ClrDiagcFlgProxyPrev = DataDict.PIM;
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostics Flag Proxy Previous';
ClrDiagcFlgProxyPrev.Description = [...
  'Used to hold previous value of Clear Diagnostics Flag Proxy Previous'];
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


CntrBrkModlInvldFaildRefTi = DataDict.PIM;
CntrBrkModlInvldFaildRefTi.LongName = 'Counter Brake Module Invalid Failed Reference Time';
CntrBrkModlInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
CntrBrkModlInvldFaildRefTi.DocUnits = 'Cnt';
CntrBrkModlInvldFaildRefTi.EngDT = dt.u32;
CntrBrkModlInvldFaildRefTi.EngMin = 0;
CntrBrkModlInvldFaildRefTi.EngMax = 4294967295;
CntrBrkModlInvldFaildRefTi.InitRowCol = [1  1];


CntrBrkModlInvldPassdRefTi = DataDict.PIM;
CntrBrkModlInvldPassdRefTi.LongName = 'Counter Brake Module Invalid Passed Reference Time';
CntrBrkModlInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
CntrBrkModlInvldPassdRefTi.DocUnits = 'Cnt';
CntrBrkModlInvldPassdRefTi.EngDT = dt.u32;
CntrBrkModlInvldPassdRefTi.EngMin = 0;
CntrBrkModlInvldPassdRefTi.EngMax = 4294967295;
CntrBrkModlInvldPassdRefTi.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehLoSpdMtnCtrlBrkSprtStsPrev = DataDict.PIM;
FordVehLoSpdMtnCtrlBrkSprtStsPrev.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Status Previous';
FordVehLoSpdMtnCtrlBrkSprtStsPrev.Description = [...
  'Previous value of Ford Vehicle Low Speed Motion Control Brake Support ' ...
  'Status'];
FordVehLoSpdMtnCtrlBrkSprtStsPrev.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtStsPrev.EngDT = enum.Ford_LsmcBrkDecel_D_Stat;
FordVehLoSpdMtnCtrlBrkSprtStsPrev.EngMin = Ford_LsmcBrkDecel_D_Stat.Cx0_Off;
FordVehLoSpdMtnCtrlBrkSprtStsPrev.EngMax = Ford_LsmcBrkDecel_D_Stat.Cx7_NotUsed_3;
FordVehLoSpdMtnCtrlBrkSprtStsPrev.InitRowCol = [1  1];


FordVehLoSpdMtnCtrlBrkSprtStsRawPrev = DataDict.PIM;
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Status Raw Previous';
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.Description = [...
  'Previous value ofFord Vehicle Low Speed Motion Control Brake Support S' ...
  'tatus Raw'];
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.EngDT = dt.u08;
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.EngMax = 7;
FordVehLoSpdMtnCtrlBrkSprtStsRawPrev.InitRowCol = [1  1];


FordVehLoSpdMtnCtrlBrkSprtVldFlg = DataDict.PIM;
FordVehLoSpdMtnCtrlBrkSprtVldFlg.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Valid Flag';
FordVehLoSpdMtnCtrlBrkSprtVldFlg.Description = [...
  'To determine the first transition this flag is used'];
FordVehLoSpdMtnCtrlBrkSprtVldFlg.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtVldFlg.EngDT = dt.lgc;
FordVehLoSpdMtnCtrlBrkSprtVldFlg.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtVldFlg.EngMax = 1;
FordVehLoSpdMtnCtrlBrkSprtVldFlg.InitRowCol = [1  1];


FordVehLoSpdMtnCtrlBrkSprtVldPrev = DataDict.PIM;
FordVehLoSpdMtnCtrlBrkSprtVldPrev.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Valid Previous';
FordVehLoSpdMtnCtrlBrkSprtVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Low Speed Motion ControlBr' ...
  'ake Support Valid'];
FordVehLoSpdMtnCtrlBrkSprtVldPrev.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtVldPrev.EngDT = dt.lgc;
FordVehLoSpdMtnCtrlBrkSprtVldPrev.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtVldPrev.EngMax = 1;
FordVehLoSpdMtnCtrlBrkSprtVldPrev.InitRowCol = [1  1];


FordVehMsg415Miss = DataDict.PIM;
FordVehMsg415Miss.LongName = 'Ford Vehicle Message 415 Missing';
FordVehMsg415Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg415Miss.DocUnits = 'Cnt';
FordVehMsg415Miss.EngDT = dt.lgc;
FordVehMsg415Miss.EngMin = 0;
FordVehMsg415Miss.EngMax = 1;
FordVehMsg415Miss.InitRowCol = [1  1];


FordVehMsg415Rxd = DataDict.PIM;
FordVehMsg415Rxd.LongName = 'Ford Vehicle Message 415 Received';
FordVehMsg415Rxd.Description = [...
  'Flag for missing message diagnostics, it is true when message is recei' ...
  'ved.'];
FordVehMsg415Rxd.DocUnits = 'Cnt';
FordVehMsg415Rxd.EngDT = dt.lgc;
FordVehMsg415Rxd.EngMin = 0;
FordVehMsg415Rxd.EngMax = 1;
FordVehMsg415Rxd.InitRowCol = [1  1];


FordVehSpdBrkModlLoQlyVldPrev = DataDict.PIM;
FordVehSpdBrkModlLoQlyVldPrev.LongName = 'Ford Vehicle Speed Brake Module Low Quality Valid Previous';
FordVehSpdBrkModlLoQlyVldPrev.Description = [...
  'Used to hold previous value of  Ford Vehicle Speed Brake ModuleLow Qua' ...
  'lity Valid'];
FordVehSpdBrkModlLoQlyVldPrev.DocUnits = 'Cnt';
FordVehSpdBrkModlLoQlyVldPrev.EngDT = dt.lgc;
FordVehSpdBrkModlLoQlyVldPrev.EngMin = 0;
FordVehSpdBrkModlLoQlyVldPrev.EngMax = 1;
FordVehSpdBrkModlLoQlyVldPrev.InitRowCol = [1  1];


FordVehSpdBrkModlPrev = DataDict.PIM;
FordVehSpdBrkModlPrev.LongName = 'Ford Vehicle Speed Brake Module Previous';
FordVehSpdBrkModlPrev.Description = [...
  'Previous value ofFord Vehicle Speed Brake Module'];
FordVehSpdBrkModlPrev.DocUnits = 'Kph';
FordVehSpdBrkModlPrev.EngDT = dt.float32;
FordVehSpdBrkModlPrev.EngMin = 0;
FordVehSpdBrkModlPrev.EngMax = 655.35;
FordVehSpdBrkModlPrev.InitRowCol = [1  1];


FordVehSpdBrkModlRawPrev = DataDict.PIM;
FordVehSpdBrkModlRawPrev.LongName = 'Ford Vehicle Speed Brake Module Raw Previous';
FordVehSpdBrkModlRawPrev.Description = [...
  'Previous value ofFord Vehicle Speed Brake Module Raw'];
FordVehSpdBrkModlRawPrev.DocUnits = 'Cnt';
FordVehSpdBrkModlRawPrev.EngDT = dt.u16;
FordVehSpdBrkModlRawPrev.EngMin = 0;
FordVehSpdBrkModlRawPrev.EngMax = 65535;
FordVehSpdBrkModlRawPrev.InitRowCol = [1  1];


FordVehSpdBrkModlVldPrev = DataDict.PIM;
FordVehSpdBrkModlVldPrev.LongName = 'Ford Vehicle Speed Brake Module Valid Previous';
FordVehSpdBrkModlVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Speed Brake Module Valid'];
FordVehSpdBrkModlVldPrev.DocUnits = 'Cnt';
FordVehSpdBrkModlVldPrev.EngDT = dt.lgc;
FordVehSpdBrkModlVldPrev.EngMin = 0;
FordVehSpdBrkModlVldPrev.EngMax = 1;
FordVehSpdBrkModlVldPrev.InitRowCol = [1  1];


FordVehSpdChksBrkModlPrev = DataDict.PIM;
FordVehSpdChksBrkModlPrev.LongName = 'Ford Vehicle Speed Checksum Brake Module Previous';
FordVehSpdChksBrkModlPrev.Description = [...
  'Previous value ofFord Vehicle Speed Checksum Brake Module'];
FordVehSpdChksBrkModlPrev.DocUnits = 'Cnt';
FordVehSpdChksBrkModlPrev.EngDT = dt.u08;
FordVehSpdChksBrkModlPrev.EngMin = 0;
FordVehSpdChksBrkModlPrev.EngMax = 255;
FordVehSpdChksBrkModlPrev.InitRowCol = [1  1];


FordVehSpdCntrBrkModlPrev = DataDict.PIM;
FordVehSpdCntrBrkModlPrev.LongName = 'Ford Vehicle Speed Counter Brake Module Previous';
FordVehSpdCntrBrkModlPrev.Description = [...
  'Previous value ofFord Vehicle Speed Counter Brake Module'];
FordVehSpdCntrBrkModlPrev.DocUnits = 'Cnt';
FordVehSpdCntrBrkModlPrev.EngDT = dt.u08;
FordVehSpdCntrBrkModlPrev.EngMin = 0;
FordVehSpdCntrBrkModlPrev.EngMax = 15;
FordVehSpdCntrBrkModlPrev.InitRowCol = [1  1];


FordVehSpdQlyFacBrkModlPrev = DataDict.PIM;
FordVehSpdQlyFacBrkModlPrev.LongName = 'Ford Vehicle Speed Quality Factor Brake Module Previous';
FordVehSpdQlyFacBrkModlPrev.Description = [...
  'Previous value ofFord Vehicle Speed Quality Factor Brake Module'];
FordVehSpdQlyFacBrkModlPrev.DocUnits = 'Cnt';
FordVehSpdQlyFacBrkModlPrev.EngDT = enum.Ford_VehVActlBrk_D_Qf;
FordVehSpdQlyFacBrkModlPrev.EngMin = Ford_VehVActlBrk_D_Qf.Cx0_Faulty;
FordVehSpdQlyFacBrkModlPrev.EngMax = Ford_VehVActlBrk_D_Qf.Cx3_OK;
FordVehSpdQlyFacBrkModlPrev.InitRowCol = [1  1];


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


QlyFacBrkModlInvldFaildRefTi = DataDict.PIM;
QlyFacBrkModlInvldFaildRefTi.LongName = 'Quality Factor Brake Module Invalid Failed Reference Time';
QlyFacBrkModlInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
QlyFacBrkModlInvldFaildRefTi.DocUnits = 'Cnt';
QlyFacBrkModlInvldFaildRefTi.EngDT = dt.u32;
QlyFacBrkModlInvldFaildRefTi.EngMin = 0;
QlyFacBrkModlInvldFaildRefTi.EngMax = 4294967295;
QlyFacBrkModlInvldFaildRefTi.InitRowCol = [1  1];


QlyFacBrkModlInvldPassdRefTi = DataDict.PIM;
QlyFacBrkModlInvldPassdRefTi.LongName = 'Quality Factor Brake Module Invalid Passed Reference Time';
QlyFacBrkModlInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
QlyFacBrkModlInvldPassdRefTi.DocUnits = 'Cnt';
QlyFacBrkModlInvldPassdRefTi.EngDT = dt.u32;
QlyFacBrkModlInvldPassdRefTi.EngMin = 0;
QlyFacBrkModlInvldPassdRefTi.EngMax = 4294967295;
QlyFacBrkModlInvldPassdRefTi.InitRowCol = [1  1];



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


DIAGENA_CNT_U08 = DataDict.Constant;
DIAGENA_CNT_U08.LongName = 'DTC Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


EIGHTBITMASK_CNT_U16 = DataDict.Constant;
EIGHTBITMASK_CNT_U16.LongName = 'Eight Bit Mask';
EIGHTBITMASK_CNT_U16.Description = [...
  'Used to extract least significant 8 bits of the Steering Pinion Relati' ...
  've Angle signal'];
EIGHTBITMASK_CNT_U16.DocUnits = 'Cnt';
EIGHTBITMASK_CNT_U16.EngDT = dt.u16;
EIGHTBITMASK_CNT_U16.EngVal = 255;
EIGHTBITMASK_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


RISHIFT_CNT_U16 = DataDict.Constant;
RISHIFT_CNT_U16.LongName = 'Right Shift';
RISHIFT_CNT_U16.Description = [...
  'It is used get the 8 bits MSB of the 16 bit data'];
RISHIFT_CNT_U16.DocUnits = 'Cnt';
RISHIFT_CNT_U16.EngDT = dt.u16;
RISHIFT_CNT_U16.EngVal = 8;
RISHIFT_CNT_U16.Define = 'Local';


SCAGFAC_KPHPERCNT_F32 = DataDict.Constant;
SCAGFAC_KPHPERCNT_F32.LongName = 'Scaling Factor';
SCAGFAC_KPHPERCNT_F32.Description = [...
  'Used for scaling of Ford Vehicle Speed Brake Module'];
SCAGFAC_KPHPERCNT_F32.DocUnits = 'KphPerCnt';
SCAGFAC_KPHPERCNT_F32.EngDT = dt.float32;
SCAGFAC_KPHPERCNT_F32.EngVal = 0.01;
SCAGFAC_KPHPERCNT_F32.Define = 'Local';


SPDBRKMODLMAX_KPH_F32 = DataDict.Constant;
SPDBRKMODLMAX_KPH_F32.LongName = 'Speed Brake Module Maximum';
SPDBRKMODLMAX_KPH_F32.Description = [...
  'Maximum valid values for Ford Vehicle Speed Brake Module'];
SPDBRKMODLMAX_KPH_F32.DocUnits = 'Kph';
SPDBRKMODLMAX_KPH_F32.EngDT = dt.float32;
SPDBRKMODLMAX_KPH_F32.EngVal = 655.35;
SPDBRKMODLMAX_KPH_F32.Define = 'Local';


SPDBRKMODLMIN_KPH_F32 = DataDict.Constant;
SPDBRKMODLMIN_KPH_F32.LongName = 'Speed Brake Module Minimum';
SPDBRKMODLMIN_KPH_F32.Description = [...
  'Minimum valid values for Ford Vehicle Speed Brake Module'];
SPDBRKMODLMIN_KPH_F32.DocUnits = 'Kph';
SPDBRKMODLMIN_KPH_F32.EngDT = dt.float32;
SPDBRKMODLMIN_KPH_F32.EngVal = 0;
SPDBRKMODLMIN_KPH_F32.Define = 'Local';


SPDBRKMODLRAWMAX_CNT_U16 = DataDict.Constant;
SPDBRKMODLRAWMAX_CNT_U16.LongName = 'Speed Brake Module Raw Maximum';
SPDBRKMODLRAWMAX_CNT_U16.Description = [...
  'Maximum valid values for Ford Vehicle Speed Brake Module Raw'];
SPDBRKMODLRAWMAX_CNT_U16.DocUnits = 'Cnt';
SPDBRKMODLRAWMAX_CNT_U16.EngDT = dt.u16;
SPDBRKMODLRAWMAX_CNT_U16.EngVal = 65535;
SPDBRKMODLRAWMAX_CNT_U16.Define = 'Local';


SPDBRKMODLRAWMIN_CNT_U16 = DataDict.Constant;
SPDBRKMODLRAWMIN_CNT_U16.LongName = 'Speed Brake Module Raw Minimum';
SPDBRKMODLRAWMIN_CNT_U16.Description = [...
  'Minimum valid values for Ford Vehicle Speed Brake Module Raw'];
SPDBRKMODLRAWMIN_CNT_U16.DocUnits = 'Cnt';
SPDBRKMODLRAWMIN_CNT_U16.EngDT = dt.u16;
SPDBRKMODLRAWMIN_CNT_U16.EngVal = 0;
SPDBRKMODLRAWMIN_CNT_U16.Define = 'Local';


SPDCHKSBRKMODLMAX_CNT_U08 = DataDict.Constant;
SPDCHKSBRKMODLMAX_CNT_U08.LongName = 'Speed Checksum Brake Module Maximum';
SPDCHKSBRKMODLMAX_CNT_U08.Description = [...
  'Maximum valid values for Ford Vehicle Speed Checksum Brake Module'];
SPDCHKSBRKMODLMAX_CNT_U08.DocUnits = 'Cnt';
SPDCHKSBRKMODLMAX_CNT_U08.EngDT = dt.u08;
SPDCHKSBRKMODLMAX_CNT_U08.EngVal = 255;
SPDCHKSBRKMODLMAX_CNT_U08.Define = 'Local';


SPDCHKSBRKMODLMIN_CNT_U08 = DataDict.Constant;
SPDCHKSBRKMODLMIN_CNT_U08.LongName = 'Speed Checksum Brake Module Minimum';
SPDCHKSBRKMODLMIN_CNT_U08.Description = [...
  'Minimum valid values for Ford Vehicle Speed Checksum Brake Module'];
SPDCHKSBRKMODLMIN_CNT_U08.DocUnits = 'Cnt';
SPDCHKSBRKMODLMIN_CNT_U08.EngDT = dt.u08;
SPDCHKSBRKMODLMIN_CNT_U08.EngVal = 0;
SPDCHKSBRKMODLMIN_CNT_U08.Define = 'Local';


SPDCNTRBRKMODLMAX_CNT_U08 = DataDict.Constant;
SPDCNTRBRKMODLMAX_CNT_U08.LongName = 'Speed Counter Brake Module Maximum';
SPDCNTRBRKMODLMAX_CNT_U08.Description = [...
  'Maximum valid values for Ford Vehicle Speed Counter Brake Module'];
SPDCNTRBRKMODLMAX_CNT_U08.DocUnits = 'Cnt';
SPDCNTRBRKMODLMAX_CNT_U08.EngDT = dt.u08;
SPDCNTRBRKMODLMAX_CNT_U08.EngVal = 15;
SPDCNTRBRKMODLMAX_CNT_U08.Define = 'Local';


SPDCNTRBRKMODLMIN_CNT_U08 = DataDict.Constant;
SPDCNTRBRKMODLMIN_CNT_U08.LongName = 'Speed Counter Brake Module Minimum';
SPDCNTRBRKMODLMIN_CNT_U08.Description = [...
  'Minimum valid values for Ford Vehicle Speed Counter Brake Module'];
SPDCNTRBRKMODLMIN_CNT_U08.DocUnits = 'Cnt';
SPDCNTRBRKMODLMIN_CNT_U08.EngDT = dt.u08;
SPDCNTRBRKMODLMIN_CNT_U08.EngVal = 0;
SPDCNTRBRKMODLMIN_CNT_U08.Define = 'Local';


SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08 = DataDict.Constant;
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.LongName = 'Speed Motion Control Brake Support Status Raw Maximum';
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.Description = [...
  'Maximum valid valuesfor Ford Vehicle Speed Motion Control Brake Suppor' ...
  't Status Raw'];
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.DocUnits = 'Cnt';
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.EngDT = dt.u08;
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.EngVal = 7;
SPDMTNCTRLBRKSPRTSTSRAWMAX_CNT_U08.Define = 'Local';


SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08 = DataDict.Constant;
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.LongName = 'Speed Motion Control Brake Support Status Raw Minimum';
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.Description = [...
  'Minimum valid valuesfor Ford Vehicle Speed Motion Control Brake Suppor' ...
  't Status Raw'];
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.DocUnits = 'Cnt';
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.EngDT = dt.u08;
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.EngVal = 0;
SPDMTNCTRLBRKSPRTSTSRAWMIN_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg415MissMsg = DataDict.NTC;
FordMsg415MissMsg.NtcNr = NtcNr1.NTCNR_0X165;
FordMsg415MissMsg.NtcTyp = 'None';
FordMsg415MissMsg.LongName = 'Ford Message 415 Missing Message';
FordMsg415MissMsg.Description = 'Ford Message 415 Missing Message Diagnostic';
FordMsg415MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg415MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg415MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg415MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehSpdChksBrkModlInvld = DataDict.NTC;
FordVehSpdChksBrkModlInvld.NtcNr = NtcNr1.NTCNR_0X168;
FordVehSpdChksBrkModlInvld.NtcTyp = 'None';
FordVehSpdChksBrkModlInvld.LongName = 'Ford Vehicle Speed Checksum Brake Module Invalid';
FordVehSpdChksBrkModlInvld.Description = 'Ford Message 415 Invalid Message Diagnostic';
FordVehSpdChksBrkModlInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehSpdChksBrkModlInvld.NtcStsLockdThisIgnCyc = 0;


FordVehSpdCntrBrkModlInvld = DataDict.NTC;
FordVehSpdCntrBrkModlInvld.NtcNr = NtcNr1.NTCNR_0X167;
FordVehSpdCntrBrkModlInvld.NtcTyp = 'None';
FordVehSpdCntrBrkModlInvld.LongName = 'Ford Vehicle Speed Counter Brake Module Invalid';
FordVehSpdCntrBrkModlInvld.Description = 'Ford Message 415 Invalid Message Diagnostic';
FordVehSpdCntrBrkModlInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehSpdCntrBrkModlInvld.NtcStsLockdThisIgnCyc = 0;


FordVehSpdQlyFacBrkModlInvld = DataDict.NTC;
FordVehSpdQlyFacBrkModlInvld.NtcNr = NtcNr1.NTCNR_0X166;
FordVehSpdQlyFacBrkModlInvld.NtcTyp = 'None';
FordVehSpdQlyFacBrkModlInvld.LongName = 'Ford Vehicle Speed Quality Factor Brake Module Invalid';
FordVehSpdQlyFacBrkModlInvld.Description = 'Ford Message 415 Invalid Message Diagnostic';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehSpdQlyFacBrkModlInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
