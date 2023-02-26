%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 04-Apr-2018 16:03:54       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM063A = DataDict.FDD;
MM063A.Version = '2.0.X';
MM063A.LongName = 'Ford Message 213 Bus High Speed';
MM063A.ShoName  = 'FordMsg213BusHiSpd';
MM063A.DesignASIL = 'B';
MM063A.Description = [...
  'The purpose of the Ford Message 213 Bus High Speed function is toprovi' ...
  'de the Electric Power Steering system with signal values forthe Brake ' ...
  'Oscillation Reduction, Lane Detection Warning, LKA, Traffic Jam Assist' ...
  ' and Lane Center Assist functions from CAN.The FordMessage 213 functio' ...
  'n will perform the missing message and signal ivalid diagnostics as we' ...
  'll as provide a validity flag for the signal values and received messa' ...
  'ge.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg213BusHiSpdInit1 = DataDict.Runnable;
FordMsg213BusHiSpdInit1.Context = 'Rte';
FordMsg213BusHiSpdInit1.TimeStep = 0;
FordMsg213BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg213BusHiSpdPer1 = DataDict.Runnable;
FordMsg213BusHiSpdPer1.Context = 'Rte';
FordMsg213BusHiSpdPer1.TimeStep = 0.01;
FordMsg213BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_DesiredTorqBrk_FD1 = DataDict.SrvRunnable;
ComIPduCallout_DesiredTorqBrk_FD1.Context = 'NonRte';
ComIPduCallout_DesiredTorqBrk_FD1.Description = [...
  'Server Runnable for Message Reception'];
ComIPduCallout_DesiredTorqBrk_FD1.Return = DataDict.CSReturn;
ComIPduCallout_DesiredTorqBrk_FD1.Return.Type = 'None';
ComIPduCallout_DesiredTorqBrk_FD1.Return.Min = [];
ComIPduCallout_DesiredTorqBrk_FD1.Return.Max = [];
ComIPduCallout_DesiredTorqBrk_FD1.Return.TestTolerance = [];
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).Name = 'DesiredTorqBrk';
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_DesiredTorqBrk_FD1.Arguments(1).Description = [...
  'Argument ActiveFrontSteering set to true once this server runnable is ' ...
  'called'];

ComTimeoutNotification_CmbbDeny_B_ActlBrk = DataDict.SrvRunnable;
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Context = 'NonRte';
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Return = DataDict.CSReturn;
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Return.Type = 'None';
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Return.Min = [];
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Return.Max = [];
ComTimeoutNotification_CmbbDeny_B_ActlBrk.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg213BusHiSpdInit1','FordMsg213BusHiSpdPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg213BusHiSpdPer1'};
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
SetNtcSts.CallLocation = {'FordMsg213BusHiSpdPer1'};
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
ClrDiagcFlgProxy.ReadIn = {'FordMsg213BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordBrkOscnRednEnad = DataDict.IpSignal;
FordBrkOscnRednEnad.LongName = 'Brake Oscillation Reduction Enabled';
FordBrkOscnRednEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type:Boolean with Min value "False"(0),Init value "False"(0) and Max v' ...
  'alue "True"(1)'];
FordBrkOscnRednEnad.DocUnits = 'Cnt';
FordBrkOscnRednEnad.EngDT = dt.lgc;
FordBrkOscnRednEnad.EngInit = 0;
FordBrkOscnRednEnad.EngMin = 0;
FordBrkOscnRednEnad.EngMax = 1;
FordBrkOscnRednEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordBrkOscnRednEnad.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 to enable the diagnostics. Customer dat' ...
  'atype should be used. Data Type:Boolean with Min value "False"(0),Init' ...
  ' value "False"(0) and Max value "True"(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide time threshold value to FAIL the NTC.'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Evasive Steer Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type:Boolean with Min value "False"(0),Init value "False"(0) and Max v' ...
  'alue "True"(1)'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type:Boolean with Min value "False"(0),Init value "False"(0) and Max v' ...
  'alue "True"(1)'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordLaneDetnWarnEnad = DataDict.IpSignal;
FordLaneDetnWarnEnad.LongName = 'Lane Detection Warning Enabled';
FordLaneDetnWarnEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type:Boolean with Min value "False"(0),Init value "False"(0) and Max v' ...
  'alue "True"(1)'];
