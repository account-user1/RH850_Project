%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Feb-2018 15:22:25       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM061A = DataDict.FDD;
MM061A.Version = '3.0.X';
MM061A.LongName = 'Ford Message 202 Bus High Speed';
MM061A.ShoName  = 'FordMsg202BusHiSpd';
MM061A.DesignASIL = 'QM';
MM061A.Description = [...
  'The purpose of the Ford Message 202 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the vehi' ...
  'cle speed, Torque Steer Compensation, Brake Pulse Reduction, Trailer B' ...
  'ackup Assist functions from CAN. The Ford Message 202 function will pe' ...
  'rform the missing message and signal invalid diagnostics as well as pr' ...
  'ovide a validity flag for the signal values and received message'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg202BusHiSpdInit1 = DataDict.Runnable;
FordMsg202BusHiSpdInit1.Context = 'Rte';
FordMsg202BusHiSpdInit1.TimeStep = 0;
FordMsg202BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg202BusHiSpdPer1 = DataDict.Runnable;
FordMsg202BusHiSpdPer1.Context = 'Rte';
FordMsg202BusHiSpdPer1.TimeStep = 0.01;
FordMsg202BusHiSpdPer1.Description = 'Periodic Runnable at ';

ComIPduCallout_EngVehicleSpThrottle2_HS2 = DataDict.SrvRunnable;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Context = 'NonRte';
ComIPduCallout_EngVehicleSpThrottle2_HS2.Description = [...
  'Server Runnable to provide a message reception service when a new mess' ...
  'age is received'];
ComIPduCallout_EngVehicleSpThrottle2_HS2.Return = DataDict.CSReturn;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Return.Type = 'None';
ComIPduCallout_EngVehicleSpThrottle2_HS2.Return.Min = [];
ComIPduCallout_EngVehicleSpThrottle2_HS2.Return.Max = [];
ComIPduCallout_EngVehicleSpThrottle2_HS2.Return.TestTolerance = [];
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).Name = 'EngVehicleSpThrottle2';
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_EngVehicleSpThrottle2_HS2.Arguments(1).Description = [...
  'Argument EngVehicleSpThrottle2 set to true once this server runnable i' ...
  's called'];

ComTimeoutNotification_Ford_VehVActlEng_D_Qf = DataDict.SrvRunnable;
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Context = 'NonRte';
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Return = DataDict.CSReturn;
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Return.Type = 'None';
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Return.Min = [];
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Return.Max = [];
ComTimeoutNotification_Ford_VehVActlEng_D_Qf.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg202BusHiSpdInit1','FordMsg202BusHiSpdPer1','ComIPduCallout_EngVehicleSpThrottle2_HS2','ComTimeoutNotification_Ford_VehVActlEng_D_Qf'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time fromthe SimnTi value obtained at root laye' ...
  'rof model and gives the RefTmr.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg202BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg202BusHiSpdPer1','ComIPduCallout_EngVehicleSpThrottle2_HS2','ComTimeoutNotification_Ford_VehVActlEng_D_Qf'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg202BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordAbsPrsnt = DataDict.IpSignal;
FordAbsPrsnt.LongName = 'Ford ABS Present';
FordAbsPrsnt.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC'];
FordAbsPrsnt.DocUnits = 'Cnt';
FordAbsPrsnt.EngDT = dt.lgc;
FordAbsPrsnt.EngInit = 0;
FordAbsPrsnt.EngMin = 0;
FordAbsPrsnt.EngMax = 1;
FordAbsPrsnt.ReadIn = {'FordMsg202BusHiSpdPer1'};
FordAbsPrsnt.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Ford Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg202BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 in order to Test Diagnostic NTC'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.u08;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg202BusHiSpdPer1'};
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
FordEpsLifeCycMod.ReadIn = {'FordMsg202BusHiSpdPer1'};
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
FordInvldMsgDiagcInhb.ReadIn = {'FordMsg202BusHiSpdPer1'};
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
FordMfgDiagcInhb.ReadIn = {'FordMsg202BusHiSpdPer1'};
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
FordMissMsgDiagcInhb.ReadIn = {'FordMsg202BusHiSpdPer1'};
FordMissMsgDiagcInhb.ReadType = 'Rte';


FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Ford Torque Steer Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FordMsg202BusHiSpdPer1'};
FordTqSteerCmpEnad.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg202BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_GearRvrse_D_Actl1 = DataDict.IpSignal;
Ford_GearRvrse_D_Actl1.LongName = 'Ford Gear Reverse Status';
Ford_GearRvrse_D_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_GearRvrse_D_Actl1.DocUnits = 'Cnt';
Ford_GearRvrse_D_Actl1.EngDT = enum.Ford_GearRvrse_D_Actl;
Ford_GearRvrse_D_Actl1.EngInit = Ford_GearRvrse_D_Actl.Cx7_Fault;
Ford_GearRvrse_D_Actl1.EngMin = Ford_GearRvrse_D_Actl.Cx0_Inactive_not_confirmed;
Ford_GearRvrse_D_Actl1.EngMax = Ford_GearRvrse_D_Actl.Cx7_Fault;
Ford_GearRvrse_D_Actl1.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_GearRvrse_D_Actl1.ReadType = 'Rte';


Ford_VehVActlEng_D_Qf1 = DataDict.IpSignal;
Ford_VehVActlEng_D_Qf1.LongName = 'Ford Vehicle Speed Quality Factor Engine Module 1';
Ford_VehVActlEng_D_Qf1.Description = [...
  'This signal supports diagnostic of Ford Vehicle Speed Quality Factor E' ...
  'ngine Module Invalid NTC failed condition'];
Ford_VehVActlEng_D_Qf1.DocUnits = 'Cnt';
Ford_VehVActlEng_D_Qf1.EngDT = enum.Ford_VehVActlEng_D_Qf;
Ford_VehVActlEng_D_Qf1.EngInit = Ford_VehVActlEng_D_Qf.Cx0_Faulty;
Ford_VehVActlEng_D_Qf1.EngMin = Ford_VehVActlEng_D_Qf.Cx0_Faulty;
Ford_VehVActlEng_D_Qf1.EngMax = Ford_VehVActlEng_D_Qf.Cx3_OK;
Ford_VehVActlEng_D_Qf1.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_VehVActlEng_D_Qf1.ReadType = 'Rte';


Ford_VehVActlEng_No_Cnt = DataDict.IpSignal;
Ford_VehVActlEng_No_Cnt.LongName = 'Vehicle Speed Counter Engine Module';
Ford_VehVActlEng_No_Cnt.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_VehVActlEng_No_Cnt.DocUnits = 'Cnt';
Ford_VehVActlEng_No_Cnt.EngDT = dt.u08;
Ford_VehVActlEng_No_Cnt.EngInit = 0;
Ford_VehVActlEng_No_Cnt.EngMin = 0;
Ford_VehVActlEng_No_Cnt.EngMax = 15;
Ford_VehVActlEng_No_Cnt.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_VehVActlEng_No_Cnt.ReadType = 'Rte';


Ford_VehVActlEng_No_Cs = DataDict.IpSignal;
Ford_VehVActlEng_No_Cs.LongName = 'Vehicle Speed Checksum Engine Module';
Ford_VehVActlEng_No_Cs.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_VehVActlEng_No_Cs.DocUnits = 'Cnt';
Ford_VehVActlEng_No_Cs.EngDT = dt.u08;
Ford_VehVActlEng_No_Cs.EngInit = 0;
Ford_VehVActlEng_No_Cs.EngMin = 0;
Ford_VehVActlEng_No_Cs.EngMax = 255;
Ford_VehVActlEng_No_Cs.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_VehVActlEng_No_Cs.ReadType = 'Rte';


Ford_VehVTrlrAid_B_Avail1 = DataDict.IpSignal;
Ford_VehVTrlrAid_B_Avail1.LongName = 'Ford Vehicle Trailer Aid Available';
Ford_VehVTrlrAid_B_Avail1.Description = [...
  'Processed value of Trailer Aid Available to be used by EPS'];
