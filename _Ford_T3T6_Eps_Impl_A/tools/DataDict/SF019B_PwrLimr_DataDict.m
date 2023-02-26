%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 25-Sep-2017 16:26:27       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF019B = DataDict.FDD;
SF019B.Version = '4.0.X';
SF019B.LongName = 'Power Limiter';
SF019B.ShoName  = 'PwrLimr';
SF019B.DesignASIL = 'D';
SF019B.Description = [...
  'The purpose of the Power Limit function is to limit the system output ' ...
  'power in a manner to enforce a desired limit on the system supply curr' ...
  'ent draw.  The Power Limit function limits system output power as a fu' ...
  'nction of available voltage at the inverter (DC Link Voltage) and Moto' ...
  'r Velocity.  Additionally, a function is included to prevent excessive' ...
  ' motor currents from being requested when the system is very hot (i.e.' ...
  ', in Extended Operating Conditions for temperature). In additional to ' ...
  'calculation of the Power Limit, the Power Limit Function also calculat' ...
  'es a level of degradation from Standard Operating Conditions full perf' ...
  'ormance and sets flags appropriately for a DTC (Log Only). *** PosSrvo' ...
  'Enable_Cnt_lgc is in documentation, but not in code. ***'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrLimrInit1 = DataDict.Runnable;
PwrLimrInit1.Context = 'Rte';
PwrLimrInit1.TimeStep = 0;
PwrLimrInit1.Description = 'Initialization Runnable';

PwrLimrPer1 = DataDict.Runnable;
PwrLimrPer1.Context = 'Rte';
PwrLimrPer1.TimeStep = 0.002;
PwrLimrPer1.Description = '2mS periodic runnable';

PwrLimrPer2 = DataDict.Runnable;
PwrLimrPer2.Context = 'Rte';
PwrLimrPer2.TimeStep = 0.01;
PwrLimrPer2.Description = '10ms periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'PwrLimrPer2'};
GetRefTmr100MicroSec32bit.Description = 'Get current system time.';
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'PwrLimrPer2'};
GetTiSpan100MicroSec32bit.Description = [...
  'Get time difference between the RefTmr and current system time.'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'PwrLimrPer2'};
SetNtcSts.Description = [...
  'Set the NTC status Without Trigger.'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = [...
  'This is the returned value sent out by Diagnostic Manager when the NTC' ...
  ' is set or Reset'];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
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
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
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
AltFltActv = DataDict.IpSignal;
AltFltActv.LongName = 'Alternator Fault Active';
AltFltActv.Description = [...
  'indicates that there is a fault with the alternator'];
AltFltActv.DocUnits = 'Cnt';
AltFltActv.EngDT = dt.lgc;
AltFltActv.EngInit = 0;
AltFltActv.EngMin = 0;
AltFltActv.EngMax = 1;
AltFltActv.ReadIn = {'PwrLimrPer1'};
AltFltActv.ReadType = 'Rte';


BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = [...
  'Indicates the battery voltage available at the inverter input'];
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'PwrLimrPer1','PwrLimrPer2'};
BrdgVltg.ReadType = 'Rte';


DualEcuFltMtgtnSca = DataDict.IpSignal;
DualEcuFltMtgtnSca.LongName = 'Dual ECU Fault Mitigation Scale';
DualEcuFltMtgtnSca.Description = [...
  'Scale output provided to Power limit function'];
DualEcuFltMtgtnSca.DocUnits = 'Uls';
DualEcuFltMtgtnSca.EngDT = dt.float32;
DualEcuFltMtgtnSca.EngInit = 0.5;
DualEcuFltMtgtnSca.EngMin = 0;
DualEcuFltMtgtnSca.EngMax = 1;
DualEcuFltMtgtnSca.ReadIn = {'PwrLimrPer1'};
DualEcuFltMtgtnSca.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function.'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 255;
MotAndThermProtnLoaMod.ReadIn = {'PwrLimrPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotBackEmfConEstimd = DataDict.IpSignal;
MotBackEmfConEstimd.LongName = 'Motor Back EMF Constant Estimated';
MotBackEmfConEstimd.Description = [...
  'provide the estimaed motor back emf constant'];
MotBackEmfConEstimd.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConEstimd.EngDT = dt.float32;
MotBackEmfConEstimd.EngInit = 0.025;
MotBackEmfConEstimd.EngMin = 0.025;
MotBackEmfConEstimd.EngMax = 0.075;
MotBackEmfConEstimd.ReadIn = {'PwrLimrPer1'};
MotBackEmfConEstimd.ReadType = 'Rte';


MotTqCmdMrf = DataDict.IpSignal;
MotTqCmdMrf.LongName = 'Motor Torque Command MRF';
MotTqCmdMrf.Description = [...
  'Torque command with respect to the motor reference frame'];
MotTqCmdMrf.DocUnits = 'MotNwtMtr';
MotTqCmdMrf.EngDT = dt.float32;
MotTqCmdMrf.EngInit = 0;
MotTqCmdMrf.EngMin = -8.8;
MotTqCmdMrf.EngMax = 8.8;
MotTqCmdMrf.ReadIn = {'PwrLimrPer1','PwrLimrPer2'};
MotTqCmdMrf.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity MRF';
MotVelMrf.Description = 'indicates the motor velocity';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'PwrLimrPer1'};
MotVelMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmdPwrLimd = DataDict.OpSignal;
MotTqCmdPwrLimd.LongName = 'Motor Torque Command Power Limited';
MotTqCmdPwrLimd.Description = [...
  'Motor Torque Command Power Limited.'];
MotTqCmdPwrLimd.DocUnits = 'MotNwtMtr';
MotTqCmdPwrLimd.SwcShoName = 'PwrLimr';
MotTqCmdPwrLimd.EngDT = dt.float32;
MotTqCmdPwrLimd.EngInit = 0;
MotTqCmdPwrLimd.EngMin = -8.8;
MotTqCmdPwrLimd.EngMax = 8.8;
MotTqCmdPwrLimd.TestTolerance = 0.000488281;
MotTqCmdPwrLimd.WrittenIn = {'PwrLimrPer1'};
MotTqCmdPwrLimd.WriteType = 'Rte';