FordLaneDetnWarnEnad.DocUnits = 'Cnt';
FordLaneDetnWarnEnad.EngDT = dt.lgc;
FordLaneDetnWarnEnad.EngInit = 0;
FordLaneDetnWarnEnad.EngMin = 0;
FordLaneDetnWarnEnad.EngMax = 1;
FordLaneDetnWarnEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordLaneDetnWarnEnad.ReadType = 'Rte';


FordLkaEnad = DataDict.IpSignal;
FordLkaEnad.LongName = 'LKA Enabled';
FordLkaEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required'];
FordLkaEnad.DocUnits = 'Cnt';
FordLkaEnad.EngDT = dt.lgc;
FordLkaEnad.EngInit = 0;
FordLkaEnad.EngMin = 0;
FordLkaEnad.EngMax = 1;
FordLkaEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordLkaEnad.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'This signal checks wheather Diagnostics needs to be performed or reset' ...
  ' of timer and NTC is required. Customer datatype should be used. Data ' ...
  'Type:Boolean with Min value "False"(0),Init value "False"(0) and Max v' ...
  'alue "True"(1)'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 0;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FordMsg213BusHiSpdPer1'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


Ford_AbsActv_B_Actl1 = DataDict.IpSignal;
Ford_AbsActv_B_Actl1.LongName = 'ABS Active';
Ford_AbsActv_B_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Datatype: Ford_AbsActv_B_Actl Elements are: 0' ...
  ' - "Cx0_No,1 - "Cx1_Yes"'];
Ford_AbsActv_B_Actl1.DocUnits = 'Cnt';
Ford_AbsActv_B_Actl1.EngDT = enum.Ford_AbsActv_B_Actl;
Ford_AbsActv_B_Actl1.EngInit = Ford_AbsActv_B_Actl.Cx0_No;
Ford_AbsActv_B_Actl1.EngMin = Ford_AbsActv_B_Actl.Cx0_No;
Ford_AbsActv_B_Actl1.EngMax = Ford_AbsActv_B_Actl.Cx1_Yes;
Ford_AbsActv_B_Actl1.ReadIn = {'FordMsg213BusHiSpdPer1'};
Ford_AbsActv_B_Actl1.ReadType = 'Rte';


Ford_CmbbBrkDis_B_Actl1 = DataDict.IpSignal;
Ford_CmbbBrkDis_B_Actl1.LongName = 'Collision Mitigation By Braking Disabled';
Ford_CmbbBrkDis_B_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Datatype: Ford_CmbbBrkDis_B_Actl Elements are' ...
  ': 0 - "Cx0_No,1 - "Cx1_Yes"'];
Ford_CmbbBrkDis_B_Actl1.DocUnits = 'Cnt';
Ford_CmbbBrkDis_B_Actl1.EngDT = enum.Ford_CmbbBrkDis_B_Actl;
Ford_CmbbBrkDis_B_Actl1.EngInit = Ford_CmbbBrkDis_B_Actl.Cx0_No;
Ford_CmbbBrkDis_B_Actl1.EngMin = Ford_CmbbBrkDis_B_Actl.Cx0_No;
Ford_CmbbBrkDis_B_Actl1.EngMax = Ford_CmbbBrkDis_B_Actl.Cx1_Yes;
Ford_CmbbBrkDis_B_Actl1.ReadIn = {'FordMsg213BusHiSpdPer1'};
Ford_CmbbBrkDis_B_Actl1.ReadType = 'Rte';


Ford_CmbbDeny_B_ActlBrk1 = DataDict.IpSignal;
Ford_CmbbDeny_B_ActlBrk1.LongName = 'Collision Mitigation By Braking Denied';
Ford_CmbbDeny_B_ActlBrk1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Datatype: Ford_CmbbDeny_B_ActlBrk Elements ar' ...
  'e: 0 - "Cx0_No,1 - "Cx1_Yes"'];