Ford_VehVTrlrAid_B_Avail1.DocUnits = 'Cnt';
Ford_VehVTrlrAid_B_Avail1.EngDT = enum.Ford_VehVTrlrAid_B_Avail;
Ford_VehVTrlrAid_B_Avail1.EngInit = Ford_VehVTrlrAid_B_Avail.Cx0_No;
Ford_VehVTrlrAid_B_Avail1.EngMin = Ford_VehVTrlrAid_B_Avail.Cx0_No;
Ford_VehVTrlrAid_B_Avail1.EngMax = Ford_VehVTrlrAid_B_Avail.Cx1_Yes;
Ford_VehVTrlrAid_B_Avail1.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_VehVTrlrAid_B_Avail1.ReadType = 'Rte';


Ford_Veh_V_ActlEng = DataDict.IpSignal;
Ford_Veh_V_ActlEng.LongName = 'Vehicle Speed Engine Module';
Ford_Veh_V_ActlEng.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS'];
Ford_Veh_V_ActlEng.DocUnits = 'Cnt';
Ford_Veh_V_ActlEng.EngDT = dt.u16;
Ford_Veh_V_ActlEng.EngInit = 0;
Ford_Veh_V_ActlEng.EngMin = 0;
Ford_Veh_V_ActlEng.EngMax = 65535;
Ford_Veh_V_ActlEng.ReadIn = {'FordMsg202BusHiSpdPer1'};
Ford_Veh_V_ActlEng.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehGearRvsSts = DataDict.OpSignal;
FordVehGearRvsSts.LongName = 'Ford Vehicle Gear Reverse Status';
FordVehGearRvsSts.Description = [...
  'This signal supports diagnostic of Ford Vehicle Gear Reverse Status In' ...
  'valid NTC failed condition'];
FordVehGearRvsSts.DocUnits = 'Cnt';
FordVehGearRvsSts.SwcShoName = 'FordMsg202BusHiSpd';
FordVehGearRvsSts.EngDT = enum.Ford_GearRvrse_D_Actl;
FordVehGearRvsSts.EngInit = Ford_GearRvrse_D_Actl.Cx7_Fault;
FordVehGearRvsSts.EngMin = Ford_GearRvrse_D_Actl.Cx0_Inactive_not_confirmed;
FordVehGearRvsSts.EngMax = Ford_GearRvrse_D_Actl.Cx7_Fault;
FordVehGearRvsSts.TestTolerance = 0;
FordVehGearRvsSts.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehGearRvsSts.WriteType = 'Rte';


FordVehGearRvsStsRaw = DataDict.OpSignal;
FordVehGearRvsStsRaw.LongName = 'Ford Vehicle Gear Reverse Status Raw';
FordVehGearRvsStsRaw.Description = [...
  'Processed value of Gear Reverse Status Raw to be used by EPS'];
FordVehGearRvsStsRaw.DocUnits = 'Cnt';
FordVehGearRvsStsRaw.SwcShoName = 'FordMsg202BusHiSpd';
FordVehGearRvsStsRaw.EngDT = dt.u08;
FordVehGearRvsStsRaw.EngInit = 7;
FordVehGearRvsStsRaw.EngMin = 0;
FordVehGearRvsStsRaw.EngMax = 7;
FordVehGearRvsStsRaw.TestTolerance = 0;
FordVehGearRvsStsRaw.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehGearRvsStsRaw.WriteType = 'Rte';


FordVehGearRvsStsVld = DataDict.OpSignal;
FordVehGearRvsStsVld.LongName = 'Ford Vehicle Gear Reverse Status Valid';
FordVehGearRvsStsVld.Description = [...
  'Processed value of Gear Reverse Status Valid to be used by EPS'];
FordVehGearRvsStsVld.DocUnits = 'Cnt';
FordVehGearRvsStsVld.SwcShoName = 'FordMsg202BusHiSpd';
FordVehGearRvsStsVld.EngDT = dt.lgc;
FordVehGearRvsStsVld.EngInit = 0;
FordVehGearRvsStsVld.EngMin = 0;
FordVehGearRvsStsVld.EngMax = 1;
FordVehGearRvsStsVld.TestTolerance = 0;
FordVehGearRvsStsVld.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehGearRvsStsVld.WriteType = 'Rte';


FordVehSpdChksEngModl = DataDict.OpSignal;
FordVehSpdChksEngModl.LongName = 'Ford Vehicle Speed Checksum Engine Module';
FordVehSpdChksEngModl.Description = [...
  'Processed value of Speed Checksum Engine Module to be used by EPS'];
FordVehSpdChksEngModl.DocUnits = 'Cnt';
FordVehSpdChksEngModl.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdChksEngModl.EngDT = dt.u08;
FordVehSpdChksEngModl.EngInit = 0;
FordVehSpdChksEngModl.EngMin = 0;
FordVehSpdChksEngModl.EngMax = 255;
FordVehSpdChksEngModl.TestTolerance = 0;
FordVehSpdChksEngModl.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdChksEngModl.WriteType = 'Rte';


FordVehSpdCntrEngModl = DataDict.OpSignal;
FordVehSpdCntrEngModl.LongName = 'Ford Vehicle Speed Counter Engine Module';
FordVehSpdCntrEngModl.Description = [...
  'Processed value of Speed Counter Engine Module to be used by EPS'];
FordVehSpdCntrEngModl.DocUnits = 'Cnt';
FordVehSpdCntrEngModl.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdCntrEngModl.EngDT = dt.u08;
FordVehSpdCntrEngModl.EngInit = 0;
FordVehSpdCntrEngModl.EngMin = 0;
FordVehSpdCntrEngModl.EngMax = 15;
FordVehSpdCntrEngModl.TestTolerance = 0;
FordVehSpdCntrEngModl.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdCntrEngModl.WriteType = 'Rte';


FordVehSpdEngModLoQlyVld = DataDict.OpSignal;
FordVehSpdEngModLoQlyVld.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid';
FordVehSpdEngModLoQlyVld.Description = [...
  'Processed value of Speed Engine Module Low Quality Valid to be used by' ...
  ' EPS'];
FordVehSpdEngModLoQlyVld.DocUnits = 'Cnt';
FordVehSpdEngModLoQlyVld.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdEngModLoQlyVld.EngDT = dt.lgc;
FordVehSpdEngModLoQlyVld.EngInit = 0;
FordVehSpdEngModLoQlyVld.EngMin = 0;
FordVehSpdEngModLoQlyVld.EngMax = 1;
FordVehSpdEngModLoQlyVld.TestTolerance = 0;
FordVehSpdEngModLoQlyVld.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdEngModLoQlyVld.WriteType = 'Rte';


FordVehSpdEngModl = DataDict.OpSignal;
FordVehSpdEngModl.LongName = 'Ford Vehicle Speed Engine Module';
FordVehSpdEngModl.Description = [...
  'Processed value of Speed Engine Module to be used by EPS'];
FordVehSpdEngModl.DocUnits = 'Kph';
FordVehSpdEngModl.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdEngModl.EngDT = dt.float32;
FordVehSpdEngModl.EngInit = 0;
FordVehSpdEngModl.EngMin = 0;
FordVehSpdEngModl.EngMax = 655.35;
FordVehSpdEngModl.TestTolerance = 0.005;
FordVehSpdEngModl.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdEngModl.WriteType = 'Rte';


FordVehSpdEngModlRaw = DataDict.OpSignal;
FordVehSpdEngModlRaw.LongName = 'Ford Vehicle Speed Engine Module Raw';
FordVehSpdEngModlRaw.Description = [...
  'Processed value of Speed Engine Module Raw to be used by EPS'];
FordVehSpdEngModlRaw.DocUnits = 'Cnt';
FordVehSpdEngModlRaw.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdEngModlRaw.EngDT = dt.u16;
FordVehSpdEngModlRaw.EngInit = 0;
FordVehSpdEngModlRaw.EngMin = 0;
FordVehSpdEngModlRaw.EngMax = 65535;
FordVehSpdEngModlRaw.TestTolerance = 0;
FordVehSpdEngModlRaw.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdEngModlRaw.WriteType = 'Rte';


FordVehSpdEngModlVld = DataDict.OpSignal;
FordVehSpdEngModlVld.LongName = 'Ford Vehicle Speed Engine Module Valid';
FordVehSpdEngModlVld.Description = [...
  'Processed value of Speed Engine Module Valid to be used by EPS'];
