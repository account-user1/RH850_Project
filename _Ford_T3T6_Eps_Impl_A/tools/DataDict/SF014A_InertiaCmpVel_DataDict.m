%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 15-Aug-2017 14:22:52       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF014A = DataDict.FDD;
SF014A.Version = '1.14.x';
SF014A.LongName = 'Inertia Compensation and Frequency Dependent Damping';
SF014A.ShoName  = 'InertiaCmpVel';
SF014A.DesignASIL = 'D';
SF014A.Description = [...
  'Provide compensation that is dependent on filtering of motor velocity.' ...
  '  Primary purpose is to compensate for motor inertia at low frequencie' ...
  's (inertia compensation) and provide damping acting at higher frequenc' ...
  'ies (frequency dependent damping).'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
InertiaCmpVelInit1 = DataDict.Runnable;
InertiaCmpVelInit1.Context = 'Rte';
InertiaCmpVelInit1.TimeStep = 0;
InertiaCmpVelInit1.Description = [...
  'Inertia Compensation Velocity Initialization Runnable'];

InertiaCmpVelPer1 = DataDict.Runnable;
InertiaCmpVelPer1.Context = 'Rte';
InertiaCmpVelPer1.TimeStep = 0.002;
InertiaCmpVelPer1.Description = [...
  'Inertia Compensation Velocity Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'InertiaCmpVelPer1'};
FltInj_f32.Description = 'Fault Injection';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 999;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = '';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiCmdBas = DataDict.IpSignal;
AssiCmdBas.LongName = 'Base Assist Command';
AssiCmdBas.Description = 'Base Assist Command';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'InertiaCmpVelPer1'};
AssiCmdBas.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'InertiaCmpVelPer1'};
HwTq.ReadType = 'Rte';


InertiaCmpDecelGainDi = DataDict.IpSignal;
InertiaCmpDecelGainDi.LongName = 'Inertia Compensation Deceleration Gain Disable';
InertiaCmpDecelGainDi.Description = [...
  'Disable signal generated from CF025 to disable deceleration part of th' ...
  'is function in case of Loss of Assist'];
InertiaCmpDecelGainDi.DocUnits = 'Cnt';
InertiaCmpDecelGainDi.EngDT = dt.lgc;
InertiaCmpDecelGainDi.EngInit = 0;
InertiaCmpDecelGainDi.EngMin = 0;
InertiaCmpDecelGainDi.EngMax = 1;
InertiaCmpDecelGainDi.ReadIn = {'InertiaCmpVelPer1'};
InertiaCmpDecelGainDi.ReadType = 'Rte';


InertiaCmpVelCmdDi = DataDict.IpSignal;
InertiaCmpVelCmdDi.LongName = 'Inertia Comp Function Serial Comm Service Disable';
InertiaCmpVelCmdDi.Description = [...
  'Inertia Compensation Velocity Command Disable'];
InertiaCmpVelCmdDi.DocUnits = 'Cnt';
InertiaCmpVelCmdDi.EngDT = dt.lgc;
InertiaCmpVelCmdDi.EngInit = 0;
InertiaCmpVelCmdDi.EngMin = 0;
InertiaCmpVelCmdDi.EngMax = 1;
InertiaCmpVelCmdDi.ReadIn = {'InertiaCmpVelPer1'};
InertiaCmpVelCmdDi.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Column Reference Frame';
MotVelCrf.Description = [...
  'Motor Velocity In Column Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'InertiaCmpVelPer1'};
MotVelCrf.ReadType = 'Rte';


VehLgtA = DataDict.IpSignal;
VehLgtA.LongName = 'Vehicle Longitudinal Acceleration';
VehLgtA.Description = 'Vehicle Longitudinal Acceleration';
VehLgtA.DocUnits = 'KphPerSec';
VehLgtA.EngDT = dt.float32;
VehLgtA.EngInit = 0;
VehLgtA.EngMin = -35;
VehLgtA.EngMax = 35;
VehLgtA.ReadIn = {'InertiaCmpVelPer1'};
VehLgtA.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'InertiaCmpVelPer1'};
VehSpd.ReadType = 'Rte';


WhlImbRejctnAmp = DataDict.IpSignal;
WhlImbRejctnAmp.LongName = 'Wheel Imbalance Rejection Command Amplitude';
WhlImbRejctnAmp.Description = [...
  'Wheel Imbalance Rejection Command Amplitude'];
WhlImbRejctnAmp.DocUnits = 'MotNwtMtr';
WhlImbRejctnAmp.EngDT = dt.float32;
WhlImbRejctnAmp.EngInit = 0;
WhlImbRejctnAmp.EngMin = 0;
WhlImbRejctnAmp.EngMax = 8.8;
WhlImbRejctnAmp.ReadIn = {'InertiaCmpVelPer1'};
WhlImbRejctnAmp.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
InertiaCmpVelCmd = DataDict.OpSignal;
InertiaCmpVelCmd.LongName = 'Inertia Compensation Velocity Command';
InertiaCmpVelCmd.Description = [...
  'Inertia Compensation Velocity Command'];
InertiaCmpVelCmd.DocUnits = 'MotNwtMtr';
InertiaCmpVelCmd.SwcShoName = 'InertiaCmpVel';
InertiaCmpVelCmd.EngDT = dt.float32;
InertiaCmpVelCmd.EngInit = 0;
InertiaCmpVelCmd.EngMin = -8.8;
InertiaCmpVelCmd.EngMax = 8.8;
InertiaCmpVelCmd.TestTolerance = 0.0005;
InertiaCmpVelCmd.WrittenIn = {'InertiaCmpVelPer1'};
InertiaCmpVelCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
InertiaCmpVelAssiBasdDampgCoeffX = DataDict.Calibration;
InertiaCmpVelAssiBasdDampgCoeffX.LongName = 'Inertia Compensation Velocity Assist Based Damping Coefficient X';
InertiaCmpVelAssiBasdDampgCoeffX.Description = [...
  '1-D table of base assist torque values (MtrNm) as X-table of Static an' ...
  'd Rolling Frequency Damping Gain.'];
InertiaCmpVelAssiBasdDampgCoeffX.DocUnits = 'MotNwtMtr';
InertiaCmpVelAssiBasdDampgCoeffX.EngDT = dt.u4p12;
InertiaCmpVelAssiBasdDampgCoeffX.EngVal =  ...
   [0              0.5                1              1.5                2              2.5                3              3.5                4              4.5];
InertiaCmpVelAssiBasdDampgCoeffX.EngMin = 0;
InertiaCmpVelAssiBasdDampgCoeffX.EngMax = 8.8;
InertiaCmpVelAssiBasdDampgCoeffX.Cardinality = 'Inin';
InertiaCmpVelAssiBasdDampgCoeffX.CustomerVisible = false;
InertiaCmpVelAssiBasdDampgCoeffX.Online = false;
InertiaCmpVelAssiBasdDampgCoeffX.Impact = 'L';
InertiaCmpVelAssiBasdDampgCoeffX.TuningOwner = 'CSE';
InertiaCmpVelAssiBasdDampgCoeffX.GraphLink = {''};
InertiaCmpVelAssiBasdDampgCoeffX.Monotony = 'Strictly_Increasing';
InertiaCmpVelAssiBasdDampgCoeffX.MaxGrad = 8.8;
InertiaCmpVelAssiBasdDampgCoeffX.PortName = 'InertiaCmpVelAssiBasdDampgCoeffX';


InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY = DataDict.Calibration;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.LongName = 'Inertia Compensation Velocity Assist Based Damping Rolling Y for Wheel Imbalance Rejection On condition';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Description = [...
  'Rolling Assist Based/Dependent Damping (ADD) Gain Table for WIR On con' ...
  'dition  – Dependent axis.'];
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.EngDT = dt.u0p16;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.EngMin = 0;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.EngMax = 0.05;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Cardinality = 'Inin';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.CustomerVisible = false;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Online = true;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Impact = 'L';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.TuningOwner = 'CSE';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.GraphLink = {'InertiaCmpVelAssiBasdDampgCoeffX'};
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.Monotony = 'None';
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.MaxGrad = 0.05;
InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY.PortName = 'InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY';


