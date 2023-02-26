%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Nov-2017 17:26:37       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF046A = DataDict.FDD;
CF046A.Version = '1.0.X';
CF046A.LongName = 'Ford Voltage  Interface';
CF046A.ShoName  = 'FordVltgIf';
CF046A.DesignASIL = 'B';
CF046A.Description = [...
  'This function will inhibit battery voltage diagnostics, define primary' ...
  'voltage states and define transitions between battery voltage states'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordVltgIfInit1 = DataDict.Runnable;
FordVltgIfInit1.Context = 'Rte';
FordVltgIfInit1.TimeStep = 0;
FordVltgIfInit1.Description = 'Initialization Runnable';

FordVltgIfPer1 = DataDict.Runnable;
FordVltgIfPer1.Context = 'Rte';
FordVltgIfPer1.TimeStep = 0.002;
FordVltgIfPer1.Description = 'Periodic Runnable at 2ms';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordVltgIfInit1','FordVltgIfPer1'};
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordVltgIfPer1'};
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
SetNtcSts.CallLocation = {'FordVltgIfInit1','FordVltgIfPer1'};
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
BattRtnCurr = DataDict.IpSignal;
BattRtnCurr.LongName = 'Battery Return Current';
BattRtnCurr.Description = [...
  'Indicates the Ford Battery Return Current'];
BattRtnCurr.DocUnits = 'Ampr';
BattRtnCurr.EngDT = dt.float32;
BattRtnCurr.EngInit = 0;
BattRtnCurr.EngMin = -300;
BattRtnCurr.EngMax = 300;
BattRtnCurr.ReadIn = {'FordVltgIfPer1'};
BattRtnCurr.ReadType = 'Rte';


BattRtnCurrImc = DataDict.IpSignal;
BattRtnCurrImc.LongName = 'Battery Return Current IMC';
BattRtnCurrImc.Description = [...
  'Indicates the Ford Battery Return Current IMC'];
BattRtnCurrImc.DocUnits = 'Ampr';
BattRtnCurrImc.EngDT = dt.float32;
BattRtnCurrImc.EngInit = 0;
BattRtnCurrImc.EngMin = -300;
BattRtnCurrImc.EngMax = 300;
BattRtnCurrImc.ReadIn = {'FordVltgIfPer1'};
BattRtnCurrImc.ReadType = 'Rte';


BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage ';
BattVltg.Description = 'Indicates the Ford Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.ReadIn = {'FordVltgIfPer1'};
BattVltg.ReadType = 'Rte';


FordActvParkAssiEnad = DataDict.IpSignal;
FordActvParkAssiEnad.LongName = 'Ford Active Park Assist Enabled';
FordActvParkAssiEnad.Description = [...
  'Indicates the Ford Active Park Asisst Enabled'];
FordActvParkAssiEnad.DocUnits = 'Cnt';
FordActvParkAssiEnad.EngDT = dt.lgc;
FordActvParkAssiEnad.EngInit = 1;
FordActvParkAssiEnad.EngMin = 0;
FordActvParkAssiEnad.EngMax = 1;
FordActvParkAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordActvParkAssiEnad.ReadType = 'Rte';


FordEpsSysSt = DataDict.IpSignal;
FordEpsSysSt.LongName = 'Ford EPS System State';
FordEpsSysSt.Description = 'Indicates the EPS System State';
FordEpsSysSt.DocUnits = 'Cnt';
FordEpsSysSt.EngDT = enum.FordEpsSysSt1;
FordEpsSysSt.EngInit = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMin = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMax = FordEpsSysSt1.FORDEPSSYSST_EPS_PWRDWN;
FordEpsSysSt.ReadIn = {'FordVltgIfPer1'};
FordEpsSysSt.ReadType = 'Rte';


FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Ford Evasive Steering Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'Indicates the Ford Evasive Steering Assist Enabled'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 1;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Ford Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'Indicates the Ford Lane Centering Assist Enabled'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 1;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordLaneDprtrWarnEnad = DataDict.IpSignal;
FordLaneDprtrWarnEnad.LongName = 'Ford Lane Departure Warning Enabled';
FordLaneDprtrWarnEnad.Description = [...
  'Indicates the Ford Lane Departure Warning Enabled'];
FordLaneDprtrWarnEnad.DocUnits = 'Cnt';
FordLaneDprtrWarnEnad.EngDT = dt.lgc;
FordLaneDprtrWarnEnad.EngInit = 1;
FordLaneDprtrWarnEnad.EngMin = 0;
FordLaneDprtrWarnEnad.EngMax = 1;
FordLaneDprtrWarnEnad.ReadIn = {'FordVltgIfPer1'};
FordLaneDprtrWarnEnad.ReadType = 'Rte';


FordLaneKeepAssiEnad = DataDict.IpSignal;
FordLaneKeepAssiEnad.LongName = 'Ford Lane Keep Assist Enabled';
FordLaneKeepAssiEnad.Description = [...
  'Indicates the Ford Lane Keep Assist Enabled'];
FordLaneKeepAssiEnad.DocUnits = 'Cnt';
FordLaneKeepAssiEnad.EngDT = dt.lgc;
FordLaneKeepAssiEnad.EngInit = 1;
FordLaneKeepAssiEnad.EngMin = 0;
FordLaneKeepAssiEnad.EngMax = 1;
FordLaneKeepAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordLaneKeepAssiEnad.ReadType = 'Rte';


FordMaxAsscTq = DataDict.IpSignal;
FordMaxAsscTq.LongName = 'Ford Maximum Assistance Torque';
FordMaxAsscTq.Description = [...
  'Indicates the Ford Maximum Assistance Torque'];
FordMaxAsscTq.DocUnits = 'Perc';
FordMaxAsscTq.EngDT = dt.float32;
FordMaxAsscTq.EngInit = 0;
FordMaxAsscTq.EngMin = 0;
FordMaxAsscTq.EngMax = 100;
FordMaxAsscTq.ReadIn = {'FordVltgIfPer1'};
FordMaxAsscTq.ReadType = 'Rte';


FordSysSt = DataDict.IpSignal;
FordSysSt.LongName = 'Ford System State';
FordSysSt.Description = 'Indicates the System State';
FordSysSt.DocUnits = 'Cnt';
FordSysSt.EngDT = enum.SysSt1;
FordSysSt.EngInit = SysSt1.SYSST_DI;
FordSysSt.EngMin = SysSt1.SYSST_DI;
FordSysSt.EngMax = SysSt1.SYSST_WRMININ;
FordSysSt.ReadIn = {'FordVltgIfPer1'};
FordSysSt.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Ford Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'Indicates the Ford Traffic Jam Assist Enabled'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 1;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'Indicates the Ford Trailer Backup Assistance Enabled'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 1;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FordVltgIfPer1'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';


FordStrtStopSt = DataDict.IpSignal;
FordStrtStopSt.LongName = 'Ford Electrical Power Start Stop State';
FordStrtStopSt.Description = [...
  'Indicates the Ford Electrical Power Start Stop State'];
FordStrtStopSt.DocUnits = 'Cnt';
FordStrtStopSt.EngDT = dt.float32;
FordStrtStopSt.EngInit = 0;
FordStrtStopSt.EngMin = 0;
FordStrtStopSt.EngMax = 3;
FordStrtStopSt.ReadIn = {'FordVltgIfPer1'};
FordStrtStopSt.ReadType = 'Rte';


FordVehElecPwrSts = DataDict.IpSignal;
FordVehElecPwrSts.LongName = 'Ford Electrical Power Status';
FordVehElecPwrSts.Description = [...
  'Indicates the Ford Electrical Power Status'];
FordVehElecPwrSts.DocUnits = 'Cnt';
FordVehElecPwrSts.EngDT = enum.Ford_ElPw_D_Stat;
FordVehElecPwrSts.EngInit = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMin = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMax = Ford_ElPw_D_Stat.Cx7_NotUsed_3;
FordVehElecPwrSts.ReadIn = {'FordVltgIfPer1'};
FordVehElecPwrSts.ReadType = 'Rte';


FordVehIgnStsQly = DataDict.IpSignal;
FordVehIgnStsQly.LongName = 'Ford Vehicle Ignition Status Quality';
FordVehIgnStsQly.Description = [...
  'Indicates the Ford Vehicle Ignition Status Quality'];
FordVehIgnStsQly.DocUnits = 'Cnt';
FordVehIgnStsQly.EngDT = enum.FordVehIgnStsQly1;
FordVehIgnStsQly.EngInit = FordVehIgnStsQly1.FORDVEHIGNSTSQLY_UKWNMOD;
FordVehIgnStsQly.EngMin = FordVehIgnStsQly1.FORDVEHIGNSTSQLY_UKWNMOD;
FordVehIgnStsQly.EngMax = FordVehIgnStsQly1.FORDVEHIGNSTSQLY_INVLDMOD;
FordVehIgnStsQly.ReadIn = {'FordVltgIfPer1'};
FordVehIgnStsQly.ReadType = 'Rte';


FordVehPwrpkTqSts = DataDict.IpSignal;
FordVehPwrpkTqSts.LongName = 'Ford Vehicle Power-pack Torque Status';
FordVehPwrpkTqSts.Description = [...
  'Indicates the Ford Vehicle Power-pack Torque Status'];
FordVehPwrpkTqSts.DocUnits = 'Cnt';
FordVehPwrpkTqSts.EngDT = enum.Ford_PwPckTq_D_Stat;
FordVehPwrpkTqSts.EngInit = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
FordVehPwrpkTqSts.ReadIn = {'FordVltgIfPer1'};
FordVehPwrpkTqSts.ReadType = 'Rte';


FordVehSpd = DataDict.IpSignal;
FordVehSpd.LongName = 'Ford Vehicle Speed';
FordVehSpd.Description = 'Indicates the Ford Vehicle Speed';
FordVehSpd.DocUnits = 'Kph';
FordVehSpd.EngDT = dt.float32;
FordVehSpd.EngInit = 0;
FordVehSpd.EngMin = 0;
FordVehSpd.EngMax = 511;
FordVehSpd.ReadIn = {'FordVltgIfPer1'};
FordVehSpd.ReadType = 'Rte';


FordVehSpdVld = DataDict.IpSignal;
FordVehSpdVld.LongName = 'Ford Vehicle Speed Validity';
FordVehSpdVld.Description = [...
  'Indicates the Ford Vehicle Speed Validity'];
FordVehSpdVld.DocUnits = 'Cnt';
FordVehSpdVld.EngDT = dt.lgc;
FordVehSpdVld.EngInit = 0;
FordVehSpdVld.EngMin = 0;
FordVehSpdVld.EngMax = 1;
FordVehSpdVld.ReadIn = {'FordVltgIfPer1'};
FordVehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordEpsCurr = DataDict.OpSignal;
FordEpsCurr.LongName = 'Ford EPS Current';
FordEpsCurr.Description = 'Indicates the Ford EPS Current';
FordEpsCurr.DocUnits = 'Ampr';
FordEpsCurr.SwcShoName = 'FordVltgIf';
FordEpsCurr.EngDT = dt.float32;
FordEpsCurr.EngInit = 0;
FordEpsCurr.EngMin = -75;
FordEpsCurr.EngMax = 150;
FordEpsCurr.TestTolerance = 3;
FordEpsCurr.WrittenIn = {'FordVltgIfPer1'};
FordEpsCurr.WriteType = 'Rte';

FordEpsCurrVal = DataDict.OpSignal;
FordEpsCurrVal.LongName = 'Ford EPS Current Validity';
FordEpsCurrVal.Description = [...
  'Indicates the Ford EPS Current is Valid'];
FordEpsCurrVal.DocUnits = 'Cnt';
FordEpsCurrVal.SwcShoName = 'FordVltgIf';
FordEpsCurrVal.EngDT = dt.lgc;
FordEpsCurrVal.EngInit = 0;
FordEpsCurrVal.EngMin = 0;
FordEpsCurrVal.EngMax = 1;
FordEpsCurrVal.TestTolerance = 0;
FordEpsCurrVal.WrittenIn = {'FordVltgIfPer1'};
FordEpsCurrVal.WriteType = 'Rte';

FordEpsVltg = DataDict.OpSignal;
FordEpsVltg.LongName = 'Ford EPS Voltage ';
FordEpsVltg.Description = 'Indicates the Ford EPS Voltage';
FordEpsVltg.DocUnits = 'Volt';
FordEpsVltg.SwcShoName = 'FordVltgIf';
FordEpsVltg.EngDT = dt.float32;
FordEpsVltg.EngInit = 13;
FordEpsVltg.EngMin = 6;
FordEpsVltg.EngMax = 19;
FordEpsVltg.TestTolerance = 0.25;
FordEpsVltg.WrittenIn = {'FordVltgIfPer1'};
FordEpsVltg.WriteType = 'Rte';

FordEpsVltgVal = DataDict.OpSignal;
FordEpsVltgVal.LongName = 'Ford EPS Voltage Validity';
FordEpsVltgVal.Description = [...
  'Indicates the Ford EPS Voltage is Valid'];
FordEpsVltgVal.DocUnits = 'Cnt';
FordEpsVltgVal.SwcShoName = 'FordVltgIf';
FordEpsVltgVal.EngDT = dt.lgc;
FordEpsVltgVal.EngInit = 0;
FordEpsVltgVal.EngMin = 0;
FordEpsVltgVal.EngMax = 1;
FordEpsVltgVal.TestTolerance = 0;
FordEpsVltgVal.WrittenIn = {'FordVltgIfPer1'};
FordEpsVltgVal.WriteType = 'Rte';

FordFeatThdSts = DataDict.OpSignal;
FordFeatThdSts.LongName = 'Ford Feature Threshold Status';
FordFeatThdSts.Description = [...
  'Indicates the Ford Feature Threshold Status'];
FordFeatThdSts.DocUnits = 'Cnt';
FordFeatThdSts.SwcShoName = 'FordVltgIf';
FordFeatThdSts.EngDT = dt.lgc;
FordFeatThdSts.EngInit = 0;
FordFeatThdSts.EngMin = 0;
FordFeatThdSts.EngMax = 1;
FordFeatThdSts.TestTolerance = 0;
FordFeatThdSts.WrittenIn = {'FordVltgIfPer1'};
FordFeatThdSts.WriteType = 'Rte';


FordInhbBattVltgDiagc = DataDict.OpSignal;
FordInhbBattVltgDiagc.LongName = 'Ford Inhibit Battery Voltage  Diagnostic';
FordInhbBattVltgDiagc.Description = [...
  'Indicates the Ford Inhibit Battery Voltage Diagnostic'];
FordInhbBattVltgDiagc.DocUnits = 'Cnt';
FordInhbBattVltgDiagc.SwcShoName = 'FordVltgIf';
FordInhbBattVltgDiagc.EngDT = dt.lgc;
FordInhbBattVltgDiagc.EngInit = 0;
FordInhbBattVltgDiagc.EngMin = 0;
FordInhbBattVltgDiagc.EngMax = 1;
FordInhbBattVltgDiagc.TestTolerance = 0;
FordInhbBattVltgDiagc.WrittenIn = {'FordVltgIfPer1'};
FordInhbBattVltgDiagc.WriteType = 'Rte';


FordMaxBattCurr = DataDict.OpSignal;
FordMaxBattCurr.LongName = 'Ford Maximum Battery Current';
FordMaxBattCurr.Description = [...
  'Indicates the Maximum value of Ford Battery Current'];
FordMaxBattCurr.DocUnits = 'Ampr';
FordMaxBattCurr.SwcShoName = 'FordVltgIf';
FordMaxBattCurr.EngDT = dt.float32;
FordMaxBattCurr.EngInit = 0;
FordMaxBattCurr.EngMin = -300;
FordMaxBattCurr.EngMax = 300;
FordMaxBattCurr.TestTolerance = 3;
FordMaxBattCurr.WrittenIn = {'FordVltgIfPer1'};
FordMaxBattCurr.WriteType = 'Rte';


FordMinBattVltg = DataDict.OpSignal;
FordMinBattVltg.LongName = 'Ford Minimum Battery Voltage';
FordMinBattVltg.Description = [...
  'Indicates the Minimum value of Ford Battery Voltage'];
FordMinBattVltg.DocUnits = 'Volt';
FordMinBattVltg.SwcShoName = 'FordVltgIf';
FordMinBattVltg.EngDT = dt.float32;
FordMinBattVltg.EngInit = 0;
FordMinBattVltg.EngMin = 0;
FordMinBattVltg.EngMax = 40;
FordMinBattVltg.TestTolerance = 0.25;
FordMinBattVltg.WrittenIn = {'FordVltgIfPer1'};
FordMinBattVltg.WriteType = 'Rte';


FordVltgOperRamp = DataDict.OpSignal;
FordVltgOperRamp.LongName = 'Ford Voltage  Operation Ramp';
FordVltgOperRamp.Description = [...
  'Indicates the Ford Voltage Operation Ramp'];
FordVltgOperRamp.DocUnits = 'UlsPerSec';
FordVltgOperRamp.SwcShoName = 'FordVltgIf';
FordVltgOperRamp.EngDT = dt.float32;
FordVltgOperRamp.EngInit = 50;
FordVltgOperRamp.EngMin = 0.1;
FordVltgOperRamp.EngMax = 500;
FordVltgOperRamp.TestTolerance = 0;
FordVltgOperRamp.WrittenIn = {'FordVltgIfPer1'};
FordVltgOperRamp.WriteType = 'Rte';


FordVltgOperScar = DataDict.OpSignal;
FordVltgOperScar.LongName = 'Ford Voltage Operation Scaler';
FordVltgOperScar.Description = [...
  'Indicates the Ford Voltage Operation Scaler'];
FordVltgOperScar.DocUnits = 'Uls';
FordVltgOperScar.SwcShoName = 'FordVltgIf';
FordVltgOperScar.EngDT = dt.float32;
FordVltgOperScar.EngInit = 0;
FordVltgOperScar.EngMin = 0;
FordVltgOperScar.EngMax = 1;
FordVltgOperScar.TestTolerance = 0;
FordVltgOperScar.WrittenIn = {'FordVltgIfPer1'};
FordVltgOperScar.WriteType = 'Rte';


FordVltgOperSt = DataDict.OpSignal;
FordVltgOperSt.LongName = 'Ford Voltage  Operation State';
FordVltgOperSt.Description = [...
  'Indicates the Ford Voltage Operation State'];
FordVltgOperSt.DocUnits = 'Cnt';
FordVltgOperSt.SwcShoName = 'FordVltgIf';
FordVltgOperSt.EngDT = enum.FordVltgOperSt1;
FordVltgOperSt.EngInit = FordVltgOperSt1.FORDVLTGOPERST_NORMVLTGOP;
FordVltgOperSt.EngMin = FordVltgOperSt1.FORDVLTGOPERST_NORMVLTGOP;
FordVltgOperSt.EngMax = FordVltgOperSt1.FORDVLTGOPERST_HIVLTG_NOASSI;
FordVltgOperSt.TestTolerance = 0;
FordVltgOperSt.WrittenIn = {'FordVltgIfPer1'};
FordVltgOperSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordVltgIfActvParkAssiAsscTqMin = DataDict.Calibration;
FordVltgIfActvParkAssiAsscTqMin.LongName = 'APA Assistance Torque Minimum';
FordVltgIfActvParkAssiAsscTqMin.Description = [...
  'Indicates the Minimum of APA Assistance Torque '];
FordVltgIfActvParkAssiAsscTqMin.DocUnits = 'Perc';
FordVltgIfActvParkAssiAsscTqMin.EngDT = dt.float32;
FordVltgIfActvParkAssiAsscTqMin.EngVal = 0;
FordVltgIfActvParkAssiAsscTqMin.EngMin = -8.8;
FordVltgIfActvParkAssiAsscTqMin.EngMax = 8.8;
FordVltgIfActvParkAssiAsscTqMin.Cardinality = 'Cmn';
FordVltgIfActvParkAssiAsscTqMin.CustomerVisible = false;
FordVltgIfActvParkAssiAsscTqMin.Online = false;
FordVltgIfActvParkAssiAsscTqMin.Impact = 'H';
FordVltgIfActvParkAssiAsscTqMin.TuningOwner = 'EPDT';
FordVltgIfActvParkAssiAsscTqMin.GraphLink = {''};
FordVltgIfActvParkAssiAsscTqMin.Monotony = 'None';
FordVltgIfActvParkAssiAsscTqMin.MaxGrad = Inf;
FordVltgIfActvParkAssiAsscTqMin.PortName = 'FordVltgIfActvParkAssiAsscTqMin';


FordVltgIfEpsBattCurrLim = DataDict.Calibration;
FordVltgIfEpsBattCurrLim.LongName = 'EPS Battery Current Limit';
FordVltgIfEpsBattCurrLim.Description = [...
  'Indicates the EPS Battery Current Limit'];
FordVltgIfEpsBattCurrLim.DocUnits = 'Ampr';
FordVltgIfEpsBattCurrLim.EngDT = dt.float32;
FordVltgIfEpsBattCurrLim.EngVal = 0;
FordVltgIfEpsBattCurrLim.EngMin = -1000;
FordVltgIfEpsBattCurrLim.EngMax = 1000;
FordVltgIfEpsBattCurrLim.Cardinality = 'Cmn';
FordVltgIfEpsBattCurrLim.CustomerVisible = false;
FordVltgIfEpsBattCurrLim.Online = false;
FordVltgIfEpsBattCurrLim.Impact = 'H';
FordVltgIfEpsBattCurrLim.TuningOwner = 'EPDT';
FordVltgIfEpsBattCurrLim.GraphLink = {''};
FordVltgIfEpsBattCurrLim.Monotony = 'None';
FordVltgIfEpsBattCurrLim.MaxGrad = Inf;
FordVltgIfEpsBattCurrLim.PortName = 'FordVltgIfEpsBattCurrLim';


FordVltgIfEpsCurrLim = DataDict.Calibration;
FordVltgIfEpsCurrLim.LongName = 'EPS Current Limit';
FordVltgIfEpsCurrLim.Description = 'Indicates the EPS Current Limit';
FordVltgIfEpsCurrLim.DocUnits = 'Perc';
FordVltgIfEpsCurrLim.EngDT = dt.float32;
FordVltgIfEpsCurrLim.EngVal = 40;
FordVltgIfEpsCurrLim.EngMin = 0;
FordVltgIfEpsCurrLim.EngMax = 100;
FordVltgIfEpsCurrLim.Cardinality = 'Cmn';
FordVltgIfEpsCurrLim.CustomerVisible = false;
FordVltgIfEpsCurrLim.Online = false;
FordVltgIfEpsCurrLim.Impact = 'H';
FordVltgIfEpsCurrLim.TuningOwner = 'EPDT';
FordVltgIfEpsCurrLim.GraphLink = {''};
FordVltgIfEpsCurrLim.Monotony = 'None';
FordVltgIfEpsCurrLim.MaxGrad = Inf;
FordVltgIfEpsCurrLim.PortName = 'FordVltgIfEpsCurrLim';


FordVltgIfEvasSteerAssiTqMin = DataDict.Calibration;
FordVltgIfEvasSteerAssiTqMin.LongName = 'Evasive Steering Assist Torque Minimum';
FordVltgIfEvasSteerAssiTqMin.Description = [...
  'Indicates the Minimum of ESA Assistance Torque'];
FordVltgIfEvasSteerAssiTqMin.DocUnits = 'Perc';
FordVltgIfEvasSteerAssiTqMin.EngDT = dt.float32;
FordVltgIfEvasSteerAssiTqMin.EngVal = 90;
FordVltgIfEvasSteerAssiTqMin.EngMin = 0;
FordVltgIfEvasSteerAssiTqMin.EngMax = 100;
FordVltgIfEvasSteerAssiTqMin.Cardinality = 'Cmn';
FordVltgIfEvasSteerAssiTqMin.CustomerVisible = false;
FordVltgIfEvasSteerAssiTqMin.Online = false;
FordVltgIfEvasSteerAssiTqMin.Impact = 'H';
FordVltgIfEvasSteerAssiTqMin.TuningOwner = 'EPDT';
FordVltgIfEvasSteerAssiTqMin.GraphLink = {''};
FordVltgIfEvasSteerAssiTqMin.Monotony = 'None';
FordVltgIfEvasSteerAssiTqMin.MaxGrad = Inf;
FordVltgIfEvasSteerAssiTqMin.PortName = 'FordVltgIfEvasSteerAssiTqMin';


FordVltgIfFeatThdStsTiThd = DataDict.Calibration;
FordVltgIfFeatThdStsTiThd.LongName = 'Feature Threshold Status Time Threshold';
FordVltgIfFeatThdStsTiThd.Description = [...
  'Indicates the Feature Threshold Status Threshold'];
FordVltgIfFeatThdStsTiThd.DocUnits = 'MilliSec';
FordVltgIfFeatThdStsTiThd.EngDT = dt.u16;
FordVltgIfFeatThdStsTiThd.EngVal = 1000;
FordVltgIfFeatThdStsTiThd.EngMin = 0;
FordVltgIfFeatThdStsTiThd.EngMax = 10000;
FordVltgIfFeatThdStsTiThd.Cardinality = 'Cmn';
FordVltgIfFeatThdStsTiThd.CustomerVisible = false;
FordVltgIfFeatThdStsTiThd.Online = false;
FordVltgIfFeatThdStsTiThd.Impact = 'H';
FordVltgIfFeatThdStsTiThd.TuningOwner = 'EPDT';
FordVltgIfFeatThdStsTiThd.GraphLink = {''};
FordVltgIfFeatThdStsTiThd.Monotony = 'None';
FordVltgIfFeatThdStsTiThd.MaxGrad = Inf;
FordVltgIfFeatThdStsTiThd.PortName = 'FordVltgIfFeatThdStsTiThd';


FordVltgIfHiVltgAssiRampDwnRate = DataDict.Calibration;
FordVltgIfHiVltgAssiRampDwnRate.LongName = 'High Voltage Assist Ramp Down Rate';
FordVltgIfHiVltgAssiRampDwnRate.Description = [...
  'Indicates the High Voltage Assist Ramp Down Rate'];
FordVltgIfHiVltgAssiRampDwnRate.DocUnits = 'UlsPerSec';
FordVltgIfHiVltgAssiRampDwnRate.EngDT = dt.float32;
FordVltgIfHiVltgAssiRampDwnRate.EngVal = 50;
FordVltgIfHiVltgAssiRampDwnRate.EngMin = 0.1;
FordVltgIfHiVltgAssiRampDwnRate.EngMax = 500;
FordVltgIfHiVltgAssiRampDwnRate.Cardinality = 'Cmn';
FordVltgIfHiVltgAssiRampDwnRate.CustomerVisible = false;
FordVltgIfHiVltgAssiRampDwnRate.Online = false;
FordVltgIfHiVltgAssiRampDwnRate.Impact = 'H';
FordVltgIfHiVltgAssiRampDwnRate.TuningOwner = 'EPDT';
FordVltgIfHiVltgAssiRampDwnRate.GraphLink = {''};
FordVltgIfHiVltgAssiRampDwnRate.Monotony = 'None';
FordVltgIfHiVltgAssiRampDwnRate.MaxGrad = Inf;
FordVltgIfHiVltgAssiRampDwnRate.PortName = 'FordVltgIfHiVltgAssiRampDwnRate';


FordVltgIfHiVltgAssiRampUpRate = DataDict.Calibration;
FordVltgIfHiVltgAssiRampUpRate.LongName = 'High Voltage Assist Ramp Up Rate';
FordVltgIfHiVltgAssiRampUpRate.Description = [...
  'Indicates the High Voltage Assist Ramp Up Rate'];
FordVltgIfHiVltgAssiRampUpRate.DocUnits = 'UlsPerSec';
FordVltgIfHiVltgAssiRampUpRate.EngDT = dt.float32;
FordVltgIfHiVltgAssiRampUpRate.EngVal = 50;
FordVltgIfHiVltgAssiRampUpRate.EngMin = 0.1;
FordVltgIfHiVltgAssiRampUpRate.EngMax = 500;
FordVltgIfHiVltgAssiRampUpRate.Cardinality = 'Cmn';
FordVltgIfHiVltgAssiRampUpRate.CustomerVisible = false;
FordVltgIfHiVltgAssiRampUpRate.Online = false;
FordVltgIfHiVltgAssiRampUpRate.Impact = 'H';
FordVltgIfHiVltgAssiRampUpRate.TuningOwner = 'EPDT';
FordVltgIfHiVltgAssiRampUpRate.GraphLink = {''};
FordVltgIfHiVltgAssiRampUpRate.Monotony = 'None';
FordVltgIfHiVltgAssiRampUpRate.MaxGrad = Inf;
FordVltgIfHiVltgAssiRampUpRate.PortName = 'FordVltgIfHiVltgAssiRampUpRate';


FordVltgIfHiVltgInhbTiMax = DataDict.Calibration;
FordVltgIfHiVltgInhbTiMax.LongName = 'High Voltage Inhibit Time Maximum';
FordVltgIfHiVltgInhbTiMax.Description = [...
  'Indicates the Maximum value of High Voltage Inhibit Time '];
FordVltgIfHiVltgInhbTiMax.DocUnits = 'MilliSec';
FordVltgIfHiVltgInhbTiMax.EngDT = dt.u16;
FordVltgIfHiVltgInhbTiMax.EngVal = 100;
FordVltgIfHiVltgInhbTiMax.EngMin = 0;
FordVltgIfHiVltgInhbTiMax.EngMax = 500;
FordVltgIfHiVltgInhbTiMax.Cardinality = 'Cmn';
FordVltgIfHiVltgInhbTiMax.CustomerVisible = false;
FordVltgIfHiVltgInhbTiMax.Online = false;
FordVltgIfHiVltgInhbTiMax.Impact = 'H';
FordVltgIfHiVltgInhbTiMax.TuningOwner = 'EPDT';
FordVltgIfHiVltgInhbTiMax.GraphLink = {''};
FordVltgIfHiVltgInhbTiMax.Monotony = 'None';
FordVltgIfHiVltgInhbTiMax.MaxGrad = Inf;
FordVltgIfHiVltgInhbTiMax.PortName = 'FordVltgIfHiVltgInhbTiMax';


FordVltgIfHiVltgNoAssiRampDwnRate = DataDict.Calibration;
FordVltgIfHiVltgNoAssiRampDwnRate.LongName = 'High Voltage  No Assist Ramp Down Rate';
FordVltgIfHiVltgNoAssiRampDwnRate.Description = [...
  'Indicates the High Voltage  No Assist Ramp Down Rate'];
FordVltgIfHiVltgNoAssiRampDwnRate.DocUnits = 'UlsPerSec';
FordVltgIfHiVltgNoAssiRampDwnRate.EngDT = dt.float32;
FordVltgIfHiVltgNoAssiRampDwnRate.EngVal = 50;
FordVltgIfHiVltgNoAssiRampDwnRate.EngMin = 0.1;
FordVltgIfHiVltgNoAssiRampDwnRate.EngMax = 500;
FordVltgIfHiVltgNoAssiRampDwnRate.Cardinality = 'Cmn';
FordVltgIfHiVltgNoAssiRampDwnRate.CustomerVisible = false;
FordVltgIfHiVltgNoAssiRampDwnRate.Online = false;
FordVltgIfHiVltgNoAssiRampDwnRate.Impact = 'H';
FordVltgIfHiVltgNoAssiRampDwnRate.TuningOwner = 'EPDT';
FordVltgIfHiVltgNoAssiRampDwnRate.GraphLink = {''};
FordVltgIfHiVltgNoAssiRampDwnRate.Monotony = 'None';
FordVltgIfHiVltgNoAssiRampDwnRate.MaxGrad = Inf;
FordVltgIfHiVltgNoAssiRampDwnRate.PortName = 'FordVltgIfHiVltgNoAssiRampDwnRate';


FordVltgIfHiVltgNoAssiRcvrTiMax = DataDict.Calibration;
FordVltgIfHiVltgNoAssiRcvrTiMax.LongName = 'High Voltage No Assist Recover Time Maximum';
FordVltgIfHiVltgNoAssiRcvrTiMax.Description = [...
  'Indicates the Maximum value of High Voltage No Assist Recover Time '];
FordVltgIfHiVltgNoAssiRcvrTiMax.DocUnits = 'MilliSec';
FordVltgIfHiVltgNoAssiRcvrTiMax.EngDT = dt.u32;
FordVltgIfHiVltgNoAssiRcvrTiMax.EngVal = 2000;
FordVltgIfHiVltgNoAssiRcvrTiMax.EngMin = 0;
FordVltgIfHiVltgNoAssiRcvrTiMax.EngMax = 10000;
FordVltgIfHiVltgNoAssiRcvrTiMax.Cardinality = 'Cmn';
FordVltgIfHiVltgNoAssiRcvrTiMax.CustomerVisible = false;
FordVltgIfHiVltgNoAssiRcvrTiMax.Online = false;
FordVltgIfHiVltgNoAssiRcvrTiMax.Impact = 'H';
FordVltgIfHiVltgNoAssiRcvrTiMax.TuningOwner = 'EPDT';
FordVltgIfHiVltgNoAssiRcvrTiMax.GraphLink = {''};
FordVltgIfHiVltgNoAssiRcvrTiMax.Monotony = 'None';
FordVltgIfHiVltgNoAssiRcvrTiMax.MaxGrad = Inf;
FordVltgIfHiVltgNoAssiRcvrTiMax.PortName = 'FordVltgIfHiVltgNoAssiRcvrTiMax';


FordVltgIfHiVltgRcvrTiMax = DataDict.Calibration;
FordVltgIfHiVltgRcvrTiMax.LongName = 'High Voltage Recover Time Maximum';
FordVltgIfHiVltgRcvrTiMax.Description = [...
  'Indicates the Maximum of High Voltage Recover Time '];
FordVltgIfHiVltgRcvrTiMax.DocUnits = 'MilliSec';
FordVltgIfHiVltgRcvrTiMax.EngDT = dt.u32;
FordVltgIfHiVltgRcvrTiMax.EngVal = 500;
FordVltgIfHiVltgRcvrTiMax.EngMin = 0;
FordVltgIfHiVltgRcvrTiMax.EngMax = 10000;
FordVltgIfHiVltgRcvrTiMax.Cardinality = 'Cmn';
FordVltgIfHiVltgRcvrTiMax.CustomerVisible = false;
FordVltgIfHiVltgRcvrTiMax.Online = false;
FordVltgIfHiVltgRcvrTiMax.Impact = 'H';
FordVltgIfHiVltgRcvrTiMax.TuningOwner = 'EPDT';
FordVltgIfHiVltgRcvrTiMax.GraphLink = {''};
FordVltgIfHiVltgRcvrTiMax.Monotony = 'None';
FordVltgIfHiVltgRcvrTiMax.MaxGrad = Inf;
FordVltgIfHiVltgRcvrTiMax.PortName = 'FordVltgIfHiVltgRcvrTiMax';


FordVltgIfEPSBattVltgDifThd = DataDict.Calibration;
FordVltgIfEPSBattVltgDifThd.LongName = 'EPS Battery Voltage Difference Threshold';
FordVltgIfEPSBattVltgDifThd.Description = [...
  'Indicates the max difference between BattVltg and IMCBattVltg allowable'];
FordVltgIfEPSBattVltgDifThd.DocUnits = 'Volt';
FordVltgIfEPSBattVltgDifThd.EngDT = dt.float32;
FordVltgIfEPSBattVltgDifThd.EngVal = 5;
FordVltgIfEPSBattVltgDifThd.EngMin = 0;
FordVltgIfEPSBattVltgDifThd.EngMax = 20;
FordVltgIfEPSBattVltgDifThd.Cardinality = 'Cmn';
FordVltgIfEPSBattVltgDifThd.CustomerVisible = false;
FordVltgIfEPSBattVltgDifThd.Online = false;
FordVltgIfEPSBattVltgDifThd.Impact = 'H';
FordVltgIfEPSBattVltgDifThd.TuningOwner = 'EPDT';
FordVltgIfEPSBattVltgDifThd.GraphLink = {''};
FordVltgIfEPSBattVltgDifThd.Monotony = 'None';
FordVltgIfEPSBattVltgDifThd.MaxGrad = Inf;
FordVltgIfEPSBattVltgDifThd.PortName = 'FordVltgIfEPSBattVltgDifThd';

FordVltgIfHiVltgThdHi = DataDict.Calibration;
FordVltgIfHiVltgThdHi.LongName = 'High Voltage  Threshold High';
FordVltgIfHiVltgThdHi.Description = [...
  'Indicates the High Voltage  Threshold High'];
FordVltgIfHiVltgThdHi.DocUnits = 'Volt';
FordVltgIfHiVltgThdHi.EngDT = dt.float32;
FordVltgIfHiVltgThdHi.EngVal = 19;
FordVltgIfHiVltgThdHi.EngMin = 16;
FordVltgIfHiVltgThdHi.EngMax = 27;
FordVltgIfHiVltgThdHi.Cardinality = 'Cmn';
FordVltgIfHiVltgThdHi.CustomerVisible = false;
FordVltgIfHiVltgThdHi.Online = false;
FordVltgIfHiVltgThdHi.Impact = 'H';
FordVltgIfHiVltgThdHi.TuningOwner = 'EPDT';
FordVltgIfHiVltgThdHi.GraphLink = {''};
FordVltgIfHiVltgThdHi.Monotony = 'None';
FordVltgIfHiVltgThdHi.MaxGrad = Inf;
FordVltgIfHiVltgThdHi.PortName = 'FordVltgIfHiVltgThdHi';

FordVltgIfHiVltgThdLo = DataDict.Calibration;
FordVltgIfHiVltgThdLo.LongName = 'High Voltage  Threshold Low';
FordVltgIfHiVltgThdLo.Description = [...
  'Indicates the High Voltage  Threshold Low'];
FordVltgIfHiVltgThdLo.DocUnits = 'Volt';
FordVltgIfHiVltgThdLo.EngDT = dt.float32;
FordVltgIfHiVltgThdLo.EngVal = 18;
FordVltgIfHiVltgThdLo.EngMin = 16;
FordVltgIfHiVltgThdLo.EngMax = 27;
FordVltgIfHiVltgThdLo.Cardinality = 'Cmn';
FordVltgIfHiVltgThdLo.CustomerVisible = false;
FordVltgIfHiVltgThdLo.Online = false;
FordVltgIfHiVltgThdLo.Impact = 'H';
FordVltgIfHiVltgThdLo.TuningOwner = 'EPDT';
FordVltgIfHiVltgThdLo.GraphLink = {''};
FordVltgIfHiVltgThdLo.Monotony = 'None';
FordVltgIfHiVltgThdLo.MaxGrad = Inf;
FordVltgIfHiVltgThdLo.PortName = 'FordVltgIfHiVltgThdLo';


FordVltgIfInhbBattVltgDiagcTiThd = DataDict.Calibration;
FordVltgIfInhbBattVltgDiagcTiThd.LongName = 'Inhibit Battery Voltage  Diagnostic Time Threshold';
FordVltgIfInhbBattVltgDiagcTiThd.Description = [...
  'Indicates the Inhibit Battery Voltage  Diagnostic Threshold'];
FordVltgIfInhbBattVltgDiagcTiThd.DocUnits = 'MilliSec';
FordVltgIfInhbBattVltgDiagcTiThd.EngDT = dt.u16;
FordVltgIfInhbBattVltgDiagcTiThd.EngVal = 1000;
FordVltgIfInhbBattVltgDiagcTiThd.EngMin = 0;
FordVltgIfInhbBattVltgDiagcTiThd.EngMax = 1000;
FordVltgIfInhbBattVltgDiagcTiThd.Cardinality = 'Cmn';
FordVltgIfInhbBattVltgDiagcTiThd.CustomerVisible = false;
FordVltgIfInhbBattVltgDiagcTiThd.Online = false;
FordVltgIfInhbBattVltgDiagcTiThd.Impact = 'H';
FordVltgIfInhbBattVltgDiagcTiThd.TuningOwner = 'EPDT';
FordVltgIfInhbBattVltgDiagcTiThd.GraphLink = {''};
FordVltgIfInhbBattVltgDiagcTiThd.Monotony = 'None';
FordVltgIfInhbBattVltgDiagcTiThd.MaxGrad = Inf;
FordVltgIfInhbBattVltgDiagcTiThd.PortName = 'FordVltgIfInhbBattVltgDiagcTiThd';


FordVltgIfLaneCentrAssiTqMin = DataDict.Calibration;
FordVltgIfLaneCentrAssiTqMin.LongName = 'Lane Center Assist Torque Minimum';
FordVltgIfLaneCentrAssiTqMin.Description = [...
  'Indicates the Minimum value of LCA Assistance Torque'];
FordVltgIfLaneCentrAssiTqMin.DocUnits = 'Perc';
FordVltgIfLaneCentrAssiTqMin.EngDT = dt.float32;
FordVltgIfLaneCentrAssiTqMin.EngVal = 90;
FordVltgIfLaneCentrAssiTqMin.EngMin = 0;
FordVltgIfLaneCentrAssiTqMin.EngMax = 100;
FordVltgIfLaneCentrAssiTqMin.Cardinality = 'Cmn';
FordVltgIfLaneCentrAssiTqMin.CustomerVisible = false;
FordVltgIfLaneCentrAssiTqMin.Online = false;
FordVltgIfLaneCentrAssiTqMin.Impact = 'H';
FordVltgIfLaneCentrAssiTqMin.TuningOwner = 'EPDT';
FordVltgIfLaneCentrAssiTqMin.GraphLink = {''};
FordVltgIfLaneCentrAssiTqMin.Monotony = 'None';
FordVltgIfLaneCentrAssiTqMin.MaxGrad = Inf;
FordVltgIfLaneCentrAssiTqMin.PortName = 'FordVltgIfLaneCentrAssiTqMin';


FordVltgIfLaneDprtrWarnAsscTqMin = DataDict.Calibration;
FordVltgIfLaneDprtrWarnAsscTqMin.LongName = 'Lane Departure Warn Assistance Torque Minimum';
FordVltgIfLaneDprtrWarnAsscTqMin.Description = [...
  'Indicates the Minimum value of LDW Assistance Torque'];
FordVltgIfLaneDprtrWarnAsscTqMin.DocUnits = 'Perc';
FordVltgIfLaneDprtrWarnAsscTqMin.EngDT = dt.float32;
FordVltgIfLaneDprtrWarnAsscTqMin.EngVal = 90;
FordVltgIfLaneDprtrWarnAsscTqMin.EngMin = 0;
FordVltgIfLaneDprtrWarnAsscTqMin.EngMax = 100;
FordVltgIfLaneDprtrWarnAsscTqMin.Cardinality = 'Cmn';
FordVltgIfLaneDprtrWarnAsscTqMin.CustomerVisible = false;
FordVltgIfLaneDprtrWarnAsscTqMin.Online = false;
FordVltgIfLaneDprtrWarnAsscTqMin.Impact = 'H';
FordVltgIfLaneDprtrWarnAsscTqMin.TuningOwner = 'EPDT';
FordVltgIfLaneDprtrWarnAsscTqMin.GraphLink = {''};
FordVltgIfLaneDprtrWarnAsscTqMin.Monotony = 'None';
FordVltgIfLaneDprtrWarnAsscTqMin.MaxGrad = Inf;
FordVltgIfLaneDprtrWarnAsscTqMin.PortName = 'FordVltgIfLaneDprtrWarnAsscTqMin';


FordVltgIfLkaAsscTqMin = DataDict.Calibration;
FordVltgIfLkaAsscTqMin.LongName = 'LKA Assistance Torque Minimum';
FordVltgIfLkaAsscTqMin.Description = [...
  'Indicates the Minimum value of LKA Assistance Torque'];
FordVltgIfLkaAsscTqMin.DocUnits = 'Perc';
FordVltgIfLkaAsscTqMin.EngDT = dt.float32;
FordVltgIfLkaAsscTqMin.EngVal = 90;
FordVltgIfLkaAsscTqMin.EngMin = 0;
FordVltgIfLkaAsscTqMin.EngMax = 100;
FordVltgIfLkaAsscTqMin.Cardinality = 'Cmn';
FordVltgIfLkaAsscTqMin.CustomerVisible = false;
FordVltgIfLkaAsscTqMin.Online = false;
FordVltgIfLkaAsscTqMin.Impact = 'H';
FordVltgIfLkaAsscTqMin.TuningOwner = 'EPDT';
FordVltgIfLkaAsscTqMin.GraphLink = {''};
FordVltgIfLkaAsscTqMin.Monotony = 'None';
FordVltgIfLkaAsscTqMin.MaxGrad = Inf;
FordVltgIfLkaAsscTqMin.PortName = 'FordVltgIfLkaAsscTqMin';


FordVltgIfLoVltgAssiRampDwnRate = DataDict.Calibration;
FordVltgIfLoVltgAssiRampDwnRate.LongName = 'Low Voltage Assist Ramp Down Rate';
FordVltgIfLoVltgAssiRampDwnRate.Description = [...
  'Indicates the Low Voltage Assist Ramp Down Rate'];
FordVltgIfLoVltgAssiRampDwnRate.DocUnits = 'UlsPerSec';
FordVltgIfLoVltgAssiRampDwnRate.EngDT = dt.float32;
FordVltgIfLoVltgAssiRampDwnRate.EngVal = 50;
FordVltgIfLoVltgAssiRampDwnRate.EngMin = 0.1;
FordVltgIfLoVltgAssiRampDwnRate.EngMax = 500;
FordVltgIfLoVltgAssiRampDwnRate.Cardinality = 'Cmn';
FordVltgIfLoVltgAssiRampDwnRate.CustomerVisible = false;
FordVltgIfLoVltgAssiRampDwnRate.Online = false;
FordVltgIfLoVltgAssiRampDwnRate.Impact = 'H';
FordVltgIfLoVltgAssiRampDwnRate.TuningOwner = 'EPDT';
FordVltgIfLoVltgAssiRampDwnRate.GraphLink = {''};
FordVltgIfLoVltgAssiRampDwnRate.Monotony = 'None';
FordVltgIfLoVltgAssiRampDwnRate.MaxGrad = Inf;
FordVltgIfLoVltgAssiRampDwnRate.PortName = 'FordVltgIfLoVltgAssiRampDwnRate';


FordVltgIfLoVltgAssiRampUpRate = DataDict.Calibration;
FordVltgIfLoVltgAssiRampUpRate.LongName = 'Low Voltage Assist Ramp Up Rate';
FordVltgIfLoVltgAssiRampUpRate.Description = [...
  'Indicates the Low Voltage Assist Ramp Up Rate'];
FordVltgIfLoVltgAssiRampUpRate.DocUnits = 'UlsPerSec';
FordVltgIfLoVltgAssiRampUpRate.EngDT = dt.float32;
FordVltgIfLoVltgAssiRampUpRate.EngVal = 50;
FordVltgIfLoVltgAssiRampUpRate.EngMin = 0.1;
FordVltgIfLoVltgAssiRampUpRate.EngMax = 500;
FordVltgIfLoVltgAssiRampUpRate.Cardinality = 'Cmn';
FordVltgIfLoVltgAssiRampUpRate.CustomerVisible = false;
FordVltgIfLoVltgAssiRampUpRate.Online = false;
FordVltgIfLoVltgAssiRampUpRate.Impact = 'H';
FordVltgIfLoVltgAssiRampUpRate.TuningOwner = 'EPDT';
FordVltgIfLoVltgAssiRampUpRate.GraphLink = {''};
FordVltgIfLoVltgAssiRampUpRate.Monotony = 'None';
FordVltgIfLoVltgAssiRampUpRate.MaxGrad = Inf;
FordVltgIfLoVltgAssiRampUpRate.PortName = 'FordVltgIfLoVltgAssiRampUpRate';


FordVltgIfLoVltgAssiScar = DataDict.Calibration;
FordVltgIfLoVltgAssiScar.LongName = 'Low Voltage Assist Scaler';
FordVltgIfLoVltgAssiScar.Description = [...
  'Indicates the Low Voltage Assist Scaler'];
FordVltgIfLoVltgAssiScar.DocUnits = 'Uls';
FordVltgIfLoVltgAssiScar.EngDT = dt.float32;
FordVltgIfLoVltgAssiScar.EngVal = 0.4;
FordVltgIfLoVltgAssiScar.EngMin = 0;
FordVltgIfLoVltgAssiScar.EngMax = 1;
FordVltgIfLoVltgAssiScar.Cardinality = 'Cmn';
FordVltgIfLoVltgAssiScar.CustomerVisible = false;
FordVltgIfLoVltgAssiScar.Online = false;
FordVltgIfLoVltgAssiScar.Impact = 'H';
FordVltgIfLoVltgAssiScar.TuningOwner = 'EPDT';
FordVltgIfLoVltgAssiScar.GraphLink = {''};
FordVltgIfLoVltgAssiScar.Monotony = 'None';
FordVltgIfLoVltgAssiScar.MaxGrad = Inf;
FordVltgIfLoVltgAssiScar.PortName = 'FordVltgIfLoVltgAssiScar';


FordVltgIfLoVltgInhbTiMax = DataDict.Calibration;
FordVltgIfLoVltgInhbTiMax.LongName = 'Low Voltage Inhibit Maximum Time';
FordVltgIfLoVltgInhbTiMax.Description = [...
  'Indicates the Maximum value of Low Voltage Inhibit '];
FordVltgIfLoVltgInhbTiMax.DocUnits = 'MilliSec';
FordVltgIfLoVltgInhbTiMax.EngDT = dt.u32;
FordVltgIfLoVltgInhbTiMax.EngVal = 100;
FordVltgIfLoVltgInhbTiMax.EngMin = 0;
FordVltgIfLoVltgInhbTiMax.EngMax = 500;
FordVltgIfLoVltgInhbTiMax.Cardinality = 'Cmn';
FordVltgIfLoVltgInhbTiMax.CustomerVisible = false;
FordVltgIfLoVltgInhbTiMax.Online = false;
FordVltgIfLoVltgInhbTiMax.Impact = 'H';
FordVltgIfLoVltgInhbTiMax.TuningOwner = 'EPDT';
FordVltgIfLoVltgInhbTiMax.GraphLink = {''};
FordVltgIfLoVltgInhbTiMax.Monotony = 'None';
FordVltgIfLoVltgInhbTiMax.MaxGrad = Inf;
FordVltgIfLoVltgInhbTiMax.PortName = 'FordVltgIfLoVltgInhbTiMax';


FordVltgIfLoVltgNoAssiRampDwnRate = DataDict.Calibration;
FordVltgIfLoVltgNoAssiRampDwnRate.LongName = 'Low Voltage  No Assist Ramp Down Rate';
FordVltgIfLoVltgNoAssiRampDwnRate.Description = [...
  'Indicates the Low Voltage  No Assist Ramp Down Rate'];
FordVltgIfLoVltgNoAssiRampDwnRate.DocUnits = 'UlsPerSec';
FordVltgIfLoVltgNoAssiRampDwnRate.EngDT = dt.float32;
FordVltgIfLoVltgNoAssiRampDwnRate.EngVal = 50;
FordVltgIfLoVltgNoAssiRampDwnRate.EngMin = 0.1;
FordVltgIfLoVltgNoAssiRampDwnRate.EngMax = 500;
FordVltgIfLoVltgNoAssiRampDwnRate.Cardinality = 'Cmn';
FordVltgIfLoVltgNoAssiRampDwnRate.CustomerVisible = false;
FordVltgIfLoVltgNoAssiRampDwnRate.Online = false;
FordVltgIfLoVltgNoAssiRampDwnRate.Impact = 'H';
FordVltgIfLoVltgNoAssiRampDwnRate.TuningOwner = 'EPDT';
FordVltgIfLoVltgNoAssiRampDwnRate.GraphLink = {''};
FordVltgIfLoVltgNoAssiRampDwnRate.Monotony = 'None';
FordVltgIfLoVltgNoAssiRampDwnRate.MaxGrad = Inf;
FordVltgIfLoVltgNoAssiRampDwnRate.PortName = 'FordVltgIfLoVltgNoAssiRampDwnRate';


FordVltgIfLoVltgNoAssiRcvrTiMax = DataDict.Calibration;
FordVltgIfLoVltgNoAssiRcvrTiMax.LongName = 'Low Voltage  No Assist Recover Maximum Time';
FordVltgIfLoVltgNoAssiRcvrTiMax.Description = [...
  'Indicates the Low Voltage  No Assist Recover Maximum Time'];
FordVltgIfLoVltgNoAssiRcvrTiMax.DocUnits = 'MilliSec';
FordVltgIfLoVltgNoAssiRcvrTiMax.EngDT = dt.u16;
FordVltgIfLoVltgNoAssiRcvrTiMax.EngVal = 2000;
FordVltgIfLoVltgNoAssiRcvrTiMax.EngMin = 0;
FordVltgIfLoVltgNoAssiRcvrTiMax.EngMax = 10000;
FordVltgIfLoVltgNoAssiRcvrTiMax.Cardinality = 'Cmn';
FordVltgIfLoVltgNoAssiRcvrTiMax.CustomerVisible = false;
FordVltgIfLoVltgNoAssiRcvrTiMax.Online = false;
FordVltgIfLoVltgNoAssiRcvrTiMax.Impact = 'H';
FordVltgIfLoVltgNoAssiRcvrTiMax.TuningOwner = 'EPDT';
FordVltgIfLoVltgNoAssiRcvrTiMax.GraphLink = {''};
FordVltgIfLoVltgNoAssiRcvrTiMax.Monotony = 'None';
FordVltgIfLoVltgNoAssiRcvrTiMax.MaxGrad = Inf;
FordVltgIfLoVltgNoAssiRcvrTiMax.PortName = 'FordVltgIfLoVltgNoAssiRcvrTiMax';


FordVltgIfLoVltgRcvrTiMax = DataDict.Calibration;
FordVltgIfLoVltgRcvrTiMax.LongName = 'Low Voltage  Recover Time Maximum';
FordVltgIfLoVltgRcvrTiMax.Description = [...
  'Indicates the Low Voltage  Recover Maximum'];
FordVltgIfLoVltgRcvrTiMax.DocUnits = 'MilliSec';
FordVltgIfLoVltgRcvrTiMax.EngDT = dt.u32;
FordVltgIfLoVltgRcvrTiMax.EngVal = 500;
FordVltgIfLoVltgRcvrTiMax.EngMin = 0;
FordVltgIfLoVltgRcvrTiMax.EngMax = 10000;
FordVltgIfLoVltgRcvrTiMax.Cardinality = 'Cmn';
FordVltgIfLoVltgRcvrTiMax.CustomerVisible = false;
FordVltgIfLoVltgRcvrTiMax.Online = false;
FordVltgIfLoVltgRcvrTiMax.Impact = 'H';
FordVltgIfLoVltgRcvrTiMax.TuningOwner = 'EPDT';
FordVltgIfLoVltgRcvrTiMax.GraphLink = {''};
FordVltgIfLoVltgRcvrTiMax.Monotony = 'None';
FordVltgIfLoVltgRcvrTiMax.MaxGrad = Inf;
FordVltgIfLoVltgRcvrTiMax.PortName = 'FordVltgIfLoVltgRcvrTiMax';


FordVltgIfLoVltgThdHi = DataDict.Calibration;
FordVltgIfLoVltgThdHi.LongName = 'Low Voltage  Threshold High';
FordVltgIfLoVltgThdHi.Description = [...
  'Indicates the Low Voltage  Threshold High'];
FordVltgIfLoVltgThdHi.DocUnits = 'Volt';
FordVltgIfLoVltgThdHi.EngDT = dt.float32;
FordVltgIfLoVltgThdHi.EngVal = 11;
FordVltgIfLoVltgThdHi.EngMin = 5;
FordVltgIfLoVltgThdHi.EngMax = 12;
FordVltgIfLoVltgThdHi.Cardinality = 'Cmn';
FordVltgIfLoVltgThdHi.CustomerVisible = false;
FordVltgIfLoVltgThdHi.Online = false;
FordVltgIfLoVltgThdHi.Impact = 'H';
FordVltgIfLoVltgThdHi.TuningOwner = 'EPDT';
FordVltgIfLoVltgThdHi.GraphLink = {''};
FordVltgIfLoVltgThdHi.Monotony = 'None';
FordVltgIfLoVltgThdHi.MaxGrad = Inf;
FordVltgIfLoVltgThdHi.PortName = 'FordVltgIfLoVltgThdHi';


FordVltgIfLoVltgThdLo = DataDict.Calibration;
FordVltgIfLoVltgThdLo.LongName = 'Low Voltage  Threshold Low';
FordVltgIfLoVltgThdLo.Description = [...
  'Indicates the Low Voltage  Threshold Low'];
FordVltgIfLoVltgThdLo.DocUnits = 'Volt';
FordVltgIfLoVltgThdLo.EngDT = dt.float32;
FordVltgIfLoVltgThdLo.EngVal = 7;
FordVltgIfLoVltgThdLo.EngMin = 5;
FordVltgIfLoVltgThdLo.EngMax = 12;
FordVltgIfLoVltgThdLo.Cardinality = 'Cmn';
FordVltgIfLoVltgThdLo.CustomerVisible = false;
FordVltgIfLoVltgThdLo.Online = false;
FordVltgIfLoVltgThdLo.Impact = 'H';
FordVltgIfLoVltgThdLo.TuningOwner = 'EPDT';
FordVltgIfLoVltgThdLo.GraphLink = {''};
FordVltgIfLoVltgThdLo.Monotony = 'None';
FordVltgIfLoVltgThdLo.MaxGrad = Inf;
FordVltgIfLoVltgThdLo.PortName = 'FordVltgIfLoVltgThdLo';


FordVltgIfLoVltgThdMid = DataDict.Calibration;
FordVltgIfLoVltgThdMid.LongName = 'Low Voltage  Threshold Middle';
FordVltgIfLoVltgThdMid.Description = [...
  'Indicates the Low Voltage  Threshold Middle'];
FordVltgIfLoVltgThdMid.DocUnits = 'Volt';
FordVltgIfLoVltgThdMid.EngDT = dt.float32;
FordVltgIfLoVltgThdMid.EngVal = 10;
FordVltgIfLoVltgThdMid.EngMin = 5;
FordVltgIfLoVltgThdMid.EngMax = 12;
FordVltgIfLoVltgThdMid.Cardinality = 'Cmn';
FordVltgIfLoVltgThdMid.CustomerVisible = false;
FordVltgIfLoVltgThdMid.Online = false;
FordVltgIfLoVltgThdMid.Impact = 'H';
FordVltgIfLoVltgThdMid.TuningOwner = 'EPDT';
FordVltgIfLoVltgThdMid.GraphLink = {''};
FordVltgIfLoVltgThdMid.Monotony = 'None';
FordVltgIfLoVltgThdMid.MaxGrad = Inf;
FordVltgIfLoVltgThdMid.PortName = 'FordVltgIfLoVltgThdMid';


FordVltgIfLoVltgThdMidToLoTiMax = DataDict.Calibration;
FordVltgIfLoVltgThdMidToLoTiMax.LongName = 'Low Voltage  Threshold Middle To Low Maximum Time';
FordVltgIfLoVltgThdMidToLoTiMax.Description = [...
  'Indicates the Low Voltage  Threshold Middle To Low Maximum Time'];
FordVltgIfLoVltgThdMidToLoTiMax.DocUnits = 'MilliSec';
FordVltgIfLoVltgThdMidToLoTiMax.EngDT = dt.u32;
FordVltgIfLoVltgThdMidToLoTiMax.EngVal = 1000;
FordVltgIfLoVltgThdMidToLoTiMax.EngMin = 0;
FordVltgIfLoVltgThdMidToLoTiMax.EngMax = 10000;
FordVltgIfLoVltgThdMidToLoTiMax.Cardinality = 'Cmn';
FordVltgIfLoVltgThdMidToLoTiMax.CustomerVisible = false;
FordVltgIfLoVltgThdMidToLoTiMax.Online = false;
FordVltgIfLoVltgThdMidToLoTiMax.Impact = 'H';
FordVltgIfLoVltgThdMidToLoTiMax.TuningOwner = 'EPDT';
FordVltgIfLoVltgThdMidToLoTiMax.GraphLink = {''};
FordVltgIfLoVltgThdMidToLoTiMax.Monotony = 'None';
FordVltgIfLoVltgThdMidToLoTiMax.MaxGrad = Inf;
FordVltgIfLoVltgThdMidToLoTiMax.PortName = 'FordVltgIfLoVltgThdMidToLoTiMax';


FordVltgIfLoVltgTqScaDwnRate = DataDict.Calibration;
FordVltgIfLoVltgTqScaDwnRate.LongName = 'Low Voltage Torque Scale Down Rate';
FordVltgIfLoVltgTqScaDwnRate.Description = [...
  'Indicates the Low Voltage Torque Scale Down Rate'];
FordVltgIfLoVltgTqScaDwnRate.DocUnits = 'UlsPerSec';
FordVltgIfLoVltgTqScaDwnRate.EngDT = dt.float32;
FordVltgIfLoVltgTqScaDwnRate.EngVal = 50;
FordVltgIfLoVltgTqScaDwnRate.EngMin = 0;
FordVltgIfLoVltgTqScaDwnRate.EngMax = 1000;
FordVltgIfLoVltgTqScaDwnRate.Cardinality = 'Cmn';
FordVltgIfLoVltgTqScaDwnRate.CustomerVisible = false;
FordVltgIfLoVltgTqScaDwnRate.Online = false;
FordVltgIfLoVltgTqScaDwnRate.Impact = 'H';
FordVltgIfLoVltgTqScaDwnRate.TuningOwner = 'EPDT';
FordVltgIfLoVltgTqScaDwnRate.GraphLink = {''};
FordVltgIfLoVltgTqScaDwnRate.Monotony = 'None';
FordVltgIfLoVltgTqScaDwnRate.MaxGrad = Inf;
FordVltgIfLoVltgTqScaDwnRate.PortName = 'FordVltgIfLoVltgTqScaDwnRate';


FordVltgIfLoVltgTqScaUpRate = DataDict.Calibration;
FordVltgIfLoVltgTqScaUpRate.LongName = 'Low Voltage Torque Scale Up Rate';
FordVltgIfLoVltgTqScaUpRate.Description = [...
  'Indicates the Low Voltage Torque Scale Up Rate'];
FordVltgIfLoVltgTqScaUpRate.DocUnits = 'UlsPerSec';
FordVltgIfLoVltgTqScaUpRate.EngDT = dt.float32;
FordVltgIfLoVltgTqScaUpRate.EngVal = 50;
FordVltgIfLoVltgTqScaUpRate.EngMin = 0;
FordVltgIfLoVltgTqScaUpRate.EngMax = 1000;
FordVltgIfLoVltgTqScaUpRate.Cardinality = 'Cmn';
FordVltgIfLoVltgTqScaUpRate.CustomerVisible = false;
FordVltgIfLoVltgTqScaUpRate.Online = false;
FordVltgIfLoVltgTqScaUpRate.Impact = 'H';
FordVltgIfLoVltgTqScaUpRate.TuningOwner = 'EPDT';
FordVltgIfLoVltgTqScaUpRate.GraphLink = {''};
FordVltgIfLoVltgTqScaUpRate.Monotony = 'None';
FordVltgIfLoVltgTqScaUpRate.MaxGrad = Inf;
FordVltgIfLoVltgTqScaUpRate.PortName = 'FordVltgIfLoVltgTqScaUpRate';


FordVltgIfLoVltgTqScagFac = DataDict.Calibration;
FordVltgIfLoVltgTqScagFac.LongName = 'Low Voltage Torque Scaling Factor';
FordVltgIfLoVltgTqScagFac.Description = [...
  'Indicates the Low Voltage Torque Scaling Factor'];
FordVltgIfLoVltgTqScagFac.DocUnits = 'Uls';
FordVltgIfLoVltgTqScagFac.EngDT = dt.float32;
FordVltgIfLoVltgTqScagFac.EngVal = 0.25;
FordVltgIfLoVltgTqScagFac.EngMin = 0;
FordVltgIfLoVltgTqScagFac.EngMax = 1;
FordVltgIfLoVltgTqScagFac.Cardinality = 'Cmn';
FordVltgIfLoVltgTqScagFac.CustomerVisible = false;
FordVltgIfLoVltgTqScagFac.Online = false;
FordVltgIfLoVltgTqScagFac.Impact = 'H';
FordVltgIfLoVltgTqScagFac.TuningOwner = 'EPDT';
FordVltgIfLoVltgTqScagFac.GraphLink = {''};
FordVltgIfLoVltgTqScagFac.Monotony = 'None';
FordVltgIfLoVltgTqScagFac.MaxGrad = Inf;
FordVltgIfLoVltgTqScagFac.PortName = 'FordVltgIfLoVltgTqScagFac';


FordVltgIfTrfcJamAsscTqMin = DataDict.Calibration;
FordVltgIfTrfcJamAsscTqMin.LongName = 'Traffic Jam  Assistance Torque Minimum';
FordVltgIfTrfcJamAsscTqMin.Description = [...
  'Indicates the Traffic Jam  Assistance Torque Minimum'];
FordVltgIfTrfcJamAsscTqMin.DocUnits = 'Perc';
FordVltgIfTrfcJamAsscTqMin.EngDT = dt.float32;
FordVltgIfTrfcJamAsscTqMin.EngVal = 90;
FordVltgIfTrfcJamAsscTqMin.EngMin = 0;
FordVltgIfTrfcJamAsscTqMin.EngMax = 100;
FordVltgIfTrfcJamAsscTqMin.Cardinality = 'Cmn';
FordVltgIfTrfcJamAsscTqMin.CustomerVisible = false;
FordVltgIfTrfcJamAsscTqMin.Online = false;
FordVltgIfTrfcJamAsscTqMin.Impact = 'H';
FordVltgIfTrfcJamAsscTqMin.TuningOwner = 'EPDT';
FordVltgIfTrfcJamAsscTqMin.GraphLink = {''};
FordVltgIfTrfcJamAsscTqMin.Monotony = 'None';
FordVltgIfTrfcJamAsscTqMin.MaxGrad = Inf;
FordVltgIfTrfcJamAsscTqMin.PortName = 'FordVltgIfTrfcJamAsscTqMin';


FordVltgIfTrlrBackupAssiTqMin = DataDict.Calibration;
FordVltgIfTrlrBackupAssiTqMin.LongName = 'Trailer Backup Assist Torque Minimum';
FordVltgIfTrlrBackupAssiTqMin.Description = [...
  'Indicates the Minimum value of TBA Assistance Torque '];
FordVltgIfTrlrBackupAssiTqMin.DocUnits = 'Perc';
FordVltgIfTrlrBackupAssiTqMin.EngDT = dt.float32;
FordVltgIfTrlrBackupAssiTqMin.EngVal = 90;
FordVltgIfTrlrBackupAssiTqMin.EngMin = 0;
FordVltgIfTrlrBackupAssiTqMin.EngMax = 100;
FordVltgIfTrlrBackupAssiTqMin.Cardinality = 'Cmn';
FordVltgIfTrlrBackupAssiTqMin.CustomerVisible = false;
FordVltgIfTrlrBackupAssiTqMin.Online = false;
FordVltgIfTrlrBackupAssiTqMin.Impact = 'H';
FordVltgIfTrlrBackupAssiTqMin.TuningOwner = 'EPDT';
FordVltgIfTrlrBackupAssiTqMin.GraphLink = {''};
FordVltgIfTrlrBackupAssiTqMin.Monotony = 'None';
FordVltgIfTrlrBackupAssiTqMin.MaxGrad = Inf;
FordVltgIfTrlrBackupAssiTqMin.PortName = 'FordVltgIfTrlrBackupAssiTqMin';


FordVltgIfVehBattCircR = DataDict.Calibration;
FordVltgIfVehBattCircR.LongName = 'Vehicle Battery Circuit Resistance';
FordVltgIfVehBattCircR.Description = [...
  'Indicates the Vehicle Battery Circuit Resistance'];
FordVltgIfVehBattCircR.DocUnits = 'Ohm';
FordVltgIfVehBattCircR.EngDT = dt.float32;
FordVltgIfVehBattCircR.EngVal = 0.1;
FordVltgIfVehBattCircR.EngMin = 0;
FordVltgIfVehBattCircR.EngMax = 1;
FordVltgIfVehBattCircR.Cardinality = 'Cmn';
FordVltgIfVehBattCircR.CustomerVisible = false;
FordVltgIfVehBattCircR.Online = false;
FordVltgIfVehBattCircR.Impact = 'H';
FordVltgIfVehBattCircR.TuningOwner = 'EPDT';
FordVltgIfVehBattCircR.GraphLink = {''};
FordVltgIfVehBattCircR.Monotony = 'None';
FordVltgIfVehBattCircR.MaxGrad = Inf;
FordVltgIfVehBattCircR.PortName = 'FordVltgIfVehBattCircR';



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
FeatThdStsRefTi = DataDict.PIM;
FeatThdStsRefTi.LongName = 'Feature Threshold Status Reference Time';
FeatThdStsRefTi.Description = [...
  'For Software to keep track of Feature Threshold Status Reference Time'];
FeatThdStsRefTi.DocUnits = 'Cnt';
FeatThdStsRefTi.EngDT = dt.u32;
FeatThdStsRefTi.EngMin = 0;
FeatThdStsRefTi.EngMax = 4294967295;
FeatThdStsRefTi.InitRowCol = [1  1];


HiToLoChk = DataDict.PIM;
HiToLoChk.LongName = 'High To Low Check';
HiToLoChk.Description = [...
  'For Software to keep track of High To Low Check'];
HiToLoChk.DocUnits = 'Cnt';
HiToLoChk.EngDT = dt.u08;
HiToLoChk.EngMin = 0;
HiToLoChk.EngMax = 255;
HiToLoChk.InitRowCol = [1  1];


HiToMidChk = DataDict.PIM;
HiToMidChk.LongName = 'High To Middle Check';
HiToMidChk.Description = [...
  'For Software to keep track of High To Middle Check'];
HiToMidChk.DocUnits = 'Cnt';
HiToMidChk.EngDT = dt.u08;
HiToMidChk.EngMin = 0;
HiToMidChk.EngMax = 255;
HiToMidChk.InitRowCol = [1  1];


HiVltgInhbRefTi = DataDict.PIM;
HiVltgInhbRefTi.LongName = 'High Voltage  Inhibit Reference Time';
HiVltgInhbRefTi.Description = [...
  'For Software to keep track of High Voltage  Inhibit Reference Time'];
HiVltgInhbRefTi.DocUnits = 'Cnt';
HiVltgInhbRefTi.EngDT = dt.u32;
HiVltgInhbRefTi.EngMin = 0;
HiVltgInhbRefTi.EngMax = 4294967295;
HiVltgInhbRefTi.InitRowCol = [1  1];


HiVltgNoAssiRcvrRefTi = DataDict.PIM;
HiVltgNoAssiRcvrRefTi.LongName = 'High Voltage  No Assist Recover Reference Time';
HiVltgNoAssiRcvrRefTi.Description = [...
  'For Software to keep track of High Voltage No Assist Recover Reference' ...
  ' Time'];
HiVltgNoAssiRcvrRefTi.DocUnits = 'Cnt';
HiVltgNoAssiRcvrRefTi.EngDT = dt.u32;
HiVltgNoAssiRcvrRefTi.EngMin = 0;
HiVltgNoAssiRcvrRefTi.EngMax = 4294967295;
HiVltgNoAssiRcvrRefTi.InitRowCol = [1  1];


HiVltgRcvrRefTi = DataDict.PIM;
HiVltgRcvrRefTi.LongName = 'High Voltage  Recover Reference Time';
HiVltgRcvrRefTi.Description = [...
  'For Software to keep track of High Voltage  Recover Reference Time'];
HiVltgRcvrRefTi.DocUnits = 'Cnt';
HiVltgRcvrRefTi.EngDT = dt.u32;
HiVltgRcvrRefTi.EngMin = 0;
HiVltgRcvrRefTi.EngMax = 4294967295;
HiVltgRcvrRefTi.InitRowCol = [1  1];


HiVltgRcvrTiMaxRefTi = DataDict.PIM;
HiVltgRcvrTiMaxRefTi.LongName = 'High Voltage  Recover Time Maximum Reference Time';
HiVltgRcvrTiMaxRefTi.Description = [...
  'For Software to keep track of High Voltage  Recover Time Maximum Refer' ...
  'ence Time'];
HiVltgRcvrTiMaxRefTi.DocUnits = 'Cnt';
HiVltgRcvrTiMaxRefTi.EngDT = dt.u32;
HiVltgRcvrTiMaxRefTi.EngMin = 0;
HiVltgRcvrTiMaxRefTi.EngMax = 4294967295;
HiVltgRcvrTiMaxRefTi.InitRowCol = [1  1];


InhbBattVltgDiagcRefTi = DataDict.PIM;
InhbBattVltgDiagcRefTi.LongName = 'Inhibit Battery Voltage  Diagnostic Reference Time';
InhbBattVltgDiagcRefTi.Description = [...
  'For Software to keep track of Inhibit Battery Voltage  Diagnostic Refe' ...
  'rence Time'];
InhbBattVltgDiagcRefTi.DocUnits = 'Cnt';
InhbBattVltgDiagcRefTi.EngDT = dt.u32;
InhbBattVltgDiagcRefTi.EngMin = 0;
InhbBattVltgDiagcRefTi.EngMax = 4294967295;
InhbBattVltgDiagcRefTi.InitRowCol = [1  1];


LoToHiChk = DataDict.PIM;
LoToHiChk.LongName = 'Low To High Check';
LoToHiChk.Description = [...
  'For Software to keep track of Low To High Check'];
LoToHiChk.DocUnits = 'Cnt';
LoToHiChk.EngDT = dt.u08;
LoToHiChk.EngMin = 0;
LoToHiChk.EngMax = 255;
LoToHiChk.InitRowCol = [1  1];


LoToMidChk = DataDict.PIM;
LoToMidChk.LongName = 'Low To Middle Check';
LoToMidChk.Description = [...
  'For Software to keep track of Low To Middle Check'];
LoToMidChk.DocUnits = 'Cnt';
LoToMidChk.EngDT = dt.u08;
LoToMidChk.EngMin = 0;
LoToMidChk.EngMax = 255;
LoToMidChk.InitRowCol = [1  1];


LoVltgInhbRefTi1 = DataDict.PIM;
LoVltgInhbRefTi1.LongName = 'Low Voltage  Inhibit Reference Time 1';
LoVltgInhbRefTi1.Description = [...
  'For Software to keep track of Low Voltage  Inhibit Reference Time 1'];
LoVltgInhbRefTi1.DocUnits = 'Cnt';
LoVltgInhbRefTi1.EngDT = dt.u32;
LoVltgInhbRefTi1.EngMin = 0;
LoVltgInhbRefTi1.EngMax = 4294967295;
LoVltgInhbRefTi1.InitRowCol = [1  1];


LoVltgInhbRefTi2 = DataDict.PIM;
LoVltgInhbRefTi2.LongName = 'Low Voltage  Inhibit Reference Time 2';
LoVltgInhbRefTi2.Description = [...
  'For Software to keep track of Low Voltage  Inhibit Reference Time 2'];
LoVltgInhbRefTi2.DocUnits = 'Cnt';
LoVltgInhbRefTi2.EngDT = dt.u32;
LoVltgInhbRefTi2.EngMin = 0;
LoVltgInhbRefTi2.EngMax = 4294967295;
LoVltgInhbRefTi2.InitRowCol = [1  1];


LoVltgInhbRefTi3 = DataDict.PIM;
LoVltgInhbRefTi3.LongName = 'Low Voltage  Inhibit Reference Time 3';
LoVltgInhbRefTi3.Description = [...
  'For Software to keep track of Low Voltage  Inhibit Reference Time 3'];
LoVltgInhbRefTi3.DocUnits = 'Cnt';
LoVltgInhbRefTi3.EngDT = dt.u32;
LoVltgInhbRefTi3.EngMin = 0;
LoVltgInhbRefTi3.EngMax = 4294967295;
LoVltgInhbRefTi3.InitRowCol = [1  1];


LoVltgNoAssiRcvrRefTi = DataDict.PIM;
LoVltgNoAssiRcvrRefTi.LongName = 'Low Voltage  No Assist Recover Reference Time';
LoVltgNoAssiRcvrRefTi.Description = [...
  'For Software to keep track of Low Voltage No Assist Recover Reference ' ...
  'Time'];
LoVltgNoAssiRcvrRefTi.DocUnits = 'Cnt';
LoVltgNoAssiRcvrRefTi.EngDT = dt.u32;
LoVltgNoAssiRcvrRefTi.EngMin = 0;
LoVltgNoAssiRcvrRefTi.EngMax = 4294967295;
LoVltgNoAssiRcvrRefTi.InitRowCol = [1  1];


LoVltgRcvrRefTi = DataDict.PIM;
LoVltgRcvrRefTi.LongName = 'Low Voltage  Recover Reference Time';
LoVltgRcvrRefTi.Description = [...
  'For Software to keep track of Low Voltage  Recover Reference Time'];
LoVltgRcvrRefTi.DocUnits = 'Cnt';
LoVltgRcvrRefTi.EngDT = dt.u32;
LoVltgRcvrRefTi.EngMin = 0;
LoVltgRcvrRefTi.EngMax = 4294967295;
LoVltgRcvrRefTi.InitRowCol = [1  1];


LoVltgRcvrTiMaxRefTi = DataDict.PIM;
LoVltgRcvrTiMaxRefTi.LongName = 'Low Voltage  Recover Time Maximum Reference Time';
LoVltgRcvrTiMaxRefTi.Description = [...
  'For Software to keep track of Low Voltage  Recover Time Maximum Refere' ...
  'nce Time'];
LoVltgRcvrTiMaxRefTi.DocUnits = 'Cnt';
LoVltgRcvrTiMaxRefTi.EngDT = dt.u32;
LoVltgRcvrTiMaxRefTi.EngMin = 0;
LoVltgRcvrTiMaxRefTi.EngMax = 4294967295;
LoVltgRcvrTiMaxRefTi.InitRowCol = [1  1];


LoVltgThdMidToLoRefTi = DataDict.PIM;
LoVltgThdMidToLoRefTi.LongName = 'Low Voltage  Threshold Middle To Low Reference Time';
LoVltgThdMidToLoRefTi.Description = [...
  'For Software to keep track of Low Voltage  Threshold Middle To Low Ref' ...
  'erence Time'];
LoVltgThdMidToLoRefTi.DocUnits = 'Cnt';
LoVltgThdMidToLoRefTi.EngDT = dt.u32;
LoVltgThdMidToLoRefTi.EngMin = 0;
LoVltgThdMidToLoRefTi.EngMax = 4294967295;
LoVltgThdMidToLoRefTi.InitRowCol = [1  1];


LoVltgThdMidToLoRefTmr = DataDict.PIM;
LoVltgThdMidToLoRefTmr.LongName = 'Low Voltage  Threshold Middle To Low Reference Timer';
LoVltgThdMidToLoRefTmr.Description = [...
  'For Software to keep track of Low Voltage  Threshold Middle To Low Ref' ...
  'erence Timer'];
LoVltgThdMidToLoRefTmr.DocUnits = 'Cnt';
LoVltgThdMidToLoRefTmr.EngDT = dt.u32;
LoVltgThdMidToLoRefTmr.EngMin = 0;
LoVltgThdMidToLoRefTmr.EngMax = 4294967295;
LoVltgThdMidToLoRefTmr.InitRowCol = [1  1];


MaxEpsBattCurrPrev = DataDict.PIM;
MaxEpsBattCurrPrev.LongName = 'Maximum EPS Battery Current Previous';
MaxEpsBattCurrPrev.Description = [...
  'For Software to keep track of Maximum EPS Battery Current Previous'];
MaxEpsBattCurrPrev.DocUnits = 'Ampr';
MaxEpsBattCurrPrev.EngDT = dt.float32;
MaxEpsBattCurrPrev.EngMin = -300;
MaxEpsBattCurrPrev.EngMax = 300;
MaxEpsBattCurrPrev.InitRowCol = [1  1];


MidToHiChk = DataDict.PIM;
MidToHiChk.LongName = 'Middle To High Check';
MidToHiChk.Description = [...
  'For Software to keep track of Middle To High Check'];
MidToHiChk.DocUnits = 'Cnt';
MidToHiChk.EngDT = dt.u08;
MidToHiChk.EngMin = 0;
MidToHiChk.EngMax = 255;
MidToHiChk.InitRowCol = [1  1];


MidToLoChk = DataDict.PIM;
MidToLoChk.LongName = 'Middle To Low Check';
MidToLoChk.Description = [...
  'For Software to keep track of Middle To Low Check'];
MidToLoChk.DocUnits = 'Cnt';
MidToLoChk.EngDT = dt.u08;
MidToLoChk.EngMin = 0;
MidToLoChk.EngMax = 255;
MidToLoChk.InitRowCol = [1  1];


MinBattVltgPrev = DataDict.PIM;
MinBattVltgPrev.LongName = 'Minimum Battery Voltage  Previous';
MinBattVltgPrev.Description = [...
  'For Software to keep track of Minimum Battery Voltage  Previous'];
MinBattVltgPrev.DocUnits = 'Volt';
MinBattVltgPrev.EngDT = dt.float32;
MinBattVltgPrev.EngMin = 0;
MinBattVltgPrev.EngMax = 40;
MinBattVltgPrev.InitRowCol = [1  1];


PrevVltgOperRamp = DataDict.PIM;
PrevVltgOperRamp.LongName = 'Previous Voltage  Operation Ramp';
PrevVltgOperRamp.Description = [...
  'For Software to keep track of Previous Voltage  Operation Ramp'];
PrevVltgOperRamp.DocUnits = 'UlsPerSec';
PrevVltgOperRamp.EngDT = dt.float32;
PrevVltgOperRamp.EngMin = 0.1;
PrevVltgOperRamp.EngMax = 500;
PrevVltgOperRamp.InitRowCol = [1  1];


PrevVltgOperScar = DataDict.PIM;
PrevVltgOperScar.LongName = 'Previous Voltage  Operation Scaler';
PrevVltgOperScar.Description = [...
  'For Software to keep track of Previous Voltage  Operation Scaler'];
PrevVltgOperScar.DocUnits = 'Uls';
PrevVltgOperScar.EngDT = dt.float32;
PrevVltgOperScar.EngMin = 0;
PrevVltgOperScar.EngMax = 1;
PrevVltgOperScar.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


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


EPSCURRMAX_AMPR_F32 = DataDict.Constant;
EPSCURRMAX_AMPR_F32.LongName = 'Eps Current Maximum';
EPSCURRMAX_AMPR_F32.Description = [...
  'Indicates the Maximum value of EPS Module Current'];
EPSCURRMAX_AMPR_F32.DocUnits = 'Ampr';
EPSCURRMAX_AMPR_F32.EngDT = dt.float32;
EPSCURRMAX_AMPR_F32.EngVal = 150;
EPSCURRMAX_AMPR_F32.Define = 'Local';


EPSCURRMIN_AMPR_F32 = DataDict.Constant;
EPSCURRMIN_AMPR_F32.LongName = 'Eps Current Minimum';
EPSCURRMIN_AMPR_F32.Description = [...
  'Indicates the Minimum value of EPS Module Current'];
EPSCURRMIN_AMPR_F32.DocUnits = 'Ampr';
EPSCURRMIN_AMPR_F32.EngDT = dt.float32;
EPSCURRMIN_AMPR_F32.EngVal = -75;
EPSCURRMIN_AMPR_F32.Define = 'Local';


EPSVLTGMAX_VOLT_F32 = DataDict.Constant;
EPSVLTGMAX_VOLT_F32.LongName = 'Eps Voltage Maximum';
EPSVLTGMAX_VOLT_F32.Description = [...
  'Indicates the Maximum value of EPS Module Voltage'];
EPSVLTGMAX_VOLT_F32.DocUnits = 'Volt';
EPSVLTGMAX_VOLT_F32.EngDT = dt.float32;
EPSVLTGMAX_VOLT_F32.EngVal = 19;
EPSVLTGMAX_VOLT_F32.Define = 'Local';


EPSVLTGMIN_VOLT_F32 = DataDict.Constant;
EPSVLTGMIN_VOLT_F32.LongName = 'Eps Voltage Minimum';
EPSVLTGMIN_VOLT_F32.Description = [...
  'Indicates the Minimum value of EPS Module Voltage'];
EPSVLTGMIN_VOLT_F32.DocUnits = 'Volt';
EPSVLTGMIN_VOLT_F32.EngDT = dt.float32;
EPSVLTGMIN_VOLT_F32.EngVal = 6;
EPSVLTGMIN_VOLT_F32.Define = 'Local';


FORDMAXBATTCURRMAX_AMPR_F32 = DataDict.Constant;
FORDMAXBATTCURRMAX_AMPR_F32.LongName = 'Ford Maximum Battery Current Maximum';
FORDMAXBATTCURRMAX_AMPR_F32.Description = [...
  'Indicates the Maximum value of Ford Maximum Battery Current'];
FORDMAXBATTCURRMAX_AMPR_F32.DocUnits = 'Ampr';
FORDMAXBATTCURRMAX_AMPR_F32.EngDT = dt.float32;
FORDMAXBATTCURRMAX_AMPR_F32.EngVal = 300;
FORDMAXBATTCURRMAX_AMPR_F32.Define = 'Local';


FORDMAXBATTCURRMIN_AMPR_F32 = DataDict.Constant;
FORDMAXBATTCURRMIN_AMPR_F32.LongName = 'Ford Maximum Battery Current Minimum';
FORDMAXBATTCURRMIN_AMPR_F32.Description = [...
  'Indicates the Minimum value of Ford Maximum Battery Current'];
FORDMAXBATTCURRMIN_AMPR_F32.DocUnits = 'Ampr';
FORDMAXBATTCURRMIN_AMPR_F32.EngDT = dt.float32;
FORDMAXBATTCURRMIN_AMPR_F32.EngVal = -300;
FORDMAXBATTCURRMIN_AMPR_F32.Define = 'Local';


FORDMINBATTVLTGMAX_VOLT_F32 = DataDict.Constant;
FORDMINBATTVLTGMAX_VOLT_F32.LongName = 'Ford Minimum Battery Voltage Maximum';
FORDMINBATTVLTGMAX_VOLT_F32.Description = [...
  'Indicates the Maximum value of Ford Minimum Battery Voltage'];
FORDMINBATTVLTGMAX_VOLT_F32.DocUnits = 'Volt';
FORDMINBATTVLTGMAX_VOLT_F32.EngDT = dt.float32;
FORDMINBATTVLTGMAX_VOLT_F32.EngVal = 40;
FORDMINBATTVLTGMAX_VOLT_F32.Define = 'Local';


FORDMINBATTVLTGMIN_VOLT_F32 = DataDict.Constant;
FORDMINBATTVLTGMIN_VOLT_F32.LongName = 'Ford Minimum Battery Voltage Minimum';
FORDMINBATTVLTGMIN_VOLT_F32.Description = [...
  'Indicates the Minimum value of Ford Minimum Battery Voltage'];
FORDMINBATTVLTGMIN_VOLT_F32.DocUnits = 'Volt';
FORDMINBATTVLTGMIN_VOLT_F32.EngDT = dt.float32;
FORDMINBATTVLTGMIN_VOLT_F32.EngVal = 0;
FORDMINBATTVLTGMIN_VOLT_F32.Define = 'Local';


FORDVLTGOPERRAMPMAX_ULSPERSEC_F32 = DataDict.Constant;
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.LongName = 'Ford Voltage Operation Ramp Maximum';
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.Description = [...
  'Indicates the Maximum value of Ford Voltage  Operation Ramp'];
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.EngDT = dt.float32;
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.EngVal = 500;
FORDVLTGOPERRAMPMAX_ULSPERSEC_F32.Define = 'Local';


FORDVLTGOPERRAMPMIN_ULSPERSEC_F32 = DataDict.Constant;
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.LongName = 'Ford Voltage Operation Ramp Minimum';
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.Description = [...
  'Indicates the Manimum value of Ford Voltage  Operation Ramp'];
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.EngDT = dt.float32;
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.EngVal = 0.1;
FORDVLTGOPERRAMPMIN_ULSPERSEC_F32.Define = 'Local';


FORDVLTGOPERSCARMAX_ULS_F32 = DataDict.Constant;
FORDVLTGOPERSCARMAX_ULS_F32.LongName = 'Ford Voltage  Operation Scaler Maximum';
FORDVLTGOPERSCARMAX_ULS_F32.Description = [...
  'Indicates the Maximum value of Ford Voltage  Operation Scaler'];
FORDVLTGOPERSCARMAX_ULS_F32.DocUnits = 'Uls';
FORDVLTGOPERSCARMAX_ULS_F32.EngDT = dt.float32;
FORDVLTGOPERSCARMAX_ULS_F32.EngVal = 1;
FORDVLTGOPERSCARMAX_ULS_F32.Define = 'Local';


FORDVLTGOPERSCARMIN_ULS_F32 = DataDict.Constant;
FORDVLTGOPERSCARMIN_ULS_F32.LongName = 'Ford Voltage  Operation Scaler Manimum';
FORDVLTGOPERSCARMIN_ULS_F32.Description = [...
  'Indicates the Manimum value of Ford Voltage  Operation Scaler'];
FORDVLTGOPERSCARMIN_ULS_F32.DocUnits = 'Uls';
FORDVLTGOPERSCARMIN_ULS_F32.EngDT = dt.float32;
FORDVLTGOPERSCARMIN_ULS_F32.EngVal = 0;
FORDVLTGOPERSCARMIN_ULS_F32.Define = 'Local';


LOVEHSPD_KPH_F32 = DataDict.Constant;
LOVEHSPD_KPH_F32.LongName = 'Low Vehicle Speed';
LOVEHSPD_KPH_F32.Description = [...
  'Indicates the Minimum value of Vehicle Speed'];
LOVEHSPD_KPH_F32.DocUnits = 'Kph';
LOVEHSPD_KPH_F32.EngDT = dt.float32;
LOVEHSPD_KPH_F32.EngVal = 10;
LOVEHSPD_KPH_F32.Define = 'Local';


TRANEND_CNT_U08 = DataDict.Constant;
TRANEND_CNT_U08.LongName = 'Transition End';
TRANEND_CNT_U08.Description = 'Indicates the Transition End';
TRANEND_CNT_U08.DocUnits = 'Cnt';
TRANEND_CNT_U08.EngDT = dt.u08;
TRANEND_CNT_U08.EngVal = 2;
TRANEND_CNT_U08.Define = 'Local';


TRANINIT_CNT_U08 = DataDict.Constant;
TRANINIT_CNT_U08.LongName = 'Transition Init';
TRANINIT_CNT_U08.Description = 'Indicates the Transition Init';
TRANINIT_CNT_U08.DocUnits = 'Cnt';
TRANINIT_CNT_U08.EngDT = dt.u08;
TRANINIT_CNT_U08.EngVal = 0;
TRANINIT_CNT_U08.Define = 'Local';


TRANSTRT_CNT_U08 = DataDict.Constant;
TRANSTRT_CNT_U08.LongName = 'Transition Start';
TRANSTRT_CNT_U08.Description = 'Indicates the Transition Start';
TRANSTRT_CNT_U08.DocUnits = 'Cnt';
TRANSTRT_CNT_U08.EngDT = dt.u08;
TRANSTRT_CNT_U08.EngVal = 1;
TRANSTRT_CNT_U08.Define = 'Local';


VLTGOPERSCALERMAX_ULS_F32 = DataDict.Constant;
VLTGOPERSCALERMAX_ULS_F32.LongName = 'Voltage Operation Scale Maximum';
VLTGOPERSCALERMAX_ULS_F32.Description = [...
  'Indicates the Voltage Operation Scale Maximum'];
VLTGOPERSCALERMAX_ULS_F32.DocUnits = 'Uls';
VLTGOPERSCALERMAX_ULS_F32.EngDT = dt.float32;
VLTGOPERSCALERMAX_ULS_F32.EngVal = 1;
VLTGOPERSCALERMAX_ULS_F32.Define = 'Local';


VLTGOPERSCALERMIN_ULS_F32 = DataDict.Constant;
VLTGOPERSCALERMIN_ULS_F32.LongName = 'Voltage Operation Scale Minimum';
VLTGOPERSCALERMIN_ULS_F32.Description = [...
  'Indicates the Voltage Operation Scale Minimum'];
VLTGOPERSCALERMIN_ULS_F32.DocUnits = 'Uls';
VLTGOPERSCALERMIN_ULS_F32.EngDT = dt.float32;
VLTGOPERSCALERMIN_ULS_F32.EngVal = 0;
VLTGOPERSCALERMIN_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HiVltgNoAssi = DataDict.NTC;
HiVltgNoAssi.NtcNr = NtcNr1.NTCNR_0X0E7;
HiVltgNoAssi.NtcTyp = 'None';
HiVltgNoAssi.LongName = 'High Voltage No Assist';
HiVltgNoAssi.Description = '';
HiVltgNoAssi.NtcStInfo = DataDict.NtcStInfoBitPacked;
HiVltgNoAssi.NtcStInfo.Bit0Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit1Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit2Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit3Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit4Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit5Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit6Descr = 'Unused';
HiVltgNoAssi.NtcStInfo.Bit7Descr = 'Unused';
HiVltgNoAssi.NtcStsLockdThisIgnCyc = 0;


HiVltgOper = DataDict.NTC;
HiVltgOper.NtcNr = NtcNr1.NTCNR_0X0E6;
HiVltgOper.NtcTyp = 'None';
HiVltgOper.LongName = 'High Voltage Operation';
HiVltgOper.Description = '';
HiVltgOper.NtcStInfo = DataDict.NtcStInfoBitPacked;
HiVltgOper.NtcStInfo.Bit0Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit1Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit2Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit3Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit4Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit5Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit6Descr = 'Unused';
HiVltgOper.NtcStInfo.Bit7Descr = 'Unused';
HiVltgOper.NtcStsLockdThisIgnCyc = 0;


LoVltgHiCurr = DataDict.NTC;
LoVltgHiCurr.NtcNr = NtcNr1.NTCNR_0X0E3;
LoVltgHiCurr.NtcTyp = 'None';
LoVltgHiCurr.LongName = 'Low Voltage High Current';
LoVltgHiCurr.Description = '';
LoVltgHiCurr.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoVltgHiCurr.NtcStInfo.Bit0Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit1Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit2Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit3Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit4Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit5Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit6Descr = 'Unused';
LoVltgHiCurr.NtcStInfo.Bit7Descr = 'Unused';
LoVltgHiCurr.NtcStsLockdThisIgnCyc = 0;


LoVltgMonr = DataDict.NTC;
LoVltgMonr.NtcNr = NtcNr1.NTCNR_0X0E2;
LoVltgMonr.NtcTyp = 'None';
LoVltgMonr.LongName = 'Low Voltage Monitor';
LoVltgMonr.Description = '';
LoVltgMonr.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoVltgMonr.NtcStInfo.Bit0Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit1Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit2Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit3Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit4Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit5Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit6Descr = 'Unused';
LoVltgMonr.NtcStInfo.Bit7Descr = 'Unused';
LoVltgMonr.NtcStsLockdThisIgnCyc = 0;


LoVltgNoAssi = DataDict.NTC;
LoVltgNoAssi.NtcNr = NtcNr1.NTCNR_0X0E5;
LoVltgNoAssi.NtcTyp = 'None';
LoVltgNoAssi.LongName = 'Low Voltage No Assist';
LoVltgNoAssi.Description = '';
LoVltgNoAssi.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoVltgNoAssi.NtcStInfo.Bit0Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit1Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit2Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit3Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit4Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit5Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit6Descr = 'Unused';
LoVltgNoAssi.NtcStInfo.Bit7Descr = 'Unused';
LoVltgNoAssi.NtcStsLockdThisIgnCyc = 0;


LoVltgTqScag = DataDict.NTC;
LoVltgTqScag.NtcNr = NtcNr1.NTCNR_0X0E4;
LoVltgTqScag.NtcTyp = 'None';
LoVltgTqScag.LongName = 'Low Voltage Torque Scaling';
LoVltgTqScag.Description = '';
LoVltgTqScag.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoVltgTqScag.NtcStInfo.Bit0Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit1Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit2Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit3Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit4Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit5Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit6Descr = 'Unused';
LoVltgTqScag.NtcStInfo.Bit7Descr = 'Unused';
LoVltgTqScag.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