FordVehSpdEngModlVld.DocUnits = 'Cnt';
FordVehSpdEngModlVld.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdEngModlVld.EngDT = dt.lgc;
FordVehSpdEngModlVld.EngInit = 0;
FordVehSpdEngModlVld.EngMin = 0;
FordVehSpdEngModlVld.EngMax = 1;
FordVehSpdEngModlVld.TestTolerance = 0;
FordVehSpdEngModlVld.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdEngModlVld.WriteType = 'Rte';


FordVehSpdQlyFacEngModl = DataDict.OpSignal;
FordVehSpdQlyFacEngModl.LongName = 'Ford Vehicle Speed Quality Factor Engine Module';
FordVehSpdQlyFacEngModl.Description = [...
  'This signal supports diagnostic of Ford Vehicle Speed Quality Factor E' ...
  'ngine Module Invalid NTC failed condition'];
FordVehSpdQlyFacEngModl.DocUnits = 'Cnt';
FordVehSpdQlyFacEngModl.SwcShoName = 'FordMsg202BusHiSpd';
FordVehSpdQlyFacEngModl.EngDT = enum.Ford_VehVActlEng_D_Qf;
FordVehSpdQlyFacEngModl.EngInit = Ford_VehVActlEng_D_Qf.Cx0_Faulty;
FordVehSpdQlyFacEngModl.EngMin = Ford_VehVActlEng_D_Qf.Cx0_Faulty;
FordVehSpdQlyFacEngModl.EngMax = Ford_VehVActlEng_D_Qf.Cx3_OK;
FordVehSpdQlyFacEngModl.TestTolerance = 0;
FordVehSpdQlyFacEngModl.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehSpdQlyFacEngModl.WriteType = 'Rte';


FordVehTrlrAidAvl = DataDict.OpSignal;
FordVehTrlrAidAvl.LongName = 'Ford Vehicle Trailer Aid Available';
FordVehTrlrAidAvl.Description = [...
  'Processed value of Trailer Aid Available to be used by EPS'];
FordVehTrlrAidAvl.DocUnits = 'Cnt';
FordVehTrlrAidAvl.SwcShoName = 'FordMsg202BusHiSpd';
FordVehTrlrAidAvl.EngDT = enum.Ford_VehVTrlrAid_B_Avail;
FordVehTrlrAidAvl.EngInit = Ford_VehVTrlrAid_B_Avail.Cx0_No;
FordVehTrlrAidAvl.EngMin = Ford_VehVTrlrAid_B_Avail.Cx0_No;
FordVehTrlrAidAvl.EngMax = Ford_VehVTrlrAid_B_Avail.Cx1_Yes;
FordVehTrlrAidAvl.TestTolerance = 0;
FordVehTrlrAidAvl.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehTrlrAidAvl.WriteType = 'Rte';


FordVehTrlrAidAvlRaw = DataDict.OpSignal;
FordVehTrlrAidAvlRaw.LongName = 'Ford Vehicle Trailer Aid Available Raw';
FordVehTrlrAidAvlRaw.Description = [...
  'Processed value of Trailer Aid Available Raw to be used by EPS'];
FordVehTrlrAidAvlRaw.DocUnits = 'Cnt';
FordVehTrlrAidAvlRaw.SwcShoName = 'FordMsg202BusHiSpd';
FordVehTrlrAidAvlRaw.EngDT = dt.u08;
FordVehTrlrAidAvlRaw.EngInit = 0;
FordVehTrlrAidAvlRaw.EngMin = 0;
FordVehTrlrAidAvlRaw.EngMax = 1;
FordVehTrlrAidAvlRaw.TestTolerance = 0;
FordVehTrlrAidAvlRaw.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehTrlrAidAvlRaw.WriteType = 'Rte';


FordVehTrlrBackupAssiAvlVld = DataDict.OpSignal;
FordVehTrlrBackupAssiAvlVld.LongName = 'Ford Vehicle Trailer Backup Assist Available Valid';
FordVehTrlrBackupAssiAvlVld.Description = [...
  'Processed value of Trailer Backup Assist Available Valid to be used by' ...
  ' EPS'];
FordVehTrlrBackupAssiAvlVld.DocUnits = 'Cnt';
FordVehTrlrBackupAssiAvlVld.SwcShoName = 'FordMsg202BusHiSpd';
FordVehTrlrBackupAssiAvlVld.EngDT = dt.lgc;
FordVehTrlrBackupAssiAvlVld.EngInit = 0;
FordVehTrlrBackupAssiAvlVld.EngMin = 0;
FordVehTrlrBackupAssiAvlVld.EngMax = 1;
FordVehTrlrBackupAssiAvlVld.TestTolerance = 0;
FordVehTrlrBackupAssiAvlVld.WrittenIn = {'FordMsg202BusHiSpdPer1'};
FordVehTrlrBackupAssiAvlVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg202BusHiSpdEngModLoQlyVldFaildThd = DataDict.Calibration;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.LongName = 'Ford Message 202 Bus High Speed Engine Module Low Quality Valid Failed Threshold';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.Description = [...
  'Threshold to set the FordVehSpdEngModLoQlyVld to False depending on st' ...
  'ate'];
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.EngDT = dt.u16;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.EngVal = 0;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.EngMin = 0;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.EngMax = 6000;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.CustomerVisible = false;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.Online = false;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.Impact = 'H';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.GraphLink = {''};
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.Monotony = 'None';
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.MaxGrad = 0;
FordMsg202BusHiSpdEngModLoQlyVldFaildThd.PortName = 'FordMsg202BusHiSpdEngModLoQlyVldFaildThd';


FordMsg202BusHiSpdEngModLoQlyVldMissThd = DataDict.Calibration;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.LongName = 'Ford Message 202 Bus High Speed Engine Module Low Quality Valid Missing Threshold';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.Description = [...
  'Threshold to set the FordVehSpdEngModLoQlyVld to False depending on st' ...
  'ate'];
FordMsg202BusHiSpdEngModLoQlyVldMissThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.EngDT = dt.u16;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.EngVal = 100;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.EngMin = 0;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.EngMax = 6000;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.CustomerVisible = false;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.Online = false;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.Impact = 'H';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.GraphLink = {''};
FordMsg202BusHiSpdEngModLoQlyVldMissThd.Monotony = 'None';
FordMsg202BusHiSpdEngModLoQlyVldMissThd.MaxGrad = 0;
FordMsg202BusHiSpdEngModLoQlyVldMissThd.PortName = 'FordMsg202BusHiSpdEngModLoQlyVldMissThd';


FordMsg202BusHiSpdEngModLoQlyVldPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.LongName = 'Ford Message 202 Bus High Speed Engine Module Low Quality Valid Passed Threshold';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.Description = [...
  'Threshold to set the FordVehSpdEngModLoQlyVld to True depending on sta' ...
  'te'];
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.EngVal = 0;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.EngMin = 0;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.EngMax = 6000;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.Online = false;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.Impact = 'H';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.GraphLink = {''};
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.Monotony = 'None';
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdEngModLoQlyVldPassdThd.PortName = 'FordMsg202BusHiSpdEngModLoQlyVldPassdThd';


FordMsg202BusHiSpdEngModlVldFaildThd = DataDict.Calibration;
FordMsg202BusHiSpdEngModlVldFaildThd.LongName = 'Ford Message 202 Bus High Speed Speed Engine Module Valid Failed Threshold';
FordMsg202BusHiSpdEngModlVldFaildThd.Description = [...
  'Threshold to set the FordVehSpdEngModlVld to False depending on state'];