InertiaCmpVelAssiBasdDampgRollgY = DataDict.Calibration;
InertiaCmpVelAssiBasdDampgRollgY.LongName = 'Inertia Compensation Velocity Assist Based Damping Rolling Y';
InertiaCmpVelAssiBasdDampgRollgY.Description = [...
  'Rolling Assist Based/Dependent Damping (ADD) Gain Table for WIR off – ' ...
  'Dependent axis.'];
InertiaCmpVelAssiBasdDampgRollgY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
InertiaCmpVelAssiBasdDampgRollgY.EngDT = dt.u0p16;
InertiaCmpVelAssiBasdDampgRollgY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelAssiBasdDampgRollgY.EngMin = 0;
InertiaCmpVelAssiBasdDampgRollgY.EngMax = 0.05;
InertiaCmpVelAssiBasdDampgRollgY.Cardinality = 'Inin';
InertiaCmpVelAssiBasdDampgRollgY.CustomerVisible = false;
InertiaCmpVelAssiBasdDampgRollgY.Online = true;
InertiaCmpVelAssiBasdDampgRollgY.Impact = 'L';
InertiaCmpVelAssiBasdDampgRollgY.TuningOwner = 'CSE';
InertiaCmpVelAssiBasdDampgRollgY.GraphLink = {'InertiaCmpVelAssiBasdDampgCoeffX'};
InertiaCmpVelAssiBasdDampgRollgY.Monotony = 'None';
InertiaCmpVelAssiBasdDampgRollgY.MaxGrad = 0.05;
InertiaCmpVelAssiBasdDampgRollgY.PortName = 'InertiaCmpVelAssiBasdDampgRollgY';


InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY = DataDict.Calibration;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.LongName = 'Inertia Compensation Velocity Assist Based Damping Static Wheel Imbalance Rejection On Y';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.Description = [...
  'Rolling Assist Based/Dependent Damping (ADD) Gain Table for WIR On con' ...
  'dition  – Dependent axis.'];
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.EngDT = dt.u0p16;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.EngMin = 0;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.EngMax = 0.05;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.Cardinality = 'Inin';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.CustomerVisible = false;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.Online = true;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.Impact = 'L';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.TuningOwner = 'CSE';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.GraphLink = {'InertiaCmpVelAssiBasdDampgCoeffX'};
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.Monotony = 'None';
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.MaxGrad = 0.05;
InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY.PortName = 'InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY';


InertiaCmpVelAssiBasdDampgStatY = DataDict.Calibration;
InertiaCmpVelAssiBasdDampgStatY.LongName = 'Inertia Compensation Velocity Assist Based Damping Static Y';
InertiaCmpVelAssiBasdDampgStatY.Description = [...
  'Static Assist Based/Dependent Damping (ADD) Gain Table – Dependent axi' ...
  's.'];
InertiaCmpVelAssiBasdDampgStatY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
InertiaCmpVelAssiBasdDampgStatY.EngDT = dt.u0p16;
InertiaCmpVelAssiBasdDampgStatY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelAssiBasdDampgStatY.EngMin = 0;
InertiaCmpVelAssiBasdDampgStatY.EngMax = 0.05;
InertiaCmpVelAssiBasdDampgStatY.Cardinality = 'Rt';
InertiaCmpVelAssiBasdDampgStatY.CustomerVisible = false;
InertiaCmpVelAssiBasdDampgStatY.Online = true;
InertiaCmpVelAssiBasdDampgStatY.Impact = 'L';
InertiaCmpVelAssiBasdDampgStatY.TuningOwner = 'CSE';
InertiaCmpVelAssiBasdDampgStatY.GraphLink = {'InertiaCmpVelAssiBasdDampgCoeffX'};
InertiaCmpVelAssiBasdDampgStatY.Monotony = 'None';
InertiaCmpVelAssiBasdDampgStatY.MaxGrad = 0.05;
InertiaCmpVelAssiBasdDampgStatY.PortName = 'InertiaCmpVelAssiBasdDampgStatY';


InertiaCmpVelCmdScaY = DataDict.Calibration;
InertiaCmpVelCmdScaY.LongName = 'Inertia Compensation Velocity Scale Factor Y';
InertiaCmpVelCmdScaY.Description = [...
  'Gain applied to inertia compensation part of the calculation.'];
InertiaCmpVelCmdScaY.DocUnits = 'Uls';
InertiaCmpVelCmdScaY.EngDT = dt.u2p14;
InertiaCmpVelCmdScaY.EngVal =  ...
   [0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375];
InertiaCmpVelCmdScaY.EngMin = 0;
InertiaCmpVelCmdScaY.EngMax = 3;
InertiaCmpVelCmdScaY.Cardinality = 'Inin';
InertiaCmpVelCmdScaY.CustomerVisible = false;
InertiaCmpVelCmdScaY.Online = true;
InertiaCmpVelCmdScaY.Impact = 'L';
InertiaCmpVelCmdScaY.TuningOwner = 'CSE';
InertiaCmpVelCmdScaY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelCmdScaY.Monotony = 'None';
InertiaCmpVelCmdScaY.MaxGrad = 3;
InertiaCmpVelCmdScaY.PortName = 'InertiaCmpVelCmdScaY';


InertiaCmpVelDampgDecelGain = DataDict.Calibration;
InertiaCmpVelDampgDecelGain.LongName = 'Inertia Compensation Velocity Damping Deceleration Gain';
InertiaCmpVelDampgDecelGain.Description = [...
  'Gain applied to Frequency Dependent Damping to increase output when ve' ...
  'hicle is decelerating.'];
InertiaCmpVelDampgDecelGain.DocUnits = 'Uls';
InertiaCmpVelDampgDecelGain.EngDT = dt.float32;
InertiaCmpVelDampgDecelGain.EngVal = 1;
InertiaCmpVelDampgDecelGain.EngMin = 1;
InertiaCmpVelDampgDecelGain.EngMax = 10;
InertiaCmpVelDampgDecelGain.Cardinality = 'Inin';
InertiaCmpVelDampgDecelGain.CustomerVisible = false;
InertiaCmpVelDampgDecelGain.Online = true;
InertiaCmpVelDampgDecelGain.Impact = 'L';
InertiaCmpVelDampgDecelGain.TuningOwner = 'CSE';
InertiaCmpVelDampgDecelGain.GraphLink = {''};
InertiaCmpVelDampgDecelGain.Monotony = 'None';
InertiaCmpVelDampgDecelGain.MaxGrad = 9;
InertiaCmpVelDampgDecelGain.PortName = 'InertiaCmpVelDampgDecelGain';


InertiaCmpVelDampgDecelGainFallSlew = DataDict.Calibration;
InertiaCmpVelDampgDecelGainFallSlew.LongName = 'Inertia Compensation Velocity Damping Deceleration Gain Falling Slew';
InertiaCmpVelDampgDecelGainFallSlew.Description = [...
  'Slew rate applied to Frequency Damping Gain when Gain value is falling' ...
  ' (decreasing).  Value of 4500 allows full-range signal change in a sin' ...
  'gle time step. (10-1)/.002=4500'];
