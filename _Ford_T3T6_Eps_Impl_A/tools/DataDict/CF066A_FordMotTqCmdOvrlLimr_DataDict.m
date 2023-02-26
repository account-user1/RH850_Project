%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Mar-2018 14:58:26       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF066A = DataDict.FDD;
CF066A.Version = '1.0.X';
CF066A.LongName = 'Ford Motor Torque Command Overlay Limiter';
CF066A.ShoName  = 'FordMotTqCmdOvrlLimr';
CF066A.DesignASIL = 'D';
CF066A.Description = [...
  'The Motor Torque Limiter Function shall sum and limit all output Torqu' ...
  'e Overlays from Ford features and output them as a value in Motor Nm t' ...
  'o be added to the Motor Torque (post-boost curve overlay)'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMotTqCmdOvrlLimrInit1 = DataDict.Runnable;
FordMotTqCmdOvrlLimrInit1.Context = 'Rte';
FordMotTqCmdOvrlLimrInit1.TimeStep = 0;
FordMotTqCmdOvrlLimrInit1.Description = 'Initialization Runnable';

FordMotTqCmdOvrlLimrPer1 = DataDict.Runnable;
FordMotTqCmdOvrlLimrPer1.Context = 'Rte';
FordMotTqCmdOvrlLimrPer1.TimeStep = 0.004;
FordMotTqCmdOvrlLimrPer1.Description = 'Periodic Runnable at 4 MilliSec';

FordMotTqCmdOvrlLimrPer2 = DataDict.Runnable;
FordMotTqCmdOvrlLimrPer2.Context = 'Rte';
FordMotTqCmdOvrlLimrPer2.TimeStep = 0.004;
FordMotTqCmdOvrlLimrPer2.Description = 'Periodic Runnable at 4 MilliSec';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMotTqCmdOvrlLimrPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi value obtained at root lay' ...
  'er of model and gives the RefTmr.'];
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


GetSigImcData_f32 = DataDict.Client;
GetSigImcData_f32.CallLocation = {'FordMotTqCmdOvrlLimrPer2'};
GetSigImcData_f32.Description = [...
  'Get data from Imc Arbitration for a signal of type float32'];
GetSigImcData_f32.Return = DataDict.CSReturn;
GetSigImcData_f32.Return.Type = 'Standard';
GetSigImcData_f32.Return.Min = 0;
GetSigImcData_f32.Return.Max = 1;
GetSigImcData_f32.Return.TestTolerance = 0;
GetSigImcData_f32.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_f32.Arguments(1) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(1).Name = 'SigId';
GetSigImcData_f32.Arguments(1).EngDT = dt.u16;
GetSigImcData_f32.Arguments(1).EngMin = 0;
GetSigImcData_f32.Arguments(1).EngMax = 65535;
GetSigImcData_f32.Arguments(1).Units = 'Cnt';
GetSigImcData_f32.Arguments(1).Direction = 'In';
GetSigImcData_f32.Arguments(1).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_f32.Arguments(2) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(2).Name = 'Data';
GetSigImcData_f32.Arguments(2).EngDT = dt.float32;
GetSigImcData_f32.Arguments(2).EngMin = -1350;
GetSigImcData_f32.Arguments(2).EngMax = 1350;
GetSigImcData_f32.Arguments(2).TestTolerance = 0.1;
GetSigImcData_f32.Arguments(2).Units = 'HwNwtMtr';
GetSigImcData_f32.Arguments(2).Direction = 'Out';
GetSigImcData_f32.Arguments(2).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_f32.Arguments(3) = DataDict.CSArguments;
GetSigImcData_f32.Arguments(3).Name = 'Sts';
GetSigImcData_f32.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_f32.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_f32.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_f32.Arguments(3).TestTolerance = 1;
GetSigImcData_f32.Arguments(3).Units = 'Cnt';
GetSigImcData_f32.Arguments(3).Direction = 'Out';
GetSigImcData_f32.Arguments(3).InitRowCol = [1  1];
GetSigImcData_f32.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];


GetSigImcData_logl = DataDict.Client;
GetSigImcData_logl.CallLocation = {'FordMotTqCmdOvrlLimrPer2'};
GetSigImcData_logl.Description = [...
  'Get data from Imc Arbitration for a signal of type boolean'];
GetSigImcData_logl.Return = DataDict.CSReturn;
GetSigImcData_logl.Return.Type = 'Standard';
GetSigImcData_logl.Return.Min = 0;
GetSigImcData_logl.Return.Max = 1;
GetSigImcData_logl.Return.TestTolerance = 0;
GetSigImcData_logl.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_logl.Arguments(1) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(1).Name = 'SigId';
GetSigImcData_logl.Arguments(1).EngDT = dt.u16;
GetSigImcData_logl.Arguments(1).EngMin = 0;
GetSigImcData_logl.Arguments(1).EngMax = 65535;
GetSigImcData_logl.Arguments(1).Units = 'Cnt';
GetSigImcData_logl.Arguments(1).Direction = 'In';
GetSigImcData_logl.Arguments(1).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_logl.Arguments(2) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(2).Name = 'Data';
GetSigImcData_logl.Arguments(2).EngDT = dt.lgc;
GetSigImcData_logl.Arguments(2).EngMin = 0;
GetSigImcData_logl.Arguments(2).EngMax = 1;
GetSigImcData_logl.Arguments(2).TestTolerance = 0;
GetSigImcData_logl.Arguments(2).Units = 'Cnt';
GetSigImcData_logl.Arguments(2).Direction = 'Out';
GetSigImcData_logl.Arguments(2).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_logl.Arguments(3) = DataDict.CSArguments;
GetSigImcData_logl.Arguments(3).Name = 'Sts';
GetSigImcData_logl.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_logl.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_logl.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_logl.Arguments(3).TestTolerance = 1;
GetSigImcData_logl.Arguments(3).Units = 'Cnt';
GetSigImcData_logl.Arguments(3).Direction = 'Out';
GetSigImcData_logl.Arguments(3).InitRowCol = [1  1];
GetSigImcData_logl.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];


GetSigImcData_s16 = DataDict.Client;
GetSigImcData_s16.CallLocation = {'FordMotTqCmdOvrlLimrPer2'};
GetSigImcData_s16.Description = [...
  'Get data from Imc Arbitration for a signal of type s16'];
GetSigImcData_s16.Return = DataDict.CSReturn;
GetSigImcData_s16.Return.Type = 'Standard';
GetSigImcData_s16.Return.Min = 0;
GetSigImcData_s16.Return.Max = 1;
GetSigImcData_s16.Return.TestTolerance = 0;
GetSigImcData_s16.Return.Description = [...
  'Signal returned from the Imc Arbitration based on Signal Id'];
GetSigImcData_s16.Arguments(1) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(1).Name = 'SigId';
GetSigImcData_s16.Arguments(1).EngDT = dt.u16;
GetSigImcData_s16.Arguments(1).EngMin = 0;
GetSigImcData_s16.Arguments(1).EngMax = 65535;
GetSigImcData_s16.Arguments(1).Units = 'Cnt';
GetSigImcData_s16.Arguments(1).Direction = 'In';
GetSigImcData_s16.Arguments(1).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(1).Description = [...
  'Defined by global constant to read the particular signal from Imc Arbi' ...
  'tration'];
GetSigImcData_s16.Arguments(2) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(2).Name = 'Data';
GetSigImcData_s16.Arguments(2).EngDT = dt.s16;
GetSigImcData_s16.Arguments(2).EngMin = -32768;
GetSigImcData_s16.Arguments(2).EngMax = 32767;
GetSigImcData_s16.Arguments(2).TestTolerance = 0;
GetSigImcData_s16.Arguments(2).Units = 'HwNwtMtr';
GetSigImcData_s16.Arguments(2).Direction = 'Out';
GetSigImcData_s16.Arguments(2).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(2).Description = [...
  'Pointer to the location where Imc Arbitration need to update the value' ...
  ' of the signal mapped to the signal identifier'];
GetSigImcData_s16.Arguments(3) = DataDict.CSArguments;
GetSigImcData_s16.Arguments(3).Name = 'Sts';
GetSigImcData_s16.Arguments(3).EngDT = enum.ImcArbnRxSts1;
GetSigImcData_s16.Arguments(3).EngMin = ImcArbnRxSts1.IMCARBNRXSTS_NODATA;
GetSigImcData_s16.Arguments(3).EngMax = ImcArbnRxSts1.IMCARBNRXSTS_INVLD;
GetSigImcData_s16.Arguments(3).TestTolerance = 1;
GetSigImcData_s16.Arguments(3).Units = 'Cnt';
GetSigImcData_s16.Arguments(3).Direction = 'Out';
GetSigImcData_s16.Arguments(3).InitRowCol = [1  1];
GetSigImcData_s16.Arguments(3).Description = [...
  'Pointer to the location where Imc Arbitration needs to update particul' ...
  'ar signal reception status'];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FordMotTqCmdOvrlLimrPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time from SimnTi value, handles counter wrappin' ...
  'g, and subtracts RefTmr,provides the TiSpan'];
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
SetNtcSts.CallLocation = {'FordMotTqCmdOvrlLimrInit1','FordMotTqCmdOvrlLimrPer1'};
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
EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = 'ECU Identifier of the ECU';
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
EcuId.ReadType = 'Rte';


