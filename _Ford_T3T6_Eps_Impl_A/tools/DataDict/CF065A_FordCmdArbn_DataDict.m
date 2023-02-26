%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 27-Mar-2018 15:31:59       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF065A = DataDict.FDD;
CF065A.Version = '1.0.X';
CF065A.LongName = 'Ford Command Arbitration';
CF065A.ShoName  = 'FordCmdArbn';
CF065A.DesignASIL = 'D';
CF065A.Description = [...
  'The Ford Arbiter is a function that takes inputs from functions that p' ...
  'rovide torque overlaysand decides which of those functions may be acti' ...
  've and allowed provide a torque overlay'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordCmdArbnInit1 = DataDict.Runnable;
FordCmdArbnInit1.Context = 'Rte';
FordCmdArbnInit1.TimeStep = 0;
FordCmdArbnInit1.Description = 'Initialization Runnable';

FordCmdArbnPer1 = DataDict.Runnable;
FordCmdArbnPer1.Context = 'Rte';
FordCmdArbnPer1.TimeStep = 0.004;
FordCmdArbnPer1.Description = 'Periodic Runnable at 4 Millisec';

FordCmdArbnPer2 = DataDict.Runnable;
FordCmdArbnPer2.Context = 'Rte';
FordCmdArbnPer2.TimeStep = 0.004;
FordCmdArbnPer2.Description = 'Periodic Runnable at 4 Millisec';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetSigImcData_u08 = DataDict.Client;
GetSigImcData_u08.CallLocation = {'FordCmdArbnPer1'};
GetSigImcData_u08.Description = [...
  'Get data from Imc Arbitration for a signal of type uint8'];
GetSigImcData_u08.Return = DataDict.CSReturn;
GetSigImcData_u08.Return.Type = 'Standard';
GetSigImcData_u08.Return.Min = 0;
GetSigImcData_u08.Return.Max = 1;
GetSigImcData_u08.Return.TestTolerance = 0;
GetSigImcData_u08.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_u08.Arguments(1) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(1).Name = 'SigId';
GetSigImcData_u08.Arguments(1).EngDT = dt.u16;
GetSigImcData_u08.Arguments(1).EngMin = 0;
GetSigImcData_u08.Arguments(1).EngMax = 65535;
GetSigImcData_u08.Arguments(1).Units = 'Cnt';
GetSigImcData_u08.Arguments(1).Direction = 'In';
GetSigImcData_u08.Arguments(1).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_u08.Arguments(2) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(2).Name = 'Data';
GetSigImcData_u08.Arguments(2).EngDT = dt.u08;
GetSigImcData_u08.Arguments(2).EngMin = 0;
GetSigImcData_u08.Arguments(2).EngMax = 255;
GetSigImcData_u08.Arguments(2).TestTolerance = 0;
GetSigImcData_u08.Arguments(2).Units = 'Cnt';
GetSigImcData_u08.Arguments(2).Direction = 'Out';
GetSigImcData_u08.Arguments(2).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_u08.Arguments(3) = DataDict.CSArguments;
GetSigImcData_u08.Arguments(3).Name = 'Sts';
GetSigImcData_u08.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_u08.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_u08.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_u08.Arguments(3).TestTolerance = 1;
GetSigImcData_u08.Arguments(3).Units = 'Cnt';
GetSigImcData_u08.Arguments(3).Direction = 'Out';
GetSigImcData_u08.Arguments(3).InitRowCol = [1  1];
GetSigImcData_u08.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'This signal is useed to send infomation of all client server to FIH'];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordCmdArbnPer1','FordCmdArbnPer2'};
EcuId.ReadType = 'Rte';


FordActvNiblCtrlFeatSt = DataDict.IpSignal;
FordActvNiblCtrlFeatSt.LongName = 'Ford Active Nibble Control Feature State';
FordActvNiblCtrlFeatSt.Description = [...
  'Processed to provide the output AncArbiterCmd'];
FordActvNiblCtrlFeatSt.DocUnits = 'Cnt';
FordActvNiblCtrlFeatSt.EngDT = enum.FordFeatSt1;
FordActvNiblCtrlFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordActvNiblCtrlFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordActvNiblCtrlFeatSt.ReadType = 'Rte';


FordDrvrSteerRcmdnFeatSt = DataDict.IpSignal;
FordDrvrSteerRcmdnFeatSt.LongName = 'Ford Driver Steering Recomendation Feature State';
FordDrvrSteerRcmdnFeatSt.Description = [...
  'Processed to provide the output DsrArbiterCmd'];
FordDrvrSteerRcmdnFeatSt.DocUnits = 'Cnt';
FordDrvrSteerRcmdnFeatSt.EngDT = enum.FordFeatSt1;
FordDrvrSteerRcmdnFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordDrvrSteerRcmdnFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordDrvrSteerRcmdnFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordDrvrSteerRcmdnFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordDrvrSteerRcmdnFeatSt.ReadType = 'Rte';


FordEvasSteerAssiFeatSt = DataDict.IpSignal;
FordEvasSteerAssiFeatSt.LongName = 'Ford Evasive Steering Assist Feature State';
FordEvasSteerAssiFeatSt.Description = [...
  'Processed to provide the output EsaArbiterCmd'];
FordEvasSteerAssiFeatSt.DocUnits = 'Cnt';
FordEvasSteerAssiFeatSt.EngDT = enum.FordFeatSt1;
FordEvasSteerAssiFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordEvasSteerAssiFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordEvasSteerAssiFeatSt.ReadType = 'Rte';


FordExtAgCtrlFeatSt = DataDict.IpSignal;
FordExtAgCtrlFeatSt.LongName = 'Ford External Angle Control Feature State';
FordExtAgCtrlFeatSt.Description = [...
  'Processed to provide the output EacArbiterCmd'];
FordExtAgCtrlFeatSt.DocUnits = 'Cnt';
FordExtAgCtrlFeatSt.EngDT = enum.FordFeatSt1;
FordExtAgCtrlFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordExtAgCtrlFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordExtAgCtrlFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordExtAgCtrlFeatSt.ReadIn = {'FordCmdArbnPer2'};
FordExtAgCtrlFeatSt.ReadType = 'Rte';


FordLaneDprtrWarnFeatSt = DataDict.IpSignal;
FordLaneDprtrWarnFeatSt.LongName = 'Ford Lane Departure Warning Feature State';
FordLaneDprtrWarnFeatSt.Description = [...
  'Processed to provide the output LdwArbiterCmd'];
FordLaneDprtrWarnFeatSt.DocUnits = 'Cnt';
FordLaneDprtrWarnFeatSt.EngDT = enum.FordFeatSt1;
FordLaneDprtrWarnFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLaneDprtrWarnFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordLaneDprtrWarnFeatSt.ReadType = 'Rte';


FordLaneKeepAssiFeatSt = DataDict.IpSignal;
FordLaneKeepAssiFeatSt.LongName = 'Ford Lane Keeping Assist Feature State';
FordLaneKeepAssiFeatSt.Description = [...
  'Processed to provide the output LkaArbiterCmd'];
FordLaneKeepAssiFeatSt.DocUnits = 'Cnt';
FordLaneKeepAssiFeatSt.EngDT = enum.FordFeatSt1;
FordLaneKeepAssiFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLaneKeepAssiFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLaneKeepAssiFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLaneKeepAssiFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordLaneKeepAssiFeatSt.ReadType = 'Rte';


FordLatCtrlFeatSt = DataDict.IpSignal;
FordLatCtrlFeatSt.LongName = 'Ford Spare3 Feature State';
FordLatCtrlFeatSt.Description = [...
  'Processed to provide the output Extra3ArbiterCmd'];
FordLatCtrlFeatSt.DocUnits = 'Cnt';
FordLatCtrlFeatSt.EngDT = enum.FordFeatSt1;
FordLatCtrlFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLatCtrlFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordLatCtrlFeatSt.ReadType = 'Rte';


FordPullDriftCmpFeatSt = DataDict.IpSignal;
FordPullDriftCmpFeatSt.LongName = 'Ford Pull Drift Compensation Feature State';
FordPullDriftCmpFeatSt.Description = [...
  'Processed to provide the output PdcArbiterCmd'];
FordPullDriftCmpFeatSt.DocUnits = 'Cnt';
FordPullDriftCmpFeatSt.EngDT = enum.FordFeatSt1;
FordPullDriftCmpFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordPullDriftCmpFeatSt.ReadType = 'Rte';


FordPullDriftCmpLrngFeatSt = DataDict.IpSignal;
FordPullDriftCmpLrngFeatSt.LongName = 'Ford Pull Drift Compensation Learning Feature State';
FordPullDriftCmpLrngFeatSt.Description = [...
  'Processed to provide the output PdclArbiterCmd'];
FordPullDriftCmpLrngFeatSt.DocUnits = 'Cnt';
FordPullDriftCmpLrngFeatSt.EngDT = enum.FordFeatSt1;
FordPullDriftCmpLrngFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpLrngFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordPullDriftCmpLrngFeatSt.ReadType = 'Rte';


FordSpare1FeatSt = DataDict.IpSignal;
FordSpare1FeatSt.LongName = 'Ford Spare1 Feature State';
FordSpare1FeatSt.Description = [...
  'Processed to provide the output Extra1ArbiterCmd'];
FordSpare1FeatSt.DocUnits = 'Cnt';
FordSpare1FeatSt.EngDT = enum.FordFeatSt1;
FordSpare1FeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare1FeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare1FeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare1FeatSt.ReadIn = {'FordCmdArbnPer1'};
FordSpare1FeatSt.ReadType = 'Rte';