InertiaCmpVelDampgDecelGainFallSlew.DocUnits = 'UlsPerSec';
InertiaCmpVelDampgDecelGainFallSlew.EngDT = dt.float32;
InertiaCmpVelDampgDecelGainFallSlew.EngVal = -4500;
InertiaCmpVelDampgDecelGainFallSlew.EngMin = -4500;
InertiaCmpVelDampgDecelGainFallSlew.EngMax = -1;
InertiaCmpVelDampgDecelGainFallSlew.Cardinality = 'Inin';
InertiaCmpVelDampgDecelGainFallSlew.CustomerVisible = false;
InertiaCmpVelDampgDecelGainFallSlew.Online = false;
InertiaCmpVelDampgDecelGainFallSlew.Impact = 'L';
InertiaCmpVelDampgDecelGainFallSlew.TuningOwner = 'CSE';
InertiaCmpVelDampgDecelGainFallSlew.GraphLink = {''};
InertiaCmpVelDampgDecelGainFallSlew.Monotony = 'None';
InertiaCmpVelDampgDecelGainFallSlew.MaxGrad = 4499;
InertiaCmpVelDampgDecelGainFallSlew.PortName = 'InertiaCmpVelDampgDecelGainFallSlew';


InertiaCmpVelDampgDecelGainRisngSlewX = DataDict.Calibration;
InertiaCmpVelDampgDecelGainRisngSlewX.LongName = 'Inertia Compensation Velocity Damping Deceleration Gain Rising Slew X';
InertiaCmpVelDampgDecelGainRisngSlewX.Description = [...
  '1-D table of motor velocity used as X-axis of slew rate table.  Slew r' ...
  'ate applied to Frequency Damping Deceleration Gain.'];
InertiaCmpVelDampgDecelGainRisngSlewX.DocUnits = 'MotRadPerSec';
InertiaCmpVelDampgDecelGainRisngSlewX.EngDT = dt.u11p5;
InertiaCmpVelDampgDecelGainRisngSlewX.EngVal =  ...
   [0               20               34               35               36               37];
InertiaCmpVelDampgDecelGainRisngSlewX.EngMin = 0;
InertiaCmpVelDampgDecelGainRisngSlewX.EngMax = 1350;
InertiaCmpVelDampgDecelGainRisngSlewX.Cardinality = 'Inin';
InertiaCmpVelDampgDecelGainRisngSlewX.CustomerVisible = false;
InertiaCmpVelDampgDecelGainRisngSlewX.Online = false;
InertiaCmpVelDampgDecelGainRisngSlewX.Impact = 'L';
InertiaCmpVelDampgDecelGainRisngSlewX.TuningOwner = 'CSE';
InertiaCmpVelDampgDecelGainRisngSlewX.GraphLink = {''};
InertiaCmpVelDampgDecelGainRisngSlewX.Monotony = 'Strictly_Increasing';
InertiaCmpVelDampgDecelGainRisngSlewX.MaxGrad = 1350;
InertiaCmpVelDampgDecelGainRisngSlewX.PortName = 'InertiaCmpVelDampgDecelGainRisngSlewX';


InertiaCmpVelDampgDecelGainRisngSlewY = DataDict.Calibration;
InertiaCmpVelDampgDecelGainRisngSlewY.LongName = 'Inertia Compensation Velocity Damping Deceleration Gain Rising Slew Y';
InertiaCmpVelDampgDecelGainRisngSlewY.Description = [...
  'Slew rate applied to Frequency Dependent Damping Gain when Gain value ' ...
  'is rising (inreasing).  Value of 4500 allows full-range signal increas' ...
  'e in a single time step. (10-1)/.002=4500'];
InertiaCmpVelDampgDecelGainRisngSlewY.DocUnits = 'UlsPerSec';
InertiaCmpVelDampgDecelGainRisngSlewY.EngDT = dt.u13p3;
InertiaCmpVelDampgDecelGainRisngSlewY.EngVal =  ...
   [4500             4500             4500             4500             4500             4500];
InertiaCmpVelDampgDecelGainRisngSlewY.EngMin = 1;
InertiaCmpVelDampgDecelGainRisngSlewY.EngMax = 4500;
InertiaCmpVelDampgDecelGainRisngSlewY.Cardinality = 'Inin';
InertiaCmpVelDampgDecelGainRisngSlewY.CustomerVisible = false;
InertiaCmpVelDampgDecelGainRisngSlewY.Online = false;
InertiaCmpVelDampgDecelGainRisngSlewY.Impact = 'L';
InertiaCmpVelDampgDecelGainRisngSlewY.TuningOwner = 'CSE';
InertiaCmpVelDampgDecelGainRisngSlewY.GraphLink = {'InertiaCmpVelDampgDecelGainRisngSlewX'};
InertiaCmpVelDampgDecelGainRisngSlewY.Monotony = 'None';
InertiaCmpVelDampgDecelGainRisngSlewY.MaxGrad = 4499;
InertiaCmpVelDampgDecelGainRisngSlewY.PortName = 'InertiaCmpVelDampgDecelGainRisngSlewY';


InertiaCmpVelDampgFilFrq = DataDict.Calibration;
InertiaCmpVelDampgFilFrq.LongName = 'Inertia Compensation Velocity Damping Filter Frequency';
InertiaCmpVelDampgFilFrq.Description = [...
  'Cutoff Frequency Lookup Table (Dependent Axis) for WIR off'];
InertiaCmpVelDampgFilFrq.DocUnits = 'Hz';
InertiaCmpVelDampgFilFrq.EngDT = dt.u7p9;
InertiaCmpVelDampgFilFrq.EngVal =  ...
   [16               16               16               16               16               16               16               16               16               16               16               16];
InertiaCmpVelDampgFilFrq.EngMin = 5;
InertiaCmpVelDampgFilFrq.EngMax = 60;
InertiaCmpVelDampgFilFrq.Cardinality = 'Rt';
InertiaCmpVelDampgFilFrq.CustomerVisible = false;
InertiaCmpVelDampgFilFrq.Online = false;
InertiaCmpVelDampgFilFrq.Impact = 'L';
InertiaCmpVelDampgFilFrq.TuningOwner = 'CSE';
InertiaCmpVelDampgFilFrq.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelDampgFilFrq.Monotony = 'None';
InertiaCmpVelDampgFilFrq.MaxGrad = 55;
InertiaCmpVelDampgFilFrq.PortName = 'InertiaCmpVelDampgFilFrq';


InertiaCmpVelDampgFilFrqWhlImbRejctnOn = DataDict.Calibration;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.LongName = 'Inertia Compensation Velocity Damping Filter Frequency for Wheel Imbalance Rejection On';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Description = [...
  'Cutoff Frequency Lookup Table (Dependent Axis) for WIR on'];
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.DocUnits = 'Hz';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.EngDT = dt.u7p9;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.EngVal =  ...
   [16               16               16               16               16               16               16               16               16               16               16               16];
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.EngMin = 5;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.EngMax = 60;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Cardinality = 'Rt';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.CustomerVisible = false;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Online = false;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Impact = 'L';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.TuningOwner = 'CSE';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Monotony = 'None';
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.MaxGrad = 55;
InertiaCmpVelDampgFilFrqWhlImbRejctnOn.PortName = 'InertiaCmpVelDampgFilFrqWhlImbRejctnOn';


InertiaCmpVelDampgGainOffThd = DataDict.Calibration;
InertiaCmpVelDampgGainOffThd.LongName = 'Inertia Compensation Velocity Damping Gain Threshold for Off Condition';
InertiaCmpVelDampgGainOffThd.Description = [...
  'Vehicle deceleration rate at which gain is removed from Frequency Damp' ...
  'ing.'];
InertiaCmpVelDampgGainOffThd.DocUnits = 'KphPerSec';
InertiaCmpVelDampgGainOffThd.EngDT = dt.float32;
InertiaCmpVelDampgGainOffThd.EngVal = 1;
InertiaCmpVelDampgGainOffThd.EngMin = 0;
InertiaCmpVelDampgGainOffThd.EngMax = 50;
InertiaCmpVelDampgGainOffThd.Cardinality = 'Inin';
InertiaCmpVelDampgGainOffThd.CustomerVisible = false;
InertiaCmpVelDampgGainOffThd.Online = false;
InertiaCmpVelDampgGainOffThd.Impact = 'L';
InertiaCmpVelDampgGainOffThd.TuningOwner = 'CSE';
InertiaCmpVelDampgGainOffThd.GraphLink = {''};
InertiaCmpVelDampgGainOffThd.Monotony = 'None';
InertiaCmpVelDampgGainOffThd.MaxGrad = 50;
InertiaCmpVelDampgGainOffThd.PortName = 'InertiaCmpVelDampgGainOffThd';