FildHwTq = DataDict.IpSignal;
FildHwTq.LongName = 'Filtered Handwheel Torque';
FildHwTq.Description = [...
  'Used as the Bilinear Selection to provide the output'];
FildHwTq.DocUnits = 'HwNwtMtr';
FildHwTq.EngDT = dt.float32;
FildHwTq.EngInit = 0;
FildHwTq.EngMin = -8;
FildHwTq.EngMax = 8;
FildHwTq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FildHwTq.ReadType = 'Rte';


FildVehSpd = DataDict.IpSignal;
FildVehSpd.LongName = 'Filtered Vehicle Speed';
FildVehSpd.Description = [...
  'Processed to provide value of Limiter Vehicle Speed'];
FildVehSpd.DocUnits = 'Kph';
FildVehSpd.EngDT = dt.float32;
FildVehSpd.EngInit = 100;
FildVehSpd.EngMin = 0;
FildVehSpd.EngMax = 511;
FildVehSpd.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FildVehSpd.ReadType = 'Rte';


FordActvNiblCtrlArbnCmd = DataDict.IpSignal;
FordActvNiblCtrlArbnCmd.LongName = 'Ford Active Nibble Control Arbitration Command';
FordActvNiblCtrlArbnCmd.Description = [...
  'Used for processing of FordActvNiblCtrlTqReq'];
FordActvNiblCtrlArbnCmd.DocUnits = 'Cnt';
FordActvNiblCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordActvNiblCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordActvNiblCtrlArbnCmd.ReadIn = {'FordMotTqCmdOvrlLimrPer1'};
FordActvNiblCtrlArbnCmd.ReadType = 'Rte';


FordActvNiblCtrlFctCallSts = DataDict.IpSignal;
FordActvNiblCtrlFctCallSts.LongName = 'Ford Active Nibble Control Function Call Status';
FordActvNiblCtrlFctCallSts.Description = [...
  'Used for processing of FordActvNiblCtrlTqReq'];
FordActvNiblCtrlFctCallSts.DocUnits = 'Cnt';
FordActvNiblCtrlFctCallSts.EngDT = dt.lgc;
FordActvNiblCtrlFctCallSts.EngInit = 0;
FordActvNiblCtrlFctCallSts.EngMin = 0;
FordActvNiblCtrlFctCallSts.EngMax = 1;
FordActvNiblCtrlFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordActvNiblCtrlFctCallSts.ReadType = 'Rte';


FordActvNiblCtrlTqReq = DataDict.IpSignal;
FordActvNiblCtrlTqReq.LongName = 'Ford Active Nibble Control Torque Request';
FordActvNiblCtrlTqReq.Description = [...
  'Passed to a High Frequency Monitor for processing'];
FordActvNiblCtrlTqReq.DocUnits = 'HwNwtMtr';
FordActvNiblCtrlTqReq.EngDT = dt.s5p10;
FordActvNiblCtrlTqReq.EngInit = 0;
FordActvNiblCtrlTqReq.EngMin = -8;
FordActvNiblCtrlTqReq.EngMax = 8;
FordActvNiblCtrlTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordActvNiblCtrlTqReq.ReadType = 'Rte';


FordLaneDprtrWarnArbnCmd = DataDict.IpSignal;
FordLaneDprtrWarnArbnCmd.LongName = 'Ford Lane Departure Warning Arbitration Command';
FordLaneDprtrWarnArbnCmd.Description = [...
  'Used for processing of FordLaneDprtrWarnTqReq'];
FordLaneDprtrWarnArbnCmd.DocUnits = 'Cnt';
FordLaneDprtrWarnArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneDprtrWarnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneDprtrWarnArbnCmd.ReadIn = {'FordMotTqCmdOvrlLimrPer1'};
FordLaneDprtrWarnArbnCmd.ReadType = 'Rte';


FordLaneDprtrWarnFctCallSts = DataDict.IpSignal;
FordLaneDprtrWarnFctCallSts.LongName = 'Ford Lane Departure Warning Function Call Status';
FordLaneDprtrWarnFctCallSts.Description = [...
  'Used for processing of FordLaneDprtrWarnTqReq'];
FordLaneDprtrWarnFctCallSts.DocUnits = 'Cnt';
FordLaneDprtrWarnFctCallSts.EngDT = dt.lgc;
FordLaneDprtrWarnFctCallSts.EngInit = 0;
FordLaneDprtrWarnFctCallSts.EngMin = 0;
FordLaneDprtrWarnFctCallSts.EngMax = 1;
FordLaneDprtrWarnFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordLaneDprtrWarnFctCallSts.ReadType = 'Rte';


FordLaneDprtrWarnTqReq = DataDict.IpSignal;
FordLaneDprtrWarnTqReq.LongName = 'Ford Lane Departure Warning Torque Request';
FordLaneDprtrWarnTqReq.Description = [...
  'Passed to a High Frequency Monitor for processing'];
FordLaneDprtrWarnTqReq.DocUnits = 'HwNwtMtr';
FordLaneDprtrWarnTqReq.EngDT = dt.s5p10;
FordLaneDprtrWarnTqReq.EngInit = 0;
FordLaneDprtrWarnTqReq.EngMin = -8;
FordLaneDprtrWarnTqReq.EngMax = 8;
FordLaneDprtrWarnTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordLaneDprtrWarnTqReq.ReadType = 'Rte';


FordLatCtrlArbnCmd = DataDict.IpSignal;
FordLatCtrlArbnCmd.LongName = 'Ford Lateral Control Arbitration Command';
FordLatCtrlArbnCmd.Description = [...
  'Used for processing of FordLatCtrlTqReq'];
FordLatCtrlArbnCmd.DocUnits = 'Cnt';
FordLatCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordLatCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLatCtrlArbnCmd.ReadIn = {'FordMotTqCmdOvrlLimrPer1'};
FordLatCtrlArbnCmd.ReadType = 'Rte';


FordLatCtrlFctCallSts = DataDict.IpSignal;
FordLatCtrlFctCallSts.LongName = 'Ford Lateral Control Function Call Status';
FordLatCtrlFctCallSts.Description = [...
  'Used for processing of FordLatCtrlTqReq'];
FordLatCtrlFctCallSts.DocUnits = 'Cnt';
FordLatCtrlFctCallSts.EngDT = dt.lgc;
FordLatCtrlFctCallSts.EngInit = 0;
FordLatCtrlFctCallSts.EngMin = 0;
FordLatCtrlFctCallSts.EngMax = 1;
FordLatCtrlFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordLatCtrlFctCallSts.ReadType = 'Rte';


FordLatCtrlTqReq = DataDict.IpSignal;
FordLatCtrlTqReq.LongName = 'Ford Lateral Control Torque Request';
FordLatCtrlTqReq.Description = [...
  'Processed to obtain the limited Torque Request'];
FordLatCtrlTqReq.DocUnits = 'HwNwtMtr';
FordLatCtrlTqReq.EngDT = dt.s5p10;
FordLatCtrlTqReq.EngInit = 0;
FordLatCtrlTqReq.EngMin = -8;
FordLatCtrlTqReq.EngMax = 8;
FordLatCtrlTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordLatCtrlTqReq.ReadType = 'Rte';


FordPullDriftCmpArbnCmd = DataDict.IpSignal;
FordPullDriftCmpArbnCmd.LongName = 'Ford Pull Drift Compensation Arbitration Command';
FordPullDriftCmpArbnCmd.Description = [...
  'Used for processing of FordPullDriftCmpTqReq'];
FordPullDriftCmpArbnCmd.DocUnits = 'Cnt';
FordPullDriftCmpArbnCmd.EngDT = enum.FordArbnCmd1;
FordPullDriftCmpArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordPullDriftCmpArbnCmd.ReadIn = {'FordMotTqCmdOvrlLimrPer1'};
FordPullDriftCmpArbnCmd.ReadType = 'Rte';


FordPullDriftCmpFctCallSts = DataDict.IpSignal;
FordPullDriftCmpFctCallSts.LongName = 'Ford Pull Drift Compensation Function Call Status';
FordPullDriftCmpFctCallSts.Description = [...
  'Used for processing of FordPullDriftCmpTqReq'];