FordSpare2FeatSt = DataDict.IpSignal;
FordSpare2FeatSt.LongName = 'Ford Spare2 Feature State';
FordSpare2FeatSt.Description = [...
  'Processed to provide the output Extra2ArbiterCmd'];
FordSpare2FeatSt.DocUnits = 'Cnt';
FordSpare2FeatSt.EngDT = enum.FordFeatSt1;
FordSpare2FeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare2FeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare2FeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare2FeatSt.ReadIn = {'FordCmdArbnPer1'};
FordSpare2FeatSt.ReadType = 'Rte';


FordSpare3FeatSt = DataDict.IpSignal;
FordSpare3FeatSt.LongName = 'Ford Spare3 Feature State';
FordSpare3FeatSt.Description = [...
  'Processed to provide the output Extra3ArbiterCmd'];
FordSpare3FeatSt.DocUnits = 'Cnt';
FordSpare3FeatSt.EngDT = enum.FordFeatSt1;
FordSpare3FeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare3FeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare3FeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare3FeatSt.ReadIn = {'FordCmdArbnPer1'};
FordSpare3FeatSt.ReadType = 'Rte';


FordSteerModlSts = DataDict.IpSignal;
FordSteerModlSts.LongName = 'Ford Steering Module Status';
FordSteerModlSts.Description = 'Decides System State';
FordSteerModlSts.DocUnits = 'Cnt';
FordSteerModlSts.EngDT = enum.SteerModlSts1;
FordSteerModlSts.EngInit = SteerModlSts1.STEERMODLSTS_NORMOPERFULLASSI;
FordSteerModlSts.EngMin = SteerModlSts1.STEERMODLSTS_ELECPWRSTEERININ;
FordSteerModlSts.EngMax = SteerModlSts1.STEERMODLSTS_NOTUSED;
FordSteerModlSts.ReadIn = {'FordCmdArbnPer1'};
FordSteerModlSts.ReadType = 'Rte';


FordSteerTqDstbcRejctnFeatSt = DataDict.IpSignal;
FordSteerTqDstbcRejctnFeatSt.LongName = 'Ford Steering Torque Disturbance Rejection Feature';
FordSteerTqDstbcRejctnFeatSt.Description = [...
  'Processed to provide the output Extra3ArbiterCmd'];
FordSteerTqDstbcRejctnFeatSt.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnFeatSt.EngDT = enum.FordFeatSt1;
FordSteerTqDstbcRejctnFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSteerTqDstbcRejctnFeatSt.ReadIn = {'FordCmdArbnPer1'};
FordSteerTqDstbcRejctnFeatSt.ReadType = 'Rte';


FordSysOperMotTqCmdSca = DataDict.IpSignal;
FordSysOperMotTqCmdSca.LongName = 'Ford System Operation Motor Torque Command Scale';
FordSysOperMotTqCmdSca.Description = 'Decides System State';
FordSysOperMotTqCmdSca.DocUnits = 'Perc';
FordSysOperMotTqCmdSca.EngDT = dt.float32;
FordSysOperMotTqCmdSca.EngInit = 1;
FordSysOperMotTqCmdSca.EngMin = 0;
FordSysOperMotTqCmdSca.EngMax = 1;
FordSysOperMotTqCmdSca.ReadIn = {'FordCmdArbnPer1'};
FordSysOperMotTqCmdSca.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordActvNiblCtrlArbnCmd = DataDict.OpSignal;
FordActvNiblCtrlArbnCmd.LongName = 'Ford Active Nibble Control Arbitration Command';
FordActvNiblCtrlArbnCmd.Description = 'Output for ANC Arbiter Command';
FordActvNiblCtrlArbnCmd.DocUnits = 'Cnt';
FordActvNiblCtrlArbnCmd.SwcShoName = 'FordCmdArbn';
FordActvNiblCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordActvNiblCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordActvNiblCtrlArbnCmd.TestTolerance = 0;
FordActvNiblCtrlArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordActvNiblCtrlArbnCmd.WriteType = 'Rte';


FordDrvrSteerRcmdnArbnCmd = DataDict.OpSignal;
FordDrvrSteerRcmdnArbnCmd.LongName = 'Ford Driver Steering Recomendation Arbitration Command';
FordDrvrSteerRcmdnArbnCmd.Description = 'Output for DSR Arbiter Command';
FordDrvrSteerRcmdnArbnCmd.DocUnits = 'Cnt';
FordDrvrSteerRcmdnArbnCmd.SwcShoName = 'FordCmdArbn';
FordDrvrSteerRcmdnArbnCmd.EngDT = enum.FordArbnCmd1;
FordDrvrSteerRcmdnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordDrvrSteerRcmdnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordDrvrSteerRcmdnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordDrvrSteerRcmdnArbnCmd.TestTolerance = 0;
FordDrvrSteerRcmdnArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordDrvrSteerRcmdnArbnCmd.WriteType = 'Rte';


FordEvasSteerAssiArbnCmd = DataDict.OpSignal;
FordEvasSteerAssiArbnCmd.LongName = 'Ford Evasive Steering Assist Arbitration Command';
FordEvasSteerAssiArbnCmd.Description = 'Output for ESA Arbiter Command';
FordEvasSteerAssiArbnCmd.DocUnits = 'Cnt';
FordEvasSteerAssiArbnCmd.SwcShoName = 'FordCmdArbn';
FordEvasSteerAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordEvasSteerAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordEvasSteerAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordEvasSteerAssiArbnCmd.TestTolerance = 0;
FordEvasSteerAssiArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordEvasSteerAssiArbnCmd.WriteType = 'Rte';


FordExtAgCtrlArbnCmd = DataDict.OpSignal;
FordExtAgCtrlArbnCmd.LongName = 'Ford External Angle Control Arbitration Command';
FordExtAgCtrlArbnCmd.Description = 'Output for EAC Arbiter Command';
FordExtAgCtrlArbnCmd.DocUnits = 'Cnt';
FordExtAgCtrlArbnCmd.SwcShoName = 'FordCmdArbn';
FordExtAgCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordExtAgCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordExtAgCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordExtAgCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordExtAgCtrlArbnCmd.TestTolerance = 0;
FordExtAgCtrlArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordExtAgCtrlArbnCmd.WriteType = 'Rte';


FordLaneDprtrWarnArbnCmd = DataDict.OpSignal;
FordLaneDprtrWarnArbnCmd.LongName = 'Ford Lane Departure Warning Arbitration Command';
FordLaneDprtrWarnArbnCmd.Description = 'Output for LDW Arbiter Command';
FordLaneDprtrWarnArbnCmd.DocUnits = 'Cnt';
FordLaneDprtrWarnArbnCmd.SwcShoName = 'FordCmdArbn';
FordLaneDprtrWarnArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneDprtrWarnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneDprtrWarnArbnCmd.TestTolerance = 0;
FordLaneDprtrWarnArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordLaneDprtrWarnArbnCmd.WriteType = 'Rte';


FordLaneKeepAssiArbnCmd = DataDict.OpSignal;
FordLaneKeepAssiArbnCmd.LongName = 'Ford Lane Keeping Assist Arbitration Command';
FordLaneKeepAssiArbnCmd.Description = 'Output for LDW Arbiter Command';
FordLaneKeepAssiArbnCmd.DocUnits = 'Cnt';
FordLaneKeepAssiArbnCmd.SwcShoName = 'FordCmdArbn';
FordLaneKeepAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneKeepAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneKeepAssiArbnCmd.TestTolerance = 0;
FordLaneKeepAssiArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordLaneKeepAssiArbnCmd.WriteType = 'Rte';


FordLatCtrlArbnCmd = DataDict.OpSignal;
FordLatCtrlArbnCmd.LongName = 'Ford Lateral Control Arbitration Command';
FordLatCtrlArbnCmd.Description = 'Output for LATCTL Arbiter Command';
FordLatCtrlArbnCmd.DocUnits = 'Cnt';
FordLatCtrlArbnCmd.SwcShoName = 'FordCmdArbn';
FordLatCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordLatCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLatCtrlArbnCmd.TestTolerance = 0;
FordLatCtrlArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordLatCtrlArbnCmd.WriteType = 'Rte';


FordPullDriftCmpArbnCmd = DataDict.OpSignal;
FordPullDriftCmpArbnCmd.LongName = 'Ford Pull Drift Compensation Arbitration Command';
FordPullDriftCmpArbnCmd.Description = 'Output for LDW Arbiter Command';
FordPullDriftCmpArbnCmd.DocUnits = 'Cnt';
FordPullDriftCmpArbnCmd.SwcShoName = 'FordCmdArbn';
FordPullDriftCmpArbnCmd.EngDT = enum.FordArbnCmd1;
FordPullDriftCmpArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordPullDriftCmpArbnCmd.TestTolerance = 0;
FordPullDriftCmpArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordPullDriftCmpArbnCmd.WriteType = 'Rte';


FordPullDriftCmpLrngArbnCmd = DataDict.OpSignal;
FordPullDriftCmpLrngArbnCmd.LongName = 'Ford Pull Drift Compensation Learning Arbitration Command';
FordPullDriftCmpLrngArbnCmd.Description = 'Output for LDW Arbiter Command';
FordPullDriftCmpLrngArbnCmd.DocUnits = 'Cnt';
FordPullDriftCmpLrngArbnCmd.SwcShoName = 'FordCmdArbn';
FordPullDriftCmpLrngArbnCmd.EngDT = enum.FordArbnCmd1;
FordPullDriftCmpLrngArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpLrngArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpLrngArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordPullDriftCmpLrngArbnCmd.TestTolerance = 0;
FordPullDriftCmpLrngArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordPullDriftCmpLrngArbnCmd.WriteType = 'Rte';