InertiaCmpVelDampgGainOnThd = DataDict.Calibration;
InertiaCmpVelDampgGainOnThd.LongName = 'Inertia Compensation Velocity Damping Gain Threshold for On Condition';
InertiaCmpVelDampgGainOnThd.Description = [...
  'Vehicle deceleration rate at which gain is applied (On) to Frequency D' ...
  'amping.'];
InertiaCmpVelDampgGainOnThd.DocUnits = 'KphPerSec';
InertiaCmpVelDampgGainOnThd.EngDT = dt.float32;
InertiaCmpVelDampgGainOnThd.EngVal = 10;
InertiaCmpVelDampgGainOnThd.EngMin = 0;
InertiaCmpVelDampgGainOnThd.EngMax = 50;
InertiaCmpVelDampgGainOnThd.Cardinality = 'Inin';
InertiaCmpVelDampgGainOnThd.CustomerVisible = false;
InertiaCmpVelDampgGainOnThd.Online = false;
InertiaCmpVelDampgGainOnThd.Impact = 'L';
InertiaCmpVelDampgGainOnThd.TuningOwner = 'CSE';
InertiaCmpVelDampgGainOnThd.GraphLink = {''};
InertiaCmpVelDampgGainOnThd.Monotony = 'None';
InertiaCmpVelDampgGainOnThd.MaxGrad = 50;
InertiaCmpVelDampgGainOnThd.PortName = 'InertiaCmpVelDampgGainOnThd';


InertiaCmpVelDampgSpdBlndY = DataDict.Calibration;
InertiaCmpVelDampgSpdBlndY.LongName = 'Inertia Compensation Velocity Damping Speed Blend Y';
InertiaCmpVelDampgSpdBlndY.Description = [...
  'Blend table between Static and Rolling Assist Based/Dependent Damping ' ...
  '(ADD) Gain– Dependent axis'];
InertiaCmpVelDampgSpdBlndY.DocUnits = 'Uls';
InertiaCmpVelDampgSpdBlndY.EngDT = dt.u1p15;
InertiaCmpVelDampgSpdBlndY.EngVal =  ...
   [1                1              0.3              0.2              0.1                0                0                0                0                0                0                0];
InertiaCmpVelDampgSpdBlndY.EngMin = 0;
InertiaCmpVelDampgSpdBlndY.EngMax = 1;
InertiaCmpVelDampgSpdBlndY.Cardinality = 'Rt';
InertiaCmpVelDampgSpdBlndY.CustomerVisible = false;
InertiaCmpVelDampgSpdBlndY.Online = true;
InertiaCmpVelDampgSpdBlndY.Impact = 'L';
InertiaCmpVelDampgSpdBlndY.TuningOwner = 'CSE';
InertiaCmpVelDampgSpdBlndY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelDampgSpdBlndY.Monotony = 'None';
InertiaCmpVelDampgSpdBlndY.MaxGrad = 1;
InertiaCmpVelDampgSpdBlndY.PortName = 'InertiaCmpVelDampgSpdBlndY';


InertiaCmpVelDampgWhlImbRejctnBlndX = DataDict.Calibration;
InertiaCmpVelDampgWhlImbRejctnBlndX.LongName = 'Inertia Compensation Velocity Damping Wheel Imabalance Rejection Blend X';
InertiaCmpVelDampgWhlImbRejctnBlndX.Description = [...
  '1D Lookup X-Table (of WIR command) used to provide Wheel Imbalance Rej' ...
  'ection Blend'];
InertiaCmpVelDampgWhlImbRejctnBlndX.DocUnits = 'MotNwtMtr';
InertiaCmpVelDampgWhlImbRejctnBlndX.EngDT = dt.u4p12;
InertiaCmpVelDampgWhlImbRejctnBlndX.EngVal =  ...
   [0.05078125       0.10546875          0.15625       0.20703125        0.2578125];
InertiaCmpVelDampgWhlImbRejctnBlndX.EngMin = 0;
InertiaCmpVelDampgWhlImbRejctnBlndX.EngMax = 8.8;
InertiaCmpVelDampgWhlImbRejctnBlndX.Cardinality = 'Rt';
InertiaCmpVelDampgWhlImbRejctnBlndX.CustomerVisible = false;
InertiaCmpVelDampgWhlImbRejctnBlndX.Online = true;
InertiaCmpVelDampgWhlImbRejctnBlndX.Impact = 'L';
InertiaCmpVelDampgWhlImbRejctnBlndX.TuningOwner = 'CSE';
InertiaCmpVelDampgWhlImbRejctnBlndX.GraphLink = {''};
InertiaCmpVelDampgWhlImbRejctnBlndX.Monotony = 'Strictly_Increasing';
InertiaCmpVelDampgWhlImbRejctnBlndX.MaxGrad = 8.8;
InertiaCmpVelDampgWhlImbRejctnBlndX.PortName = 'InertiaCmpVelDampgWhlImbRejctnBlndX';


InertiaCmpVelDampgWhlImbRejctnBlndY = DataDict.Calibration;
InertiaCmpVelDampgWhlImbRejctnBlndY.LongName = 'Inertia Compensation Velocity Damping Wheel Imabalance Rejection Blend Y';
InertiaCmpVelDampgWhlImbRejctnBlndY.Description = [...
  '1D Lookup Table used to provide WIR Blend value for cutoff frequency (' ...
  'filter) table'];
InertiaCmpVelDampgWhlImbRejctnBlndY.DocUnits = 'Uls';
InertiaCmpVelDampgWhlImbRejctnBlndY.EngDT = dt.u1p15;
InertiaCmpVelDampgWhlImbRejctnBlndY.EngVal =  ...
   [0                0                0                0                0];
InertiaCmpVelDampgWhlImbRejctnBlndY.EngMin = 0;
InertiaCmpVelDampgWhlImbRejctnBlndY.EngMax = 1;
InertiaCmpVelDampgWhlImbRejctnBlndY.Cardinality = 'Rt';
InertiaCmpVelDampgWhlImbRejctnBlndY.CustomerVisible = false;
InertiaCmpVelDampgWhlImbRejctnBlndY.Online = true;
InertiaCmpVelDampgWhlImbRejctnBlndY.Impact = 'L';
InertiaCmpVelDampgWhlImbRejctnBlndY.TuningOwner = 'CSE';
InertiaCmpVelDampgWhlImbRejctnBlndY.GraphLink = {'InertiaCmpVelDampgWhlImbRejctnBlndX'};
InertiaCmpVelDampgWhlImbRejctnBlndY.Monotony = 'None';
InertiaCmpVelDampgWhlImbRejctnBlndY.MaxGrad = 1;
InertiaCmpVelDampgWhlImbRejctnBlndY.PortName = 'InertiaCmpVelDampgWhlImbRejctnBlndY';


InertiaCmpVelDecelGainEnaCal = DataDict.Calibration;
InertiaCmpVelDecelGainEnaCal.LongName = 'Deceleration Gain Calibration';
InertiaCmpVelDecelGainEnaCal.Description = [...
  'Polar moment of inertia of motor in motor coordinates'];