FordPullDriftCmpFctCallSts.DocUnits = 'Cnt';
FordPullDriftCmpFctCallSts.EngDT = dt.lgc;
FordPullDriftCmpFctCallSts.EngInit = 0;
FordPullDriftCmpFctCallSts.EngMin = 0;
FordPullDriftCmpFctCallSts.EngMax = 1;
FordPullDriftCmpFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordPullDriftCmpFctCallSts.ReadType = 'Rte';


FordPullDriftCmpTqReq = DataDict.IpSignal;
FordPullDriftCmpTqReq.LongName = 'Ford Pull Drift Compensation Torque Request';
FordPullDriftCmpTqReq.Description = [...
  'Processed to obtain Limited Torque Request'];
FordPullDriftCmpTqReq.DocUnits = 'HwNwtMtr';
FordPullDriftCmpTqReq.EngDT = dt.s7p8;
FordPullDriftCmpTqReq.EngInit = 0;
FordPullDriftCmpTqReq.EngMin = -8;
FordPullDriftCmpTqReq.EngMax = 8;
FordPullDriftCmpTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordPullDriftCmpTqReq.ReadType = 'Rte';


FordSteerTqDstbcRejctnArbnCmd = DataDict.IpSignal;
FordSteerTqDstbcRejctnArbnCmd.LongName = 'Ford Steering Torque Disturbance Rejection Arbitration Command';
FordSteerTqDstbcRejctnArbnCmd.Description = [...
  'Used for processing of FordSteerTqDstbcRejctnTqReq'];
FordSteerTqDstbcRejctnArbnCmd.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnArbnCmd.EngDT = enum.FordArbnCmd1;
FordSteerTqDstbcRejctnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordSteerTqDstbcRejctnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordSteerTqDstbcRejctnArbnCmd.ReadIn = {'FordMotTqCmdOvrlLimrPer1'};
FordSteerTqDstbcRejctnArbnCmd.ReadType = 'Rte';


FordSteerTqDstbcRejctnFctCallSts = DataDict.IpSignal;
FordSteerTqDstbcRejctnFctCallSts.LongName = 'Ford Steering Torque Disturbance Rejection Function Call Status';
FordSteerTqDstbcRejctnFctCallSts.Description = [...
  'Used for processing of FordSteerTqDstbcRejctnTqReq'];
FordSteerTqDstbcRejctnFctCallSts.DocUnits = 'Cnt';
FordSteerTqDstbcRejctnFctCallSts.EngDT = dt.lgc;
FordSteerTqDstbcRejctnFctCallSts.EngInit = 0;
FordSteerTqDstbcRejctnFctCallSts.EngMin = 0;
FordSteerTqDstbcRejctnFctCallSts.EngMax = 1;
FordSteerTqDstbcRejctnFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordSteerTqDstbcRejctnFctCallSts.ReadType = 'Rte';


FordSteerTqDstbcRejctnTqReq = DataDict.IpSignal;
FordSteerTqDstbcRejctnTqReq.LongName = 'Ford Steering Torque Disturbance Rejection Torque Request';
FordSteerTqDstbcRejctnTqReq.Description = [...
  'Processed to provide the Limited Torque Request'];
FordSteerTqDstbcRejctnTqReq.DocUnits = 'HwNwtMtr';
FordSteerTqDstbcRejctnTqReq.EngDT = dt.s5p10;
FordSteerTqDstbcRejctnTqReq.EngInit = 0;
FordSteerTqDstbcRejctnTqReq.EngMin = -8;
FordSteerTqDstbcRejctnTqReq.EngMax = 8;
FordSteerTqDstbcRejctnTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
FordSteerTqDstbcRejctnTqReq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = [...
  'Passed to Steering Reaction Limiter for processing'];
HwVel.DocUnits = 'HwDegPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
HwVel.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = [...
  'Processed to provide Limiter Vehicle Speed'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 1;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'FordMotTqCmdOvrlLimrPer2','FordMotTqCmdOvrlLimrPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordMotTqCmdOvrl = DataDict.OpSignal;
FordMotTqCmdOvrl.LongName = 'Ford Motor Torque Command Overlay';
FordMotTqCmdOvrl.Description = [...
  'Limited Output obtained by the sum of all torque requests'];
FordMotTqCmdOvrl.DocUnits = 'MotNwtMtr';
FordMotTqCmdOvrl.SwcShoName = 'FordMotTqCmdOvrlLimr';
FordMotTqCmdOvrl.EngDT = dt.float32;
FordMotTqCmdOvrl.EngInit = 0;
FordMotTqCmdOvrl.EngMin = -8;
FordMotTqCmdOvrl.EngMax = 8;
FordMotTqCmdOvrl.TestTolerance = 0;
FordMotTqCmdOvrl.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};
FordMotTqCmdOvrl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ActvNiblCtrlFctCallSts = DataDict.IRV;
ActvNiblCtrlFctCallSts.LongName = 'Active Nibble Control Function Call Status';
ActvNiblCtrlFctCallSts.Description = [...
  'Active Nibble Control Function Call Status for processing'];
ActvNiblCtrlFctCallSts.DocUnits = 'Cnt';
ActvNiblCtrlFctCallSts.EngDT = dt.lgc;
ActvNiblCtrlFctCallSts.EngInit = 0;
ActvNiblCtrlFctCallSts.EngMin = 0;
ActvNiblCtrlFctCallSts.EngMax = 1;
ActvNiblCtrlFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
ActvNiblCtrlFctCallSts.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


ActvNiblCtrlTqReq = DataDict.IRV;
ActvNiblCtrlTqReq.LongName = 'Active Nibble Control Torque Request';
ActvNiblCtrlTqReq.Description = [...
  'Active Nibble Control Torque Request for processing'];
ActvNiblCtrlTqReq.DocUnits = 'HwNwtMtr';
ActvNiblCtrlTqReq.EngDT = dt.s5p10;
ActvNiblCtrlTqReq.EngInit = 0;
ActvNiblCtrlTqReq.EngMin = -8;
ActvNiblCtrlTqReq.EngMax = 8;
ActvNiblCtrlTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
ActvNiblCtrlTqReq.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


FildHwTqVal = DataDict.IRV;
FildHwTqVal.LongName = 'Filter Handwheel Torque Value';
FildHwTqVal.Description = [...
  'Filter Handwheel Torque for processing'];
FildHwTqVal.DocUnits = 'HwNwtMtr';
FildHwTqVal.EngDT = dt.float32;
FildHwTqVal.EngInit = 0;
FildHwTqVal.EngMin = -8;
FildHwTqVal.EngMax = 8;
FildHwTqVal.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
FildHwTqVal.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


FildVehSpdVal = DataDict.IRV;
FildVehSpdVal.LongName = 'Filter Vehicle Speed Value';
FildVehSpdVal.Description = [...
  'Filter Vehicle Speed for processing'];
FildVehSpdVal.DocUnits = 'Kph';
FildVehSpdVal.EngDT = dt.float32;
FildVehSpdVal.EngInit = 100;
FildVehSpdVal.EngMin = 0;
FildVehSpdVal.EngMax = 500;
FildVehSpdVal.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
FildVehSpdVal.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


HwVelVal = DataDict.IRV;
HwVelVal.LongName = 'Handwheel Velocity Value';
HwVelVal.Description = 'Handwheel Velocity for processing';
HwVelVal.DocUnits = 'HwDegPerSec';
HwVelVal.EngDT = dt.float32;
HwVelVal.EngInit = 0;
HwVelVal.EngMin = -42;
HwVelVal.EngMax = 42;
HwVelVal.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
HwVelVal.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


LaneDprtrWarnFctCallSts = DataDict.IRV;
LaneDprtrWarnFctCallSts.LongName = 'Lane Departure Warning Function Call Status';
LaneDprtrWarnFctCallSts.Description = [...
  'Lane Departure Warning Function Call Status for processing'];
LaneDprtrWarnFctCallSts.DocUnits = 'Cnt';
LaneDprtrWarnFctCallSts.EngDT = dt.lgc;
LaneDprtrWarnFctCallSts.EngInit = 0;
LaneDprtrWarnFctCallSts.EngMin = 0;
LaneDprtrWarnFctCallSts.EngMax = 1;
LaneDprtrWarnFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
LaneDprtrWarnFctCallSts.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


LaneDprtrWarnTqReq = DataDict.IRV;
LaneDprtrWarnTqReq.LongName = 'Lane Departure Warning Torque Request';
LaneDprtrWarnTqReq.Description = [...
  'Lane Departure Warning Torque Request for processing'];