FordSpare1ArbnCmd = DataDict.OpSignal;
FordSpare1ArbnCmd.LongName = 'Ford Spare 1 Arbitration Command';
FordSpare1ArbnCmd.Description = 'Output for Extra1 Arbiter Command';
FordSpare1ArbnCmd.DocUnits = 'Cnt';
FordSpare1ArbnCmd.SwcShoName = 'FordCmdArbn';
FordSpare1ArbnCmd.EngDT = enum.FordArbnCmd1;
FordSpare1ArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSpare1ArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSpare1ArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSpare1ArbnCmd.TestTolerance = 0;
FordSpare1ArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordSpare1ArbnCmd.WriteType = 'Rte';


FordSpare2ArbnCmd = DataDict.OpSignal;
FordSpare2ArbnCmd.LongName = 'Ford Spare 2 Arbitration Command';
FordSpare2ArbnCmd.Description = 'Output for Extra2 Arbiter Command ';
FordSpare2ArbnCmd.DocUnits = 'Cnt';
FordSpare2ArbnCmd.SwcShoName = 'FordCmdArbn';
FordSpare2ArbnCmd.EngDT = enum.FordArbnCmd1;
FordSpare2ArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSpare2ArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSpare2ArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSpare2ArbnCmd.TestTolerance = 0;
FordSpare2ArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordSpare2ArbnCmd.WriteType = 'Rte';


FordSpare3ArbnCmd = DataDict.OpSignal;
FordSpare3ArbnCmd.LongName = 'Ford Spare 3 Arbitration Command';
FordSpare3ArbnCmd.Description = 'Output for Extra3 Arbiter Command';
FordSpare3ArbnCmd.DocUnits = 'Cnt';
FordSpare3ArbnCmd.SwcShoName = 'FordCmdArbn';
FordSpare3ArbnCmd.EngDT = enum.FordArbnCmd1;
FordSpare3ArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSpare3ArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSpare3ArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSpare3ArbnCmd.TestTolerance = 0;
FordSpare3ArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordSpare3ArbnCmd.WriteType = 'Rte';


FordSteerTqDstbcRejctnArbnCmd = DataDict.OpSignal;
FordSteerTqDstbcRejctnArbnCmd.LongName = 'Ford Steering Torque Disturbance Rejection Arbitration Command';
FordSteerTqDstbcRejctnArbnCmd.Description = 'Output for LDW Arbiter Command';
FordSteerTqDstbcRejctnArbnCmd.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnArbnCmd.SwcShoName = 'FordCmdArbn';
FordSteerTqDstbcRejctnArbnCmd.EngDT = enum.FordArbnCmd1;
FordSteerTqDstbcRejctnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSteerTqDstbcRejctnArbnCmd.TestTolerance = 0;
FordSteerTqDstbcRejctnArbnCmd.WrittenIn = {'FordCmdArbnPer2'};
FordSteerTqDstbcRejctnArbnCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FordActvNiblCtrlFeat = DataDict.IRV;
FordActvNiblCtrlFeat.LongName = 'Ford Active Nibble Control Feature';
FordActvNiblCtrlFeat.Description = [...
  'Processed to provide the output AncArbiterCmd'];
FordActvNiblCtrlFeat.DocUnits = 'Cnt';
FordActvNiblCtrlFeat.EngDT = enum.FordFeatSt1;
FordActvNiblCtrlFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordActvNiblCtrlFeat.ReadIn = {'FordCmdArbnPer2'};
FordActvNiblCtrlFeat.WrittenIn = {'FordCmdArbnPer1'};


FordDrvrSteerRcmdnFeat = DataDict.IRV;
FordDrvrSteerRcmdnFeat.LongName = 'Ford Driver Steering Recomendation Feature State';
FordDrvrSteerRcmdnFeat.Description = [...
  'Processed to provide the output DsrArbiterCmd'];
FordDrvrSteerRcmdnFeat.DocUnits = 'Cnt';
FordDrvrSteerRcmdnFeat.EngDT = enum.FordFeatSt1;
FordDrvrSteerRcmdnFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordDrvrSteerRcmdnFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordDrvrSteerRcmdnFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordDrvrSteerRcmdnFeat.ReadIn = {'FordCmdArbnPer2'};
FordDrvrSteerRcmdnFeat.WrittenIn = {'FordCmdArbnPer1'};


FordEvasSteerAssiFeat = DataDict.IRV;
FordEvasSteerAssiFeat.LongName = 'Ford Evasive Steering Assist Feature State';
FordEvasSteerAssiFeat.Description = [...
  'Processed to provide the output EsaArbiterCmd'];
FordEvasSteerAssiFeat.DocUnits = 'Cnt';
FordEvasSteerAssiFeat.EngDT = enum.FordFeatSt1;
FordEvasSteerAssiFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordEvasSteerAssiFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordEvasSteerAssiFeat.ReadIn = {'FordCmdArbnPer2'};
FordEvasSteerAssiFeat.WrittenIn = {'FordCmdArbnPer1'};


FordLaneDprtrWarnFeat = DataDict.IRV;
FordLaneDprtrWarnFeat.LongName = 'Ford Lane Departure Warning Feature State';
FordLaneDprtrWarnFeat.Description = [...
  'Processed to provide the output LdwArbiterCmd'];
FordLaneDprtrWarnFeat.DocUnits = 'Cnt';
FordLaneDprtrWarnFeat.EngDT = enum.FordFeatSt1;
FordLaneDprtrWarnFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLaneDprtrWarnFeat.ReadIn = {'FordCmdArbnPer2'};
FordLaneDprtrWarnFeat.WrittenIn = {'FordCmdArbnPer1'};


FordLatCtrlFeat = DataDict.IRV;
FordLatCtrlFeat.LongName = 'LATCTL Feature';
FordLatCtrlFeat.Description = [...
  'Processed to provide the output LatctlArbiterCmd'];
FordLatCtrlFeat.DocUnits = 'Cnt';
FordLatCtrlFeat.EngDT = enum.FordFeatSt1;
FordLatCtrlFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLatCtrlFeat.ReadIn = {'FordCmdArbnPer2'};
FordLatCtrlFeat.WrittenIn = {'FordCmdArbnPer1'};


FordPullDriftCmpFeat = DataDict.IRV;
FordPullDriftCmpFeat.LongName = 'Ford Pull Drift Compensation Feature ';
FordPullDriftCmpFeat.Description = [...
  'Processed to provide the output PdcArbiterCmd'];
FordPullDriftCmpFeat.DocUnits = 'Cnt';
FordPullDriftCmpFeat.EngDT = enum.FordFeatSt1;
FordPullDriftCmpFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpFeat.ReadIn = {'FordCmdArbnPer2'};
FordPullDriftCmpFeat.WrittenIn = {'FordCmdArbnPer1'};


FordPullDriftCmpLrngFeat = DataDict.IRV;
FordPullDriftCmpLrngFeat.LongName = 'Ford Pull Drift Compensation Learning Feature';
FordPullDriftCmpLrngFeat.Description = [...
  'Processed to provide the output PdclArbiterCmd'];
FordPullDriftCmpLrngFeat.DocUnits = 'Cnt';
FordPullDriftCmpLrngFeat.EngDT = enum.FordFeatSt1;
FordPullDriftCmpLrngFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpLrngFeat.ReadIn = {'FordCmdArbnPer2'};
FordPullDriftCmpLrngFeat.WrittenIn = {'FordCmdArbnPer1'};


FordSpare1Feat = DataDict.IRV;
FordSpare1Feat.LongName = 'Ford Spare1 Feature';
FordSpare1Feat.Description = [...
  'Processed to provide the output Extra1ArbiterCmd'];
FordSpare1Feat.DocUnits = 'Cnt';
FordSpare1Feat.EngDT = enum.FordFeatSt1;
FordSpare1Feat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare1Feat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare1Feat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare1Feat.ReadIn = {'FordCmdArbnPer2'};
FordSpare1Feat.WrittenIn = {'FordCmdArbnPer1'};


FordSpare2Feat = DataDict.IRV;
FordSpare2Feat.LongName = 'Ford Spare2 Feature';
FordSpare2Feat.Description = [...
  'Processed to provide the output Extra2ArbiterCmd'];
FordSpare2Feat.DocUnits = 'Cnt';
FordSpare2Feat.EngDT = enum.FordFeatSt1;
FordSpare2Feat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare2Feat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare2Feat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare2Feat.ReadIn = {'FordCmdArbnPer2'};
FordSpare2Feat.WrittenIn = {'FordCmdArbnPer1'};


FordSpare3Feat = DataDict.IRV;
FordSpare3Feat.LongName = 'Ford Spare3 Feature';
FordSpare3Feat.Description = [...
  'Processed to provide the output Extra3ArbiterCmd'];
FordSpare3Feat.DocUnits = 'Cnt';
FordSpare3Feat.EngDT = enum.FordFeatSt1;
FordSpare3Feat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSpare3Feat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSpare3Feat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSpare3Feat.ReadIn = {'FordCmdArbnPer2'};
FordSpare3Feat.WrittenIn = {'FordCmdArbnPer1'};


FordSteerTqDstbcRejctnFeat = DataDict.IRV;
FordSteerTqDstbcRejctnFeat.LongName = 'Ford Steering Torque Disturbance Rejection Feature State';
FordSteerTqDstbcRejctnFeat.Description = [...
  'Processed to provide the output StdrArbiterCmd'];
FordSteerTqDstbcRejctnFeat.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnFeat.EngDT = enum.FordFeatSt1;
FordSteerTqDstbcRejctnFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
FordSteerTqDstbcRejctnFeat.ReadIn = {'FordCmdArbnPer2'};
FordSteerTqDstbcRejctnFeat.WrittenIn = {'FordCmdArbnPer1'};