InertiaCmpVelDecelGainEnaCal.DocUnits = 'Cnt';
InertiaCmpVelDecelGainEnaCal.EngDT = dt.lgc;
InertiaCmpVelDecelGainEnaCal.EngVal = 0;
InertiaCmpVelDecelGainEnaCal.EngMin = 0;
InertiaCmpVelDecelGainEnaCal.EngMax = 1;
InertiaCmpVelDecelGainEnaCal.Cardinality = 'Inin';
InertiaCmpVelDecelGainEnaCal.CustomerVisible = false;
InertiaCmpVelDecelGainEnaCal.Online = false;
InertiaCmpVelDecelGainEnaCal.Impact = 'L';
InertiaCmpVelDecelGainEnaCal.TuningOwner = 'CSE';
InertiaCmpVelDecelGainEnaCal.GraphLink = {''};
InertiaCmpVelDecelGainEnaCal.Monotony = 'None';
InertiaCmpVelDecelGainEnaCal.MaxGrad = 998;
InertiaCmpVelDecelGainEnaCal.PortName = 'InertiaCmpVelDecelGainEnaCal';


InertiaCmpVelModWhlImbRejctnBlndX = DataDict.Calibration;
InertiaCmpVelModWhlImbRejctnBlndX.LongName = 'Inertia Compensation Velocity Mode Wheel Imbalance Rejection Blend X';
InertiaCmpVelModWhlImbRejctnBlndX.Description = [...
  'X Table for Mode Wheel Imbalance Rejection Blend.'];
InertiaCmpVelModWhlImbRejctnBlndX.DocUnits = 'MotNwtMtr';
InertiaCmpVelModWhlImbRejctnBlndX.EngDT = dt.u4p12;
InertiaCmpVelModWhlImbRejctnBlndX.EngVal =  ...
   [0                1];
InertiaCmpVelModWhlImbRejctnBlndX.EngMin = 0;
InertiaCmpVelModWhlImbRejctnBlndX.EngMax = 8.8;
InertiaCmpVelModWhlImbRejctnBlndX.Cardinality = 'Inin';
InertiaCmpVelModWhlImbRejctnBlndX.CustomerVisible = false;
InertiaCmpVelModWhlImbRejctnBlndX.Online = true;
InertiaCmpVelModWhlImbRejctnBlndX.Impact = 'L';
InertiaCmpVelModWhlImbRejctnBlndX.TuningOwner = 'CSE';
InertiaCmpVelModWhlImbRejctnBlndX.GraphLink = {''};
InertiaCmpVelModWhlImbRejctnBlndX.Monotony = 'Increasing';
InertiaCmpVelModWhlImbRejctnBlndX.MaxGrad = 998;
InertiaCmpVelModWhlImbRejctnBlndX.PortName = 'InertiaCmpVelModWhlImbRejctnBlndX';


InertiaCmpVelModWhlImbRejctnBlndY = DataDict.Calibration;
InertiaCmpVelModWhlImbRejctnBlndY.LongName = 'Inertia Compensation Velocity Mode Wheel Imbalance Rejection Blend Y';
InertiaCmpVelModWhlImbRejctnBlndY.Description = [...
  'Y Table for Mode Wheel Imbalance Rejection Blend.'];
InertiaCmpVelModWhlImbRejctnBlndY.DocUnits = 'Uls';
InertiaCmpVelModWhlImbRejctnBlndY.EngDT = dt.u1p15;
InertiaCmpVelModWhlImbRejctnBlndY.EngVal =  ...
   [1                0];
InertiaCmpVelModWhlImbRejctnBlndY.EngMin = 0;
InertiaCmpVelModWhlImbRejctnBlndY.EngMax = 1;
InertiaCmpVelModWhlImbRejctnBlndY.Cardinality = 'Inin';
InertiaCmpVelModWhlImbRejctnBlndY.CustomerVisible = false;
InertiaCmpVelModWhlImbRejctnBlndY.Online = true;
InertiaCmpVelModWhlImbRejctnBlndY.Impact = 'L';
InertiaCmpVelModWhlImbRejctnBlndY.TuningOwner = 'CSE';
InertiaCmpVelModWhlImbRejctnBlndY.GraphLink = {'InertiaCmpVelModWhlImbRejctnBlndX'};
InertiaCmpVelModWhlImbRejctnBlndY.Monotony = 'None';
InertiaCmpVelModWhlImbRejctnBlndY.MaxGrad = 1;
InertiaCmpVelModWhlImbRejctnBlndY.PortName = 'InertiaCmpVelModWhlImbRejctnBlndY';


InertiaCmpVelMotInertia = DataDict.Calibration;
InertiaCmpVelMotInertia.LongName = 'Inertia Compensation Velocity Motor Inertia';
InertiaCmpVelMotInertia.Description = [...
  'Polar moment of inertia of motor in motor coordinates'];
InertiaCmpVelMotInertia.DocUnits = 'KiloGrMtrSqd';
InertiaCmpVelMotInertia.EngDT = dt.float32;
InertiaCmpVelMotInertia.EngVal = 0.001;
InertiaCmpVelMotInertia.EngMin = 1e-05;
InertiaCmpVelMotInertia.EngMax = 0.005;
InertiaCmpVelMotInertia.Cardinality = 'Inin';
InertiaCmpVelMotInertia.CustomerVisible = false;
InertiaCmpVelMotInertia.Online = false;
InertiaCmpVelMotInertia.Impact = 'L';
InertiaCmpVelMotInertia.TuningOwner = 'CSE';
InertiaCmpVelMotInertia.GraphLink = {''};
InertiaCmpVelMotInertia.Monotony = 'None';
InertiaCmpVelMotInertia.MaxGrad = 0.005;
InertiaCmpVelMotInertia.PortName = 'InertiaCmpVelMotInertia';


InertiaCmpVelMotVelBasdOutpScagX = DataDict.Calibration;
InertiaCmpVelMotVelBasdOutpScagX.LongName = 'Inertia Compensation Velocity Motor Velocity Based Output Scaling X';
InertiaCmpVelMotVelBasdOutpScagX.Description = [...
  '1-D table of motor velocity values as X-axis of function''s scaling/ou' ...
  'tput attenuation table.'];
InertiaCmpVelMotVelBasdOutpScagX.DocUnits = 'MotRadPerSec';
InertiaCmpVelMotVelBasdOutpScagX.EngDT = dt.u12p4;
InertiaCmpVelMotVelBasdOutpScagX.EngVal =  ...
   [62.8125            68.75];
InertiaCmpVelMotVelBasdOutpScagX.EngMin = 0;
InertiaCmpVelMotVelBasdOutpScagX.EngMax = 1350;
InertiaCmpVelMotVelBasdOutpScagX.Cardinality = 'Inin';
InertiaCmpVelMotVelBasdOutpScagX.CustomerVisible = false;
InertiaCmpVelMotVelBasdOutpScagX.Online = false;
InertiaCmpVelMotVelBasdOutpScagX.Impact = 'L';
InertiaCmpVelMotVelBasdOutpScagX.TuningOwner = 'CSE';
InertiaCmpVelMotVelBasdOutpScagX.GraphLink = {''};
InertiaCmpVelMotVelBasdOutpScagX.Monotony = 'Strictly_Increasing';
InertiaCmpVelMotVelBasdOutpScagX.MaxGrad = 1350;
InertiaCmpVelMotVelBasdOutpScagX.PortName = 'InertiaCmpVelMotVelBasdOutpScagX';


InertiaCmpVelMotVelBasdOutpScagY = DataDict.Calibration;
InertiaCmpVelMotVelBasdOutpScagY.LongName = 'Inertia Compensation Velocity Motor Velocity Based Output Scaling X';
InertiaCmpVelMotVelBasdOutpScagY.Description = [...
  '1-D table of scale as Y-axis of function''s output scaling/attenuation' ...
  ' table based on motor velocity value.'];
InertiaCmpVelMotVelBasdOutpScagY.DocUnits = 'Uls';
InertiaCmpVelMotVelBasdOutpScagY.EngDT = dt.u1p15;
InertiaCmpVelMotVelBasdOutpScagY.EngVal =  ...
   [1                1];