FordMsg202BusHiSpdEngModlVldFaildThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdEngModlVldFaildThd.EngDT = dt.u16;
FordMsg202BusHiSpdEngModlVldFaildThd.EngVal = 0;
FordMsg202BusHiSpdEngModlVldFaildThd.EngMin = 0;
FordMsg202BusHiSpdEngModlVldFaildThd.EngMax = 6000;
FordMsg202BusHiSpdEngModlVldFaildThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdEngModlVldFaildThd.CustomerVisible = false;
FordMsg202BusHiSpdEngModlVldFaildThd.Online = false;
FordMsg202BusHiSpdEngModlVldFaildThd.Impact = 'H';
FordMsg202BusHiSpdEngModlVldFaildThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdEngModlVldFaildThd.GraphLink = {''};
FordMsg202BusHiSpdEngModlVldFaildThd.Monotony = 'None';
FordMsg202BusHiSpdEngModlVldFaildThd.MaxGrad = 0;
FordMsg202BusHiSpdEngModlVldFaildThd.PortName = 'FordMsg202BusHiSpdEngModlVldFaildThd';


FordMsg202BusHiSpdEngModlVldMissThd = DataDict.Calibration;
FordMsg202BusHiSpdEngModlVldMissThd.LongName = 'Ford Message 202 Bus High Speed Engine Module Valid Missing Threshold';
FordMsg202BusHiSpdEngModlVldMissThd.Description = [...
  'Threshold to set the FordMsg202BusHiSpdEngModlVldMissThd to False'];
FordMsg202BusHiSpdEngModlVldMissThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdEngModlVldMissThd.EngDT = dt.u16;
FordMsg202BusHiSpdEngModlVldMissThd.EngVal = 100;
FordMsg202BusHiSpdEngModlVldMissThd.EngMin = 0;
FordMsg202BusHiSpdEngModlVldMissThd.EngMax = 6000;
FordMsg202BusHiSpdEngModlVldMissThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdEngModlVldMissThd.CustomerVisible = false;
FordMsg202BusHiSpdEngModlVldMissThd.Online = false;
FordMsg202BusHiSpdEngModlVldMissThd.Impact = 'H';
FordMsg202BusHiSpdEngModlVldMissThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdEngModlVldMissThd.GraphLink = {''};
FordMsg202BusHiSpdEngModlVldMissThd.Monotony = 'None';
FordMsg202BusHiSpdEngModlVldMissThd.MaxGrad = 0;
FordMsg202BusHiSpdEngModlVldMissThd.PortName = 'FordMsg202BusHiSpdEngModlVldMissThd';


FordMsg202BusHiSpdGearRvsStsInvldFaildThd = DataDict.Calibration;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.LongName = 'Ford Vehicle Gear Reverse Status Invalid Failed Threshold';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.Description = [...
  'Threshold to set the Invalid message NTC'];
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.EngDT = dt.u16;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.EngVal = 0;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.EngMin = 0;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.EngMax = 6000;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.CustomerVisible = false;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.Online = false;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.Impact = 'L';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.GraphLink = {''};
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.Monotony = 'None';
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.MaxGrad = 0;
FordMsg202BusHiSpdGearRvsStsInvldFaildThd.PortName = 'FordMsg202BusHiSpdGearRvsStsInvldFaildThd';


FordMsg202BusHiSpdGearRvsStsInvldPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.LongName = 'Ford Vehicle Gear Reverse Status Invalid Passed Threshold';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.Description = [...
  'Threshold to Reset the Invalid message NTC'];
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.EngVal = 0;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.EngMin = 0;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.EngMax = 6000;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.Online = false;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.Impact = 'L';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.GraphLink = {''};
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.Monotony = 'None';
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdGearRvsStsInvldPassdThd.PortName = 'FordMsg202BusHiSpdGearRvsStsInvldPassdThd';


FordMsg202BusHiSpdGearRvsStsVldFaildThd = DataDict.Calibration;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.LongName = 'Ford Message 202 Bus High Speed Gear Reverse Status Valid Failed Threshold';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.Description = [...
  'Threshold to set the FordVehGearRvsStsVld to False depending on state'];
FordMsg202BusHiSpdGearRvsStsVldFaildThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.EngDT = dt.u16;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.EngVal = 0;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.EngMin = 0;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.EngMax = 6000;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.CustomerVisible = false;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.Online = false;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.Impact = 'H';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.GraphLink = {''};
FordMsg202BusHiSpdGearRvsStsVldFaildThd.Monotony = 'None';
FordMsg202BusHiSpdGearRvsStsVldFaildThd.MaxGrad = 0;
FordMsg202BusHiSpdGearRvsStsVldFaildThd.PortName = 'FordMsg202BusHiSpdGearRvsStsVldFaildThd';


FordMsg202BusHiSpdGearRvsStsVldMissThd = DataDict.Calibration;
FordMsg202BusHiSpdGearRvsStsVldMissThd.LongName = 'Ford Message 202 Bus High Speed Gear Reverse Status Valid Missing Threshold';
FordMsg202BusHiSpdGearRvsStsVldMissThd.Description = [...
  'Threshold to set the FordVehLoSpdMtnCtrlBrkSupportVld to False'];
FordMsg202BusHiSpdGearRvsStsVldMissThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdGearRvsStsVldMissThd.EngDT = dt.u16;
FordMsg202BusHiSpdGearRvsStsVldMissThd.EngVal = 100;
FordMsg202BusHiSpdGearRvsStsVldMissThd.EngMin = 0;
FordMsg202BusHiSpdGearRvsStsVldMissThd.EngMax = 6000;
FordMsg202BusHiSpdGearRvsStsVldMissThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdGearRvsStsVldMissThd.CustomerVisible = false;
FordMsg202BusHiSpdGearRvsStsVldMissThd.Online = false;
FordMsg202BusHiSpdGearRvsStsVldMissThd.Impact = 'H';
FordMsg202BusHiSpdGearRvsStsVldMissThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdGearRvsStsVldMissThd.GraphLink = {''};
FordMsg202BusHiSpdGearRvsStsVldMissThd.Monotony = 'None';
FordMsg202BusHiSpdGearRvsStsVldMissThd.MaxGrad = 0;
FordMsg202BusHiSpdGearRvsStsVldMissThd.PortName = 'FordMsg202BusHiSpdGearRvsStsVldMissThd';


FordMsg202BusHiSpdGearRvsStsVldPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.LongName = 'Ford Message 202 Bus High Speed Gear Reverse Status Valid Passed Threshold';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.Description = [...
  'Threshold to set the FordVehGearRvsStsVld to True depending on state'];
FordMsg202BusHiSpdGearRvsStsVldPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.EngVal = 0;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.EngMin = 0;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.EngMax = 6000;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.Online = false;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.Impact = 'H';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.GraphLink = {''};
FordMsg202BusHiSpdGearRvsStsVldPassdThd.Monotony = 'None';
FordMsg202BusHiSpdGearRvsStsVldPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdGearRvsStsVldPassdThd.PortName = 'FordMsg202BusHiSpdGearRvsStsVldPassdThd';


FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd = DataDict.Calibration;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.LongName = 'Ford Message 202 Bus High Speed Missing Message Failed Abs Present Disabled Threshold';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.EngDT = dt.u16;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.EngVal = 100;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.EngMin = 0;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.EngMax = 6000;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.CustomerVisible = false;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.Online = false;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.Impact = 'L';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.GraphLink = {''};
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.Monotony = 'None';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.MaxGrad = 0;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd.PortName = 'FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd';


FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd = DataDict.Calibration;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.LongName = 'Ford Message 202 Bus High Speed Missing Message Failed Abs Present Enabled Threshold';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.EngDT = dt.u16;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.EngVal = 100;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.EngMin = 0;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.EngMax = 6000;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.CustomerVisible = false;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.Online = false;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.Impact = 'L';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.GraphLink = {''};
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.Monotony = 'None';
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.MaxGrad = 0;
FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd.PortName = 'FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd';


FordMsg202BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdMissMsgPassdThd.LongName = 'Missing Message Passed Threshold';
FordMsg202BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg202BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdMissMsgPassdThd.EngVal = 100;
FordMsg202BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg202BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg202BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdMissMsgPassdThd.Online = false;
FordMsg202BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg202BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg202BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg202BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdMissMsgPassdThd.PortName = 'FordMsg202BusHiSpdMissMsgPassdThd';