LaneKeepAssiFeat = DataDict.IRV;
LaneKeepAssiFeat.LongName = 'Lane Keep Assist Feature State';
LaneKeepAssiFeat.Description = [...
  'Processed to provide the output LkaArbiterCmd'];
LaneKeepAssiFeat.DocUnits = 'Cnt';
LaneKeepAssiFeat.EngDT = enum.FordFeatSt1;
LaneKeepAssiFeat.EngInit = FordFeatSt1.Cx0_PASSIVE;
LaneKeepAssiFeat.EngMin = FordFeatSt1.Cx0_PASSIVE;
LaneKeepAssiFeat.EngMax = FordFeatSt1.Cx5_LOCKED;
LaneKeepAssiFeat.ReadIn = {'FordCmdArbnPer2'};
LaneKeepAssiFeat.WrittenIn = {'FordCmdArbnPer1'};


SteerSts = DataDict.IRV;
SteerSts.LongName = 'Steering Status';
SteerSts.Description = 'Decides System State';
SteerSts.DocUnits = 'Cnt';
SteerSts.EngDT = enum.SteerModlSts1;
SteerSts.EngInit = SteerModlSts1.STEERMODLSTS_NORMOPERFULLASSI;
SteerSts.EngMin = SteerModlSts1.STEERMODLSTS_ELECPWRSTEERININ;
SteerSts.EngMax = SteerModlSts1.STEERMODLSTS_NOTUSED;
SteerSts.ReadIn = {'FordCmdArbnPer2'};
SteerSts.WrittenIn = {'FordCmdArbnPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordCmdArbnActvNiblCtrlDeactvn = DataDict.Calibration;
FordCmdArbnActvNiblCtrlDeactvn.LongName = 'ANC Deactivation Table';
FordCmdArbnActvNiblCtrlDeactvn.Description = [...
  'Calibration for ANC Deactivation Table'];
FordCmdArbnActvNiblCtrlDeactvn.DocUnits = 'Cnt';
FordCmdArbnActvNiblCtrlDeactvn.EngDT = dt.lgc;
FordCmdArbnActvNiblCtrlDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnActvNiblCtrlDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnActvNiblCtrlDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnActvNiblCtrlDeactvn.Cardinality = 'Cmn';
FordCmdArbnActvNiblCtrlDeactvn.CustomerVisible = false;
FordCmdArbnActvNiblCtrlDeactvn.Online = false;
FordCmdArbnActvNiblCtrlDeactvn.Impact = 'H';
FordCmdArbnActvNiblCtrlDeactvn.TuningOwner = 'EPDT';
FordCmdArbnActvNiblCtrlDeactvn.GraphLink = {''};
FordCmdArbnActvNiblCtrlDeactvn.Monotony = 'None';
FordCmdArbnActvNiblCtrlDeactvn.MaxGrad = 0;
FordCmdArbnActvNiblCtrlDeactvn.PortName = 'FordCmdArbnActvNiblCtrlDeactvn';


FordCmdArbnActvNiblCtrlDeniedActvnReq = DataDict.Calibration;
FordCmdArbnActvNiblCtrlDeniedActvnReq.LongName = 'ANC Denied Activation Request Table';
FordCmdArbnActvNiblCtrlDeniedActvnReq.Description = [...
  'Calibration for ANC Denied Activation Request Table'];
FordCmdArbnActvNiblCtrlDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnActvNiblCtrlDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnActvNiblCtrlDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnActvNiblCtrlDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnActvNiblCtrlDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnActvNiblCtrlDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnActvNiblCtrlDeniedActvnReq.CustomerVisible = false;
FordCmdArbnActvNiblCtrlDeniedActvnReq.Online = false;
FordCmdArbnActvNiblCtrlDeniedActvnReq.Impact = 'H';
FordCmdArbnActvNiblCtrlDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnActvNiblCtrlDeniedActvnReq.GraphLink = {''};
FordCmdArbnActvNiblCtrlDeniedActvnReq.Monotony = 'None';
FordCmdArbnActvNiblCtrlDeniedActvnReq.MaxGrad = 0;
FordCmdArbnActvNiblCtrlDeniedActvnReq.PortName = 'FordCmdArbnActvNiblCtrlDeniedActvnReq';


FordCmdArbnDrvrSteerDeniedActvnReq = DataDict.Calibration;
FordCmdArbnDrvrSteerDeniedActvnReq.LongName = 'DSR Denied Activation Request';
FordCmdArbnDrvrSteerDeniedActvnReq.Description = [...
  'Calibration for DSR Denied Activation Request'];
FordCmdArbnDrvrSteerDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnDrvrSteerDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnDrvrSteerDeniedActvnReq.EngVal =  ...
   [0                0                0                0                0                0                1                1                1                0                0                0                0];
FordCmdArbnDrvrSteerDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnDrvrSteerDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnDrvrSteerDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnDrvrSteerDeniedActvnReq.CustomerVisible = false;
FordCmdArbnDrvrSteerDeniedActvnReq.Online = false;
FordCmdArbnDrvrSteerDeniedActvnReq.Impact = 'H';
FordCmdArbnDrvrSteerDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnDrvrSteerDeniedActvnReq.GraphLink = {''};
FordCmdArbnDrvrSteerDeniedActvnReq.Monotony = 'None';
FordCmdArbnDrvrSteerDeniedActvnReq.MaxGrad = 0;
FordCmdArbnDrvrSteerDeniedActvnReq.PortName = 'FordCmdArbnDrvrSteerDeniedActvnReq';


FordCmdArbnDrvrSteerRcmdnDeactvn = DataDict.Calibration;
FordCmdArbnDrvrSteerRcmdnDeactvn.LongName = 'DSR Deactivation Table';
FordCmdArbnDrvrSteerRcmdnDeactvn.Description = [...
  'Calibration for DSR Deactivation Table'];
FordCmdArbnDrvrSteerRcmdnDeactvn.DocUnits = 'Cnt';
FordCmdArbnDrvrSteerRcmdnDeactvn.EngDT = dt.lgc;
FordCmdArbnDrvrSteerRcmdnDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnDrvrSteerRcmdnDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnDrvrSteerRcmdnDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnDrvrSteerRcmdnDeactvn.Cardinality = 'Cmn';
FordCmdArbnDrvrSteerRcmdnDeactvn.CustomerVisible = false;
FordCmdArbnDrvrSteerRcmdnDeactvn.Online = false;
FordCmdArbnDrvrSteerRcmdnDeactvn.Impact = 'H';
FordCmdArbnDrvrSteerRcmdnDeactvn.TuningOwner = 'EPDT';
FordCmdArbnDrvrSteerRcmdnDeactvn.GraphLink = {''};
FordCmdArbnDrvrSteerRcmdnDeactvn.Monotony = 'None';
FordCmdArbnDrvrSteerRcmdnDeactvn.MaxGrad = 0;
FordCmdArbnDrvrSteerRcmdnDeactvn.PortName = 'FordCmdArbnDrvrSteerRcmdnDeactvn';


FordCmdArbnEvasSteerAssiDeactvn = DataDict.Calibration;
FordCmdArbnEvasSteerAssiDeactvn.LongName = 'ESA Deactivation Table';
FordCmdArbnEvasSteerAssiDeactvn.Description = [...
  'Calibration for ESA Deactivation Table'];
FordCmdArbnEvasSteerAssiDeactvn.DocUnits = 'Cnt';
FordCmdArbnEvasSteerAssiDeactvn.EngDT = dt.lgc;
FordCmdArbnEvasSteerAssiDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnEvasSteerAssiDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnEvasSteerAssiDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnEvasSteerAssiDeactvn.Cardinality = 'Cmn';
FordCmdArbnEvasSteerAssiDeactvn.CustomerVisible = false;
FordCmdArbnEvasSteerAssiDeactvn.Online = false;
FordCmdArbnEvasSteerAssiDeactvn.Impact = 'H';
FordCmdArbnEvasSteerAssiDeactvn.TuningOwner = 'EPDT';
FordCmdArbnEvasSteerAssiDeactvn.GraphLink = {''};
FordCmdArbnEvasSteerAssiDeactvn.Monotony = 'None';
FordCmdArbnEvasSteerAssiDeactvn.MaxGrad = 0;
FordCmdArbnEvasSteerAssiDeactvn.PortName = 'FordCmdArbnEvasSteerAssiDeactvn';


FordCmdArbnEvasSteerDeniedActvnReq = DataDict.Calibration;
FordCmdArbnEvasSteerDeniedActvnReq.LongName = 'ESA Denied Activation Request Table';
FordCmdArbnEvasSteerDeniedActvnReq.Description = [...
  'Calibration for ESA Denied Activation Request Table'];
FordCmdArbnEvasSteerDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnEvasSteerDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnEvasSteerDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnEvasSteerDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnEvasSteerDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnEvasSteerDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnEvasSteerDeniedActvnReq.CustomerVisible = false;
FordCmdArbnEvasSteerDeniedActvnReq.Online = false;
FordCmdArbnEvasSteerDeniedActvnReq.Impact = 'H';
FordCmdArbnEvasSteerDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnEvasSteerDeniedActvnReq.GraphLink = {''};
FordCmdArbnEvasSteerDeniedActvnReq.Monotony = 'None';
FordCmdArbnEvasSteerDeniedActvnReq.MaxGrad = 0;
FordCmdArbnEvasSteerDeniedActvnReq.PortName = 'FordCmdArbnEvasSteerDeniedActvnReq';


FordCmdArbnExtAgCtrlDeactvn = DataDict.Calibration;
FordCmdArbnExtAgCtrlDeactvn.LongName = 'EAC Deactivation Table';
FordCmdArbnExtAgCtrlDeactvn.Description = [...
  'Calibration for EAC Deactivation Table'];
FordCmdArbnExtAgCtrlDeactvn.DocUnits = 'Cnt';
FordCmdArbnExtAgCtrlDeactvn.EngDT = dt.lgc;
FordCmdArbnExtAgCtrlDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                0                0                0];
FordCmdArbnExtAgCtrlDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnExtAgCtrlDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnExtAgCtrlDeactvn.Cardinality = 'Cmn';
FordCmdArbnExtAgCtrlDeactvn.CustomerVisible = false;
FordCmdArbnExtAgCtrlDeactvn.Online = false;
FordCmdArbnExtAgCtrlDeactvn.Impact = 'H';
FordCmdArbnExtAgCtrlDeactvn.TuningOwner = 'EPDT';
FordCmdArbnExtAgCtrlDeactvn.GraphLink = {''};
FordCmdArbnExtAgCtrlDeactvn.Monotony = 'None';
FordCmdArbnExtAgCtrlDeactvn.MaxGrad = 0;
FordCmdArbnExtAgCtrlDeactvn.PortName = 'FordCmdArbnExtAgCtrlDeactvn';