InertiaCmpVelMotVelBasdOutpScagY.EngMin = 0;
InertiaCmpVelMotVelBasdOutpScagY.EngMax = 1;
InertiaCmpVelMotVelBasdOutpScagY.Cardinality = 'Inin';
InertiaCmpVelMotVelBasdOutpScagY.CustomerVisible = false;
InertiaCmpVelMotVelBasdOutpScagY.Online = false;
InertiaCmpVelMotVelBasdOutpScagY.Impact = 'M';
InertiaCmpVelMotVelBasdOutpScagY.TuningOwner = 'CSE';
InertiaCmpVelMotVelBasdOutpScagY.GraphLink = {'InertiaCmpVelMotVelBasdOutpScagX'};
InertiaCmpVelMotVelBasdOutpScagY.Monotony = 'None';
InertiaCmpVelMotVelBasdOutpScagY.MaxGrad = 1;
InertiaCmpVelMotVelBasdOutpScagY.PortName = 'InertiaCmpVelMotVelBasdOutpScagY';


InertiaCmpVelNotchBlndY = DataDict.Calibration;
InertiaCmpVelNotchBlndY.LongName = 'Inertia Compensation Velocity Notch Blend Y';
InertiaCmpVelNotchBlndY.Description = [...
  '1-D Blnd table. 12 tuning points as a function of global vehicle speed' ...
  ' table. The blend value helps to blend uncompensated Inertia Comp comm' ...
  'and (Blnd:0) and compensated Inertia Comp command (Blnd:1) as a functi' ...
  'on of vehicle speed'];
InertiaCmpVelNotchBlndY.DocUnits = 'Uls';
InertiaCmpVelNotchBlndY.EngDT = dt.u1p15;
InertiaCmpVelNotchBlndY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelNotchBlndY.EngMin = 0;
InertiaCmpVelNotchBlndY.EngMax = 1;
InertiaCmpVelNotchBlndY.Cardinality = 'Inin';
InertiaCmpVelNotchBlndY.CustomerVisible = false;
InertiaCmpVelNotchBlndY.Online = true;
InertiaCmpVelNotchBlndY.Impact = 'H';
InertiaCmpVelNotchBlndY.TuningOwner = 'CSE';
InertiaCmpVelNotchBlndY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelNotchBlndY.Monotony = 'None';
InertiaCmpVelNotchBlndY.MaxGrad = 1;
InertiaCmpVelNotchBlndY.PortName = 'InertiaCmpVelNotchBlndY';


InertiaCmpVelNotchFilStruct = DataDict.Calibration;
InertiaCmpVelNotchFilStruct.LongName = 'Notch Filter Structure';
InertiaCmpVelNotchFilStruct.Description = [...
  'Notch filter structure with all gains B0,B1,B2,A1 and A2'];
InertiaCmpVelNotchFilStruct.DocUnits = 'Uls';
InertiaCmpVelNotchFilStruct.EngDT = struct.FilNotchGainRec1;
InertiaCmpVelNotchFilStruct.EngVal = [struct('FilGainB0',1,'FilGainB1',-1,'FilGainB2',0.1,'FilGainA1',-1,'FilGainA2',0.1)];
InertiaCmpVelNotchFilStruct.EngMin = [struct('FilGainB0',0,'FilGainB1',-4500,'FilGainB2',-4,'FilGainA1',-2,'FilGainA2',-1)];
InertiaCmpVelNotchFilStruct.EngMax = [struct('FilGainB0',2300,'FilGainB1',0,'FilGainB2',2300,'FilGainA1',0,'FilGainA2',1)];
InertiaCmpVelNotchFilStruct.Cardinality = 'Inin';
InertiaCmpVelNotchFilStruct.CustomerVisible = false;
InertiaCmpVelNotchFilStruct.Online = false;
InertiaCmpVelNotchFilStruct.Impact = 'H';
InertiaCmpVelNotchFilStruct.TuningOwner = 'CSE';
InertiaCmpVelNotchFilStruct.GraphLink = {''};
InertiaCmpVelNotchFilStruct.Monotony = 'None';
InertiaCmpVelNotchFilStruct.MaxGrad = 998;
InertiaCmpVelNotchFilStruct.PortName = 'InertiaCmpVelNotchFilStruct';


InertiaCmpVelTqSnsrVelFilFrq = DataDict.Calibration;
InertiaCmpVelTqSnsrVelFilFrq.LongName = 'Inertia Compensation Velocity Torque Sensor Velocity Filter Frequency';
InertiaCmpVelTqSnsrVelFilFrq.Description = [...
  'Corner/cutoff frequency for low-pass filter on torque sensor velocity ' ...
  'calculation'];
InertiaCmpVelTqSnsrVelFilFrq.DocUnits = 'Hz';
InertiaCmpVelTqSnsrVelFilFrq.EngDT = dt.float32;
InertiaCmpVelTqSnsrVelFilFrq.EngVal = 20;
InertiaCmpVelTqSnsrVelFilFrq.EngMin = 0.1;
InertiaCmpVelTqSnsrVelFilFrq.EngMax = 100;
InertiaCmpVelTqSnsrVelFilFrq.Cardinality = 'Inin';
InertiaCmpVelTqSnsrVelFilFrq.CustomerVisible = false;
InertiaCmpVelTqSnsrVelFilFrq.Online = false;
InertiaCmpVelTqSnsrVelFilFrq.Impact = 'L';
InertiaCmpVelTqSnsrVelFilFrq.TuningOwner = 'CSE';
InertiaCmpVelTqSnsrVelFilFrq.GraphLink = {''};
InertiaCmpVelTqSnsrVelFilFrq.Monotony = 'None';
InertiaCmpVelTqSnsrVelFilFrq.MaxGrad = 99.9;
InertiaCmpVelTqSnsrVelFilFrq.PortName = 'InertiaCmpVelTqSnsrVelFilFrq';


InertiaCmpVelTqSnsrVelSca = DataDict.Calibration;
InertiaCmpVelTqSnsrVelSca.LongName = 'Inertia Compensation Velocity Torque Sensor Velocity Scale Factor';
InertiaCmpVelTqSnsrVelSca.Description = [...
  'T-bar velocity Scale.  1-D speed dependent table.'];
InertiaCmpVelTqSnsrVelSca.DocUnits = 'Uls';
InertiaCmpVelTqSnsrVelSca.EngDT = dt.u2p14;
InertiaCmpVelTqSnsrVelSca.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
InertiaCmpVelTqSnsrVelSca.EngMin = 0;
InertiaCmpVelTqSnsrVelSca.EngMax = 3;
InertiaCmpVelTqSnsrVelSca.Cardinality = 'Inin';
InertiaCmpVelTqSnsrVelSca.CustomerVisible = false;
InertiaCmpVelTqSnsrVelSca.Online = true;
InertiaCmpVelTqSnsrVelSca.Impact = 'L';
InertiaCmpVelTqSnsrVelSca.TuningOwner = 'CSE';
InertiaCmpVelTqSnsrVelSca.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
InertiaCmpVelTqSnsrVelSca.Monotony = 'None';
InertiaCmpVelTqSnsrVelSca.MaxGrad = 3;
InertiaCmpVelTqSnsrVelSca.PortName = 'InertiaCmpVelTqSnsrVelSca';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysKineRat = DataDict.ImprtdCal;
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';
SysGlbPrmSysKineRat.Description = '';


SysGlbPrmTorsBarStfn = DataDict.ImprtdCal;
SysGlbPrmTorsBarStfn.DocUnits = 'HwNwtMtrPerHwDeg';
SysGlbPrmTorsBarStfn.EngDT = dt.float32;
SysGlbPrmTorsBarStfn.EngVal = 2.5;
SysGlbPrmTorsBarStfn.EngMin = 0.5;
SysGlbPrmTorsBarStfn.EngMax = 10;
SysGlbPrmTorsBarStfn.PortName = 'SysGlbPrmTorsBarStfn';
SysGlbPrmTorsBarStfn.Description = '';