PwrLimrRednFac = DataDict.OpSignal;
PwrLimrRednFac.LongName = 'Power Limiter Reduction Factor';
PwrLimrRednFac.Description = 'Power Limiter Reduction Factor.';
PwrLimrRednFac.DocUnits = 'Uls';
PwrLimrRednFac.SwcShoName = 'PwrLimr';
PwrLimrRednFac.EngDT = dt.float32;
PwrLimrRednFac.EngInit = 0;
PwrLimrRednFac.EngMin = 0;
PwrLimrRednFac.EngMax = 1;
PwrLimrRednFac.TestTolerance = 0.00390625;
PwrLimrRednFac.WrittenIn = {'PwrLimrPer2'};
PwrLimrRednFac.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
MinStdOperLim = DataDict.IRV;
MinStdOperLim.LongName = 'Minimum Standard Operation Limit';
MinStdOperLim.Description = [...
  'Maximum allowable magnitude of net assist when operating at minimum st' ...
  'andard operating conditions.'];
MinStdOperLim.DocUnits = 'MotNwtMtr';
MinStdOperLim.EngDT = dt.float32;
MinStdOperLim.EngInit = 8.8;
MinStdOperLim.EngMin = 0;
MinStdOperLim.EngMax = 8.8;
MinStdOperLim.ReadIn = {'PwrLimrPer2'};
MinStdOperLim.WrittenIn = {'PwrLimrPer1'};


MotEnvlpSpd = DataDict.IRV;
MotEnvlpSpd.LongName = 'Motor Envelope Speed';
MotEnvlpSpd.Description = [...
  'Maximum speed the motor speed will be limited at'];
MotEnvlpSpd.DocUnits = 'MotRadPerSec';
MotEnvlpSpd.EngDT = dt.float32;
MotEnvlpSpd.EngInit = 0;
MotEnvlpSpd.EngMin = -2700;
MotEnvlpSpd.EngMax = 2700;
MotEnvlpSpd.ReadIn = {'PwrLimrPer2'};
MotEnvlpSpd.WrittenIn = {'PwrLimrPer1'};


TqEnvlpLim1 = DataDict.IRV;
TqEnvlpLim1.LongName = 'Torque Envelope Limit 1';
TqEnvlpLim1.Description = [...
  'Abs(MotTqCmd)must be > this, otherwise torque limit = zero.'];
