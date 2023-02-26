%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 20-Feb-2018 14:03:42       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM065A = DataDict.FDD;
MM065A.Version = '3.0.X';
MM065A.LongName = 'Ford Message 217 Bus High Speed';
MM065A.ShoName  = 'FordMsg217BusHiSpd';
MM065A.DesignASIL = 'B';
MM065A.Description = [...
  'The purpose of the Ford Message 217 Bus High Speed function is to prov' ...
  'idethe Electric Power Steering system with signal values for vehicle s' ...
  'peed, Active Nibble Control,TSC, Brake Oscillation Reduction, and Trai' ...
  'ler Back Up Assist functions from CAN. The Ford Message 217Bus High Sp' ...
  'eed function will perform the missing message and signal invalid diagn' ...
  'ostics as well as providea validity signal for the signal values and r' ...
  'eceived message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg217BusHiSpdInit1 = DataDict.Runnable;
FordMsg217BusHiSpdInit1.Context = 'Rte';
FordMsg217BusHiSpdInit1.TimeStep = 0;
FordMsg217BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg217BusHiSpdPer1 = DataDict.Runnable;
FordMsg217BusHiSpdPer1.Context = 'Rte';
FordMsg217BusHiSpdPer1.TimeStep = 0.01;
FordMsg217BusHiSpdPer1.Description = 'Periodic Runnable at 10 millisec ';

ComIPduCallout_WheelSpeed_HS2 = DataDict.SrvRunnable;
ComIPduCallout_WheelSpeed_HS2.Context = 'NonRte';
ComIPduCallout_WheelSpeed_HS2.Description = [...
  'Server Runnable for Message reception'];
ComIPduCallout_WheelSpeed_HS2.Return = DataDict.CSReturn;
ComIPduCallout_WheelSpeed_HS2.Return.Type = 'None';
ComIPduCallout_WheelSpeed_HS2.Return.Min = [];
ComIPduCallout_WheelSpeed_HS2.Return.Max = [];
ComIPduCallout_WheelSpeed_HS2.Return.TestTolerance = [];
ComIPduCallout_WheelSpeed_HS2.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_WheelSpeed_HS2.Arguments(1).Name = 'WheelSpeed';
ComIPduCallout_WheelSpeed_HS2.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_WheelSpeed_HS2.Arguments(1).EngMin = 0;
ComIPduCallout_WheelSpeed_HS2.Arguments(1).EngMax = 1;
ComIPduCallout_WheelSpeed_HS2.Arguments(1).TestTolerance = 0;
ComIPduCallout_WheelSpeed_HS2.Arguments(1).Units = 'Cnt';
ComIPduCallout_WheelSpeed_HS2.Arguments(1).Direction = 'Out';
ComIPduCallout_WheelSpeed_HS2.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_WheelSpeed_HS2.Arguments(1).Description = [...
  'WheelSpeed is set to one when service is invoked'];

ComTimeoutNotification_WhlFl_W_Meas = DataDict.SrvRunnable;
ComTimeoutNotification_WhlFl_W_Meas.Context = 'NonRte';
ComTimeoutNotification_WhlFl_W_Meas.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_WhlFl_W_Meas.Return = DataDict.CSReturn;
ComTimeoutNotification_WhlFl_W_Meas.Return.Type = 'None';
ComTimeoutNotification_WhlFl_W_Meas.Return.Min = [];
ComTimeoutNotification_WhlFl_W_Meas.Return.Max = [];
ComTimeoutNotification_WhlFl_W_Meas.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg217BusHiSpdInit1','FordMsg217BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg217BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg217BusHiSpdPer1'};
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
ClrDiagcFlgProxy.LongName = 'Ford ClrDiagcFlgProxy Inhibit';
ClrDiagcFlgProxy.Description = [...
  'When ClrDiagcFlgProxy is True, Diagnostic test is performed'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg217BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordAbsPrsnt = DataDict.IpSignal;
FordAbsPrsnt.LongName = 'Ford ABS Present';
FordAbsPrsnt.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordAbsPrsnt.DocUnits = 'Cnt';
FordAbsPrsnt.EngDT = dt.lgc;
FordAbsPrsnt.EngInit = 0;
FordAbsPrsnt.EngMin = 0;
FordAbsPrsnt.EngMax = 1;
FordAbsPrsnt.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordAbsPrsnt.ReadType = 'Rte';


FordActvNiblCtrlEnad = DataDict.IpSignal;
FordActvNiblCtrlEnad.LongName = 'Ford Active Nibble Control Enabled';
FordActvNiblCtrlEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordActvNiblCtrlEnad.DocUnits = 'Cnt';
FordActvNiblCtrlEnad.EngDT = dt.lgc;
FordActvNiblCtrlEnad.EngInit = 0;
FordActvNiblCtrlEnad.EngMin = 0;
FordActvNiblCtrlEnad.EngMax = 1;
FordActvNiblCtrlEnad.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordActvNiblCtrlEnad.ReadType = 'Rte';


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
FordBrkOscnRednEnad.ReadIn = {'FordMsg217BusHiSpdPer1'};
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
FordCanDtcInhb.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide calibration value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordInvldMsgDiagcInhb = DataDict.IpSignal;
FordInvldMsgDiagcInhb.LongName = 'Ford InvldMsgDiagcInhb Inhibit';
FordInvldMsgDiagcInhb.Description = [...
  'When InvldMsgDiagcInhb is True, Diagnostic test is performed'];
FordInvldMsgDiagcInhb.DocUnits = 'Cnt';
FordInvldMsgDiagcInhb.EngDT = dt.u08;
FordInvldMsgDiagcInhb.EngInit = 0;
FordInvldMsgDiagcInhb.EngMin = 0;
FordInvldMsgDiagcInhb.EngMax = 1;
FordInvldMsgDiagcInhb.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordInvldMsgDiagcInhb.ReadType = 'Rte';


FordMfgDiagcInhb = DataDict.IpSignal;
FordMfgDiagcInhb.LongName = 'Ford Mfg Diagc Inhibit';
FordMfgDiagcInhb.Description = [...
  'When Mfg Diagc Inhibit is True, Diagnostic test is performed'];
FordMfgDiagcInhb.DocUnits = 'Cnt';
FordMfgDiagcInhb.EngDT = dt.u08;
FordMfgDiagcInhb.EngInit = 0;
FordMfgDiagcInhb.EngMin = 0;
FordMfgDiagcInhb.EngMax = 1;
FordMfgDiagcInhb.ReadIn = {'FordMsg217BusHiSpdPer1'};
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
FordMissMsgDiagcInhb.ReadIn = {'FordMsg217BusHiSpdPer1'};
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
FordTqSteerCmpEnad.ReadIn = {'FordMsg217BusHiSpdPer1'};
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
FordTrlrBackupAssiEnad.ReadIn = {'FordMsg217BusHiSpdPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


Ford_WhlFl_W_Meas = DataDict.IpSignal;
Ford_WhlFl_W_Meas.LongName = 'Front Left Wheel Speed';
Ford_WhlFl_W_Meas.Description = [...
  'It is a message signal is received from CAN bus which will beprocessed' ...
  ' and used in EPS'];
Ford_WhlFl_W_Meas.DocUnits = 'Cnt';
Ford_WhlFl_W_Meas.EngDT = dt.u16;
Ford_WhlFl_W_Meas.EngInit = 0;
Ford_WhlFl_W_Meas.EngMin = 0;
Ford_WhlFl_W_Meas.EngMax = 32767;
Ford_WhlFl_W_Meas.ReadIn = {'FordMsg217BusHiSpdPer1'};
Ford_WhlFl_W_Meas.ReadType = 'Rte';


Ford_WhlFr_W_Meas = DataDict.IpSignal;
Ford_WhlFr_W_Meas.LongName = 'Front Right Wheel Speed';
Ford_WhlFr_W_Meas.Description = [...
  'It is a message signal is received from CAN bus which will beprocessed' ...
  ' and used in EPS'];
Ford_WhlFr_W_Meas.DocUnits = 'Cnt';
Ford_WhlFr_W_Meas.EngDT = dt.u16;
Ford_WhlFr_W_Meas.EngInit = 0;
Ford_WhlFr_W_Meas.EngMin = 0;
Ford_WhlFr_W_Meas.EngMax = 32767;
Ford_WhlFr_W_Meas.ReadIn = {'FordMsg217BusHiSpdPer1'};
Ford_WhlFr_W_Meas.ReadType = 'Rte';


Ford_WhlRl_W_Meas = DataDict.IpSignal;
Ford_WhlRl_W_Meas.LongName = 'Rear Left Wheel Speed';
Ford_WhlRl_W_Meas.Description = [...
  'It is a message signal is received from CAN bus which will beprocessed' ...
  ' and used in EPS'];
Ford_WhlRl_W_Meas.DocUnits = 'Cnt';
Ford_WhlRl_W_Meas.EngDT = dt.u16;
Ford_WhlRl_W_Meas.EngInit = 0;
Ford_WhlRl_W_Meas.EngMin = 0;
Ford_WhlRl_W_Meas.EngMax = 32767;
Ford_WhlRl_W_Meas.ReadIn = {'FordMsg217BusHiSpdPer1'};
Ford_WhlRl_W_Meas.ReadType = 'Rte';


Ford_WhlRr_W_Meas = DataDict.IpSignal;
Ford_WhlRr_W_Meas.LongName = 'Rear Right Wheel Speed';
Ford_WhlRr_W_Meas.Description = [...
  'It is a message signal is received from CAN bus which will beprocessed' ...
  ' and used in EPS'];
Ford_WhlRr_W_Meas.DocUnits = 'Cnt';
Ford_WhlRr_W_Meas.EngDT = dt.u16;
Ford_WhlRr_W_Meas.EngInit = 0;
Ford_WhlRr_W_Meas.EngMin = 0;
Ford_WhlRr_W_Meas.EngMax = 32767;
Ford_WhlRr_W_Meas.ReadIn = {'FordMsg217BusHiSpdPer1'};
Ford_WhlRr_W_Meas.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehFrntLeWhlSpd = DataDict.OpSignal;
FordVehFrntLeWhlSpd.LongName = 'Ford Vehicle Front Left Wheel Speed';
FordVehFrntLeWhlSpd.Description = [...
  'Processed value of Ford Vehicle Front Left Wheel Speed Raw tobe used b' ...
  'y EPS'];
FordVehFrntLeWhlSpd.DocUnits = 'RadPerSec';
FordVehFrntLeWhlSpd.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntLeWhlSpd.EngDT = dt.float32;
FordVehFrntLeWhlSpd.EngInit = 0;
FordVehFrntLeWhlSpd.EngMin = 0;
FordVehFrntLeWhlSpd.EngMax = 327.65;
FordVehFrntLeWhlSpd.TestTolerance = 0.05;
FordVehFrntLeWhlSpd.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntLeWhlSpd.WriteType = 'Rte';


FordVehFrntLeWhlSpdRaw = DataDict.OpSignal;
FordVehFrntLeWhlSpdRaw.LongName = 'Ford Vehicle Front Left Wheel Speed Raw';
FordVehFrntLeWhlSpdRaw.Description = [...
  'Front Left Wheel Speed value is assigned to Ford Vehicle Front Left Wh' ...
  'eel Speed Raw tobe used by EPS'];
FordVehFrntLeWhlSpdRaw.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdRaw.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntLeWhlSpdRaw.EngDT = dt.u16;
FordVehFrntLeWhlSpdRaw.EngInit = 0;
FordVehFrntLeWhlSpdRaw.EngMin = 0;
FordVehFrntLeWhlSpdRaw.EngMax = 32767;
FordVehFrntLeWhlSpdRaw.TestTolerance = 0;
FordVehFrntLeWhlSpdRaw.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntLeWhlSpdRaw.WriteType = 'Rte';


FordVehFrntLeWhlSpdVld = DataDict.OpSignal;
FordVehFrntLeWhlSpdVld.LongName = 'Ford Vehicle Front Left Wheel Speed Valid';
FordVehFrntLeWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Front Left Wheel Speed' ...
  ''];
FordVehFrntLeWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdVld.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntLeWhlSpdVld.EngDT = dt.lgc;
FordVehFrntLeWhlSpdVld.EngInit = 0;
FordVehFrntLeWhlSpdVld.EngMin = 0;
FordVehFrntLeWhlSpdVld.EngMax = 1;
FordVehFrntLeWhlSpdVld.TestTolerance = 0;
FordVehFrntLeWhlSpdVld.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntLeWhlSpdVld.WriteType = 'Rte';


FordVehFrntRiWhlSpd = DataDict.OpSignal;
FordVehFrntRiWhlSpd.LongName = 'Ford Vehicle Front Right Wheel Speed';
FordVehFrntRiWhlSpd.Description = [...
  'Processed value of Ford Vehicle Front Right Wheel Speed Raw tobe used ' ...
  'by EPS'];
FordVehFrntRiWhlSpd.DocUnits = 'RadPerSec';
FordVehFrntRiWhlSpd.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntRiWhlSpd.EngDT = dt.float32;
FordVehFrntRiWhlSpd.EngInit = 0;
FordVehFrntRiWhlSpd.EngMin = 0;
FordVehFrntRiWhlSpd.EngMax = 327.65;
FordVehFrntRiWhlSpd.TestTolerance = 0.05;
FordVehFrntRiWhlSpd.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntRiWhlSpd.WriteType = 'Rte';


FordVehFrntRiWhlSpdRaw = DataDict.OpSignal;
FordVehFrntRiWhlSpdRaw.LongName = 'Ford Vehicle Front Right Wheel Speed Raw';
FordVehFrntRiWhlSpdRaw.Description = [...
  'Front Right Wheel Speed value is assigned to Ford Vehicle Front Right ' ...
  'Wheel Speed Raw tobe used by EPS'];
FordVehFrntRiWhlSpdRaw.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdRaw.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntRiWhlSpdRaw.EngDT = dt.u16;
FordVehFrntRiWhlSpdRaw.EngInit = 0;
FordVehFrntRiWhlSpdRaw.EngMin = 0;
FordVehFrntRiWhlSpdRaw.EngMax = 32767;
FordVehFrntRiWhlSpdRaw.TestTolerance = 0;
FordVehFrntRiWhlSpdRaw.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntRiWhlSpdRaw.WriteType = 'Rte';


FordVehFrntRiWhlSpdVld = DataDict.OpSignal;
FordVehFrntRiWhlSpdVld.LongName = 'Ford Vehicle Front Right Wheel Speed Valid';
FordVehFrntRiWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Front Right Wheel Spee' ...
  'd'];
FordVehFrntRiWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdVld.SwcShoName = 'FordMsg217BusHiSpd';
FordVehFrntRiWhlSpdVld.EngDT = dt.lgc;
FordVehFrntRiWhlSpdVld.EngInit = 0;
FordVehFrntRiWhlSpdVld.EngMin = 0;
FordVehFrntRiWhlSpdVld.EngMax = 1;
FordVehFrntRiWhlSpdVld.TestTolerance = 0;
FordVehFrntRiWhlSpdVld.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehFrntRiWhlSpdVld.WriteType = 'Rte';


FordVehReLeWhlSpd = DataDict.OpSignal;
FordVehReLeWhlSpd.LongName = 'Ford Vehicle Rear Left Wheel Speed';
FordVehReLeWhlSpd.Description = [...
  'Processed value of Ford Vehicle Rear Left Wheel Speed Raw tobe used by' ...
  ' EPS'];
FordVehReLeWhlSpd.DocUnits = 'RadPerSec';
FordVehReLeWhlSpd.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReLeWhlSpd.EngDT = dt.float32;
FordVehReLeWhlSpd.EngInit = 0;
FordVehReLeWhlSpd.EngMin = 0;
FordVehReLeWhlSpd.EngMax = 327.65;
FordVehReLeWhlSpd.TestTolerance = 0.05;
FordVehReLeWhlSpd.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReLeWhlSpd.WriteType = 'Rte';


FordVehReLeWhlSpdRaw = DataDict.OpSignal;
FordVehReLeWhlSpdRaw.LongName = 'Ford Vehicle Rear Left Wheel Speed Raw';
FordVehReLeWhlSpdRaw.Description = [...
  'Rear Left Wheel Speed value is assigned to Ford Vehicle Rear Left Whee' ...
  'l Speed Raw tobe used by EPS'];
FordVehReLeWhlSpdRaw.DocUnits = 'Cnt';
FordVehReLeWhlSpdRaw.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReLeWhlSpdRaw.EngDT = dt.u16;
FordVehReLeWhlSpdRaw.EngInit = 0;
FordVehReLeWhlSpdRaw.EngMin = 0;
FordVehReLeWhlSpdRaw.EngMax = 32767;
FordVehReLeWhlSpdRaw.TestTolerance = 0;
FordVehReLeWhlSpdRaw.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReLeWhlSpdRaw.WriteType = 'Rte';


FordVehReLeWhlSpdVld = DataDict.OpSignal;
FordVehReLeWhlSpdVld.LongName = 'Ford Vehicle Rear Left Wheel Speed Valid';
FordVehReLeWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Rear Left Wheel Speed'];
FordVehReLeWhlSpdVld.DocUnits = 'Cnt';
FordVehReLeWhlSpdVld.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReLeWhlSpdVld.EngDT = dt.lgc;
FordVehReLeWhlSpdVld.EngInit = 0;
FordVehReLeWhlSpdVld.EngMin = 0;
FordVehReLeWhlSpdVld.EngMax = 1;
FordVehReLeWhlSpdVld.TestTolerance = 0;
FordVehReLeWhlSpdVld.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReLeWhlSpdVld.WriteType = 'Rte';


FordVehReRiWhlSpd = DataDict.OpSignal;
FordVehReRiWhlSpd.LongName = 'Ford Vehicle Rear Right Wheel Speed';
FordVehReRiWhlSpd.Description = [...
  'Processed value of Ford Vehicle Rear Right Wheel Speed Raw tobe used b' ...
  'y EPS'];
FordVehReRiWhlSpd.DocUnits = 'RadPerSec';
FordVehReRiWhlSpd.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReRiWhlSpd.EngDT = dt.float32;
FordVehReRiWhlSpd.EngInit = 0;
FordVehReRiWhlSpd.EngMin = 0;
FordVehReRiWhlSpd.EngMax = 327.65;
FordVehReRiWhlSpd.TestTolerance = 0.05;
FordVehReRiWhlSpd.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReRiWhlSpd.WriteType = 'Rte';


FordVehReRiWhlSpdRaw = DataDict.OpSignal;
FordVehReRiWhlSpdRaw.LongName = 'Ford Vehicle Rear Right Wheel Speed Raw';
FordVehReRiWhlSpdRaw.Description = [...
  'Rear Right Wheel Speed value is assigned to Ford Vehicle Rear Right Wh' ...
  'eel Speed Raw tobe used by EPS'];
FordVehReRiWhlSpdRaw.DocUnits = 'Cnt';
FordVehReRiWhlSpdRaw.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReRiWhlSpdRaw.EngDT = dt.u16;
FordVehReRiWhlSpdRaw.EngInit = 0;
FordVehReRiWhlSpdRaw.EngMin = 0;
FordVehReRiWhlSpdRaw.EngMax = 32767;
FordVehReRiWhlSpdRaw.TestTolerance = 0;
FordVehReRiWhlSpdRaw.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReRiWhlSpdRaw.WriteType = 'Rte';


FordVehReRiWhlSpdVld = DataDict.OpSignal;
FordVehReRiWhlSpdVld.LongName = 'Ford Vehicle Rear Right Wheel Speed Valid';
FordVehReRiWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Rear Right Wheel Speed' ...
  ''];