SysGlbPrmVehSpdBilnrSeln = DataDict.ImprtdCal;
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';
SysGlbPrmVehSpdBilnrSeln.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dInertiaCmpVelAssiBasdDampgCoeff = DataDict.Display;
dInertiaCmpVelAssiBasdDampgCoeff.LongName = 'Inertia Compensation Velocity Assist-Dependent Damping Coefficient';
dInertiaCmpVelAssiBasdDampgCoeff.Description = [...
  'Assist-Dependent Damping filter coefficient'];
dInertiaCmpVelAssiBasdDampgCoeff.DocUnits = 'MotNwtMtrPerMotRadPerSec';
dInertiaCmpVelAssiBasdDampgCoeff.EngDT = dt.float32;
dInertiaCmpVelAssiBasdDampgCoeff.EngMin = 0;
dInertiaCmpVelAssiBasdDampgCoeff.EngMax = 0.5;
dInertiaCmpVelAssiBasdDampgCoeff.InitRowCol = [1  1];


dInertiaCmpVelCalcdInertiaCmp = DataDict.Display;
dInertiaCmpVelCalcdInertiaCmp.LongName = 'Inertia Compensation Velocity Calculated Inertia Compensation';
dInertiaCmpVelCalcdInertiaCmp.Description = [...
  'The Inertia Compensation portion of Inrt Cmp and Freq-Dep Damping'];
dInertiaCmpVelCalcdInertiaCmp.DocUnits = 'MotNwtMtr';
dInertiaCmpVelCalcdInertiaCmp.EngDT = dt.float32;
dInertiaCmpVelCalcdInertiaCmp.EngMin = 0;
dInertiaCmpVelCalcdInertiaCmp.EngMax = 11843.5252;
dInertiaCmpVelCalcdInertiaCmp.InitRowCol = [1  1];


dInertiaCmpVelFilFrq = DataDict.Display;
dInertiaCmpVelFilFrq.LongName = 'Inertia Compensation Velocity Filter Frequency';
dInertiaCmpVelFilFrq.Description = [...
  'Cutoff frequency (Hz) of Frequency Dependent Damping filter'];
dInertiaCmpVelFilFrq.DocUnits = 'Hz';
dInertiaCmpVelFilFrq.EngDT = dt.float32;
dInertiaCmpVelFilFrq.EngMin = 5;
dInertiaCmpVelFilFrq.EngMax = 60;
dInertiaCmpVelFilFrq.InitRowCol = [1  1];


dInertiaCmpVelMotVelBasdOutpScag = DataDict.Display;
dInertiaCmpVelMotVelBasdOutpScag.LongName = 'Inertia Compensation Velocity Motor Velocity Based Output Scaling';
dInertiaCmpVelMotVelBasdOutpScag.Description = [...
  'Scale factor applied to inertia comp before notch filter (i.e. uncompe' ...
  'nsated command).  Value is a function of driver velocity.'];
dInertiaCmpVelMotVelBasdOutpScag.DocUnits = 'Uls';
dInertiaCmpVelMotVelBasdOutpScag.EngDT = dt.float32;
dInertiaCmpVelMotVelBasdOutpScag.EngMin = 0;
dInertiaCmpVelMotVelBasdOutpScag.EngMax = 1;
dInertiaCmpVelMotVelBasdOutpScag.InitRowCol = [1  1];


dInertiaCmpVelNotScadDrvrVel = DataDict.Display;
dInertiaCmpVelNotScadDrvrVel.LongName = 'Inertia Compensation Velocity Not Scaled Driver Velocity';
dInertiaCmpVelNotScadDrvrVel.Description = [...
  'Calculated handwheel velocity above T-bar, without any scaling. (MtrVe' ...
  'l + T-bar twist velocity).'];
dInertiaCmpVelNotScadDrvrVel.DocUnits = 'MotRadPerSec';
dInertiaCmpVelNotScadDrvrVel.EngDT = dt.float32;
dInertiaCmpVelNotScadDrvrVel.EngMin = -15312.6344;
dInertiaCmpVelNotScadDrvrVel.EngMax = 15312.6344;
dInertiaCmpVelNotScadDrvrVel.InitRowCol = [1  1];


dInertiaCmpVelNotchBlndVal = DataDict.Display;
dInertiaCmpVelNotchBlndVal.LongName = 'Inertia Compensation Velocity Blend Value for Inertia Compensation Notch';
dInertiaCmpVelNotchBlndVal.Description = [...
  'Output of a speed-based table that Blnds uncompensated and compensated' ...
  ' inertia comp commands.'];
dInertiaCmpVelNotchBlndVal.DocUnits = 'MotNwtMtr';
dInertiaCmpVelNotchBlndVal.EngDT = dt.float32;
dInertiaCmpVelNotchBlndVal.EngMin = 0;
dInertiaCmpVelNotchBlndVal.EngMax = 1;
dInertiaCmpVelNotchBlndVal.InitRowCol = [1  1];


dInertiaCmpVelNotchInpVal = DataDict.Display;
dInertiaCmpVelNotchInpVal.LongName = 'Inertia Compensation Velocity Input to Inertia Compensation Notch';
dInertiaCmpVelNotchInpVal.Description = [...
  'Uncompensated inertia comp command that is input to the stability comp' ...
  ' filter'];
dInertiaCmpVelNotchInpVal.DocUnits = 'MotNwtMtr';
dInertiaCmpVelNotchInpVal.EngDT = dt.float32;
dInertiaCmpVelNotchInpVal.EngMin = -8.8;
dInertiaCmpVelNotchInpVal.EngMax = 8.8;
dInertiaCmpVelNotchInpVal.InitRowCol = [1  1];


dInertiaCmpVelNotchOutpVal = DataDict.Display;
dInertiaCmpVelNotchOutpVal.LongName = 'Inertia Compensation Velocity Output from Inertia Compensation Notch';
dInertiaCmpVelNotchOutpVal.Description = [...
  'Compensated inertia comp command that is output from the stability com' ...
  'p filter'];
dInertiaCmpVelNotchOutpVal.DocUnits = 'MotNwtMtr';
dInertiaCmpVelNotchOutpVal.EngDT = dt.float32;
dInertiaCmpVelNotchOutpVal.EngMin = -8.8;
dInertiaCmpVelNotchOutpVal.EngMax = 8.8;
dInertiaCmpVelNotchOutpVal.InitRowCol = [1  1];


dInertiaCmpVelRawDecelGain = DataDict.Display;
dInertiaCmpVelRawDecelGain.LongName = 'Inertia Compensation Velocity Raw Decelerating Gain';
dInertiaCmpVelRawDecelGain.Description = [...
  'Scale Factor applied to Assist-Dependent Damping when vehicle is decel' ...
  'erating.  The Raw value is pior to rate limiting.'];
dInertiaCmpVelRawDecelGain.DocUnits = 'Uls';
dInertiaCmpVelRawDecelGain.EngDT = dt.float32;
dInertiaCmpVelRawDecelGain.EngMin = 1;
dInertiaCmpVelRawDecelGain.EngMax = 10;
dInertiaCmpVelRawDecelGain.InitRowCol = [1  1];


dInertiaCmpVelScadDrvrVel = DataDict.Display;
dInertiaCmpVelScadDrvrVel.LongName = 'Inertia Compensation Velocity Scaled Driver Velocity';
dInertiaCmpVelScadDrvrVel.Description = [...
  'Calculated handwheel velocity, above T-bar.  This value is the Scaled ' ...
  'as a function of vehicle speed to provide additional tuning flexibilit' ...
  'y.'];