FordCmdArbnExtAgDeniedActvnReq = DataDict.Calibration;
FordCmdArbnExtAgDeniedActvnReq.LongName = 'EAC Denied Activation Request Table';
FordCmdArbnExtAgDeniedActvnReq.Description = [...
  'Calibration for EAC Denied Activation Request Table'];
FordCmdArbnExtAgDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnExtAgDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnExtAgDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                0                0                0                1                0                0                0];
FordCmdArbnExtAgDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnExtAgDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnExtAgDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnExtAgDeniedActvnReq.CustomerVisible = false;
FordCmdArbnExtAgDeniedActvnReq.Online = false;
FordCmdArbnExtAgDeniedActvnReq.Impact = 'H';
FordCmdArbnExtAgDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnExtAgDeniedActvnReq.GraphLink = {''};
FordCmdArbnExtAgDeniedActvnReq.Monotony = 'None';
FordCmdArbnExtAgDeniedActvnReq.MaxGrad = 0;
FordCmdArbnExtAgDeniedActvnReq.PortName = 'FordCmdArbnExtAgDeniedActvnReq';


FordCmdArbnLaneDprtrWarnDeactvn = DataDict.Calibration;
FordCmdArbnLaneDprtrWarnDeactvn.LongName = 'LDW Deactivation Table';
FordCmdArbnLaneDprtrWarnDeactvn.Description = [...
  'Calibration for LDW Deactivation Table'];
FordCmdArbnLaneDprtrWarnDeactvn.DocUnits = 'Cnt';
FordCmdArbnLaneDprtrWarnDeactvn.EngDT = dt.lgc;
FordCmdArbnLaneDprtrWarnDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnLaneDprtrWarnDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLaneDprtrWarnDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLaneDprtrWarnDeactvn.Cardinality = 'Cmn';
FordCmdArbnLaneDprtrWarnDeactvn.CustomerVisible = false;
FordCmdArbnLaneDprtrWarnDeactvn.Online = false;
FordCmdArbnLaneDprtrWarnDeactvn.Impact = 'H';
FordCmdArbnLaneDprtrWarnDeactvn.TuningOwner = 'EPDT';
FordCmdArbnLaneDprtrWarnDeactvn.GraphLink = {''};
FordCmdArbnLaneDprtrWarnDeactvn.Monotony = 'None';
FordCmdArbnLaneDprtrWarnDeactvn.MaxGrad = 0;
FordCmdArbnLaneDprtrWarnDeactvn.PortName = 'FordCmdArbnLaneDprtrWarnDeactvn';


FordCmdArbnLaneDprtrWarnDeniedActvnReq = DataDict.Calibration;
FordCmdArbnLaneDprtrWarnDeniedActvnReq.LongName = 'LDW Denied Activation Request Table';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.Description = [...
  'Calibration for LDW Denied Activation Request Table'];
FordCmdArbnLaneDprtrWarnDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnLaneDprtrWarnDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnLaneDprtrWarnDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLaneDprtrWarnDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLaneDprtrWarnDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.CustomerVisible = false;
FordCmdArbnLaneDprtrWarnDeniedActvnReq.Online = false;
FordCmdArbnLaneDprtrWarnDeniedActvnReq.Impact = 'H';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.GraphLink = {''};
FordCmdArbnLaneDprtrWarnDeniedActvnReq.Monotony = 'None';
FordCmdArbnLaneDprtrWarnDeniedActvnReq.MaxGrad = 0;
FordCmdArbnLaneDprtrWarnDeniedActvnReq.PortName = 'FordCmdArbnLaneDprtrWarnDeniedActvnReq';


FordCmdArbnLaneKeepAssiDeactvn = DataDict.Calibration;
FordCmdArbnLaneKeepAssiDeactvn.LongName = 'Ford Command Lane Keek Assist Deactivation';
FordCmdArbnLaneKeepAssiDeactvn.Description = [...
  'Calibration for LKA Deactivation Table'];
FordCmdArbnLaneKeepAssiDeactvn.DocUnits = 'Cnt';
FordCmdArbnLaneKeepAssiDeactvn.EngDT = dt.lgc;
FordCmdArbnLaneKeepAssiDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnLaneKeepAssiDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLaneKeepAssiDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLaneKeepAssiDeactvn.Cardinality = 'Cmn';
FordCmdArbnLaneKeepAssiDeactvn.CustomerVisible = false;
FordCmdArbnLaneKeepAssiDeactvn.Online = false;
FordCmdArbnLaneKeepAssiDeactvn.Impact = 'H';
FordCmdArbnLaneKeepAssiDeactvn.TuningOwner = 'EPDT';
FordCmdArbnLaneKeepAssiDeactvn.GraphLink = {''};
FordCmdArbnLaneKeepAssiDeactvn.Monotony = 'None';
FordCmdArbnLaneKeepAssiDeactvn.MaxGrad = 0;
FordCmdArbnLaneKeepAssiDeactvn.PortName = 'FordCmdArbnLaneKeepAssiDeactvn';


FordCmdArbnLaneKeepAssiDeniedActvnReq = DataDict.Calibration;
FordCmdArbnLaneKeepAssiDeniedActvnReq.LongName = 'LKA Denied Activation Request Table';
FordCmdArbnLaneKeepAssiDeniedActvnReq.Description = [...
  'Calibration for LKA Denied Activation Request Table'];
FordCmdArbnLaneKeepAssiDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnLaneKeepAssiDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnLaneKeepAssiDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnLaneKeepAssiDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLaneKeepAssiDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLaneKeepAssiDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnLaneKeepAssiDeniedActvnReq.CustomerVisible = false;
FordCmdArbnLaneKeepAssiDeniedActvnReq.Online = false;
FordCmdArbnLaneKeepAssiDeniedActvnReq.Impact = 'H';
FordCmdArbnLaneKeepAssiDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnLaneKeepAssiDeniedActvnReq.GraphLink = {''};
FordCmdArbnLaneKeepAssiDeniedActvnReq.Monotony = 'None';
FordCmdArbnLaneKeepAssiDeniedActvnReq.MaxGrad = 0;
FordCmdArbnLaneKeepAssiDeniedActvnReq.PortName = 'FordCmdArbnLaneKeepAssiDeniedActvnReq';


FordCmdArbnLatCtrlDeactvn = DataDict.Calibration;
FordCmdArbnLatCtrlDeactvn.LongName = 'LATCTL Deactivation Table';
FordCmdArbnLatCtrlDeactvn.Description = [...
  'Calibration for LATCTL Deactivation Table'];
FordCmdArbnLatCtrlDeactvn.DocUnits = 'Cnt';
FordCmdArbnLatCtrlDeactvn.EngDT = dt.lgc;
FordCmdArbnLatCtrlDeactvn.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLatCtrlDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLatCtrlDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLatCtrlDeactvn.Cardinality = 'Cmn';
FordCmdArbnLatCtrlDeactvn.CustomerVisible = false;
FordCmdArbnLatCtrlDeactvn.Online = false;
FordCmdArbnLatCtrlDeactvn.Impact = 'H';
FordCmdArbnLatCtrlDeactvn.TuningOwner = 'EPDT';
FordCmdArbnLatCtrlDeactvn.GraphLink = {''};
FordCmdArbnLatCtrlDeactvn.Monotony = 'None';
FordCmdArbnLatCtrlDeactvn.MaxGrad = 0;
FordCmdArbnLatCtrlDeactvn.PortName = 'FordCmdArbnLatCtrlDeactvn';


FordCmdArbnLatCtrlDeniedActvnReq = DataDict.Calibration;
FordCmdArbnLatCtrlDeniedActvnReq.LongName = 'LATCTL Denied Activation Request Table';
FordCmdArbnLatCtrlDeniedActvnReq.Description = [...
  'Calibration for LATCTL Denied Activation Request Table'];
FordCmdArbnLatCtrlDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnLatCtrlDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnLatCtrlDeniedActvnReq.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLatCtrlDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnLatCtrlDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnLatCtrlDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnLatCtrlDeniedActvnReq.CustomerVisible = false;
FordCmdArbnLatCtrlDeniedActvnReq.Online = false;
FordCmdArbnLatCtrlDeniedActvnReq.Impact = 'H';
FordCmdArbnLatCtrlDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnLatCtrlDeniedActvnReq.GraphLink = {''};
FordCmdArbnLatCtrlDeniedActvnReq.Monotony = 'None';
FordCmdArbnLatCtrlDeniedActvnReq.MaxGrad = 0;
FordCmdArbnLatCtrlDeniedActvnReq.PortName = 'FordCmdArbnLatCtrlDeniedActvnReq';


