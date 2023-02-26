%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Aug-2017 16:18:41       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES300A = DataDict.FDD;
ES300A.Version = '2.3.X';
ES300A.LongName = 'Sine Voltage Generation';
ES300A.ShoName  = 'SinVltgGenn';
ES300A.DesignASIL = 'D';
ES300A.Description = 'Sine Voltage Generation';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SinVltgGennInit1 = DataDict.Runnable;
SinVltgGennInit1.Context = 'Rte';
SinVltgGennInit1.TimeStep = 0;
SinVltgGennInit1.Description = 'Init Function';

SinVltgGennPer1 = DataDict.Runnable;
SinVltgGennPer1.Context = 'NonRte';
SinVltgGennPer1.TimeStep = 'MotorControl';
SinVltgGennPer1.Description = 'Sine Voltage Genn Periodic 1';

SinVltgGennPer2 = DataDict.Runnable;
SinVltgGennPer2.Context = 'NonRte';
SinVltgGennPer2.TimeStep = 'MotorControl';
SinVltgGennPer2.Description = 'Sine Voltage Genn Periodic 2';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlIvtrFetFltPha = DataDict.IpSignal;
MotCtrlIvtrFetFltPha.LongName = 'Inverter Field Effect Transistor Fault Phase';
MotCtrlIvtrFetFltPha.Description = [...
  'An indication of a FET failure in the bridge.  Enumerated value indica' ...
  'ting a single FET fault detected in phase A, B or C.  A multiple FET f' ...
  'ailure will result in NOPHASNGGETFLT.'];
MotCtrlIvtrFetFltPha.DocUnits = 'Cnt';
MotCtrlIvtrFetFltPha.EngDT = enum.IvtrFetFltPha1;
MotCtrlIvtrFetFltPha.EngInit = IvtrFetFltPha1.IVTRFETFLTPHA_NOPHASNGFETFLT;
MotCtrlIvtrFetFltPha.EngMin = IvtrFetFltPha1.IVTRFETFLTPHA_NOPHASNGFETFLT;
MotCtrlIvtrFetFltPha.EngMax = IvtrFetFltPha1.IVTRFETFLTPHA_PHACSNGFETFLT;
MotCtrlIvtrFetFltPha.ReadIn = {'SinVltgGennPer1'};
MotCtrlIvtrFetFltPha.ReadType = 'NonRte';


MotCtrlIvtrFetFltTyp = DataDict.IpSignal;
MotCtrlIvtrFetFltTyp.LongName = 'Inverter Field Effect Transistor Fault Type';
MotCtrlIvtrFetFltTyp.Description = [...
  'An indication of a FET failure in the bridge.  Enumerated value indica' ...
  'ting a lower, upper or multiple FET fault detected.'];
MotCtrlIvtrFetFltTyp.DocUnits = 'Cnt';
MotCtrlIvtrFetFltTyp.EngDT = enum.IvtrFetFltTyp1;
MotCtrlIvtrFetFltTyp.EngInit = IvtrFetFltTyp1.IVTRFETFLTTYP_NOFETFLT;
MotCtrlIvtrFetFltTyp.EngMin = IvtrFetFltTyp1.IVTRFETFLTTYP_NOFETFLT;
MotCtrlIvtrFetFltTyp.EngMax = IvtrFetFltTyp1.IVTRFETFLTTYP_MPLFETFLT;
MotCtrlIvtrFetFltTyp.ReadIn = {'SinVltgGennPer1'};
MotCtrlIvtrFetFltTyp.ReadType = 'NonRte';


MotCtrlMfgEnaSt = DataDict.IpSignal;
MotCtrlMfgEnaSt.LongName = 'Manufacture Enable State';
MotCtrlMfgEnaSt.Description = 'Manufacture Enable State';
MotCtrlMfgEnaSt.DocUnits = 'Cnt';
MotCtrlMfgEnaSt.EngDT = enum.MfgEnaSt1;
MotCtrlMfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MotCtrlMfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MotCtrlMfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MotCtrlMfgEnaSt.ReadIn = {'SinVltgGennPer1'};
MotCtrlMfgEnaSt.ReadType = 'NonRte';


MotCtrlMotAgElec = DataDict.IpSignal;
MotCtrlMotAgElec.LongName = 'Motor Angle Electrical';
MotCtrlMotAgElec.Description = 'Motor Angle Electrical';
MotCtrlMotAgElec.DocUnits = 'MotRevElec';
MotCtrlMotAgElec.EngDT = dt.u0p16;
MotCtrlMotAgElec.EngInit = 0;
MotCtrlMotAgElec.EngMin = 0;
MotCtrlMotAgElec.EngMax = 0.9999847412;
MotCtrlMotAgElec.ReadIn = {'SinVltgGennPer1'};
MotCtrlMotAgElec.ReadType = 'NonRte';


MotCtrlMotModlnIdx = DataDict.IpSignal;
MotCtrlMotModlnIdx.LongName = 'Motor Modulation Index';
MotCtrlMotModlnIdx.Description = 'Motor Modulation Index';
MotCtrlMotModlnIdx.DocUnits = 'Uls';
MotCtrlMotModlnIdx.EngDT = dt.float32;
MotCtrlMotModlnIdx.EngInit = 0;
MotCtrlMotModlnIdx.EngMin = 0;
MotCtrlMotModlnIdx.EngMax = 1;
MotCtrlMotModlnIdx.ReadIn = {'SinVltgGennPer1'};
MotCtrlMotModlnIdx.ReadType = 'NonRte';


MotCtrlMotPhaAdv = DataDict.IpSignal;
MotCtrlMotPhaAdv.LongName = 'Motor Phase Advance';
MotCtrlMotPhaAdv.Description = 'Motor Phase Advance';
MotCtrlMotPhaAdv.DocUnits = 'MotRevElec';
MotCtrlMotPhaAdv.EngDT = dt.u0p16;
MotCtrlMotPhaAdv.EngInit = 0;
MotCtrlMotPhaAdv.EngMin = 0;
MotCtrlMotPhaAdv.EngMax = 0.9999847412;
MotCtrlMotPhaAdv.ReadIn = {'SinVltgGennPer1'};
MotCtrlMotPhaAdv.ReadType = 'NonRte';


