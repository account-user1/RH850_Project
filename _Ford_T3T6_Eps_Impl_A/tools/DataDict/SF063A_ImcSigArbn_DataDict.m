%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Aug-2017 17:14:11       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF063A = DataDict.FDD;
SF063A.Version = '1.3.X';
SF063A.LongName = 'IMC Signal Arbitration';
SF063A.ShoName  = 'ImcSigArbn';
SF063A.DesignASIL = 'D';
SF063A.Description = [...
  'This function shall define the requirements for sharing signals.It sha' ...
  'll serve as a single function of contact to obtain informationfrom the' ...
  ' other controller in a dual ECU structure. It shall definerequirements' ...
  ' for arbitration of signals and integrator states to ensureperformance' ...
  ' is ensured.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
ImcSigArbnInit1 = DataDict.Runnable;
ImcSigArbnInit1.Context = 'Rte';
ImcSigArbnInit1.TimeStep = 0;
ImcSigArbnInit1.Description = 'Initialization';

ImcSigArbnPer1 = DataDict.Runnable;
ImcSigArbnPer1.Context = 'Rte';
ImcSigArbnPer1.TimeStep = 0.002;
ImcSigArbnPer1.Description = [...
  'Periodic Runnable execute at every 0.002'];

ImcSigArbnPer2 = DataDict.Runnable;
ImcSigArbnPer2.Context = 'Rte';
ImcSigArbnPer2.TimeStep = 0.01;
ImcSigArbnPer2.Description = [...
  'Periodic Runnable execute at every 0.01'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'ImcSigArbnPer1','ImcSigArbnPer2'};
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


GetSigImcData_f32 = DataDict.Client;
GetSigImcData_f32.CallLocation = {'ImcSigArbnPer2'};
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
GetSigImcData_f32.Arguments(2).EngMin = -32767.5;
GetSigImcData_f32.Arguments(2).EngMax = 32767.5;
GetSigImcData_f32.Arguments(2).TestTolerance = 0.1;
GetSigImcData_f32.Arguments(2).Units = 'HwDeg';
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
GetSigImcData_logl.CallLocation = {'ImcSigArbnPer2'};
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


GetSigImcData_u08 = DataDict.Client;
GetSigImcData_u08.CallLocation = {'ImcSigArbnPer1','ImcSigArbnPer2'};
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


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'ImcSigArbnPer1','ImcSigArbnPer2'};
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
SetNtcSts.CallLocation = {'ImcSigArbnInit1','ImcSigArbnPer2'};
SetNtcSts.Description = 'NTC Status Client';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = '';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NTCActv';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = '';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuIdn = DataDict.IpSignal;
EcuIdn.LongName = 'Ecu Identification';
EcuIdn.Description = [...
  'Ecu Identification Signal from Same ECU'];
EcuIdn.DocUnits = 'Cnt';
EcuIdn.EngDT = dt.u08;
EcuIdn.EngInit = 0;
EcuIdn.EngMin = 0;
EcuIdn.EngMax = 3;
EcuIdn.ReadIn = {'ImcSigArbnPer2'};
EcuIdn.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle Signal';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'ImcSigArbnPer1','ImcSigArbnPer2'};
HwAg.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Measurement of handwheel torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'ImcSigArbnPer1','ImcSigArbnPer2'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = [...
  'Measurement of motor velocity in CRF'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'ImcSigArbnPer1','ImcSigArbnPer2'};
MotVelCrf.ReadType = 'Rte';


PosnServoHwAg = DataDict.IpSignal;
PosnServoHwAg.LongName = 'Position Servo Handwheel Angle';
PosnServoHwAg.Description = [...
  'Target handwheel angle for tracking control'];
PosnServoHwAg.DocUnits = 'HwDeg';
PosnServoHwAg.EngDT = dt.float32;
PosnServoHwAg.EngInit = 0;
PosnServoHwAg.EngMin = -1440;
PosnServoHwAg.EngMax = 1440;
PosnServoHwAg.ReadIn = {'ImcSigArbnPer1','ImcSigArbnPer2'};
PosnServoHwAg.ReadType = 'Rte';


PosnServoIntgtrSt = DataDict.IpSignal;
PosnServoIntgtrSt.LongName = 'Position Servo Integrator State';
PosnServoIntgtrSt.Description = [...
  'Integrator state value from Position servo'];
PosnServoIntgtrSt.DocUnits = 'HwNwtMtr';
PosnServoIntgtrSt.EngDT = dt.float32;
PosnServoIntgtrSt.EngInit = 0;
PosnServoIntgtrSt.EngMin = -32767.5;
PosnServoIntgtrSt.EngMax = 32767.5;
PosnServoIntgtrSt.ReadIn = {'ImcSigArbnPer2'};
PosnServoIntgtrSt.ReadType = 'Rte';


PosnTrakgIntgtrSt1 = DataDict.IpSignal;
PosnTrakgIntgtrSt1.LongName = 'Position Tracking Integrator State 1';
PosnTrakgIntgtrSt1.Description = [...
  'Integral state of outer PID sent for arbitration'];
PosnTrakgIntgtrSt1.DocUnits = 'HwDegPerSec';
PosnTrakgIntgtrSt1.EngDT = dt.float32;
PosnTrakgIntgtrSt1.EngInit = 0;
PosnTrakgIntgtrSt1.EngMin = -2864;
PosnTrakgIntgtrSt1.EngMax = 2864;
PosnTrakgIntgtrSt1.ReadIn = {'ImcSigArbnPer2'};
PosnTrakgIntgtrSt1.ReadType = 'Rte';


PosnTrakgIntgtrSt2 = DataDict.IpSignal;
PosnTrakgIntgtrSt2.LongName = 'Position Tracking Integrator State 2';
PosnTrakgIntgtrSt2.Description = [...
  'Integral state of inner PID sent for arbitration'];
PosnTrakgIntgtrSt2.DocUnits = 'Nwt';
PosnTrakgIntgtrSt2.EngDT = dt.float32;
PosnTrakgIntgtrSt2.EngInit = 0;
PosnTrakgIntgtrSt2.EngMin = -20000;
PosnTrakgIntgtrSt2.EngMax = 20000;
PosnTrakgIntgtrSt2.ReadIn = {'ImcSigArbnPer2'};
PosnTrakgIntgtrSt2.ReadType = 'Rte';


PullCmpLongTermIntgtrSt = DataDict.IpSignal;
PullCmpLongTermIntgtrSt.LongName = 'Pull Compensation Long Term Integrator State';
PullCmpLongTermIntgtrSt.Description = [...
  'Integral state of Slow compensation for arbitration'];
PullCmpLongTermIntgtrSt.DocUnits = 'HwNwtMtr';
PullCmpLongTermIntgtrSt.EngDT = dt.float32;
PullCmpLongTermIntgtrSt.EngInit = 0;
PullCmpLongTermIntgtrSt.EngMin = -10;
PullCmpLongTermIntgtrSt.EngMax = 10;
PullCmpLongTermIntgtrSt.ReadIn = {'ImcSigArbnPer2'};
PullCmpLongTermIntgtrSt.ReadType = 'Rte';


PullCmpShoTermIntgtrSt = DataDict.IpSignal;
PullCmpShoTermIntgtrSt.LongName = 'Pull Compensation Short Term Integrator State';
PullCmpShoTermIntgtrSt.Description = [...
  'Integral state of fast compensation for arbitration'];
PullCmpShoTermIntgtrSt.DocUnits = 'HwNwtMtr';
PullCmpShoTermIntgtrSt.EngDT = dt.float32;
PullCmpShoTermIntgtrSt.EngInit = 0;
PullCmpShoTermIntgtrSt.EngMin = -10;
PullCmpShoTermIntgtrSt.EngMax = 10;
PullCmpShoTermIntgtrSt.ReadIn = {'ImcSigArbnPer2'};
PullCmpShoTermIntgtrSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed signal';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'ImcSigArbnPer1','ImcSigArbnPer2'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgImcCorrd = DataDict.OpSignal;
HwAgImcCorrd.LongName = 'Handwheel Angle IMC Corrected';
HwAgImcCorrd.Description = [...
  'Corrected Handwheel angle after IMC correction'];
HwAgImcCorrd.DocUnits = 'HwDeg';
HwAgImcCorrd.SwcShoName = 'ImcSigArbn';
HwAgImcCorrd.EngDT = dt.float32;
HwAgImcCorrd.EngInit = 0;
HwAgImcCorrd.EngMin = -1440;
HwAgImcCorrd.EngMax = 1440;
HwAgImcCorrd.TestTolerance = 488281;
HwAgImcCorrd.WrittenIn = {'ImcSigArbnPer1'};
HwAgImcCorrd.WriteType = 'Rte';


HwTqImcCorrd = DataDict.OpSignal;
HwTqImcCorrd.LongName = 'Handwheel Torque IMC Corrected';
HwTqImcCorrd.Description = 'Measurement of handwheel torque';
HwTqImcCorrd.DocUnits = 'HwNwtMtr';
HwTqImcCorrd.SwcShoName = 'ImcSigArbn';
HwTqImcCorrd.EngDT = dt.float32;
HwTqImcCorrd.EngInit = 0;
HwTqImcCorrd.EngMin = -10;
HwTqImcCorrd.EngMax = 10;
HwTqImcCorrd.TestTolerance = 488281;
HwTqImcCorrd.WrittenIn = {'ImcSigArbnPer1'};
HwTqImcCorrd.WriteType = 'Rte';


ImcSysSt = DataDict.OpSignal;
ImcSysSt.LongName = 'IMC System State';
ImcSysSt.Description = 'IMC System state variable';
ImcSysSt.DocUnits = 'Cnt';
ImcSysSt.SwcShoName = 'ImcSigArbn';
ImcSysSt.EngDT = enum.SysSt1;
ImcSysSt.EngInit = SysSt1.SYSST_WRMININ;
ImcSysSt.EngMin = SysSt1.SYSST_DI;
ImcSysSt.EngMax = SysSt1.SYSST_WRMININ;
ImcSysSt.TestTolerance = 0;
ImcSysSt.WrittenIn = {'ImcSigArbnPer1'};
ImcSysSt.WriteType = 'Rte';


ImcSysStVld = DataDict.OpSignal;
ImcSysStVld.LongName = 'IMC System State Valid';
ImcSysStVld.Description = [...
  'Validity of IMC System Statefunction'];
ImcSysStVld.DocUnits = 'Cnt';
ImcSysStVld.SwcShoName = 'ImcSigArbn';
ImcSysStVld.EngDT = dt.lgc;
ImcSysStVld.EngInit = 0;
ImcSysStVld.EngMin = 0;
ImcSysStVld.EngMax = 1;
ImcSysStVld.TestTolerance = 0;
ImcSysStVld.WrittenIn = {'ImcSigArbnPer1'};
ImcSysStVld.WriteType = 'Rte';


MotVelCrfImcCorrd = DataDict.OpSignal;
MotVelCrfImcCorrd.LongName = 'Motor Velocity CRF IMC Corrected';
MotVelCrfImcCorrd.Description = [...
  'Measurement of motor velocity in CRF'];