dInertiaCmpVelScadDrvrVel.DocUnits = 'MotRadPerSec';
dInertiaCmpVelScadDrvrVel.EngDT = dt.float32;
dInertiaCmpVelScadDrvrVel.EngMin = -41887.9032;
dInertiaCmpVelScadDrvrVel.EngMax = 41887.9032;
dInertiaCmpVelScadDrvrVel.InitRowCol = [1  1];


dInertiaCmpVelTqSnsrVelFildVal = DataDict.Display;
dInertiaCmpVelTqSnsrVelFildVal.LongName = 'Inertia Compensation Velocity Torque Sensor Velocity Filtered Value';
dInertiaCmpVelTqSnsrVelFildVal.Description = 'Low-pass filtered T-bar velocity.';
dInertiaCmpVelTqSnsrVelFildVal.DocUnits = 'HwDegPerSec';
dInertiaCmpVelTqSnsrVelFildVal.EngDT = dt.float32;
dInertiaCmpVelTqSnsrVelFildVal.EngMin = -20000;
dInertiaCmpVelTqSnsrVelFildVal.EngMax = 20000;
dInertiaCmpVelTqSnsrVelFildVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DecelGain = DataDict.PIM;
DecelGain.LongName = ' Deceleration Gain';
DecelGain.Description = [...
  'Previous sample value of Deceleration Gain'];
DecelGain.DocUnits = 'Uls';
DecelGain.EngDT = dt.float32;
DecelGain.EngMin = 1;
DecelGain.EngMax = 10;
DecelGain.InitRowCol = [1  1];


NotchFilChk = DataDict.PIM;
NotchFilChk.LongName = 'Notch Filter Check';
NotchFilChk.Description = 'Notch Filter Check Flag';
NotchFilChk.DocUnits = 'Uls';
NotchFilChk.EngDT = dt.lgc;
NotchFilChk.EngMin = 0;
NotchFilChk.EngMax = 1;
NotchFilChk.InitRowCol = [1  1];


PreScagCmpCmdPrev1 = DataDict.PIM;
PreScagCmpCmdPrev1.LongName = ' Pre-Scaling Compensation Command Previous 1';
PreScagCmpCmdPrev1.Description = [...
  'Pre-scaling compensation command delayed by 1 sample'];
PreScagCmpCmdPrev1.DocUnits = 'MotRadPerSec';
PreScagCmpCmdPrev1.EngDT = dt.float32;
PreScagCmpCmdPrev1.EngMin = -4294967295;
PreScagCmpCmdPrev1.EngMax = 4294967295;
PreScagCmpCmdPrev1.InitRowCol = [1  1];


PreScagCmpCmdPrev2 = DataDict.PIM;
PreScagCmpCmdPrev2.LongName = ' Pre-Scaling Compensation Command Previous 2';
PreScagCmpCmdPrev2.Description = [...
  'Pre-scaling compensation command delayed by 2 samples'];
PreScagCmpCmdPrev2.DocUnits = 'MotRadPerSec';
PreScagCmpCmdPrev2.EngDT = dt.float32;
PreScagCmpCmdPrev2.EngMin = -4294967295;
PreScagCmpCmdPrev2.EngMax = 4294967295;
PreScagCmpCmdPrev2.InitRowCol = [1  1];


ScaDrvrVelPrev1 = DataDict.PIM;
ScaDrvrVelPrev1.LongName = ' Scad Driver Velocity Previous 1';
ScaDrvrVelPrev1.Description = [...
  'Scaled driver velocity value delayed by 1 sample'];
ScaDrvrVelPrev1.DocUnits = 'MotRadPerSec';
ScaDrvrVelPrev1.EngDT = dt.float32;
ScaDrvrVelPrev1.EngMin = -1350;
ScaDrvrVelPrev1.EngMax = 1350;
ScaDrvrVelPrev1.InitRowCol = [1  1];


ScaDrvrVelPrev2 = DataDict.PIM;
ScaDrvrVelPrev2.LongName = ' Scad Driver Velocity Previous 2';
ScaDrvrVelPrev2.Description = [...
  'Scaled driver velocity value delayed by 2 samples'];
ScaDrvrVelPrev2.DocUnits = 'MotRadPerSec';
ScaDrvrVelPrev2.EngDT = dt.float32;
ScaDrvrVelPrev2.EngMin = -1350;
ScaDrvrVelPrev2.EngMax = 1350;
ScaDrvrVelPrev2.InitRowCol = [1  1];


TqSnsrAgPrev = DataDict.PIM;
TqSnsrAgPrev.LongName = ' Torque Sensor Angle Previous';
TqSnsrAgPrev.Description = [...
  'Previous sample value of Tbar (torque sensor) angle'];
TqSnsrAgPrev.DocUnits = 'HwDeg';
TqSnsrAgPrev.EngDT = dt.float32;
TqSnsrAgPrev.EngMin = -20;
TqSnsrAgPrev.EngMax = 20;
TqSnsrAgPrev.InitRowCol = [1  1];


TqSnsrVelFil = DataDict.PIM;
TqSnsrVelFil.LongName = 'Torque Sensor Velocity Filter';
TqSnsrVelFil.Description = [...
  'State variable for torque sensor velocity low-pass filter'];
TqSnsrVelFil.DocUnits = 'HwDegPerSec';
TqSnsrVelFil.EngDT = struct.FilLpRec1;
TqSnsrVelFil.EngMin = [struct('FilSt',-20000,'FilGain',0)];
TqSnsrVelFil.EngMax = [struct('FilSt',20000,'FilGain',0.7154)];
TqSnsrVelFil.InitRowCol = [1  1];


TqSnsrVelFilNotchSt = DataDict.PIM;
TqSnsrVelFilNotchSt.LongName = 'Torque Sensor Velocity Filter Notch status';
TqSnsrVelFilNotchSt.Description = [...
  'State variable for torque sensor velocity notch filter'];
TqSnsrVelFilNotchSt.DocUnits = 'HwDegPerSec';
TqSnsrVelFilNotchSt.EngDT = struct.FilNotchStRec1;
TqSnsrVelFilNotchSt.EngMin = [struct('FilSt1',-1000000000,'FilSt2',-1000000000)];
TqSnsrVelFilNotchSt.EngMax = [struct('FilSt1',1000000000,'FilSt2',1000000000)];
TqSnsrVelFilNotchSt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


FLTINJ_INERTIACMPVEL_INERTIACMPCMD = DataDict.Constant;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.LongName = 'Fault Injection Inertia Compensation Velocity Inertia Compensation Command';
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.Description = [...
  'Fault Injection Inertia Compensation Velocity Inertia Compensation Com' ...
  'mand Constant'];
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.DocUnits = 'Uls';
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.EngDT = dt.u16;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.EngVal = 6;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.Define = 'Global';


MOTVELHILIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELHILIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity High Limit';
MOTVELHILIM_MOTRADPERSEC_F32.Description = 'Motor Velocity Upper Limit';
MOTVELHILIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELHILIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELHILIM_MOTRADPERSEC_F32.EngVal = 1350;
MOTVELHILIM_MOTRADPERSEC_F32.Define = 'Local';


MOTVELLOLIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELLOLIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity Low Limit';
MOTVELLOLIM_MOTRADPERSEC_F32.Description = 'Motor Velocity Lower Limit';
MOTVELLOLIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELLOLIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELLOLIM_MOTRADPERSEC_F32.EngVal = -1350;
MOTVELLOLIM_MOTRADPERSEC_F32.Define = 'Local';


NOTCHFILZEROTHD_ULS_F32 = DataDict.Constant;
NOTCHFILZEROTHD_ULS_F32.LongName = 'Notch Filter Zero Threshold';
NOTCHFILZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
NOTCHFILZEROTHD_ULS_F32.DocUnits = 'Uls';
NOTCHFILZEROTHD_ULS_F32.EngDT = dt.float32;
NOTCHFILZEROTHD_ULS_F32.EngVal = 1e-05;
NOTCHFILZEROTHD_ULS_F32.Define = 'Local';


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



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