FordCmdArbnNonStMask = DataDict.Calibration;
FordCmdArbnNonStMask.LongName = 'Non Normal State Mask';
FordCmdArbnNonStMask.Description = [...
  'Calibration for LKA Denied Activation Request Table'];
FordCmdArbnNonStMask.DocUnits = 'Cnt';
FordCmdArbnNonStMask.EngDT = dt.lgc;
FordCmdArbnNonStMask.EngVal =  ...
   [1                1                1                0                1                1                0                1                1                1                0                0                0];
FordCmdArbnNonStMask.EngMin = 0;
FordCmdArbnNonStMask.EngMax = 1;
FordCmdArbnNonStMask.Cardinality = 'Cmn';
FordCmdArbnNonStMask.CustomerVisible = false;
FordCmdArbnNonStMask.Online = false;
FordCmdArbnNonStMask.Impact = 'H';
FordCmdArbnNonStMask.TuningOwner = 'EPDT';
FordCmdArbnNonStMask.GraphLink = {''};
FordCmdArbnNonStMask.Monotony = 'None';
FordCmdArbnNonStMask.MaxGrad = 0;
FordCmdArbnNonStMask.PortName = 'FordCmdArbnNonStMask';


FordCmdArbnNormAssiTqThd = DataDict.Calibration;
FordCmdArbnNormAssiTqThd.LongName = 'Normal Assist Torque Threshold';
FordCmdArbnNormAssiTqThd.Description = [...
  'Threshold for Normal System Motor Operation Torque'];
FordCmdArbnNormAssiTqThd.DocUnits = 'Cnt';
FordCmdArbnNormAssiTqThd.EngDT = dt.float32;
FordCmdArbnNormAssiTqThd.EngVal = 0;
FordCmdArbnNormAssiTqThd.EngMin = 0;
FordCmdArbnNormAssiTqThd.EngMax = 1;
FordCmdArbnNormAssiTqThd.Cardinality = 'Cmn';
FordCmdArbnNormAssiTqThd.CustomerVisible = false;
FordCmdArbnNormAssiTqThd.Online = false;
FordCmdArbnNormAssiTqThd.Impact = 'H';
FordCmdArbnNormAssiTqThd.TuningOwner = 'EPDT';
FordCmdArbnNormAssiTqThd.GraphLink = {''};
FordCmdArbnNormAssiTqThd.Monotony = 'None';
FordCmdArbnNormAssiTqThd.MaxGrad = 0;
FordCmdArbnNormAssiTqThd.PortName = 'FordCmdArbnNormAssiTqThd';


FordCmdArbnPullDriftCmpDeactvn = DataDict.Calibration;
FordCmdArbnPullDriftCmpDeactvn.LongName = 'PDC Deactivation Table';
FordCmdArbnPullDriftCmpDeactvn.Description = [...
  'Calibration for PDC Deactivation Table'];
FordCmdArbnPullDriftCmpDeactvn.DocUnits = 'Cnt';
FordCmdArbnPullDriftCmpDeactvn.EngDT = dt.lgc;
FordCmdArbnPullDriftCmpDeactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnPullDriftCmpDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnPullDriftCmpDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnPullDriftCmpDeactvn.Cardinality = 'Cmn';
FordCmdArbnPullDriftCmpDeactvn.CustomerVisible = false;
FordCmdArbnPullDriftCmpDeactvn.Online = false;
FordCmdArbnPullDriftCmpDeactvn.Impact = 'H';
FordCmdArbnPullDriftCmpDeactvn.TuningOwner = 'EPDT';
FordCmdArbnPullDriftCmpDeactvn.GraphLink = {''};
FordCmdArbnPullDriftCmpDeactvn.Monotony = 'None';
FordCmdArbnPullDriftCmpDeactvn.MaxGrad = 0;
FordCmdArbnPullDriftCmpDeactvn.PortName = 'FordCmdArbnPullDriftCmpDeactvn';


FordCmdArbnPullDriftCmpDeniedActvnReq = DataDict.Calibration;
FordCmdArbnPullDriftCmpDeniedActvnReq.LongName = 'PDC Denied Activation Request Table';
FordCmdArbnPullDriftCmpDeniedActvnReq.Description = [...
  'Calibration for PDC Denied Activation Request Table'];
FordCmdArbnPullDriftCmpDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnPullDriftCmpDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnPullDriftCmpDeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnPullDriftCmpDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnPullDriftCmpDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnPullDriftCmpDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnPullDriftCmpDeniedActvnReq.CustomerVisible = false;
FordCmdArbnPullDriftCmpDeniedActvnReq.Online = false;
FordCmdArbnPullDriftCmpDeniedActvnReq.Impact = 'H';
FordCmdArbnPullDriftCmpDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnPullDriftCmpDeniedActvnReq.GraphLink = {''};
FordCmdArbnPullDriftCmpDeniedActvnReq.Monotony = 'None';
FordCmdArbnPullDriftCmpDeniedActvnReq.MaxGrad = 0;
FordCmdArbnPullDriftCmpDeniedActvnReq.PortName = 'FordCmdArbnPullDriftCmpDeniedActvnReq';


FordCmdArbnPullDriftCmpLrngDeactvn = DataDict.Calibration;
FordCmdArbnPullDriftCmpLrngDeactvn.LongName = 'PDCL Deactivation Table';
FordCmdArbnPullDriftCmpLrngDeactvn.Description = [...
  'Calibration for PDCL Deactivation Table'];
FordCmdArbnPullDriftCmpLrngDeactvn.DocUnits = 'Cnt';
FordCmdArbnPullDriftCmpLrngDeactvn.EngDT = dt.lgc;
FordCmdArbnPullDriftCmpLrngDeactvn.EngVal =  ...
   [1                1                1                1                0                0                0                1                1                0                0                0                0];
FordCmdArbnPullDriftCmpLrngDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnPullDriftCmpLrngDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnPullDriftCmpLrngDeactvn.Cardinality = 'Cmn';
FordCmdArbnPullDriftCmpLrngDeactvn.CustomerVisible = false;
FordCmdArbnPullDriftCmpLrngDeactvn.Online = false;
FordCmdArbnPullDriftCmpLrngDeactvn.Impact = 'H';
FordCmdArbnPullDriftCmpLrngDeactvn.TuningOwner = 'EPDT';
FordCmdArbnPullDriftCmpLrngDeactvn.GraphLink = {''};
FordCmdArbnPullDriftCmpLrngDeactvn.Monotony = 'None';
FordCmdArbnPullDriftCmpLrngDeactvn.MaxGrad = 0;
FordCmdArbnPullDriftCmpLrngDeactvn.PortName = 'FordCmdArbnPullDriftCmpLrngDeactvn';


FordCmdArbnPullDriftCmpLrngDeniedActvnReq = DataDict.Calibration;
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.LongName = 'PDCL Denied Activation Request Table';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.Description = [...
  'Calibration for PDCL Denied Activation Request Table'];
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.EngVal =  ...
   [1                1                1                1                0                0                0                1                1                0                0                0                0];
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.CustomerVisible = false;
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.Online = false;
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.Impact = 'H';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.GraphLink = {''};
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.Monotony = 'None';
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.MaxGrad = 0;
FordCmdArbnPullDriftCmpLrngDeniedActvnReq.PortName = 'FordCmdArbnPullDriftCmpLrngDeniedActvnReq';


FordCmdArbnSpare1Deactvn = DataDict.Calibration;
FordCmdArbnSpare1Deactvn.LongName = 'Extra 1 Deactivation Table';
FordCmdArbnSpare1Deactvn.Description = [...
  'Calibration for Extra 1 Deactivation Table'];
FordCmdArbnSpare1Deactvn.DocUnits = 'Cnt';
FordCmdArbnSpare1Deactvn.EngDT = dt.lgc;
FordCmdArbnSpare1Deactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare1Deactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare1Deactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSpare1Deactvn.Cardinality = 'Cmn';
FordCmdArbnSpare1Deactvn.CustomerVisible = false;
FordCmdArbnSpare1Deactvn.Online = false;
FordCmdArbnSpare1Deactvn.Impact = 'H';
FordCmdArbnSpare1Deactvn.TuningOwner = 'EPDT';
FordCmdArbnSpare1Deactvn.GraphLink = {''};
FordCmdArbnSpare1Deactvn.Monotony = 'None';
FordCmdArbnSpare1Deactvn.MaxGrad = 0;
FordCmdArbnSpare1Deactvn.PortName = 'FordCmdArbnSpare1Deactvn';


FordCmdArbnSpare1DeniedActvnReq = DataDict.Calibration;
FordCmdArbnSpare1DeniedActvnReq.LongName = 'Extra 1 Denied Activation Request';
FordCmdArbnSpare1DeniedActvnReq.Description = [...
  'Calibration for Extra 1 Denied Activation Request'];
FordCmdArbnSpare1DeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnSpare1DeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnSpare1DeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare1DeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare1DeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                0                0                0];
FordCmdArbnSpare1DeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnSpare1DeniedActvnReq.CustomerVisible = false;
FordCmdArbnSpare1DeniedActvnReq.Online = false;
FordCmdArbnSpare1DeniedActvnReq.Impact = 'H';
FordCmdArbnSpare1DeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnSpare1DeniedActvnReq.GraphLink = {''};
FordCmdArbnSpare1DeniedActvnReq.Monotony = 'None';
FordCmdArbnSpare1DeniedActvnReq.MaxGrad = 0;
FordCmdArbnSpare1DeniedActvnReq.PortName = 'FordCmdArbnSpare1DeniedActvnReq';