MotVelCrfImcCorrd.DocUnits = 'MotRadPerSec';
MotVelCrfImcCorrd.SwcShoName = 'ImcSigArbn';
MotVelCrfImcCorrd.EngDT = dt.float32;
MotVelCrfImcCorrd.EngInit = 0;
MotVelCrfImcCorrd.EngMin = -1350;
MotVelCrfImcCorrd.EngMax = 1350;
MotVelCrfImcCorrd.TestTolerance = 488281;
MotVelCrfImcCorrd.WrittenIn = {'ImcSigArbnPer1'};
MotVelCrfImcCorrd.WriteType = 'Rte';


PosnServoHwAgImcCorrd = DataDict.OpSignal;
PosnServoHwAgImcCorrd.LongName = 'Position Servo Handwheel Angle IMC Corrected';
PosnServoHwAgImcCorrd.Description = [...
  'Target handwheel angle for tracking control'];
PosnServoHwAgImcCorrd.DocUnits = 'HwDeg';
PosnServoHwAgImcCorrd.SwcShoName = 'ImcSigArbn';
PosnServoHwAgImcCorrd.EngDT = dt.float32;
PosnServoHwAgImcCorrd.EngInit = 0;
PosnServoHwAgImcCorrd.EngMin = -1440;
PosnServoHwAgImcCorrd.EngMax = 1440;
PosnServoHwAgImcCorrd.TestTolerance = 488281;
PosnServoHwAgImcCorrd.WrittenIn = {'ImcSigArbnPer1'};
PosnServoHwAgImcCorrd.WriteType = 'Rte';


PosnServoIntgtrOffs = DataDict.OpSignal;
PosnServoIntgtrOffs.LongName = 'Position Servo Integrator Offset';
PosnServoIntgtrOffs.Description = [...
  'The integrator state offset between dual controller to be corrected '];
PosnServoIntgtrOffs.DocUnits = 'HwNwtMtr';
PosnServoIntgtrOffs.SwcShoName = 'ImcSigArbn';
PosnServoIntgtrOffs.EngDT = dt.float32;
PosnServoIntgtrOffs.EngInit = 0;
PosnServoIntgtrOffs.EngMin = -32767.5;
PosnServoIntgtrOffs.EngMax = 32767.5;
PosnServoIntgtrOffs.TestTolerance = 0.000488281;
PosnServoIntgtrOffs.WrittenIn = {'ImcSigArbnPer2'};
PosnServoIntgtrOffs.WriteType = 'Rte';


PosnTrakgArbnFltMtgtnEna = DataDict.OpSignal;
PosnTrakgArbnFltMtgtnEna.LongName = 'Position Tracking Arbitration Fault Mitigation Enable';
PosnTrakgArbnFltMtgtnEna.Description = [...
  'Boolean to set position tracking Outputs to Zero'];
PosnTrakgArbnFltMtgtnEna.DocUnits = 'Cnt';
PosnTrakgArbnFltMtgtnEna.SwcShoName = 'ImcSigArbn';
PosnTrakgArbnFltMtgtnEna.EngDT = dt.lgc;
PosnTrakgArbnFltMtgtnEna.EngInit = 0;
PosnTrakgArbnFltMtgtnEna.EngMin = 0;
PosnTrakgArbnFltMtgtnEna.EngMax = 1;
PosnTrakgArbnFltMtgtnEna.TestTolerance = 0;
PosnTrakgArbnFltMtgtnEna.WrittenIn = {'ImcSigArbnPer2'};
PosnTrakgArbnFltMtgtnEna.WriteType = 'Rte';


PosnTrakgIntgtrSt1Offs = DataDict.OpSignal;
PosnTrakgIntgtrSt1Offs.LongName = 'Tracking Integral State 1 Offset';
PosnTrakgIntgtrSt1Offs.Description = [...
  'Integral state of Tracking control for offset caluclation'];
PosnTrakgIntgtrSt1Offs.DocUnits = 'HwDegPerSec';
PosnTrakgIntgtrSt1Offs.SwcShoName = 'ImcSigArbn';
PosnTrakgIntgtrSt1Offs.EngDT = dt.float32;
PosnTrakgIntgtrSt1Offs.EngInit = 0;
PosnTrakgIntgtrSt1Offs.EngMin = -32767.5;
PosnTrakgIntgtrSt1Offs.EngMax = 32767.5;
PosnTrakgIntgtrSt1Offs.TestTolerance = 0.000488281;
PosnTrakgIntgtrSt1Offs.WrittenIn = {'ImcSigArbnPer2'};
PosnTrakgIntgtrSt1Offs.WriteType = 'Rte';


PosnTrakgIntgtrSt2Offs = DataDict.OpSignal;
PosnTrakgIntgtrSt2Offs.LongName = 'Tracking Integrator State 2 Offset';
PosnTrakgIntgtrSt2Offs.Description = [...
  'Integrator offset correction for inner PID'];
PosnTrakgIntgtrSt2Offs.DocUnits = 'Nwt';
PosnTrakgIntgtrSt2Offs.SwcShoName = 'ImcSigArbn';
PosnTrakgIntgtrSt2Offs.EngDT = dt.float32;
PosnTrakgIntgtrSt2Offs.EngInit = 0;
PosnTrakgIntgtrSt2Offs.EngMin = -20000;
PosnTrakgIntgtrSt2Offs.EngMax = 20000;
PosnTrakgIntgtrSt2Offs.TestTolerance = 0.000488281;
PosnTrakgIntgtrSt2Offs.WrittenIn = {'ImcSigArbnPer2'};
PosnTrakgIntgtrSt2Offs.WriteType = 'Rte';


PullCmpLongTermIntgtrStOffs = DataDict.OpSignal;
PullCmpLongTermIntgtrStOffs.LongName = 'Pull Compensation Long Term Integrator State Offset';
PullCmpLongTermIntgtrStOffs.Description = [...
  'Previous Value of Pull Compensation Long Term Integrator State Offset'];
PullCmpLongTermIntgtrStOffs.DocUnits = 'HwNwtMtr';
PullCmpLongTermIntgtrStOffs.SwcShoName = 'ImcSigArbn';
PullCmpLongTermIntgtrStOffs.EngDT = dt.float32;
PullCmpLongTermIntgtrStOffs.EngInit = 0;
PullCmpLongTermIntgtrStOffs.EngMin = -10;
PullCmpLongTermIntgtrStOffs.EngMax = 10;
PullCmpLongTermIntgtrStOffs.TestTolerance = 0.000488281;
PullCmpLongTermIntgtrStOffs.WrittenIn = {'ImcSigArbnPer2'};
PullCmpLongTermIntgtrStOffs.WriteType = 'Rte';


PullCmpShoTermIntgtrStOffs = DataDict.OpSignal;
PullCmpShoTermIntgtrStOffs.LongName = 'Pull Compensation Short Term Integrator State Offset';
PullCmpShoTermIntgtrStOffs.Description = [...
  'Integral state of Pull Comp Fast compensation for offset caluclation'];
PullCmpShoTermIntgtrStOffs.DocUnits = 'HwNwtMtr';
PullCmpShoTermIntgtrStOffs.SwcShoName = 'ImcSigArbn';
PullCmpShoTermIntgtrStOffs.EngDT = dt.float32;
PullCmpShoTermIntgtrStOffs.EngInit = 0;
PullCmpShoTermIntgtrStOffs.EngMin = -10;
PullCmpShoTermIntgtrStOffs.EngMax = 10;
PullCmpShoTermIntgtrStOffs.TestTolerance = 0.000488281;
PullCmpShoTermIntgtrStOffs.WrittenIn = {'ImcSigArbnPer2'};
PullCmpShoTermIntgtrStOffs.WriteType = 'Rte';


VehSpdImcCorrd = DataDict.OpSignal;
VehSpdImcCorrd.LongName = 'Vehicle Speed IMC Corrected';
VehSpdImcCorrd.Description = 'Vehicle Speed signal';
VehSpdImcCorrd.DocUnits = 'Kph';
VehSpdImcCorrd.SwcShoName = 'ImcSigArbn';
VehSpdImcCorrd.EngDT = dt.float32;
VehSpdImcCorrd.EngInit = 0;
VehSpdImcCorrd.EngMin = 0;
VehSpdImcCorrd.EngMax = 511;
VehSpdImcCorrd.TestTolerance = 0.000488281;
VehSpdImcCorrd.WrittenIn = {'ImcSigArbnPer1'};
VehSpdImcCorrd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
HwAgOffs = DataDict.IRV;
HwAgOffs.LongName = 'Handwheel Angle Offset';
HwAgOffs.Description = 'Handwheel Angle Offset';
HwAgOffs.DocUnits = 'HwDeg';
HwAgOffs.EngDT = dt.float32;
HwAgOffs.EngInit = 0;
HwAgOffs.EngMin = -600;
HwAgOffs.EngMax = 600;
HwAgOffs.ReadIn = {'ImcSigArbnPer1'};
HwAgOffs.WrittenIn = {'ImcSigArbnPer2'};


HwAgTarOffs = DataDict.IRV;
HwAgTarOffs.LongName = 'Handwheel Angle Target Offset';
HwAgTarOffs.Description = 'Handwheel Angle Target Offset';
HwAgTarOffs.DocUnits = 'HwDeg';
HwAgTarOffs.EngDT = dt.float32;
HwAgTarOffs.EngInit = 0;
HwAgTarOffs.EngMin = -600;
HwAgTarOffs.EngMax = 600;
HwAgTarOffs.ReadIn = {'ImcSigArbnPer1'};
HwAgTarOffs.WrittenIn = {'ImcSigArbnPer2'};


HwTqOffs = DataDict.IRV;
HwTqOffs.LongName = 'Handwheel Torque Offset';
HwTqOffs.Description = 'Handwheel Torque Offset';
HwTqOffs.DocUnits = 'HwNwtMtr';
HwTqOffs.EngDT = dt.float32;
HwTqOffs.EngInit = 0;
HwTqOffs.EngMin = -250;
HwTqOffs.EngMax = 250;
HwTqOffs.ReadIn = {'ImcSigArbnPer1'};
HwTqOffs.WrittenIn = {'ImcSigArbnPer2'};


ImcSysSt10MilliSec = DataDict.IRV;
ImcSysSt10MilliSec.LongName = 'Imc System State 10 Milli Second';
ImcSysSt10MilliSec.Description = [...
  'IMC System state variable from 10 MilliSecond Periodic'];
ImcSysSt10MilliSec.DocUnits = 'Cnt';
ImcSysSt10MilliSec.EngDT = enum.SysSt1;
ImcSysSt10MilliSec.EngInit = SysSt1.SYSST_WRMININ;
ImcSysSt10MilliSec.EngMin = SysSt1.SYSST_DI;
ImcSysSt10MilliSec.EngMax = SysSt1.SYSST_WRMININ;
ImcSysSt10MilliSec.ReadIn = {'ImcSigArbnPer1'};
ImcSysSt10MilliSec.WrittenIn = {'ImcSigArbnPer2'};


ImcSysStVld10MilliSec = DataDict.IRV;
ImcSysStVld10MilliSec.LongName = 'Imc System State Valid 10 Milli Second';
ImcSysStVld10MilliSec.Description = [...
  'Validity of IMC System Statefunction 10 MilliSecond Periodic'];