MotCtrlSwCalEna = DataDict.IpSignal;
MotCtrlSwCalEna.LongName = 'Motor Control Hall Calibration Enable';
MotCtrlSwCalEna.Description = [...
  'Motor Control Hall Calibration Enable'];
MotCtrlSwCalEna.DocUnits = 'Cnt';
MotCtrlSwCalEna.EngDT = dt.lgc;
MotCtrlSwCalEna.EngInit = 0;
MotCtrlSwCalEna.EngMin = 0;
MotCtrlSwCalEna.EngMax = 1;
MotCtrlSwCalEna.ReadIn = {'SinVltgGennPer1'};
MotCtrlSwCalEna.ReadType = 'NonRte';


MotCtrlSwCalModlnIdx = DataDict.IpSignal;
MotCtrlSwCalModlnIdx.LongName = 'Motor Control Software Calibration Modulation Index';
MotCtrlSwCalModlnIdx.Description = [...
  'Motor Control Software Calibration Modulation Index'];
MotCtrlSwCalModlnIdx.DocUnits = 'Uls';
MotCtrlSwCalModlnIdx.EngDT = dt.float32;
MotCtrlSwCalModlnIdx.EngInit = 0;
MotCtrlSwCalModlnIdx.EngMin = 0;
MotCtrlSwCalModlnIdx.EngMax = 1;
MotCtrlSwCalModlnIdx.ReadIn = {'SinVltgGennPer1'};
MotCtrlSwCalModlnIdx.ReadType = 'NonRte';


MotCtrlSwCalPosnIdx = DataDict.IpSignal;
MotCtrlSwCalPosnIdx.LongName = 'Motor Control Software Calibration Position Index';
MotCtrlSwCalPosnIdx.Description = [...
  'Motor Control Software Calibration Position Index'];
MotCtrlSwCalPosnIdx.DocUnits = 'Cnt';
MotCtrlSwCalPosnIdx.EngDT = dt.u0p16;
MotCtrlSwCalPosnIdx.EngInit = 0;
MotCtrlSwCalPosnIdx.EngMin = 0;
MotCtrlSwCalPosnIdx.EngMax = 0.9999847412;
MotCtrlSwCalPosnIdx.ReadIn = {'SinVltgGennPer1'};
MotCtrlSwCalPosnIdx.ReadType = 'NonRte';


MotCtrlVehSpd = DataDict.IpSignal;
MotCtrlVehSpd.LongName = 'Vehicle Speed';
MotCtrlVehSpd.Description = [...
  'Conditioned Value For System-Wide Usage.'];
MotCtrlVehSpd.DocUnits = 'Kph';
MotCtrlVehSpd.EngDT = dt.float32;
MotCtrlVehSpd.EngInit = 0;
MotCtrlVehSpd.EngMin = 0;
MotCtrlVehSpd.EngMax = 511;
MotCtrlVehSpd.ReadIn = {'SinVltgGennPer1'};
MotCtrlVehSpd.ReadType = 'NonRte';


MotElecMeclPolarity = DataDict.IpSignal;
MotElecMeclPolarity.LongName = 'Motor Electro-Mechanical Polarity';
MotElecMeclPolarity.Description = 'Motor Electro-Mechanical Polarity';
MotElecMeclPolarity.DocUnits = 'Uls';
MotElecMeclPolarity.EngDT = dt.s08;
MotElecMeclPolarity.EngInit = 1;
MotElecMeclPolarity.EngMin = -1;
MotElecMeclPolarity.EngMax = 1;
MotElecMeclPolarity.ReadIn = {'SinVltgGennInit1'};
MotElecMeclPolarity.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlCmuOffs = DataDict.OpSignal;
MotCtrlCmuOffs.LongName = 'Commutation Offset';
MotCtrlCmuOffs.Description = 'Commutation Offset';
MotCtrlCmuOffs.DocUnits = 'NanoSec';
MotCtrlCmuOffs.SwcShoName = 'SinVltgGenn';
MotCtrlCmuOffs.EngDT = dt.u32;
MotCtrlCmuOffs.EngInit = 0;
MotCtrlCmuOffs.EngMin = 0;
MotCtrlCmuOffs.EngMax = 71429;
MotCtrlCmuOffs.TestTolerance = 1;
MotCtrlCmuOffs.WrittenIn = {'SinVltgGennPer1'};
MotCtrlCmuOffs.WriteType = 'NonRte';


MotCtrlPhaOnTiA = DataDict.OpSignal;
MotCtrlPhaOnTiA.LongName = 'Phase a on Time';
MotCtrlPhaOnTiA.Description = 'Phase a on Time';
MotCtrlPhaOnTiA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiA.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiA.EngDT = dt.u32;
MotCtrlPhaOnTiA.EngInit = 0;
MotCtrlPhaOnTiA.EngMin = 0;
MotCtrlPhaOnTiA.EngMax = 71429;
MotCtrlPhaOnTiA.TestTolerance = 1;
MotCtrlPhaOnTiA.WrittenIn = {'SinVltgGennPer1'};
MotCtrlPhaOnTiA.WriteType = 'NonRte';


MotCtrlPhaOnTiB = DataDict.OpSignal;
MotCtrlPhaOnTiB.LongName = 'Phase B on Time';
MotCtrlPhaOnTiB.Description = 'Phase B on Time';
MotCtrlPhaOnTiB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiB.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiB.EngDT = dt.u32;
MotCtrlPhaOnTiB.EngInit = 0;
MotCtrlPhaOnTiB.EngMin = 0;
MotCtrlPhaOnTiB.EngMax = 71429;
MotCtrlPhaOnTiB.TestTolerance = 1;
MotCtrlPhaOnTiB.WrittenIn = {'SinVltgGennPer1'};
MotCtrlPhaOnTiB.WriteType = 'NonRte';