FordMsg202BusHiSpdQlyFacEngModInvldFaildThd = DataDict.Calibration;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Invalid Failed Threshold';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.Description = [...
  'Threshold to set Ford Vehicle Speed Quality Factor Engine Module Inval' ...
  'id NTC to Fail'];
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.EngDT = dt.u16;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.EngVal = 0;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.EngMin = 0;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.EngMax = 6000;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.CustomerVisible = false;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.Online = false;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.Impact = 'L';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.GraphLink = {''};
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.Monotony = 'None';
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.MaxGrad = 0;
FordMsg202BusHiSpdQlyFacEngModInvldFaildThd.PortName = 'FordMsg202BusHiSpdQlyFacEngModInvldFaildThd';


FordMsg202BusHiSpdQlyFacEngModInvldPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Invalid Passed Threshold';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Speed Quality Factor Engine Module Inv' ...
  'alid NTC to Fail'];
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.EngVal = 0;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.EngMin = 0;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.EngMax = 6000;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.Online = false;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.Impact = 'L';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.GraphLink = {''};
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.Monotony = 'None';
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdQlyFacEngModInvldPassdThd.PortName = 'FordMsg202BusHiSpdQlyFacEngModInvldPassdThd';


FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd = DataDict.Calibration;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.LongName = 'Ford Message 202 Bus High Speed Trailer Backup Assist Available Valid Missing Threshold';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.Description = [...
  'Threshold to set the FordVehTrlrBackupAssiAvlVld to False depending on' ...
  ' state'];
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.EngDT = dt.u16;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.EngVal = 100;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.EngMin = 0;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.EngMax = 6000;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.CustomerVisible = false;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.Online = false;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.Impact = 'H';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.GraphLink = {''};
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.Monotony = 'None';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.MaxGrad = 0;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd.PortName = 'FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd';


FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd = DataDict.Calibration;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.LongName = 'Ford Message 202 Bus High Speed Trailer Backup Assist Available Valid Passed Threshold';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.Description = [...
  'Threshold to set the FordVehTrlrBackupAssiAvlVld to True depending on ' ...
  'state'];
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.DocUnits = 'MilliSec';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.EngDT = dt.u16;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.EngVal = 0;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.EngMin = 0;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.EngMax = 6000;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.Cardinality = 'Cmn';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.CustomerVisible = false;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.Online = false;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.Impact = 'H';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.TuningOwner = 'EPDT';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.GraphLink = {''};
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.Monotony = 'None';
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.MaxGrad = 0;
FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd.PortName = 'FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd';



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
  'Used to hold previous value of Clear Diagnostics Flag Proxy Previous'];
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


FordVehGearRvsStsInvldFaildRefTi = DataDict.PIM;
FordVehGearRvsStsInvldFaildRefTi.LongName = 'Ford Vehicle Gear Reverse Status Invalid Failed Reference Time';
FordVehGearRvsStsInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehGearRvsStsInvldFaildRefTi.DocUnits = 'Cnt';
FordVehGearRvsStsInvldFaildRefTi.EngDT = dt.u32;
FordVehGearRvsStsInvldFaildRefTi.EngMin = 0;
FordVehGearRvsStsInvldFaildRefTi.EngMax = 4294967295;
FordVehGearRvsStsInvldFaildRefTi.InitRowCol = [1  1];


FordVehGearRvsStsInvldPassdRefTi = DataDict.PIM;
FordVehGearRvsStsInvldPassdRefTi.LongName = 'Ford Vehicle Gear Reverse Status Invalid Passed Reference Time';
FordVehGearRvsStsInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehGearRvsStsInvldPassdRefTi.DocUnits = 'Cnt';
FordVehGearRvsStsInvldPassdRefTi.EngDT = dt.u32;
FordVehGearRvsStsInvldPassdRefTi.EngMin = 0;
FordVehGearRvsStsInvldPassdRefTi.EngMax = 4294967295;
FordVehGearRvsStsInvldPassdRefTi.InitRowCol = [1  1];


FordVehGearRvsStsPrev = DataDict.PIM;
FordVehGearRvsStsPrev.LongName = 'Ford Vehicle Gear Reverse Status Previous';
FordVehGearRvsStsPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Gear Reverse Status'];
FordVehGearRvsStsPrev.DocUnits = 'Cnt';
FordVehGearRvsStsPrev.EngDT = enum.Ford_GearRvrse_D_Actl;
FordVehGearRvsStsPrev.EngMin = Ford_GearRvrse_D_Actl.Cx0_Inactive_not_confirmed;
FordVehGearRvsStsPrev.EngMax = Ford_GearRvrse_D_Actl.Cx7_Fault;
FordVehGearRvsStsPrev.InitRowCol = [1  1];


FordVehGearRvsStsRawPrev = DataDict.PIM;
FordVehGearRvsStsRawPrev.LongName = 'Ford Vehicle Gear Reverse Status Raw Previous';
FordVehGearRvsStsRawPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Gear Reverse Status ' ...
  'Raw'];
FordVehGearRvsStsRawPrev.DocUnits = 'Cnt';
FordVehGearRvsStsRawPrev.EngDT = dt.u08;
FordVehGearRvsStsRawPrev.EngMin = 0;
FordVehGearRvsStsRawPrev.EngMax = 7;
FordVehGearRvsStsRawPrev.InitRowCol = [1  1];


FordVehGearRvsStsVldFaildRefTi = DataDict.PIM;
FordVehGearRvsStsVldFaildRefTi.LongName = 'Ford Vehicle Gear Reverse Status Valid Failed Reference Time';
FordVehGearRvsStsVldFaildRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehGearRvsStsVldFaildRefTi.DocUnits = 'Cnt';
FordVehGearRvsStsVldFaildRefTi.EngDT = dt.u32;
FordVehGearRvsStsVldFaildRefTi.EngMin = 0;
FordVehGearRvsStsVldFaildRefTi.EngMax = 4294967295;
FordVehGearRvsStsVldFaildRefTi.InitRowCol = [1  1];


FordVehGearRvsStsVldMissRefTi = DataDict.PIM;
FordVehGearRvsStsVldMissRefTi.LongName = 'Ford Vehicle Gear Reverse Status Valid Missing Reference Time';
FordVehGearRvsStsVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehGearRvsStsVldMissRefTi.DocUnits = 'Cnt';
FordVehGearRvsStsVldMissRefTi.EngDT = dt.u32;
FordVehGearRvsStsVldMissRefTi.EngMin = 0;
FordVehGearRvsStsVldMissRefTi.EngMax = 4294967295;
FordVehGearRvsStsVldMissRefTi.InitRowCol = [1  1];


FordVehGearRvsStsVldPassdRefTi = DataDict.PIM;
FordVehGearRvsStsVldPassdRefTi.LongName = 'Ford Vehicle Gear Reverse Status Valid Passed Reference Time';
FordVehGearRvsStsVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehGearRvsStsVldPassdRefTi.DocUnits = 'Cnt';
FordVehGearRvsStsVldPassdRefTi.EngDT = dt.u32;
FordVehGearRvsStsVldPassdRefTi.EngMin = 0;
FordVehGearRvsStsVldPassdRefTi.EngMax = 4294967295;
FordVehGearRvsStsVldPassdRefTi.InitRowCol = [1  1];


FordVehGearRvsStsVldPrev = DataDict.PIM;
FordVehGearRvsStsVldPrev.LongName = 'Ford Vehicle Gear Reverse Status Valid Previous';
FordVehGearRvsStsVldPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Gear Reverse Status ' ...
  'Valid'];
FordVehGearRvsStsVldPrev.DocUnits = 'Cnt';
FordVehGearRvsStsVldPrev.EngDT = dt.lgc;
FordVehGearRvsStsVldPrev.EngMin = 0;
FordVehGearRvsStsVldPrev.EngMax = 1;
FordVehGearRvsStsVldPrev.InitRowCol = [1  1];


FordVehMsg202Miss = DataDict.PIM;
FordVehMsg202Miss.LongName = 'Ford Vehicle Message 202 Missing';
FordVehMsg202Miss.Description = [...
  'Flag for missing message diagnostics, it is true when message is missi' ...
  'ng'];
FordVehMsg202Miss.DocUnits = 'Cnt';
FordVehMsg202Miss.EngDT = dt.lgc;
FordVehMsg202Miss.EngMin = 0;
FordVehMsg202Miss.EngMax = 1;
FordVehMsg202Miss.InitRowCol = [1  1];