TqEnvlpLim1.DocUnits = 'MotNwtMtr';
TqEnvlpLim1.EngDT = dt.float32;
TqEnvlpLim1.EngInit = 0;
TqEnvlpLim1.EngMin = -8.8;
TqEnvlpLim1.EngMax = 8.8;
TqEnvlpLim1.ReadIn = {'PwrLimrPer2'};
TqEnvlpLim1.WrittenIn = {'PwrLimrPer1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrLimrAssiRednLpFilFrq = DataDict.Calibration;
PwrLimrAssiRednLpFilFrq.LongName = 'Power Limiter Assist Reduction Low Pass Filter Frequency';
PwrLimrAssiRednLpFilFrq.Description = [...
  'Calibration value to set the cutoff frequency of the low pass filter f' ...
  'or the calculated limit percentage.'];
PwrLimrAssiRednLpFilFrq.DocUnits = 'Hz';
PwrLimrAssiRednLpFilFrq.EngDT = dt.float32;
PwrLimrAssiRednLpFilFrq.EngVal = 0.365;
PwrLimrAssiRednLpFilFrq.EngMin = 0.1;
PwrLimrAssiRednLpFilFrq.EngMax = 1;
PwrLimrAssiRednLpFilFrq.Cardinality = 'Cmn';
PwrLimrAssiRednLpFilFrq.CustomerVisible = false;
PwrLimrAssiRednLpFilFrq.Online = false;
PwrLimrAssiRednLpFilFrq.Impact = 'H';
PwrLimrAssiRednLpFilFrq.TuningOwner = 'PwrMngt';
PwrLimrAssiRednLpFilFrq.GraphLink = {''};
PwrLimrAssiRednLpFilFrq.Monotony = 'None';
PwrLimrAssiRednLpFilFrq.MaxGrad = 0.9;
PwrLimrAssiRednLpFilFrq.PortName = 'PwrLimrAssiRednLpFilFrq';


PwrLimrBackEmfConStdT = DataDict.Calibration;
PwrLimrBackEmfConStdT.LongName = 'Power Limiter Back EMF Constant Standard Temperature';
PwrLimrBackEmfConStdT.Description = [...
  'Calibration value representing the minimum expected value of the Ke es' ...
  'timate while operating in the Standard Operating conditions temperatur' ...
  'e range.'];
PwrLimrBackEmfConStdT.DocUnits = 'VoltPerMotRadPerSec';
PwrLimrBackEmfConStdT.EngDT = dt.float32;
PwrLimrBackEmfConStdT.EngVal = 0.0335999;
PwrLimrBackEmfConStdT.EngMin = 0.025;
PwrLimrBackEmfConStdT.EngMax = 0.075;
PwrLimrBackEmfConStdT.Cardinality = 'Cmn';
PwrLimrBackEmfConStdT.CustomerVisible = false;
PwrLimrBackEmfConStdT.Online = false;
PwrLimrBackEmfConStdT.Impact = 'H';
PwrLimrBackEmfConStdT.TuningOwner = 'PwrMngt';
PwrLimrBackEmfConStdT.GraphLink = {''};
PwrLimrBackEmfConStdT.Monotony = 'None';
PwrLimrBackEmfConStdT.MaxGrad = 0.05;
PwrLimrBackEmfConStdT.PortName = 'PwrLimrBackEmfConStdT';


PwrLimrBrdgVltgAdjSlew = DataDict.Calibration;
PwrLimrBrdgVltgAdjSlew.LongName = 'Power Limiter Bridge Voltage Adjust Slew';
PwrLimrBrdgVltgAdjSlew.Description = [...
  'Calibration value to set the slew limit rate at which the Vecu Adjust ' ...
  'value can change. It was Volts/Loop, now it is Volts/Sec'];
PwrLimrBrdgVltgAdjSlew.DocUnits = 'VoltPerSec';
PwrLimrBrdgVltgAdjSlew.EngDT = dt.float32;
PwrLimrBrdgVltgAdjSlew.EngVal = 0.5;
PwrLimrBrdgVltgAdjSlew.EngMin = 0.244;
PwrLimrBrdgVltgAdjSlew.EngMax = 5;
PwrLimrBrdgVltgAdjSlew.Cardinality = 'Cmn';
PwrLimrBrdgVltgAdjSlew.CustomerVisible = false;
PwrLimrBrdgVltgAdjSlew.Online = false;
PwrLimrBrdgVltgAdjSlew.Impact = 'H';
PwrLimrBrdgVltgAdjSlew.TuningOwner = 'PwrMngt';
PwrLimrBrdgVltgAdjSlew.GraphLink = {''};
PwrLimrBrdgVltgAdjSlew.Monotony = 'None';
PwrLimrBrdgVltgAdjSlew.MaxGrad = 4.756;
PwrLimrBrdgVltgAdjSlew.PortName = 'PwrLimrBrdgVltgAdjSlew';


PwrLimrBrdgVltgAltFltAdj = DataDict.Calibration;
PwrLimrBrdgVltgAltFltAdj.LongName = 'Power Limiter Bridge Voltage Alternator Fault Adjustment';
PwrLimrBrdgVltgAltFltAdj.Description = [...
  'Calibration value representing the amount by which Voltage should be r' ...
  'educed during an alternator fault.'];
PwrLimrBrdgVltgAltFltAdj.DocUnits = 'Volt';
PwrLimrBrdgVltgAltFltAdj.EngDT = dt.float32;
PwrLimrBrdgVltgAltFltAdj.EngVal = 1;
PwrLimrBrdgVltgAltFltAdj.EngMin = 0;
PwrLimrBrdgVltgAltFltAdj.EngMax = 3;
PwrLimrBrdgVltgAltFltAdj.Cardinality = 'Cmn';
PwrLimrBrdgVltgAltFltAdj.CustomerVisible = false;
PwrLimrBrdgVltgAltFltAdj.Online = false;
PwrLimrBrdgVltgAltFltAdj.Impact = 'H';
PwrLimrBrdgVltgAltFltAdj.TuningOwner = 'PwrMngt';
PwrLimrBrdgVltgAltFltAdj.GraphLink = {''};
PwrLimrBrdgVltgAltFltAdj.Monotony = 'None';
PwrLimrBrdgVltgAltFltAdj.MaxGrad = 3;
PwrLimrBrdgVltgAltFltAdj.PortName = 'PwrLimrBrdgVltgAltFltAdj';


PwrLimrFilAssiRednThd = DataDict.Calibration;
PwrLimrFilAssiRednThd.LongName = 'Power Limiter Filter Assist Reduction Threshold';
PwrLimrFilAssiRednThd.Description = [...
  'Calibration value above which a Nexteer DTC should be set.'];
PwrLimrFilAssiRednThd.DocUnits = 'Uls';
PwrLimrFilAssiRednThd.EngDT = dt.float32;
PwrLimrFilAssiRednThd.EngVal = 0.6;
PwrLimrFilAssiRednThd.EngMin = 0;
PwrLimrFilAssiRednThd.EngMax = 1;
PwrLimrFilAssiRednThd.Cardinality = 'Cmn';
PwrLimrFilAssiRednThd.CustomerVisible = false;
PwrLimrFilAssiRednThd.Online = false;
PwrLimrFilAssiRednThd.Impact = 'H';
PwrLimrFilAssiRednThd.TuningOwner = 'PwrMngt';
PwrLimrFilAssiRednThd.GraphLink = {''};
PwrLimrFilAssiRednThd.Monotony = 'None';
PwrLimrFilAssiRednThd.MaxGrad = 1;
PwrLimrFilAssiRednThd.PortName = 'PwrLimrFilAssiRednThd';


PwrLimrLoVoltAssiRcvrThd = DataDict.Calibration;
PwrLimrLoVoltAssiRcvrThd.LongName = 'Power Limiter Low Volt Assist Recover Threshold';
PwrLimrLoVoltAssiRcvrThd.Description = [...
  'Calibration value representing the voltage level at which the output f' ...
  'lag(s) can be reset.'];
PwrLimrLoVoltAssiRcvrThd.DocUnits = 'Volt';
PwrLimrLoVoltAssiRcvrThd.EngDT = dt.float32;
PwrLimrLoVoltAssiRcvrThd.EngVal = 13.5;
PwrLimrLoVoltAssiRcvrThd.EngMin = 0;
PwrLimrLoVoltAssiRcvrThd.EngMax = 18;
PwrLimrLoVoltAssiRcvrThd.Cardinality = 'Cmn';
PwrLimrLoVoltAssiRcvrThd.CustomerVisible = false;
PwrLimrLoVoltAssiRcvrThd.Online = false;
PwrLimrLoVoltAssiRcvrThd.Impact = 'H';
PwrLimrLoVoltAssiRcvrThd.TuningOwner = 'PwrMngt';
PwrLimrLoVoltAssiRcvrThd.GraphLink = {''};
PwrLimrLoVoltAssiRcvrThd.Monotony = 'None';
PwrLimrLoVoltAssiRcvrThd.MaxGrad = 18;
PwrLimrLoVoltAssiRcvrThd.PortName = 'PwrLimrLoVoltAssiRcvrThd';


PwrLimrLoVoltAssiRcvrTi = DataDict.Calibration;
PwrLimrLoVoltAssiRcvrTi.LongName = 'Power Limiter Low Volt Assist Recover Time';
PwrLimrLoVoltAssiRcvrTi.Description = [...
  'Calibration value representing how much time Vecu must be above the ca' ...
  'libratable voltage threshold (defined below) in order to reset output ' ...
  'flag status.'];
PwrLimrLoVoltAssiRcvrTi.DocUnits = 'MilliSec';
PwrLimrLoVoltAssiRcvrTi.EngDT = dt.u16;
PwrLimrLoVoltAssiRcvrTi.EngVal = 2000;
PwrLimrLoVoltAssiRcvrTi.EngMin = 0;
PwrLimrLoVoltAssiRcvrTi.EngMax = 65535;
PwrLimrLoVoltAssiRcvrTi.Cardinality = 'Cmn';
PwrLimrLoVoltAssiRcvrTi.CustomerVisible = false;
PwrLimrLoVoltAssiRcvrTi.Online = false;
PwrLimrLoVoltAssiRcvrTi.Impact = 'H';
PwrLimrLoVoltAssiRcvrTi.TuningOwner = 'PwrMngt';
PwrLimrLoVoltAssiRcvrTi.GraphLink = {''};
PwrLimrLoVoltAssiRcvrTi.Monotony = 'None';
PwrLimrLoVoltAssiRcvrTi.MaxGrad = 65535;
PwrLimrLoVoltAssiRcvrTi.PortName = 'PwrLimrLoVoltAssiRcvrTi';


PwrLimrMotEnvlpX = DataDict.Calibration;
PwrLimrMotEnvlpX.LongName = 'Power Limiter Motor Envelope X';
PwrLimrMotEnvlpX.Description = [...
  'Table to determine motor velocity dependent torque limit (nominal) – M' ...
  'otor Envelope (X Axis).'];
PwrLimrMotEnvlpX.DocUnits = 'MotRadPerSec';
PwrLimrMotEnvlpX.EngDT = dt.s11p4;
PwrLimrMotEnvlpX.EngVal =  ...
   [-1100             -800             -650             -550        -353.5625           -287.5        -218.6875        -108.1875                0         108.1875         218.6875            287.5         353.5625              550];
PwrLimrMotEnvlpX.EngMin = -1350;
PwrLimrMotEnvlpX.EngMax = 1350;
PwrLimrMotEnvlpX.Cardinality = 'Cmn';
PwrLimrMotEnvlpX.CustomerVisible = false;
PwrLimrMotEnvlpX.Online = false;
PwrLimrMotEnvlpX.Impact = 'H';
PwrLimrMotEnvlpX.TuningOwner = 'PwrMngt';
PwrLimrMotEnvlpX.GraphLink = {''};
PwrLimrMotEnvlpX.Monotony = 'Strictly_Increasing';
PwrLimrMotEnvlpX.MaxGrad = 500;
PwrLimrMotEnvlpX.PortName = 'PwrLimrMotEnvlpX';


PwrLimrMotEnvlpY = DataDict.Calibration;
PwrLimrMotEnvlpY.LongName = 'Power Limiter Motor Envelope Y';
PwrLimrMotEnvlpY.Description = [...
  'Table to determine motor velocity dependent torque limit (nominal) – M' ...
  'otor Envelope (Y Axis).'];
PwrLimrMotEnvlpY.DocUnits = 'MotNwtMtr';
PwrLimrMotEnvlpY.EngDT = dt.u5p11;
PwrLimrMotEnvlpY.EngVal =  ...
   [0.7202148         1.399902         1.899902         2.299805              3.5         4.100098         4.631836         4.631836         4.631836         4.631836         3.553223         2.926758         2.200195                0];
PwrLimrMotEnvlpY.EngMin = 0;
PwrLimrMotEnvlpY.EngMax = 8.8;
PwrLimrMotEnvlpY.Cardinality = 'Cmn';
PwrLimrMotEnvlpY.CustomerVisible = false;
PwrLimrMotEnvlpY.Online = false;
PwrLimrMotEnvlpY.Impact = 'H';
PwrLimrMotEnvlpY.TuningOwner = 'PwrMngt';
PwrLimrMotEnvlpY.GraphLink = {'PwrLimrMotEnvlpX'};
PwrLimrMotEnvlpY.Monotony = 'None';
PwrLimrMotEnvlpY.MaxGrad = 5;
PwrLimrMotEnvlpY.PortName = 'PwrLimrMotEnvlpY';


PwrLimrMotVelLpFilFrq = DataDict.Calibration;
PwrLimrMotVelLpFilFrq.LongName = 'Power Limiter Motor Velocity Low Pass Filter Frequency';
PwrLimrMotVelLpFilFrq.Description = [...
  'Calibratable Cut off frequency for Motor Velocity Filter – specific to' ...
  ' Brush EPS. Can be calibrated to a very high value to turn off the fil' ...
  'ter for Brushless applications.'];
PwrLimrMotVelLpFilFrq.DocUnits = 'Hz';
PwrLimrMotVelLpFilFrq.EngDT = dt.float32;
PwrLimrMotVelLpFilFrq.EngVal = 100;
PwrLimrMotVelLpFilFrq.EngMin = 0.05;
PwrLimrMotVelLpFilFrq.EngMax = 250;
PwrLimrMotVelLpFilFrq.Cardinality = 'Cmn';
PwrLimrMotVelLpFilFrq.CustomerVisible = false;
PwrLimrMotVelLpFilFrq.Online = false;
PwrLimrMotVelLpFilFrq.Impact = 'H';
PwrLimrMotVelLpFilFrq.TuningOwner = 'PwrMngt';
PwrLimrMotVelLpFilFrq.GraphLink = {''};
PwrLimrMotVelLpFilFrq.Monotony = 'None';
PwrLimrMotVelLpFilFrq.MaxGrad = 249.995;
PwrLimrMotVelLpFilFrq.PortName = 'PwrLimrMotVelLpFilFrq';


PwrLimrSpdAdjSlewDec = DataDict.Calibration;
PwrLimrSpdAdjSlewDec.LongName = 'Speed Adjust Slew Decrease';
PwrLimrSpdAdjSlewDec.Description = [...
  'Calibration value to set the slew limit rate at which the Offset Outpu' ...
  't Velocity value after slew limiting can change when the Offset Output' ...
  ' Velocity value is decreasing.Siva - Discussed with Prerit on 30-Mar-2' ...
  '016 about the new values.'];
PwrLimrSpdAdjSlewDec.DocUnits = 'MotRadPerSecPerSec';
PwrLimrSpdAdjSlewDec.EngDT = dt.float32;
PwrLimrSpdAdjSlewDec.EngVal = 3.125;
PwrLimrSpdAdjSlewDec.EngMin = 0.5;
PwrLimrSpdAdjSlewDec.EngMax = 250000;
PwrLimrSpdAdjSlewDec.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewDec.CustomerVisible = false;
PwrLimrSpdAdjSlewDec.Online = false;
PwrLimrSpdAdjSlewDec.Impact = 'H';
PwrLimrSpdAdjSlewDec.TuningOwner = 'PwrMngt';
PwrLimrSpdAdjSlewDec.GraphLink = {''};
PwrLimrSpdAdjSlewDec.Monotony = 'None';
PwrLimrSpdAdjSlewDec.MaxGrad = 249999.5;
PwrLimrSpdAdjSlewDec.PortName = 'PwrLimrSpdAdjSlewDec';


PwrLimrSpdAdjSlewEna = DataDict.Calibration;
PwrLimrSpdAdjSlewEna.LongName = 'Power Limiter Speed Adjust Slew Enable';
PwrLimrSpdAdjSlewEna.Description = [...
  'Enable for the Offset Output Velocity Slew Rate Limit Function.'];
PwrLimrSpdAdjSlewEna.DocUnits = 'Cnt';
PwrLimrSpdAdjSlewEna.EngDT = dt.lgc;
PwrLimrSpdAdjSlewEna.EngVal = 1;
PwrLimrSpdAdjSlewEna.EngMin = 0;
PwrLimrSpdAdjSlewEna.EngMax = 1;
PwrLimrSpdAdjSlewEna.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewEna.CustomerVisible = false;
PwrLimrSpdAdjSlewEna.Online = false;
PwrLimrSpdAdjSlewEna.Impact = 'H';
PwrLimrSpdAdjSlewEna.TuningOwner = 'PwrMngt';
PwrLimrSpdAdjSlewEna.GraphLink = {''};
PwrLimrSpdAdjSlewEna.Monotony = 'None';
PwrLimrSpdAdjSlewEna.MaxGrad = 1;
PwrLimrSpdAdjSlewEna.PortName = 'PwrLimrSpdAdjSlewEna';


PwrLimrSpdAdjSlewInc = DataDict.Calibration;
PwrLimrSpdAdjSlewInc.LongName = 'Power Limiter Speed Adjust Slew Increase';
PwrLimrSpdAdjSlewInc.Description = [...
  'Calibration value to set the slew limit rate at which the Offset Outpu' ...
  't Velocity value after slew limiting can change when the Offset Output' ...
  ' Velocity value is increasing.Siva - Discussed with Prerit on 30-Mar-2' ...
  '016 about the new values.'];
PwrLimrSpdAdjSlewInc.DocUnits = 'MotRadPerSecPerSec';
PwrLimrSpdAdjSlewInc.EngDT = dt.float32;
PwrLimrSpdAdjSlewInc.EngVal = 3125;
PwrLimrSpdAdjSlewInc.EngMin = 0.5;
PwrLimrSpdAdjSlewInc.EngMax = 250000;
PwrLimrSpdAdjSlewInc.Cardinality = 'Cmn';
PwrLimrSpdAdjSlewInc.CustomerVisible = false;
PwrLimrSpdAdjSlewInc.Online = false;
PwrLimrSpdAdjSlewInc.Impact = 'H';
PwrLimrSpdAdjSlewInc.TuningOwner = 'PwrMngt';
PwrLimrSpdAdjSlewInc.GraphLink = {''};
PwrLimrSpdAdjSlewInc.Monotony = 'None';
PwrLimrSpdAdjSlewInc.MaxGrad = 249999.5;
PwrLimrSpdAdjSlewInc.PortName = 'PwrLimrSpdAdjSlewInc';


PwrLimrStdOperMotEnvlpX = DataDict.Calibration;
PwrLimrStdOperMotEnvlpX.LongName = 'Power Limiter Standard Operating Motor Envelope Table X';
PwrLimrStdOperMotEnvlpX.Description = [...
  'Table to determine motor velocity dependent torque limit at minimum St' ...
  'andard Operating Conditions Voltage.'];
PwrLimrStdOperMotEnvlpX.DocUnits = 'MotRadPerSec';
PwrLimrStdOperMotEnvlpX.EngDT = dt.u11p5;
PwrLimrStdOperMotEnvlpX.EngVal =  ...
   [0          68.1875         178.6563         247.4688         313.5625              510];
PwrLimrStdOperMotEnvlpX.EngMin = 0;
PwrLimrStdOperMotEnvlpX.EngMax = 1350;
PwrLimrStdOperMotEnvlpX.Cardinality = 'Cmn';
PwrLimrStdOperMotEnvlpX.CustomerVisible = false;
PwrLimrStdOperMotEnvlpX.Online = false;
PwrLimrStdOperMotEnvlpX.Impact = 'H';
PwrLimrStdOperMotEnvlpX.TuningOwner = 'PwrMngt';
PwrLimrStdOperMotEnvlpX.GraphLink = {''};
PwrLimrStdOperMotEnvlpX.Monotony = 'Strictly_Increasing';
PwrLimrStdOperMotEnvlpX.MaxGrad = 500;
PwrLimrStdOperMotEnvlpX.PortName = 'PwrLimrStdOperMotEnvlpX';


PwrLimrStdOperMotEnvlpY = DataDict.Calibration;
PwrLimrStdOperMotEnvlpY.LongName = 'Power Limiter Standard Operating Motor Envelope Table Y';
PwrLimrStdOperMotEnvlpY.Description = [...
  'Table to determine motor velocity dependent torque limit at minimum St' ...
  'andard Operating Conditions Voltage.'];
PwrLimrStdOperMotEnvlpY.DocUnits = 'MotNwtMtr';
PwrLimrStdOperMotEnvlpY.EngDT = dt.u4p12;
PwrLimrStdOperMotEnvlpY.EngVal =  ...
   [4.63208          4.63208         3.552979         2.927002         2.199951                0];
PwrLimrStdOperMotEnvlpY.EngMin = 0;
PwrLimrStdOperMotEnvlpY.EngMax = 8.8;
PwrLimrStdOperMotEnvlpY.Cardinality = 'Cmn';
PwrLimrStdOperMotEnvlpY.CustomerVisible = false;
PwrLimrStdOperMotEnvlpY.Online = false;
PwrLimrStdOperMotEnvlpY.Impact = 'H';
PwrLimrStdOperMotEnvlpY.TuningOwner = 'PwrMngt';
PwrLimrStdOperMotEnvlpY.GraphLink = {'PwrLimrStdOperMotEnvlpX'};
PwrLimrStdOperMotEnvlpY.Monotony = 'None';
PwrLimrStdOperMotEnvlpY.MaxGrad = 5;
PwrLimrStdOperMotEnvlpY.PortName = 'PwrLimrStdOperMotEnvlpY';


PwrLimrVltgDptMotVelOffsX = DataDict.Calibration;
PwrLimrVltgDptMotVelOffsX.LongName = 'Power Limiter Voltage Dependent Motor Velocity Offset Table X';
PwrLimrVltgDptMotVelOffsX.Description = [...
  'Table to determine Voltage dependent motor velocity offset for use in ' ...
  'Output Velocity Function (X Axis).'];
PwrLimrVltgDptMotVelOffsX.DocUnits = 'Volt';
PwrLimrVltgDptMotVelOffsX.EngDT = dt.u5p11;
PwrLimrVltgDptMotVelOffsX.EngVal =  ...
   [8.542969         9.144531         9.242188          9.34375         9.441406         9.542969         10.04297         10.54297         10.84375         12.34375];
PwrLimrVltgDptMotVelOffsX.EngMin = 5;
PwrLimrVltgDptMotVelOffsX.EngMax = 31;
PwrLimrVltgDptMotVelOffsX.Cardinality = 'Cmn';
PwrLimrVltgDptMotVelOffsX.CustomerVisible = false;
PwrLimrVltgDptMotVelOffsX.Online = false;
PwrLimrVltgDptMotVelOffsX.Impact = 'H';
PwrLimrVltgDptMotVelOffsX.TuningOwner = 'PwrMngt';
PwrLimrVltgDptMotVelOffsX.GraphLink = {''};
PwrLimrVltgDptMotVelOffsX.Monotony = 'Strictly_Increasing';
PwrLimrVltgDptMotVelOffsX.MaxGrad = 10;
PwrLimrVltgDptMotVelOffsX.PortName = 'PwrLimrVltgDptMotVelOffsX';


PwrLimrVltgDptMotVelOffsY = DataDict.Calibration;
PwrLimrVltgDptMotVelOffsY.LongName = 'Power Limiter Voltage Dependent Motor Velocity Offset Table Y';
PwrLimrVltgDptMotVelOffsY.Description = [...
  'Table to determine Voltage dependent motor velocity offset for use in ' ...
  'Output Velocity Function (Y Axis).'];
PwrLimrVltgDptMotVelOffsY.DocUnits = 'MotRadPerSec';
PwrLimrVltgDptMotVelOffsY.EngDT = dt.u11p5;
PwrLimrVltgDptMotVelOffsY.EngVal =  ...
   [106.0938         89.34375         86.53125            83.75         80.96875         78.15625          64.1875            50.25           41.875                0];
PwrLimrVltgDptMotVelOffsY.EngMin = 0;
PwrLimrVltgDptMotVelOffsY.EngMax = 695;
PwrLimrVltgDptMotVelOffsY.Cardinality = 'Cmn';
PwrLimrVltgDptMotVelOffsY.CustomerVisible = false;
PwrLimrVltgDptMotVelOffsY.Online = false;
PwrLimrVltgDptMotVelOffsY.Impact = 'H';
PwrLimrVltgDptMotVelOffsY.TuningOwner = 'PwrMngt';
PwrLimrVltgDptMotVelOffsY.GraphLink = {'PwrLimrVltgDptMotVelOffsX'};
PwrLimrVltgDptMotVelOffsY.Monotony = 'None';
PwrLimrVltgDptMotVelOffsY.MaxGrad = 400;
PwrLimrVltgDptMotVelOffsY.PortName = 'PwrLimrVltgDptMotVelOffsY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dPwrLimrFildMotVel = DataDict.Display;
dPwrLimrFildMotVel.LongName = 'Power Limiter Filtered Motor Velocity';
dPwrLimrFildMotVel.Description = [...
  'Motor velocity after low-pass filter.'];
dPwrLimrFildMotVel.DocUnits = 'MotRadPerSec';
dPwrLimrFildMotVel.EngDT = dt.float32;
dPwrLimrFildMotVel.EngMin = -1350;
dPwrLimrFildMotVel.EngMax = 1350;
dPwrLimrFildMotVel.InitRowCol = [1  1];


dPwrLimrLimDif = DataDict.Display;
dPwrLimrLimDif.LongName = 'Power Limiter Limit Difference';
dPwrLimrLimDif.Description = [...
  'Difference between two limiters: TrqEnvLmt1 and MinStdOpmacaulay culki' ...
  'nLmt.'];
dPwrLimrLimDif.DocUnits = 'MotNwtMtr';
dPwrLimrLimDif.EngDT = dt.float32;
dPwrLimrLimDif.EngMin = -8.8;
dPwrLimrLimDif.EngMax = 8.8;
dPwrLimrLimDif.InitRowCol = [1  1];


dPwrLimrMinStdOperLim = DataDict.Display;
dPwrLimrMinStdOperLim.LongName = 'Power Limiter Minimum Standard Operating Limit';
dPwrLimrMinStdOperLim.Description = [...
  'Maximum net assist at minimum voltage defined for Stadand Operating Co' ...
  'ndition.'];
dPwrLimrMinStdOperLim.DocUnits = 'MotNwtMtr';
dPwrLimrMinStdOperLim.EngDT = dt.float32;
dPwrLimrMinStdOperLim.EngMin = 0;
dPwrLimrMinStdOperLim.EngMax = 8.8;
dPwrLimrMinStdOperLim.InitRowCol = [1  1];


dPwrLimrMotEnvlpSpd = DataDict.Display;
dPwrLimrMotEnvlpSpd.LongName = 'Power Limiter Motor Envelope Speed';
dPwrLimrMotEnvlpSpd.Description = [...
  'The Sum of Filtered Motor Velocity and Speed Adjust'];
dPwrLimrMotEnvlpSpd.DocUnits = 'MotRadPerSec';
dPwrLimrMotEnvlpSpd.EngDT = dt.float32;
dPwrLimrMotEnvlpSpd.EngMin = -2045;
dPwrLimrMotEnvlpSpd.EngMax = 2045;
dPwrLimrMotEnvlpSpd.InitRowCol = [1  1];


dPwrLimrMotTqCmdIvtrLoaSca = DataDict.Display;
dPwrLimrMotTqCmdIvtrLoaSca.LongName = 'Motor Torque Command Inverter LOA Scale';
dPwrLimrMotTqCmdIvtrLoaSca.Description = [...
  'Motor Torque Command Divided based on Inverter LOA Enabled'];
dPwrLimrMotTqCmdIvtrLoaSca.DocUnits = 'Uls';
dPwrLimrMotTqCmdIvtrLoaSca.EngDT = dt.float32;
dPwrLimrMotTqCmdIvtrLoaSca.EngMin = 1;
dPwrLimrMotTqCmdIvtrLoaSca.EngMax = 2;
dPwrLimrMotTqCmdIvtrLoaSca.InitRowCol = [1  1];


dPwrLimrOutpVelOffs = DataDict.Display;
dPwrLimrOutpVelOffs.LongName = 'Power Limiter Output Velocity Offset';
dPwrLimrOutpVelOffs.Description = [...
  'Based on Vecu, motor velocity is offset this much.'];
dPwrLimrOutpVelOffs.DocUnits = 'MotRadPerSec';
dPwrLimrOutpVelOffs.EngDT = dt.float32;
dPwrLimrOutpVelOffs.EngMin = 0;
dPwrLimrOutpVelOffs.EngMax = 695;
dPwrLimrOutpVelOffs.InitRowCol = [1  1];


dPwrLimrSpdAdj = DataDict.Display;
dPwrLimrSpdAdj.LongName = 'Power Limiter Speed Adjust';
dPwrLimrSpdAdj.Description = 'OpVelOffset slewed or not slewed';
dPwrLimrSpdAdj.DocUnits = 'MotRadPerSec';
dPwrLimrSpdAdj.EngDT = dt.float32;
dPwrLimrSpdAdj.EngMin = 0;
dPwrLimrSpdAdj.EngMax = 695;
dPwrLimrSpdAdj.InitRowCol = [1  1];


dPwrLimrTLimMaxCurr = DataDict.Display;
dPwrLimrTLimMaxCurr.LongName = 'Power Limiter Torque Limit from Maximum Current';
dPwrLimrTLimMaxCurr.Description = [...
  'Motor command magnitude limt based on estimated Ke.'];
dPwrLimrTLimMaxCurr.DocUnits = 'MotNwtMtr';
dPwrLimrTLimMaxCurr.EngDT = dt.float32;
dPwrLimrTLimMaxCurr.EngMin = 0;
dPwrLimrTLimMaxCurr.EngMax = 26.4;
dPwrLimrTLimMaxCurr.InitRowCol = [1  1];


dPwrLimrTqEnvlpLim1 = DataDict.Display;
dPwrLimrTqEnvlpLim1.LongName = 'Power Limiter Torque Envelope Limit 1';
dPwrLimrTqEnvlpLim1.Description = [...
  'Output value from torque envelope lookup table.'];
dPwrLimrTqEnvlpLim1.DocUnits = 'MotNwtMtr';
dPwrLimrTqEnvlpLim1.EngDT = dt.float32;
dPwrLimrTqEnvlpLim1.EngMin = 0;
dPwrLimrTqEnvlpLim1.EngMax = 8.8;
dPwrLimrTqEnvlpLim1.InitRowCol = [1  1];


dPwrLimrTqEnvlpLim4 = DataDict.Display;
dPwrLimrTqEnvlpLim4.LongName = 'Power Limiter Torque Envelope Limit 4';
dPwrLimrTqEnvlpLim4.Description = [...
  'Output value from torque envelope lookup table.'];
dPwrLimrTqEnvlpLim4.DocUnits = 'MotNwtMtr';
dPwrLimrTqEnvlpLim4.EngDT = dt.float32;
dPwrLimrTqEnvlpLim4.EngMin = 0;
dPwrLimrTqEnvlpLim4.EngMax = 8.8;
dPwrLimrTqEnvlpLim4.InitRowCol = [1  1];


dPwrLimrTqLim = DataDict.Display;
dPwrLimrTqLim.LongName = 'Power Limiter Torque Limit';
dPwrLimrTqLim.Description = [...
  'Amount of assist reduction divided by full performance in minimum stan' ...
  'dard operating condition voltage.'];
dPwrLimrTqLim.DocUnits = 'Uls';
dPwrLimrTqLim.EngDT = dt.float32;
dPwrLimrTqLim.EngMin = 0;
dPwrLimrTqLim.EngMax = 1;
dPwrLimrTqLim.InitRowCol = [1  1];


dPwrLimrTqLim1 = DataDict.Display;
dPwrLimrTqLim1.LongName = 'Power Limiter Torque Limit 1';
dPwrLimrTqLim1.Description = [...
  'Minimum of TrqLmtMaxCurr and TrqEnvLmt1'];
dPwrLimrTqLim1.DocUnits = 'MotNwtMtr';
dPwrLimrTqLim1.EngDT = dt.float32;
dPwrLimrTqLim1.EngMin = -8.8;
dPwrLimrTqLim1.EngMax = 8.8;
dPwrLimrTqLim1.InitRowCol = [1  1];


dPwrLimrTqLim4 = DataDict.Display;
dPwrLimrTqLim4.LongName = 'Power Limiter Torque Limit 4';
dPwrLimrTqLim4.Description = [...
  'Minimum of TrqLmtMaxCurr and TrqEnvLmt4'];
dPwrLimrTqLim4.DocUnits = 'MotNwtMtr';
dPwrLimrTqLim4.EngDT = dt.float32;
dPwrLimrTqLim4.EngMin = -8.8;
dPwrLimrTqLim4.EngMax = 0;
dPwrLimrTqLim4.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
BrdgVltgRateLim = DataDict.PIM;
BrdgVltgRateLim.LongName = 'Bridge Voltage Rate Limit';
BrdgVltgRateLim.Description = 'Bridge Voltage Rate Limit.';
BrdgVltgRateLim.DocUnits = 'Volt';
BrdgVltgRateLim.EngDT = dt.float32;
BrdgVltgRateLim.EngMin = 0;
BrdgVltgRateLim.EngMax = 3;
BrdgVltgRateLim.InitRowCol = [1  1];


LimdAssiLoVltgPrev = DataDict.PIM;
LimdAssiLoVltgPrev.LongName = 'Limited Assist due to Low Voltage Previous';
LimdAssiLoVltgPrev.Description = [...
  'Limited Assist due to Low Voltage Previous.'];
LimdAssiLoVltgPrev.DocUnits = 'Cnt';
LimdAssiLoVltgPrev.EngDT = dt.lgc;
LimdAssiLoVltgPrev.EngMin = 0;
LimdAssiLoVltgPrev.EngMax = 1;
LimdAssiLoVltgPrev.InitRowCol = [1  1];


MotVelLpFil = DataDict.PIM;
MotVelLpFil.LongName = 'Motor Velocity Lowpass Filter';
MotVelLpFil.Description = [...
  'A Structure of Low Pass Filter Gain and State Variable'];
MotVelLpFil.DocUnits = 'Cnt';
MotVelLpFil.EngDT = struct.FilLpRec1;
MotVelLpFil.EngMin = [struct('FilSt',-1350,'FilGain',0.000628)];
MotVelLpFil.EngMax = [struct('FilSt',1350,'FilGain',0.95678)];
MotVelLpFil.InitRowCol = [1  1];


OutpVelOffsRateLimd = DataDict.PIM;
OutpVelOffsRateLimd.LongName = 'Output Velocity Offset Rate Limited';
OutpVelOffsRateLimd.Description = 'Output Velocity Offset Rate Limit.';
OutpVelOffsRateLimd.DocUnits = 'MotRadPerSec';
OutpVelOffsRateLimd.EngDT = dt.float32;
OutpVelOffsRateLimd.EngMin = 0;
OutpVelOffsRateLimd.EngMax = 695;
OutpVelOffsRateLimd.InitRowCol = [1  1];


RefTmr = DataDict.PIM;
RefTmr.LongName = 'Reference Timer';
RefTmr.Description = 'Reference time in 100 uSec';
RefTmr.DocUnits = 'Cnt';
RefTmr.EngDT = dt.u32;
RefTmr.EngMin = 0;
RefTmr.EngMax = 4294967295;
RefTmr.InitRowCol = [1  1];


RefTmrPrev = DataDict.PIM;
RefTmrPrev.LongName = 'Reference Timer Previous';
RefTmrPrev.Description = [...
  'Previous value of Reference time in 100 uSec'];
RefTmrPrev.DocUnits = 'Cnt';
RefTmrPrev.EngDT = dt.u32;
RefTmrPrev.EngMin = 0;
RefTmrPrev.EngMax = 4294967295;
RefTmrPrev.InitRowCol = [1  1];


TqLimLpFil = DataDict.PIM;
TqLimLpFil.LongName = 'Torque limit Lowpass Filter';
TqLimLpFil.Description = [...
  'A Structure of Low Pass Filter Gain and State Variable'];
TqLimLpFil.DocUnits = 'Cnt';
TqLimLpFil.EngDT = struct.FilLpRec1;
TqLimLpFil.EngMin = [struct('FilSt',0,'FilGain',0.00626)];
TqLimLpFil.EngMax = [struct('FilSt',8.8,'FilGain',0.06089)];
TqLimLpFil.InitRowCol = [1  1];



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


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


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
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Milliseconds to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ue is multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


LOASCALEFACTOR_ULS_F32 = DataDict.Constant;
LOASCALEFACTOR_ULS_F32.LongName = 'Loss of Assist Scale Factor';
LOASCALEFACTOR_ULS_F32.Description = 'Loss of Assist Scale Factor';
LOASCALEFACTOR_ULS_F32.DocUnits = 'Uls';
LOASCALEFACTOR_ULS_F32.EngDT = dt.float32;
LOASCALEFACTOR_ULS_F32.EngVal = 2;
LOASCALEFACTOR_ULS_F32.Define = 'Local';


MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32 = DataDict.Constant;
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.LongName = 'Motor Ke High Limit';
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.Description = [...
  'Defensive programming saturation value applied to estimated motor back' ...
  ' emf constant input signal.'];
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.DocUnits = 'VoltPerMotRadPerSec';
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.EngDT = dt.float32;
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.EngVal = 0.075;
MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32.Define = 'Local';


MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32 = DataDict.Constant;
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.LongName = 'Motor Ke Low Limit';
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.Description = [...
  'Defensive programming saturation value applied to estimated motor back' ...
  ' emf constant input signal.  Necessary for divide-by-zero protection.'];
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.DocUnits = 'VoltPerMotRadPerSec';
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.EngDT = dt.float32;
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.EngVal = 0.025;
MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32.Define = 'Local';


NOLOADTQINDEX_CNT_U08 = DataDict.Constant;
NOLOADTQINDEX_CNT_U08.LongName = 'No Load Torque Index';
NOLOADTQINDEX_CNT_U08.Description = [...
  'Index of No Load Torque in Envolope'];
NOLOADTQINDEX_CNT_U08.DocUnits = 'Cnt';
NOLOADTQINDEX_CNT_U08.EngDT = dt.u08;
NOLOADTQINDEX_CNT_U08.EngVal = 13;
NOLOADTQINDEX_CNT_U08.Define = 'Local';


PWRLIMRREDNFACHILIM_ULS_F32 = DataDict.Constant;
PWRLIMRREDNFACHILIM_ULS_F32.LongName = 'Power Limiter Reduction Factor High Limit';
PWRLIMRREDNFACHILIM_ULS_F32.Description = [...
  'Maximum allowable value for Power Limiter Reduction Factor output.'];
PWRLIMRREDNFACHILIM_ULS_F32.DocUnits = 'Uls';
PWRLIMRREDNFACHILIM_ULS_F32.EngDT = dt.float32;
PWRLIMRREDNFACHILIM_ULS_F32.EngVal = 1;
PWRLIMRREDNFACHILIM_ULS_F32.Define = 'Local';


PWRLIMRREDNFACLOLIM_ULS_F32 = DataDict.Constant;
PWRLIMRREDNFACLOLIM_ULS_F32.LongName = 'Power Limiter Reduction Factor Low Limit';
PWRLIMRREDNFACLOLIM_ULS_F32.Description = [...
  'Minimum allowable value for Power Limiter Reduction Factor output.'];
PWRLIMRREDNFACLOLIM_ULS_F32.DocUnits = 'Uls';
PWRLIMRREDNFACLOLIM_ULS_F32.EngDT = dt.float32;
PWRLIMRREDNFACLOLIM_ULS_F32.EngVal = 0;
PWRLIMRREDNFACLOLIM_ULS_F32.Define = 'Local';


STALLTQINDEX_CNT_U08 = DataDict.Constant;
STALLTQINDEX_CNT_U08.LongName = 'Stall Torque Index';
STALLTQINDEX_CNT_U08.Description = 'Index of Stall Torque in Envolope';
STALLTQINDEX_CNT_U08.DocUnits = 'Cnt';
STALLTQINDEX_CNT_U08.EngDT = dt.u08;
STALLTQINDEX_CNT_U08.EngVal = 8;
STALLTQINDEX_CNT_U08.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';


TRANTQINDEX_CNT_U08 = DataDict.Constant;
TRANTQINDEX_CNT_U08.LongName = 'Transition Torque Index';
TRANTQINDEX_CNT_U08.Description = [...
  'Index of Transition Torque in Envolope'];
TRANTQINDEX_CNT_U08.DocUnits = 'Cnt';
TRANTQINDEX_CNT_U08.EngDT = dt.u08;
TRANTQINDEX_CNT_U08.EngVal = 2;
TRANTQINDEX_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LimdAssiLoVltg = DataDict.NTC;
LimdAssiLoVltg.NtcNr = NtcNr1.NTCNR_0X0B2;
LimdAssiLoVltg.NtcTyp = 'None';
LimdAssiLoVltg.LongName = 'Limited Assist due to Low Voltage';
LimdAssiLoVltg.Description = 'The NTC flag that is used to set limited assist based on voltage being too low';
LimdAssiLoVltg.NtcStInfo = DataDict.NtcStInfoBitPacked;
LimdAssiLoVltg.NtcStInfo.Bit0Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit1Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit2Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit3Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit4Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit5Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit6Descr = 'Unused';
LimdAssiLoVltg.NtcStInfo.Bit7Descr = 'Unused';
LimdAssiLoVltg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