MotCtrlPhaOnTiC = DataDict.OpSignal;
MotCtrlPhaOnTiC.LongName = 'Phase C on Time';
MotCtrlPhaOnTiC.Description = 'Phase C on Time';
MotCtrlPhaOnTiC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiC.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiC.EngDT = dt.u32;
MotCtrlPhaOnTiC.EngInit = 0;
MotCtrlPhaOnTiC.EngMin = 0;
MotCtrlPhaOnTiC.EngMax = 71429;
MotCtrlPhaOnTiC.TestTolerance = 1;
MotCtrlPhaOnTiC.WrittenIn = {'SinVltgGennPer1'};
MotCtrlPhaOnTiC.WriteType = 'NonRte';


MotCtrlPhaOnTiSumA = DataDict.OpSignal;
MotCtrlPhaOnTiSumA.LongName = 'Phase on Time Summation A';
MotCtrlPhaOnTiSumA.Description = 'Phase On Time Summation A';
MotCtrlPhaOnTiSumA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiSumA.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiSumA.EngDT = dt.u32;
MotCtrlPhaOnTiSumA.EngInit = 0;
MotCtrlPhaOnTiSumA.EngMin = 0;
MotCtrlPhaOnTiSumA.EngMax = 4294967295;
MotCtrlPhaOnTiSumA.TestTolerance = 1;
MotCtrlPhaOnTiSumA.WrittenIn = {'SinVltgGennPer2'};
MotCtrlPhaOnTiSumA.WriteType = 'NonRte';


MotCtrlPhaOnTiSumB = DataDict.OpSignal;
MotCtrlPhaOnTiSumB.LongName = 'Phase on Time Summation B';
MotCtrlPhaOnTiSumB.Description = 'Phase On Time Summation B';
MotCtrlPhaOnTiSumB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiSumB.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiSumB.EngDT = dt.u32;
MotCtrlPhaOnTiSumB.EngInit = 0;
MotCtrlPhaOnTiSumB.EngMin = 0;
MotCtrlPhaOnTiSumB.EngMax = 4294967295;
MotCtrlPhaOnTiSumB.TestTolerance = 1;
MotCtrlPhaOnTiSumB.WrittenIn = {'SinVltgGennPer2'};
MotCtrlPhaOnTiSumB.WriteType = 'NonRte';


MotCtrlPhaOnTiSumC = DataDict.OpSignal;
MotCtrlPhaOnTiSumC.LongName = 'Phase on Time Summation C';
MotCtrlPhaOnTiSumC.Description = 'Phase On Time Summation C';
MotCtrlPhaOnTiSumC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiSumC.SwcShoName = 'SinVltgGenn';
MotCtrlPhaOnTiSumC.EngDT = dt.u32;
MotCtrlPhaOnTiSumC.EngInit = 0;
MotCtrlPhaOnTiSumC.EngMin = 0;
MotCtrlPhaOnTiSumC.EngMax = 4294967295;
MotCtrlPhaOnTiSumC.TestTolerance = 1;
MotCtrlPhaOnTiSumC.WrittenIn = {'SinVltgGennPer2'};
MotCtrlPhaOnTiSumC.WriteType = 'NonRte';


MotCtrlPwmPerd = DataDict.OpSignal;
MotCtrlPwmPerd.LongName = 'PWM Period';
MotCtrlPwmPerd.Description = 'PWM Period';
MotCtrlPwmPerd.DocUnits = 'NanoSec';
MotCtrlPwmPerd.SwcShoName = 'SinVltgGenn';
MotCtrlPwmPerd.EngDT = dt.u32;
MotCtrlPwmPerd.EngInit = 62500;
MotCtrlPwmPerd.EngMin = 55555;
MotCtrlPwmPerd.EngMax = 71429;
MotCtrlPwmPerd.TestTolerance = 1;
MotCtrlPwmPerd.WrittenIn = {'SinVltgGennPer1'};
MotCtrlPwmPerd.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SinVltgGennDthrEna = DataDict.Calibration;
SinVltgGennDthrEna.LongName = 'Sine Voltage Generation Dither Enable';
SinVltgGennDthrEna.Description = [...
  'Enables PWM period dithering.  Since dither is generally necessary, th' ...
  'e value should be 1.'];
SinVltgGennDthrEna.DocUnits = 'Cnt';
SinVltgGennDthrEna.EngDT = dt.lgc;
SinVltgGennDthrEna.EngVal = 1;
SinVltgGennDthrEna.EngMin = 0;
SinVltgGennDthrEna.EngMax = 1;
SinVltgGennDthrEna.Cardinality = 'Cmn';
SinVltgGennDthrEna.CustomerVisible = false;
SinVltgGennDthrEna.Online = false;
SinVltgGennDthrEna.Impact = 'M';
SinVltgGennDthrEna.TuningOwner = 'FDD';
SinVltgGennDthrEna.GraphLink = {''};
SinVltgGennDthrEna.Monotony = 'None';
SinVltgGennDthrEna.MaxGrad = 999;
SinVltgGennDthrEna.PortName = 'SinVltgGennDthrEna';


SinVltgGennDthrLpFilCoeff = DataDict.Calibration;
SinVltgGennDthrLpFilCoeff.LongName = 'Sine Voltage Generation Dither LPF Coefficient';
SinVltgGennDthrLpFilCoeff.Description = [...
  'Sine Voltage Generation Dither LPF Kn value = 20/32'];