FordVehMsg202Rxd = DataDict.PIM;
FordVehMsg202Rxd.LongName = 'Ford Vehicle Message 202 Received';
FordVehMsg202Rxd.Description = [...
  'Flag for missing message diagnostics, it is true when message is recei' ...
  'ved.'];
FordVehMsg202Rxd.DocUnits = 'Cnt';
FordVehMsg202Rxd.EngDT = dt.lgc;
FordVehMsg202Rxd.EngMin = 0;
FordVehMsg202Rxd.EngMax = 1;
FordVehMsg202Rxd.InitRowCol = [1  1];


FordVehSpdChksEngModlPrev = DataDict.PIM;
FordVehSpdChksEngModlPrev.LongName = 'Ford Vehicle Speed Checksum Engine Module Previous';
FordVehSpdChksEngModlPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Checksum Engin' ...
  'e Module'];
FordVehSpdChksEngModlPrev.DocUnits = 'Cnt';
FordVehSpdChksEngModlPrev.EngDT = dt.u08;
FordVehSpdChksEngModlPrev.EngMin = 0;
FordVehSpdChksEngModlPrev.EngMax = 255;
FordVehSpdChksEngModlPrev.InitRowCol = [1  1];


FordVehSpdCntrEngModlPrev = DataDict.PIM;
FordVehSpdCntrEngModlPrev.LongName = 'Ford Vehicle Speed Counter Engine Module Previous';
FordVehSpdCntrEngModlPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Counter Engine' ...
  ' Module'];
FordVehSpdCntrEngModlPrev.DocUnits = 'Cnt';
FordVehSpdCntrEngModlPrev.EngDT = dt.u08;
FordVehSpdCntrEngModlPrev.EngMin = 0;
FordVehSpdCntrEngModlPrev.EngMax = 15;
FordVehSpdCntrEngModlPrev.InitRowCol = [1  1];


FordVehSpdEngModLoQlyVldFaildRefTi = DataDict.PIM;
FordVehSpdEngModLoQlyVldFaildRefTi.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid Failed Reference Time';
FordVehSpdEngModLoQlyVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehSpdEngModLoQlyVldFaildRefTi.DocUnits = 'Cnt';
FordVehSpdEngModLoQlyVldFaildRefTi.EngDT = dt.u32;
FordVehSpdEngModLoQlyVldFaildRefTi.EngMin = 0;
FordVehSpdEngModLoQlyVldFaildRefTi.EngMax = 4294967295;
FordVehSpdEngModLoQlyVldFaildRefTi.InitRowCol = [1  1];


FordVehSpdEngModLoQlyVldMissRefTi = DataDict.PIM;
FordVehSpdEngModLoQlyVldMissRefTi.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid Missing Reference Time';
FordVehSpdEngModLoQlyVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehSpdEngModLoQlyVldMissRefTi.DocUnits = 'Cnt';
FordVehSpdEngModLoQlyVldMissRefTi.EngDT = dt.u32;
FordVehSpdEngModLoQlyVldMissRefTi.EngMin = 0;
FordVehSpdEngModLoQlyVldMissRefTi.EngMax = 4294967295;
FordVehSpdEngModLoQlyVldMissRefTi.InitRowCol = [1  1];


FordVehSpdEngModLoQlyVldPassdRefTi = DataDict.PIM;
FordVehSpdEngModLoQlyVldPassdRefTi.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid Passed Reference Time';
FordVehSpdEngModLoQlyVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehSpdEngModLoQlyVldPassdRefTi.DocUnits = 'Cnt';
FordVehSpdEngModLoQlyVldPassdRefTi.EngDT = dt.u32;
FordVehSpdEngModLoQlyVldPassdRefTi.EngMin = 0;
FordVehSpdEngModLoQlyVldPassdRefTi.EngMax = 4294967295;
FordVehSpdEngModLoQlyVldPassdRefTi.InitRowCol = [1  1];


FordVehSpdEngModLoQlyVldPrev = DataDict.PIM;
FordVehSpdEngModLoQlyVldPrev.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid Previous';
FordVehSpdEngModLoQlyVldPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Engine Module ' ...
  'Low Quality Valid'];
FordVehSpdEngModLoQlyVldPrev.DocUnits = 'Cnt';
FordVehSpdEngModLoQlyVldPrev.EngDT = dt.lgc;
FordVehSpdEngModLoQlyVldPrev.EngMin = 0;
FordVehSpdEngModLoQlyVldPrev.EngMax = 1;
FordVehSpdEngModLoQlyVldPrev.InitRowCol = [1  1];


FordVehSpdEngModlPrev = DataDict.PIM;
FordVehSpdEngModlPrev.LongName = 'Ford Vehicle Speed Engine Module Previous';
FordVehSpdEngModlPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Engine Module'];
FordVehSpdEngModlPrev.DocUnits = 'Kph';
FordVehSpdEngModlPrev.EngDT = dt.float32;
FordVehSpdEngModlPrev.EngMin = 0;
FordVehSpdEngModlPrev.EngMax = 655.35;
FordVehSpdEngModlPrev.InitRowCol = [1  1];


FordVehSpdEngModlRawPrev = DataDict.PIM;
FordVehSpdEngModlRawPrev.LongName = 'Ford Vehicle Speed Engine Module Raw Previous';
FordVehSpdEngModlRawPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Engine Module ' ...
  'Raw'];
FordVehSpdEngModlRawPrev.DocUnits = 'Cnt';
FordVehSpdEngModlRawPrev.EngDT = dt.u16;
FordVehSpdEngModlRawPrev.EngMin = 0;
FordVehSpdEngModlRawPrev.EngMax = 65535;
FordVehSpdEngModlRawPrev.InitRowCol = [1  1];


FordVehSpdEngModlVldFaildRefTi = DataDict.PIM;
FordVehSpdEngModlVldFaildRefTi.LongName = 'Ford Vehicle Speed Engine Module Valid Failed Reference Time';
FordVehSpdEngModlVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehSpdEngModlVldFaildRefTi.DocUnits = 'Cnt';
FordVehSpdEngModlVldFaildRefTi.EngDT = dt.u32;
FordVehSpdEngModlVldFaildRefTi.EngMin = 0;
FordVehSpdEngModlVldFaildRefTi.EngMax = 4294967295;
FordVehSpdEngModlVldFaildRefTi.InitRowCol = [1  1];


FordVehSpdEngModlVldMissRefTi = DataDict.PIM;
FordVehSpdEngModlVldMissRefTi.LongName = 'Ford Vehicle Speed Engine Module Valid Missing Reference Time';
FordVehSpdEngModlVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehSpdEngModlVldMissRefTi.DocUnits = 'Cnt';
FordVehSpdEngModlVldMissRefTi.EngDT = dt.u32;
FordVehSpdEngModlVldMissRefTi.EngMin = 0;
FordVehSpdEngModlVldMissRefTi.EngMax = 4294967295;
FordVehSpdEngModlVldMissRefTi.InitRowCol = [1  1];


FordVehSpdEngModlVldPrev = DataDict.PIM;
FordVehSpdEngModlVldPrev.LongName = 'Ford Vehicle Speed Engine Module Valid Previous';
FordVehSpdEngModlVldPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Engine Module ' ...
  'Valid'];
FordVehSpdEngModlVldPrev.DocUnits = 'Cnt';
FordVehSpdEngModlVldPrev.EngDT = dt.lgc;
FordVehSpdEngModlVldPrev.EngMin = 0;
FordVehSpdEngModlVldPrev.EngMax = 1;
FordVehSpdEngModlVldPrev.InitRowCol = [1  1];


FordVehSpdQlyFacEngModlInvldFaildRefTi = DataDict.PIM;
FordVehSpdQlyFacEngModlInvldFaildRefTi.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Invalid Failed Reference Time';
FordVehSpdQlyFacEngModlInvldFaildRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehSpdQlyFacEngModlInvldFaildRefTi.DocUnits = 'Cnt';
FordVehSpdQlyFacEngModlInvldFaildRefTi.EngDT = dt.u32;
FordVehSpdQlyFacEngModlInvldFaildRefTi.EngMin = 0;
FordVehSpdQlyFacEngModlInvldFaildRefTi.EngMax = 4294967295;
FordVehSpdQlyFacEngModlInvldFaildRefTi.InitRowCol = [1  1];