FordVehReRiWhlSpdVld.DocUnits = 'Cnt';
FordVehReRiWhlSpdVld.SwcShoName = 'FordMsg217BusHiSpd';
FordVehReRiWhlSpdVld.EngDT = dt.lgc;
FordVehReRiWhlSpdVld.EngInit = 0;
FordVehReRiWhlSpdVld.EngMin = 0;
FordVehReRiWhlSpdVld.EngMax = 1;
FordVehReRiWhlSpdVld.TestTolerance = 0;
FordVehReRiWhlSpdVld.WrittenIn = {'FordMsg217BusHiSpdPer1'};
FordVehReRiWhlSpdVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid Failed Threshold';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.Description = [...
  'Threshold to set Ford Vehicle Front Left Wheel Speed Invalid NTC to Fa' ...
  'il'];
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.EngVal = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.EngMin = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.Online = false;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.Impact = 'L';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd.PortName = 'FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd';


FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid Passed Threshold';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Front Left Wheel Speed Invalid NTC'];
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.EngVal = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.EngMin = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.Online = false;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.Impact = 'L';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd.PortName = 'FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd';


FordMsg217BusHiSpdFrntLeWhlVldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.LongName = 'Ford Message 217 Bus High Speed Front Left Wheel Valid Failed Threshold';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.Description = [...
  'Threshold to set the FordVehFrntLeWhlSpdVld to False depending on stat' ...
  'e'];
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.EngVal = 0;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.EngMin = 0;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.Online = false;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.Impact = 'H';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntLeWhlVldFaildThd.PortName = 'FordMsg217BusHiSpdFrntLeWhlVldFaildThd';