LaneDprtrWarnTqReq.DocUnits = 'HwNwtMtr';
LaneDprtrWarnTqReq.EngDT = dt.s5p10;
LaneDprtrWarnTqReq.EngInit = 0;
LaneDprtrWarnTqReq.EngMin = -8;
LaneDprtrWarnTqReq.EngMax = 8;
LaneDprtrWarnTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
LaneDprtrWarnTqReq.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


LatCtrlFctCallSts = DataDict.IRV;
LatCtrlFctCallSts.LongName = 'Lateral Control Function Call Status';
LatCtrlFctCallSts.Description = [...
  'Lateral Control Function Call Status for processing'];
LatCtrlFctCallSts.DocUnits = 'Cnt';
LatCtrlFctCallSts.EngDT = dt.lgc;
LatCtrlFctCallSts.EngInit = 0;
LatCtrlFctCallSts.EngMin = 0;
LatCtrlFctCallSts.EngMax = 1;
LatCtrlFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
LatCtrlFctCallSts.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


LatCtrlTqReq = DataDict.IRV;
LatCtrlTqReq.LongName = 'Lateral Control Torque Request';
LatCtrlTqReq.Description = [...
  'Lateral Control Torque Request for processing'];
LatCtrlTqReq.DocUnits = 'HwNwtMtr';
LatCtrlTqReq.EngDT = dt.s5p10;
LatCtrlTqReq.EngInit = 0;
LatCtrlTqReq.EngMin = -8;
LatCtrlTqReq.EngMax = 8;
LatCtrlTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
LatCtrlTqReq.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


PullDriftCmpFctCallSts = DataDict.IRV;
PullDriftCmpFctCallSts.LongName = 'Pull Drift Compensation Function Call Status';
PullDriftCmpFctCallSts.Description = [...
  'Pull Drift Compensation Function Call Status for processing'];
PullDriftCmpFctCallSts.DocUnits = 'Cnt';
PullDriftCmpFctCallSts.EngDT = dt.lgc;
PullDriftCmpFctCallSts.EngInit = 0;
PullDriftCmpFctCallSts.EngMin = 0;
PullDriftCmpFctCallSts.EngMax = 1;
PullDriftCmpFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
PullDriftCmpFctCallSts.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


PullDriftCmpTqReq = DataDict.IRV;
PullDriftCmpTqReq.LongName = 'Pull Drift Compensation Torque Request';
PullDriftCmpTqReq.Description = [...
  'Pull Drift Compensation Torque Request for processing'];
PullDriftCmpTqReq.DocUnits = 'HwNwtMtr';
PullDriftCmpTqReq.EngDT = dt.s7p8;
PullDriftCmpTqReq.EngInit = 0;
PullDriftCmpTqReq.EngMin = -8;
PullDriftCmpTqReq.EngMax = 8;
PullDriftCmpTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
PullDriftCmpTqReq.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


SteerTqDstbcRejctnFctCallSts = DataDict.IRV;
SteerTqDstbcRejctnFctCallSts.LongName = 'Steering Torque Disturbance Rejection Function Call Status';
SteerTqDstbcRejctnFctCallSts.Description = [...
  'Steering Torque Disturbance Rejection Function Call Status for process' ...
  'ing'];
SteerTqDstbcRejctnFctCallSts.DocUnits = 'Cnt';
SteerTqDstbcRejctnFctCallSts.EngDT = dt.lgc;
SteerTqDstbcRejctnFctCallSts.EngInit = 0;
SteerTqDstbcRejctnFctCallSts.EngMin = 0;
SteerTqDstbcRejctnFctCallSts.EngMax = 1;
SteerTqDstbcRejctnFctCallSts.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
SteerTqDstbcRejctnFctCallSts.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


SteerTqDstbcRejctnTqReq = DataDict.IRV;
SteerTqDstbcRejctnTqReq.LongName = 'Steering Torque Disturbance Rejection Torque Request';
SteerTqDstbcRejctnTqReq.Description = [...
  'Steering Torque Disturbance Rejection Torque Request for processing'];
SteerTqDstbcRejctnTqReq.DocUnits = 'HwNwtMtr';
SteerTqDstbcRejctnTqReq.EngDT = dt.s5p10;
SteerTqDstbcRejctnTqReq.EngInit = 0;
SteerTqDstbcRejctnTqReq.EngMin = -8;
SteerTqDstbcRejctnTqReq.EngMax = 8;
SteerTqDstbcRejctnTqReq.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
SteerTqDstbcRejctnTqReq.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};


VehSpdVldVal = DataDict.IRV;
VehSpdVldVal.LongName = 'Vehicle Speed Valid Value';
VehSpdVldVal.Description = 'Vehicle Speed Valid for processing';
VehSpdVldVal.DocUnits = 'Cnt';
VehSpdVldVal.EngDT = dt.lgc;
VehSpdVldVal.EngInit = 1;
VehSpdVldVal.EngMin = 0;
VehSpdVldVal.EngMax = 1;
VehSpdVldVal.ReadIn = {'FordMotTqCmdOvrlLimrPer2'};
VehSpdVldVal.WrittenIn = {'FordMotTqCmdOvrlLimrPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMotTqCmdOvrlLimrDftSpdRate = DataDict.Calibration;
FordMotTqCmdOvrlLimrDftSpdRate.LongName = 'Ford Motor Torque Command Overlay Limiter Default Speed Rate';
FordMotTqCmdOvrlLimrDftSpdRate.Description = 'Default Speed Rate';
FordMotTqCmdOvrlLimrDftSpdRate.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrDftSpdRate.EngDT = dt.float32;
FordMotTqCmdOvrlLimrDftSpdRate.EngVal = 40;
FordMotTqCmdOvrlLimrDftSpdRate.EngMin = 0;
FordMotTqCmdOvrlLimrDftSpdRate.EngMax = 511;
FordMotTqCmdOvrlLimrDftSpdRate.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrDftSpdRate.CustomerVisible = false;
FordMotTqCmdOvrlLimrDftSpdRate.Online = false;
FordMotTqCmdOvrlLimrDftSpdRate.Impact = 'H';
FordMotTqCmdOvrlLimrDftSpdRate.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrDftSpdRate.GraphLink = {''};
FordMotTqCmdOvrlLimrDftSpdRate.Monotony = 'None';
FordMotTqCmdOvrlLimrDftSpdRate.MaxGrad = Inf;
FordMotTqCmdOvrlLimrDftSpdRate.PortName = 'FordMotTqCmdOvrlLimrDftSpdRate';


FordMotTqCmdOvrlLimrDftSpdRcvrRate = DataDict.Calibration;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.LongName = 'Ford Motor Torque Command Overlay Limiter Default Recover Speed Rate';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.Description = 'Default Recover Speed Rate';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.EngDT = dt.float32;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.EngVal = 40;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.EngMin = 0;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.EngMax = 511;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.CustomerVisible = false;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.Online = false;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.Impact = 'H';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.GraphLink = {''};
FordMotTqCmdOvrlLimrDftSpdRcvrRate.Monotony = 'None';
FordMotTqCmdOvrlLimrDftSpdRcvrRate.MaxGrad = Inf;
FordMotTqCmdOvrlLimrDftSpdRcvrRate.PortName = 'FordMotTqCmdOvrlLimrDftSpdRcvrRate';


FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Active Nibble Control DC Torque Trend Threshold';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.Description = [...
  'Provide Fault presence based on conditions'];
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.DocUnits = 'Uls';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.EngVal = 1;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.EngMax = 20;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlDcTqTrendThd';


FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Active Nibble Control Low Frequency Time Threshold';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.Description = [...
  'Provides Timer Threshold based on scaling'];
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.DocUnits = 'Sec';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.EngVal = 0.1;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.EngMax = 500;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlLoFrqTiThd';


FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Active Nibble Control Maximum Motor Torque';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.Description = [...
  'Threshold to set or reset Maximum Torque Request Fault'];
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.DocUnits = 'MotNwtMtr';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.EngVal = 5;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.EngMax = 60;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrActvNiblCtrlMaxMotTq';


FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Lane Departure Warning DC Torque Trend Threshold';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.Description = [...
  'Provide Fault presence based on conditions'];
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.DocUnits = 'Uls';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.EngVal = 1.5;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.EngMax = 20;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnDcTqTrendThd';


FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Lane Departure Warning Low Frequency Time Threshold';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.Description = [...
  'Provides Timer Threshold based on scaling'];
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.DocUnits = 'Sec';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.EngVal = 0.033;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.EngMax = 500;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnLoFrqTiThd';


FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Lane Departure Warning Maximum Motor Torque';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.Description = [...
  'Threshold to set or reset Maximum Torque Request LDW Fault'];
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.DocUnits = 'MotNwtMtr';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.EngVal = 5.5;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.EngMax = 60;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrLaneDprtrWarnMaxMotTq';


FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Torque Trend Alpha';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.Description = [...
  'Used for scaling of difference of Torque Request and Previous value of' ...
  ' Torque Request'];
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.DocUnits = 'Uls';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.EngVal = 1;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.EngMax = 1;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrTqTrendAlpha';


FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq = DataDict.Calibration;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.LongName = 'Ford Motor Torque Command Overlay Limiter High Frequency Monitor Zero Band Torque';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.Description = [...
  'Threshold based on conditions provide the HFM low Frequency State'];
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.DocUnits = 'MotNwtMtr';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.EngVal = 1;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.EngMin = 0;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.EngMax = 20;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.CustomerVisible = false;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.Online = false;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.Impact = 'H';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.GraphLink = {''};
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.Monotony = 'None';
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq.PortName = 'FordMotTqCmdOvrlLimrHiFrqMonrZeroBandTq';


FordMotTqCmdOvrlLimrHwVelLoPassFrq = DataDict.Calibration;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.LongName = 'Ford Motor Torque Command Overlay Limiter Handwheel Velocity Low Pass Frequency';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.Description = 'Frequency of low pass filter';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.DocUnits = 'Hz';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.EngDT = dt.float32;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.EngVal = 0;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.EngMin = 0;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.EngMax = 50;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.CustomerVisible = false;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.Online = false;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.Impact = 'H';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.GraphLink = {''};
FordMotTqCmdOvrlLimrHwVelLoPassFrq.Monotony = 'None';
FordMotTqCmdOvrlLimrHwVelLoPassFrq.MaxGrad = Inf;
FordMotTqCmdOvrlLimrHwVelLoPassFrq.PortName = 'FordMotTqCmdOvrlLimrHwVelLoPassFrq';


FordMotTqCmdOvrlLimrLatCtrlBwY = DataDict.Calibration;
FordMotTqCmdOvrlLimrLatCtrlBwY.LongName = 'Ford Motor Torque Command Overlay Limiter Lateral Control Bandwidth Y';
FordMotTqCmdOvrlLimrLatCtrlBwY.Description = [...
  'Provide Bandwidth value for Saturation of rated Lateral Control Limite' ...
  'd Torque Request'];
FordMotTqCmdOvrlLimrLatCtrlBwY.DocUnits = 'HwNwtMtr';
FordMotTqCmdOvrlLimrLatCtrlBwY.EngDT = dt.s5p10;
FordMotTqCmdOvrlLimrLatCtrlBwY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordMotTqCmdOvrlLimrLatCtrlBwY.EngMin = 0;
FordMotTqCmdOvrlLimrLatCtrlBwY.EngMax = 8;
FordMotTqCmdOvrlLimrLatCtrlBwY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrLatCtrlBwY.CustomerVisible = false;
FordMotTqCmdOvrlLimrLatCtrlBwY.Online = false;
FordMotTqCmdOvrlLimrLatCtrlBwY.Impact = 'H';
FordMotTqCmdOvrlLimrLatCtrlBwY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrLatCtrlBwY.GraphLink = {'FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX'};
FordMotTqCmdOvrlLimrLatCtrlBwY.Monotony = 'None';
FordMotTqCmdOvrlLimrLatCtrlBwY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrLatCtrlBwY.PortName = 'FordMotTqCmdOvrlLimrLatCtrlBwY';


FordMotTqCmdOvrlLimrLatCtrlTqRateY = DataDict.Calibration;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.LongName = 'Ford Motor Torque Command Overlay Limiter Lateral Control Torque Rate Y';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.Description = [...
  'Provide value to rate limit the Lateral Control Torque Request'];
FordMotTqCmdOvrlLimrLatCtrlTqRateY.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.EngDT = dt.s16;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.EngVal =  ...
   [5                5                5                5                5                5                5                5];
FordMotTqCmdOvrlLimrLatCtrlTqRateY.EngMin = 0;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.EngMax = 8;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.CustomerVisible = false;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.Online = false;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.Impact = 'H';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.GraphLink = {'FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX'};
FordMotTqCmdOvrlLimrLatCtrlTqRateY.Monotony = 'None';
FordMotTqCmdOvrlLimrLatCtrlTqRateY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrLatCtrlTqRateY.PortName = 'FordMotTqCmdOvrlLimrLatCtrlTqRateY';


FordMotTqCmdOvrlLimrLatCtrlTqSatnY = DataDict.Calibration;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.LongName = 'Ford Motor Torque Command Overlay Limiter Lateral Control Torque Saturation Y';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.Description = [...
  'Provide value to limit the Lateral Control Torque Request'];
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.DocUnits = 'HwNwtMtr';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.EngDT = dt.s16;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.EngMin = 0;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.EngMax = 8;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.CustomerVisible = false;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.Online = false;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.Impact = 'H';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.GraphLink = {'FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX'};
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.Monotony = 'None';
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrLatCtrlTqSatnY.PortName = 'FordMotTqCmdOvrlLimrLatCtrlTqSatnY';


FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX = DataDict.Calibration;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.LongName = 'Ford Motor Torque Command Overlay Limiter Lateral Control Vehicle Speed Break Point X';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.Description = [...
  'Lateral Control Vehicle Speed Break Points X table '];
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.EngDT = dt.u9p7;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.EngVal =  ...
   [0               15               60              100              150              180              200              250];
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.EngMin = 0;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.EngMax = 255;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.CustomerVisible = false;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.Online = false;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.Impact = 'H';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.GraphLink = {''};
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.MaxGrad = Inf;
FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX.PortName = 'FordMotTqCmdOvrlLimrLatCtrlVehSpdBreakPtX';


FordMotTqCmdOvrlLimrPullDriftCmpTqRateY = DataDict.Calibration;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.LongName = 'Ford Motor Torque Command Overlay Limiter Pull Drift Compensation Torque Rate Y';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.Description = 'Low Frequency Rate table Y';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.EngDT = dt.s16;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.EngVal =  ...
   [1                1                1                1                1                1                1                1];
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.EngMin = 0;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.EngMax = 8;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.CustomerVisible = false;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.Online = false;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.Impact = 'H';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.GraphLink = {'FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX'};
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.Monotony = 'None';
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrPullDriftCmpTqRateY.PortName = 'FordMotTqCmdOvrlLimrPullDriftCmpTqRateY';


FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY = DataDict.Calibration;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.LongName = 'Ford Motor Torque Command Overlay Limiter Pull Drift Compensation Torque Saturation Y';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.Description = 'Low Frequency Saturation Table Y';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.DocUnits = 'HwNwtMtr';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.EngDT = dt.s16;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.EngVal =  ...
   [3                3                3                3                3                3                3                3];
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.EngMin = 0;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.EngMax = 8;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.CustomerVisible = false;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.Online = false;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.Impact = 'H';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.GraphLink = {'FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX'};
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.Monotony = 'None';
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY.PortName = 'FordMotTqCmdOvrlLimrPullDriftCmpTqSatnY';


FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX = DataDict.Calibration;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.LongName = 'Ford Motor Torque Command Overlay Limiter Pull Drift Compensation Vehicle Speed Break Point X';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.Description = 'Laow Frequency Y Table';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.EngDT = dt.u16;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.EngVal =  ...
   [0               15               60              100              150              180              200              250];
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.EngMin = 0;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.EngMax = 255;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.CustomerVisible = false;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.Online = false;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.Impact = 'H';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.GraphLink = {''};
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.MaxGrad = Inf;
FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX.PortName = 'FordMotTqCmdOvrlLimrPullDriftCmpVehSpdBreakPtX';


FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combine Amplitude Vehicle Speed Limit X';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.Description = [...
  'Combined SRL Torque Amplitude Limit'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.EngDT = dt.u16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.EngVal =  ...
   [0                0                0                0                0                0                0                0];
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.EngMax = 200;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX';


FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.LongName = 'Ford Motor Torque Command Overlay Limiter Steer  / Steering Reaction Limiter Combine Amplitude Vehicle Speed / Speed Limit Y';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.Description = [...
  'Combined SRL Torque Amplitude Limit'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.EngDT = dt.u16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.EngVal =  ...
   [0               15               40               70              100              150              200              250];
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.EngMax = 300;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.GraphLink = {'FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimX'};
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombAmpVehSpdLimY';


FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combine Overrun Ramp Rate Handwheel Velocity Error X';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.Description = [...
  'Combined SRL Overrun Ramp Rate Out Table X'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.EngDT = dt.u16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.EngVal =  ...
   [0               25               50              100              170              250];
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.EngMax = 1000;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX';


FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combine Overrun Ramp Rate Out Y';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.Description = [...
  'Combined SRL Overrun Ramp Rate Out Y table'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.EngDT = dt.u16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.EngVal =  ...
   [0               35               70              130              300              600];
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.EngMax = 1000;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.GraphLink = {'FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateHwVelErrX'};
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombOvrrunRampRateOutY';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Amplitude Overrun';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.Description = [...
  'Combined SRL Amplitude Fraction Overrun'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.DocUnits = 'Uls';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.EngVal = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.EngMax = 1;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpOvrrun';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Amplitude Fraction Recovery';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.Description = [...
  'Combined SRL Amplitude Fraction for Recovery'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.DocUnits = 'Uls';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.EngVal = 0.5;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.EngMax = 1;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdAmpRcvry';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Fixed Overrun Ramp Rate';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.Description = [...
  'Combined SRL Fixed Overrun Ramp Rate'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.EngVal = 8;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.EngMax = 100;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdFixdOvrrunRampRate';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Limit Hysteresis';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.Description = [...
  'Combined SRL Velocity Hysteresis Limit'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.DocUnits = 'HwDegPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.EngVal = 0.05;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.EngMax = 1;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimHys';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Limit Torque X';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.Description = 'Combined SRL Torque Limit';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.DocUnits = 'HwNwtMtr';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.EngDT = dt.s16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.EngVal =  ...
   [-6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6
    -6               -5               -4               -2                0                2                4                5                6];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.EngMin = -8;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.EngMax = 8;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Limiter Handwheel Velocity Y';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.Description = [...
  'Combined SRL Handwheel Velocity Limit Y Table'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.DocUnits = 'HwDegPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.EngDT = dt.s16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.EngVal =  ...
   [-20               10               20               30               80              100              100              100              100
    -20               10               20               30               80              100              100              100              100
    -20               10               20               20               80              100              100              100              100
    -20               10               20               20               80              100              100              100              100
    -40                5               10               15               60               80               80               80               80
    -40                0                5               10               30               40               40               40               40
    -40                0                5               10               20               30               30               30               30
    -40                0                5               10               20               30               30               30               30];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.EngMin = -500;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.EngMax = 500;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.GraphLink = {'FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimTqX','FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd'};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.Monotony = 'Increasing';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrHwVelY';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Limiter Vehicle Speed X';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.Description = [...
  'Combined SRL Hanhdwheel Speed Hysteresis Limit'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.DocUnits = 'Kph';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.EngDT = dt.u16;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.EngVal =  ...
   [0               15               40               70              100              150              200              250];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.EngMax = 300;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.Monotony = 'Strictly_Increasing';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdLimrVehSpd';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Recovery Ideal Ramp Rate';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.Description = [...
  'Combined SRL Recovery Ramp Rate Ideal threshold'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.EngVal = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.EngMax = 100;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryIdealRampRate';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1 = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Recovery Ramp Rate Stage 1';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.Description = [...
  'Combined SRL Recovery Ramp Rate Stage 1'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.EngVal = 20;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.EngMax = 100;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg1';


FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2 = DataDict.Calibration;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.LongName = 'Ford Motor Torque Command Overlay Limiter Steering Reaction Limiter Combined Recovery Ramp Rate Stage 2';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.Description = [...
  'Combined SRL Recovery Ramp Rate Stage 2'];
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.DocUnits = 'HwNwtMtrPerSec';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.EngDT = dt.float32;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.EngVal = 40;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.EngMin = 0;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.EngMax = 100;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.Cardinality = 'Cmn';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.CustomerVisible = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.Online = false;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.Impact = 'H';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.TuningOwner = 'CSE';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.GraphLink = {''};
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.Monotony = 'None';
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.MaxGrad = Inf;
FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2.PortName = 'FordMotTqCmdOvrlLimrSteerReactnLimrCombdRcvryRampRateStg2';



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
ActvNiblCtrlLoFrqElpdTiVari = DataDict.PIM;
ActvNiblCtrlLoFrqElpdTiVari.LongName = 'Active Nibble Control Low Frequency Elapsed Time Variable';
ActvNiblCtrlLoFrqElpdTiVari.Description = [...
  'Active Nibble Control Low Frequency Elapsed Time Variable'];
ActvNiblCtrlLoFrqElpdTiVari.DocUnits = 'Cnt';
ActvNiblCtrlLoFrqElpdTiVari.EngDT = dt.u32;
ActvNiblCtrlLoFrqElpdTiVari.EngMin = 0;
ActvNiblCtrlLoFrqElpdTiVari.EngMax = 4294967295;
ActvNiblCtrlLoFrqElpdTiVari.InitRowCol = [1  1];


ActvNiblCtrlLoFrqFlt = DataDict.PIM;
ActvNiblCtrlLoFrqFlt.LongName = 'Active Nibble Control Low Frequency Fault';
ActvNiblCtrlLoFrqFlt.Description = [...
  'Describes the HFM Low Frequency Fault'];
ActvNiblCtrlLoFrqFlt.DocUnits = 'Cnt';
ActvNiblCtrlLoFrqFlt.EngDT = dt.u08;
ActvNiblCtrlLoFrqFlt.EngMin = 0;
ActvNiblCtrlLoFrqFlt.EngMax = 3;
ActvNiblCtrlLoFrqFlt.InitRowCol = [1  1];


ActvNiblCtrlLoFrqSt = DataDict.PIM;
ActvNiblCtrlLoFrqSt.LongName = 'Active Nibble Control Low Frequency State';
ActvNiblCtrlLoFrqSt.Description = [...
  'Active Nibble Control Low Frequency State'];
ActvNiblCtrlLoFrqSt.DocUnits = 'Cnt';
ActvNiblCtrlLoFrqSt.EngDT = dt.u08;
ActvNiblCtrlLoFrqSt.EngMin = 0;
ActvNiblCtrlLoFrqSt.EngMax = 3;
ActvNiblCtrlLoFrqSt.InitRowCol = [1  1];


ActvNiblCtrlLoFrqTmrFlgVari = DataDict.PIM;
ActvNiblCtrlLoFrqTmrFlgVari.LongName = 'Active Nibble Control Low Frequency Timer Flag Variable';
ActvNiblCtrlLoFrqTmrFlgVari.Description = 'Set or reset the ANC fault flag';
ActvNiblCtrlLoFrqTmrFlgVari.DocUnits = 'Cnt';
ActvNiblCtrlLoFrqTmrFlgVari.EngDT = dt.lgc;
ActvNiblCtrlLoFrqTmrFlgVari.EngMin = 0;
ActvNiblCtrlLoFrqTmrFlgVari.EngMax = 1;
ActvNiblCtrlLoFrqTmrFlgVari.InitRowCol = [1  1];


ActvNiblCtrlLoFrqTmrVari = DataDict.PIM;
ActvNiblCtrlLoFrqTmrVari.LongName = 'Active Nibble Control Low Frequency Timer Variable';
ActvNiblCtrlLoFrqTmrVari.Description = 'Provides the timer value';
ActvNiblCtrlLoFrqTmrVari.DocUnits = 'Cnt';
ActvNiblCtrlLoFrqTmrVari.EngDT = dt.u32;
ActvNiblCtrlLoFrqTmrVari.EngMin = 0;
ActvNiblCtrlLoFrqTmrVari.EngMax = 4294967295;
ActvNiblCtrlLoFrqTmrVari.InitRowCol = [1  1];


DftVehSpd = DataDict.PIM;
DftVehSpd.LongName = 'Default Vehicle Speed';
DftVehSpd.Description = [...
  'To determine Default Vehicle Speed Rate'];
DftVehSpd.DocUnits = 'Kph';
DftVehSpd.EngDT = dt.float32;
DftVehSpd.EngMin = 0;
DftVehSpd.EngMax = 511;
DftVehSpd.InitRowCol = [1  1];


HwVelFil = DataDict.PIM;
HwVelFil.LongName = 'Handwheel Velocity Filter';
HwVelFil.Description = 'Handwheel Velocity Low Pass Filter';
HwVelFil.DocUnits = 'Uls';
HwVelFil.EngDT = struct.FilLpRec1;
HwVelFil.EngMin = [struct('FilSt',-42,'FilGain',0)];
HwVelFil.EngMax = [struct('FilSt',42,'FilGain',1)];
HwVelFil.InitRowCol = [1  1];


LaneDprtrWarnLoFrqElpdTiVari = DataDict.PIM;
LaneDprtrWarnLoFrqElpdTiVari.LongName = 'Lane Departure Warning Low Frequency Elapsed Time Variable';
LaneDprtrWarnLoFrqElpdTiVari.Description = [...
  'Lane Departure Warning Low Frequency Elapsed Timer'];
LaneDprtrWarnLoFrqElpdTiVari.DocUnits = 'Cnt';
LaneDprtrWarnLoFrqElpdTiVari.EngDT = dt.u32;
LaneDprtrWarnLoFrqElpdTiVari.EngMin = 0;
LaneDprtrWarnLoFrqElpdTiVari.EngMax = 4294967295;
LaneDprtrWarnLoFrqElpdTiVari.InitRowCol = [1  1];


LaneDprtrWarnLoFrqFlt = DataDict.PIM;
LaneDprtrWarnLoFrqFlt.LongName = 'Lane Departure Warning Low Frequency Fault';
LaneDprtrWarnLoFrqFlt.Description = 'Low Frequency Fault';
LaneDprtrWarnLoFrqFlt.DocUnits = 'Cnt';
LaneDprtrWarnLoFrqFlt.EngDT = dt.u08;
LaneDprtrWarnLoFrqFlt.EngMin = 0;
LaneDprtrWarnLoFrqFlt.EngMax = 3;
LaneDprtrWarnLoFrqFlt.InitRowCol = [1  1];


LaneDprtrWarnLoFrqSt = DataDict.PIM;
LaneDprtrWarnLoFrqSt.LongName = 'Lane Departure Warning Low Frequency State';
LaneDprtrWarnLoFrqSt.Description = 'Low Frequency State';
LaneDprtrWarnLoFrqSt.DocUnits = 'Cnt';
LaneDprtrWarnLoFrqSt.EngDT = dt.u08;
LaneDprtrWarnLoFrqSt.EngMin = 0;
LaneDprtrWarnLoFrqSt.EngMax = 3;
LaneDprtrWarnLoFrqSt.InitRowCol = [1  1];


LaneDprtrWarnLoFrqTmrFlgVari = DataDict.PIM;
LaneDprtrWarnLoFrqTmrFlgVari.LongName = 'Lane Departure Warning Low Frequency Timer Flag Variable';
LaneDprtrWarnLoFrqTmrFlgVari.Description = 'Set or reset the LDW fault flag';
LaneDprtrWarnLoFrqTmrFlgVari.DocUnits = 'Cnt';
LaneDprtrWarnLoFrqTmrFlgVari.EngDT = dt.lgc;
LaneDprtrWarnLoFrqTmrFlgVari.EngMin = 0;
LaneDprtrWarnLoFrqTmrFlgVari.EngMax = 1;
LaneDprtrWarnLoFrqTmrFlgVari.InitRowCol = [1  1];


LaneDprtrWarnLoFrqTmrVari = DataDict.PIM;
LaneDprtrWarnLoFrqTmrVari.LongName = 'Lane Departure Warning Low Frequency Timer Variable';
LaneDprtrWarnLoFrqTmrVari.Description = 'Provides Timer Value';
LaneDprtrWarnLoFrqTmrVari.DocUnits = 'Cnt';
LaneDprtrWarnLoFrqTmrVari.EngDT = dt.u32;
LaneDprtrWarnLoFrqTmrVari.EngMin = 0;
LaneDprtrWarnLoFrqTmrVari.EngMax = 4294967295;
LaneDprtrWarnLoFrqTmrVari.InitRowCol = [1  1];


LimrDftVehSpd = DataDict.PIM;
LimrDftVehSpd.LongName = 'Limiter Default Vehicle Speed';
LimrDftVehSpd.Description = [...
  'Used to determine limiter vehicle speed'];
LimrDftVehSpd.DocUnits = 'Cnt';
LimrDftVehSpd.EngDT = dt.lgc;
LimrDftVehSpd.EngMin = 0;
LimrDftVehSpd.EngMax = 1;
LimrDftVehSpd.InitRowCol = [1  1];


PrevAmpLim = DataDict.PIM;
PrevAmpLim.LongName = 'Previous Amplitude Limit';
PrevAmpLim.Description = [...
  'Provides previous value of amplitude limit'];
PrevAmpLim.DocUnits = 'NwtMtr';
PrevAmpLim.EngDT = dt.float32;
PrevAmpLim.EngMin = 0;
PrevAmpLim.EngMax = 200;
PrevAmpLim.InitRowCol = [1  1];


PrevDftVehSpd = DataDict.PIM;
PrevDftVehSpd.LongName = 'Previous Default Vehicle Speed';
PrevDftVehSpd.Description = [...
  'State variable for rate dynamic limiter'];
PrevDftVehSpd.DocUnits = 'Kph';
PrevDftVehSpd.EngDT = dt.float32;
PrevDftVehSpd.EngMin = 0;
PrevDftVehSpd.EngMax = 511;
PrevDftVehSpd.InitRowCol = [1  1];


PrevLimdTqReq = DataDict.PIM;
PrevLimdTqReq.LongName = 'Previous Limited Torque Request';
PrevLimdTqReq.Description = [...
  'Provides previous value of Limited Torque Request'];
PrevLimdTqReq.DocUnits = 'NwtMtr';
PrevLimdTqReq.EngDT = dt.float32;
PrevLimdTqReq.EngMin = -8;
PrevLimdTqReq.EngMax = 8;
PrevLimdTqReq.InitRowCol = [1  1];


PrevLimrVehSpd = DataDict.PIM;
PrevLimrVehSpd.LongName = 'Previous Limiter Vehicle Speed';
PrevLimrVehSpd.Description = [...
  'Previous value of Limiter Vehicle Speed'];
PrevLimrVehSpd.DocUnits = 'Kph';
PrevLimrVehSpd.EngDT = dt.float32;
PrevLimrVehSpd.EngMin = 0;
PrevLimrVehSpd.EngMax = 511;
PrevLimrVehSpd.InitRowCol = [1  1];


PrevTqTrend = DataDict.PIM;
PrevTqTrend.LongName = 'Previous Torque Trend';
PrevTqTrend.Description = [...
  'Provides previous value of scaled torque request'];
PrevTqTrend.DocUnits = 'NwtMtr';
PrevTqTrend.EngDT = dt.float32;
PrevTqTrend.EngMin = -8;
PrevTqTrend.EngMax = 8;
PrevTqTrend.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_4MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_4MILLISEC_SEC_F32.LongName = '4 Milliseconds';
ARCHGLBPRM_4MILLISEC_SEC_F32.Description = '4ms periodic loop time step';
ARCHGLBPRM_4MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_4MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_4MILLISEC_SEC_F32.EngVal = 0.004;
ARCHGLBPRM_4MILLISEC_SEC_F32.Define = 'Global';


CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32 = DataDict.Constant;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.LongName = 'Convert Microsecond to Millisec';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ue is multiplied by this constant to convert microsecond to millisecon' ...
  'd'];
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngDT = dt.float32;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.EngVal = 1000;
CNV100MICROSECTOMILLISEC_MILLISECPERCNT_F32.Define = 'Local';


DCTRENDFLT_CNT_U08 = DataDict.Constant;
DCTRENDFLT_CNT_U08.LongName = 'DC Trend Fault';
DCTRENDFLT_CNT_U08.Description = [...
  'To set the parameter byte of the NTC LoFrqLimrFlt'];
DCTRENDFLT_CNT_U08.DocUnits = 'Cnt';
DCTRENDFLT_CNT_U08.EngDT = dt.u08;
DCTRENDFLT_CNT_U08.EngVal = 3;
DCTRENDFLT_CNT_U08.Define = 'Local';


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
ECUIDINVLD_CNT_U08.Description = 'Ecu Identifier Invalid';
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


FAILRBANDST_CNT_U08 = DataDict.Constant;
FAILRBANDST_CNT_U08.LongName = 'Failure Band State';
FAILRBANDST_CNT_U08.Description = [...
  'Once in this state Frequency Checker donot trasition to another state ' ...
  'for the remainder of the ignition cycle'];
FAILRBANDST_CNT_U08.DocUnits = 'Cnt';
FAILRBANDST_CNT_U08.EngDT = dt.u08;
FAILRBANDST_CNT_U08.EngVal = 4;
FAILRBANDST_CNT_U08.Define = 'Local';


FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32 = DataDict.Constant;
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.LongName = 'Ford Motor Torque Command Overlay Maximum Value';
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.Description = [...
  'Maximum value to limit Ford Motor Torque Overlay'];
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.EngDT = dt.float32;
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.EngVal = 8;
FORDMOTTQCMDOVRLMAXVAL_MOTNWTMTR_F32.Define = 'Local';


FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32 = DataDict.Constant;
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.LongName = 'Ford Motor Torque Command Overlay Minimum Value';
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.Description = [...
  'Minimum value to limit Ford Motor Torque Command Overlay'];
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.EngDT = dt.float32;
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.EngVal = -8;
FORDMOTTQCMDOVRLMINVAL_MOTNWTMTR_F32.Define = 'Local';


IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Active Nibble Control Function Call Status';
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Active Nibble Control Torque Request';
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRACTVNIBLCTRLTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Filtered Handwheel Torque';
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDHWTQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Filtered Vehicle Speed';
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRFILDVEHSPD_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.LongName = 'Inter Micro Communication Arbitration Handwheel Velocity';
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRHWVEL_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lane Departure Warning Function Call Status';
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lane Departure Warning Torque Request';
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRLANEDPRTRWARNTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lateral Control Function Call Status';
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Lateral Control Torque Request';
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRLATCTRLTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Pull Drift Compensation Function Call Status';
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Pull Drift Compensation Torque Request';
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRPULLDRIFTCMPTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.LongName = 'Inter Micro Communication Arbitration Steering Torque Disturbance Rejection Function Call Status';
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTDRFCTCALLSTS_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Steering Torque Disturbance Rejection Torque Request';
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRSTEERTQDSTBCREJCTNTQREQ_CNT_U16.Define = 'Global';


IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16 = DataDict.Constant;
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Vehicle Speed Valid';
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.EngDT = dt.u16;
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.EngVal = 0;
IMCARBN_FORDMOTTQCMDOVRLLIMRVEHSPDVLD_CNT_U16.Define = 'Global';


IMCFILDVEHSPDDFTVAL_KPH_F32 = DataDict.Constant;
IMCFILDVEHSPDDFTVAL_KPH_F32.LongName = 'IMC Filtered Vehicle Speed Default Value';
IMCFILDVEHSPDDFTVAL_KPH_F32.Description = [...
  'Default Value for IMC Filtered Vehicle Speed'];
IMCFILDVEHSPDDFTVAL_KPH_F32.DocUnits = 'Kph';
IMCFILDVEHSPDDFTVAL_KPH_F32.EngDT = dt.float32;
IMCFILDVEHSPDDFTVAL_KPH_F32.EngVal = 100;
IMCFILDVEHSPDDFTVAL_KPH_F32.Define = 'Local';


LOFRQFLT_CNT_U08 = DataDict.Constant;
LOFRQFLT_CNT_U08.LongName = 'Low Frequency Fault';
LOFRQFLT_CNT_U08.Description = [...
  'Low Frequency Fault for Diagnostic Flag'];
LOFRQFLT_CNT_U08.DocUnits = 'Cnt';
LOFRQFLT_CNT_U08.EngDT = dt.u08;
LOFRQFLT_CNT_U08.EngVal = 1;
LOFRQFLT_CNT_U08.Define = 'Local';


MAXAMPFLT_CNT_U08 = DataDict.Constant;
MAXAMPFLT_CNT_U08.LongName = 'Maximum Amplitude Fault';
MAXAMPFLT_CNT_U08.Description = [...
  'Maximum Amplitude Fault for Diagnostic Flag'];
MAXAMPFLT_CNT_U08.DocUnits = 'Cnt';
MAXAMPFLT_CNT_U08.EngDT = dt.u08;
MAXAMPFLT_CNT_U08.EngVal = 2;
MAXAMPFLT_CNT_U08.Define = 'Local';


MAXERRDIFF_CNT_F32 = DataDict.Constant;
MAXERRDIFF_CNT_F32.LongName = 'Maximum Error Difference';
MAXERRDIFF_CNT_F32.Description = [...
  'Constant to provide Handwheel Velocity Error'];
MAXERRDIFF_CNT_F32.DocUnits = 'Cnt';
MAXERRDIFF_CNT_F32.EngDT = dt.float32;
MAXERRDIFF_CNT_F32.EngVal = 0;
MAXERRDIFF_CNT_F32.Define = 'Local';


MOTTQREQDFTVAL_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQREQDFTVAL_MOTNWTMTR_F32.LongName = 'Motor Torque Request default Value';
MOTTQREQDFTVAL_MOTNWTMTR_F32.Description = [...
  'Pass zero to torque request based on conditions'];
MOTTQREQDFTVAL_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQREQDFTVAL_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQREQDFTVAL_MOTNWTMTR_F32.EngVal = 0;
MOTTQREQDFTVAL_MOTNWTMTR_F32.Define = 'Local';


MPLRFAC_ULS_F32 = DataDict.Constant;
MPLRFAC_ULS_F32.LongName = 'Multiplier Factor';
MPLRFAC_ULS_F32.Description = 'Factor to find timer threshold';
MPLRFAC_ULS_F32.DocUnits = 'Uls';
MPLRFAC_ULS_F32.EngDT = dt.float32;
MPLRFAC_ULS_F32.EngVal = 0.5;
MPLRFAC_ULS_F32.Define = 'Local';


NEGBANDST_CNT_U08 = DataDict.Constant;
NEGBANDST_CNT_U08.LongName = 'Negative Band State';
NEGBANDST_CNT_U08.Description = [...
  'Frequency checker Negative Band State'];
NEGBANDST_CNT_U08.DocUnits = 'Cnt';
NEGBANDST_CNT_U08.EngDT = dt.u08;
NEGBANDST_CNT_U08.EngVal = 1;
NEGBANDST_CNT_U08.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


NOFLT_CNT_U08 = DataDict.Constant;
NOFLT_CNT_U08.LongName = 'No Fault';
NOFLT_CNT_U08.Description = 'Set Diagnostic Flag to Zero';
NOFLT_CNT_U08.DocUnits = 'Cnt';
NOFLT_CNT_U08.EngDT = dt.u08;
NOFLT_CNT_U08.EngVal = 0;
NOFLT_CNT_U08.Define = 'Local';


POSBANDST_CNT_U08 = DataDict.Constant;
POSBANDST_CNT_U08.LongName = 'Positive Band State';
POSBANDST_CNT_U08.Description = [...
  'Frequency checker Positive Band State'];
POSBANDST_CNT_U08.DocUnits = 'Cnt';
POSBANDST_CNT_U08.EngDT = dt.u08;
POSBANDST_CNT_U08.EngVal = 2;
POSBANDST_CNT_U08.Define = 'Local';


RSTTMR_CNT_U32 = DataDict.Constant;
RSTTMR_CNT_U32.LongName = 'Reset Timer';
RSTTMR_CNT_U32.Description = 'Used to reset timer variable';
RSTTMR_CNT_U32.DocUnits = 'Cnt';
RSTTMR_CNT_U32.EngDT = dt.u32;
RSTTMR_CNT_U32.EngVal = 0;
RSTTMR_CNT_U32.Define = 'Local';


SAMPLETI_SEC_F32 = DataDict.Constant;
SAMPLETI_SEC_F32.LongName = 'Sample Time';
SAMPLETI_SEC_F32.Description = [...
  'Sample time used for low pass filter'];
SAMPLETI_SEC_F32.DocUnits = 'Sec';
SAMPLETI_SEC_F32.EngDT = dt.float32;
SAMPLETI_SEC_F32.EngVal = 0.001;
SAMPLETI_SEC_F32.Define = 'Local';


SPDDIFTHD_KPH_F32 = DataDict.Constant;
SPDDIFTHD_KPH_F32.LongName = 'Speed Difference Threshold';
SPDDIFTHD_KPH_F32.Description = [...
  'Comparison value to set Limiter Vehicle Speed based on conditions'];
SPDDIFTHD_KPH_F32.DocUnits = 'Kph';
SPDDIFTHD_KPH_F32.EngDT = dt.float32;
SPDDIFTHD_KPH_F32.EngVal = 10;
SPDDIFTHD_KPH_F32.Define = 'Local';


ZEROBANDST_CNT_U08 = DataDict.Constant;
ZEROBANDST_CNT_U08.LongName = 'Zero Band State';
ZEROBANDST_CNT_U08.Description = 'Frequency checker Zero Band State';
ZEROBANDST_CNT_U08.DocUnits = 'Cnt';
ZEROBANDST_CNT_U08.EngDT = dt.u08;
ZEROBANDST_CNT_U08.EngVal = 0;
ZEROBANDST_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LoFrqLimrFlt = DataDict.NTC;
LoFrqLimrFlt.NtcNr = NtcNr1.NTCNR_0X0E8;
LoFrqLimrFlt.NtcTyp = 'None';
LoFrqLimrFlt.LongName = 'Low Frequency Limiter Fault';
LoFrqLimrFlt.Description = 'NTC is set or reset based on Faults';
LoFrqLimrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoFrqLimrFlt.NtcStInfo.Bit0Descr = 'HFM Low Frequency Fault ';
LoFrqLimrFlt.NtcStInfo.Bit1Descr = 'HFM Max Amplitude Fault';
LoFrqLimrFlt.NtcStInfo.Bit2Descr = 'HFM DC Trend Fault';
LoFrqLimrFlt.NtcStInfo.Bit3Descr = 'Unused';
LoFrqLimrFlt.NtcStInfo.Bit4Descr = 'Unused';
LoFrqLimrFlt.NtcStInfo.Bit5Descr = 'Unused';
LoFrqLimrFlt.NtcStInfo.Bit6Descr = 'Unused';
LoFrqLimrFlt.NtcStInfo.Bit7Descr = 'Unused';
LoFrqLimrFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