Ford_CmbbDeny_B_ActlBrk1.DocUnits = 'Cnt';
Ford_CmbbDeny_B_ActlBrk1.EngDT = enum.Ford_CmbbDeny_B_ActlBrk;
Ford_CmbbDeny_B_ActlBrk1.EngInit = Ford_CmbbDeny_B_ActlBrk.Cx0_No;
Ford_CmbbDeny_B_ActlBrk1.EngMin = Ford_CmbbDeny_B_ActlBrk.Cx0_No;
Ford_CmbbDeny_B_ActlBrk1.EngMax = Ford_CmbbDeny_B_ActlBrk.Cx1_Yes;
Ford_CmbbDeny_B_ActlBrk1.ReadIn = {'FordMsg213BusHiSpdPer1'};
Ford_CmbbDeny_B_ActlBrk1.ReadType = 'Rte';


Ford_StabCtlBrkActv_B_Actl1 = DataDict.IpSignal;
Ford_StabCtlBrkActv_B_Actl1.LongName = 'ESC Active';
Ford_StabCtlBrkActv_B_Actl1.Description = [...
  'It is a message signal which is received from CAN bus which will be pr' ...
  'ocessed and used in EPS. Datatype: Ford_StabCtlBrkActv_B_Actl Elements' ...
  ' are: 0 - "Cx0_No,1 - "Cx1_Yes"'];
Ford_StabCtlBrkActv_B_Actl1.DocUnits = 'Cnt';
Ford_StabCtlBrkActv_B_Actl1.EngDT = enum.Ford_CmbbBrkDis_B_Actl;
Ford_StabCtlBrkActv_B_Actl1.EngInit = Ford_StabCtlBrkActv_B_Actl.Cx0_No;
Ford_StabCtlBrkActv_B_Actl1.EngMin = Ford_StabCtlBrkActv_B_Actl.Cx0_No;
Ford_StabCtlBrkActv_B_Actl1.EngMax = Ford_StabCtlBrkActv_B_Actl.Cx1_Yes;
Ford_StabCtlBrkActv_B_Actl1.ReadIn = {'FordMsg213BusHiSpdPer1'};
Ford_StabCtlBrkActv_B_Actl1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehAbsActv = DataDict.OpSignal;
FordVehAbsActv.LongName = 'Ford Vehicle ABS Active';
FordVehAbsActv.Description = [...
  'Processed value of ABS Active to be used by EPS'];
FordVehAbsActv.DocUnits = 'Cnt';
FordVehAbsActv.SwcShoName = 'FordMsg213BusHiSpd';
FordVehAbsActv.EngDT = dt.u08;
FordVehAbsActv.EngInit = 0;
FordVehAbsActv.EngMin = 0;
FordVehAbsActv.EngMax = 1;
FordVehAbsActv.TestTolerance = 0;
FordVehAbsActv.WrittenIn = {'FordMsg213BusHiSpdPer1'};
FordVehAbsActv.WriteType = 'Rte';


FordVehAbsEscStsVld = DataDict.OpSignal;
FordVehAbsEscStsVld.LongName = 'Ford Vehicle ABS Active Valid';
FordVehAbsEscStsVld.Description = [...
  'This output determines the validity of Ford Vehicle ABS ESC Status Val' ...
  'id'];
FordVehAbsEscStsVld.DocUnits = 'Cnt';
FordVehAbsEscStsVld.SwcShoName = 'FordMsg213BusHiSpd';
FordVehAbsEscStsVld.EngDT = dt.lgc;
FordVehAbsEscStsVld.EngInit = 0;
FordVehAbsEscStsVld.EngMin = 0;
FordVehAbsEscStsVld.EngMax = 1;
FordVehAbsEscStsVld.TestTolerance = 0;
FordVehAbsEscStsVld.WrittenIn = {'FordMsg213BusHiSpdPer1'};
FordVehAbsEscStsVld.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgDenied = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgDenied.LongName = 'Ford Vehicle Collision Mitigation By Braking Denied';
FordVehCllsnMtgtnByBrkgDenied.Description = [...
  'Processed value of  Collision Mitigation by Braking Rejected to be use' ...
  'd by EPS'];