FordMsg217BusHiSpdFrntLeWhlVldMissThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.LongName = 'Ford Message 217 Bus High Speed Front Left Wheel Valid Miss Threshold';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.Description = [...
  'Threshold to set the FordVehFrntLeWhlSpdVld to False'];
FordMsg217BusHiSpdFrntLeWhlVldMissThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.EngVal = 100;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.EngMin = 0;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.EngMax = 6000;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.Online = false;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.Impact = 'H';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.GraphLink = {''};
FordMsg217BusHiSpdFrntLeWhlVldMissThd.Monotony = 'None';
FordMsg217BusHiSpdFrntLeWhlVldMissThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntLeWhlVldMissThd.PortName = 'FordMsg217BusHiSpdFrntLeWhlVldMissThd';


FordMsg217BusHiSpdFrntLeWhlVldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.LongName = 'Ford Message 217 Bus High Speed Front Left Wheel Valid Passd Threshold';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.Description = [...
  'Threshold to set the FordVehFrntLeWhlSpdVld to True depending on state' ...
  ''];
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.EngVal = 0;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.EngMin = 0;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.Online = false;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.Impact = 'H';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntLeWhlVldPassdThd.PortName = 'FordMsg217BusHiSpdFrntLeWhlVldPassdThd';


FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.LongName = 'Ford Vehicle Front Right Wheel Speed Invalid Failed Threshold';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.Description = [...
  'Threshold to set Ford Vehicle Front Right Wheel Speed Invalid NTC to F' ...
  'ail'];
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.EngVal = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.EngMin = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.Online = false;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.Impact = 'L';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd.PortName = 'FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd';


FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.LongName = 'Ford Vehicle Front Right Wheel Speed Invalid Passed Threshold';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Front Right Wheel Speed Invalid NTC'];
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.EngVal = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.EngMin = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.Online = false;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.Impact = 'L';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd.PortName = 'FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd';


FordMsg217BusHiSpdFrntRiWhlVldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.LongName = 'Ford Message 217 Bus High Speed Front Right Wheel Valid Failed Threshold';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.Description = [...
  'Threshold to set the FordVehFrntRiWhlSpdVld to False depending on stat' ...
  'e'];
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.EngVal = 0;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.EngMin = 0;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.Online = false;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.Impact = 'H';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntRiWhlVldFaildThd.PortName = 'FordMsg217BusHiSpdFrntRiWhlVldFaildThd';


FordMsg217BusHiSpdFrntRiWhlVldMissThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.LongName = 'Ford Message 217 Bus High Speed Front Right Wheel Valid Miss Threshold';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.Description = [...
  'Threshold to set the FordVehFrntRiWhlSpdVld to False'];
FordMsg217BusHiSpdFrntRiWhlVldMissThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.EngVal = 100;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.EngMin = 0;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.EngMax = 6000;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.Online = false;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.Impact = 'H';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.GraphLink = {''};
FordMsg217BusHiSpdFrntRiWhlVldMissThd.Monotony = 'None';
FordMsg217BusHiSpdFrntRiWhlVldMissThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntRiWhlVldMissThd.PortName = 'FordMsg217BusHiSpdFrntRiWhlVldMissThd';


FordMsg217BusHiSpdFrntRiWhlVldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.LongName = 'Ford Message 217 Bus High Speed Front Right Wheel Valid Passd Threshold';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.Description = [...
  'Threshold to set the FordVehFrntRiWhlSpdVld to True depending on state' ...
  ''];
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.EngVal = 0;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.EngMin = 0;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.Online = false;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.Impact = 'H';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdFrntRiWhlVldPassdThd.PortName = 'FordMsg217BusHiSpdFrntRiWhlVldPassdThd';


FordMsg217BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 217 Bus High Speed Missing Message Failed Threshold';
FordMsg217BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set Missing Message NTC to Fail'];
FordMsg217BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdMissMsgFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdMissMsgFaildThd.EngVal = 100;
FordMsg217BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg217BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg217BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdMissMsgFaildThd.Online = false;
FordMsg217BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg217BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg217BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg217BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdMissMsgFaildThd.PortName = 'FordMsg217BusHiSpdMissMsgFaildThd';


FordMsg217BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 217 Bus High Speed Missing Message Passed Threshold';
FordMsg217BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to Reset Missing Message NTC'];
FordMsg217BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdMissMsgPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg217BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg217BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg217BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdMissMsgPassdThd.Online = false;
FordMsg217BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg217BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg217BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg217BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdMissMsgPassdThd.PortName = 'FordMsg217BusHiSpdMissMsgPassdThd';


FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.LongName = 'Ford Vehicle Rear Left Wheel Speed Invalid Failed Threshold';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.Description = [...
  'Threshold to set Ford Vehicle Rear Left Wheel Speed Invalid NTC to Fai' ...
  'l'];
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.EngVal = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.EngMin = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.Online = false;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.Impact = 'L';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd.PortName = 'FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd';


FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.LongName = 'Ford Vehicle Rear Left Wheel Speed Invalid Passed Threshold';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Rear Left Wheel Speed Invalid NTC'];
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.EngVal = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.EngMin = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.Online = false;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.Impact = 'L';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd.PortName = 'FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd';


FordMsg217BusHiSpdReLeWhlVldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdReLeWhlVldFaildThd.LongName = 'Ford Message 217 Bus High Speed Rare Left Wheel Valid Failed Threshold';
FordMsg217BusHiSpdReLeWhlVldFaildThd.Description = [...
  'Threshold to set the FordVehReLeWhlSpdVld to True depending on state'];
FordMsg217BusHiSpdReLeWhlVldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReLeWhlVldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReLeWhlVldFaildThd.EngVal = 0;
FordMsg217BusHiSpdReLeWhlVldFaildThd.EngMin = 0;
FordMsg217BusHiSpdReLeWhlVldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdReLeWhlVldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReLeWhlVldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdReLeWhlVldFaildThd.Online = false;
FordMsg217BusHiSpdReLeWhlVldFaildThd.Impact = 'H';
FordMsg217BusHiSpdReLeWhlVldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReLeWhlVldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdReLeWhlVldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdReLeWhlVldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdReLeWhlVldFaildThd.PortName = 'FordMsg217BusHiSpdReLeWhlVldFaildThd';


FordMsg217BusHiSpdReLeWhlVldMissThd = DataDict.Calibration;
FordMsg217BusHiSpdReLeWhlVldMissThd.LongName = 'Ford Message 217 Bus High Speed Rare Left Wheel Valid Miss Threshold';
FordMsg217BusHiSpdReLeWhlVldMissThd.Description = [...
  'Threshold to set the FordVehReLeWhlSpdVld to False'];
FordMsg217BusHiSpdReLeWhlVldMissThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReLeWhlVldMissThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReLeWhlVldMissThd.EngVal = 100;
FordMsg217BusHiSpdReLeWhlVldMissThd.EngMin = 0;
FordMsg217BusHiSpdReLeWhlVldMissThd.EngMax = 6000;
FordMsg217BusHiSpdReLeWhlVldMissThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReLeWhlVldMissThd.CustomerVisible = false;
FordMsg217BusHiSpdReLeWhlVldMissThd.Online = false;
FordMsg217BusHiSpdReLeWhlVldMissThd.Impact = 'H';
FordMsg217BusHiSpdReLeWhlVldMissThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReLeWhlVldMissThd.GraphLink = {''};
FordMsg217BusHiSpdReLeWhlVldMissThd.Monotony = 'None';
FordMsg217BusHiSpdReLeWhlVldMissThd.MaxGrad = 0;
FordMsg217BusHiSpdReLeWhlVldMissThd.PortName = 'FordMsg217BusHiSpdReLeWhlVldMissThd';


FordMsg217BusHiSpdReLeWhlVldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdReLeWhlVldPassdThd.LongName = 'Ford Message 217 Bus High Speed Rare Left Wheel Valid Passd Threshold';
FordMsg217BusHiSpdReLeWhlVldPassdThd.Description = [...
  'Threshold to set the FordVehReLeWhlSpdVld to True depending on state'];
FordMsg217BusHiSpdReLeWhlVldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReLeWhlVldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReLeWhlVldPassdThd.EngVal = 0;
FordMsg217BusHiSpdReLeWhlVldPassdThd.EngMin = 0;
FordMsg217BusHiSpdReLeWhlVldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdReLeWhlVldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReLeWhlVldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdReLeWhlVldPassdThd.Online = false;
FordMsg217BusHiSpdReLeWhlVldPassdThd.Impact = 'H';
FordMsg217BusHiSpdReLeWhlVldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReLeWhlVldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdReLeWhlVldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdReLeWhlVldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdReLeWhlVldPassdThd.PortName = 'FordMsg217BusHiSpdReLeWhlVldPassdThd';


FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.LongName = 'Ford Vehicle Rear Right Wheel Speed Invalid Failed Threshold';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.Description = [...
  'Threshold to set Ford Vehicle Rear Right Wheel Speed Invalid NTC to Fa' ...
  'il'];
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.EngVal = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.EngMin = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.Online = false;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.Impact = 'L';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd.PortName = 'FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd';


FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.LongName = 'Ford Vehicle Rear Right Wheel Speed Invalid Passed Threshold';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.Description = [...
  'Threshold to Reset Ford Vehicle Rear Left Wheel Speed Invalid NTC'];
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.EngVal = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.EngMin = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.Online = false;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.Impact = 'L';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd.PortName = 'FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd';


FordMsg217BusHiSpdReRiWhlVldFaildThd = DataDict.Calibration;
FordMsg217BusHiSpdReRiWhlVldFaildThd.LongName = 'Ford Message 217 Bus High Speed Rare Right Wheel Valid Failed Threshold';
FordMsg217BusHiSpdReRiWhlVldFaildThd.Description = [...
  'Threshold to set the FordVehReRiWhlSpdVld to True depending on state'];
FordMsg217BusHiSpdReRiWhlVldFaildThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReRiWhlVldFaildThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReRiWhlVldFaildThd.EngVal = 0;
FordMsg217BusHiSpdReRiWhlVldFaildThd.EngMin = 0;
FordMsg217BusHiSpdReRiWhlVldFaildThd.EngMax = 6000;
FordMsg217BusHiSpdReRiWhlVldFaildThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReRiWhlVldFaildThd.CustomerVisible = false;
FordMsg217BusHiSpdReRiWhlVldFaildThd.Online = false;
FordMsg217BusHiSpdReRiWhlVldFaildThd.Impact = 'H';
FordMsg217BusHiSpdReRiWhlVldFaildThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReRiWhlVldFaildThd.GraphLink = {''};
FordMsg217BusHiSpdReRiWhlVldFaildThd.Monotony = 'None';
FordMsg217BusHiSpdReRiWhlVldFaildThd.MaxGrad = 0;
FordMsg217BusHiSpdReRiWhlVldFaildThd.PortName = 'FordMsg217BusHiSpdReRiWhlVldFaildThd';


FordMsg217BusHiSpdReRiWhlVldMissThd = DataDict.Calibration;
FordMsg217BusHiSpdReRiWhlVldMissThd.LongName = 'Ford Message 217 Bus High Speed Rare Right Wheel Valid Miss Threshold';
FordMsg217BusHiSpdReRiWhlVldMissThd.Description = [...
  'Threshold to set the FordVehReRiWhlSpdVld to False'];
FordMsg217BusHiSpdReRiWhlVldMissThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReRiWhlVldMissThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReRiWhlVldMissThd.EngVal = 100;
FordMsg217BusHiSpdReRiWhlVldMissThd.EngMin = 0;
FordMsg217BusHiSpdReRiWhlVldMissThd.EngMax = 6000;
FordMsg217BusHiSpdReRiWhlVldMissThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReRiWhlVldMissThd.CustomerVisible = false;
FordMsg217BusHiSpdReRiWhlVldMissThd.Online = false;
FordMsg217BusHiSpdReRiWhlVldMissThd.Impact = 'H';
FordMsg217BusHiSpdReRiWhlVldMissThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReRiWhlVldMissThd.GraphLink = {''};
FordMsg217BusHiSpdReRiWhlVldMissThd.Monotony = 'None';
FordMsg217BusHiSpdReRiWhlVldMissThd.MaxGrad = 0;
FordMsg217BusHiSpdReRiWhlVldMissThd.PortName = 'FordMsg217BusHiSpdReRiWhlVldMissThd';


FordMsg217BusHiSpdReRiWhlVldPassdThd = DataDict.Calibration;
FordMsg217BusHiSpdReRiWhlVldPassdThd.LongName = 'Ford Message 217 Bus High Speed Rare Right Wheel Valid Passd Threshold';
FordMsg217BusHiSpdReRiWhlVldPassdThd.Description = [...
  'Threshold to set the FordVehReRiWhlSpdVld to True depending on state'];