FordCmdArbnSpare2Deactvn = DataDict.Calibration;
FordCmdArbnSpare2Deactvn.LongName = 'Extra 2 Deactivation Table';
FordCmdArbnSpare2Deactvn.Description = 'Calibration for';
FordCmdArbnSpare2Deactvn.DocUnits = 'Cnt';
FordCmdArbnSpare2Deactvn.EngDT = dt.lgc;
FordCmdArbnSpare2Deactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare2Deactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare2Deactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSpare2Deactvn.Cardinality = 'Cmn';
FordCmdArbnSpare2Deactvn.CustomerVisible = false;
FordCmdArbnSpare2Deactvn.Online = false;
FordCmdArbnSpare2Deactvn.Impact = 'H';
FordCmdArbnSpare2Deactvn.TuningOwner = 'EPDT';
FordCmdArbnSpare2Deactvn.GraphLink = {''};
FordCmdArbnSpare2Deactvn.Monotony = 'None';
FordCmdArbnSpare2Deactvn.MaxGrad = 0;
FordCmdArbnSpare2Deactvn.PortName = 'FordCmdArbnSpare2Deactvn';


FordCmdArbnSpare2DeniedActvnReq = DataDict.Calibration;
FordCmdArbnSpare2DeniedActvnReq.LongName = 'Extra 2 Denied Activation Request';
FordCmdArbnSpare2DeniedActvnReq.Description = [...
  'Calibration for Extra 2 Denied Activation Request'];
FordCmdArbnSpare2DeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnSpare2DeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnSpare2DeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare2DeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare2DeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSpare2DeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnSpare2DeniedActvnReq.CustomerVisible = false;
FordCmdArbnSpare2DeniedActvnReq.Online = false;
FordCmdArbnSpare2DeniedActvnReq.Impact = 'H';
FordCmdArbnSpare2DeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnSpare2DeniedActvnReq.GraphLink = {''};
FordCmdArbnSpare2DeniedActvnReq.Monotony = 'None';
FordCmdArbnSpare2DeniedActvnReq.MaxGrad = 0;
FordCmdArbnSpare2DeniedActvnReq.PortName = 'FordCmdArbnSpare2DeniedActvnReq';


FordCmdArbnSpare3Deactvn = DataDict.Calibration;
FordCmdArbnSpare3Deactvn.LongName = 'Extra 3 Deactivation Table';
FordCmdArbnSpare3Deactvn.Description = [...
  'Calibration for Extra 3 Deactivation Table'];
FordCmdArbnSpare3Deactvn.DocUnits = 'Cnt';
FordCmdArbnSpare3Deactvn.EngDT = dt.lgc;
FordCmdArbnSpare3Deactvn.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare3Deactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare3Deactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSpare3Deactvn.Cardinality = 'Cmn';
FordCmdArbnSpare3Deactvn.CustomerVisible = false;
FordCmdArbnSpare3Deactvn.Online = false;
FordCmdArbnSpare3Deactvn.Impact = 'H';
FordCmdArbnSpare3Deactvn.TuningOwner = 'EPDT';
FordCmdArbnSpare3Deactvn.GraphLink = {''};
FordCmdArbnSpare3Deactvn.Monotony = 'None';
FordCmdArbnSpare3Deactvn.MaxGrad = 0;
FordCmdArbnSpare3Deactvn.PortName = 'FordCmdArbnSpare3Deactvn';


FordCmdArbnSpare3DeniedActvnReq = DataDict.Calibration;
FordCmdArbnSpare3DeniedActvnReq.LongName = 'Extra 3 Denied Activation Request';
FordCmdArbnSpare3DeniedActvnReq.Description = [...
  'Calibration for Extra 3 Denied Activation Request'];
FordCmdArbnSpare3DeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnSpare3DeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnSpare3DeniedActvnReq.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                0                0                0                0];
FordCmdArbnSpare3DeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSpare3DeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSpare3DeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnSpare3DeniedActvnReq.CustomerVisible = false;
FordCmdArbnSpare3DeniedActvnReq.Online = false;
FordCmdArbnSpare3DeniedActvnReq.Impact = 'H';
FordCmdArbnSpare3DeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnSpare3DeniedActvnReq.GraphLink = {''};
FordCmdArbnSpare3DeniedActvnReq.Monotony = 'None';
FordCmdArbnSpare3DeniedActvnReq.MaxGrad = 0;
FordCmdArbnSpare3DeniedActvnReq.PortName = 'FordCmdArbnSpare3DeniedActvnReq';


FordCmdArbnSteerDstbcDeactvn = DataDict.Calibration;
FordCmdArbnSteerDstbcDeactvn.LongName = 'STDR Deactivation Table';
FordCmdArbnSteerDstbcDeactvn.Description = [...
  'Calibration for STDR Deactivation Table'];
FordCmdArbnSteerDstbcDeactvn.DocUnits = 'Cnt';
FordCmdArbnSteerDstbcDeactvn.EngDT = dt.lgc;
FordCmdArbnSteerDstbcDeactvn.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSteerDstbcDeactvn.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSteerDstbcDeactvn.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSteerDstbcDeactvn.Cardinality = 'Cmn';
FordCmdArbnSteerDstbcDeactvn.CustomerVisible = false;
FordCmdArbnSteerDstbcDeactvn.Online = false;
FordCmdArbnSteerDstbcDeactvn.Impact = 'H';
FordCmdArbnSteerDstbcDeactvn.TuningOwner = 'EPDT';
FordCmdArbnSteerDstbcDeactvn.GraphLink = {''};
FordCmdArbnSteerDstbcDeactvn.Monotony = 'None';
FordCmdArbnSteerDstbcDeactvn.MaxGrad = 0;
FordCmdArbnSteerDstbcDeactvn.PortName = 'FordCmdArbnSteerDstbcDeactvn';


FordCmdArbnSteerDstbcDeniedActvnReq = DataDict.Calibration;
FordCmdArbnSteerDstbcDeniedActvnReq.LongName = 'STDR Denied Activation Request Table';
FordCmdArbnSteerDstbcDeniedActvnReq.Description = [...
  'Calibration for STDR Deny Activation Request Table'];
FordCmdArbnSteerDstbcDeniedActvnReq.DocUnits = 'Cnt';
FordCmdArbnSteerDstbcDeniedActvnReq.EngDT = dt.lgc;
FordCmdArbnSteerDstbcDeniedActvnReq.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSteerDstbcDeniedActvnReq.EngMin =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0];
FordCmdArbnSteerDstbcDeniedActvnReq.EngMax =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1];
FordCmdArbnSteerDstbcDeniedActvnReq.Cardinality = 'Cmn';
FordCmdArbnSteerDstbcDeniedActvnReq.CustomerVisible = false;
FordCmdArbnSteerDstbcDeniedActvnReq.Online = false;
FordCmdArbnSteerDstbcDeniedActvnReq.Impact = 'H';
FordCmdArbnSteerDstbcDeniedActvnReq.TuningOwner = 'EPDT';
FordCmdArbnSteerDstbcDeniedActvnReq.GraphLink = {''};
FordCmdArbnSteerDstbcDeniedActvnReq.Monotony = 'None';
FordCmdArbnSteerDstbcDeniedActvnReq.MaxGrad = 0;
FordCmdArbnSteerDstbcDeniedActvnReq.PortName = 'FordCmdArbnSteerDstbcDeniedActvnReq';



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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Ecu Identifier 1';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';


ECUID2_CNT_U08 = DataDict.Constant;
ECUID2_CNT_U08.LongName = 'Ecu Identifier 2';
ECUID2_CNT_U08.Description = 'Ecu Identifier 2';
ECUID2_CNT_U08.DocUnits = 'Cnt';
ECUID2_CNT_U08.EngDT = dt.u08;
ECUID2_CNT_U08.EngVal = 2;
ECUID2_CNT_U08.Define = 'Local';


ECUIDINVLD_CNT_U08 = DataDict.Constant;
ECUIDINVLD_CNT_U08.LongName = 'Ecu Identifier Invalid';
ECUIDINVLD_CNT_U08.Description = 'Ecu Invalid Constant';
ECUIDINVLD_CNT_U08.DocUnits = 'Cnt';
ECUIDINVLD_CNT_U08.EngDT = dt.u08;
ECUIDINVLD_CNT_U08.EngVal = 3;
ECUIDINVLD_CNT_U08.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


FAILURE_CNT_U08 = DataDict.Constant;
FAILURE_CNT_U08.LongName = 'Failure';
FAILURE_CNT_U08.Description = 'Failure State';
FAILURE_CNT_U08.DocUnits = 'Cnt';
FAILURE_CNT_U08.EngDT = dt.u08;
FAILURE_CNT_U08.EngVal = 2;
FAILURE_CNT_U08.Define = 'Local';


IDXACTVNIBLCTRLFEAT_CNT_U08 = DataDict.Constant;
IDXACTVNIBLCTRLFEAT_CNT_U08.LongName = 'Index Extra3';
IDXACTVNIBLCTRLFEAT_CNT_U08.Description = [...
  'Represent index of Extra2 Feature State'];
IDXACTVNIBLCTRLFEAT_CNT_U08.DocUnits = 'Cnt';
IDXACTVNIBLCTRLFEAT_CNT_U08.EngDT = dt.u08;
IDXACTVNIBLCTRLFEAT_CNT_U08.EngVal = 1;
IDXACTVNIBLCTRLFEAT_CNT_U08.Define = 'Local';


IDXDRVRSTEER_CNT_U08 = DataDict.Constant;
IDXDRVRSTEER_CNT_U08.LongName = 'Index DSR';
IDXDRVRSTEER_CNT_U08.Description = [...
  'Represent index of DSR Feature State'];