FordVehCllsnMtgtnByBrkgDenied.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDenied.SwcShoName = 'FordMsg213BusHiSpd';
FordVehCllsnMtgtnByBrkgDenied.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDenied.EngInit = 0;
FordVehCllsnMtgtnByBrkgDenied.EngMin = 0;
FordVehCllsnMtgtnByBrkgDenied.EngMax = 1;
FordVehCllsnMtgtnByBrkgDenied.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgDenied.WrittenIn = {'FordMsg213BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgDenied.WriteType = 'Rte';


FordVehCllsnMtgtnByBrkgDisad = DataDict.OpSignal;
FordVehCllsnMtgtnByBrkgDisad.LongName = 'Ford Vehicle Collision Mitigation By Braking Disabled';
FordVehCllsnMtgtnByBrkgDisad.Description = [...
  'Processed value of  Collision Mitigation by Braking Disabled to be use' ...
  'd by EPS'];
FordVehCllsnMtgtnByBrkgDisad.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDisad.SwcShoName = 'FordMsg213BusHiSpd';
FordVehCllsnMtgtnByBrkgDisad.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDisad.EngInit = 0;
FordVehCllsnMtgtnByBrkgDisad.EngMin = 0;
FordVehCllsnMtgtnByBrkgDisad.EngMax = 1;
FordVehCllsnMtgtnByBrkgDisad.TestTolerance = 0;
FordVehCllsnMtgtnByBrkgDisad.WrittenIn = {'FordMsg213BusHiSpdPer1'};
FordVehCllsnMtgtnByBrkgDisad.WriteType = 'Rte';


FordVehEscActv = DataDict.OpSignal;
FordVehEscActv.LongName = 'Ford Vehicle ESC Active';
FordVehEscActv.Description = [...
  'Processed value of ESC Active to be used by EPS'];
FordVehEscActv.DocUnits = 'Cnt';
FordVehEscActv.SwcShoName = 'FordMsg213BusHiSpd';
FordVehEscActv.EngDT = dt.u08;
FordVehEscActv.EngInit = 0;
FordVehEscActv.EngMin = 0;
FordVehEscActv.EngMax = 1;
FordVehEscActv.TestTolerance = 0;
FordVehEscActv.WrittenIn = {'FordMsg213BusHiSpdPer1'};
FordVehEscActv.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg213BusHiSpdAbsActvVldFaildThd = DataDict.Calibration;
FordMsg213BusHiSpdAbsActvVldFaildThd.LongName = 'Ford Message 213 Bus High Speed ABS Active Valid Failed Threshold';
FordMsg213BusHiSpdAbsActvVldFaildThd.Description = [...
  'Threshold to set the FordVehAbsEscStsVld to False'];
FordMsg213BusHiSpdAbsActvVldFaildThd.DocUnits = 'MilliSec';
FordMsg213BusHiSpdAbsActvVldFaildThd.EngDT = dt.u16;
FordMsg213BusHiSpdAbsActvVldFaildThd.EngVal = 200;
FordMsg213BusHiSpdAbsActvVldFaildThd.EngMin = 0;
FordMsg213BusHiSpdAbsActvVldFaildThd.EngMax = 6000;
FordMsg213BusHiSpdAbsActvVldFaildThd.Cardinality = 'Cmn';
FordMsg213BusHiSpdAbsActvVldFaildThd.CustomerVisible = false;
FordMsg213BusHiSpdAbsActvVldFaildThd.Online = false;
FordMsg213BusHiSpdAbsActvVldFaildThd.Impact = 'H';
FordMsg213BusHiSpdAbsActvVldFaildThd.TuningOwner = 'EPDT';
FordMsg213BusHiSpdAbsActvVldFaildThd.GraphLink = {''};
FordMsg213BusHiSpdAbsActvVldFaildThd.Monotony = 'None';
FordMsg213BusHiSpdAbsActvVldFaildThd.MaxGrad = 0;
FordMsg213BusHiSpdAbsActvVldFaildThd.PortName = 'FordMsg213BusHiSpdAbsActvVldFaildThd';


FordMsg213BusHiSpdAbsActvVldPassdThd = DataDict.Calibration;
FordMsg213BusHiSpdAbsActvVldPassdThd.LongName = 'Ford Message 213 Bus High Speed ABS Active Valid Passed Threshold';
FordMsg213BusHiSpdAbsActvVldPassdThd.Description = [...
  'Threshold to set the FordVehAbsEscStsVld to True'];
FordMsg213BusHiSpdAbsActvVldPassdThd.DocUnits = 'MilliSec';
FordMsg213BusHiSpdAbsActvVldPassdThd.EngDT = dt.u16;
FordMsg213BusHiSpdAbsActvVldPassdThd.EngVal = 0;
FordMsg213BusHiSpdAbsActvVldPassdThd.EngMin = 0;
FordMsg213BusHiSpdAbsActvVldPassdThd.EngMax = 6000;
FordMsg213BusHiSpdAbsActvVldPassdThd.Cardinality = 'Cmn';
FordMsg213BusHiSpdAbsActvVldPassdThd.CustomerVisible = false;
FordMsg213BusHiSpdAbsActvVldPassdThd.Online = false;
FordMsg213BusHiSpdAbsActvVldPassdThd.Impact = 'H';
FordMsg213BusHiSpdAbsActvVldPassdThd.TuningOwner = 'EPDT';
FordMsg213BusHiSpdAbsActvVldPassdThd.GraphLink = {''};
FordMsg213BusHiSpdAbsActvVldPassdThd.Monotony = 'None';
FordMsg213BusHiSpdAbsActvVldPassdThd.MaxGrad = 0;
FordMsg213BusHiSpdAbsActvVldPassdThd.PortName = 'FordMsg213BusHiSpdAbsActvVldPassdThd';


FordMsg213BusHiSpdEvasSteerAssiEnadThd = DataDict.Calibration;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.LongName = 'Ford Message 213 Bus High Speed Evasive Steer Assist Enabled Threshold';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.Description = [...
  'Threshold to set the missing message NTC when EvasSteerAssiEnad is act' ...
  'ive'];
FordMsg213BusHiSpdEvasSteerAssiEnadThd.DocUnits = 'MilliSec';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.EngDT = dt.u16;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.EngVal = 200;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.EngMin = 0;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.EngMax = 6000;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.Cardinality = 'Cmn';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.CustomerVisible = false;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.Online = false;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.Impact = 'L';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.TuningOwner = 'EPDT';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.GraphLink = {''};
FordMsg213BusHiSpdEvasSteerAssiEnadThd.Monotony = 'None';
FordMsg213BusHiSpdEvasSteerAssiEnadThd.MaxGrad = 0;
FordMsg213BusHiSpdEvasSteerAssiEnadThd.PortName = 'FordMsg213BusHiSpdEvasSteerAssiEnadThd';


FordMsg213BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg213BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 213 Bus High Speed Missing Message Failed Threshold';
FordMsg213BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set the missing message NTC'];
FordMsg213BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg213BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg213BusHiSpdMissMsgFaildThd.EngVal = 5000;
FordMsg213BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg213BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg213BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg213BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg213BusHiSpdMissMsgFaildThd.Online = false;
FordMsg213BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg213BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg213BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg213BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg213BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg213BusHiSpdMissMsgFaildThd.PortName = 'FordMsg213BusHiSpdMissMsgFaildThd';


FordMsg213BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg213BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 213 Bus High Speed Missing Message Passed Threshold';
FordMsg213BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to clear the missing message NTC'];
FordMsg213BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg213BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg213BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg213BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg213BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg213BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg213BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg213BusHiSpdMissMsgPassdThd.Online = false;
FordMsg213BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg213BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg213BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg213BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg213BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg213BusHiSpdMissMsgPassdThd.PortName = 'FordMsg213BusHiSpdMissMsgPassdThd';



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
AbsActvVldFaildRefTi = DataDict.PIM;
AbsActvVldFaildRefTi.LongName = 'ABS Active Valid Failed Reference Time';
AbsActvVldFaildRefTi.Description = [...
  'Holds the elapsed time before setting ABS Active Valid to Fail'];
AbsActvVldFaildRefTi.DocUnits = 'Cnt';
AbsActvVldFaildRefTi.EngDT = dt.u32;
AbsActvVldFaildRefTi.EngMin = 0;
AbsActvVldFaildRefTi.EngMax = 4294967295;
AbsActvVldFaildRefTi.InitRowCol = [1  1];


AbsActvVldPassdRefTi = DataDict.PIM;
AbsActvVldPassdRefTi.LongName = 'ABS Active Valid Passed Reference Time';
AbsActvVldPassdRefTi.Description = [...
  'Holds the elapsed time before setting ABS Active Valid to Pass'];
AbsActvVldPassdRefTi.DocUnits = 'Cnt';
AbsActvVldPassdRefTi.EngDT = dt.u32;
AbsActvVldPassdRefTi.EngMin = 0;
AbsActvVldPassdRefTi.EngMax = 4294967295;
AbsActvVldPassdRefTi.InitRowCol = [1  1];


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


FordVehAbsActvPrev = DataDict.PIM;
FordVehAbsActvPrev.LongName = 'Ford Vehicle ABS Active Previous';
FordVehAbsActvPrev.Description = [...
  'Hold the Previous value of FordVehAbsActv'];
FordVehAbsActvPrev.DocUnits = 'Cnt';
FordVehAbsActvPrev.EngDT = dt.u08;
FordVehAbsActvPrev.EngMin = 0;
FordVehAbsActvPrev.EngMax = 1;
FordVehAbsActvPrev.InitRowCol = [1  1];


FordVehAbsEscStsVldPrev = DataDict.PIM;
FordVehAbsEscStsVldPrev.LongName = 'Ford Vehicle ABS Active Valid Previous';
FordVehAbsEscStsVldPrev.Description = [...
  'Hold the Previous value of FordVehAbsEscStsVld'];
FordVehAbsEscStsVldPrev.DocUnits = 'Cnt';
FordVehAbsEscStsVldPrev.EngDT = dt.lgc;
FordVehAbsEscStsVldPrev.EngMin = 0;
FordVehAbsEscStsVldPrev.EngMax = 1;
FordVehAbsEscStsVldPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgDeniedPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgDeniedPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Rejected Previous';
FordVehCllsnMtgtnByBrkgDeniedPrev.Description = [...
  'Hold the Previous value of FordVehCllsnMtgtnByBrkgDenied'];
FordVehCllsnMtgtnByBrkgDeniedPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDeniedPrev.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDeniedPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgDeniedPrev.EngMax = 1;
FordVehCllsnMtgtnByBrkgDeniedPrev.InitRowCol = [1  1];


FordVehCllsnMtgtnByBrkgDisadPrev = DataDict.PIM;
FordVehCllsnMtgtnByBrkgDisadPrev.LongName = 'Ford Vehicle Collision Mitigation By Braking Disabled Previous';
FordVehCllsnMtgtnByBrkgDisadPrev.Description = [...
  'Hold the Previous value of FordVehCllsnMtgtnByBrkgDisad'];
FordVehCllsnMtgtnByBrkgDisadPrev.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDisadPrev.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDisadPrev.EngMin = 0;
FordVehCllsnMtgtnByBrkgDisadPrev.EngMax = 1;
FordVehCllsnMtgtnByBrkgDisadPrev.InitRowCol = [1  1];


FordVehEscActvPrev = DataDict.PIM;
FordVehEscActvPrev.LongName = 'Ford Vehicle ESC Active Previous';
FordVehEscActvPrev.Description = [...
  'Hold the Previous value of FordVehEscActv'];
FordVehEscActvPrev.DocUnits = 'Cnt';
FordVehEscActvPrev.EngDT = dt.u08;
FordVehEscActvPrev.EngMin = 0;
FordVehEscActvPrev.EngMax = 1;
FordVehEscActvPrev.InitRowCol = [1  1];


FordVehMsg213Miss = DataDict.PIM;
FordVehMsg213Miss.LongName = 'Ford Vehicle Message 213 Missing';
FordVehMsg213Miss.Description = [...
  'Previous value of Ford Vehicle Message 213 Missing'];
FordVehMsg213Miss.DocUnits = 'Cnt';
FordVehMsg213Miss.EngDT = dt.lgc;
FordVehMsg213Miss.EngMin = 0;
FordVehMsg213Miss.EngMax = 1;
FordVehMsg213Miss.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'It holds the time to set miss message NTC to fail'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'It holds the time to set miss message NTC to pass'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ABSACTVMAX_CNT_U08 = DataDict.Constant;
ABSACTVMAX_CNT_U08.LongName = 'ABS Active Maximum';
ABSACTVMAX_CNT_U08.Description = 'Maximum value of ABS Active';
ABSACTVMAX_CNT_U08.DocUnits = 'Cnt';
ABSACTVMAX_CNT_U08.EngDT = dt.u08;
ABSACTVMAX_CNT_U08.EngVal = 1;
ABSACTVMAX_CNT_U08.Define = 'Local';


ABSACTVMIN_CNT_U08 = DataDict.Constant;
ABSACTVMIN_CNT_U08.LongName = 'ABS Active Minimum';
ABSACTVMIN_CNT_U08.Description = 'Minimum value of ABS Active';
ABSACTVMIN_CNT_U08.DocUnits = 'Cnt';
ABSACTVMIN_CNT_U08.EngDT = dt.u08;
ABSACTVMIN_CNT_U08.EngVal = 0;
ABSACTVMIN_CNT_U08.Define = 'Local';


BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Bus High Speed Fixed Timer Threshold';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = [...
  'Pass constant value 5000 if FordEpsLifeCycMod is one'];