ImcSysStVld10MilliSec.DocUnits = 'Cnt';
ImcSysStVld10MilliSec.EngDT = dt.lgc;
ImcSysStVld10MilliSec.EngInit = 0;
ImcSysStVld10MilliSec.EngMin = 0;
ImcSysStVld10MilliSec.EngMax = 1;
ImcSysStVld10MilliSec.ReadIn = {'ImcSigArbnPer1'};
ImcSysStVld10MilliSec.WrittenIn = {'ImcSigArbnPer2'};


MotVelCrfOffs = DataDict.IRV;
MotVelCrfOffs.LongName = 'Motor Velocity CRF Offset';
MotVelCrfOffs.Description = 'Motor Velocity CRF Offset';
MotVelCrfOffs.DocUnits = 'MotRadPerSec';
MotVelCrfOffs.EngDT = dt.float32;
MotVelCrfOffs.EngInit = 0;
MotVelCrfOffs.EngMin = -250;
MotVelCrfOffs.EngMax = 250;
MotVelCrfOffs.ReadIn = {'ImcSigArbnPer1'};
MotVelCrfOffs.WrittenIn = {'ImcSigArbnPer2'};


VehSpdOffs = DataDict.IRV;
VehSpdOffs.LongName = 'Vehicle Speed Offset';
VehSpdOffs.Description = 'Vehicle Speed Offset';
VehSpdOffs.DocUnits = 'Kph';
VehSpdOffs.EngDT = dt.float32;
VehSpdOffs.EngInit = 0;
VehSpdOffs.EngMin = -250;
VehSpdOffs.EngMax = 250;
VehSpdOffs.ReadIn = {'ImcSigArbnPer1'};
VehSpdOffs.WrittenIn = {'ImcSigArbnPer2'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
ImcSigArbnArbnFltTmr = DataDict.Calibration;
ImcSigArbnArbnFltTmr.LongName = 'Arbitration Fault Timer';
ImcSigArbnArbnFltTmr.Description = [...
  'Timer for Setting Arbitration fault to true'];
ImcSigArbnArbnFltTmr.DocUnits = 'MilliSec';
ImcSigArbnArbnFltTmr.EngDT = dt.float32;
ImcSigArbnArbnFltTmr.EngVal = 20;
ImcSigArbnArbnFltTmr.EngMin = 0;
ImcSigArbnArbnFltTmr.EngMax = 500;
ImcSigArbnArbnFltTmr.Cardinality = 'Inin';
ImcSigArbnArbnFltTmr.CustomerVisible = false;
ImcSigArbnArbnFltTmr.Online = false;
ImcSigArbnArbnFltTmr.Impact = 'H';
ImcSigArbnArbnFltTmr.TuningOwner = 'CSE';
ImcSigArbnArbnFltTmr.GraphLink = {''};
ImcSigArbnArbnFltTmr.Monotony = 'None';
ImcSigArbnArbnFltTmr.MaxGrad = 500;
ImcSigArbnArbnFltTmr.PortName = 'ImcSigArbnArbnFltTmr';


ImcSigArbnHwAgArbnEna = DataDict.Calibration;
ImcSigArbnHwAgArbnEna.LongName = 'Handwheel Angle Arbitration Enable';
ImcSigArbnHwAgArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnHwAgArbnEna.DocUnits = 'Cnt';
ImcSigArbnHwAgArbnEna.EngDT = dt.lgc;
ImcSigArbnHwAgArbnEna.EngVal = 1;
ImcSigArbnHwAgArbnEna.EngMin = 0;
ImcSigArbnHwAgArbnEna.EngMax = 1;
ImcSigArbnHwAgArbnEna.Cardinality = 'Inin';
ImcSigArbnHwAgArbnEna.CustomerVisible = false;
ImcSigArbnHwAgArbnEna.Online = false;
ImcSigArbnHwAgArbnEna.Impact = 'M';
ImcSigArbnHwAgArbnEna.TuningOwner = 'CSE';
ImcSigArbnHwAgArbnEna.GraphLink = {''};
ImcSigArbnHwAgArbnEna.Monotony = 'None';
ImcSigArbnHwAgArbnEna.MaxGrad = 1;
ImcSigArbnHwAgArbnEna.PortName = 'ImcSigArbnHwAgArbnEna';


ImcSigArbnHwAgArbnLpFil = DataDict.Calibration;
ImcSigArbnHwAgArbnLpFil.LongName = 'Handwheel Angle Arbitration Lowpass Filter';
ImcSigArbnHwAgArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnHwAgArbnLpFil.DocUnits = 'Hz';
ImcSigArbnHwAgArbnLpFil.EngDT = dt.float32;
ImcSigArbnHwAgArbnLpFil.EngVal = 5;
ImcSigArbnHwAgArbnLpFil.EngMin = 0.1;
ImcSigArbnHwAgArbnLpFil.EngMax = 100;
ImcSigArbnHwAgArbnLpFil.Cardinality = 'Inin';
ImcSigArbnHwAgArbnLpFil.CustomerVisible = false;
ImcSigArbnHwAgArbnLpFil.Online = false;
ImcSigArbnHwAgArbnLpFil.Impact = 'M';
ImcSigArbnHwAgArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnHwAgArbnLpFil.GraphLink = {''};
ImcSigArbnHwAgArbnLpFil.Monotony = 'None';
ImcSigArbnHwAgArbnLpFil.MaxGrad = 99.9;
ImcSigArbnHwAgArbnLpFil.PortName = 'ImcSigArbnHwAgArbnLpFil';


ImcSigArbnHwAgArbnOffsLim = DataDict.Calibration;
ImcSigArbnHwAgArbnOffsLim.LongName = 'Handwheel Angle Arbitration Offset Limit';
ImcSigArbnHwAgArbnOffsLim.Description = [...
  'Handwheel Angle Arbitration Offset Limit'];
ImcSigArbnHwAgArbnOffsLim.DocUnits = 'HwDeg';
ImcSigArbnHwAgArbnOffsLim.EngDT = dt.float32;
ImcSigArbnHwAgArbnOffsLim.EngVal = 100;
ImcSigArbnHwAgArbnOffsLim.EngMin = 0;
ImcSigArbnHwAgArbnOffsLim.EngMax = 600;
ImcSigArbnHwAgArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnHwAgArbnOffsLim.CustomerVisible = false;
ImcSigArbnHwAgArbnOffsLim.Online = false;
ImcSigArbnHwAgArbnOffsLim.Impact = 'M';
ImcSigArbnHwAgArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnHwAgArbnOffsLim.GraphLink = {''};
ImcSigArbnHwAgArbnOffsLim.Monotony = 'None';
ImcSigArbnHwAgArbnOffsLim.MaxGrad = 600;
ImcSigArbnHwAgArbnOffsLim.PortName = 'ImcSigArbnHwAgArbnOffsLim';


ImcSigArbnHwAgTarArbnEna = DataDict.Calibration;
ImcSigArbnHwAgTarArbnEna.LongName = 'Handwheel Angle Target Arbitration Enable';
ImcSigArbnHwAgTarArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnHwAgTarArbnEna.DocUnits = 'Cnt';
ImcSigArbnHwAgTarArbnEna.EngDT = dt.lgc;
ImcSigArbnHwAgTarArbnEna.EngVal = 1;
ImcSigArbnHwAgTarArbnEna.EngMin = 0;
ImcSigArbnHwAgTarArbnEna.EngMax = 1;
ImcSigArbnHwAgTarArbnEna.Cardinality = 'Inin';
ImcSigArbnHwAgTarArbnEna.CustomerVisible = false;
ImcSigArbnHwAgTarArbnEna.Online = false;
ImcSigArbnHwAgTarArbnEna.Impact = 'M';
ImcSigArbnHwAgTarArbnEna.TuningOwner = 'CSE';
ImcSigArbnHwAgTarArbnEna.GraphLink = {''};
ImcSigArbnHwAgTarArbnEna.Monotony = 'None';
ImcSigArbnHwAgTarArbnEna.MaxGrad = 1;
ImcSigArbnHwAgTarArbnEna.PortName = 'ImcSigArbnHwAgTarArbnEna';


ImcSigArbnHwAgTarArbnLpFil = DataDict.Calibration;
ImcSigArbnHwAgTarArbnLpFil.LongName = 'Handwheel Angle Target Arbitration Lowpass Filter';
ImcSigArbnHwAgTarArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnHwAgTarArbnLpFil.DocUnits = 'Hz';
ImcSigArbnHwAgTarArbnLpFil.EngDT = dt.float32;
ImcSigArbnHwAgTarArbnLpFil.EngVal = 5;
ImcSigArbnHwAgTarArbnLpFil.EngMin = 0.1;
ImcSigArbnHwAgTarArbnLpFil.EngMax = 100;
ImcSigArbnHwAgTarArbnLpFil.Cardinality = 'Inin';
ImcSigArbnHwAgTarArbnLpFil.CustomerVisible = false;
ImcSigArbnHwAgTarArbnLpFil.Online = false;
ImcSigArbnHwAgTarArbnLpFil.Impact = 'M';
ImcSigArbnHwAgTarArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnHwAgTarArbnLpFil.GraphLink = {''};
ImcSigArbnHwAgTarArbnLpFil.Monotony = 'None';
ImcSigArbnHwAgTarArbnLpFil.MaxGrad = 99.9;
ImcSigArbnHwAgTarArbnLpFil.PortName = 'ImcSigArbnHwAgTarArbnLpFil';


ImcSigArbnHwAgTarArbnOffsLim = DataDict.Calibration;
ImcSigArbnHwAgTarArbnOffsLim.LongName = 'Handwheel Angle Target Arbitration Offset Limit';
ImcSigArbnHwAgTarArbnOffsLim.Description = [...
  'Handwheel Angle Target Arbitration Offset Limit'];
ImcSigArbnHwAgTarArbnOffsLim.DocUnits = 'HwDeg';
ImcSigArbnHwAgTarArbnOffsLim.EngDT = dt.float32;
ImcSigArbnHwAgTarArbnOffsLim.EngVal = 100;
ImcSigArbnHwAgTarArbnOffsLim.EngMin = 0;
ImcSigArbnHwAgTarArbnOffsLim.EngMax = 600;
ImcSigArbnHwAgTarArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnHwAgTarArbnOffsLim.CustomerVisible = false;
ImcSigArbnHwAgTarArbnOffsLim.Online = false;
ImcSigArbnHwAgTarArbnOffsLim.Impact = 'M';
ImcSigArbnHwAgTarArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnHwAgTarArbnOffsLim.GraphLink = {''};
ImcSigArbnHwAgTarArbnOffsLim.Monotony = 'None';
ImcSigArbnHwAgTarArbnOffsLim.MaxGrad = 600;
ImcSigArbnHwAgTarArbnOffsLim.PortName = 'ImcSigArbnHwAgTarArbnOffsLim';


ImcSigArbnHwTqArbnEna = DataDict.Calibration;
ImcSigArbnHwTqArbnEna.LongName = 'Handwheel Torque Arbitration Enable';
ImcSigArbnHwTqArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnHwTqArbnEna.DocUnits = 'Cnt';
ImcSigArbnHwTqArbnEna.EngDT = dt.lgc;
ImcSigArbnHwTqArbnEna.EngVal = 1;
ImcSigArbnHwTqArbnEna.EngMin = 0;
ImcSigArbnHwTqArbnEna.EngMax = 1;
ImcSigArbnHwTqArbnEna.Cardinality = 'Inin';
ImcSigArbnHwTqArbnEna.CustomerVisible = false;
ImcSigArbnHwTqArbnEna.Online = false;
ImcSigArbnHwTqArbnEna.Impact = 'M';
ImcSigArbnHwTqArbnEna.TuningOwner = 'CSE';
ImcSigArbnHwTqArbnEna.GraphLink = {''};
ImcSigArbnHwTqArbnEna.Monotony = 'None';
ImcSigArbnHwTqArbnEna.MaxGrad = 1;
ImcSigArbnHwTqArbnEna.PortName = 'ImcSigArbnHwTqArbnEna';


ImcSigArbnHwTqArbnLpFil = DataDict.Calibration;
ImcSigArbnHwTqArbnLpFil.LongName = 'Handwheel Torque Arbitration Lowpass Filter';
ImcSigArbnHwTqArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnHwTqArbnLpFil.DocUnits = 'Hz';
ImcSigArbnHwTqArbnLpFil.EngDT = dt.float32;
ImcSigArbnHwTqArbnLpFil.EngVal = 5;
ImcSigArbnHwTqArbnLpFil.EngMin = 0.1;
ImcSigArbnHwTqArbnLpFil.EngMax = 100;
ImcSigArbnHwTqArbnLpFil.Cardinality = 'Inin';
ImcSigArbnHwTqArbnLpFil.CustomerVisible = false;
ImcSigArbnHwTqArbnLpFil.Online = false;
ImcSigArbnHwTqArbnLpFil.Impact = 'M';
ImcSigArbnHwTqArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnHwTqArbnLpFil.GraphLink = {''};
ImcSigArbnHwTqArbnLpFil.Monotony = 'None';
ImcSigArbnHwTqArbnLpFil.MaxGrad = 99.9;
ImcSigArbnHwTqArbnLpFil.PortName = 'ImcSigArbnHwTqArbnLpFil';


ImcSigArbnHwTqArbnOffsLim = DataDict.Calibration;
ImcSigArbnHwTqArbnOffsLim.LongName = 'Handwheel Torque Arbitration Offset Limit';
ImcSigArbnHwTqArbnOffsLim.Description = [...
  'Handwheel Torque Arbitration Offset Limit'];
ImcSigArbnHwTqArbnOffsLim.DocUnits = 'HwNwtMtr';
ImcSigArbnHwTqArbnOffsLim.EngDT = dt.float32;
ImcSigArbnHwTqArbnOffsLim.EngVal = 20;
ImcSigArbnHwTqArbnOffsLim.EngMin = 0;
ImcSigArbnHwTqArbnOffsLim.EngMax = 250;
ImcSigArbnHwTqArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnHwTqArbnOffsLim.CustomerVisible = false;
ImcSigArbnHwTqArbnOffsLim.Online = false;
ImcSigArbnHwTqArbnOffsLim.Impact = 'M';
ImcSigArbnHwTqArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnHwTqArbnOffsLim.GraphLink = {''};
ImcSigArbnHwTqArbnOffsLim.Monotony = 'None';
ImcSigArbnHwTqArbnOffsLim.MaxGrad = 250;
ImcSigArbnHwTqArbnOffsLim.PortName = 'ImcSigArbnHwTqArbnOffsLim';


ImcSigArbnMotVelArbnEna = DataDict.Calibration;
ImcSigArbnMotVelArbnEna.LongName = 'Motor Velocity Arbitration Enable';
ImcSigArbnMotVelArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnMotVelArbnEna.DocUnits = 'Cnt';
ImcSigArbnMotVelArbnEna.EngDT = dt.lgc;
ImcSigArbnMotVelArbnEna.EngVal = 1;
ImcSigArbnMotVelArbnEna.EngMin = 0;
ImcSigArbnMotVelArbnEna.EngMax = 1;
ImcSigArbnMotVelArbnEna.Cardinality = 'Inin';
ImcSigArbnMotVelArbnEna.CustomerVisible = false;
ImcSigArbnMotVelArbnEna.Online = false;
ImcSigArbnMotVelArbnEna.Impact = 'M';
ImcSigArbnMotVelArbnEna.TuningOwner = 'CSE';
ImcSigArbnMotVelArbnEna.GraphLink = {''};
ImcSigArbnMotVelArbnEna.Monotony = 'None';
ImcSigArbnMotVelArbnEna.MaxGrad = 1;
ImcSigArbnMotVelArbnEna.PortName = 'ImcSigArbnMotVelArbnEna';


ImcSigArbnMotVelArbnLpFil = DataDict.Calibration;
ImcSigArbnMotVelArbnLpFil.LongName = 'Motor Velocity Arbitration Lowpass Filter';
ImcSigArbnMotVelArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnMotVelArbnLpFil.DocUnits = 'Hz';
ImcSigArbnMotVelArbnLpFil.EngDT = dt.float32;
ImcSigArbnMotVelArbnLpFil.EngVal = 5;
ImcSigArbnMotVelArbnLpFil.EngMin = 0.1;
ImcSigArbnMotVelArbnLpFil.EngMax = 100;
ImcSigArbnMotVelArbnLpFil.Cardinality = 'Inin';
ImcSigArbnMotVelArbnLpFil.CustomerVisible = false;
ImcSigArbnMotVelArbnLpFil.Online = false;
ImcSigArbnMotVelArbnLpFil.Impact = 'M';
ImcSigArbnMotVelArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnMotVelArbnLpFil.GraphLink = {''};
ImcSigArbnMotVelArbnLpFil.Monotony = 'None';
ImcSigArbnMotVelArbnLpFil.MaxGrad = 99.9;
ImcSigArbnMotVelArbnLpFil.PortName = 'ImcSigArbnMotVelArbnLpFil';


ImcSigArbnMotVelArbnOffsLim = DataDict.Calibration;
ImcSigArbnMotVelArbnOffsLim.LongName = 'Motor Velocity Arbitration Offset Limit';
ImcSigArbnMotVelArbnOffsLim.Description = [...
  'Motor Velocity Arbitration Offset Limit'];
ImcSigArbnMotVelArbnOffsLim.DocUnits = 'MotRadPerSec';
ImcSigArbnMotVelArbnOffsLim.EngDT = dt.float32;
ImcSigArbnMotVelArbnOffsLim.EngVal = 50;
ImcSigArbnMotVelArbnOffsLim.EngMin = 0;
ImcSigArbnMotVelArbnOffsLim.EngMax = 250;
ImcSigArbnMotVelArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnMotVelArbnOffsLim.CustomerVisible = false;
ImcSigArbnMotVelArbnOffsLim.Online = false;
ImcSigArbnMotVelArbnOffsLim.Impact = 'M';
ImcSigArbnMotVelArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnMotVelArbnOffsLim.GraphLink = {''};
ImcSigArbnMotVelArbnOffsLim.Monotony = 'None';
ImcSigArbnMotVelArbnOffsLim.MaxGrad = 250;
ImcSigArbnMotVelArbnOffsLim.PortName = 'ImcSigArbnMotVelArbnOffsLim';


ImcSigArbnPosnServoArbnOffsLim = DataDict.Calibration;
ImcSigArbnPosnServoArbnOffsLim.LongName = 'Position Servo Arbitration Offset Limit';
ImcSigArbnPosnServoArbnOffsLim.Description = [...
  'Position Servo Arbitration Offset Limit'];
ImcSigArbnPosnServoArbnOffsLim.DocUnits = 'HwNwtMtr';
ImcSigArbnPosnServoArbnOffsLim.EngDT = dt.float32;
ImcSigArbnPosnServoArbnOffsLim.EngVal = 2;
ImcSigArbnPosnServoArbnOffsLim.EngMin = 0;
ImcSigArbnPosnServoArbnOffsLim.EngMax = 32767.5;
ImcSigArbnPosnServoArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnPosnServoArbnOffsLim.CustomerVisible = false;
ImcSigArbnPosnServoArbnOffsLim.Online = false;
ImcSigArbnPosnServoArbnOffsLim.Impact = 'M';
ImcSigArbnPosnServoArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnPosnServoArbnOffsLim.GraphLink = {''};
ImcSigArbnPosnServoArbnOffsLim.Monotony = 'None';
ImcSigArbnPosnServoArbnOffsLim.MaxGrad = 32767.5;
ImcSigArbnPosnServoArbnOffsLim.PortName = 'ImcSigArbnPosnServoArbnOffsLim';


ImcSigArbnPosnServoIntgtrStArbnEna = DataDict.Calibration;
ImcSigArbnPosnServoIntgtrStArbnEna.LongName = 'Position Servo Integrator State Arbitration Enable';
ImcSigArbnPosnServoIntgtrStArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnPosnServoIntgtrStArbnEna.DocUnits = 'Cnt';
ImcSigArbnPosnServoIntgtrStArbnEna.EngDT = dt.lgc;
ImcSigArbnPosnServoIntgtrStArbnEna.EngVal = 1;
ImcSigArbnPosnServoIntgtrStArbnEna.EngMin = 0;
ImcSigArbnPosnServoIntgtrStArbnEna.EngMax = 1;
ImcSigArbnPosnServoIntgtrStArbnEna.Cardinality = 'Inin';
ImcSigArbnPosnServoIntgtrStArbnEna.CustomerVisible = false;
ImcSigArbnPosnServoIntgtrStArbnEna.Online = false;
ImcSigArbnPosnServoIntgtrStArbnEna.Impact = 'M';
ImcSigArbnPosnServoIntgtrStArbnEna.TuningOwner = 'CSE';
ImcSigArbnPosnServoIntgtrStArbnEna.GraphLink = {''};
ImcSigArbnPosnServoIntgtrStArbnEna.Monotony = 'None';
ImcSigArbnPosnServoIntgtrStArbnEna.MaxGrad = 1;
ImcSigArbnPosnServoIntgtrStArbnEna.PortName = 'ImcSigArbnPosnServoIntgtrStArbnEna';


ImcSigArbnPosnServoIntgtrStArbnLpFil = DataDict.Calibration;
ImcSigArbnPosnServoIntgtrStArbnLpFil.LongName = 'Position Servo Integrator State Arbitration Lowpass Filter';
ImcSigArbnPosnServoIntgtrStArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnPosnServoIntgtrStArbnLpFil.DocUnits = 'Hz';
ImcSigArbnPosnServoIntgtrStArbnLpFil.EngDT = dt.float32;
ImcSigArbnPosnServoIntgtrStArbnLpFil.EngVal = 5;
ImcSigArbnPosnServoIntgtrStArbnLpFil.EngMin = 0.1;
ImcSigArbnPosnServoIntgtrStArbnLpFil.EngMax = 100;
ImcSigArbnPosnServoIntgtrStArbnLpFil.Cardinality = 'Inin';
ImcSigArbnPosnServoIntgtrStArbnLpFil.CustomerVisible = false;
ImcSigArbnPosnServoIntgtrStArbnLpFil.Online = false;
ImcSigArbnPosnServoIntgtrStArbnLpFil.Impact = 'M';
ImcSigArbnPosnServoIntgtrStArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnPosnServoIntgtrStArbnLpFil.GraphLink = {''};
ImcSigArbnPosnServoIntgtrStArbnLpFil.Monotony = 'None';
ImcSigArbnPosnServoIntgtrStArbnLpFil.MaxGrad = 99.9;
ImcSigArbnPosnServoIntgtrStArbnLpFil.PortName = 'ImcSigArbnPosnServoIntgtrStArbnLpFil';


ImcSigArbnPosnTrakg1ArbnOffsLim = DataDict.Calibration;
ImcSigArbnPosnTrakg1ArbnOffsLim.LongName = 'Position Tracking 1 Arbitration Offset Limit';
ImcSigArbnPosnTrakg1ArbnOffsLim.Description = [...
  'Position Tracking 1 Arbitration Offset Limit'];
ImcSigArbnPosnTrakg1ArbnOffsLim.DocUnits = 'HwDegPerSec';
ImcSigArbnPosnTrakg1ArbnOffsLim.EngDT = dt.float32;
ImcSigArbnPosnTrakg1ArbnOffsLim.EngVal = 200;
ImcSigArbnPosnTrakg1ArbnOffsLim.EngMin = 0;
ImcSigArbnPosnTrakg1ArbnOffsLim.EngMax = 32767.5;
ImcSigArbnPosnTrakg1ArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnPosnTrakg1ArbnOffsLim.CustomerVisible = false;
ImcSigArbnPosnTrakg1ArbnOffsLim.Online = false;
ImcSigArbnPosnTrakg1ArbnOffsLim.Impact = 'M';
ImcSigArbnPosnTrakg1ArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnPosnTrakg1ArbnOffsLim.GraphLink = {''};
ImcSigArbnPosnTrakg1ArbnOffsLim.Monotony = 'None';
ImcSigArbnPosnTrakg1ArbnOffsLim.MaxGrad = 32767.5;
ImcSigArbnPosnTrakg1ArbnOffsLim.PortName = 'ImcSigArbnPosnTrakg1ArbnOffsLim';


ImcSigArbnPosnTrakg2ArbnOffsLim = DataDict.Calibration;
ImcSigArbnPosnTrakg2ArbnOffsLim.LongName = 'Position Tracking 2 Arbitration Offset Limit';
ImcSigArbnPosnTrakg2ArbnOffsLim.Description = [...
  'Position Tracking 2 Arbitration Offset Limit'];
ImcSigArbnPosnTrakg2ArbnOffsLim.DocUnits = 'Nwt';
ImcSigArbnPosnTrakg2ArbnOffsLim.EngDT = dt.float32;
ImcSigArbnPosnTrakg2ArbnOffsLim.EngVal = 3000;
ImcSigArbnPosnTrakg2ArbnOffsLim.EngMin = 0;
ImcSigArbnPosnTrakg2ArbnOffsLim.EngMax = 20000;
ImcSigArbnPosnTrakg2ArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnPosnTrakg2ArbnOffsLim.CustomerVisible = false;
ImcSigArbnPosnTrakg2ArbnOffsLim.Online = false;
ImcSigArbnPosnTrakg2ArbnOffsLim.Impact = 'M';
ImcSigArbnPosnTrakg2ArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnPosnTrakg2ArbnOffsLim.GraphLink = {''};
ImcSigArbnPosnTrakg2ArbnOffsLim.Monotony = 'None';
ImcSigArbnPosnTrakg2ArbnOffsLim.MaxGrad = 20000;
ImcSigArbnPosnTrakg2ArbnOffsLim.PortName = 'ImcSigArbnPosnTrakg2ArbnOffsLim';


ImcSigArbnPullCmpLongTermArbnOffsLim = DataDict.Calibration;
ImcSigArbnPullCmpLongTermArbnOffsLim.LongName = 'Pull Compensation Long Term Arbitration Offset Limit';
ImcSigArbnPullCmpLongTermArbnOffsLim.Description = [...
  'Pull Compensation Long Term Arbitration Offset Limit'];
ImcSigArbnPullCmpLongTermArbnOffsLim.DocUnits = 'HwNwtMtr';
ImcSigArbnPullCmpLongTermArbnOffsLim.EngDT = dt.float32;
ImcSigArbnPullCmpLongTermArbnOffsLim.EngVal = 8;
ImcSigArbnPullCmpLongTermArbnOffsLim.EngMin = 0;
ImcSigArbnPullCmpLongTermArbnOffsLim.EngMax = 10;
ImcSigArbnPullCmpLongTermArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnPullCmpLongTermArbnOffsLim.CustomerVisible = false;
ImcSigArbnPullCmpLongTermArbnOffsLim.Online = true;
ImcSigArbnPullCmpLongTermArbnOffsLim.Impact = 'M';
ImcSigArbnPullCmpLongTermArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnPullCmpLongTermArbnOffsLim.GraphLink = {''};
ImcSigArbnPullCmpLongTermArbnOffsLim.Monotony = 'None';
ImcSigArbnPullCmpLongTermArbnOffsLim.MaxGrad = 10;
ImcSigArbnPullCmpLongTermArbnOffsLim.PortName = 'ImcSigArbnPullCmpLongTermArbnOffsLim';


ImcSigArbnPullCmpLongTermIntgtrStArbnEna = DataDict.Calibration;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.LongName = 'Pull Compensation Long Term Integrator State Arbitration Enable';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.DocUnits = 'Cnt';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.EngDT = dt.lgc;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.EngVal = 1;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.EngMin = 0;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.EngMax = 1;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.Cardinality = 'Inin';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.CustomerVisible = false;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.Online = false;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.Impact = 'M';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.TuningOwner = 'CSE';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.GraphLink = {''};
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.Monotony = 'None';
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.MaxGrad = 1;
ImcSigArbnPullCmpLongTermIntgtrStArbnEna.PortName = 'ImcSigArbnPullCmpLongTermIntgtrStArbnEna';


ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil = DataDict.Calibration;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.LongName = 'Pull Compensation Long Term Integrator State Arbitration Lowpass Filter';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.DocUnits = 'Hz';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.EngDT = dt.float32;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.EngVal = 5;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.EngMin = 0.1;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.EngMax = 100;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.Cardinality = 'Inin';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.CustomerVisible = false;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.Online = false;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.Impact = 'M';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.GraphLink = {''};
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.Monotony = 'None';
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.MaxGrad = 99.9;
ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil.PortName = 'ImcSigArbnPullCmpLongTermIntgtrStArbnLpFil';


ImcSigArbnPullCmpShoTermArbnOffsLim = DataDict.Calibration;
ImcSigArbnPullCmpShoTermArbnOffsLim.LongName = 'Pull Compensation Short Term Arbitration Offset Limit';
ImcSigArbnPullCmpShoTermArbnOffsLim.Description = [...
  'Pull Compensation Short Term Arbitration Offset Limit'];
ImcSigArbnPullCmpShoTermArbnOffsLim.DocUnits = 'HwNwtMtr';
ImcSigArbnPullCmpShoTermArbnOffsLim.EngDT = dt.float32;
ImcSigArbnPullCmpShoTermArbnOffsLim.EngVal = 8;
ImcSigArbnPullCmpShoTermArbnOffsLim.EngMin = 0;
ImcSigArbnPullCmpShoTermArbnOffsLim.EngMax = 10;
ImcSigArbnPullCmpShoTermArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnPullCmpShoTermArbnOffsLim.CustomerVisible = false;
ImcSigArbnPullCmpShoTermArbnOffsLim.Online = true;
ImcSigArbnPullCmpShoTermArbnOffsLim.Impact = 'M';
ImcSigArbnPullCmpShoTermArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnPullCmpShoTermArbnOffsLim.GraphLink = {''};
ImcSigArbnPullCmpShoTermArbnOffsLim.Monotony = 'None';
ImcSigArbnPullCmpShoTermArbnOffsLim.MaxGrad = 10;
ImcSigArbnPullCmpShoTermArbnOffsLim.PortName = 'ImcSigArbnPullCmpShoTermArbnOffsLim';


ImcSigArbnPullCmpShoTermIntgtrStArbnEna = DataDict.Calibration;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.LongName = 'Pull Compensation Short Term Integrator State Arbitration Enable';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.DocUnits = 'Cnt';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.EngDT = dt.lgc;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.EngVal = 1;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.EngMin = 0;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.EngMax = 1;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.Cardinality = 'Inin';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.CustomerVisible = false;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.Online = false;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.Impact = 'M';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.TuningOwner = 'CSE';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.GraphLink = {''};
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.Monotony = 'None';
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.MaxGrad = 1;
ImcSigArbnPullCmpShoTermIntgtrStArbnEna.PortName = 'ImcSigArbnPullCmpShoTermIntgtrStArbnEna';


ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil = DataDict.Calibration;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.LongName = 'Pull Compensation Short Term Integrator State Arbitration Lowpass Filter';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.DocUnits = 'Hz';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.EngDT = dt.float32;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.EngVal = 5;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.EngMin = 0.1;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.EngMax = 100;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.Cardinality = 'Inin';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.CustomerVisible = false;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.Online = false;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.Impact = 'M';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.GraphLink = {''};
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.Monotony = 'None';
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.MaxGrad = 99.9;
ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil.PortName = 'ImcSigArbnPullCmpShoTermIntgtrStArbnLpFil';


ImcSigArbnSysStTmr = DataDict.Calibration;
ImcSigArbnSysStTmr.LongName = 'System State Timer';
ImcSigArbnSysStTmr.Description = [...
  'Timer for switching from 2 ms SysSt information to 10 ms'];
ImcSigArbnSysStTmr.DocUnits = 'MilliSec';
ImcSigArbnSysStTmr.EngDT = dt.float32;
ImcSigArbnSysStTmr.EngVal = 20;
ImcSigArbnSysStTmr.EngMin = 0;
ImcSigArbnSysStTmr.EngMax = 500;
ImcSigArbnSysStTmr.Cardinality = 'Inin';
ImcSigArbnSysStTmr.CustomerVisible = false;
ImcSigArbnSysStTmr.Online = false;
ImcSigArbnSysStTmr.Impact = 'H';
ImcSigArbnSysStTmr.TuningOwner = 'CSE';
ImcSigArbnSysStTmr.GraphLink = {''};
ImcSigArbnSysStTmr.Monotony = 'None';
ImcSigArbnSysStTmr.MaxGrad = 500;
ImcSigArbnSysStTmr.PortName = 'ImcSigArbnSysStTmr';


ImcSigArbnTrakgIntgtrSt1ArbnEna = DataDict.Calibration;
ImcSigArbnTrakgIntgtrSt1ArbnEna.LongName = 'Tracking Integrator State 1 Arbitration Enable';
ImcSigArbnTrakgIntgtrSt1ArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnTrakgIntgtrSt1ArbnEna.DocUnits = 'Cnt';
ImcSigArbnTrakgIntgtrSt1ArbnEna.EngDT = dt.lgc;
ImcSigArbnTrakgIntgtrSt1ArbnEna.EngVal = 1;
ImcSigArbnTrakgIntgtrSt1ArbnEna.EngMin = 0;
ImcSigArbnTrakgIntgtrSt1ArbnEna.EngMax = 1;
ImcSigArbnTrakgIntgtrSt1ArbnEna.Cardinality = 'Inin';
ImcSigArbnTrakgIntgtrSt1ArbnEna.CustomerVisible = false;
ImcSigArbnTrakgIntgtrSt1ArbnEna.Online = false;
ImcSigArbnTrakgIntgtrSt1ArbnEna.Impact = 'M';
ImcSigArbnTrakgIntgtrSt1ArbnEna.TuningOwner = 'CSE';
ImcSigArbnTrakgIntgtrSt1ArbnEna.GraphLink = {''};
ImcSigArbnTrakgIntgtrSt1ArbnEna.Monotony = 'None';
ImcSigArbnTrakgIntgtrSt1ArbnEna.MaxGrad = 1;
ImcSigArbnTrakgIntgtrSt1ArbnEna.PortName = 'ImcSigArbnTrakgIntgtrSt1ArbnEna';


ImcSigArbnTrakgIntgtrSt1ArbnLpFil = DataDict.Calibration;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.LongName = 'Tracking Integrator State 1 Arbitration Lowpass Filter';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.DocUnits = 'Hz';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.EngDT = dt.float32;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.EngVal = 5;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.EngMin = 0.1;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.EngMax = 100;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.Cardinality = 'Inin';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.CustomerVisible = false;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.Online = false;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.Impact = 'M';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.GraphLink = {''};
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.Monotony = 'None';
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.MaxGrad = 99.9;
ImcSigArbnTrakgIntgtrSt1ArbnLpFil.PortName = 'ImcSigArbnTrakgIntgtrSt1ArbnLpFil';


ImcSigArbnTrakgIntgtrSt2ArbnEna = DataDict.Calibration;
ImcSigArbnTrakgIntgtrSt2ArbnEna.LongName = 'Tracking Integrator State 2 Arbitration Enable';
ImcSigArbnTrakgIntgtrSt2ArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnTrakgIntgtrSt2ArbnEna.DocUnits = 'Cnt';
ImcSigArbnTrakgIntgtrSt2ArbnEna.EngDT = dt.lgc;
ImcSigArbnTrakgIntgtrSt2ArbnEna.EngVal = 1;
ImcSigArbnTrakgIntgtrSt2ArbnEna.EngMin = 0;
ImcSigArbnTrakgIntgtrSt2ArbnEna.EngMax = 1;
ImcSigArbnTrakgIntgtrSt2ArbnEna.Cardinality = 'Inin';
ImcSigArbnTrakgIntgtrSt2ArbnEna.CustomerVisible = false;
ImcSigArbnTrakgIntgtrSt2ArbnEna.Online = false;
ImcSigArbnTrakgIntgtrSt2ArbnEna.Impact = 'M';
ImcSigArbnTrakgIntgtrSt2ArbnEna.TuningOwner = 'CSE';
ImcSigArbnTrakgIntgtrSt2ArbnEna.GraphLink = {''};
ImcSigArbnTrakgIntgtrSt2ArbnEna.Monotony = 'None';
ImcSigArbnTrakgIntgtrSt2ArbnEna.MaxGrad = 1;
ImcSigArbnTrakgIntgtrSt2ArbnEna.PortName = 'ImcSigArbnTrakgIntgtrSt2ArbnEna';


ImcSigArbnTrakgIntgtrSt2ArbnLpFil = DataDict.Calibration;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.LongName = 'Tracking Integrator State 2 Arbitration Lowpass Filter';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.DocUnits = 'Hz';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.EngDT = dt.float32;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.EngVal = 5;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.EngMin = 0.1;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.EngMax = 100;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.Cardinality = 'Inin';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.CustomerVisible = false;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.Online = false;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.Impact = 'M';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.GraphLink = {''};
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.Monotony = 'None';
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.MaxGrad = 99.9;
ImcSigArbnTrakgIntgtrSt2ArbnLpFil.PortName = 'ImcSigArbnTrakgIntgtrSt2ArbnLpFil';


ImcSigArbnVehSpdArbnEna = DataDict.Calibration;
ImcSigArbnVehSpdArbnEna.LongName = 'Vehicle Speed Arbitration Enable';
ImcSigArbnVehSpdArbnEna.Description = [...
  'Boolean for turning offset correction on/off'];
ImcSigArbnVehSpdArbnEna.DocUnits = 'Cnt';
ImcSigArbnVehSpdArbnEna.EngDT = dt.lgc;
ImcSigArbnVehSpdArbnEna.EngVal = 1;
ImcSigArbnVehSpdArbnEna.EngMin = 0;
ImcSigArbnVehSpdArbnEna.EngMax = 1;
ImcSigArbnVehSpdArbnEna.Cardinality = 'Inin';
ImcSigArbnVehSpdArbnEna.CustomerVisible = false;
ImcSigArbnVehSpdArbnEna.Online = false;
ImcSigArbnVehSpdArbnEna.Impact = 'M';
ImcSigArbnVehSpdArbnEna.TuningOwner = 'CSE';
ImcSigArbnVehSpdArbnEna.GraphLink = {''};
ImcSigArbnVehSpdArbnEna.Monotony = 'None';
ImcSigArbnVehSpdArbnEna.MaxGrad = 1;
ImcSigArbnVehSpdArbnEna.PortName = 'ImcSigArbnVehSpdArbnEna';


ImcSigArbnVehSpdArbnLpFil = DataDict.Calibration;
ImcSigArbnVehSpdArbnLpFil.LongName = 'Vehicle Speed Arbitration Lowpass Filter';
ImcSigArbnVehSpdArbnLpFil.Description = 'Filter frequency for arbitration';
ImcSigArbnVehSpdArbnLpFil.DocUnits = 'Hz';
ImcSigArbnVehSpdArbnLpFil.EngDT = dt.float32;
ImcSigArbnVehSpdArbnLpFil.EngVal = 5;
ImcSigArbnVehSpdArbnLpFil.EngMin = 0.1;
ImcSigArbnVehSpdArbnLpFil.EngMax = 100;
ImcSigArbnVehSpdArbnLpFil.Cardinality = 'Inin';
ImcSigArbnVehSpdArbnLpFil.CustomerVisible = false;
ImcSigArbnVehSpdArbnLpFil.Online = false;
ImcSigArbnVehSpdArbnLpFil.Impact = 'M';
ImcSigArbnVehSpdArbnLpFil.TuningOwner = 'CSE';
ImcSigArbnVehSpdArbnLpFil.GraphLink = {''};
ImcSigArbnVehSpdArbnLpFil.Monotony = 'None';
ImcSigArbnVehSpdArbnLpFil.MaxGrad = 99.9;
ImcSigArbnVehSpdArbnLpFil.PortName = 'ImcSigArbnVehSpdArbnLpFil';


ImcSigArbnVehSpdArbnOffsLim = DataDict.Calibration;
ImcSigArbnVehSpdArbnOffsLim.LongName = 'Vehicle Speed Arbitration Offset Limit';
ImcSigArbnVehSpdArbnOffsLim.Description = [...
  'Vehicle Speed Arbitration Offset Limit'];
ImcSigArbnVehSpdArbnOffsLim.DocUnits = 'Kph';
ImcSigArbnVehSpdArbnOffsLim.EngDT = dt.float32;
ImcSigArbnVehSpdArbnOffsLim.EngVal = 20;
ImcSigArbnVehSpdArbnOffsLim.EngMin = 0;
ImcSigArbnVehSpdArbnOffsLim.EngMax = 250;
ImcSigArbnVehSpdArbnOffsLim.Cardinality = 'Inin';
ImcSigArbnVehSpdArbnOffsLim.CustomerVisible = false;
ImcSigArbnVehSpdArbnOffsLim.Online = false;
ImcSigArbnVehSpdArbnOffsLim.Impact = 'M';
ImcSigArbnVehSpdArbnOffsLim.TuningOwner = 'CSE';
ImcSigArbnVehSpdArbnOffsLim.GraphLink = {''};
ImcSigArbnVehSpdArbnOffsLim.Monotony = 'None';
ImcSigArbnVehSpdArbnOffsLim.MaxGrad = 250;
ImcSigArbnVehSpdArbnOffsLim.PortName = 'ImcSigArbnVehSpdArbnOffsLim';



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
ArbnErrPrev = DataDict.PIM;
ArbnErrPrev.LongName = 'Arbitration Error Previous';
ArbnErrPrev.Description = [...
  'Previous Value of Arbitration Error'];
ArbnErrPrev.DocUnits = 'Cnt';
ArbnErrPrev.EngDT = dt.lgc;
ArbnErrPrev.EngMin = 0;
ArbnErrPrev.EngMax = 1;
ArbnErrPrev.InitRowCol = [1  1];


ArbnFltPrev = DataDict.PIM;
ArbnFltPrev.LongName = 'Arbitration Fault Previous';
ArbnFltPrev.Description = [...
  'Previous Value of Arbitration Fault'];
ArbnFltPrev.DocUnits = 'Cnt';
ArbnFltPrev.EngDT = dt.lgc;
ArbnFltPrev.EngMin = 0;
ArbnFltPrev.EngMax = 1;
ArbnFltPrev.InitRowCol = [1  1];


ArbnFltRefTiEnaLrng = DataDict.PIM;
ArbnFltRefTiEnaLrng.LongName = 'Arbitration Fault Reference Time Enable Learning';
ArbnFltRefTiEnaLrng.Description = [...
  'Arbitration Fault Reference Time Enable Learning'];
ArbnFltRefTiEnaLrng.DocUnits = 'Cnt';
ArbnFltRefTiEnaLrng.EngDT = dt.u32;
ArbnFltRefTiEnaLrng.EngMin = 0;
ArbnFltRefTiEnaLrng.EngMax = 4294967295;
ArbnFltRefTiEnaLrng.InitRowCol = [1  1];


HwAgLpFil = DataDict.PIM;
HwAgLpFil.LongName = 'Handwheel Angle Lowpass Filter';
HwAgLpFil.Description = [...
  'State Variable for Handwheel Angle Lowpass Filter'];
HwAgLpFil.DocUnits = 'Uls';
HwAgLpFil.EngDT = struct.FilLpRec1;
HwAgLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwAgLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwAgLpFil.InitRowCol = [1  1];


HwAgOffsPrev = DataDict.PIM;
HwAgOffsPrev.LongName = 'Handwheel Angle Offset Previous';
HwAgOffsPrev.Description = [...
  'Previous Value of Handwheel Angle Offset'];
HwAgOffsPrev.DocUnits = 'HwDeg';
HwAgOffsPrev.EngDT = dt.float32;
HwAgOffsPrev.EngMin = -600;
HwAgOffsPrev.EngMax = 600;
HwAgOffsPrev.InitRowCol = [1  1];


HwAgTarLpFil = DataDict.PIM;
HwAgTarLpFil.LongName = 'Handwheel Angle Target Lowpass Filter';
HwAgTarLpFil.Description = [...
  'State Variable for Handwheel Angle Target Lowpass Filter'];
HwAgTarLpFil.DocUnits = 'Uls';
HwAgTarLpFil.EngDT = struct.FilLpRec1;
HwAgTarLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwAgTarLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwAgTarLpFil.InitRowCol = [1  1];


HwAgTarOffsPrev = DataDict.PIM;
HwAgTarOffsPrev.LongName = 'Handwheel Angle Target Offset Previous';
HwAgTarOffsPrev.Description = [...
  'Previous Value of Handwheel Angle Target Offset'];
HwAgTarOffsPrev.DocUnits = 'HwDeg';
HwAgTarOffsPrev.EngDT = dt.float32;
HwAgTarOffsPrev.EngMin = -600;
HwAgTarOffsPrev.EngMax = 600;
HwAgTarOffsPrev.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.Description = [...
  'State Variable for Handwheel Torque Lowpass Filter'];
HwTqLpFil.DocUnits = 'Uls';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFil.InitRowCol = [1  1];


HwTqOffsPrev = DataDict.PIM;
HwTqOffsPrev.LongName = 'Handwheel Torque Offset Previous';
HwTqOffsPrev.Description = [...
  'Previous Value of Handwheel Torque Offset'];
HwTqOffsPrev.DocUnits = 'HwNwtMtr';
HwTqOffsPrev.EngDT = dt.float32;
HwTqOffsPrev.EngMin = -250;
HwTqOffsPrev.EngMax = 250;
HwTqOffsPrev.InitRowCol = [1  1];


MotVelCrfOffsPrev = DataDict.PIM;
MotVelCrfOffsPrev.LongName = 'Motor Velocity Offset CRF Previous';
MotVelCrfOffsPrev.Description = [...
  'Previous Value of Motor Velocity Crf Offset '];
MotVelCrfOffsPrev.DocUnits = 'MotRadPerSec';
MotVelCrfOffsPrev.EngDT = dt.float32;
MotVelCrfOffsPrev.EngMin = -250;
MotVelCrfOffsPrev.EngMax = 250;
MotVelCrfOffsPrev.InitRowCol = [1  1];


MotVelLpFil = DataDict.PIM;
MotVelLpFil.LongName = 'Motor Velocity Lowpass Filter';
MotVelLpFil.Description = [...
  'State Variable for Motor Velocity Lowpass Filter'];
MotVelLpFil.DocUnits = 'Uls';
MotVelLpFil.EngDT = struct.FilLpRec1;
MotVelLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotVelLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotVelLpFil.InitRowCol = [1  1];


PosnServoIntgtrLpFil = DataDict.PIM;
PosnServoIntgtrLpFil.LongName = 'Position Servo Integrator Lowpass Filter';
PosnServoIntgtrLpFil.Description = [...
  'State Variable for Position Servo Integrator Lowpass Filter'];
PosnServoIntgtrLpFil.DocUnits = 'Uls';
PosnServoIntgtrLpFil.EngDT = struct.FilLpRec1;
PosnServoIntgtrLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
PosnServoIntgtrLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
PosnServoIntgtrLpFil.InitRowCol = [1  1];


PosnServoIntgtrOffsPrev = DataDict.PIM;
PosnServoIntgtrOffsPrev.LongName = 'Position Servo Integrator Offset Previous';
PosnServoIntgtrOffsPrev.Description = [...
  'Previous Value of Position Servo Integrator Offset'];
PosnServoIntgtrOffsPrev.DocUnits = 'HwNwtMtr';
PosnServoIntgtrOffsPrev.EngDT = dt.float32;
PosnServoIntgtrOffsPrev.EngMin = -5;
PosnServoIntgtrOffsPrev.EngMax = 5;
PosnServoIntgtrOffsPrev.InitRowCol = [1  1];


PullCmpLongTermCmpLpFil = DataDict.PIM;
PullCmpLongTermCmpLpFil.LongName = 'Pull Compensation Long Term Compensation Lowpass Filter';
PullCmpLongTermCmpLpFil.Description = [...
  'State Variable for Pull Compensation Long Term Compensation Lowpass Fi' ...
  'lter'];
PullCmpLongTermCmpLpFil.DocUnits = 'Uls';
PullCmpLongTermCmpLpFil.EngDT = struct.FilLpRec1;
PullCmpLongTermCmpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
PullCmpLongTermCmpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
PullCmpLongTermCmpLpFil.InitRowCol = [1  1];


PullCmpLongTermIntgtrStOffsPrev = DataDict.PIM;
PullCmpLongTermIntgtrStOffsPrev.LongName = 'Pull Compensation Long Term Integrator State Offset Previous';
PullCmpLongTermIntgtrStOffsPrev.Description = [...
  'Previous Value of Pull Compensation Long Term Integrator State'];
PullCmpLongTermIntgtrStOffsPrev.DocUnits = 'HwNwtMtr';
PullCmpLongTermIntgtrStOffsPrev.EngDT = dt.float32;
PullCmpLongTermIntgtrStOffsPrev.EngMin = -10;
PullCmpLongTermIntgtrStOffsPrev.EngMax = 10;
PullCmpLongTermIntgtrStOffsPrev.InitRowCol = [1  1];


PullCmpShoTermCmpLpFil = DataDict.PIM;
PullCmpShoTermCmpLpFil.LongName = 'Pull Compensation Short Term Compensation Lowpass Filter';
PullCmpShoTermCmpLpFil.Description = [...
  'State Variable for Pull Compensation Short Term Compensation Lowpass F' ...
  'ilter'];
PullCmpShoTermCmpLpFil.DocUnits = 'Uls';
PullCmpShoTermCmpLpFil.EngDT = struct.FilLpRec1;
PullCmpShoTermCmpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
PullCmpShoTermCmpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
PullCmpShoTermCmpLpFil.InitRowCol = [1  1];


PullCmpShoTermIntgtrStOffsPrev = DataDict.PIM;
PullCmpShoTermIntgtrStOffsPrev.LongName = 'Pull Compensation Short Term Integrator State Offset Previous';
PullCmpShoTermIntgtrStOffsPrev.Description = [...
  'Previous Value of Pull Compensation Short Term Integrator State Offset' ...
  ''];
PullCmpShoTermIntgtrStOffsPrev.DocUnits = 'HwNwtMtr';
PullCmpShoTermIntgtrStOffsPrev.EngDT = dt.float32;
PullCmpShoTermIntgtrStOffsPrev.EngMin = -10;
PullCmpShoTermIntgtrStOffsPrev.EngMax = 10;
PullCmpShoTermIntgtrStOffsPrev.InitRowCol = [1  1];


SysStLrngEnaPrev = DataDict.PIM;
SysStLrngEnaPrev.LongName = 'System State Learning Enable Previous';
SysStLrngEnaPrev.Description = 'Previous Value of System State';
SysStLrngEnaPrev.DocUnits = 'Cnt';
SysStLrngEnaPrev.EngDT = dt.lgc;
SysStLrngEnaPrev.EngMin = 0;
SysStLrngEnaPrev.EngMax = 1;
SysStLrngEnaPrev.InitRowCol = [1  1];


SysStRefTiEnaLrng = DataDict.PIM;
SysStRefTiEnaLrng.LongName = 'System State Reference Time Enable Learning';
SysStRefTiEnaLrng.Description = [...
  'System State Reference Time Enable Learning'];
SysStRefTiEnaLrng.DocUnits = 'Cnt';
SysStRefTiEnaLrng.EngDT = dt.u32;
SysStRefTiEnaLrng.EngMin = 0;
SysStRefTiEnaLrng.EngMax = 4294967295;
SysStRefTiEnaLrng.InitRowCol = [1  1];


TrakgIntgtrSt1LpFil = DataDict.PIM;
TrakgIntgtrSt1LpFil.LongName = 'Tracking  Integrator State 1 Lowpass Filter';
TrakgIntgtrSt1LpFil.Description = [...
  'State Variable for Tracking  Integrator State 1 Lowpass Filter'];
TrakgIntgtrSt1LpFil.DocUnits = 'Uls';
TrakgIntgtrSt1LpFil.EngDT = struct.FilLpRec1;
TrakgIntgtrSt1LpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
TrakgIntgtrSt1LpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
TrakgIntgtrSt1LpFil.InitRowCol = [1  1];


TrakgIntgtrSt1Offs = DataDict.PIM;
TrakgIntgtrSt1Offs.LongName = 'Tracking  Integrator State 1 Offset';
TrakgIntgtrSt1Offs.Description = [...
  'Tracking  Integrator State 1 Offset'];
TrakgIntgtrSt1Offs.DocUnits = 'HwDegPerSec';
TrakgIntgtrSt1Offs.EngDT = dt.float32;
TrakgIntgtrSt1Offs.EngMin = -1500;
TrakgIntgtrSt1Offs.EngMax = 1500;
TrakgIntgtrSt1Offs.InitRowCol = [1  1];


TrakgIntgtrSt2LpFil = DataDict.PIM;
TrakgIntgtrSt2LpFil.LongName = 'Tracking  Integrator State 2 Lowpass Filter';
TrakgIntgtrSt2LpFil.Description = [...
  'State Variable for Tracking  Integrator State 2 Lowpass Filter'];
TrakgIntgtrSt2LpFil.DocUnits = 'Uls';
TrakgIntgtrSt2LpFil.EngDT = struct.FilLpRec1;
TrakgIntgtrSt2LpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
TrakgIntgtrSt2LpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
TrakgIntgtrSt2LpFil.InitRowCol = [1  1];


TrakgIntgtrSt2Offs = DataDict.PIM;
TrakgIntgtrSt2Offs.LongName = 'Tracking  Integrator State 2 Offset';
TrakgIntgtrSt2Offs.Description = [...
  'Tracking  Integrator State 2 Offset'];
TrakgIntgtrSt2Offs.DocUnits = 'Nwt';
TrakgIntgtrSt2Offs.EngDT = dt.float32;
TrakgIntgtrSt2Offs.EngMin = -15000;
TrakgIntgtrSt2Offs.EngMax = 15000;
TrakgIntgtrSt2Offs.InitRowCol = [1  1];


VehSpdLpFil = DataDict.PIM;
VehSpdLpFil.LongName = 'Vehicle Speed Lowpass Filter';
VehSpdLpFil.Description = [...
  'State Variable for Vehicle Speed Lowpass Filter'];
VehSpdLpFil.DocUnits = 'Uls';
VehSpdLpFil.EngDT = struct.FilLpRec1;
VehSpdLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
VehSpdLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
VehSpdLpFil.InitRowCol = [1  1];


VehSpdOffsPrev = DataDict.PIM;
VehSpdOffsPrev.LongName = 'Vehicle Speed Offset Previous';
VehSpdOffsPrev.Description = [...
  'Previous Value of Vehicle Speed Offset'];
VehSpdOffsPrev.DocUnits = 'Kph';
VehSpdOffsPrev.EngDT = dt.float32;
VehSpdOffsPrev.EngMin = -250;
VehSpdOffsPrev.EngMax = 250;
VehSpdOffsPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_10MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_10MILLISEC_SEC_F32.LongName = '10 Milliseconds';
ARCHGLBPRM_10MILLISEC_SEC_F32.Description = '10ms periodic loop time step';
ARCHGLBPRM_10MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_10MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_10MILLISEC_SEC_F32.EngVal = 0.01;
ARCHGLBPRM_10MILLISEC_SEC_F32.Define = 'Global';


CNV100MICROSECTOMILLISEC_ULS_F32 = DataDict.Constant;
CNV100MICROSECTOMILLISEC_ULS_F32.LongName = 'Convert to Milliseconds';
CNV100MICROSECTOMILLISEC_ULS_F32.Description = [...
  'Multiply by this constant to convert count to milliseconds'];
CNV100MICROSECTOMILLISEC_ULS_F32.DocUnits = 'Uls';
CNV100MICROSECTOMILLISEC_ULS_F32.EngDT = dt.float32;
CNV100MICROSECTOMILLISEC_ULS_F32.EngVal = 0.1;
CNV100MICROSECTOMILLISEC_ULS_F32.Define = 'Local';


ECUIDNTOSETFLT_ULS_U08 = DataDict.Constant;
ECUIDNTOSETFLT_ULS_U08.LongName = 'Ecu Identification To Set Fault';
ECUIDNTOSETFLT_ULS_U08.Description = [...
  'Used to Set Position Tracking Arbitration Fault Mitigation Enable to T' ...
  'rue'];
ECUIDNTOSETFLT_ULS_U08.DocUnits = 'Uls';
ECUIDNTOSETFLT_ULS_U08.EngDT = dt.u08;
ECUIDNTOSETFLT_ULS_U08.EngVal = 2;
ECUIDNTOSETFLT_ULS_U08.Define = 'Local';


ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


HWAGSATNLOWLIM_HWDEG_F32 = DataDict.Constant;
HWAGSATNLOWLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Lower Limit';
HWAGSATNLOWLIM_HWDEG_F32.Description = [...
  'Lower Limit Value of HandWheel Angle Corrected'];
HWAGSATNLOWLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGSATNLOWLIM_HWDEG_F32.EngDT = dt.float32;
HWAGSATNLOWLIM_HWDEG_F32.EngVal = -1440;
HWAGSATNLOWLIM_HWDEG_F32.Define = 'Local';


HWAGSATNUPPRLIM_HWDEG_F32 = DataDict.Constant;
HWAGSATNUPPRLIM_HWDEG_F32.LongName = 'Handwheel Angle Saturation Upper Limit';
HWAGSATNUPPRLIM_HWDEG_F32.Description = [...
  'Upper Limit Value of HandWheel Angle Corrected'];
HWAGSATNUPPRLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGSATNUPPRLIM_HWDEG_F32.EngDT = dt.float32;
HWAGSATNUPPRLIM_HWDEG_F32.EngVal = 1440;
HWAGSATNUPPRLIM_HWDEG_F32.Define = 'Local';


IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.LongName = 'Inter Micro Communication Arbitration Handwheel Angle Target';
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.EngVal = 2;
IMCARBN_IMCSIGARBNHWAGTAR_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNHWAG_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNHWAG_CNT_U16.LongName = 'Inter Micro Communication Arbitration Handwheel Angle';
IMCARBN_IMCSIGARBNHWAG_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNHWAG_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNHWAG_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNHWAG_CNT_U16.EngVal = 1;
IMCARBN_IMCSIGARBNHWAG_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNHWTQ_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.LongName = 'Inter Micro Communication Arbitration Handwheel Torque';
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.EngVal = 13;
IMCARBN_IMCSIGARBNHWTQ_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNMOTVEL_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.LongName = 'Inter Micro Communication Arbitration Motor Velocity';
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.EngVal = 5;
IMCARBN_IMCSIGARBNMOTVEL_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.LongName = 'Inter Micro Communication Arbitration Position Servo Integrator State';
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.EngVal = 10;
IMCARBN_IMCSIGARBNPOSNSERVOINTGTRST_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.LongName = 'Inter Micro Communication Arbitration Position Tracking Integrator State 1';
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.EngVal = 6;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST1_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.LongName = 'Inter Micro Communication Arbitration Position Tracking Integrator State 2';
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.EngVal = 7;
IMCARBN_IMCSIGARBNPOSNTRAKGINTGTRST2_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.LongName = 'Inter Micro Communication Arbitration Pull Compensationn Long Term Compensation State';
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.EngVal = 9;
IMCARBN_IMCSIGARBNPULLCMPLONGTERMCMPST_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.LongName = 'Inter Micro Communication Arbitration Pull Compensationn Short Term Compensation State';
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.EngVal = 8;
IMCARBN_IMCSIGARBNPULLCMPSHOTERMCMPST_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.LongName = 'Inter Micro Communication Arbitration System State SCI';
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.EngVal = 12;
IMCARBN_IMCSIGARBNSYSSTSCI_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNSYSST_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNSYSST_CNT_U16.LongName = 'Inter Micro Communication Arbitration System State';
IMCARBN_IMCSIGARBNSYSST_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNSYSST_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNSYSST_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNSYSST_CNT_U16.EngVal = 11;
IMCARBN_IMCSIGARBNSYSST_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Vehicle Speed Valid';
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.EngVal = 14;
IMCARBN_IMCSIGARBNVEHSPDVLD_CNT_U16.Define = 'Global';


IMCARBN_IMCSIGARBNVEHSPD_CNT_U16 = DataDict.Constant;
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.LongName = 'Inter Micro Communication Arbitration Vehicle Speed';
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.Description = [...
  'The Sig ID referencing the variable coming from other controller'];
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.DocUnits = 'Cnt';
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.EngDT = dt.u16;
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.EngVal = 4;
IMCARBN_IMCSIGARBNVEHSPD_CNT_U16.Define = 'Global';


IMCOFFS_ULS_F32 = DataDict.Constant;
IMCOFFS_ULS_F32.LongName = 'IMC Offset';
IMCOFFS_ULS_F32.Description = [...
  'Used to Calculated the Offset of the Signals When ImcVld is Valid'];
IMCOFFS_ULS_F32.DocUnits = 'Uls';
IMCOFFS_ULS_F32.EngDT = dt.float32;
IMCOFFS_ULS_F32.EngVal = 0.5;
IMCOFFS_ULS_F32.Define = 'Local';


INTGTROFFSSATNLOWLIM_ULS_F32 = DataDict.Constant;
INTGTROFFSSATNLOWLIM_ULS_F32.LongName = 'Integrator Offset Saturation Lower Limit';
INTGTROFFSSATNLOWLIM_ULS_F32.Description = [...
  'Lower Limit Value of PosnServoIntgtrOffs and PosnTrakgIntgtrOffs1'];
INTGTROFFSSATNLOWLIM_ULS_F32.DocUnits = 'Uls';
INTGTROFFSSATNLOWLIM_ULS_F32.EngDT = dt.float32;
INTGTROFFSSATNLOWLIM_ULS_F32.EngVal = -32767.5;
INTGTROFFSSATNLOWLIM_ULS_F32.Define = 'Local';


INTGTROFFSSATNUPPRLIM_ULS_F32 = DataDict.Constant;
INTGTROFFSSATNUPPRLIM_ULS_F32.LongName = 'Integrator Offset Saturation Upper Limit';
INTGTROFFSSATNUPPRLIM_ULS_F32.Description = [...
  'Upper Limit Value of PosnServoIntgtrOffs and PosnTrakgIntgtrOffs1'];
INTGTROFFSSATNUPPRLIM_ULS_F32.DocUnits = 'Uls';
INTGTROFFSSATNUPPRLIM_ULS_F32.EngDT = dt.float32;
INTGTROFFSSATNUPPRLIM_ULS_F32.EngVal = 32767.5;
INTGTROFFSSATNUPPRLIM_ULS_F32.Define = 'Local';


MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity CRF Saturation Lower Limit';
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.Description = [...
  'Lower Limit Value of Motor Velocity CRF Corrected'];
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.EngVal = -1350;
MOTVELCRFSATNLOWLIM_MOTRADPERSEC_F32.Define = 'Local';


MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity CRF Saturation Upper Limit';
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.Description = [...
  'Upper Limit Value of Motor Velocity CRF Corrected'];
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.EngVal = 1350;
MOTVELCRFSATNUPPRLIM_MOTRADPERSEC_F32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32 = DataDict.Constant;
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.LongName = 'Position Tracking Integrator Offset State 2 Saturation Lower Limit';
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.Description = [...
  'Lower Limit Value of Position Tracking Integrator Offset State 2'];
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.DocUnits = 'Nwt';
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.EngDT = dt.float32;
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.EngVal = -20000;
POSNTRAKGINTGTRST2SATNLOWLIM_NWT_F32.Define = 'Local';


POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32 = DataDict.Constant;
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.LongName = 'Position Tracking Integrator Offset State 2 Saturation Upper Limit';
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.Description = [...
  'Upper Limit Value of Position Tracking Integrator Offset State 2'];
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.DocUnits = 'Nwt';
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.EngDT = dt.float32;
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.EngVal = 20000;
POSNTRAKGINTGTRST2SATNUPPRLIM_NWT_F32.Define = 'Local';


VEHSPDSATNLOWLIM_KPH_F32 = DataDict.Constant;
VEHSPDSATNLOWLIM_KPH_F32.LongName = 'Vehicle Speed Saturation Lower Limit';
VEHSPDSATNLOWLIM_KPH_F32.Description = [...
  'Lower Limit Value of Vehicle Speed Corrected'];
VEHSPDSATNLOWLIM_KPH_F32.DocUnits = 'Kph';
VEHSPDSATNLOWLIM_KPH_F32.EngDT = dt.float32;
VEHSPDSATNLOWLIM_KPH_F32.EngVal = 0;
VEHSPDSATNLOWLIM_KPH_F32.Define = 'Local';


VEHSPDSATNUPPRLIM_KPH_F32 = DataDict.Constant;
VEHSPDSATNUPPRLIM_KPH_F32.LongName = 'Vehicle Speed Saturation Upper Limit';
VEHSPDSATNUPPRLIM_KPH_F32.Description = [...
  'Upper Limit Value of Vehicle Speed Corrected'];
VEHSPDSATNUPPRLIM_KPH_F32.DocUnits = 'Kph';
VEHSPDSATNUPPRLIM_KPH_F32.EngDT = dt.float32;
VEHSPDSATNUPPRLIM_KPH_F32.EngVal = 511;
VEHSPDSATNUPPRLIM_KPH_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
ImcSigFltNtc = DataDict.NTC;
ImcSigFltNtc.NtcNr = NtcNr1.NTCNR_0X0D6;
ImcSigFltNtc.NtcTyp = 'None';
ImcSigFltNtc.LongName = 'IMC Signal Arbitration Fault NTC';
ImcSigFltNtc.Description = 'Information Only - trouble code 0X0D6';
ImcSigFltNtc.NtcStInfo = DataDict.NtcStInfoBitPacked;
ImcSigFltNtc.NtcStInfo.Bit0Descr = 'High Offset Correction';
ImcSigFltNtc.NtcStInfo.Bit1Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit2Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit3Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit4Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit5Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit6Descr = 'Unused';
ImcSigFltNtc.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