FordMsg217BusHiSpdReRiWhlVldPassdThd.DocUnits = 'MilliSec';
FordMsg217BusHiSpdReRiWhlVldPassdThd.EngDT = dt.u16p0;
FordMsg217BusHiSpdReRiWhlVldPassdThd.EngVal = 0;
FordMsg217BusHiSpdReRiWhlVldPassdThd.EngMin = 0;
FordMsg217BusHiSpdReRiWhlVldPassdThd.EngMax = 6000;
FordMsg217BusHiSpdReRiWhlVldPassdThd.Cardinality = 'Cmn';
FordMsg217BusHiSpdReRiWhlVldPassdThd.CustomerVisible = false;
FordMsg217BusHiSpdReRiWhlVldPassdThd.Online = false;
FordMsg217BusHiSpdReRiWhlVldPassdThd.Impact = 'H';
FordMsg217BusHiSpdReRiWhlVldPassdThd.TuningOwner = 'EPDT';
FordMsg217BusHiSpdReRiWhlVldPassdThd.GraphLink = {''};
FordMsg217BusHiSpdReRiWhlVldPassdThd.Monotony = 'None';
FordMsg217BusHiSpdReRiWhlVldPassdThd.MaxGrad = 0;
FordMsg217BusHiSpdReRiWhlVldPassdThd.PortName = 'FordMsg217BusHiSpdReRiWhlVldPassdThd';



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


FordVehFrntLeWhlSpdInvldFaildRefTi = DataDict.PIM;
FordVehFrntLeWhlSpdInvldFaildRefTi.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid Failed Reference Time';
FordVehFrntLeWhlSpdInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Front Left Wheel Speed invalid message will inc' ...
  'rement or reset based on the conditions'];
FordVehFrntLeWhlSpdInvldFaildRefTi.DocUnits = 'MilliSec';
FordVehFrntLeWhlSpdInvldFaildRefTi.EngDT = dt.u32;
FordVehFrntLeWhlSpdInvldFaildRefTi.EngMin = 0;
FordVehFrntLeWhlSpdInvldFaildRefTi.EngMax = 4294967295;
FordVehFrntLeWhlSpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehFrntLeWhlSpdInvldPassdRefTi = DataDict.PIM;
FordVehFrntLeWhlSpdInvldPassdRefTi.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid Passed Reference Time';
FordVehFrntLeWhlSpdInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Front Left Wheel Speed invalid message will inc' ...
  'rement or reset based on the conditions'];
FordVehFrntLeWhlSpdInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehFrntLeWhlSpdInvldPassdRefTi.EngDT = dt.u32;
FordVehFrntLeWhlSpdInvldPassdRefTi.EngMin = 0;
FordVehFrntLeWhlSpdInvldPassdRefTi.EngMax = 4294967295;
FordVehFrntLeWhlSpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehFrntLeWhlSpdPrev = DataDict.PIM;
FordVehFrntLeWhlSpdPrev.LongName = 'Ford Vehicle Front Left Wheel Speed Previous';
FordVehFrntLeWhlSpdPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Left Wheel Speed'];
FordVehFrntLeWhlSpdPrev.DocUnits = 'RadPerSec';
FordVehFrntLeWhlSpdPrev.EngDT = dt.float32;
FordVehFrntLeWhlSpdPrev.EngMin = 0;
FordVehFrntLeWhlSpdPrev.EngMax = 327.67;
FordVehFrntLeWhlSpdPrev.InitRowCol = [1  1];


FordVehFrntLeWhlSpdRawPrev = DataDict.PIM;
FordVehFrntLeWhlSpdRawPrev.LongName = 'Ford Vehicle Front Left Wheel Speed Raw Previous';
FordVehFrntLeWhlSpdRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Left Wheel Speed Raw' ...
  ''];
FordVehFrntLeWhlSpdRawPrev.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdRawPrev.EngDT = dt.u16;
FordVehFrntLeWhlSpdRawPrev.EngMin = 0;
FordVehFrntLeWhlSpdRawPrev.EngMax = 32767;
FordVehFrntLeWhlSpdRawPrev.InitRowCol = [1  1];


FordVehFrntLeWhlSpdVldFaildRefTi = DataDict.PIM;
FordVehFrntLeWhlSpdVldFaildRefTi.LongName = 'Ford Vehicle Front Left Wheel Speed Quality Valid Failed Reference Time';
FordVehFrntLeWhlSpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntLeWhlSpdVldFaildRefTi.DocUnits = 'MilliSec';
FordVehFrntLeWhlSpdVldFaildRefTi.EngDT = dt.u32;
FordVehFrntLeWhlSpdVldFaildRefTi.EngMin = 0;
FordVehFrntLeWhlSpdVldFaildRefTi.EngMax = 4294967295;
FordVehFrntLeWhlSpdVldFaildRefTi.InitRowCol = [1  1];


FordVehFrntLeWhlSpdVldMissRefTi = DataDict.PIM;
FordVehFrntLeWhlSpdVldMissRefTi.LongName = 'Ford Vehicle Front Left Wheel Speed Valid Miss Reference Time';
FordVehFrntLeWhlSpdVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntLeWhlSpdVldMissRefTi.DocUnits = 'MilliSec';
FordVehFrntLeWhlSpdVldMissRefTi.EngDT = dt.u32;
FordVehFrntLeWhlSpdVldMissRefTi.EngMin = 0;
FordVehFrntLeWhlSpdVldMissRefTi.EngMax = 4294967295;
FordVehFrntLeWhlSpdVldMissRefTi.InitRowCol = [1  1];


FordVehFrntLeWhlSpdVldPassdRefTi = DataDict.PIM;
FordVehFrntLeWhlSpdVldPassdRefTi.LongName = 'Ford Vehicle Front Left Wheel Speed Quality Valid Passd Reference Time';
FordVehFrntLeWhlSpdVldPassdRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntLeWhlSpdVldPassdRefTi.DocUnits = 'MilliSec';
FordVehFrntLeWhlSpdVldPassdRefTi.EngDT = dt.u32;
FordVehFrntLeWhlSpdVldPassdRefTi.EngMin = 0;
FordVehFrntLeWhlSpdVldPassdRefTi.EngMax = 4294967295;
FordVehFrntLeWhlSpdVldPassdRefTi.InitRowCol = [1  1];


FordVehFrntLeWhlSpdVldPrev = DataDict.PIM;
FordVehFrntLeWhlSpdVldPrev.LongName = 'Ford Vehicle Front Left Wheel Speed Valid Previous';
FordVehFrntLeWhlSpdVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Left Wheel Speed Val' ...
  'id'];
FordVehFrntLeWhlSpdVldPrev.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdVldPrev.EngDT = dt.lgc;
FordVehFrntLeWhlSpdVldPrev.EngMin = 0;
FordVehFrntLeWhlSpdVldPrev.EngMax = 1;
FordVehFrntLeWhlSpdVldPrev.InitRowCol = [1  1];


FordVehFrntRiWhlSpdInvldFaildRefTi = DataDict.PIM;
FordVehFrntRiWhlSpdInvldFaildRefTi.LongName = 'Ford Vehicle Front Right Wheel Speed Invalid Failed Reference Time';
FordVehFrntRiWhlSpdInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Front Right Wheel Speed invalid message will in' ...
  'crement or reset based on the conditions'];
FordVehFrntRiWhlSpdInvldFaildRefTi.DocUnits = 'MilliSec';
FordVehFrntRiWhlSpdInvldFaildRefTi.EngDT = dt.u32;
FordVehFrntRiWhlSpdInvldFaildRefTi.EngMin = 0;
FordVehFrntRiWhlSpdInvldFaildRefTi.EngMax = 4294967295;
FordVehFrntRiWhlSpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehFrntRiWhlSpdInvldPassdRefTi = DataDict.PIM;
FordVehFrntRiWhlSpdInvldPassdRefTi.LongName = 'Ford Vehicle Front Right Wheel Speed Invalid Passed Reference Time';
FordVehFrntRiWhlSpdInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Front Right Wheel Speed invalid message will in' ...
  'crement or reset based on the conditions'];
FordVehFrntRiWhlSpdInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehFrntRiWhlSpdInvldPassdRefTi.EngDT = dt.u32;
FordVehFrntRiWhlSpdInvldPassdRefTi.EngMin = 0;
FordVehFrntRiWhlSpdInvldPassdRefTi.EngMax = 4294967295;
FordVehFrntRiWhlSpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehFrntRiWhlSpdPrev = DataDict.PIM;
FordVehFrntRiWhlSpdPrev.LongName = 'Ford Vehicle Front Right Wheel Speed Previous';
FordVehFrntRiWhlSpdPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Right Wheel Speed'];
FordVehFrntRiWhlSpdPrev.DocUnits = 'RadPerSec';
FordVehFrntRiWhlSpdPrev.EngDT = dt.float32;
FordVehFrntRiWhlSpdPrev.EngMin = 0;
FordVehFrntRiWhlSpdPrev.EngMax = 327.67;
FordVehFrntRiWhlSpdPrev.InitRowCol = [1  1];