BUSHISPDFIXDTITHD_MILLISEC_U16.DocUnits = 'MilliSec';
BUSHISPDFIXDTITHD_MILLISEC_U16.EngDT = dt.u16;
BUSHISPDFIXDTITHD_MILLISEC_U16.EngVal = 5000;
BUSHISPDFIXDTITHD_MILLISEC_U16.Define = 'Local';


CLLSNMTGTNBYBRKGDENDMAX_CNT_U08 = DataDict.Constant;
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.LongName = 'Collision Mitigation by Braking Denied Maximum';
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.Description = [...
  'Maximum value of Collision Mitigation by Braking Denied'];
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.DocUnits = 'Cnt';
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.EngDT = dt.u08;
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.EngVal = 1;
CLLSNMTGTNBYBRKGDENDMAX_CNT_U08.Define = 'Local';


CLLSNMTGTNBYBRKGDENDMIN_CNT_U08 = DataDict.Constant;
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.LongName = 'Collision Mitigation by Braking Denied Minimum';
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.Description = [...
  'Minimum value of Collision Mitigation by Braking Denied'];
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.DocUnits = 'Cnt';
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.EngDT = dt.u08;
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.EngVal = 0;
CLLSNMTGTNBYBRKGDENDMIN_CNT_U08.Define = 'Local';