IDXDRVRSTEER_CNT_U08.DocUnits = 'Cnt';
IDXDRVRSTEER_CNT_U08.EngDT = dt.u08;
IDXDRVRSTEER_CNT_U08.EngVal = 6;
IDXDRVRSTEER_CNT_U08.Define = 'Local';


IDXEVASSTEER_CNT_U08 = DataDict.Constant;
IDXEVASSTEER_CNT_U08.LongName = 'Index ESA';
IDXEVASSTEER_CNT_U08.Description = [...
  'Represent index of ESA Feature State'];
IDXEVASSTEER_CNT_U08.DocUnits = 'Cnt';
IDXEVASSTEER_CNT_U08.EngDT = dt.u08;
IDXEVASSTEER_CNT_U08.EngVal = 7;
IDXEVASSTEER_CNT_U08.Define = 'Local';


IDXEXTAGCTRL_CNT_U08 = DataDict.Constant;
IDXEXTAGCTRL_CNT_U08.LongName = 'Index EAC';
IDXEXTAGCTRL_CNT_U08.Description = [...
  'Represent index of EAC Feature State'];
IDXEXTAGCTRL_CNT_U08.DocUnits = 'Cnt';
IDXEXTAGCTRL_CNT_U08.EngDT = dt.u08;
IDXEXTAGCTRL_CNT_U08.EngVal = 10;
IDXEXTAGCTRL_CNT_U08.Define = 'Local';


IDXLANEDPRTR_CNT_U08 = DataDict.Constant;
IDXLANEDPRTR_CNT_U08.LongName = 'Index LDW';
IDXLANEDPRTR_CNT_U08.Description = [...
  'Represent index of LDW Feature State'];
IDXLANEDPRTR_CNT_U08.DocUnits = 'Cnt';
IDXLANEDPRTR_CNT_U08.EngDT = dt.u08;
IDXLANEDPRTR_CNT_U08.EngVal = 2;
IDXLANEDPRTR_CNT_U08.Define = 'Local';


IDXLANEKEEPASSI_CNT_U08 = DataDict.Constant;
IDXLANEKEEPASSI_CNT_U08.LongName = 'Index LKA';
IDXLANEKEEPASSI_CNT_U08.Description = [...
  'Represent index of LKA Feature State'];
IDXLANEKEEPASSI_CNT_U08.DocUnits = 'Cnt';
IDXLANEKEEPASSI_CNT_U08.EngDT = dt.u08;
IDXLANEKEEPASSI_CNT_U08.EngVal = 5;
IDXLANEKEEPASSI_CNT_U08.Define = 'Local';


IDXLATCTRL_CNT_U08 = DataDict.Constant;
IDXLATCTRL_CNT_U08.LongName = 'Index LATCTL';
IDXLATCTRL_CNT_U08.Description = [...
  'Represent index of LATCTL Feature State'];
IDXLATCTRL_CNT_U08.DocUnits = 'Cnt';
IDXLATCTRL_CNT_U08.EngDT = dt.u08;
IDXLATCTRL_CNT_U08.EngVal = 8;
IDXLATCTRL_CNT_U08.Define = 'Local';


IDXPULLDRIFTCMPLRNG_CNT_U08 = DataDict.Constant;
IDXPULLDRIFTCMPLRNG_CNT_U08.LongName = 'Index PDCL';
IDXPULLDRIFTCMPLRNG_CNT_U08.Description = [...
  'Represent index of PDCL Feature State'];
IDXPULLDRIFTCMPLRNG_CNT_U08.DocUnits = 'Cnt';
IDXPULLDRIFTCMPLRNG_CNT_U08.EngDT = dt.u08;
IDXPULLDRIFTCMPLRNG_CNT_U08.EngVal = 4;
IDXPULLDRIFTCMPLRNG_CNT_U08.Define = 'Local';


IDXPULLDRIFTCMP_CNT_U08 = DataDict.Constant;
IDXPULLDRIFTCMP_CNT_U08.LongName = 'Index PDC';
IDXPULLDRIFTCMP_CNT_U08.Description = [...
  'Represent index of PDC Feature State'];
IDXPULLDRIFTCMP_CNT_U08.DocUnits = 'Cnt';
IDXPULLDRIFTCMP_CNT_U08.EngDT = dt.u08;
IDXPULLDRIFTCMP_CNT_U08.EngVal = 3;
IDXPULLDRIFTCMP_CNT_U08.Define = 'Local';


IDXSPARE1_CNT_U08 = DataDict.Constant;
IDXSPARE1_CNT_U08.LongName = 'Index Extra1';
IDXSPARE1_CNT_U08.Description = [...
  'Represent index of Extra1 Feature State'];
IDXSPARE1_CNT_U08.DocUnits = 'Cnt';
IDXSPARE1_CNT_U08.EngDT = dt.u08;
IDXSPARE1_CNT_U08.EngVal = 11;
IDXSPARE1_CNT_U08.Define = 'Local';


IDXSPARE2_CNT_U08 = DataDict.Constant;
IDXSPARE2_CNT_U08.LongName = 'Index Extra2';
IDXSPARE2_CNT_U08.Description = [...
  'Represent index of Extra2 Feature State'];
IDXSPARE2_CNT_U08.DocUnits = 'Cnt';
IDXSPARE2_CNT_U08.EngDT = dt.u08;
IDXSPARE2_CNT_U08.EngVal = 12;
IDXSPARE2_CNT_U08.Define = 'Local';


IDXSPARE3_CNT_U08 = DataDict.Constant;
IDXSPARE3_CNT_U08.LongName = 'Index Extra3';
IDXSPARE3_CNT_U08.Description = [...
  'Represent index of Extra2 Feature State'];
IDXSPARE3_CNT_U08.DocUnits = 'Cnt';
IDXSPARE3_CNT_U08.EngDT = dt.u08;
IDXSPARE3_CNT_U08.EngVal = 13;
IDXSPARE3_CNT_U08.Define = 'Local';


IDXSTEERDSTBC_CNT_U08 = DataDict.Constant;
IDXSTEERDSTBC_CNT_U08.LongName = 'Index STDR';
IDXSTEERDSTBC_CNT_U08.Description = [...
  'Represent index of STDR Feature State'];
IDXSTEERDSTBC_CNT_U08.DocUnits = 'Cnt';
IDXSTEERDSTBC_CNT_U08.EngDT = dt.u08;
IDXSTEERDSTBC_CNT_U08.EngVal = 9;
IDXSTEERDSTBC_CNT_U08.Define = 'Local';


IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.LongName = 'Inter Micro Communication Arbitration ANC Feature State';
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.LongName = 'Inter Micro Communication Arbitration DSR Feature State';
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.LongName = 'Inter Micro Communication Arbitration ESA Feature State';
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.LongName = 'Inter Micro Communication Arbitration LDW Feature State';
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.LongName = 'Inter Micro Communication Arbitration LKA Feature State';
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNLATCTRL_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.LongName = 'Inter Micro Communication Arbitration LATCTL Feature State';
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNLATCTRL_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.LongName = 'Inter Micro Communication Arbitration PDCL Feature State';
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.LongName = 'Inter Micro Communication Arbitration PDC Feature State';
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSPARE1_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.LongName = 'Inter Micro Communication Arbitration Extra1 Feature State';
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNSPARE1_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSPARE2_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.LongName = 'Inter Micro Communication Arbitration Extra2 Feature State';
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNSPARE2_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSPARE3_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.LongName = 'Inter Micro Communication Arbitration Extra3 Feature State';
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNSPARE3_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.LongName = 'Inter Micro Communication Arbitration STDR Feature State';
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Steering Module Status';
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.EngVal = 0;
IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16.Define = 'Global';


NONNORMALOP_CNT_U08 = DataDict.Constant;
NONNORMALOP_CNT_U08.LongName = 'Non Normal Operation';
NONNORMALOP_CNT_U08.Description = 'Non normal Op State';
NONNORMALOP_CNT_U08.DocUnits = 'Cnt';
NONNORMALOP_CNT_U08.EngDT = dt.u08;
NONNORMALOP_CNT_U08.EngVal = 1;
NONNORMALOP_CNT_U08.Define = 'Local';


NORMALOP_CNT_U08 = DataDict.Constant;
NORMALOP_CNT_U08.LongName = 'Normal Operation';
NORMALOP_CNT_U08.Description = 'Normal Op State';
NORMALOP_CNT_U08.DocUnits = 'Cnt';
NORMALOP_CNT_U08.EngDT = dt.u08;
NORMALOP_CNT_U08.EngVal = 0;
NORMALOP_CNT_U08.Define = 'Local';


NROFFEAT_CNT_U08 = DataDict.Constant;
NROFFEAT_CNT_U08.LongName = 'Number of Features';
NROFFEAT_CNT_U08.Description = 'Indicatess Number of Features';
NROFFEAT_CNT_U08.DocUnits = 'Cnt';
NROFFEAT_CNT_U08.EngDT = dt.u08;
NROFFEAT_CNT_U08.EngVal = 13;
NROFFEAT_CNT_U08.Define = 'Local';


SYSOPERMOTTQCMDSCAFAC_CNT_F32 = DataDict.Constant;
SYSOPERMOTTQCMDSCAFAC_CNT_F32.LongName = 'System Operation Motor Torque Command Scaling Factor';
SYSOPERMOTTQCMDSCAFAC_CNT_F32.Description = 'Factor to decide Op State';
SYSOPERMOTTQCMDSCAFAC_CNT_F32.DocUnits = 'Cnt';
SYSOPERMOTTQCMDSCAFAC_CNT_F32.EngDT = dt.float32;
SYSOPERMOTTQCMDSCAFAC_CNT_F32.EngVal = 1;
SYSOPERMOTTQCMDSCAFAC_CNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