FordVehFrntRiWhlSpdRawPrev = DataDict.PIM;
FordVehFrntRiWhlSpdRawPrev.LongName = 'Ford Vehicle Front Right Wheel Speed Raw Previous';
FordVehFrntRiWhlSpdRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Right Wheel Speed Qu' ...
  'ality'];
FordVehFrntRiWhlSpdRawPrev.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdRawPrev.EngDT = dt.u16;
FordVehFrntRiWhlSpdRawPrev.EngMin = 0;
FordVehFrntRiWhlSpdRawPrev.EngMax = 32767;
FordVehFrntRiWhlSpdRawPrev.InitRowCol = [1  1];


FordVehFrntRiWhlSpdVldFaildRefTi = DataDict.PIM;
FordVehFrntRiWhlSpdVldFaildRefTi.LongName = 'Ford Vehicle Front Right Wheel Speed Valid Failed Reference Time';
FordVehFrntRiWhlSpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntRiWhlSpdVldFaildRefTi.DocUnits = 'MilliSec';
FordVehFrntRiWhlSpdVldFaildRefTi.EngDT = dt.u32;
FordVehFrntRiWhlSpdVldFaildRefTi.EngMin = 0;
FordVehFrntRiWhlSpdVldFaildRefTi.EngMax = 4294967295;
FordVehFrntRiWhlSpdVldFaildRefTi.InitRowCol = [1  1];


FordVehFrntRiWhlSpdVldMissRefTi = DataDict.PIM;
FordVehFrntRiWhlSpdVldMissRefTi.LongName = 'Ford Vehicle Front Right Wheel Speed Valid Miss Reference Time';
FordVehFrntRiWhlSpdVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntRiWhlSpdVldMissRefTi.DocUnits = 'MilliSec';
FordVehFrntRiWhlSpdVldMissRefTi.EngDT = dt.u32;
FordVehFrntRiWhlSpdVldMissRefTi.EngMin = 0;
FordVehFrntRiWhlSpdVldMissRefTi.EngMax = 4294967295;
FordVehFrntRiWhlSpdVldMissRefTi.InitRowCol = [1  1];


FordVehFrntRiWhlSpdVldPassdRefTi = DataDict.PIM;
FordVehFrntRiWhlSpdVldPassdRefTi.LongName = 'Ford Vehicle Front Right Wheel Speed Valid Passd Reference Time';
FordVehFrntRiWhlSpdVldPassdRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehFrntRiWhlSpdVldPassdRefTi.DocUnits = 'MilliSec';
FordVehFrntRiWhlSpdVldPassdRefTi.EngDT = dt.u32;
FordVehFrntRiWhlSpdVldPassdRefTi.EngMin = 0;
FordVehFrntRiWhlSpdVldPassdRefTi.EngMax = 4294967295;
FordVehFrntRiWhlSpdVldPassdRefTi.InitRowCol = [1  1];


FordVehFrntRiWhlSpdVldPrev = DataDict.PIM;
FordVehFrntRiWhlSpdVldPrev.LongName = 'Ford Vehicle Front Right Wheel Speed Valid Previous';
FordVehFrntRiWhlSpdVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Front Right Wheel Speed Va' ...
  'lid'];
FordVehFrntRiWhlSpdVldPrev.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdVldPrev.EngDT = dt.lgc;
FordVehFrntRiWhlSpdVldPrev.EngMin = 0;
FordVehFrntRiWhlSpdVldPrev.EngMax = 1;
FordVehFrntRiWhlSpdVldPrev.InitRowCol = [1  1];


FordVehMsg217Miss = DataDict.PIM;
FordVehMsg217Miss.LongName = 'Ford Vehicle ';
FordVehMsg217Miss.Description = [...
  'Used to hold value of Ford Vehicle message 217 miss'];
FordVehMsg217Miss.DocUnits = 'Cnt';
FordVehMsg217Miss.EngDT = dt.lgc;
FordVehMsg217Miss.EngMin = 0;
FordVehMsg217Miss.EngMax = 1;
FordVehMsg217Miss.InitRowCol = [1  1];


FordVehMsg217Rxd = DataDict.PIM;
FordVehMsg217Rxd.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid Previous';
FordVehMsg217Rxd.Description = [...
  'Used to hold value of Ford Vehicle message 217 recieved'];
FordVehMsg217Rxd.DocUnits = 'Cnt';
FordVehMsg217Rxd.EngDT = dt.lgc;
FordVehMsg217Rxd.EngMin = 0;
FordVehMsg217Rxd.EngMax = 1;
FordVehMsg217Rxd.InitRowCol = [1  1];


FordVehReLeWhlSpdInvldFaildRefTi = DataDict.PIM;
FordVehReLeWhlSpdInvldFaildRefTi.LongName = 'Ford Vehicle Rear Left Wheel Speed Invalid Failed Reference Time';
FordVehReLeWhlSpdInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Rear Left Wheel Speed invalid message will incr' ...
  'ement or reset based on the conditions'];
FordVehReLeWhlSpdInvldFaildRefTi.DocUnits = 'MilliSec';
FordVehReLeWhlSpdInvldFaildRefTi.EngDT = dt.u32;
FordVehReLeWhlSpdInvldFaildRefTi.EngMin = 0;
FordVehReLeWhlSpdInvldFaildRefTi.EngMax = 4294967295;
FordVehReLeWhlSpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehReLeWhlSpdInvldPassdRefTi = DataDict.PIM;
FordVehReLeWhlSpdInvldPassdRefTi.LongName = 'Ford Vehicle Rear Left Wheel Speed Invalid Passed Reference Time';
FordVehReLeWhlSpdInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Rear Left Wheel Speed invalid message will incr' ...
  'ement or reset based on the conditions'];
FordVehReLeWhlSpdInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehReLeWhlSpdInvldPassdRefTi.EngDT = dt.u32;
FordVehReLeWhlSpdInvldPassdRefTi.EngMin = 0;
FordVehReLeWhlSpdInvldPassdRefTi.EngMax = 4294967295;
FordVehReLeWhlSpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehReLeWhlSpdPrev = DataDict.PIM;
FordVehReLeWhlSpdPrev.LongName = 'Ford Vehicle Rear Left Wheel Speed Previous';
FordVehReLeWhlSpdPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Left Wheel Speed'];
FordVehReLeWhlSpdPrev.DocUnits = 'RadPerSec';
FordVehReLeWhlSpdPrev.EngDT = dt.float32;
FordVehReLeWhlSpdPrev.EngMin = 0;
FordVehReLeWhlSpdPrev.EngMax = 327.67;
FordVehReLeWhlSpdPrev.InitRowCol = [1  1];


FordVehReLeWhlSpdRawPrev = DataDict.PIM;
FordVehReLeWhlSpdRawPrev.LongName = 'Ford Vehicle Rear Left Wheel Speed Raw Previous';
FordVehReLeWhlSpdRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Left Wheel Speed Raw'];
FordVehReLeWhlSpdRawPrev.DocUnits = 'Cnt';
FordVehReLeWhlSpdRawPrev.EngDT = dt.u16;
FordVehReLeWhlSpdRawPrev.EngMin = 0;
FordVehReLeWhlSpdRawPrev.EngMax = 32767;
FordVehReLeWhlSpdRawPrev.InitRowCol = [1  1];


FordVehReLeWhlSpdVldFaildRefTi = DataDict.PIM;
FordVehReLeWhlSpdVldFaildRefTi.LongName = 'Ford Vehicle Rare Left Wheel Speed Valid Failed Reference Time';
FordVehReLeWhlSpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReLeWhlSpdVldFaildRefTi.DocUnits = 'MilliSec';
FordVehReLeWhlSpdVldFaildRefTi.EngDT = dt.u32;
FordVehReLeWhlSpdVldFaildRefTi.EngMin = 0;
FordVehReLeWhlSpdVldFaildRefTi.EngMax = 4294967295;
FordVehReLeWhlSpdVldFaildRefTi.InitRowCol = [1  1];


FordVehReLeWhlSpdVldMissRefTi = DataDict.PIM;
FordVehReLeWhlSpdVldMissRefTi.LongName = 'Ford Vehicle Rare Left Wheel Speed Valid Miss Reference Time';
FordVehReLeWhlSpdVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReLeWhlSpdVldMissRefTi.DocUnits = 'MilliSec';
FordVehReLeWhlSpdVldMissRefTi.EngDT = dt.u32;
FordVehReLeWhlSpdVldMissRefTi.EngMin = 0;
FordVehReLeWhlSpdVldMissRefTi.EngMax = 4294967295;
FordVehReLeWhlSpdVldMissRefTi.InitRowCol = [1  1];