CLLSNMTGTNBYBRKGDISADMAX_CNT_U08 = DataDict.Constant;
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.LongName = 'Collision Mitigation by Braking Disabled Maximum';
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.Description = [...
  'Maximum value of Collision Mitigation by Braking Disabled'];
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.DocUnits = 'Cnt';
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.EngDT = dt.u08;
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.EngVal = 1;
CLLSNMTGTNBYBRKGDISADMAX_CNT_U08.Define = 'Local';


CLLSNMTGTNBYBRKGDISADMIN_CNT_U08 = DataDict.Constant;
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.LongName = 'Collision Mitigation by Braking Disabled Minimum';
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.Description = [...
  'Minimum value of Collision Mitigation by Braking Disabled'];
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.DocUnits = 'Cnt';
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.EngDT = dt.u08;
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.EngVal = 0;
CLLSNMTGTNBYBRKGDISADMIN_CNT_U08.Define = 'Local';


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


ESCACTVMAX_CNT_U08 = DataDict.Constant;
ESCACTVMAX_CNT_U08.LongName = 'ESC Active Maximum';
ESCACTVMAX_CNT_U08.Description = 'Maximum value of ESC Active';
ESCACTVMAX_CNT_U08.DocUnits = 'Cnt';
ESCACTVMAX_CNT_U08.EngDT = dt.u08;
ESCACTVMAX_CNT_U08.EngVal = 1;
ESCACTVMAX_CNT_U08.Define = 'Local';


ESCACTVMIN_CNT_U08 = DataDict.Constant;
ESCACTVMIN_CNT_U08.LongName = 'ESC Active Minimum';
ESCACTVMIN_CNT_U08.Description = 'Minimum value of ESC Active';
ESCACTVMIN_CNT_U08.DocUnits = 'Cnt';
ESCACTVMIN_CNT_U08.EngDT = dt.u08;
ESCACTVMIN_CNT_U08.EngVal = 0;
ESCACTVMIN_CNT_U08.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the FordEpsLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg213MissMsg = DataDict.NTC;
FordMsg213MissMsg.NtcNr = NtcNr1.NTCNR_0X12E;
FordMsg213MissMsg.NtcTyp = 'None';
FordMsg213MissMsg.LongName = 'Ford Message 213 Missing Message';
FordMsg213MissMsg.Description = 'Ford Message 213 Missing Message Diagnostic';
FordMsg213MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg213MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg213MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg213MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