FordVehSpdQlyFacEngModlInvldPassdRefTi = DataDict.PIM;
FordVehSpdQlyFacEngModlInvldPassdRefTi.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Invalid Passed Reference Time';
FordVehSpdQlyFacEngModlInvldPassdRefTi.Description = [...
  'Timer for invalid message will increment or reset based on the conditi' ...
  'ons'];
FordVehSpdQlyFacEngModlInvldPassdRefTi.DocUnits = 'Cnt';
FordVehSpdQlyFacEngModlInvldPassdRefTi.EngDT = dt.u32;
FordVehSpdQlyFacEngModlInvldPassdRefTi.EngMin = 0;
FordVehSpdQlyFacEngModlInvldPassdRefTi.EngMax = 4294967295;
FordVehSpdQlyFacEngModlInvldPassdRefTi.InitRowCol = [1  1];


FordVehSpdQlyFacEngModlPrev = DataDict.PIM;
FordVehSpdQlyFacEngModlPrev.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Previous';
FordVehSpdQlyFacEngModlPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Speed Quality Factor' ...
  ' Engine Module'];
FordVehSpdQlyFacEngModlPrev.DocUnits = 'Cnt';
FordVehSpdQlyFacEngModlPrev.EngDT = enum.Ford_VehVActlEng_D_Qf;
FordVehSpdQlyFacEngModlPrev.EngMin = Ford_VehVActlEng_D_Qf.Cx0_Faulty;
FordVehSpdQlyFacEngModlPrev.EngMax = Ford_VehVActlEng_D_Qf.Cx3_OK;
FordVehSpdQlyFacEngModlPrev.InitRowCol = [1  1];


FordVehTrlrAidAvlPrev = DataDict.PIM;
FordVehTrlrAidAvlPrev.LongName = 'Ford Vehicle Trailer Aid Available Previous';
FordVehTrlrAidAvlPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Trailer Backup Assis' ...
  't Available'];
FordVehTrlrAidAvlPrev.DocUnits = 'Cnt';
FordVehTrlrAidAvlPrev.EngDT = enum.Ford_VehVTrlrAid_B_Avail;
FordVehTrlrAidAvlPrev.EngMin = Ford_VehVTrlrAid_B_Avail.Cx0_No;
FordVehTrlrAidAvlPrev.EngMax = Ford_VehVTrlrAid_B_Avail.Cx1_Yes;
FordVehTrlrAidAvlPrev.InitRowCol = [1  1];


FordVehTrlrAidAvlRawPrev = DataDict.PIM;
FordVehTrlrAidAvlRawPrev.LongName = 'Ford Vehicle Trailer Aid Available Raw Previous';
FordVehTrlrAidAvlRawPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Trailer Backup Assis' ...
  't Available Raw'];
FordVehTrlrAidAvlRawPrev.DocUnits = 'Cnt';
FordVehTrlrAidAvlRawPrev.EngDT = dt.u08;
FordVehTrlrAidAvlRawPrev.EngMin = 0;
FordVehTrlrAidAvlRawPrev.EngMax = 1;
FordVehTrlrAidAvlRawPrev.InitRowCol = [1  1];


FordVehTrlrBackupAssiAvlVldMissRefTi = DataDict.PIM;
FordVehTrlrBackupAssiAvlVldMissRefTi.LongName = 'Ford Vehicle Trailer Backup Assist Available Valid Missing Reference Time';
FordVehTrlrBackupAssiAvlVldMissRefTi.Description = [...
  'Timer for Valid Missing Reference Time will increment or reset based o' ...
  'n the conditions'];
FordVehTrlrBackupAssiAvlVldMissRefTi.DocUnits = 'Cnt';
FordVehTrlrBackupAssiAvlVldMissRefTi.EngDT = dt.u32;
FordVehTrlrBackupAssiAvlVldMissRefTi.EngMin = 0;
FordVehTrlrBackupAssiAvlVldMissRefTi.EngMax = 4294967295;
FordVehTrlrBackupAssiAvlVldMissRefTi.InitRowCol = [1  1];


FordVehTrlrBackupAssiAvlVldPassdRefTi = DataDict.PIM;
FordVehTrlrBackupAssiAvlVldPassdRefTi.LongName = 'Ford Vehicle Trailer Backup Assist Available Valid Passed Reference Time';
FordVehTrlrBackupAssiAvlVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehTrlrBackupAssiAvlVldPassdRefTi.DocUnits = 'Cnt';
FordVehTrlrBackupAssiAvlVldPassdRefTi.EngDT = dt.u32;
FordVehTrlrBackupAssiAvlVldPassdRefTi.EngMin = 0;
FordVehTrlrBackupAssiAvlVldPassdRefTi.EngMax = 4294967295;
FordVehTrlrBackupAssiAvlVldPassdRefTi.InitRowCol = [1  1];


FordVehTrlrBackupAssiAvlVldPrev = DataDict.PIM;
FordVehTrlrBackupAssiAvlVldPrev.LongName = 'Ford Vehicle Trailer Backup Assist Available Valid Previous';
FordVehTrlrBackupAssiAvlVldPrev.Description = [...
  'It is used to hold previous value of Ford Vehicle Trailer Backup Assis' ...
  't Available  Valid'];
FordVehTrlrBackupAssiAvlVldPrev.DocUnits = 'Cnt';
FordVehTrlrBackupAssiAvlVldPrev.EngDT = dt.lgc;
FordVehTrlrBackupAssiAvlVldPrev.EngMin = 0;
FordVehTrlrBackupAssiAvlVldPrev.EngMax = 1;
FordVehTrlrBackupAssiAvlVldPrev.InitRowCol = [1  1];


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


DTCENA_CNT_U08 = DataDict.Constant;
DTCENA_CNT_U08.LongName = 'DTC Enable';
DTCENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'l'];
DTCENA_CNT_U08.DocUnits = 'Cnt';
DTCENA_CNT_U08.EngDT = dt.u08;
DTCENA_CNT_U08.EngVal = 0;
DTCENA_CNT_U08.Define = 'Local';


GEARRVSSTSRAWMAX_CNT_U08 = DataDict.Constant;
GEARRVSSTSRAWMAX_CNT_U08.LongName = 'Gear Reverse Status Raw Maximum';
GEARRVSSTSRAWMAX_CNT_U08.Description = [...
  'Maximum value to limit output Ford Vehicle Gear Reverse Status Raw'];
GEARRVSSTSRAWMAX_CNT_U08.DocUnits = 'Cnt';
GEARRVSSTSRAWMAX_CNT_U08.EngDT = dt.u08;
GEARRVSSTSRAWMAX_CNT_U08.EngVal = 7;
GEARRVSSTSRAWMAX_CNT_U08.Define = 'Local';


GEARRVSSTSRAWMIN_CNT_U08 = DataDict.Constant;
GEARRVSSTSRAWMIN_CNT_U08.LongName = 'Gear Reverse Status Raw Minimum';
GEARRVSSTSRAWMIN_CNT_U08.Description = [...
  'Minimum value to limit output Ford Vehicle Gear Reverse Status Raw'];
GEARRVSSTSRAWMIN_CNT_U08.DocUnits = 'Cnt';
GEARRVSSTSRAWMIN_CNT_U08.EngDT = dt.u08;
GEARRVSSTSRAWMIN_CNT_U08.EngVal = 0;
GEARRVSSTSRAWMIN_CNT_U08.Define = 'Local';


MAXVAL_CNT_U08 = DataDict.Constant;
MAXVAL_CNT_U08.LongName = 'Maximum Value';
MAXVAL_CNT_U08.Description = [...
  'Maximum value to limit output Ford Vehicle Trailer Aid Available Raw'];
MAXVAL_CNT_U08.DocUnits = 'Cnt';
MAXVAL_CNT_U08.EngDT = dt.u08;
MAXVAL_CNT_U08.EngVal = 1;
MAXVAL_CNT_U08.Define = 'Local';