FordVehReLeWhlSpdVldPassdRefTi = DataDict.PIM;
FordVehReLeWhlSpdVldPassdRefTi.LongName = 'Ford Vehicle Rare Left Wheel Speed Valid Passd Reference Time';
FordVehReLeWhlSpdVldPassdRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReLeWhlSpdVldPassdRefTi.DocUnits = 'MilliSec';
FordVehReLeWhlSpdVldPassdRefTi.EngDT = dt.u32;
FordVehReLeWhlSpdVldPassdRefTi.EngMin = 0;
FordVehReLeWhlSpdVldPassdRefTi.EngMax = 4294967295;
FordVehReLeWhlSpdVldPassdRefTi.InitRowCol = [1  1];


FordVehReLeWhlSpdVldPrev = DataDict.PIM;
FordVehReLeWhlSpdVldPrev.LongName = 'Ford Vehicle Rear Left Wheel Speed Valid Previous';
FordVehReLeWhlSpdVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Left Wheel Speed Vali' ...
  'd'];
FordVehReLeWhlSpdVldPrev.DocUnits = 'Cnt';
FordVehReLeWhlSpdVldPrev.EngDT = dt.lgc;
FordVehReLeWhlSpdVldPrev.EngMin = 0;
FordVehReLeWhlSpdVldPrev.EngMax = 1;
FordVehReLeWhlSpdVldPrev.InitRowCol = [1  1];


FordVehReRiWhlSpdInvldFaildRefTi = DataDict.PIM;
FordVehReRiWhlSpdInvldFaildRefTi.LongName = 'Ford Vehicle Rear Right Wheel Speed Invalid Failed Reference Time';
FordVehReRiWhlSpdInvldFaildRefTi.Description = [...
  'Timer for Ford Vehicle Rear Right Wheel Speed invalid message will inc' ...
  'rement or reset based on the conditions'];
FordVehReRiWhlSpdInvldFaildRefTi.DocUnits = 'MilliSec';
FordVehReRiWhlSpdInvldFaildRefTi.EngDT = dt.u32;
FordVehReRiWhlSpdInvldFaildRefTi.EngMin = 0;
FordVehReRiWhlSpdInvldFaildRefTi.EngMax = 4294967295;
FordVehReRiWhlSpdInvldFaildRefTi.InitRowCol = [1  1];


FordVehReRiWhlSpdInvldPassdRefTi = DataDict.PIM;
FordVehReRiWhlSpdInvldPassdRefTi.LongName = 'Ford Vehicle Rear Right Wheel Speed Invalid Passed Reference Time';
FordVehReRiWhlSpdInvldPassdRefTi.Description = [...
  'Timer for Ford Vehicle Rear Right Wheel Speed invalid message will inc' ...
  'rement or reset based on the conditions'];
FordVehReRiWhlSpdInvldPassdRefTi.DocUnits = 'MilliSec';
FordVehReRiWhlSpdInvldPassdRefTi.EngDT = dt.u32;
FordVehReRiWhlSpdInvldPassdRefTi.EngMin = 0;
FordVehReRiWhlSpdInvldPassdRefTi.EngMax = 4294967295;
FordVehReRiWhlSpdInvldPassdRefTi.InitRowCol = [1  1];


FordVehReRiWhlSpdPrev = DataDict.PIM;
FordVehReRiWhlSpdPrev.LongName = 'Ford Vehicle Rear Right Wheel Speed Previous';
FordVehReRiWhlSpdPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Right Wheel Speed'];
FordVehReRiWhlSpdPrev.DocUnits = 'RadPerSec';
FordVehReRiWhlSpdPrev.EngDT = dt.float32;
FordVehReRiWhlSpdPrev.EngMin = 0;
FordVehReRiWhlSpdPrev.EngMax = 327.67;
FordVehReRiWhlSpdPrev.InitRowCol = [1  1];


FordVehReRiWhlSpdRawPrev = DataDict.PIM;
FordVehReRiWhlSpdRawPrev.LongName = 'Ford Vehicle Rear Right Wheel Speed Raw Previous';
FordVehReRiWhlSpdRawPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Right Wheel Speed Raw' ...
  ''];
FordVehReRiWhlSpdRawPrev.DocUnits = 'Cnt';
FordVehReRiWhlSpdRawPrev.EngDT = dt.u16;
FordVehReRiWhlSpdRawPrev.EngMin = 1;
FordVehReRiWhlSpdRawPrev.EngMax = 32767;
FordVehReRiWhlSpdRawPrev.InitRowCol = [1  1];


FordVehReRiWhlSpdVldFaildRefTi = DataDict.PIM;
FordVehReRiWhlSpdVldFaildRefTi.LongName = 'Ford Vehicle Rare Right Wheel Speed Valid Failed Reference Time';
FordVehReRiWhlSpdVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReRiWhlSpdVldFaildRefTi.DocUnits = 'MilliSec';
FordVehReRiWhlSpdVldFaildRefTi.EngDT = dt.u32;
FordVehReRiWhlSpdVldFaildRefTi.EngMin = 0;
FordVehReRiWhlSpdVldFaildRefTi.EngMax = 4294967295;
FordVehReRiWhlSpdVldFaildRefTi.InitRowCol = [1  1];


FordVehReRiWhlSpdVldMissRefTi = DataDict.PIM;
FordVehReRiWhlSpdVldMissRefTi.LongName = 'Ford Vehicle Rare Right Wheel Speed Valid Miss Reference Time';
FordVehReRiWhlSpdVldMissRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReRiWhlSpdVldMissRefTi.DocUnits = 'MilliSec';
FordVehReRiWhlSpdVldMissRefTi.EngDT = dt.u32;
FordVehReRiWhlSpdVldMissRefTi.EngMin = 0;
FordVehReRiWhlSpdVldMissRefTi.EngMax = 4294967295;
FordVehReRiWhlSpdVldMissRefTi.InitRowCol = [1  1];


FordVehReRiWhlSpdVldPassdRefTi = DataDict.PIM;
FordVehReRiWhlSpdVldPassdRefTi.LongName = 'Ford Vehicle Rare Right Wheel Speed Valid Passd Reference Time';
FordVehReRiWhlSpdVldPassdRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
FordVehReRiWhlSpdVldPassdRefTi.DocUnits = 'MilliSec';
FordVehReRiWhlSpdVldPassdRefTi.EngDT = dt.u32;
FordVehReRiWhlSpdVldPassdRefTi.EngMin = 0;
FordVehReRiWhlSpdVldPassdRefTi.EngMax = 4294967295;
FordVehReRiWhlSpdVldPassdRefTi.InitRowCol = [1  1];


FordVehReRiWhlSpdVldPrev = DataDict.PIM;
FordVehReRiWhlSpdVldPrev.LongName = 'Ford Vehicle Rear Right Wheel Speed Valid Previous';
FordVehReRiWhlSpdVldPrev.Description = [...
  'Used to hold previous value of Ford Vehicle Rear Right Wheel Speed Val' ...
  'id'];
FordVehReRiWhlSpdVldPrev.DocUnits = 'Cnt';
FordVehReRiWhlSpdVldPrev.EngDT = dt.lgc;
FordVehReRiWhlSpdVldPrev.EngMin = 0;
FordVehReRiWhlSpdVldPrev.EngMax = 1;
FordVehReRiWhlSpdVldPrev.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for Missing Message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'MilliSec';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for Missing Message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'MilliSec';
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
DIAGENA_CNT_U08.LongName = 'DIAGNOSTICS Enable';
DIAGENA_CNT_U08.Description = [...
  'To check whether the diagnostic is enabled using CAN DTC Inhibit signa' ...
  'FordMissMsgDiagcInhb,MfgDiagcInhb,FordInvldMsgDiagcInhbl'];
DIAGENA_CNT_U08.DocUnits = 'Cnt';
DIAGENA_CNT_U08.EngDT = dt.u08;
DIAGENA_CNT_U08.EngVal = 0;
DIAGENA_CNT_U08.Define = 'Local';


FAULTHLSPD_RADPERSEC_U16 = DataDict.Constant;
FAULTHLSPD_RADPERSEC_U16.LongName = 'Valid Wheel Speed';
FAULTHLSPD_RADPERSEC_U16.Description = 'Used to compare with wheel speed';
FAULTHLSPD_RADPERSEC_U16.DocUnits = 'RadPerSec';
FAULTHLSPD_RADPERSEC_U16.EngDT = dt.u16;
FAULTHLSPD_RADPERSEC_U16.EngVal = 32767;
FAULTHLSPD_RADPERSEC_U16.Define = 'Local';


FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32 = DataDict.Constant;
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.LongName = 'Ford Vehicle Front Left Wheel Speed Maximum';
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.Description = [...
  'Maximum value of Ford Vehicle Front Left Wheel Speed'];
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.EngVal = 327.65;
FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32.Define = 'Local';


FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32 = DataDict.Constant;
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.LongName = 'Ford Vehicle Front Left Wheel Speed Minimum';
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.Description = [...
  'Minimum value of Ford Vehicle Front Left Wheel Speed'];
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.EngVal = 0;
FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32.Define = 'Local';


FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.LongName = 'Ford Vehicle Front Left Wheel Speed Raw Maximum';
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Front Left Wheel Speed Raw'];
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.EngVal = 32767;
FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16.Define = 'Local';


FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.LongName = 'Ford Vehicle Front Left Wheel Speed Raw Minimum';
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Front Left Wheel Speed Raw'];
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.EngVal = 0;
FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16.Define = 'Local';


FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32 = DataDict.Constant;
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.LongName = 'Ford Vehicle Front Right Wheel Speed Maximum';
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.Description = [...
  'Maximum value of Ford Vehicle Front Left Wheel Speed'];
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.EngVal = 327.65;
FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32.Define = 'Local';


FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32 = DataDict.Constant;
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.LongName = 'Ford Vehicle Front Right Wheel Speed Minimum';
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.Description = [...
  'Minimum value of Ford Vehicle Front Left Wheel Speed'];
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.EngVal = 0;
FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32.Define = 'Local';


FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.LongName = 'Ford Vehicle Front Right Wheel Speed Raw Maximum';
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Front Left Wheel Speed Raw'];
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.EngVal = 32767;
FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16.Define = 'Local';


FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.LongName = 'Ford Vehicle Front Right Wheel Speed Raw Minimum';
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Front Left Wheel Speed Raw'];
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.EngVal = 0;
FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16.Define = 'Local';


FORDVEHRELEWHLSPDMAX_RADPERSEC_F32 = DataDict.Constant;
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.LongName = 'Ford Vehicle Rear Left Wheel Speed Maximum';
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.Description = [...
  'Maximum value of Ford Vehicle Rear Left Wheel Speed'];
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.EngVal = 327.65;
FORDVEHRELEWHLSPDMAX_RADPERSEC_F32.Define = 'Local';


FORDVEHRELEWHLSPDMIN_RADPERSEC_F32 = DataDict.Constant;
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.LongName = 'Ford Vehicle Rear Left Wheel Speed Minimum';
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.Description = [...
  'Minimum value of Ford Vehicle Rear Left Wheel Speed'];
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.EngVal = 0;
FORDVEHRELEWHLSPDMIN_RADPERSEC_F32.Define = 'Local';


FORDVEHRELEWHLSPDRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.LongName = 'Ford Vehicle Rear Left Wheel Speed Raw Maximum';
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Rear Left Wheel Speed Raw'];
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.EngVal = 32767;
FORDVEHRELEWHLSPDRAWMAX_CNT_U16.Define = 'Local';


FORDVEHRELEWHLSPDRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.LongName = 'Ford Vehicle Rear Left Wheel Speed Raw Minimum';
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Rear Left Wheel Speed Raw'];
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.EngVal = 0;
FORDVEHRELEWHLSPDRAWMIN_CNT_U16.Define = 'Local';


FORDVEHRERIWHLSPDMAX_RADPERSEC_F32 = DataDict.Constant;
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.LongName = 'Ford Vehicle Rear Right Wheel Speed Maximum';
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.Description = [...
  'Maximum value of Ford Vehicle Rear Right Wheel Speed'];
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.EngVal = 327.65;
FORDVEHRERIWHLSPDMAX_RADPERSEC_F32.Define = 'Local';


FORDVEHRERIWHLSPDMIN_RADPERSEC_F32 = DataDict.Constant;
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.LongName = 'Ford Vehicle Rear Right Wheel Speed Minimum';
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.Description = [...
  'Minimum value of Ford Vehicle Rear Right Wheel Speed'];
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.DocUnits = 'RadPerSec';
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.EngDT = dt.float32;
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.EngVal = 0;
FORDVEHRERIWHLSPDMIN_RADPERSEC_F32.Define = 'Local';


FORDVEHRERIWHLSPDRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.LongName = 'Ford Vehicle Rear Right Wheel Speed Raw Maximum';
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Rear Right Wheel Speed Raw'];
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.EngVal = 32767;
FORDVEHRERIWHLSPDRAWMAX_CNT_U16.Define = 'Local';


FORDVEHRERIWHLSPDRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.LongName = 'Ford Vehicle Rear Right Wheel Speed Raw Minimum';
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Rear Right Wheel Speed Raw'];
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.EngVal = 0;
FORDVEHRERIWHLSPDRAWMIN_CNT_U16.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';


UKWNWHLSPD_RADPERSEC_U16 = DataDict.Constant;
UKWNWHLSPD_RADPERSEC_U16.LongName = 'Unknown Wheel Speed';
UKWNWHLSPD_RADPERSEC_U16.Description = 'Used to compare with wheel speed';
UKWNWHLSPD_RADPERSEC_U16.DocUnits = 'RadPerSec';
UKWNWHLSPD_RADPERSEC_U16.EngDT = dt.u16;
UKWNWHLSPD_RADPERSEC_U16.EngVal = 32766;
UKWNWHLSPD_RADPERSEC_U16.Define = 'Local';


WHLSPDSCAGVAL_RADPERSECPERCNT_F32 = DataDict.Constant;
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.LongName = 'Wheel Speed Scaling Value';
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.Description = [...
  'Used to convert Wheel Speed Raw to Wheel Speed'];
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.DocUnits = 'RadPerSecPerCnt';
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.EngDT = dt.float32;
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.EngVal = 0.01;
WHLSPDSCAGVAL_RADPERSECPERCNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg217MissMsg = DataDict.NTC;
FordMsg217MissMsg.NtcNr = NtcNr1.NTCNR_0X13C;
FordMsg217MissMsg.NtcTyp = 'None';
FordMsg217MissMsg.LongName = 'Ford Message 65A Missing Message';
FordMsg217MissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg217MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg217MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg217MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg217MissMsg.NtcStsLockdThisIgnCyc = 0;


FordVehFrntLeWhlSpdInvld = DataDict.NTC;
FordVehFrntLeWhlSpdInvld.NtcNr = NtcNr1.NTCNR_0X13D;
FordVehFrntLeWhlSpdInvld.NtcTyp = 'None';
FordVehFrntLeWhlSpdInvld.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid';
FordVehFrntLeWhlSpdInvld.Description = 'Used to set Ford Vehicle Front Left Wheel Speed Invalid NTC';
FordVehFrntLeWhlSpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehFrntLeWhlSpdInvld.NtcStsLockdThisIgnCyc = 0;


FordVehFrntRiWhlSpdInvld = DataDict.NTC;
FordVehFrntRiWhlSpdInvld.NtcNr = NtcNr1.NTCNR_0X13E;
FordVehFrntRiWhlSpdInvld.NtcTyp = 'None';
FordVehFrntRiWhlSpdInvld.LongName = 'Ford Vehicle Front Right Wheel Speed Invalid';
FordVehFrntRiWhlSpdInvld.Description = 'Used to set Ford Vehicle Front Right Wheel Speed Invalid NTC';
FordVehFrntRiWhlSpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehFrntRiWhlSpdInvld.NtcStsLockdThisIgnCyc = 0;


FordVehReLeWhlSpdInvld = DataDict.NTC;
FordVehReLeWhlSpdInvld.NtcNr = NtcNr1.NTCNR_0X13F;
FordVehReLeWhlSpdInvld.NtcTyp = 'None';
FordVehReLeWhlSpdInvld.LongName = 'Ford Vehicle Rear Left Wheel Speed Invalid';
FordVehReLeWhlSpdInvld.Description = 'Used to set Ford Vehicle Rear Left Wheel Speed Invalid NTC';
FordVehReLeWhlSpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehReLeWhlSpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehReLeWhlSpdInvld.NtcStsLockdThisIgnCyc = 0;


FordVehReRiWhlSpdInvld = DataDict.NTC;
FordVehReRiWhlSpdInvld.NtcNr = NtcNr1.NTCNR_0X140;
FordVehReRiWhlSpdInvld.NtcTyp = 'None';
FordVehReRiWhlSpdInvld.LongName = 'Ford Vehicle Front Left Wheel Speed Invalid';
FordVehReRiWhlSpdInvld.Description = 'Used to set Ford Vehicle Front Left Wheel Speed Invalid NTC';
FordVehReRiWhlSpdInvld.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordVehReRiWhlSpdInvld.NtcStInfo.Bit0Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit1Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit2Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit3Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit4Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit5Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit6Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStInfo.Bit7Descr = 'Unused';
FordVehReRiWhlSpdInvld.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
