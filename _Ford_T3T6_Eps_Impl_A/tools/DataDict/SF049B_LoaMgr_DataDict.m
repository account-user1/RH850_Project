%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Sep-2017 15:25:19       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF049B = DataDict.FDD;
SF049B.Version = '1.0.X';
SF049B.LongName = 'Loss of Assist Manager';
SF049B.ShoName  = 'LoaMgr';
SF049B.DesignASIL = 'D';
SF049B.Description = [...
  'This function monitors monitors sensor redundancy and allows the choic' ...
  'e of system response to varying numbers and types of sensors being una' ...
  'vailable.  It outputs operating state information that other functions' ...
  ' use to modify their own behavior when appropriate.  It also outputs a' ...
  ' desired system scale factor and slew rate, arbitrated in SF005A State' ...
  ' Output Control and then applied in SF004B Assist Sum and Limit.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
LoaMgrInit1 = DataDict.Runnable;
LoaMgrInit1.Context = 'Rte';
LoaMgrInit1.TimeStep = 0;
LoaMgrInit1.Description = 'Init Runnable';

LoaMgrPer1 = DataDict.Runnable;
LoaMgrPer1.Context = 'Rte';
LoaMgrPer1.TimeStep = 0.004;
LoaMgrPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'LoaMgrInit1','LoaMgrPer1'};
SetNtcSts.Description = [...
  'Client definition to set the NTC status'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Standard return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Enum to define the NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Info regarding the bits to be set in the NTC'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CurrMeasIdptSig = DataDict.IpSignal;
CurrMeasIdptSig.LongName = 'Current Measure Independent Signal';
CurrMeasIdptSig.Description = 'Current Measure Independent Signal';
CurrMeasIdptSig.DocUnits = 'Cnt';
CurrMeasIdptSig.EngDT = dt.u08;
CurrMeasIdptSig.EngInit = 2;
CurrMeasIdptSig.EngMin = 0;
CurrMeasIdptSig.EngMax = 2;
CurrMeasIdptSig.ReadIn = {'LoaMgrPer1'};
CurrMeasIdptSig.ReadType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostics Status Inverter 1 Inactive Signal';
DiagcStsIvtr1Inactv.Description = 'Inverter 1 inactive flag';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'LoaMgrPer1'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostics Status Inverter 2 Inactive Signal';
DiagcStsIvtr2Inactv.Description = 'Inverter 2 inactive flag';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'LoaMgrPer1'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


HwTqIdptSig = DataDict.IpSignal;
HwTqIdptSig.LongName = 'Handwheel Torque Independent Signal';
HwTqIdptSig.Description = [...
  'Number of independent signals available for LOA mgr'];
HwTqIdptSig.DocUnits = 'Cnt';
HwTqIdptSig.EngDT = dt.u08;
HwTqIdptSig.EngInit = 4;
HwTqIdptSig.EngMin = 0;
HwTqIdptSig.EngMax = 4;
HwTqIdptSig.ReadIn = {'LoaMgrPer1'};
HwTqIdptSig.ReadType = 'Rte';


IvtrFetFltTyp = DataDict.IpSignal;
IvtrFetFltTyp.LongName = 'Inverter FET Fault Type';
IvtrFetFltTyp.Description = [...
  'An indication of a FET failure in the bridge.  Enumerated value indica' ...
  'ting a lower, upper or multiple FET fault detected.'];
IvtrFetFltTyp.DocUnits = 'Cnt';
IvtrFetFltTyp.EngDT = enum.IvtrFetFltTyp1;
IvtrFetFltTyp.EngInit = IvtrFetFltTyp1.IVTRFETFLTTYP_NOFETFLT;
IvtrFetFltTyp.EngMin = IvtrFetFltTyp1.IVTRFETFLTTYP_NOFETFLT;
IvtrFetFltTyp.EngMax = IvtrFetFltTyp1.IVTRFETFLTTYP_MPLFETFLT;
IvtrFetFltTyp.ReadIn = {'LoaMgrPer1'};
IvtrFetFltTyp.ReadType = 'Rte';


LoaScaDi = DataDict.IpSignal;
LoaScaDi.LongName = 'LOA Scale Disable';
LoaScaDi.Description = [...
  'Loss of Assist Scale disable enabled during manufacturing'];
LoaScaDi.DocUnits = 'Cnt';
LoaScaDi.EngDT = dt.lgc;
LoaScaDi.EngInit = 0;
LoaScaDi.EngMin = 0;
LoaScaDi.EngMax = 1;
LoaScaDi.ReadIn = {'LoaMgrPer1'};
LoaScaDi.ReadType = 'Rte';


MotAgMeclIdptSig = DataDict.IpSignal;
MotAgMeclIdptSig.LongName = 'Motor Position Mechanical Independent Signal';
MotAgMeclIdptSig.Description = [...
  'Indicates the number of motor angle signals usable'];
MotAgMeclIdptSig.DocUnits = 'Cnt';
MotAgMeclIdptSig.EngDT = dt.u08;
MotAgMeclIdptSig.EngInit = 3;
MotAgMeclIdptSig.EngMin = 0;
MotAgMeclIdptSig.EngMax = 3;
MotAgMeclIdptSig.ReadIn = {'LoaMgrPer1'};
MotAgMeclIdptSig.ReadType = 'Rte';


MotAgSnsrlsAvl = DataDict.IpSignal;
MotAgSnsrlsAvl.LongName = 'Motor Angle Sensorless Available';
MotAgSnsrlsAvl.Description = [...
  'Sensorless Motor Position Available boolean signal'];
MotAgSnsrlsAvl.DocUnits = 'Cnt';
MotAgSnsrlsAvl.EngDT = dt.lgc;
MotAgSnsrlsAvl.EngInit = 0;
MotAgSnsrlsAvl.EngMin = 0;
MotAgSnsrlsAvl.EngMax = 1;
MotAgSnsrlsAvl.ReadIn = {'LoaMgrPer1'};
MotAgSnsrlsAvl.ReadType = 'Rte';


TqLoaAvl = DataDict.IpSignal;
TqLoaAvl.LongName = 'Torque LOA Available';
TqLoaAvl.Description = [...
  'Signal to communicate if Torque LOA if available for use in other comp' ...
  ''];
TqLoaAvl.DocUnits = 'Cnt';
TqLoaAvl.EngDT = dt.lgc;
TqLoaAvl.EngInit = 0;
TqLoaAvl.EngMin = 0;
TqLoaAvl.EngMax = 1;
TqLoaAvl.ReadIn = {'LoaMgrPer1'};
TqLoaAvl.ReadType = 'Rte';


VehSteerMod = DataDict.IpSignal;
VehSteerMod.LongName = 'Vehicle Steering Mode';
VehSteerMod.Description = [...
  'It indicates the steering mode, base EPS, Semi Autonomous, or Fully Au' ...
  'tonomous.'];
VehSteerMod.DocUnits = 'Cnt';
VehSteerMod.EngDT = enum.SteerMod1;
VehSteerMod.EngInit = SteerMod1.STEERMOD_BASEPS;
VehSteerMod.EngMin = SteerMod1.STEERMOD_BASEPS;
VehSteerMod.EngMax = SteerMod1.STEERMOD_FULLYATNMS;
VehSteerMod.ReadIn = {'LoaMgrPer1'};
VehSteerMod.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTqLoaMtgtnEna = DataDict.OpSignal;
HwTqLoaMtgtnEna.LongName = 'Handwheel Torque LOA Mitigation Enable';
HwTqLoaMtgtnEna.Description = [...
  'Flag from LoaMgr that, when true, tells other functions to enable loss' ...
  ' of assist mitigation.'];
HwTqLoaMtgtnEna.DocUnits = 'Cnt';
HwTqLoaMtgtnEna.SwcShoName = 'LoaMgr';
HwTqLoaMtgtnEna.EngDT = dt.lgc;
HwTqLoaMtgtnEna.EngInit = 0;
HwTqLoaMtgtnEna.EngMin = 0;
HwTqLoaMtgtnEna.EngMax = 1;
HwTqLoaMtgtnEna.TestTolerance = 0;
HwTqLoaMtgtnEna.WrittenIn = {'LoaMgrPer1'};
HwTqLoaMtgtnEna.WriteType = 'Rte';


LoaRateLim = DataDict.OpSignal;
LoaRateLim.LongName = 'Loss of Assist Rate Limit';
LoaRateLim.Description = [...
  'System slew rate requested by LoaMgr, applied to system scale factor.'];
LoaRateLim.DocUnits = 'UlsPerSec';
LoaRateLim.SwcShoName = 'LoaMgr';
LoaRateLim.EngDT = dt.float32;
LoaRateLim.EngInit = 1;
LoaRateLim.EngMin = 0.01;
LoaRateLim.EngMax = 500;
LoaRateLim.TestTolerance = 0.01;
LoaRateLim.WrittenIn = {'LoaMgrPer1'};
LoaRateLim.WriteType = 'Rte';


LoaSca = DataDict.OpSignal;
LoaSca.LongName = 'Loss of Assist Scale';
LoaSca.Description = [...
  'System scale factor requested by LoaMgr.'];
LoaSca.DocUnits = 'Uls';
LoaSca.SwcShoName = 'LoaMgr';
LoaSca.EngDT = dt.float32;
LoaSca.EngInit = 1;
LoaSca.EngMin = 0;
LoaSca.EngMax = 1;
LoaSca.TestTolerance = 0.001;
LoaSca.WrittenIn = {'LoaMgrPer1'};
LoaSca.WriteType = 'Rte';


LoaSt = DataDict.OpSignal;
LoaSt.LongName = 'Loss of Assist State';
LoaSt.Description = 'Enumerated state chosen by LoaMgr';
LoaSt.DocUnits = 'Cnt';
LoaSt.SwcShoName = 'LoaMgr';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = LoaSt1.LOAST_NORM;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.TestTolerance = 0;
LoaSt.WrittenIn = {'LoaMgrPer1'};
LoaSt.WriteType = 'Rte';


MotAgLoaMtgtnEna = DataDict.OpSignal;
MotAgLoaMtgtnEna.LongName = 'Motor Angle LOA Mitigation Enable';
MotAgLoaMtgtnEna.Description = [...
  'Flag from LoaMgr that, when true, tells other functions to enable loss' ...
  ' of assist mitigation.'];
MotAgLoaMtgtnEna.DocUnits = 'Cnt';
MotAgLoaMtgtnEna.SwcShoName = 'LoaMgr';
MotAgLoaMtgtnEna.EngDT = dt.lgc;
MotAgLoaMtgtnEna.EngInit = 0;
MotAgLoaMtgtnEna.EngMin = 0;
MotAgLoaMtgtnEna.EngMax = 1;
MotAgLoaMtgtnEna.TestTolerance = 0;
MotAgLoaMtgtnEna.WrittenIn = {'LoaMgrPer1'};
MotAgLoaMtgtnEna.WriteType = 'Rte';


MotAndThermProtnLoaMod = DataDict.OpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection LOA Mode';
MotAndThermProtnLoaMod.Description = [...
  'This signal contains the data of CurrMeasLoaMtgtnEna at bit 0, IvtrLoa' ...
  'MtgtnEna at bit 1 and FetLoaMtgtnEna at bit 2. Other bits are unused. ' ...
  'At each bit 1 implies enable and 0 implies disable'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.SwcShoName = 'LoaMgr';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 7;
MotAndThermProtnLoaMod.TestTolerance = 0;
MotAndThermProtnLoaMod.WrittenIn = {'LoaMgrPer1'};
MotAndThermProtnLoaMod.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
LoaMgrCurrIvtrMtgtnRate = DataDict.Calibration;
LoaMgrCurrIvtrMtgtnRate.LongName = 'Current and Inverter Mitigation Rate';
LoaMgrCurrIvtrMtgtnRate.Description = [...
  'Slew rate applied to system scale factor when both Motor Current and I' ...
  'nverter are bad'];
LoaMgrCurrIvtrMtgtnRate.DocUnits = 'UlsPerSec';
LoaMgrCurrIvtrMtgtnRate.EngDT = dt.float32;
LoaMgrCurrIvtrMtgtnRate.EngVal = 1;
LoaMgrCurrIvtrMtgtnRate.EngMin = 0.01;
LoaMgrCurrIvtrMtgtnRate.EngMax = 500;
LoaMgrCurrIvtrMtgtnRate.Cardinality = 'Cmn';
LoaMgrCurrIvtrMtgtnRate.CustomerVisible = false;
LoaMgrCurrIvtrMtgtnRate.Online = false;
LoaMgrCurrIvtrMtgtnRate.Impact = 'L';
LoaMgrCurrIvtrMtgtnRate.TuningOwner = 'CSE';
LoaMgrCurrIvtrMtgtnRate.GraphLink = {''};
LoaMgrCurrIvtrMtgtnRate.Monotony = 'None';
LoaMgrCurrIvtrMtgtnRate.MaxGrad = 999;
LoaMgrCurrIvtrMtgtnRate.PortName = 'LoaMgrCurrIvtrMtgtnRate';


LoaMgrCurrIvtrMtgtnSca = DataDict.Calibration;
LoaMgrCurrIvtrMtgtnSca.LongName = 'Current and Inverter Mitigation Scale';
LoaMgrCurrIvtrMtgtnSca.Description = [...
  'System Scale factor during Current and Inverter Mitigation'];
LoaMgrCurrIvtrMtgtnSca.DocUnits = 'Uls';
LoaMgrCurrIvtrMtgtnSca.EngDT = dt.float32;
LoaMgrCurrIvtrMtgtnSca.EngVal = 1;
LoaMgrCurrIvtrMtgtnSca.EngMin = 0;
LoaMgrCurrIvtrMtgtnSca.EngMax = 1;
LoaMgrCurrIvtrMtgtnSca.Cardinality = 'Cmn';
LoaMgrCurrIvtrMtgtnSca.CustomerVisible = false;
LoaMgrCurrIvtrMtgtnSca.Online = false;
LoaMgrCurrIvtrMtgtnSca.Impact = 'H';
LoaMgrCurrIvtrMtgtnSca.TuningOwner = 'CSE';
LoaMgrCurrIvtrMtgtnSca.GraphLink = {''};
LoaMgrCurrIvtrMtgtnSca.Monotony = 'None';
LoaMgrCurrIvtrMtgtnSca.MaxGrad = 999;
LoaMgrCurrIvtrMtgtnSca.PortName = 'LoaMgrCurrIvtrMtgtnSca';


LoaMgrCurrIvtrMtgtnScaZeroEna = DataDict.Calibration;
LoaMgrCurrIvtrMtgtnScaZeroEna.LongName = 'Current and Inverter Mitigation Scale Zero Enable';
LoaMgrCurrIvtrMtgtnScaZeroEna.Description = [...
  'When true, scale factor drops instantly to zero then then slews up to ' ...
  'a target.'];
LoaMgrCurrIvtrMtgtnScaZeroEna.DocUnits = 'Cnt';
LoaMgrCurrIvtrMtgtnScaZeroEna.EngDT = dt.lgc;
LoaMgrCurrIvtrMtgtnScaZeroEna.EngVal = 0;
LoaMgrCurrIvtrMtgtnScaZeroEna.EngMin = 0;
LoaMgrCurrIvtrMtgtnScaZeroEna.EngMax = 1;
LoaMgrCurrIvtrMtgtnScaZeroEna.Cardinality = 'Cmn';
LoaMgrCurrIvtrMtgtnScaZeroEna.CustomerVisible = false;
LoaMgrCurrIvtrMtgtnScaZeroEna.Online = false;
LoaMgrCurrIvtrMtgtnScaZeroEna.Impact = 'H';
LoaMgrCurrIvtrMtgtnScaZeroEna.TuningOwner = 'CSE';
LoaMgrCurrIvtrMtgtnScaZeroEna.GraphLink = {''};
LoaMgrCurrIvtrMtgtnScaZeroEna.Monotony = 'None';
LoaMgrCurrIvtrMtgtnScaZeroEna.MaxGrad = 999;
LoaMgrCurrIvtrMtgtnScaZeroEna.PortName = 'LoaMgrCurrIvtrMtgtnScaZeroEna';


LoaMgrCurrMeasIdptSig0Resp = DataDict.Calibration;
LoaMgrCurrMeasIdptSig0Resp.LongName = 'Current Measure Independent Signal Zero Response';
LoaMgrCurrMeasIdptSig0Resp.Description = [...
  'Desired LOA State when Motor Current Independent Signals count is zero' ...
  '.'];
LoaMgrCurrMeasIdptSig0Resp.DocUnits = 'Cnt';
LoaMgrCurrMeasIdptSig0Resp.EngDT = dt.u08;
LoaMgrCurrMeasIdptSig0Resp.EngVal = 2;
LoaMgrCurrMeasIdptSig0Resp.EngMin = 0;
LoaMgrCurrMeasIdptSig0Resp.EngMax = 5;
LoaMgrCurrMeasIdptSig0Resp.Cardinality = 'Cmn';
LoaMgrCurrMeasIdptSig0Resp.CustomerVisible = false;
LoaMgrCurrMeasIdptSig0Resp.Online = false;
LoaMgrCurrMeasIdptSig0Resp.Impact = 'H';
LoaMgrCurrMeasIdptSig0Resp.TuningOwner = 'Safety';
LoaMgrCurrMeasIdptSig0Resp.GraphLink = {''};
LoaMgrCurrMeasIdptSig0Resp.Monotony = 'None';
LoaMgrCurrMeasIdptSig0Resp.MaxGrad = 999;
LoaMgrCurrMeasIdptSig0Resp.PortName = 'LoaMgrCurrMeasIdptSig0Resp';


LoaMgrCurrMeasIdptSig1Resp = DataDict.Calibration;
LoaMgrCurrMeasIdptSig1Resp.LongName = 'Current Measure Independent Signal One Response';
LoaMgrCurrMeasIdptSig1Resp.Description = [...
  'Desired LOA State when Motor Current Independent Signals count is exac' ...
  'tly one.'];
LoaMgrCurrMeasIdptSig1Resp.DocUnits = 'Cnt';
LoaMgrCurrMeasIdptSig1Resp.EngDT = dt.u08;
LoaMgrCurrMeasIdptSig1Resp.EngVal = 0;
LoaMgrCurrMeasIdptSig1Resp.EngMin = 0;
LoaMgrCurrMeasIdptSig1Resp.EngMax = 5;
LoaMgrCurrMeasIdptSig1Resp.Cardinality = 'Cmn';
LoaMgrCurrMeasIdptSig1Resp.CustomerVisible = false;
LoaMgrCurrMeasIdptSig1Resp.Online = false;
LoaMgrCurrMeasIdptSig1Resp.Impact = 'H';
LoaMgrCurrMeasIdptSig1Resp.TuningOwner = 'Safety';
LoaMgrCurrMeasIdptSig1Resp.GraphLink = {''};
LoaMgrCurrMeasIdptSig1Resp.Monotony = 'None';
LoaMgrCurrMeasIdptSig1Resp.MaxGrad = 999;
LoaMgrCurrMeasIdptSig1Resp.PortName = 'LoaMgrCurrMeasIdptSig1Resp';


LoaMgrCurrMeasIdptSig2Resp = DataDict.Calibration;
LoaMgrCurrMeasIdptSig2Resp.LongName = 'Current Measure Independent Signal Two Response';
LoaMgrCurrMeasIdptSig2Resp.Description = [...
  'Desired LOA State when Motor Current Independent Signals count is exac' ...
  'tly two.'];
LoaMgrCurrMeasIdptSig2Resp.DocUnits = 'Cnt';
LoaMgrCurrMeasIdptSig2Resp.EngDT = dt.u08;
LoaMgrCurrMeasIdptSig2Resp.EngVal = 0;
LoaMgrCurrMeasIdptSig2Resp.EngMin = 0;
LoaMgrCurrMeasIdptSig2Resp.EngMax = 5;
LoaMgrCurrMeasIdptSig2Resp.Cardinality = 'Cmn';
LoaMgrCurrMeasIdptSig2Resp.CustomerVisible = false;
LoaMgrCurrMeasIdptSig2Resp.Online = false;
LoaMgrCurrMeasIdptSig2Resp.Impact = 'H';
LoaMgrCurrMeasIdptSig2Resp.TuningOwner = 'Safety';
LoaMgrCurrMeasIdptSig2Resp.GraphLink = {''};
LoaMgrCurrMeasIdptSig2Resp.Monotony = 'None';
LoaMgrCurrMeasIdptSig2Resp.MaxGrad = 999;
LoaMgrCurrMeasIdptSig2Resp.PortName = 'LoaMgrCurrMeasIdptSig2Resp';


LoaMgrCurrMeasIdptSigFltThd = DataDict.Calibration;
LoaMgrCurrMeasIdptSigFltThd.LongName = 'Current Measure Independent Signal Fault Threshold';
LoaMgrCurrMeasIdptSigFltThd.Description = [...
  'If number of Motor Current signals drops to equal or less than this va' ...
  'lue, set an NTC.'];
LoaMgrCurrMeasIdptSigFltThd.DocUnits = 'Cnt';
LoaMgrCurrMeasIdptSigFltThd.EngDT = dt.u08;
LoaMgrCurrMeasIdptSigFltThd.EngVal = 0;
LoaMgrCurrMeasIdptSigFltThd.EngMin = 0;
LoaMgrCurrMeasIdptSigFltThd.EngMax = 2;
LoaMgrCurrMeasIdptSigFltThd.Cardinality = 'Cmn';
LoaMgrCurrMeasIdptSigFltThd.CustomerVisible = false;
LoaMgrCurrMeasIdptSigFltThd.Online = false;
LoaMgrCurrMeasIdptSigFltThd.Impact = 'H';
LoaMgrCurrMeasIdptSigFltThd.TuningOwner = 'Safety';
LoaMgrCurrMeasIdptSigFltThd.GraphLink = {''};
LoaMgrCurrMeasIdptSigFltThd.Monotony = 'None';
LoaMgrCurrMeasIdptSigFltThd.MaxGrad = 999;
LoaMgrCurrMeasIdptSigFltThd.PortName = 'LoaMgrCurrMeasIdptSigFltThd';


LoaMgrCurrMeasMtgtnRate = DataDict.Calibration;
LoaMgrCurrMeasMtgtnRate.LongName = 'Current Measure Mitigation Rate';
LoaMgrCurrMeasMtgtnRate.Description = [...
  'Slew rate applied to system scale factor when only Motor Current is ba' ...
  'd'];
LoaMgrCurrMeasMtgtnRate.DocUnits = 'UlsPerSec';
LoaMgrCurrMeasMtgtnRate.EngDT = dt.float32;
LoaMgrCurrMeasMtgtnRate.EngVal = 1;
LoaMgrCurrMeasMtgtnRate.EngMin = 0.01;
LoaMgrCurrMeasMtgtnRate.EngMax = 500;
LoaMgrCurrMeasMtgtnRate.Cardinality = 'Cmn';
LoaMgrCurrMeasMtgtnRate.CustomerVisible = false;
LoaMgrCurrMeasMtgtnRate.Online = false;
LoaMgrCurrMeasMtgtnRate.Impact = 'L';
LoaMgrCurrMeasMtgtnRate.TuningOwner = 'CSE';
LoaMgrCurrMeasMtgtnRate.GraphLink = {''};
LoaMgrCurrMeasMtgtnRate.Monotony = 'None';
LoaMgrCurrMeasMtgtnRate.MaxGrad = 999;
LoaMgrCurrMeasMtgtnRate.PortName = 'LoaMgrCurrMeasMtgtnRate';


LoaMgrCurrMeasMtgtnSca = DataDict.Calibration;
LoaMgrCurrMeasMtgtnSca.LongName = 'Current Measure Mitigation Scale';
LoaMgrCurrMeasMtgtnSca.Description = [...
  'System Scale factor during Motor Current Mitigation'];
LoaMgrCurrMeasMtgtnSca.DocUnits = 'Uls';
LoaMgrCurrMeasMtgtnSca.EngDT = dt.float32;
LoaMgrCurrMeasMtgtnSca.EngVal = 1;
LoaMgrCurrMeasMtgtnSca.EngMin = 0;
LoaMgrCurrMeasMtgtnSca.EngMax = 1;
LoaMgrCurrMeasMtgtnSca.Cardinality = 'Cmn';
LoaMgrCurrMeasMtgtnSca.CustomerVisible = false;
LoaMgrCurrMeasMtgtnSca.Online = false;
LoaMgrCurrMeasMtgtnSca.Impact = 'H';
LoaMgrCurrMeasMtgtnSca.TuningOwner = 'CSE';
LoaMgrCurrMeasMtgtnSca.GraphLink = {''};
LoaMgrCurrMeasMtgtnSca.Monotony = 'None';
LoaMgrCurrMeasMtgtnSca.MaxGrad = 999;
LoaMgrCurrMeasMtgtnSca.PortName = 'LoaMgrCurrMeasMtgtnSca';


LoaMgrCurrMeasMtgtnScaZeroEna = DataDict.Calibration;
LoaMgrCurrMeasMtgtnScaZeroEna.LongName = 'Current Measure Mitigation Scale Zero Enable';
LoaMgrCurrMeasMtgtnScaZeroEna.Description = [...
  'When true, scale factor drops instantly to zero then then slews up to ' ...
  'a target.'];
LoaMgrCurrMeasMtgtnScaZeroEna.DocUnits = 'Cnt';
LoaMgrCurrMeasMtgtnScaZeroEna.EngDT = dt.lgc;
LoaMgrCurrMeasMtgtnScaZeroEna.EngVal = 1;
LoaMgrCurrMeasMtgtnScaZeroEna.EngMin = 0;
LoaMgrCurrMeasMtgtnScaZeroEna.EngMax = 1;
LoaMgrCurrMeasMtgtnScaZeroEna.Cardinality = 'Cmn';
LoaMgrCurrMeasMtgtnScaZeroEna.CustomerVisible = false;
LoaMgrCurrMeasMtgtnScaZeroEna.Online = false;
LoaMgrCurrMeasMtgtnScaZeroEna.Impact = 'H';
LoaMgrCurrMeasMtgtnScaZeroEna.TuningOwner = 'CSE';
LoaMgrCurrMeasMtgtnScaZeroEna.GraphLink = {''};
LoaMgrCurrMeasMtgtnScaZeroEna.Monotony = 'None';
LoaMgrCurrMeasMtgtnScaZeroEna.MaxGrad = 999;
LoaMgrCurrMeasMtgtnScaZeroEna.PortName = 'LoaMgrCurrMeasMtgtnScaZeroEna';


LoaMgrFadeOutStRate = DataDict.Calibration;
LoaMgrFadeOutStRate.LongName = 'Fade Out State Rate';
LoaMgrFadeOutStRate.Description = [...
  'Slew rate applied to system scale factor when LoaSt is FadeOut'];
LoaMgrFadeOutStRate.DocUnits = 'UlsPerSec';
LoaMgrFadeOutStRate.EngDT = dt.float32;
LoaMgrFadeOutStRate.EngVal = 1;
LoaMgrFadeOutStRate.EngMin = 0.01;
LoaMgrFadeOutStRate.EngMax = 500;
LoaMgrFadeOutStRate.Cardinality = 'Cmn';
LoaMgrFadeOutStRate.CustomerVisible = false;
LoaMgrFadeOutStRate.Online = false;
LoaMgrFadeOutStRate.Impact = 'L';
LoaMgrFadeOutStRate.TuningOwner = 'CSE';
LoaMgrFadeOutStRate.GraphLink = {''};
LoaMgrFadeOutStRate.Monotony = 'None';
LoaMgrFadeOutStRate.MaxGrad = 999;
LoaMgrFadeOutStRate.PortName = 'LoaMgrFadeOutStRate';


LoaMgrHwTqIdptSig0NoTqLoaResp = DataDict.Calibration;
LoaMgrHwTqIdptSig0NoTqLoaResp.LongName = 'Handwheel Torque Independent Signal Zero No Torque Loss of Assist Response';
LoaMgrHwTqIdptSig0NoTqLoaResp.Description = [...
  'Desired LOA State when Handwheel Torque Independent Signals count drop' ...
  's to zero and there is no software based TLOA functionality available ' ...
  'to mitigate the problem.'];
LoaMgrHwTqIdptSig0NoTqLoaResp.DocUnits = 'Cnt';
LoaMgrHwTqIdptSig0NoTqLoaResp.EngDT = dt.u08;
LoaMgrHwTqIdptSig0NoTqLoaResp.EngVal = 4;
LoaMgrHwTqIdptSig0NoTqLoaResp.EngMin = 0;
LoaMgrHwTqIdptSig0NoTqLoaResp.EngMax = 5;
LoaMgrHwTqIdptSig0NoTqLoaResp.Cardinality = 'Cmn';
LoaMgrHwTqIdptSig0NoTqLoaResp.CustomerVisible = false;
LoaMgrHwTqIdptSig0NoTqLoaResp.Online = false;
LoaMgrHwTqIdptSig0NoTqLoaResp.Impact = 'H';
LoaMgrHwTqIdptSig0NoTqLoaResp.TuningOwner = 'Safety';
LoaMgrHwTqIdptSig0NoTqLoaResp.GraphLink = {''};
LoaMgrHwTqIdptSig0NoTqLoaResp.Monotony = 'None';
LoaMgrHwTqIdptSig0NoTqLoaResp.MaxGrad = 999;
LoaMgrHwTqIdptSig0NoTqLoaResp.PortName = 'LoaMgrHwTqIdptSig0NoTqLoaResp';


LoaMgrHwTqIdptSig1NoTqLoaResp = DataDict.Calibration;
LoaMgrHwTqIdptSig1NoTqLoaResp.LongName = 'Handwheel Torque Independent Signal One No Torque Loss of Assist Response';
LoaMgrHwTqIdptSig1NoTqLoaResp.Description = [...
  'Desired LOA State when Handwheel Torque Independent Signals count is e' ...
  'xactly one and there is no software based TLOA functionality available' ...
  ' to mitigate the problem.'];
LoaMgrHwTqIdptSig1NoTqLoaResp.DocUnits = 'Cnt';
LoaMgrHwTqIdptSig1NoTqLoaResp.EngDT = dt.u08;
LoaMgrHwTqIdptSig1NoTqLoaResp.EngVal = 4;
LoaMgrHwTqIdptSig1NoTqLoaResp.EngMin = 0;
LoaMgrHwTqIdptSig1NoTqLoaResp.EngMax = 5;
LoaMgrHwTqIdptSig1NoTqLoaResp.Cardinality = 'Cmn';
LoaMgrHwTqIdptSig1NoTqLoaResp.CustomerVisible = false;
LoaMgrHwTqIdptSig1NoTqLoaResp.Online = false;
LoaMgrHwTqIdptSig1NoTqLoaResp.Impact = 'H';
LoaMgrHwTqIdptSig1NoTqLoaResp.TuningOwner = 'Safety';
LoaMgrHwTqIdptSig1NoTqLoaResp.GraphLink = {''};
LoaMgrHwTqIdptSig1NoTqLoaResp.Monotony = 'None';
LoaMgrHwTqIdptSig1NoTqLoaResp.MaxGrad = 999;
LoaMgrHwTqIdptSig1NoTqLoaResp.PortName = 'LoaMgrHwTqIdptSig1NoTqLoaResp';


LoaMgrHwTqIdptSig2Resp = DataDict.Calibration;
LoaMgrHwTqIdptSig2Resp.LongName = 'Handwheel Torque Independent Signal Two Response';
LoaMgrHwTqIdptSig2Resp.Description = [...
  'Desired LOA State when Handwheel Torque Independent Signals count is e' ...
  'xactly two.'];
LoaMgrHwTqIdptSig2Resp.DocUnits = 'Cnt';
LoaMgrHwTqIdptSig2Resp.EngDT = dt.u08;
LoaMgrHwTqIdptSig2Resp.EngVal = 0;
LoaMgrHwTqIdptSig2Resp.EngMin = 0;
LoaMgrHwTqIdptSig2Resp.EngMax = 5;
LoaMgrHwTqIdptSig2Resp.Cardinality = 'Cmn';
LoaMgrHwTqIdptSig2Resp.CustomerVisible = false;
LoaMgrHwTqIdptSig2Resp.Online = false;
LoaMgrHwTqIdptSig2Resp.Impact = 'H';
LoaMgrHwTqIdptSig2Resp.TuningOwner = 'Safety';
LoaMgrHwTqIdptSig2Resp.GraphLink = {''};
LoaMgrHwTqIdptSig2Resp.Monotony = 'None';
LoaMgrHwTqIdptSig2Resp.MaxGrad = 999;
LoaMgrHwTqIdptSig2Resp.PortName = 'LoaMgrHwTqIdptSig2Resp';


LoaMgrHwTqIdptSig3Resp = DataDict.Calibration;
LoaMgrHwTqIdptSig3Resp.LongName = 'Handwheel Torque Independent Signal Three Response';
LoaMgrHwTqIdptSig3Resp.Description = [...
  'Desired LOA State when Handwheel Torque Independent Signals count is e' ...
  'xactly three.'];
LoaMgrHwTqIdptSig3Resp.DocUnits = 'Cnt';
LoaMgrHwTqIdptSig3Resp.EngDT = dt.u08;
LoaMgrHwTqIdptSig3Resp.EngVal = 0;
LoaMgrHwTqIdptSig3Resp.EngMin = 0;
LoaMgrHwTqIdptSig3Resp.EngMax = 5;
LoaMgrHwTqIdptSig3Resp.Cardinality = 'Cmn';
LoaMgrHwTqIdptSig3Resp.CustomerVisible = false;
LoaMgrHwTqIdptSig3Resp.Online = false;
LoaMgrHwTqIdptSig3Resp.Impact = 'H';
LoaMgrHwTqIdptSig3Resp.TuningOwner = 'Safety';
LoaMgrHwTqIdptSig3Resp.GraphLink = {''};
LoaMgrHwTqIdptSig3Resp.Monotony = 'None';
LoaMgrHwTqIdptSig3Resp.MaxGrad = 999;
LoaMgrHwTqIdptSig3Resp.PortName = 'LoaMgrHwTqIdptSig3Resp';


LoaMgrHwTqIdptSig4Resp = DataDict.Calibration;
LoaMgrHwTqIdptSig4Resp.LongName = 'Handwheel Torque Independent Signal Four Response';
LoaMgrHwTqIdptSig4Resp.Description = [...
  'Desired LOA State when Handwheel Torque Independent Signals count is e' ...
  'xactly four.'];
LoaMgrHwTqIdptSig4Resp.DocUnits = 'Cnt';
LoaMgrHwTqIdptSig4Resp.EngDT = dt.u08;
LoaMgrHwTqIdptSig4Resp.EngVal = 0;
LoaMgrHwTqIdptSig4Resp.EngMin = 0;
LoaMgrHwTqIdptSig4Resp.EngMax = 5;
LoaMgrHwTqIdptSig4Resp.Cardinality = 'Cmn';
LoaMgrHwTqIdptSig4Resp.CustomerVisible = false;
LoaMgrHwTqIdptSig4Resp.Online = false;
LoaMgrHwTqIdptSig4Resp.Impact = 'H';
LoaMgrHwTqIdptSig4Resp.TuningOwner = 'Safety';
LoaMgrHwTqIdptSig4Resp.GraphLink = {''};
LoaMgrHwTqIdptSig4Resp.Monotony = 'None';
LoaMgrHwTqIdptSig4Resp.MaxGrad = 999;
LoaMgrHwTqIdptSig4Resp.PortName = 'LoaMgrHwTqIdptSig4Resp';


LoaMgrHwTqIdptSigFltThd = DataDict.Calibration;
LoaMgrHwTqIdptSigFltThd.LongName = 'Handwheel Torque Independent Signal Fault Threshold';
LoaMgrHwTqIdptSigFltThd.Description = [...
  'If number of HwTq signals drops to equal or less than this value, set ' ...
  'an NTC.'];
LoaMgrHwTqIdptSigFltThd.DocUnits = 'Cnt';
LoaMgrHwTqIdptSigFltThd.EngDT = dt.u08;
LoaMgrHwTqIdptSigFltThd.EngVal = 1;
LoaMgrHwTqIdptSigFltThd.EngMin = 0;
LoaMgrHwTqIdptSigFltThd.EngMax = 4;
LoaMgrHwTqIdptSigFltThd.Cardinality = 'Cmn';
LoaMgrHwTqIdptSigFltThd.CustomerVisible = false;
LoaMgrHwTqIdptSigFltThd.Online = false;
LoaMgrHwTqIdptSigFltThd.Impact = 'H';
LoaMgrHwTqIdptSigFltThd.TuningOwner = 'Safety';
LoaMgrHwTqIdptSigFltThd.GraphLink = {''};
LoaMgrHwTqIdptSigFltThd.Monotony = 'None';
LoaMgrHwTqIdptSigFltThd.MaxGrad = 999;
LoaMgrHwTqIdptSigFltThd.PortName = 'LoaMgrHwTqIdptSigFltThd';


LoaMgrHwTqLoaAvlResp = DataDict.Calibration;
LoaMgrHwTqLoaAvlResp.LongName = 'Handwheel Torque Loss of Assist Available Response';
LoaMgrHwTqLoaAvlResp.Description = [...
  'Desired LOA State when Handwheel Torque Signal count is zero or one an' ...
  'd software based TLOA functionality is available to mitigate the probl' ...
  'em.'];
LoaMgrHwTqLoaAvlResp.DocUnits = 'Cnt';
LoaMgrHwTqLoaAvlResp.EngDT = dt.u08;
LoaMgrHwTqLoaAvlResp.EngVal = 2;
LoaMgrHwTqLoaAvlResp.EngMin = 0;
LoaMgrHwTqLoaAvlResp.EngMax = 5;
LoaMgrHwTqLoaAvlResp.Cardinality = 'Cmn';
LoaMgrHwTqLoaAvlResp.CustomerVisible = false;
LoaMgrHwTqLoaAvlResp.Online = false;
LoaMgrHwTqLoaAvlResp.Impact = 'H';
LoaMgrHwTqLoaAvlResp.TuningOwner = 'Safety';
LoaMgrHwTqLoaAvlResp.GraphLink = {''};
LoaMgrHwTqLoaAvlResp.Monotony = 'None';
LoaMgrHwTqLoaAvlResp.MaxGrad = 999;
LoaMgrHwTqLoaAvlResp.PortName = 'LoaMgrHwTqLoaAvlResp';


LoaMgrIvtrIdptSig0Resp = DataDict.Calibration;
LoaMgrIvtrIdptSig0Resp.LongName = 'Inverter Independent Signal Zero Response';
LoaMgrIvtrIdptSig0Resp.Description = [...
  'Desired LOA State when Inverter Independent Signals count is zero.'];
LoaMgrIvtrIdptSig0Resp.DocUnits = 'Cnt';
LoaMgrIvtrIdptSig0Resp.EngDT = dt.u08;
LoaMgrIvtrIdptSig0Resp.EngVal = 5;
LoaMgrIvtrIdptSig0Resp.EngMin = 0;
LoaMgrIvtrIdptSig0Resp.EngMax = 5;
LoaMgrIvtrIdptSig0Resp.Cardinality = 'Cmn';
LoaMgrIvtrIdptSig0Resp.CustomerVisible = false;
LoaMgrIvtrIdptSig0Resp.Online = false;
LoaMgrIvtrIdptSig0Resp.Impact = 'H';
LoaMgrIvtrIdptSig0Resp.TuningOwner = 'Safety';
LoaMgrIvtrIdptSig0Resp.GraphLink = {''};
LoaMgrIvtrIdptSig0Resp.Monotony = 'None';
LoaMgrIvtrIdptSig0Resp.MaxGrad = 999;
LoaMgrIvtrIdptSig0Resp.PortName = 'LoaMgrIvtrIdptSig0Resp';


LoaMgrIvtrIdptSig1Resp = DataDict.Calibration;
LoaMgrIvtrIdptSig1Resp.LongName = 'Inverter Independent Signal One Response';
LoaMgrIvtrIdptSig1Resp.Description = [...
  'Desired LOA State when Inverter Independent Signals count is exactly o' ...
  'ne.'];
LoaMgrIvtrIdptSig1Resp.DocUnits = 'Cnt';
LoaMgrIvtrIdptSig1Resp.EngDT = dt.u08;
LoaMgrIvtrIdptSig1Resp.EngVal = 2;
LoaMgrIvtrIdptSig1Resp.EngMin = 0;
LoaMgrIvtrIdptSig1Resp.EngMax = 5;
LoaMgrIvtrIdptSig1Resp.Cardinality = 'Cmn';
LoaMgrIvtrIdptSig1Resp.CustomerVisible = false;
LoaMgrIvtrIdptSig1Resp.Online = false;
LoaMgrIvtrIdptSig1Resp.Impact = 'H';
LoaMgrIvtrIdptSig1Resp.TuningOwner = 'Safety';
LoaMgrIvtrIdptSig1Resp.GraphLink = {''};
LoaMgrIvtrIdptSig1Resp.Monotony = 'None';
LoaMgrIvtrIdptSig1Resp.MaxGrad = 999;
LoaMgrIvtrIdptSig1Resp.PortName = 'LoaMgrIvtrIdptSig1Resp';


LoaMgrIvtrIdptSig2Resp = DataDict.Calibration;
LoaMgrIvtrIdptSig2Resp.LongName = 'Inverter Independent Signal Two Response';
LoaMgrIvtrIdptSig2Resp.Description = [...
  'Desired LOA State when Inverter Independent Signals count is exactly t' ...
  'wo.'];
LoaMgrIvtrIdptSig2Resp.DocUnits = 'Cnt';
LoaMgrIvtrIdptSig2Resp.EngDT = dt.u08;
LoaMgrIvtrIdptSig2Resp.EngVal = 0;
LoaMgrIvtrIdptSig2Resp.EngMin = 0;
LoaMgrIvtrIdptSig2Resp.EngMax = 5;
LoaMgrIvtrIdptSig2Resp.Cardinality = 'Cmn';
LoaMgrIvtrIdptSig2Resp.CustomerVisible = false;
LoaMgrIvtrIdptSig2Resp.Online = false;
LoaMgrIvtrIdptSig2Resp.Impact = 'H';
LoaMgrIvtrIdptSig2Resp.TuningOwner = 'Safety';
LoaMgrIvtrIdptSig2Resp.GraphLink = {''};
LoaMgrIvtrIdptSig2Resp.Monotony = 'None';
LoaMgrIvtrIdptSig2Resp.MaxGrad = 999;
LoaMgrIvtrIdptSig2Resp.PortName = 'LoaMgrIvtrIdptSig2Resp';


LoaMgrIvtrIdptSigFltThd = DataDict.Calibration;
LoaMgrIvtrIdptSigFltThd.LongName = 'Inverter Independent Signal Fault Threshold';
LoaMgrIvtrIdptSigFltThd.Description = [...
  'If number of Inverter signals drops to equal or less than this value, ' ...
  'set an NTC.'];
LoaMgrIvtrIdptSigFltThd.DocUnits = 'Cnt';
LoaMgrIvtrIdptSigFltThd.EngDT = dt.u08;
LoaMgrIvtrIdptSigFltThd.EngVal = 0;
LoaMgrIvtrIdptSigFltThd.EngMin = 0;
LoaMgrIvtrIdptSigFltThd.EngMax = 2;
LoaMgrIvtrIdptSigFltThd.Cardinality = 'Cmn';
LoaMgrIvtrIdptSigFltThd.CustomerVisible = false;
LoaMgrIvtrIdptSigFltThd.Online = false;
LoaMgrIvtrIdptSigFltThd.Impact = 'H';
LoaMgrIvtrIdptSigFltThd.TuningOwner = 'Safety';
LoaMgrIvtrIdptSigFltThd.GraphLink = {''};
LoaMgrIvtrIdptSigFltThd.Monotony = 'None';
LoaMgrIvtrIdptSigFltThd.MaxGrad = 999;
LoaMgrIvtrIdptSigFltThd.PortName = 'LoaMgrIvtrIdptSigFltThd';


LoaMgrIvtrMtgtnRate = DataDict.Calibration;
LoaMgrIvtrMtgtnRate.LongName = 'Inverter Mitigation Rate';
LoaMgrIvtrMtgtnRate.Description = [...
  'Slew rate applied to system scale factor when only Inverter is bad'];
LoaMgrIvtrMtgtnRate.DocUnits = 'UlsPerSec';
LoaMgrIvtrMtgtnRate.EngDT = dt.float32;
LoaMgrIvtrMtgtnRate.EngVal = 1;
LoaMgrIvtrMtgtnRate.EngMin = 0.01;
LoaMgrIvtrMtgtnRate.EngMax = 500;
LoaMgrIvtrMtgtnRate.Cardinality = 'Cmn';
LoaMgrIvtrMtgtnRate.CustomerVisible = false;
LoaMgrIvtrMtgtnRate.Online = false;
LoaMgrIvtrMtgtnRate.Impact = 'L';
LoaMgrIvtrMtgtnRate.TuningOwner = 'CSE';
LoaMgrIvtrMtgtnRate.GraphLink = {''};
LoaMgrIvtrMtgtnRate.Monotony = 'None';
LoaMgrIvtrMtgtnRate.MaxGrad = 999;
LoaMgrIvtrMtgtnRate.PortName = 'LoaMgrIvtrMtgtnRate';


LoaMgrIvtrMtgtnSca = DataDict.Calibration;
LoaMgrIvtrMtgtnSca.LongName = 'Inverter Mitigation Scale';
LoaMgrIvtrMtgtnSca.Description = [...
  'System Scale factor during Inverter Mitigation'];
LoaMgrIvtrMtgtnSca.DocUnits = 'Uls';
LoaMgrIvtrMtgtnSca.EngDT = dt.float32;
LoaMgrIvtrMtgtnSca.EngVal = 1;
LoaMgrIvtrMtgtnSca.EngMin = 0;
LoaMgrIvtrMtgtnSca.EngMax = 1;
LoaMgrIvtrMtgtnSca.Cardinality = 'Cmn';
LoaMgrIvtrMtgtnSca.CustomerVisible = false;
LoaMgrIvtrMtgtnSca.Online = false;
LoaMgrIvtrMtgtnSca.Impact = 'H';
LoaMgrIvtrMtgtnSca.TuningOwner = 'CSE';
LoaMgrIvtrMtgtnSca.GraphLink = {''};
LoaMgrIvtrMtgtnSca.Monotony = 'None';
LoaMgrIvtrMtgtnSca.MaxGrad = 999;
LoaMgrIvtrMtgtnSca.PortName = 'LoaMgrIvtrMtgtnSca';


LoaMgrIvtrMtgtnScaZeroEna = DataDict.Calibration;
LoaMgrIvtrMtgtnScaZeroEna.LongName = 'Inverter Mitigation Scale Zero Enable';
LoaMgrIvtrMtgtnScaZeroEna.Description = [...
  'When true, scale factor drops instantly to zero then then slews up to ' ...
  'a target.'];
LoaMgrIvtrMtgtnScaZeroEna.DocUnits = 'Cnt';
LoaMgrIvtrMtgtnScaZeroEna.EngDT = dt.lgc;
LoaMgrIvtrMtgtnScaZeroEna.EngVal = 0;
LoaMgrIvtrMtgtnScaZeroEna.EngMin = 0;
LoaMgrIvtrMtgtnScaZeroEna.EngMax = 1;
LoaMgrIvtrMtgtnScaZeroEna.Cardinality = 'Cmn';
LoaMgrIvtrMtgtnScaZeroEna.CustomerVisible = false;
LoaMgrIvtrMtgtnScaZeroEna.Online = false;
LoaMgrIvtrMtgtnScaZeroEna.Impact = 'H';
LoaMgrIvtrMtgtnScaZeroEna.TuningOwner = 'CSE';
LoaMgrIvtrMtgtnScaZeroEna.GraphLink = {''};
LoaMgrIvtrMtgtnScaZeroEna.Monotony = 'None';
LoaMgrIvtrMtgtnScaZeroEna.MaxGrad = 999;
LoaMgrIvtrMtgtnScaZeroEna.PortName = 'LoaMgrIvtrMtgtnScaZeroEna';


LoaMgrLimdStRate = DataDict.Calibration;
LoaMgrLimdStRate.LongName = 'Limited State Rate';
LoaMgrLimdStRate.Description = [...
  'Slew rate applied to system scale factor when LoaSt is Reduced'];
LoaMgrLimdStRate.DocUnits = 'UlsPerSec';
LoaMgrLimdStRate.EngDT = dt.float32;
LoaMgrLimdStRate.EngVal = 1;
LoaMgrLimdStRate.EngMin = 0.01;
LoaMgrLimdStRate.EngMax = 500;
LoaMgrLimdStRate.Cardinality = 'Cmn';
LoaMgrLimdStRate.CustomerVisible = false;
LoaMgrLimdStRate.Online = false;
LoaMgrLimdStRate.Impact = 'L';
LoaMgrLimdStRate.TuningOwner = 'CSE';
LoaMgrLimdStRate.GraphLink = {''};
LoaMgrLimdStRate.Monotony = 'None';
LoaMgrLimdStRate.MaxGrad = 999;
LoaMgrLimdStRate.PortName = 'LoaMgrLimdStRate';


LoaMgrLimdStSca = DataDict.Calibration;
LoaMgrLimdStSca.LongName = 'Limited State Scale';
LoaMgrLimdStSca.Description = [...
  'System Scale factor when LoaSt is Reduced'];
LoaMgrLimdStSca.DocUnits = 'Uls';
LoaMgrLimdStSca.EngDT = dt.float32;
LoaMgrLimdStSca.EngVal = 1;
LoaMgrLimdStSca.EngMin = 0;
LoaMgrLimdStSca.EngMax = 1;
LoaMgrLimdStSca.Cardinality = 'Cmn';
LoaMgrLimdStSca.CustomerVisible = false;
LoaMgrLimdStSca.Online = false;
LoaMgrLimdStSca.Impact = 'H';
LoaMgrLimdStSca.TuningOwner = 'CSE';
LoaMgrLimdStSca.GraphLink = {''};
LoaMgrLimdStSca.Monotony = 'None';
LoaMgrLimdStSca.MaxGrad = 999;
LoaMgrLimdStSca.PortName = 'LoaMgrLimdStSca';


LoaMgrMotAgAvlSnsrlsResp = DataDict.Calibration;
LoaMgrMotAgAvlSnsrlsResp.LongName = 'Motor Angle Available Sensor-Less Response';
LoaMgrMotAgAvlSnsrlsResp.Description = [...
  'Desired LOA State when Motor Angle Signal count is zero or one and sof' ...
  'tware motor angle functionality is available to mitigate the problem.'];
LoaMgrMotAgAvlSnsrlsResp.DocUnits = 'Cnt';
LoaMgrMotAgAvlSnsrlsResp.EngDT = dt.u08;
LoaMgrMotAgAvlSnsrlsResp.EngVal = 2;
LoaMgrMotAgAvlSnsrlsResp.EngMin = 0;
LoaMgrMotAgAvlSnsrlsResp.EngMax = 5;
LoaMgrMotAgAvlSnsrlsResp.Cardinality = 'Cmn';
LoaMgrMotAgAvlSnsrlsResp.CustomerVisible = false;
LoaMgrMotAgAvlSnsrlsResp.Online = false;
LoaMgrMotAgAvlSnsrlsResp.Impact = 'H';
LoaMgrMotAgAvlSnsrlsResp.TuningOwner = 'Safety';
LoaMgrMotAgAvlSnsrlsResp.GraphLink = {''};
LoaMgrMotAgAvlSnsrlsResp.Monotony = 'None';
LoaMgrMotAgAvlSnsrlsResp.MaxGrad = 999;
LoaMgrMotAgAvlSnsrlsResp.PortName = 'LoaMgrMotAgAvlSnsrlsResp';


LoaMgrMotAgIdptSig0NoSnsrlsResp = DataDict.Calibration;
LoaMgrMotAgIdptSig0NoSnsrlsResp.LongName = 'Motor Angle Independent Signal Zero No Sensor-Less Response';
LoaMgrMotAgIdptSig0NoSnsrlsResp.Description = [...
  'Desired LOA State when Motor Angle Independent Signals count is zero a' ...
  'nd there is no software based motor angle functionality available to m' ...
  'itigate the problem.'];
LoaMgrMotAgIdptSig0NoSnsrlsResp.DocUnits = 'Cnt';
LoaMgrMotAgIdptSig0NoSnsrlsResp.EngDT = dt.u08;
LoaMgrMotAgIdptSig0NoSnsrlsResp.EngVal = 5;
LoaMgrMotAgIdptSig0NoSnsrlsResp.EngMin = 0;
LoaMgrMotAgIdptSig0NoSnsrlsResp.EngMax = 5;
LoaMgrMotAgIdptSig0NoSnsrlsResp.Cardinality = 'Cmn';
LoaMgrMotAgIdptSig0NoSnsrlsResp.CustomerVisible = false;
LoaMgrMotAgIdptSig0NoSnsrlsResp.Online = false;
LoaMgrMotAgIdptSig0NoSnsrlsResp.Impact = 'H';
LoaMgrMotAgIdptSig0NoSnsrlsResp.TuningOwner = 'Safety';
LoaMgrMotAgIdptSig0NoSnsrlsResp.GraphLink = {''};
LoaMgrMotAgIdptSig0NoSnsrlsResp.Monotony = 'None';
LoaMgrMotAgIdptSig0NoSnsrlsResp.MaxGrad = 999;
LoaMgrMotAgIdptSig0NoSnsrlsResp.PortName = 'LoaMgrMotAgIdptSig0NoSnsrlsResp';


LoaMgrMotAgIdptSig1NoSnsrlsResp = DataDict.Calibration;
LoaMgrMotAgIdptSig1NoSnsrlsResp.LongName = 'Motor Angle Independent Signal One No Sensor-Less Response';
LoaMgrMotAgIdptSig1NoSnsrlsResp.Description = [...
  'Desired LOA State when Motor Angle Independent Signals count is one an' ...
  'd there is no software based motor angle functionality available to mi' ...
  'tigate the problem.'];
LoaMgrMotAgIdptSig1NoSnsrlsResp.DocUnits = 'Cnt';
LoaMgrMotAgIdptSig1NoSnsrlsResp.EngDT = dt.u08;
LoaMgrMotAgIdptSig1NoSnsrlsResp.EngVal = 5;
LoaMgrMotAgIdptSig1NoSnsrlsResp.EngMin = 0;
LoaMgrMotAgIdptSig1NoSnsrlsResp.EngMax = 5;
LoaMgrMotAgIdptSig1NoSnsrlsResp.Cardinality = 'Cmn';
LoaMgrMotAgIdptSig1NoSnsrlsResp.CustomerVisible = false;
LoaMgrMotAgIdptSig1NoSnsrlsResp.Online = false;
LoaMgrMotAgIdptSig1NoSnsrlsResp.Impact = 'H';
LoaMgrMotAgIdptSig1NoSnsrlsResp.TuningOwner = 'Safety';
LoaMgrMotAgIdptSig1NoSnsrlsResp.GraphLink = {''};
LoaMgrMotAgIdptSig1NoSnsrlsResp.Monotony = 'None';
LoaMgrMotAgIdptSig1NoSnsrlsResp.MaxGrad = 999;
LoaMgrMotAgIdptSig1NoSnsrlsResp.PortName = 'LoaMgrMotAgIdptSig1NoSnsrlsResp';


LoaMgrMotAgIdptSig2Resp = DataDict.Calibration;
LoaMgrMotAgIdptSig2Resp.LongName = 'Motor Angle Independent Signal Two Response';
LoaMgrMotAgIdptSig2Resp.Description = [...
  'Desired LOA State when Motor Angle Independent Signals count is exactl' ...
  'y two.'];
LoaMgrMotAgIdptSig2Resp.DocUnits = 'Cnt';
LoaMgrMotAgIdptSig2Resp.EngDT = dt.u08;
LoaMgrMotAgIdptSig2Resp.EngVal = 1;
LoaMgrMotAgIdptSig2Resp.EngMin = 0;
LoaMgrMotAgIdptSig2Resp.EngMax = 5;
LoaMgrMotAgIdptSig2Resp.Cardinality = 'Cmn';
LoaMgrMotAgIdptSig2Resp.CustomerVisible = false;
LoaMgrMotAgIdptSig2Resp.Online = false;
LoaMgrMotAgIdptSig2Resp.Impact = 'H';
LoaMgrMotAgIdptSig2Resp.TuningOwner = 'Safety';
LoaMgrMotAgIdptSig2Resp.GraphLink = {''};
LoaMgrMotAgIdptSig2Resp.Monotony = 'None';
LoaMgrMotAgIdptSig2Resp.MaxGrad = 999;
LoaMgrMotAgIdptSig2Resp.PortName = 'LoaMgrMotAgIdptSig2Resp';


LoaMgrMotAgIdptSig3Resp = DataDict.Calibration;
LoaMgrMotAgIdptSig3Resp.LongName = 'Motor Angle Independent Signal Three Response';
LoaMgrMotAgIdptSig3Resp.Description = [...
  'Desired LOA State when Inverter Independent Signals count is exactly t' ...
  'hree.'];
LoaMgrMotAgIdptSig3Resp.DocUnits = 'Cnt';
LoaMgrMotAgIdptSig3Resp.EngDT = dt.u08;
LoaMgrMotAgIdptSig3Resp.EngVal = 0;
LoaMgrMotAgIdptSig3Resp.EngMin = 0;
LoaMgrMotAgIdptSig3Resp.EngMax = 5;
LoaMgrMotAgIdptSig3Resp.Cardinality = 'Cmn';
LoaMgrMotAgIdptSig3Resp.CustomerVisible = false;
LoaMgrMotAgIdptSig3Resp.Online = false;
LoaMgrMotAgIdptSig3Resp.Impact = 'H';
LoaMgrMotAgIdptSig3Resp.TuningOwner = 'Safety';
LoaMgrMotAgIdptSig3Resp.GraphLink = {''};
LoaMgrMotAgIdptSig3Resp.Monotony = 'None';
LoaMgrMotAgIdptSig3Resp.MaxGrad = 999;
LoaMgrMotAgIdptSig3Resp.PortName = 'LoaMgrMotAgIdptSig3Resp';


LoaMgrMotAgIdptSigFltThd = DataDict.Calibration;
LoaMgrMotAgIdptSigFltThd.LongName = 'Motor Angle Independent Signal Fault Threshold';
LoaMgrMotAgIdptSigFltThd.Description = [...
  'If number of Motor Angle signals drops to equal or less than this valu' ...
  'e, set an NTC.'];
LoaMgrMotAgIdptSigFltThd.DocUnits = 'Cnt';
LoaMgrMotAgIdptSigFltThd.EngDT = dt.u08;
LoaMgrMotAgIdptSigFltThd.EngVal = 2;
LoaMgrMotAgIdptSigFltThd.EngMin = 0;
LoaMgrMotAgIdptSigFltThd.EngMax = 3;
LoaMgrMotAgIdptSigFltThd.Cardinality = 'Cmn';
LoaMgrMotAgIdptSigFltThd.CustomerVisible = false;
LoaMgrMotAgIdptSigFltThd.Online = false;
LoaMgrMotAgIdptSigFltThd.Impact = 'H';
LoaMgrMotAgIdptSigFltThd.TuningOwner = 'Safety';
LoaMgrMotAgIdptSigFltThd.GraphLink = {''};
LoaMgrMotAgIdptSigFltThd.Monotony = 'None';
LoaMgrMotAgIdptSigFltThd.MaxGrad = 999;
LoaMgrMotAgIdptSigFltThd.PortName = 'LoaMgrMotAgIdptSigFltThd';


LoaMgrMotAgMtgtnRate = DataDict.Calibration;
LoaMgrMotAgMtgtnRate.LongName = 'Motor Angle Mitigation Rate';
LoaMgrMotAgMtgtnRate.Description = [...
  'Slew rate applied to system scale factor when only Motor Angle is bad'];
LoaMgrMotAgMtgtnRate.DocUnits = 'UlsPerSec';
LoaMgrMotAgMtgtnRate.EngDT = dt.float32;
LoaMgrMotAgMtgtnRate.EngVal = 1;
LoaMgrMotAgMtgtnRate.EngMin = 0.01;
LoaMgrMotAgMtgtnRate.EngMax = 500;
LoaMgrMotAgMtgtnRate.Cardinality = 'Cmn';
LoaMgrMotAgMtgtnRate.CustomerVisible = false;
LoaMgrMotAgMtgtnRate.Online = false;
LoaMgrMotAgMtgtnRate.Impact = 'L';
LoaMgrMotAgMtgtnRate.TuningOwner = 'CSE';
LoaMgrMotAgMtgtnRate.GraphLink = {''};
LoaMgrMotAgMtgtnRate.Monotony = 'None';
LoaMgrMotAgMtgtnRate.MaxGrad = 999;
LoaMgrMotAgMtgtnRate.PortName = 'LoaMgrMotAgMtgtnRate';


LoaMgrMotAgMtgtnSca = DataDict.Calibration;
LoaMgrMotAgMtgtnSca.LongName = 'Motor Angle Mitigation Scale';
LoaMgrMotAgMtgtnSca.Description = [...
  'System Scale factor during Motor Angle Mitigation'];
LoaMgrMotAgMtgtnSca.DocUnits = 'Uls';
LoaMgrMotAgMtgtnSca.EngDT = dt.float32;
LoaMgrMotAgMtgtnSca.EngVal = 1;
LoaMgrMotAgMtgtnSca.EngMin = 0;
LoaMgrMotAgMtgtnSca.EngMax = 1;
LoaMgrMotAgMtgtnSca.Cardinality = 'Cmn';
LoaMgrMotAgMtgtnSca.CustomerVisible = false;
LoaMgrMotAgMtgtnSca.Online = false;
LoaMgrMotAgMtgtnSca.Impact = 'H';
LoaMgrMotAgMtgtnSca.TuningOwner = 'CSE';
LoaMgrMotAgMtgtnSca.GraphLink = {''};
LoaMgrMotAgMtgtnSca.Monotony = 'None';
LoaMgrMotAgMtgtnSca.MaxGrad = 999;
LoaMgrMotAgMtgtnSca.PortName = 'LoaMgrMotAgMtgtnSca';


LoaMgrMotAgMtgtnScaZeroEna = DataDict.Calibration;
LoaMgrMotAgMtgtnScaZeroEna.LongName = 'Motor Angle Mitigation Scale Zero Enable';
LoaMgrMotAgMtgtnScaZeroEna.Description = [...
  'When true, scale factor drops instantly to zero then then slews up to ' ...
  'a target.'];
LoaMgrMotAgMtgtnScaZeroEna.DocUnits = 'Cnt';
LoaMgrMotAgMtgtnScaZeroEna.EngDT = dt.lgc;
LoaMgrMotAgMtgtnScaZeroEna.EngVal = 0;
LoaMgrMotAgMtgtnScaZeroEna.EngMin = 0;
LoaMgrMotAgMtgtnScaZeroEna.EngMax = 1;
LoaMgrMotAgMtgtnScaZeroEna.Cardinality = 'Cmn';
LoaMgrMotAgMtgtnScaZeroEna.CustomerVisible = false;
LoaMgrMotAgMtgtnScaZeroEna.Online = false;
LoaMgrMotAgMtgtnScaZeroEna.Impact = 'H';
LoaMgrMotAgMtgtnScaZeroEna.TuningOwner = 'CSE';
LoaMgrMotAgMtgtnScaZeroEna.GraphLink = {''};
LoaMgrMotAgMtgtnScaZeroEna.Monotony = 'None';
LoaMgrMotAgMtgtnScaZeroEna.MaxGrad = 999;
LoaMgrMotAgMtgtnScaZeroEna.PortName = 'LoaMgrMotAgMtgtnScaZeroEna';



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
PrevCurrMeasIdptSigResp = DataDict.PIM;
PrevCurrMeasIdptSigResp.LongName = 'Previous Current Measure Independent Signal Response';
PrevCurrMeasIdptSigResp.Description = [...
  'Memory block holds the previous state of the Current Measure Independe' ...
  'nt Signal Response which couldbe one among the following : Norm, Reduc' ...
  'ed, Software mitigation, Fadeout, Controlled Shutdownand Immediate Shu' ...
  'tdown'];
PrevCurrMeasIdptSigResp.DocUnits = 'Cnt';
PrevCurrMeasIdptSigResp.EngDT = dt.u08;
PrevCurrMeasIdptSigResp.EngMin = 0;
PrevCurrMeasIdptSigResp.EngMax = 5;
PrevCurrMeasIdptSigResp.InitRowCol = [1  1];


PrevCurrMeasIdptSigVal = DataDict.PIM;
PrevCurrMeasIdptSigVal.LongName = 'Previous Current Measure Independent Signal Value';
PrevCurrMeasIdptSigVal.Description = [...
  'Memory block holds the previous value of number of Current Measure Ind' ...
  'ependent Signals available. Themaximum number of Independent signals a' ...
  'vailable is 2'];
PrevCurrMeasIdptSigVal.DocUnits = 'Cnt';
PrevCurrMeasIdptSigVal.EngDT = dt.u08;
PrevCurrMeasIdptSigVal.EngMin = 0;
PrevCurrMeasIdptSigVal.EngMax = 2;
PrevCurrMeasIdptSigVal.InitRowCol = [1  1];


PrevCurrMeasLoaStSwMtgtnEna = DataDict.PIM;
PrevCurrMeasLoaStSwMtgtnEna.LongName = 'Previous Current Measure Loss of Assist State Software Mitigation Enable';
PrevCurrMeasLoaStSwMtgtnEna.Description = [...
  'Memory block holds the previous state of software mitigation enable co' ...
  'ndition of Current Measure Response'];
PrevCurrMeasLoaStSwMtgtnEna.DocUnits = 'Uls';
PrevCurrMeasLoaStSwMtgtnEna.EngDT = dt.lgc;
PrevCurrMeasLoaStSwMtgtnEna.EngMin = 0;
PrevCurrMeasLoaStSwMtgtnEna.EngMax = 1;
PrevCurrMeasLoaStSwMtgtnEna.InitRowCol = [1  1];


PrevHwTqIdptSigResp = DataDict.PIM;
PrevHwTqIdptSigResp.LongName = 'Previous Handwheel Torque Independent Signal Response';
PrevHwTqIdptSigResp.Description = [...
  'Memory block holds the previous state of the Handwheel Torque Independ' ...
  'ent Signal Response which couldbe one among the following : Norm, Redu' ...
  'ced, Software mitigation, Fadeout, Controlled Shutdownand Immediate Sh' ...
  'utdown'];
PrevHwTqIdptSigResp.DocUnits = 'Cnt';
PrevHwTqIdptSigResp.EngDT = dt.u08;
PrevHwTqIdptSigResp.EngMin = 0;
PrevHwTqIdptSigResp.EngMax = 5;
PrevHwTqIdptSigResp.InitRowCol = [1  1];


PrevHwTqIdptSigVal = DataDict.PIM;
PrevHwTqIdptSigVal.LongName = 'Previous Handwheel Torque Independent Signal Value';
PrevHwTqIdptSigVal.Description = [...
  'Memory block holds the previous value of number of Handwheel Torque In' ...
  'dependent Signals available. Themaximum number of Independent signals ' ...
  'available is 4'];
PrevHwTqIdptSigVal.DocUnits = 'Cnt';
PrevHwTqIdptSigVal.EngDT = dt.u08;
PrevHwTqIdptSigVal.EngMin = 0;
PrevHwTqIdptSigVal.EngMax = 4;
PrevHwTqIdptSigVal.InitRowCol = [1  1];


PrevHwTqLoaStSwMtgtnEna = DataDict.PIM;
PrevHwTqLoaStSwMtgtnEna.LongName = 'Previous Handwheel Torque Loss of Assist State Software Mitigation Enable';
PrevHwTqLoaStSwMtgtnEna.Description = [...
  'Memory block holds the previous state of software mitigation enable co' ...
  'ndition of Handwheel Torque Response'];
PrevHwTqLoaStSwMtgtnEna.DocUnits = 'Uls';
PrevHwTqLoaStSwMtgtnEna.EngDT = dt.lgc;
PrevHwTqLoaStSwMtgtnEna.EngMin = 0;
PrevHwTqLoaStSwMtgtnEna.EngMax = 1;
PrevHwTqLoaStSwMtgtnEna.InitRowCol = [1  1];


PrevIvtrIdptSigResp = DataDict.PIM;
PrevIvtrIdptSigResp.LongName = 'Previous Inverter Independent Signal Response';
PrevIvtrIdptSigResp.Description = [...
  'Memory block holds the previous state of the Inverter Independent Sign' ...
  'al Response which couldbe one among the following : Norm, Reduced, Sof' ...
  'tware mitigation, Fadeout, Controlled Shutdownand Immediate Shutdown'];
PrevIvtrIdptSigResp.DocUnits = 'Cnt';
PrevIvtrIdptSigResp.EngDT = dt.u08;
PrevIvtrIdptSigResp.EngMin = 0;
PrevIvtrIdptSigResp.EngMax = 5;
PrevIvtrIdptSigResp.InitRowCol = [1  1];


PrevIvtrIdptSigVal = DataDict.PIM;
PrevIvtrIdptSigVal.LongName = 'Previous Inverter Independent Signal Value';
PrevIvtrIdptSigVal.Description = [...
  'Memory block holds the previous value of number of Inverter Independen' ...
  't Signals available. Themaximum number of Independent signals availabl' ...
  'e is 2'];
PrevIvtrIdptSigVal.DocUnits = 'Cnt';
PrevIvtrIdptSigVal.EngDT = dt.u08;
PrevIvtrIdptSigVal.EngMin = 0;
PrevIvtrIdptSigVal.EngMax = 2;
PrevIvtrIdptSigVal.InitRowCol = [1  1];


PrevIvtrLoaStSwMtgtnEna = DataDict.PIM;
PrevIvtrLoaStSwMtgtnEna.LongName = 'Previous Inverter Loss of Assist State Software Mitigation Enable';
PrevIvtrLoaStSwMtgtnEna.Description = [...
  'Memory block holds the previous state of software mitigation enable co' ...
  'ndition of Inverter Response'];
PrevIvtrLoaStSwMtgtnEna.DocUnits = 'Uls';
PrevIvtrLoaStSwMtgtnEna.EngDT = dt.lgc;
PrevIvtrLoaStSwMtgtnEna.EngMin = 0;
PrevIvtrLoaStSwMtgtnEna.EngMax = 1;
PrevIvtrLoaStSwMtgtnEna.InitRowCol = [1  1];


PrevMotAgLoaMtgtnEna = DataDict.PIM;
PrevMotAgLoaMtgtnEna.LongName = 'Previous Motor Angle Loss of Assist Mitigation Enable';
PrevMotAgLoaMtgtnEna.Description = [...
  'Previous enable state of Motor position is stored in the memory block ' ...
  'to determine the Scaling and Slew Ratebased on "Scale Zero Enable" cal' ...
  'ibration'];
PrevMotAgLoaMtgtnEna.DocUnits = 'Uls';
PrevMotAgLoaMtgtnEna.EngDT = dt.lgc;
PrevMotAgLoaMtgtnEna.EngMin = 0;
PrevMotAgLoaMtgtnEna.EngMax = 1;
PrevMotAgLoaMtgtnEna.InitRowCol = [1  1];


PrevMotAgLoaStSwMtgtnEna = DataDict.PIM;
PrevMotAgLoaStSwMtgtnEna.LongName = 'Previous Motor Angle Loss of Assist State Software Mitigation Enable';
PrevMotAgLoaStSwMtgtnEna.Description = [...
  'Memory block holds the previous state of software mitigation enable co' ...
  'ndition of Motor position Response'];
PrevMotAgLoaStSwMtgtnEna.DocUnits = 'Uls';
PrevMotAgLoaStSwMtgtnEna.EngDT = dt.lgc;
PrevMotAgLoaStSwMtgtnEna.EngMin = 0;
PrevMotAgLoaStSwMtgtnEna.EngMax = 1;
PrevMotAgLoaStSwMtgtnEna.InitRowCol = [1  1];


PrevMotAgMeclIdptSigResp = DataDict.PIM;
PrevMotAgMeclIdptSigResp.LongName = 'Previous Motor Angle Mechanical Independent Signal Response';
PrevMotAgMeclIdptSigResp.Description = [...
  'Memory block holds the previous state of the Motor Position Mechanical' ...
  ' Independent Signal Responsewhich could be one among the following : N' ...
  'orm, Reduced, Software mitigation, Fadeout,Controlled Shutdown and Imm' ...
  'ediate Shutdown'];
PrevMotAgMeclIdptSigResp.DocUnits = 'Cnt';
PrevMotAgMeclIdptSigResp.EngDT = dt.u08;
PrevMotAgMeclIdptSigResp.EngMin = 0;
PrevMotAgMeclIdptSigResp.EngMax = 5;
PrevMotAgMeclIdptSigResp.InitRowCol = [1  1];


PrevMotAgMeclIdptSigVal = DataDict.PIM;
PrevMotAgMeclIdptSigVal.LongName = 'Previous Motor Angle Mechanical Independent Signal Value';
PrevMotAgMeclIdptSigVal.Description = [...
  'Memory block holds the previous value of number of Motor Angle Mechani' ...
  'cal Independent Signals available. Themaximum number of Independent si' ...
  'gnals available is 3'];
PrevMotAgMeclIdptSigVal.DocUnits = 'Cnt';
PrevMotAgMeclIdptSigVal.EngDT = dt.u08;
PrevMotAgMeclIdptSigVal.EngMin = 0;
PrevMotAgMeclIdptSigVal.EngMax = 3;
PrevMotAgMeclIdptSigVal.InitRowCol = [1  1];


PrevVltgModSrc = DataDict.PIM;
PrevVltgModSrc.LongName = 'Previous Voltage Mode Source';
PrevVltgModSrc.Description = [...
  'Holds the previous value of Voltage mode requested, calculated as asum' ...
  ' of masked values of Current Measure enable and Inverter enable'];
PrevVltgModSrc.DocUnits = 'Cnt';
PrevVltgModSrc.EngDT = dt.u08;
PrevVltgModSrc.EngMin = 0;
PrevVltgModSrc.EngMax = 3;
PrevVltgModSrc.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CURRMEASLOAMTGTNBITSHIFT_CNT_U08 = DataDict.Constant;
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.LongName = 'Current Measure LOA Mitigation Bit Shift';
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.Description = [...
  'Bit Shifting count for Current Measure LOA Mitigation Bit Packing'];
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.DocUnits = 'Cnt';
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.EngDT = dt.u08;
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.EngVal = 0;
CURRMEASLOAMTGTNBITSHIFT_CNT_U08.Define = 'Local';


CURRMEASLOAMTGTNMASK_CNT_U08 = DataDict.Constant;
CURRMEASLOAMTGTNMASK_CNT_U08.LongName = 'Current Measure LOA Mitigation Mask';
CURRMEASLOAMTGTNMASK_CNT_U08.Description = [...
  'Voltage mode is requested when some combination of boolean signals bec' ...
  'omes true.  This constant represents Motor Current flag TRUE as a powe' ...
  'r of 2 integer whose value is unique from the other boolean masks.'];
CURRMEASLOAMTGTNMASK_CNT_U08.DocUnits = 'Cnt';
CURRMEASLOAMTGTNMASK_CNT_U08.EngDT = dt.u08;
CURRMEASLOAMTGTNMASK_CNT_U08.EngVal = 1;
CURRMEASLOAMTGTNMASK_CNT_U08.Define = 'Local';


FETLOAMTGTNENABITSHIFT_CNT_U08 = DataDict.Constant;
FETLOAMTGTNENABITSHIFT_CNT_U08.LongName = 'Field Effect Transistor LOA Mitigation Bit Shift';
FETLOAMTGTNENABITSHIFT_CNT_U08.Description = [...
  'Bit Shifting count for Field Effect Transistor LOA Mitigation Bit Pack' ...
  'ing'];
FETLOAMTGTNENABITSHIFT_CNT_U08.DocUnits = 'Cnt';
FETLOAMTGTNENABITSHIFT_CNT_U08.EngDT = dt.u08;
FETLOAMTGTNENABITSHIFT_CNT_U08.EngVal = 2;
FETLOAMTGTNENABITSHIFT_CNT_U08.Define = 'Local';


IVTRLOAMTGTNBITSHIFT_CNT_U08 = DataDict.Constant;
IVTRLOAMTGTNBITSHIFT_CNT_U08.LongName = 'Inverter LOA Mitigation Bit Shift';
IVTRLOAMTGTNBITSHIFT_CNT_U08.Description = [...
  'Bit Shifting count for Inverter LOA Mitigation Bit Packing'];
IVTRLOAMTGTNBITSHIFT_CNT_U08.DocUnits = 'Cnt';
IVTRLOAMTGTNBITSHIFT_CNT_U08.EngDT = dt.u08;
IVTRLOAMTGTNBITSHIFT_CNT_U08.EngVal = 1;
IVTRLOAMTGTNBITSHIFT_CNT_U08.Define = 'Local';


IVTRLOAMTGTNMASK_CNT_U08 = DataDict.Constant;
IVTRLOAMTGTNMASK_CNT_U08.LongName = 'Inverter LOA Mitigation Mask';
IVTRLOAMTGTNMASK_CNT_U08.Description = [...
  'Voltage mode is requested when some combination of boolean signals bec' ...
  'omes true.  This constant represents Inverter flag TRUE as a power of ' ...
  '2 integer whose value is unique from the other boolean masks.'];
IVTRLOAMTGTNMASK_CNT_U08.DocUnits = 'Cnt';
IVTRLOAMTGTNMASK_CNT_U08.EngDT = dt.u08;
IVTRLOAMTGTNMASK_CNT_U08.EngVal = 2;
IVTRLOAMTGTNMASK_CNT_U08.Define = 'Local';


LOAMAXSLEW_ULSPERSEC_F32 = DataDict.Constant;
LOAMAXSLEW_ULSPERSEC_F32.LongName = 'LOA Maximum Slew';
LOAMAXSLEW_ULSPERSEC_F32.Description = [...
  'Rate Limit value large enough for a full-scale change in one execution' ...
  ' loop of SF005A StOpCtrl, which runs at 2mS.  (1-0)/.002 = 500 Uls/sec' ...
  ''];
LOAMAXSLEW_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
LOAMAXSLEW_ULSPERSEC_F32.EngDT = dt.float32;
LOAMAXSLEW_ULSPERSEC_F32.EngVal = 500;
LOAMAXSLEW_ULSPERSEC_F32.Define = 'Local';


LOAMINSLEW_ULSPERSEC_F32 = DataDict.Constant;
LOAMINSLEW_ULSPERSEC_F32.LongName = 'LOA Minimum Slew';
LOAMINSLEW_ULSPERSEC_F32.Description = [...
  'Rate Limit value large enough to prevent a stuck value.'];
LOAMINSLEW_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
LOAMINSLEW_ULSPERSEC_F32.EngDT = dt.float32;
LOAMINSLEW_ULSPERSEC_F32.EngVal = 0.01;
LOAMINSLEW_ULSPERSEC_F32.Define = 'Local';


LOASCAONE_ULS_F32 = DataDict.Constant;
LOASCAONE_ULS_F32.LongName = 'LOA Scale of One';
LOASCAONE_ULS_F32.Description = 'Target scale factor of Unity.';
LOASCAONE_ULS_F32.DocUnits = 'Uls';
LOASCAONE_ULS_F32.EngDT = dt.float32;
LOASCAONE_ULS_F32.EngVal = 1;
LOASCAONE_ULS_F32.Define = 'Local';


LOASCAZERO_ULS_F32 = DataDict.Constant;
LOASCAZERO_ULS_F32.LongName = 'LOA Scale of Zero';
LOASCAZERO_ULS_F32.Description = 'Target scale factor of Zero.';
LOASCAZERO_ULS_F32.DocUnits = 'Uls';
LOASCAZERO_ULS_F32.EngDT = dt.float32;
LOASCAZERO_ULS_F32.EngVal = 0;
LOASCAZERO_ULS_F32.Define = 'Local';


LOASTIMDTSHTDWN_CNT_U08 = DataDict.Constant;
LOASTIMDTSHTDWN_CNT_U08.LongName = 'LOA State Rapid Shutdown';
LOASTIMDTSHTDWN_CNT_U08.Description = [...
  'System response that represents request for system fault with F1 respo' ...
  'nse.'];
LOASTIMDTSHTDWN_CNT_U08.DocUnits = 'Cnt';
LOASTIMDTSHTDWN_CNT_U08.EngDT = dt.u08;
LOASTIMDTSHTDWN_CNT_U08.EngVal = 5;
LOASTIMDTSHTDWN_CNT_U08.Define = 'Local';


LOASTNORM_CNT_U08 = DataDict.Constant;
LOASTNORM_CNT_U08.LongName = 'LOA State Normal';
LOASTNORM_CNT_U08.Description = [...
  'System response that represents normal operation.'];
LOASTNORM_CNT_U08.DocUnits = 'Cnt';
LOASTNORM_CNT_U08.EngDT = dt.u08;
LOASTNORM_CNT_U08.EngVal = 0;
LOASTNORM_CNT_U08.Define = 'Local';


LOASTSWMTGTN_CNT_U08 = DataDict.Constant;
LOASTSWMTGTN_CNT_U08.LongName = 'LOA State Software Mitigation';
LOASTSWMTGTN_CNT_U08.Description = [...
  'System response that represents sw-based alternative behavior to mitig' ...
  'ate sensor issues and avoid shutdown.'];
LOASTSWMTGTN_CNT_U08.DocUnits = 'Cnt';
LOASTSWMTGTN_CNT_U08.EngDT = dt.u08;
LOASTSWMTGTN_CNT_U08.EngVal = 2;
LOASTSWMTGTN_CNT_U08.Define = 'Local';


MAXCURRMEASIDPTSIGALLWD_CNT_U08 = DataDict.Constant;
MAXCURRMEASIDPTSIGALLWD_CNT_U08.LongName = 'Maximum Current Measure Independent Signal Allowed';
MAXCURRMEASIDPTSIGALLWD_CNT_U08.Description = [...
  'Constant defines Maximum Motor Current Independent Signal Allowed'];
MAXCURRMEASIDPTSIGALLWD_CNT_U08.DocUnits = 'Cnt';
MAXCURRMEASIDPTSIGALLWD_CNT_U08.EngDT = dt.u08;
MAXCURRMEASIDPTSIGALLWD_CNT_U08.EngVal = 2;
MAXCURRMEASIDPTSIGALLWD_CNT_U08.Define = 'Local';


MAXHWTQIDPTSIGALLWD_CNT_U08 = DataDict.Constant;
MAXHWTQIDPTSIGALLWD_CNT_U08.LongName = 'Maximum HandWheel Torque Independent Signal Allowed';
MAXHWTQIDPTSIGALLWD_CNT_U08.Description = [...
  'Constant defines Maximum HandWheel Torque Independent Signal Allowed'];
MAXHWTQIDPTSIGALLWD_CNT_U08.DocUnits = 'Cnt';
MAXHWTQIDPTSIGALLWD_CNT_U08.EngDT = dt.u08;
MAXHWTQIDPTSIGALLWD_CNT_U08.EngVal = 4;
MAXHWTQIDPTSIGALLWD_CNT_U08.Define = 'Local';


MAXIVTRIDPTSIGALLWD_CNT_U08 = DataDict.Constant;
MAXIVTRIDPTSIGALLWD_CNT_U08.LongName = 'Maximum Inverter Independent Signal Allowed';
MAXIVTRIDPTSIGALLWD_CNT_U08.Description = [...
  'Constant defines Maximum Inverter Independent Signal Allowed'];
MAXIVTRIDPTSIGALLWD_CNT_U08.DocUnits = 'Cnt';
MAXIVTRIDPTSIGALLWD_CNT_U08.EngDT = dt.u08;
MAXIVTRIDPTSIGALLWD_CNT_U08.EngVal = 2;
MAXIVTRIDPTSIGALLWD_CNT_U08.Define = 'Local';


MAXMOTAGMECLIDPTSIGALLWD_CNT_U08 = DataDict.Constant;
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.LongName = 'Maximum Motor Angle Mechanical Independent Signal Allowed';
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.Description = [...
  'Constant defines Maximum Motor Position Independent Signal Allowed'];
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.DocUnits = 'Cnt';
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.EngDT = dt.u08;
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.EngVal = 3;
MAXMOTAGMECLIDPTSIGALLWD_CNT_U08.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = 'Step used when NtcType is None';
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LoaCtrldShtdwn = DataDict.NTC;
LoaCtrldShtdwn.NtcNr = NtcNr1.NTCNR_0X0AB;
LoaCtrldShtdwn.NtcTyp = 'None';
LoaCtrldShtdwn.LongName = 'LOA Controlled Shutdown';
LoaCtrldShtdwn.Description = 'This code indicates controlled shutdown';
LoaCtrldShtdwn.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaCtrldShtdwn.NtcStInfo.Bit0Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit1Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit2Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit3Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit4Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit5Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit6Descr = 'Unused';
LoaCtrldShtdwn.NtcStInfo.Bit7Descr = 'Unused';
LoaCtrldShtdwn.NtcStsLockdThisIgnCyc = 0;


LoaCurrMeasIdptSigNrFlt = DataDict.NTC;
LoaCurrMeasIdptSigNrFlt.NtcNr = NtcNr1.NTCNR_0X0AE;
LoaCurrMeasIdptSigNrFlt.NtcTyp = 'None';
LoaCurrMeasIdptSigNrFlt.LongName = 'LOA Current Measure Independent Signals Number Fault';
LoaCurrMeasIdptSigNrFlt.Description = 'This code indicates the number of the independent motor current signals is too small.';
LoaCurrMeasIdptSigNrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit0Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit1Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit2Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit3Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit4Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit5Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit6Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStInfo.Bit7Descr = 'Unused';
LoaCurrMeasIdptSigNrFlt.NtcStsLockdThisIgnCyc = 0;


LoaHwTqIdptSigNrFlt = DataDict.NTC;
LoaHwTqIdptSigNrFlt.NtcNr = NtcNr1.NTCNR_0X0AC;
LoaHwTqIdptSigNrFlt.NtcTyp = 'None';
LoaHwTqIdptSigNrFlt.LongName = 'LOA Handwheel Torque Independent Signals Number Fault';
LoaHwTqIdptSigNrFlt.Description = 'This code indicates the number of the independent handwheel torque signals is  too small.';
LoaHwTqIdptSigNrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit0Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit1Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit2Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit3Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit4Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit5Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit6Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStInfo.Bit7Descr = 'Unused';
LoaHwTqIdptSigNrFlt.NtcStsLockdThisIgnCyc = 0;


LoaImdtShtdwn = DataDict.NTC;
LoaImdtShtdwn.NtcNr = NtcNr1.NTCNR_0X0AA;
LoaImdtShtdwn.NtcTyp = 'None';
LoaImdtShtdwn.LongName = 'LOA Immediate Shutdown';
LoaImdtShtdwn.Description = 'This code indicates immediate shutdown.';
LoaImdtShtdwn.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaImdtShtdwn.NtcStInfo.Bit0Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit1Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit2Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit3Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit4Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit5Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit6Descr = 'Unused';
LoaImdtShtdwn.NtcStInfo.Bit7Descr = 'Unused';
LoaImdtShtdwn.NtcStsLockdThisIgnCyc = 0;


LoaIvtrIdptSigNrFlt = DataDict.NTC;
LoaIvtrIdptSigNrFlt.NtcNr = NtcNr1.NTCNR_0X0AF;
LoaIvtrIdptSigNrFlt.NtcTyp = 'None';
LoaIvtrIdptSigNrFlt.LongName = 'LOA Inverter Independent Signals Number Fault';
LoaIvtrIdptSigNrFlt.Description = 'The code indicates the number of the independent inverter signals is too small.';
LoaIvtrIdptSigNrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit0Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit1Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit2Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit3Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit4Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit5Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit6Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStInfo.Bit7Descr = 'Unused';
LoaIvtrIdptSigNrFlt.NtcStsLockdThisIgnCyc = 0;


LoaMotAgIdptSigNrFlt = DataDict.NTC;
LoaMotAgIdptSigNrFlt.NtcNr = NtcNr1.NTCNR_0X0AD;
LoaMotAgIdptSigNrFlt.NtcTyp = 'None';
LoaMotAgIdptSigNrFlt.LongName = 'LOA Motor Angle Independent Signals Number Fault';
LoaMotAgIdptSigNrFlt.Description = 'This code indicates the number of the independent motor angle signals is too small.';
LoaMotAgIdptSigNrFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit0Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit1Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit2Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit3Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit4Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit5Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit6Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStInfo.Bit7Descr = 'Unused';
LoaMotAgIdptSigNrFlt.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