MINVAL_CNT_U08 = DataDict.Constant;
MINVAL_CNT_U08.LongName = 'Minimum Value';
MINVAL_CNT_U08.Description = [...
  'Minimum value to limit output Ford Vehicle Trailer Aid Available Raw'];
MINVAL_CNT_U08.DocUnits = 'Cnt';
MINVAL_CNT_U08.EngDT = dt.u08;
MINVAL_CNT_U08.EngVal = 0;
MINVAL_CNT_U08.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


SPDCHKSENGMODLMAX_CNT_U08 = DataDict.Constant;
SPDCHKSENGMODLMAX_CNT_U08.LongName = 'Speed Checksum Engine Module Maximum';
SPDCHKSENGMODLMAX_CNT_U08.Description = [...
  'Maximum value to limit output Ford Vehicle Speed Checksum Engine Modul' ...
  'e'];
SPDCHKSENGMODLMAX_CNT_U08.DocUnits = 'Cnt';
SPDCHKSENGMODLMAX_CNT_U08.EngDT = dt.u08;
SPDCHKSENGMODLMAX_CNT_U08.EngVal = 255;
SPDCHKSENGMODLMAX_CNT_U08.Define = 'Local';


SPDCHKSENGMODLMIN_CNT_U08 = DataDict.Constant;
SPDCHKSENGMODLMIN_CNT_U08.LongName = 'Speed Checksum Engine Module Minimum';
SPDCHKSENGMODLMIN_CNT_U08.Description = [...
  'Minimum value to limit output Ford Vehicle Speed Checksum Engine Modul' ...
  'e'];
SPDCHKSENGMODLMIN_CNT_U08.DocUnits = 'Cnt';
SPDCHKSENGMODLMIN_CNT_U08.EngDT = dt.u08;
SPDCHKSENGMODLMIN_CNT_U08.EngVal = 0;
SPDCHKSENGMODLMIN_CNT_U08.Define = 'Local';


SPDCNTRENGMODLMAX_CNT_U08 = DataDict.Constant;
SPDCNTRENGMODLMAX_CNT_U08.LongName = 'Speed Counter Engine Module Maximum';
SPDCNTRENGMODLMAX_CNT_U08.Description = [...
  'Maximum value to limit output Ford Vehicle Speed Counter Engine Module' ...
  ''];
SPDCNTRENGMODLMAX_CNT_U08.DocUnits = 'Cnt';
SPDCNTRENGMODLMAX_CNT_U08.EngDT = dt.u08;
SPDCNTRENGMODLMAX_CNT_U08.EngVal = 15;
SPDCNTRENGMODLMAX_CNT_U08.Define = 'Local';


SPDCNTRENGMODLMIN_CNT_U08 = DataDict.Constant;
SPDCNTRENGMODLMIN_CNT_U08.LongName = 'Speed Counter Engine Module Minimum';
SPDCNTRENGMODLMIN_CNT_U08.Description = [...
  'Minimum value to limit output Ford Vehicle Speed Counter Engine Module' ...
  ''];
SPDCNTRENGMODLMIN_CNT_U08.DocUnits = 'Cnt';
SPDCNTRENGMODLMIN_CNT_U08.EngDT = dt.u08;
SPDCNTRENGMODLMIN_CNT_U08.EngVal = 0;
SPDCNTRENGMODLMIN_CNT_U08.Define = 'Local';


SPDENGMODLMAX_KPH_F32 = DataDict.Constant;
SPDENGMODLMAX_KPH_F32.LongName = 'Speed Engine Module Maximum';
SPDENGMODLMAX_KPH_F32.Description = [...
  'Maximum value to limit output Ford Vehicle Speed Engine Module'];
SPDENGMODLMAX_KPH_F32.DocUnits = 'Kph';
SPDENGMODLMAX_KPH_F32.EngDT = dt.float32;
SPDENGMODLMAX_KPH_F32.EngVal = 655.35;
SPDENGMODLMAX_KPH_F32.Define = 'Local';


SPDENGMODLMIN_KPH_F32 = DataDict.Constant;
SPDENGMODLMIN_KPH_F32.LongName = 'Speed Engine Module Minimum';
SPDENGMODLMIN_KPH_F32.Description = [...
  'Minimum value to limit output Ford Vehicle Speed Engine Module'];
SPDENGMODLMIN_KPH_F32.DocUnits = 'Kph';
SPDENGMODLMIN_KPH_F32.EngDT = dt.float32;
SPDENGMODLMIN_KPH_F32.EngVal = 0;
SPDENGMODLMIN_KPH_F32.Define = 'Local';


SPDENGMODLRAWMAX_CNT_U16 = DataDict.Constant;
SPDENGMODLRAWMAX_CNT_U16.LongName = 'Speed Engine Module Raw Maximum';
SPDENGMODLRAWMAX_CNT_U16.Description = [...
  'Maximum value to limit output Ford Vehicle Speed Engine Module Raw'];
SPDENGMODLRAWMAX_CNT_U16.DocUnits = 'Cnt';
SPDENGMODLRAWMAX_CNT_U16.EngDT = dt.u16;
SPDENGMODLRAWMAX_CNT_U16.EngVal = 65535;
SPDENGMODLRAWMAX_CNT_U16.Define = 'Local';


SPDENGMODLRAWMIN_CNT_U16 = DataDict.Constant;
SPDENGMODLRAWMIN_CNT_U16.LongName = 'Speed Engine Module Raw Minimum';
SPDENGMODLRAWMIN_CNT_U16.Description = [...
  'Minimum value to limit output Ford Vehicle Speed Engine Module Raw'];
SPDENGMODLRAWMIN_CNT_U16.DocUnits = 'Cnt';
SPDENGMODLRAWMIN_CNT_U16.EngDT = dt.u16;
SPDENGMODLRAWMIN_CNT_U16.EngVal = 0;
SPDENGMODLRAWMIN_CNT_U16.Define = 'Local';


SPDENGMODLSCAGVAL_KPHPERCNT_F32 = DataDict.Constant;
SPDENGMODLSCAGVAL_KPHPERCNT_F32.LongName = 'Speed Engine Module Scaling Value';
SPDENGMODLSCAGVAL_KPHPERCNT_F32.Description = [...
  'Used for scaling of Ford Vehicle Speed Engine Module Raw'];
SPDENGMODLSCAGVAL_KPHPERCNT_F32.DocUnits = 'KphPerCnt';
SPDENGMODLSCAGVAL_KPHPERCNT_F32.EngDT = dt.float32;
SPDENGMODLSCAGVAL_KPHPERCNT_F32.EngVal = 0.01;
SPDENGMODLSCAGVAL_KPHPERCNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg202MissMsg = DataDict.NTC;
FordMsg202MissMsg.NtcNr = NtcNr1.NTCNR_0X122;
FordMsg202MissMsg.NtcTyp = 'None';
FordMsg202MissMsg.LongName = 'Ford Message 202 Missing Message';
FordMsg202MissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg202MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg202MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg202MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg202MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehGearRvsStsInvld = DataDict.NTC;
FordVehGearRvsStsInvld.NtcNr = NtcNr1.NTCNR_0X124;
FordVehGearRvsStsInvld.NtcTyp = 'None';
FordVehGearRvsStsInvld.LongName = 'Ford Vehicle Gear Reverse Status Invalid';
FordVehGearRvsStsInvld.Description = 'Used to set the NTC when invalid value is received for the signal and clear the NTC when valid value is received';
FordVehGearRvsStsInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehGearRvsStsInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehGearRvsStsInvld.NtcStsLockdThisIgnCyc = 0;


FordVehSpdQlyFacEngModlInvld = DataDict.NTC;
FordVehSpdQlyFacEngModlInvld.NtcNr = NtcNr1.NTCNR_0X123;
FordVehSpdQlyFacEngModlInvld.NtcTyp = 'None';
FordVehSpdQlyFacEngModlInvld.LongName = 'Ford Vehicle Speed Quality Factor Engine Module Invalid';
FordVehSpdQlyFacEngModlInvld.Description = 'Used to set the NTC when invalid value is received for the signal and clear the NTC when valid value is received';
FordVehSpdQlyFacEngModlInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehSpdQlyFacEngModlInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