SinVltgGennDthrLpFilCoeff.DocUnits = 'Uls';
SinVltgGennDthrLpFilCoeff.EngDT = dt.float32;
SinVltgGennDthrLpFilCoeff.EngVal = 0.625;
SinVltgGennDthrLpFilCoeff.EngMin = 0;
SinVltgGennDthrLpFilCoeff.EngMax = 1;
SinVltgGennDthrLpFilCoeff.Cardinality = 'Cmn';
SinVltgGennDthrLpFilCoeff.CustomerVisible = false;
SinVltgGennDthrLpFilCoeff.Online = false;
SinVltgGennDthrLpFilCoeff.Impact = 'M';
SinVltgGennDthrLpFilCoeff.TuningOwner = 'FDD';
SinVltgGennDthrLpFilCoeff.GraphLink = {''};
SinVltgGennDthrLpFilCoeff.Monotony = 'None';
SinVltgGennDthrLpFilCoeff.MaxGrad = 999;
SinVltgGennDthrLpFilCoeff.PortName = 'SinVltgGennDthrLpFilCoeff';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
MotAgSwCalVehSpdThd = DataDict.ImprtdCal;
MotAgSwCalVehSpdThd.DocUnits = 'Kph';
MotAgSwCalVehSpdThd.EngDT = dt.float32;
MotAgSwCalVehSpdThd.EngVal = 3;
MotAgSwCalVehSpdThd.EngMin = 0;
MotAgSwCalVehSpdThd.EngMax = 511;
MotAgSwCalVehSpdThd.PortName = 'MotAgSwCalVehSpdThd';
MotAgSwCalVehSpdThd.Description = [...
  'Software Calibration Vehicle Speed Threshold'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
Fil1OutpPrev = DataDict.PIM;
Fil1OutpPrev.LongName = 'Filter 1 Output Previous';
Fil1OutpPrev.Description = 'Filter 1 Output Previous';
Fil1OutpPrev.DocUnits = 'NanoSec';
Fil1OutpPrev.EngDT = dt.float32;
Fil1OutpPrev.EngMin = 0;
Fil1OutpPrev.EngMax = 71429;
Fil1OutpPrev.InitRowCol = [1  1];


Fil2OutpPrev = DataDict.PIM;
Fil2OutpPrev.LongName = 'Filter 2 Output Previous';
Fil2OutpPrev.Description = 'Filter 2 Output Previous';
Fil2OutpPrev.DocUnits = 'NanoSec';
Fil2OutpPrev.EngDT = dt.float32;
Fil2OutpPrev.EngMin = 0;
Fil2OutpPrev.EngMax = 71429;
Fil2OutpPrev.InitRowCol = [1  1];


PhaDptOffsA = DataDict.PIM;
PhaDptOffsA.LongName = 'Phase Dependent Offset A';
PhaDptOffsA.Description = 'Phase Dependent Offset A';
PhaDptOffsA.DocUnits = 'MotRevElec';
PhaDptOffsA.EngDT = dt.float32;
PhaDptOffsA.EngMin = -0.9999847412;
PhaDptOffsA.EngMax = 0.9999847412;
PhaDptOffsA.InitRowCol = [1  1];


PhaDptOffsB = DataDict.PIM;
PhaDptOffsB.LongName = 'Phase Dependent Offset B';
PhaDptOffsB.Description = 'Phase Dependent Offset B';
PhaDptOffsB.DocUnits = 'MotRevElec';
PhaDptOffsB.EngDT = dt.float32;
PhaDptOffsB.EngMin = -0.9999847412;
PhaDptOffsB.EngMax = 0.9999847412;
PhaDptOffsB.InitRowCol = [1  1];


PhaDptOffsC = DataDict.PIM;
PhaDptOffsC.LongName = 'Phase Dependent Offset C';
PhaDptOffsC.Description = 'Phase Dependent Offset C';
PhaDptOffsC.DocUnits = 'MotRevElec';
PhaDptOffsC.EngDT = dt.float32;
PhaDptOffsC.EngMin = -0.9999847412;
PhaDptOffsC.EngMax = 0.9999847412;
PhaDptOffsC.InitRowCol = [1  1];


PhaOnTiSumAPrev = DataDict.PIM;
PhaOnTiSumAPrev.LongName = 'Phase on Time Summation a Previous';
PhaOnTiSumAPrev.Description = [...
  'Motor Control Phase On Time Sum A Prev'];
PhaOnTiSumAPrev.DocUnits = 'NanoSec';
PhaOnTiSumAPrev.EngDT = dt.u32;
PhaOnTiSumAPrev.EngMin = 0;
PhaOnTiSumAPrev.EngMax = 4294967295;
PhaOnTiSumAPrev.InitRowCol = [1  1];


PhaOnTiSumBPrev = DataDict.PIM;
PhaOnTiSumBPrev.LongName = 'Phase on Time Summation B Previous';
PhaOnTiSumBPrev.Description = [...
  'Motor Control Phase On Time Sum B Prev'];
PhaOnTiSumBPrev.DocUnits = 'NanoSec';
PhaOnTiSumBPrev.EngDT = dt.u32;
PhaOnTiSumBPrev.EngMin = 0;
PhaOnTiSumBPrev.EngMax = 4294967295;
PhaOnTiSumBPrev.InitRowCol = [1  1];


PhaOnTiSumCPrev = DataDict.PIM;
PhaOnTiSumCPrev.LongName = 'Phase on Time Summation C Previous';
PhaOnTiSumCPrev.Description = [...
  'Motor Control Phase On Time Sum C Prev'];
PhaOnTiSumCPrev.DocUnits = 'NanoSec';
PhaOnTiSumCPrev.EngDT = dt.u32;
PhaOnTiSumCPrev.EngMin = 0;
PhaOnTiSumCPrev.EngMax = 4294967295;
PhaOnTiSumCPrev.InitRowCol = [1  1];


PwmPerdRng = DataDict.PIM;
PwmPerdRng.LongName = 'PWM Period Range';
PwmPerdRng.Description = 'PWM Period Range';
PwmPerdRng.DocUnits = 'NanoSec';
PwmPerdRng.EngDT = dt.u32;
PwmPerdRng.EngMin = 0;
PwmPerdRng.EngMax = 71429;
PwmPerdRng.InitRowCol = [1  1];


RndNrPrev = DataDict.PIM;
RndNrPrev.LongName = 'Random Number Previous';
RndNrPrev.Description = 'Random Number Previous';
RndNrPrev.DocUnits = 'Uls';
RndNrPrev.EngDT = dt.float32;
RndNrPrev.EngMin = 0;
RndNrPrev.EngMax = 1;
RndNrPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.LongName = 'Maximum PWM Period';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Description = [...
  'Maximum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMAX_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMIN_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngVal = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngMin = 45454;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMAX_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMin = 45455;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


SINVLTGGENN120DEG_MOTREVELEC_F32 = DataDict.Constant;
SINVLTGGENN120DEG_MOTREVELEC_F32.LongName = 'Sine Voltage Generation 120DEG Motor Angle in Rev';
SINVLTGGENN120DEG_MOTREVELEC_F32.Description = [...
  'Sine Voltage Generation 120DEG Motor Angle in Rev'];
SINVLTGGENN120DEG_MOTREVELEC_F32.DocUnits = 'MotRevElec';
SINVLTGGENN120DEG_MOTREVELEC_F32.EngDT = dt.float32;
SINVLTGGENN120DEG_MOTREVELEC_F32.EngVal = 0.3333333333;
SINVLTGGENN120DEG_MOTREVELEC_F32.Define = 'Local';


SINVLTGGENN240DEG_MOTREVELEC_F32 = DataDict.Constant;
SINVLTGGENN240DEG_MOTREVELEC_F32.LongName = 'Sine Voltage Generation 240DEG Motor Angle in Rev';
SINVLTGGENN240DEG_MOTREVELEC_F32.Description = [...
  'Sine Voltage Generation 240DEG Motor Angle in Rev'];
SINVLTGGENN240DEG_MOTREVELEC_F32.DocUnits = 'MotRevElec';
SINVLTGGENN240DEG_MOTREVELEC_F32.EngDT = dt.float32;
SINVLTGGENN240DEG_MOTREVELEC_F32.EngVal = 0.6666666666;
SINVLTGGENN240DEG_MOTREVELEC_F32.Define = 'Local';


SINVLTGGENN60DEG_MOTREVELEC_F32 = DataDict.Constant;
SINVLTGGENN60DEG_MOTREVELEC_F32.LongName = 'Sine Voltage Generation 60DEG Motor Angle in Rev';
SINVLTGGENN60DEG_MOTREVELEC_F32.Description = [...
  'Sine Voltage Generation 60DEG Motor Angle in Rev'];
SINVLTGGENN60DEG_MOTREVELEC_F32.DocUnits = 'MotRevElec';
SINVLTGGENN60DEG_MOTREVELEC_F32.EngDT = dt.float32;
SINVLTGGENN60DEG_MOTREVELEC_F32.EngVal = 0.1666666666;
SINVLTGGENN60DEG_MOTREVELEC_F32.Define = 'Local';


SINVLTGGENNCMUOFFSTBLX_ULS_F32 = DataDict.Constant;
SINVLTGGENNCMUOFFSTBLX_ULS_F32.LongName = 'Commutation Offset Table X';
SINVLTGGENNCMUOFFSTBLX_ULS_F32.Description = [...
  'Sine Voltage Generation Commutation Offset Table X axis Value'];
SINVLTGGENNCMUOFFSTBLX_ULS_F32.DocUnits = 'Uls';
SINVLTGGENNCMUOFFSTBLX_ULS_F32.EngDT = dt.float32;
SINVLTGGENNCMUOFFSTBLX_ULS_F32.EngVal =  ...
   [0.6             0.95];
SINVLTGGENNCMUOFFSTBLX_ULS_F32.Define = 'Local';


SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32 = DataDict.Constant;
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.LongName = 'Commutation Offset Table Y';
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.Description = [...
  'Sine Voltage Generation Commutation Offset Table Y axis Value'];
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.DocUnits = 'NanoSec';
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.EngDT = dt.float32;
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.EngVal =  ...
   [6250                0];
SINVLTGGENNCMUOFFSTBLY_NANOSEC_F32.Define = 'Local';


SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32 = DataDict.Constant;
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.LongName = 'Sine Voltage Generation Modulation Index Phase Max Limit';
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.Description = [...
  'Sine Voltage Generation Modulation Index Phase Max Limit'];
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.DocUnits = 'Uls';
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.EngDT = dt.float32;
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.EngVal = 1;
SINVLTGGENNMODINDXPHASEMAXLIM_ULS_F32.Define = 'Local';


SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32 = DataDict.Constant;
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.LongName = 'Sine Voltage Generation Modulation Index Phase Min Limit';
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.Description = [...
  'Sine Voltage Generation Modulation Index Phase Min Limit'];
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.DocUnits = 'Uls';
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.EngDT = dt.float32;
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.EngVal = 0;
SINVLTGGENNMODINDXPHASEMINLIM_ULS_F32.Define = 'Local';


SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32 = DataDict.Constant;
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.LongName = 'Sine Voltage Generation Phase on Time Max Limit';
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.Description = [...
  'Sine Voltage Generation Phase on Time Max Limit'];
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.DocUnits = 'NanoSec';
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.EngDT = dt.u32;
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.EngVal = 71429;
SINVLTGGENNPHAONTIMAXLIM_NANOSEC_U32.Define = 'Local';


SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32 = DataDict.Constant;
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.LongName = 'Sine Voltage Generation Phase on Time Summation Max Limit';
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.Description = [...
  'Sine Voltage Generation Phase on Time Summation Max Limit'];
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.DocUnits = 'NanoSec';
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.EngDT = dt.u32;
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.EngVal = 4294967295;
SINVLTGGENNPHAONTISUMMAXLIM_NANOSEC_U32.Define = 'Local';


SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16 = DataDict.Constant;
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.LongName = 'Sine Voltage Generation Phase to Gnd Table Size';
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.Description = [...
  'Sine Voltage Generation Phase to Gnd Table Size = 2049'];
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.DocUnits = 'Cnt';
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.EngDT = dt.u16;
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.EngVal = 2049;
SINVLTGGENNPHATOGNDTBLSIZE_CNT_U16.Define = 'Local';


SINVLTGGENNPHATOGNDTBL_CNT_U16 = DataDict.Constant;
SINVLTGGENNPHATOGNDTBL_CNT_U16.LongName = 'Sine Voltage Generation Phase to Gnd Table';
SINVLTGGENNPHATOGNDTBL_CNT_U16.Description = [...
  'Sine Voltage Generation Phase to Gnd Lookup Table'];
SINVLTGGENNPHATOGNDTBL_CNT_U16.DocUnits = 'Cnt';
SINVLTGGENNPHATOGNDTBL_CNT_U16.EngDT = dt.u16;
SINVLTGGENNPHATOGNDTBL_CNT_U16.EngVal =  ...
   [56755            56788            56822            56855            56889            56922            56955            56988            57021            57054            57087            57120            57153            57186            57218            57251            57284            57316            57349            57381            57413            57446            57478            57510            57542            57574            57606            57638            57670            57702            57733            57765            57797            57828            57860            57891            57923            57954            57985            58016            58048            58079            58110            58141            58171            58202            58233            58264            58294            58325            58356            58386            58416            58447            58477            58507            58537            58568            58598            58628            58657            58687            58717            58747            58777            58806            58836            58865            58895            58924            58953            58983            59012            59041            59070            59099            59128            59157            59186            59214            59243            59272            59300            59329            59357            59385            59414            59442            59470            59498            59526            59554            59582            59610            59638            59666            59693            59721            59749            59776            59804            59831            59858            59886            59913            59940            59967            59994            60021            60048            60075            60101            60128            60155            60181            60208            60234            60260            60287            60313            60339            60365            60391            60417            60443            60469            60495            60521            60546            60572            60598            60623            60649            60674            60699            60724            60750            60775            60800            60825            60850            60874            60899            60924            60949            60973            60998            61022            61047            61071            61095            61120            61144            61168            61192            61216            61240            61263            61287            61311            61335            61358            61382            61405            61429            61452            61475            61498            61521            61544            61567            61590            61613            61636            61659            61681            61704            61727            61749            61772            61794            61816            61838            61861            61883            61905            61927            61949            61970            61992            62014            62035            62057            62079            62100            62121            62143            62164            62185            62206            62227            62248            62269            62290            62311            62332            62352            62373            62393            62414            62434            62455            62475            62495            62515            62535            62555            62575            62595            62615            62635            62654            62674            62694            62713            62733            62752            62771            62790            62810            62829            62848            62867            62886            62904            62923            62942            62960            62979            62998            63016            63034            63053            63071            63089            63107            63125            63143            63161            63179            63197            63214            63232            63250            63267            63285            63302            63319            63337            63354            63371            63388            63405            63422            63439            63455            63472            63489            63505            63522            63538            63555            63571            63587            63603            63620            63636            63652            63668            63683            63699            63715            63731            63746            63762            63777            63792            63808            63823            63838            63853            63868            63883            63898            63913            63928            63943            63957            63972            63986            64001            64015            64030            64044            64058            64072            64086            64100            64114            64128            64142            64155            64169            64183            64196            64210            64223            64236            64249            64263            64276            64289            64302            64315            64328            64340            64353            64366            64378            64391            64403            64416            64428            64440            64452            64464            64476            64488            64500            64512            64524            64535            64547            64559            64570            64582            64593            64604            64615            64627            64638            64649            64660            64671            64681            64692            64703            64713            64724            64734            64745            64755            64765            64776            64786            64796            64806            64816            64826            64835            64845            64855            64864            64874            64883            64893            64902            64911            64921            64930            64939            64948            64957            64966            64974            64983            64992            65000            65009            65017            65026            65034            65042            65050            65058            65066            65074            65082            65090            65098            65106            65113            65121            65128            65136            65143            65150            65158            65165            65172            65179            65186            65193            65199            65206            65213            65219            65226            65232            65239            65245            65251            65258            65264            65270            65276            65282            65288            65293            65299            65305            65310            65316            65321            65327            65332            65337            65342            65347            65352            65357            65362            65367            65372            65377            65381            65386            65390            65395            65399            65403            65408            65412            65416            65420            65424            65428            65431            65435            65439            65442            65446            65449            65453            65456            65459            65463            65466            65469            65472            65475            65477            65480            65483            65486            65488            65491            65493            65495            65498            65500            65502            65504            65506            65508            65510            65512            65514            65515            65517            65518            65520            65521            65523            65524            65525            65526            65527            65528            65529            65530            65531            65532            65532            65533            65533            65534            65534            65534            65535            65535            65535            65535            65535            65535            65535            65534            65534            65534            65533            65533            65532            65532            65531            65530            65529            65528            65527            65526            65525            65524            65523            65521            65520            65518            65517            65515            65514            65512            65510            65508            65506            65504            65502            65500            65498            65495            65493            65491            65488            65486            65483            65480            65477            65475            65472            65469            65466            65463            65459            65456            65453            65449            65446            65442            65439            65435            65431            65428            65424            65420            65416            65412            65408            65403            65399            65395            65390            65386            65381            65377            65372            65367            65362            65357            65352            65347            65342            65337            65332            65327            65321            65316            65310            65305            65299            65293            65288            65282            65276            65270            65264            65258            65251            65245            65239            65232            65226            65219            65213            65206            65199            65193            65186            65179            65172            65165            65158            65150            65143            65136            65128            65121            65113            65106            65098            65090            65082            65074            65066            65058            65050            65042            65034            65026            65017            65009            65000            64992            64983            64974            64966            64957            64948            64939            64930            64921            64911            64902            64893            64883            64874            64864            64855            64845            64835            64826            64816            64806            64796            64786            64776            64765            64755            64745            64734            64724            64713            64703            64692            64681            64671            64660            64649            64638            64627            64615            64604            64593            64582            64570            64559            64547            64535            64524            64512            64500            64488            64476            64464            64452            64440            64428            64416            64403            64391            64378            64366            64353            64340            64328            64315            64302            64289            64276            64263            64249            64236            64223            64210            64196            64183            64169            64155            64142            64128            64114            64100            64086            64072            64058            64044            64030            64015            64001            63986            63972            63957            63943            63928            63913            63898            63883            63868            63853            63838            63823            63808            63792            63777            63762            63746            63731            63715            63699            63683            63668            63652            63636            63620            63603            63587            63571            63555            63538            63522            63505            63489            63472            63455            63439            63422            63405            63388            63371            63354            63337            63319            63302            63285            63267            63250            63232            63214            63197            63179            63161            63143            63125            63107            63089            63071            63053            63034            63016            62998            62979            62960            62942            62923            62904            62886            62867            62848            62829            62810            62790            62771            62752            62733            62713            62694            62674            62654            62635            62615            62595            62575            62555            62535            62515            62495            62475            62455            62434            62414            62393            62373            62352            62332            62311            62290            62269            62248            62227            62206            62185            62164            62143            62121            62100            62079            62057            62035            62014            61992            61970            61949            61927            61905            61883            61861            61838            61816            61794            61772            61749            61727            61704            61681            61659            61636            61613            61590            61567            61544            61521            61498            61475            61452            61429            61405            61382            61358            61335            61311            61287            61263            61240            61216            61192            61168            61144            61120            61095            61071            61047            61022            60998            60973            60949            60924            60899            60874            60850            60825            60800            60775            60750            60724            60699            60674            60649            60623            60598            60572            60546            60521            60495            60469            60443            60417            60391            60365            60339            60313            60287            60260            60234            60208            60181            60155            60128            60101            60075            60048            60021            59994            59967            59940            59913            59886            59858            59831            59804            59776            59749            59721            59693            59666            59638            59610            59582            59554            59526            59498            59470            59442            59414            59385            59357            59329            59300            59272            59243            59214            59186            59157            59128            59099            59070            59041            59012            58983            58953            58924            58895            58865            58836            58806            58777            58747            58717            58687            58657            58628            58598            58568            58537            58507            58477            58447            58416            58386            58356            58325            58294            58264            58233            58202            58171            58141            58110            58079            58048            58016            57985            57954            57923            57891            57860            57828            57797            57765            57733            57702            57670            57638            57606            57574            57542            57510            57478            57446            57413            57381            57349            57316            57284            57251            57218            57186            57153            57120            57087            57054            57021            56988            56955            56922            56889            56855            56822            56788            56755            56721            56688            56654            56620            56587            56553            56519            56485            56451            56417            56383            56349            56314            56280            56246            56211            56177            56142            56108            56073            56038            56003            55969            55934            55899            55864            55829            55794            55758            55723            55688            55652            55617            55582            55546            55510            55475            55439            55403            55367            55332            55296            55260            55224            55187            55151            55115            55079            55042            55006            54970            54933            54896            54860            54823            54786            54750            54713            54676            54639            54602            54565            54528            54490            54453            54416            54378            54341            54303            54266            54228            54191            54153            54115            54077            54039            54002            53964            53925            53887            53849            53811            53773            53734            53696            53657            53619            53580            53542            53503            53464            53426            53387            53348            53309            53270            53231            53192            53153            53113            53074            53035            52995            52956            52916            52877            52837            52797            52758            52718            52678            52638            52598            52558            52518            52478            52438            52398            52357            52317            52277            52236            52196            52155            52115            52074            52033            51992            51952            51911            51870            51829            51788            51747            51705            51664            51623            51582            51540            51499            51457            51416            51374            51333            51291            51249            51207            51166            51124            51082            51040            50998            50956            50913            50871            50829            50787            50744            50702            50659            50617            50574            50531            50489            50446            50403            50360            50317            50274            50231            50188            50145            50102            50059            50016            49972            49929            49885            49842            49798            49755            49711            49667            49624            49580            49536            49492            49448            49404            49360            49316            49272            49228            49183            49139            49095            49050            49006            48961            48917            48872            48827            48783            48738            48693            48648            48603            48558            48513            48468            48423            48378            48333            48287            48242            48197            48151            48106            48060            48014            47969            47923            47877            47832            47786            47740            47694            47648            47602            47556            47510            47464            47417            47371            47325            47278            47232            47185            47139            47092            47046            46999            46952            46905            46859            46812            46765            46718            46671            46624            46577            46529            46482            46435            46388            46340            46293            46245            46198            46150            46103            46055            46007            45960            45912            45864            45816            45768            45720            45672            45624            45576            45528            45479            45431            45383            45334            45286            45238            45189            45140            45092            45043            44995            44946            44897            44848            44799            44750            44701            44652            44603            44554            44505            44456            44406            44357            44308            44258            44209            44159            44110            44060            44011            43961            43911            43861            43812            43762            43712            43662            43612            43562            43512            43462            43411            43361            43311            43261            43210            43160            43109            43059            43008            42958            42907            42856            42806            42755            42704            42653            42602            42551            42500            42449            42398            42347            42296            42245            42194            42142            42091            42039            41988            41937            41885            41833            41782            41730            41678            41627            41575            41523            41471            41419            41367            41315            41263            41211            41159            41107            41055            41002            40950            40898            40845            40793            40741            40688            40635            40583            40530            40478            40425            40372            40319            40266            40213            40161            40108            40055            40001            39948            39895            39842            39789            39735            39682            39629            39575            39522            39468            39415            39361            39308            39254            39200            39147            39093            39039            38985            38931            38877            38824            38769            38715            38661            38607            38553            38499            38445            38390            38336            38282            38227            38173            38118            38064            38009            37954            37900            37845            37790            37736            37681            37626            37571            37516            37461            37406            37351            37296            37241            37186            37130            37075            37020            36965            36909            36854            36798            36743            36687            36632            36576            36521            36465            36409            36354            36298            36242            36186            36130            36074            36018            35962            35906            35850            35794            35738            35682            35625            35569            35513            35457            35400            35344            35287            35231            35174            35118            35061            35004            34948            34891            34834            34778            34721            34664            34607            34550            34493            34436            34379            34322            34265            34208            34150            34093            34036            33979            33921            33864            33807            33749            33692            33634            33577            33519            33462            33404            33346            33288            33231            33173            33115            33057            32999            32941            32884            32826            32768            32709            32651            32593            32535            32477            32419            32360            32302            32244            32185            32127            32069            32010            31952            31893            31835            31776            31717            31659            31600            31541            31482            31424            31365            31306            31247            31188            31129            31070            31011            30952            30893            30834            30775            30716            30656            30597            30538            30478            30419            30360            30300            30241            30181            30122            30062            30003            29943            29884            29824            29764            29704            29645            29585            29525            29465            29405            29345            29286            29226            29166            29106            29045            28985            28925            28865            28805            28745            28684            28624            28564            28504            28443            28383            28322            28262            28201            28141            28080            28020            27959            27899            27838            27777            27717            27656            27595            27534            27473            27413            27352            27291            27230            27169            27108            27047            26986            26925            26863            26802            26741            26680            26619            26557            26496            26435            26374            26312            26251            26189            26128            26066            26005            25943            25882            25820            25759            25697            25635            25574            25512            25450            25388            25327            25265            25203            25141            25079            25017            24955            24893            24831            24769            24707            24645            24583            24521            24459            24396            24334            24272            24210            24147            24085            24023            23960            23898            23836            23773            23711            23648            23586            23523            23461            23398            23335            23273            23210            23147            23085            23022            22959            22896            22834            22771            22708            22645            22582            22519            22456            22393            22330            22267            22204            22141            22078            22015            21952            21889            21825            21762            21699            21636            21573            21509            21446            21383            21319            21256            21192            21129            21066            21002            20939            20875            20812            20748            20684            20621            20557            20493            20430            20366            20302            20239            20175            20111            20047            19984            19920            19856            19792            19728            19664            19600            19536            19472            19408            19344            19280            19216            19152            19088            19024            18960            18895            18831            18767            18703            18639            18574            18510            18446            18381            18317            18253            18188            18124            18060            17995            17931            17866            17802            17737            17673            17608            17544            17479            17414            17350            17285            17221            17156            17091            17026            16962            16897            16832            16767            16703            16638            16573            16508            16443            16378            16313            16249            16184            16119            16054            15989            15924            15859            15794            15729            15664            15598            15533            15468            15403            15338            15273            15208            15142            15077            15012            14947            14881            14816            14751            14686            14620            14555            14490            14424            14359            14293            14228            14163            14097            14032            13966            13901            13835            13770            13704            13639            13573            13507            13442            13376            13311            13245            13179            13114            13048            12982            12917            12851            12785            12720            12654            12588            12522            12456            12391            12325            12259            12193            12127            12061            11996            11930            11864            11798            11732            11666            11600            11534            11468            11402            11336            11270            11204            11138            11072            11006            10940            10874            10808            10741            10675            10609            10543            10477            10411            10345            10278            10212            10146            10080            10014             9947             9881             9815             9749             9682             9616             9550             9483             9417             9351             9284             9218             9152             9085             9019             8953             8886             8820             8753             8687             8620             8554             8488             8421             8355             8288             8222             8155             8089             8022             7956             7889             7823             7756             7690             7623             7556             7490             7423             7357             7290             7223             7157             7090             7024             6957             6890             6824             6757             6690             6624             6557             6490             6424             6357             6290             6223             6157             6090             6023             5957             5890             5823             5756             5689             5623             5556             5489             5422             5356             5289             5222             5155             5088             5022             4955             4888             4821             4754             4687             4621             4554             4487             4420             4353             4286             4219             4152             4086             4019             3952             3885             3818             3751             3684             3617             3550             3483             3416             3350             3283             3216             3149             3082             3015             2948             2881             2814             2747             2680             2613             2546             2479             2412             2345             2278             2211             2144             2077             2010             1943             1876             1809             1742             1675             1608             1541             1474             1407             1340             1273             1206             1139             1072             1005              938              871              804              737              670              603              536              469              402              335              268              201              134               67                0];
SINVLTGGENNPHATOGNDTBL_CNT_U16.Define = 'Local';


SINVLTGGENNSEEDINI_ULS_F32 = DataDict.Constant;
SINVLTGGENNSEEDINI_ULS_F32.LongName = 'Sine Voltage Generation Seed Initial';
SINVLTGGENNSEEDINI_ULS_F32.Description = [...
  'Sine Voltage Generation Seed Initial'];
SINVLTGGENNSEEDINI_ULS_F32.DocUnits = 'Uls';
SINVLTGGENNSEEDINI_ULS_F32.EngDT = dt.float32;
SINVLTGGENNSEEDINI_ULS_F32.EngVal = 0.00015259;
SINVLTGGENNSEEDINI_ULS_F32.Define = 'Local';


SINVLTGGENNSEEDMPLR_ULS_U08 = DataDict.Constant;
SINVLTGGENNSEEDMPLR_ULS_U08.LongName = 'Sine Voltage Generation Seed Multiplier';
SINVLTGGENNSEEDMPLR_ULS_U08.Description = [...
  'Sine Voltage Generation Seed Multiplier'];
SINVLTGGENNSEEDMPLR_ULS_U08.DocUnits = 'Uls';
SINVLTGGENNSEEDMPLR_ULS_U08.EngDT = dt.u08;
SINVLTGGENNSEEDMPLR_ULS_U08.EngVal = 57;
SINVLTGGENNSEEDMPLR_ULS_U08.Define = 'Local';


SINVLTGGENNSEEDOFFS_ULS_F32 = DataDict.Constant;
SINVLTGGENNSEEDOFFS_ULS_F32.LongName = 'Sine Voltage Generation Seed Offset';
SINVLTGGENNSEEDOFFS_ULS_F32.Description = [...
  'Sine Voltage Generation Seed Offset'];
SINVLTGGENNSEEDOFFS_ULS_F32.DocUnits = 'Uls';
SINVLTGGENNSEEDOFFS_ULS_F32.EngDT = dt.float32;
SINVLTGGENNSEEDOFFS_ULS_F32.EngVal = 1.5259e-05;
SINVLTGGENNSEEDOFFS_ULS_F32.Define = 'Local';


SINVLTGGENNZERODEG_MOTREVELEC_F32 = DataDict.Constant;
SINVLTGGENNZERODEG_MOTREVELEC_F32.LongName = 'Sine Voltage Generation ZERODEG Motor Angle in Rev';
SINVLTGGENNZERODEG_MOTREVELEC_F32.Description = [...
  'Sine Voltage Generation ZERODEG Motor Angle in Rev'];
SINVLTGGENNZERODEG_MOTREVELEC_F32.DocUnits = 'MotRevElec';
SINVLTGGENNZERODEG_MOTREVELEC_F32.EngDT = dt.float32;
SINVLTGGENNZERODEG_MOTREVELEC_F32.EngVal = 0;
SINVLTGGENNZERODEG_MOTREVELEC_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
