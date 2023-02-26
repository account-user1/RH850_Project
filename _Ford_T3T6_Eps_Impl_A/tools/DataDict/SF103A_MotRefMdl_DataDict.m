%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Aug-2017 16:07:37       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF103A = DataDict.FDD;
SF103A.Version = '4.0.X';
SF103A.LongName = 'Motor Reference Model';
SF103A.ShoName  = 'MotRefMdl';
SF103A.DesignASIL = 'D';
SF103A.Description = [...
  'The Motor Reference Model Function primary purpose is to calculate the' ...
  ' reference motor current in the d/q coordinate frame to be used as the' ...
  ' current command for the SF-104A, SF105A Current Regulator.  In genera' ...
  'l, this calculation produces the optimal (lowest) motor current comman' ...
  'd reference to produce the Motor Torque Command at the present operati' ...
  'ng point (motor velocity, supply voltage).  Features are included to u' ...
  'se something short of the optimal reference for multiple purposes, suc' ...
  'h as to reserve some supply voltage budget for downstream current regu' ...
  'lator operation, or for cogging/ripple cancellation, or to smooth the ' ...
  'transition of low values of Id to high values of Id as the motor opera' ...
  'ting conditions change.  Supplementary functions include the calculati' ...
  'on of a Feedforward Reference Voltage for use in the SF-105A Current R' ...
  'egulator, whose form changes depending on the state of the signal LoA ' ...
  'State (this allows operation in Voltage Mode Control in certain fail o' ...
  'perational states).  Another supplementary function computes the Motor' ...
  ' Reference Current angle (Alpha) for use in the Current Measurement fu' ...
  'nction.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotRefMdlInit1 = DataDict.Runnable;
MotRefMdlInit1.Context = 'Rte';
MotRefMdlInit1.TimeStep = 0;
MotRefMdlInit1.Description = 'Init Runnable';

MotRefMdlPer1 = DataDict.Runnable;
MotRefMdlPer1.Context = 'Rte';
MotRefMdlPer1.TimeStep = 0.002;
MotRefMdlPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'MotRefMdlPer1'};
BrdgVltg.ReadType = 'Rte';


DualEcuMotCtrlMtgtnEna = DataDict.IpSignal;
DualEcuMotCtrlMtgtnEna.LongName = 'Dual ECU Motor Control Mitigation Enable';
DualEcuMotCtrlMtgtnEna.Description = [...
  'Indicates the mode to change to single ECU operation'];
DualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
DualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
DualEcuMotCtrlMtgtnEna.EngInit = 0;
DualEcuMotCtrlMtgtnEna.EngMin = 0;
DualEcuMotCtrlMtgtnEna.EngMax = 1;
DualEcuMotCtrlMtgtnEna.ReadIn = {'MotRefMdlPer1'};
DualEcuMotCtrlMtgtnEna.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 255;
MotAndThermProtnLoaMod.ReadIn = {'MotRefMdlPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotBackEmfConEstimd = DataDict.IpSignal;
MotBackEmfConEstimd.LongName = 'Estimated Motor Ke';
MotBackEmfConEstimd.Description = 'Estimated motor back emf constant.';
MotBackEmfConEstimd.DocUnits = 'VoltPerMotRadPerSec';
MotBackEmfConEstimd.EngDT = dt.float32;
MotBackEmfConEstimd.EngInit = 0.025;
MotBackEmfConEstimd.EngMin = 0.025;
MotBackEmfConEstimd.EngMax = 0.075;
MotBackEmfConEstimd.ReadIn = {'MotRefMdlPer1'};
MotBackEmfConEstimd.ReadType = 'Rte';


MotInduDaxEstimd = DataDict.IpSignal;
MotInduDaxEstimd.LongName = 'Estimated Motor D-Axis Inductance';
MotInduDaxEstimd.Description = [...
  'Estimated motor inductance in the D-Axis.'];
MotInduDaxEstimd.DocUnits = 'Henry';
MotInduDaxEstimd.EngDT = dt.float32;
MotInduDaxEstimd.EngInit = 0.00011889;
MotInduDaxEstimd.EngMin = 3e-05;
MotInduDaxEstimd.EngMax = 0.00041;
MotInduDaxEstimd.ReadIn = {'MotRefMdlPer1'};
MotInduDaxEstimd.ReadType = 'Rte';


MotInduQaxEstimd = DataDict.IpSignal;
MotInduQaxEstimd.LongName = 'Estimated Motor Q-Axis Inductance';
MotInduQaxEstimd.Description = [...
  'Estimated motor inductance in the Q-Axis.'];
MotInduQaxEstimd.DocUnits = 'Henry';
MotInduQaxEstimd.EngDT = dt.float32;
MotInduQaxEstimd.EngInit = 0.00011889;
MotInduQaxEstimd.EngMin = 3e-05;
MotInduQaxEstimd.EngMax = 0.00041;
MotInduQaxEstimd.ReadIn = {'MotRefMdlPer1'};
MotInduQaxEstimd.ReadType = 'Rte';


MotQuad = DataDict.IpSignal;
MotQuad.LongName = 'Motor Quadrant';
MotQuad.Description = [...
  'Current calculated quadrant of motor operation.'];
MotQuad.DocUnits = 'Cnt';
MotQuad.EngDT = enum.MotQuad1;
MotQuad.EngInit = MotQuad1.MOTQUAD_QUAD1;
MotQuad.EngMin = MotQuad1.MOTQUAD_QUAD1;
MotQuad.EngMax = MotQuad1.MOTQUAD_QUAD4;
MotQuad.ReadIn = {'MotRefMdlPer1'};
MotQuad.ReadType = 'Rte';


MotREstimd = DataDict.IpSignal;
MotREstimd.LongName = 'Estimated Motor Resistance';
MotREstimd.Description = 'Estimated Total Motor Resistance ';
MotREstimd.DocUnits = 'Ohm';
MotREstimd.EngDT = dt.float32;
MotREstimd.EngInit = 0.005;
MotREstimd.EngMin = 0.005;
MotREstimd.EngMax = 0.12565;
MotREstimd.ReadIn = {'MotRefMdlPer1'};
MotREstimd.ReadType = 'Rte';


MotTqCmdMrfScad = DataDict.IpSignal;
MotTqCmdMrfScad.LongName = 'Scaled Motor Torque Command in Motor Reference Frame';
MotTqCmdMrfScad.Description = [...
  'Scaled version of Mrf Motor Torque Command'];
MotTqCmdMrfScad.DocUnits = 'MotNwtMtr';
MotTqCmdMrfScad.EngDT = dt.float32;
MotTqCmdMrfScad.EngInit = 0;
MotTqCmdMrfScad.EngMin = -8.8;
MotTqCmdMrfScad.EngMax = 8.8;
MotTqCmdMrfScad.ReadIn = {'MotRefMdlPer1'};
MotTqCmdMrfScad.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity in Motor Reference Frame';
MotVelMrf.Description = [...
  'Motor velocity with polarity as seen by motor shaft.'];
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'MotRefMdlPer1'};
MotVelMrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotBackEmfVltg = DataDict.OpSignal;
MotBackEmfVltg.LongName = 'Motor Back EMF Voltage';
MotBackEmfVltg.Description = 'Motor Back EMF Voltage';
MotBackEmfVltg.DocUnits = 'Volt';
MotBackEmfVltg.SwcShoName = 'MotRefMdl';
MotBackEmfVltg.EngDT = dt.float32;
MotBackEmfVltg.EngInit = 0;
MotBackEmfVltg.EngMin = -101.25;
MotBackEmfVltg.EngMax = 101.25;
MotBackEmfVltg.TestTolerance = 0.0009;
MotBackEmfVltg.WrittenIn = {'MotRefMdlPer1'};
MotBackEmfVltg.WriteType = 'Rte';


MotCurrAg = DataDict.OpSignal;
MotCurrAg.LongName = 'Motor Current Angle';
MotCurrAg.Description = [...
  'Motor Current Vector alpha angle referenced to motor BEMF'];
MotCurrAg.DocUnits = 'MotRad';
MotCurrAg.SwcShoName = 'MotRefMdl';
MotCurrAg.EngDT = dt.float32;
MotCurrAg.EngInit = 0;
MotCurrAg.EngMin = 0;
MotCurrAg.EngMax = 6.2832;
MotCurrAg.TestTolerance = 0.001;
MotCurrAg.WrittenIn = {'MotRefMdlPer1'};
MotCurrAg.WriteType = 'Rte';


MotCurrDaxCmd = DataDict.OpSignal;
MotCurrDaxCmd.LongName = 'Motor Current D-Axis Command';
MotCurrDaxCmd.Description = [...
  'D-Axis Reference (commanded or expected value)'];
MotCurrDaxCmd.DocUnits = 'Ampr';
MotCurrDaxCmd.SwcShoName = 'MotRefMdl';
MotCurrDaxCmd.EngDT = dt.float32;
MotCurrDaxCmd.EngInit = 0;
MotCurrDaxCmd.EngMin = 0;
MotCurrDaxCmd.EngMax = 220;
MotCurrDaxCmd.TestTolerance = 0.02;
MotCurrDaxCmd.WrittenIn = {'MotRefMdlPer1'};
MotCurrDaxCmd.WriteType = 'Rte';


MotCurrDaxMax = DataDict.OpSignal;
MotCurrDaxMax.LongName = 'Motor Current D-Axis Maximum';
MotCurrDaxMax.Description = [...
  'Maximum direct axis current for direct axis flux linkage to be zero.'];
MotCurrDaxMax.DocUnits = 'Ampr';
MotCurrDaxMax.SwcShoName = 'MotRefMdl';
MotCurrDaxMax.EngDT = dt.float32;
MotCurrDaxMax.EngInit = 0;
MotCurrDaxMax.EngMin = 0;
MotCurrDaxMax.EngMax = 220;
MotCurrDaxMax.TestTolerance = 0.02;
MotCurrDaxMax.WrittenIn = {'MotRefMdlPer1'};
MotCurrDaxMax.WriteType = 'Rte';


MotCurrQaxCmd = DataDict.OpSignal;
MotCurrQaxCmd.LongName = 'Motor Current Q-Axis Command';
MotCurrQaxCmd.Description = 'Motor Current Q-Axis Command';
MotCurrQaxCmd.DocUnits = 'Ampr';
MotCurrQaxCmd.SwcShoName = 'MotRefMdl';
MotCurrQaxCmd.EngDT = dt.float32;
MotCurrQaxCmd.EngInit = 0;
MotCurrQaxCmd.EngMin = -220;
MotCurrQaxCmd.EngMax = 220;
MotCurrQaxCmd.TestTolerance = 0.02;
MotCurrQaxCmd.WrittenIn = {'MotRefMdlPer1'};
MotCurrQaxCmd.WriteType = 'Rte';


MotReacncDax = DataDict.OpSignal;
MotReacncDax.LongName = 'Motor D-Axis Reactance';
MotReacncDax.Description = [...
  'Non-dissipative resistance to a change in current.'];
MotReacncDax.DocUnits = 'Ohm';
MotReacncDax.SwcShoName = 'MotRefMdl';
MotReacncDax.EngDT = dt.float32;
MotReacncDax.EngInit = 0;
MotReacncDax.EngMin = -2.87607;
MotReacncDax.EngMax = 2.87607;
MotReacncDax.TestTolerance = 0.0005;
MotReacncDax.WrittenIn = {'MotRefMdlPer1'};
MotReacncDax.WriteType = 'Rte';


MotReacncQax = DataDict.OpSignal;
MotReacncQax.LongName = 'Motor Q-Axis Reactance';
MotReacncQax.Description = [...
  'Non-dissipative resistance to a change in current.'];
MotReacncQax.DocUnits = 'Ohm';
MotReacncQax.SwcShoName = 'MotRefMdl';
MotReacncQax.EngDT = dt.float32;
MotReacncQax.EngInit = 0;
MotReacncQax.EngMin = -2.87607;
MotReacncQax.EngMax = 2.87607;
MotReacncQax.TestTolerance = 0.0005;
MotReacncQax.WrittenIn = {'MotRefMdlPer1'};
MotReacncQax.WriteType = 'Rte';


MotVltgDaxFf = DataDict.OpSignal;
MotVltgDaxFf.LongName = 'Motor D-Axis Feedforward Voltage';
MotVltgDaxFf.Description = 'Motor D-Axis Feedforward Voltage';
MotVltgDaxFf.DocUnits = 'Volt';
MotVltgDaxFf.SwcShoName = 'MotRefMdl';
MotVltgDaxFf.EngDT = dt.float32;
MotVltgDaxFf.EngInit = 0;
MotVltgDaxFf.EngMin = -26.5;
MotVltgDaxFf.EngMax = 26.5;
MotVltgDaxFf.TestTolerance = 0.0009;
MotVltgDaxFf.WrittenIn = {'MotRefMdlPer1'};
MotVltgDaxFf.WriteType = 'Rte';


MotVltgDaxFfStat = DataDict.OpSignal;
MotVltgDaxFfStat.LongName = 'Motor D-Axis Static Feedforward Voltage';
MotVltgDaxFfStat.Description = [...
  'Motor D-Axis Static Feedforward Voltage'];
MotVltgDaxFfStat.DocUnits = 'Volt';
MotVltgDaxFfStat.SwcShoName = 'MotRefMdl';
MotVltgDaxFfStat.EngDT = dt.float32;
MotVltgDaxFfStat.EngInit = 0;
MotVltgDaxFfStat.EngMin = -26.5;
MotVltgDaxFfStat.EngMax = 26.5;
MotVltgDaxFfStat.TestTolerance = 0.0009;
MotVltgDaxFfStat.WrittenIn = {'MotRefMdlPer1'};
MotVltgDaxFfStat.WriteType = 'Rte';


MotVltgQaxFf = DataDict.OpSignal;
MotVltgQaxFf.LongName = 'Motor Q-Axis Feedforward Voltage';
MotVltgQaxFf.Description = 'Motor Q-Axis Feedforward Voltage';
MotVltgQaxFf.DocUnits = 'Volt';
MotVltgQaxFf.SwcShoName = 'MotRefMdl';
MotVltgQaxFf.EngDT = dt.float32;
MotVltgQaxFf.EngInit = 0;
MotVltgQaxFf.EngMin = -101.25;
MotVltgQaxFf.EngMax = 101.25;
MotVltgQaxFf.TestTolerance = 0.0009;
MotVltgQaxFf.WrittenIn = {'MotRefMdlPer1'};
MotVltgQaxFf.WriteType = 'Rte';


MotVltgQaxFfStat = DataDict.OpSignal;
MotVltgQaxFfStat.LongName = 'Motor Q-Axis Static Feedforward Voltage';
MotVltgQaxFfStat.Description = [...
  'Motor Q-Axis Static Feedforward Voltage'];
MotVltgQaxFfStat.DocUnits = 'Volt';
MotVltgQaxFfStat.SwcShoName = 'MotRefMdl';
MotVltgQaxFfStat.EngDT = dt.float32;
MotVltgQaxFfStat.EngInit = 0;
MotVltgQaxFfStat.EngMin = -26.5;
MotVltgQaxFfStat.EngMax = 26.5;
MotVltgQaxFfStat.TestTolerance = 0.0009;
MotVltgQaxFfStat.WrittenIn = {'MotRefMdlPer1'};
MotVltgQaxFfStat.WriteType = 'Rte';


MotVltgSatnIndFf = DataDict.OpSignal;
MotVltgSatnIndFf.LongName = 'Motor Voltage Saturation Indiciator Feedforward';
MotVltgSatnIndFf.Description = [...
  'ratio of total used feedfoward static voltage to voltage supply,to joi' ...
  'n calculations in SF106A torque ripple cancellation'];
MotVltgSatnIndFf.DocUnits = 'Uls';
MotVltgSatnIndFf.SwcShoName = 'MotRefMdl';
MotVltgSatnIndFf.EngDT = dt.float32;
MotVltgSatnIndFf.EngInit = 0;
MotVltgSatnIndFf.EngMin = 0;
MotVltgSatnIndFf.EngMax = 1;
MotVltgSatnIndFf.TestTolerance = 0.0009;
MotVltgSatnIndFf.WrittenIn = {'MotRefMdlPer1'};
MotVltgSatnIndFf.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotRefMdlCurrDaxBoostGain = DataDict.Calibration;
MotRefMdlCurrDaxBoostGain.LongName = 'D-Axis Current Boost Gain';
MotRefMdlCurrDaxBoostGain.Description = [...
  'Scale factor to determine the amount of Id boost'];
MotRefMdlCurrDaxBoostGain.DocUnits = 'Uls';
MotRefMdlCurrDaxBoostGain.EngDT = dt.float32;
MotRefMdlCurrDaxBoostGain.EngVal = 0;
MotRefMdlCurrDaxBoostGain.EngMin = 0;
MotRefMdlCurrDaxBoostGain.EngMax = 1;
MotRefMdlCurrDaxBoostGain.Cardinality = 'Cmn';
MotRefMdlCurrDaxBoostGain.CustomerVisible = false;
MotRefMdlCurrDaxBoostGain.Online = false;
MotRefMdlCurrDaxBoostGain.Impact = 'H';
MotRefMdlCurrDaxBoostGain.TuningOwner = 'FDD';
MotRefMdlCurrDaxBoostGain.GraphLink = {''};
MotRefMdlCurrDaxBoostGain.Monotony = 'None';
MotRefMdlCurrDaxBoostGain.MaxGrad = 999;
MotRefMdlCurrDaxBoostGain.PortName = 'MotRefMdlCurrDaxBoostGain';


MotRefMdlCurrDaxBoostTqScaX = DataDict.Calibration;
MotRefMdlCurrDaxBoostTqScaX.LongName = 'D-Axis Current Boost Torque Scale X-Table';
MotRefMdlCurrDaxBoostTqScaX.Description = [...
  '(scaling boost as a function of torque)'];
MotRefMdlCurrDaxBoostTqScaX.DocUnits = 'MotNwtMtr';
MotRefMdlCurrDaxBoostTqScaX.EngDT = dt.u4p12;
MotRefMdlCurrDaxBoostTqScaX.EngVal =  ...
   [0              1.5             1.75                2             2.25              2.5                3              3.5                4              4.5                5];
MotRefMdlCurrDaxBoostTqScaX.EngMin = 0;
MotRefMdlCurrDaxBoostTqScaX.EngMax = 8.8;
MotRefMdlCurrDaxBoostTqScaX.Cardinality = 'Cmn';
MotRefMdlCurrDaxBoostTqScaX.CustomerVisible = false;
MotRefMdlCurrDaxBoostTqScaX.Online = false;
MotRefMdlCurrDaxBoostTqScaX.Impact = 'H';
MotRefMdlCurrDaxBoostTqScaX.TuningOwner = 'FDD';
MotRefMdlCurrDaxBoostTqScaX.GraphLink = {''};
MotRefMdlCurrDaxBoostTqScaX.Monotony = 'Strictly_Increasing';
MotRefMdlCurrDaxBoostTqScaX.MaxGrad = 998;
MotRefMdlCurrDaxBoostTqScaX.PortName = 'MotRefMdlCurrDaxBoostTqScaX';


MotRefMdlCurrDaxBoostTqScaY = DataDict.Calibration;
MotRefMdlCurrDaxBoostTqScaY.LongName = 'D-Axis Current Boost Torque Scale Y-Table';
MotRefMdlCurrDaxBoostTqScaY.Description = [...
  'Torque-dependent scale factor applied to Boost Torque'];
MotRefMdlCurrDaxBoostTqScaY.DocUnits = 'Uls';
MotRefMdlCurrDaxBoostTqScaY.EngDT = dt.u1p15;
MotRefMdlCurrDaxBoostTqScaY.EngVal =  ...
   [0              0.5              0.6              0.7            0.725            0.775            0.825             0.85              0.9             0.95                1];
MotRefMdlCurrDaxBoostTqScaY.EngMin = 0;
MotRefMdlCurrDaxBoostTqScaY.EngMax = 1;
MotRefMdlCurrDaxBoostTqScaY.Cardinality = 'Cmn';
MotRefMdlCurrDaxBoostTqScaY.CustomerVisible = false;
MotRefMdlCurrDaxBoostTqScaY.Online = false;
MotRefMdlCurrDaxBoostTqScaY.Impact = 'H';
MotRefMdlCurrDaxBoostTqScaY.TuningOwner = 'FDD';
MotRefMdlCurrDaxBoostTqScaY.GraphLink = {'MotRefMdlCurrDaxBoostTqScaX'};
MotRefMdlCurrDaxBoostTqScaY.Monotony = 'None';
MotRefMdlCurrDaxBoostTqScaY.MaxGrad = 998;
MotRefMdlCurrDaxBoostTqScaY.PortName = 'MotRefMdlCurrDaxBoostTqScaY';


MotRefMdlCurrDaxQaxRefDelta = DataDict.Calibration;
MotRefMdlCurrDaxQaxRefDelta.LongName = 'Current D-Axis and Q-Axis Reference Delta';
MotRefMdlCurrDaxQaxRefDelta.Description = [...
  'Motor Voltage Phase Angle (delta) table for setting up Bracket Array'];
MotRefMdlCurrDaxQaxRefDelta.DocUnits = 'MotRad';
MotRefMdlCurrDaxQaxRefDelta.EngDT = dt.float32;
MotRefMdlCurrDaxQaxRefDelta.EngVal =  ...
   [-3.1415927       -2.3561945       -1.5707964       -0.7853982                0        0.7853982        1.5707964        2.3561945];
MotRefMdlCurrDaxQaxRefDelta.EngMin = -3.1415927;
MotRefMdlCurrDaxQaxRefDelta.EngMax = 3.1415927;
MotRefMdlCurrDaxQaxRefDelta.Cardinality = 'Cmn';
MotRefMdlCurrDaxQaxRefDelta.CustomerVisible = false;
MotRefMdlCurrDaxQaxRefDelta.Online = false;
MotRefMdlCurrDaxQaxRefDelta.Impact = 'H';
MotRefMdlCurrDaxQaxRefDelta.TuningOwner = 'FDD';
MotRefMdlCurrDaxQaxRefDelta.GraphLink = {''};
MotRefMdlCurrDaxQaxRefDelta.Monotony = 'None';
MotRefMdlCurrDaxQaxRefDelta.MaxGrad = 998;
MotRefMdlCurrDaxQaxRefDelta.PortName = 'MotRefMdlCurrDaxQaxRefDelta';


MotRefMdlCurrItrnTolr = DataDict.Calibration;
MotRefMdlCurrItrnTolr.LongName = 'Current Iteration Tolerance';
MotRefMdlCurrItrnTolr.Description = 'Minimum Current Solver Tolerance';
MotRefMdlCurrItrnTolr.DocUnits = 'Ampr';
MotRefMdlCurrItrnTolr.EngDT = dt.float32;
MotRefMdlCurrItrnTolr.EngVal = 0.1;
MotRefMdlCurrItrnTolr.EngMin = 0.01;
MotRefMdlCurrItrnTolr.EngMax = 20;
MotRefMdlCurrItrnTolr.Cardinality = 'Cmn';
MotRefMdlCurrItrnTolr.CustomerVisible = false;
MotRefMdlCurrItrnTolr.Online = false;
MotRefMdlCurrItrnTolr.Impact = 'H';
MotRefMdlCurrItrnTolr.TuningOwner = 'FDD';
MotRefMdlCurrItrnTolr.GraphLink = {''};
MotRefMdlCurrItrnTolr.Monotony = 'None';
MotRefMdlCurrItrnTolr.MaxGrad = 999;
MotRefMdlCurrItrnTolr.PortName = 'MotRefMdlCurrItrnTolr';


MotRefMdlFbCtrlDi = DataDict.Calibration;
MotRefMdlFbCtrlDi.LongName = 'Feedback Control Disable';
MotRefMdlFbCtrlDi.Description = [...
  'To disable feedback control mode and operate in pure feedforward contr' ...
  'ol mode'];
MotRefMdlFbCtrlDi.DocUnits = 'Cnt';
MotRefMdlFbCtrlDi.EngDT = dt.lgc;
MotRefMdlFbCtrlDi.EngVal = 0;
MotRefMdlFbCtrlDi.EngMin = 0;
MotRefMdlFbCtrlDi.EngMax = 1;
MotRefMdlFbCtrlDi.Cardinality = 'Cmn';
MotRefMdlFbCtrlDi.CustomerVisible = false;
MotRefMdlFbCtrlDi.Online = false;
MotRefMdlFbCtrlDi.Impact = 'H';
MotRefMdlFbCtrlDi.TuningOwner = 'FDD';
MotRefMdlFbCtrlDi.GraphLink = {''};
MotRefMdlFbCtrlDi.Monotony = 'None';
MotRefMdlFbCtrlDi.MaxGrad = 999;
MotRefMdlFbCtrlDi.PortName = 'MotRefMdlFbCtrlDi';


MotRefMdlIvtrDeadTiBrdgVltgSca = DataDict.Calibration;
MotRefMdlIvtrDeadTiBrdgVltgSca.LongName = 'Inverter Dead Time Bridge Voltage Scale';
MotRefMdlIvtrDeadTiBrdgVltgSca.Description = [...
  'Ratio of Available DC Link Voltage at Inverter (Deadtime Compensation ' ...
  'Loss)'];
MotRefMdlIvtrDeadTiBrdgVltgSca.DocUnits = 'Uls';
MotRefMdlIvtrDeadTiBrdgVltgSca.EngDT = dt.float32;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngVal = 1;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngMin = 0.98;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngMax = 1;
MotRefMdlIvtrDeadTiBrdgVltgSca.Cardinality = 'Cmn';
MotRefMdlIvtrDeadTiBrdgVltgSca.CustomerVisible = false;
MotRefMdlIvtrDeadTiBrdgVltgSca.Online = false;
MotRefMdlIvtrDeadTiBrdgVltgSca.Impact = 'H';
MotRefMdlIvtrDeadTiBrdgVltgSca.TuningOwner = 'FDD';
MotRefMdlIvtrDeadTiBrdgVltgSca.GraphLink = {''};
MotRefMdlIvtrDeadTiBrdgVltgSca.Monotony = 'None';
MotRefMdlIvtrDeadTiBrdgVltgSca.MaxGrad = 999;
MotRefMdlIvtrDeadTiBrdgVltgSca.PortName = 'MotRefMdlIvtrDeadTiBrdgVltgSca';


MotRefMdlMinCurrItrnLim = DataDict.Calibration;
MotRefMdlMinCurrItrnLim.LongName = 'Minimum Current Iteration Limit';
MotRefMdlMinCurrItrnLim.Description = [...
  'Maximum number of iterations allowed witin the Minimum Current Solver.' ...
  ''];
MotRefMdlMinCurrItrnLim.DocUnits = 'Cnt';
MotRefMdlMinCurrItrnLim.EngDT = dt.u08;
MotRefMdlMinCurrItrnLim.EngVal = 3;
MotRefMdlMinCurrItrnLim.EngMin = 1;
MotRefMdlMinCurrItrnLim.EngMax = 5;
MotRefMdlMinCurrItrnLim.Cardinality = 'Cmn';
MotRefMdlMinCurrItrnLim.CustomerVisible = false;
MotRefMdlMinCurrItrnLim.Online = false;
MotRefMdlMinCurrItrnLim.Impact = 'H';
MotRefMdlMinCurrItrnLim.TuningOwner = 'FDD';
MotRefMdlMinCurrItrnLim.GraphLink = {''};
MotRefMdlMinCurrItrnLim.Monotony = 'None';
MotRefMdlMinCurrItrnLim.MaxGrad = 999;
MotRefMdlMinCurrItrnLim.PortName = 'MotRefMdlMinCurrItrnLim';


MotRefMdlMotCurrDaxMaxSca = DataDict.Calibration;
MotRefMdlMotCurrDaxMaxSca.LongName = 'Motor Current D-Axis Maximum Scale';
MotRefMdlMotCurrDaxMaxSca.Description = 'NOTE:  This is 1-2, not 0-100';
MotRefMdlMotCurrDaxMaxSca.DocUnits = 'Uls';
MotRefMdlMotCurrDaxMaxSca.EngDT = dt.float32;
MotRefMdlMotCurrDaxMaxSca.EngVal = 1;
MotRefMdlMotCurrDaxMaxSca.EngMin = 1;
MotRefMdlMotCurrDaxMaxSca.EngMax = 2;
MotRefMdlMotCurrDaxMaxSca.Cardinality = 'Cmn';
MotRefMdlMotCurrDaxMaxSca.CustomerVisible = false;
MotRefMdlMotCurrDaxMaxSca.Online = false;
MotRefMdlMotCurrDaxMaxSca.Impact = 'H';
MotRefMdlMotCurrDaxMaxSca.TuningOwner = 'FDD';
MotRefMdlMotCurrDaxMaxSca.GraphLink = {''};
MotRefMdlMotCurrDaxMaxSca.Monotony = 'None';
MotRefMdlMotCurrDaxMaxSca.MaxGrad = 999;
MotRefMdlMotCurrDaxMaxSca.PortName = 'MotRefMdlMotCurrDaxMaxSca';


MotRefMdlMotVelLpFilFrq = DataDict.Calibration;
MotRefMdlMotVelLpFilFrq.LongName = 'Motor Velocity Low-Pass Filter Frequency';
MotRefMdlMotVelLpFilFrq.Description = [...
  'Motor velocity input is treated to LPF.  This is the cutoff frequency.' ...
  ''];
MotRefMdlMotVelLpFilFrq.DocUnits = 'Hz';
MotRefMdlMotVelLpFilFrq.EngDT = dt.float32;
MotRefMdlMotVelLpFilFrq.EngVal = 125;
MotRefMdlMotVelLpFilFrq.EngMin = 1;
MotRefMdlMotVelLpFilFrq.EngMax = 200;
MotRefMdlMotVelLpFilFrq.Cardinality = 'Cmn';
MotRefMdlMotVelLpFilFrq.CustomerVisible = false;
MotRefMdlMotVelLpFilFrq.Online = false;
MotRefMdlMotVelLpFilFrq.Impact = 'H';
MotRefMdlMotVelLpFilFrq.TuningOwner = 'FDD';
MotRefMdlMotVelLpFilFrq.GraphLink = {''};
MotRefMdlMotVelLpFilFrq.Monotony = 'None';
MotRefMdlMotVelLpFilFrq.MaxGrad = 999;
MotRefMdlMotVelLpFilFrq.PortName = 'MotRefMdlMotVelLpFilFrq';


MotRefMdlMotVltgDerivtvTiCon = DataDict.Calibration;
MotRefMdlMotVltgDerivtvTiCon.LongName = 'Motor Voltage Derivative Filter Time Constant';
MotRefMdlMotVltgDerivtvTiCon.Description = [...
  'Time constant for calculating derivative term for dynamic feedforward ' ...
  'voltage calculation'];
MotRefMdlMotVltgDerivtvTiCon.DocUnits = 'Sec';
MotRefMdlMotVltgDerivtvTiCon.EngDT = dt.float32;
MotRefMdlMotVltgDerivtvTiCon.EngVal = 0.0026526;
MotRefMdlMotVltgDerivtvTiCon.EngMin = 0;
MotRefMdlMotVltgDerivtvTiCon.EngMax = 0.05;
MotRefMdlMotVltgDerivtvTiCon.Cardinality = 'Cmn';
MotRefMdlMotVltgDerivtvTiCon.CustomerVisible = false;
MotRefMdlMotVltgDerivtvTiCon.Online = false;
MotRefMdlMotVltgDerivtvTiCon.Impact = 'H';
MotRefMdlMotVltgDerivtvTiCon.TuningOwner = 'FDD';
MotRefMdlMotVltgDerivtvTiCon.GraphLink = {''};
MotRefMdlMotVltgDerivtvTiCon.Monotony = 'None';
MotRefMdlMotVltgDerivtvTiCon.MaxGrad = 999;
MotRefMdlMotVltgDerivtvTiCon.PortName = 'MotRefMdlMotVltgDerivtvTiCon';


MotRefMdlQuad13VltgSdlX = DataDict.Calibration;
MotRefMdlQuad13VltgSdlX.LongName = 'Quadrant 1 and 3 Voltage Scheduler X-Table';
MotRefMdlQuad13VltgSdlX.Description = 'Q1,3 Available Voltage Adjustment';
MotRefMdlQuad13VltgSdlX.DocUnits = 'MotRadPerSec';
MotRefMdlQuad13VltgSdlX.EngDT = dt.u11p5;
MotRefMdlQuad13VltgSdlX.EngVal =  ...
   [0              100              200              300              500              600              700              800              900             1100];
MotRefMdlQuad13VltgSdlX.EngMin = 0;
MotRefMdlQuad13VltgSdlX.EngMax = 1350;
MotRefMdlQuad13VltgSdlX.Cardinality = 'Cmn';
MotRefMdlQuad13VltgSdlX.CustomerVisible = false;
MotRefMdlQuad13VltgSdlX.Online = false;
MotRefMdlQuad13VltgSdlX.Impact = 'H';
MotRefMdlQuad13VltgSdlX.TuningOwner = 'FDD';
MotRefMdlQuad13VltgSdlX.GraphLink = {''};
MotRefMdlQuad13VltgSdlX.Monotony = 'Strictly_Increasing';
MotRefMdlQuad13VltgSdlX.MaxGrad = 998;
MotRefMdlQuad13VltgSdlX.PortName = 'MotRefMdlQuad13VltgSdlX';


MotRefMdlQuad13VltgSdlY = DataDict.Calibration;
MotRefMdlQuad13VltgSdlY.LongName = 'Quadrant 1 and 3 Voltage Scheduler Y-Table';
MotRefMdlQuad13VltgSdlY.Description = 'Q1,3 Available Voltage Adjustment';
MotRefMdlQuad13VltgSdlY.DocUnits = 'Volt';
MotRefMdlQuad13VltgSdlY.EngDT = dt.u3p13;
MotRefMdlQuad13VltgSdlY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
MotRefMdlQuad13VltgSdlY.EngMin = 0;
MotRefMdlQuad13VltgSdlY.EngMax = 5;
MotRefMdlQuad13VltgSdlY.Cardinality = 'Cmn';
MotRefMdlQuad13VltgSdlY.CustomerVisible = false;
MotRefMdlQuad13VltgSdlY.Online = false;
MotRefMdlQuad13VltgSdlY.Impact = 'H';
MotRefMdlQuad13VltgSdlY.TuningOwner = 'FDD';
MotRefMdlQuad13VltgSdlY.GraphLink = {'MotRefMdlQuad13VltgSdlX'};
MotRefMdlQuad13VltgSdlY.Monotony = 'None';
MotRefMdlQuad13VltgSdlY.MaxGrad = 998;
MotRefMdlQuad13VltgSdlY.PortName = 'MotRefMdlQuad13VltgSdlY';


MotRefMdlQuad24VltgSdlX = DataDict.Calibration;
MotRefMdlQuad24VltgSdlX.LongName = 'Quadrant 2 and 4 Voltage Scheduler X-Table';
MotRefMdlQuad24VltgSdlX.Description = 'Q2,4 Available Voltage Adjustment';
MotRefMdlQuad24VltgSdlX.DocUnits = 'MotRadPerSec';
MotRefMdlQuad24VltgSdlX.EngDT = dt.u11p5;
MotRefMdlQuad24VltgSdlX.EngVal =  ...
   [0              100              200              300              500              600              700              800              900             1100];
MotRefMdlQuad24VltgSdlX.EngMin = 0;
MotRefMdlQuad24VltgSdlX.EngMax = 1350;
MotRefMdlQuad24VltgSdlX.Cardinality = 'Cmn';
MotRefMdlQuad24VltgSdlX.CustomerVisible = false;
MotRefMdlQuad24VltgSdlX.Online = false;
MotRefMdlQuad24VltgSdlX.Impact = 'H';
MotRefMdlQuad24VltgSdlX.TuningOwner = 'FDD';
MotRefMdlQuad24VltgSdlX.GraphLink = {''};
MotRefMdlQuad24VltgSdlX.Monotony = 'Strictly_Increasing';
MotRefMdlQuad24VltgSdlX.MaxGrad = 998;
MotRefMdlQuad24VltgSdlX.PortName = 'MotRefMdlQuad24VltgSdlX';


MotRefMdlQuad24VltgSdlY = DataDict.Calibration;
MotRefMdlQuad24VltgSdlY.LongName = 'Quadrant 2 and 4 Voltage Scheduler Y-Table';
MotRefMdlQuad24VltgSdlY.Description = 'Q2,4 Available Voltage Adjustment';
MotRefMdlQuad24VltgSdlY.DocUnits = 'Volt';
MotRefMdlQuad24VltgSdlY.EngDT = dt.u3p13;
MotRefMdlQuad24VltgSdlY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0];
MotRefMdlQuad24VltgSdlY.EngMin = 0;
MotRefMdlQuad24VltgSdlY.EngMax = 5;
MotRefMdlQuad24VltgSdlY.Cardinality = 'Cmn';
MotRefMdlQuad24VltgSdlY.CustomerVisible = false;
MotRefMdlQuad24VltgSdlY.Online = false;
MotRefMdlQuad24VltgSdlY.Impact = 'H';
MotRefMdlQuad24VltgSdlY.TuningOwner = 'FDD';
MotRefMdlQuad24VltgSdlY.GraphLink = {'MotRefMdlQuad24VltgSdlX'};
MotRefMdlQuad24VltgSdlY.Monotony = 'None';
MotRefMdlQuad24VltgSdlY.MaxGrad = 998;
MotRefMdlQuad24VltgSdlY.PortName = 'MotRefMdlQuad24VltgSdlY';


MotRefMdlRefLocnItrnLim = DataDict.Calibration;
MotRefMdlRefLocnItrnLim.LongName = 'Reference Location Iteration Limit';
MotRefMdlRefLocnItrnLim.Description = [...
  'Maximum number of iterations allowed witin the Locate Reference Solver' ...
  '.'];
MotRefMdlRefLocnItrnLim.DocUnits = 'Cnt';
MotRefMdlRefLocnItrnLim.EngDT = dt.u08;
MotRefMdlRefLocnItrnLim.EngVal = 10;
MotRefMdlRefLocnItrnLim.EngMin = 1;
MotRefMdlRefLocnItrnLim.EngMax = 20;
MotRefMdlRefLocnItrnLim.Cardinality = 'Cmn';
MotRefMdlRefLocnItrnLim.CustomerVisible = false;
MotRefMdlRefLocnItrnLim.Online = false;
MotRefMdlRefLocnItrnLim.Impact = 'H';
MotRefMdlRefLocnItrnLim.TuningOwner = 'FDD';
MotRefMdlRefLocnItrnLim.GraphLink = {''};
MotRefMdlRefLocnItrnLim.Monotony = 'None';
MotRefMdlRefLocnItrnLim.MaxGrad = 999;
MotRefMdlRefLocnItrnLim.PortName = 'MotRefMdlRefLocnItrnLim';


MotRefMdlTqItrnLim = DataDict.Calibration;
MotRefMdlTqItrnLim.LongName = 'Torque Iteration Limit';
MotRefMdlTqItrnLim.Description = [...
  'Maximum number of iterations allowed to find peak torque location'];
MotRefMdlTqItrnLim.DocUnits = 'Cnt';
MotRefMdlTqItrnLim.EngDT = dt.u08;
MotRefMdlTqItrnLim.EngVal = 3;
MotRefMdlTqItrnLim.EngMin = 1;
MotRefMdlTqItrnLim.EngMax = 5;
MotRefMdlTqItrnLim.Cardinality = 'Cmn';
MotRefMdlTqItrnLim.CustomerVisible = false;
MotRefMdlTqItrnLim.Online = false;
MotRefMdlTqItrnLim.Impact = 'H';
MotRefMdlTqItrnLim.TuningOwner = 'FDD';
MotRefMdlTqItrnLim.GraphLink = {''};
MotRefMdlTqItrnLim.Monotony = 'None';
MotRefMdlTqItrnLim.MaxGrad = 999;
MotRefMdlTqItrnLim.PortName = 'MotRefMdlTqItrnLim';


MotRefMdlTqItrnTolr = DataDict.Calibration;
MotRefMdlTqItrnTolr.LongName = 'Torque Iteration Tolerance';
MotRefMdlTqItrnTolr.Description = [...
  'Interpolate Peak Torque Solver Tolerance'];
MotRefMdlTqItrnTolr.DocUnits = 'MotRad';
MotRefMdlTqItrnTolr.EngDT = dt.float32;
MotRefMdlTqItrnTolr.EngVal = 0.015;
MotRefMdlTqItrnTolr.EngMin = 0.001;
MotRefMdlTqItrnTolr.EngMax = 0.1;
MotRefMdlTqItrnTolr.Cardinality = 'Cmn';
MotRefMdlTqItrnTolr.CustomerVisible = false;
MotRefMdlTqItrnTolr.Online = false;
MotRefMdlTqItrnTolr.Impact = 'H';
MotRefMdlTqItrnTolr.TuningOwner = 'FDD';
MotRefMdlTqItrnTolr.GraphLink = {''};
MotRefMdlTqItrnTolr.Monotony = 'None';
MotRefMdlTqItrnTolr.MaxGrad = 999;
MotRefMdlTqItrnTolr.PortName = 'MotRefMdlTqItrnTolr';


MotRefMdlVltgModDynCmpEna = DataDict.Calibration;
MotRefMdlVltgModDynCmpEna.LongName = 'Voltage Mode Dynamic Compensation Enable';
MotRefMdlVltgModDynCmpEna.Description = [...
  'Flag to disable dynamic feedforward compensation'];
MotRefMdlVltgModDynCmpEna.DocUnits = 'Cnt';
MotRefMdlVltgModDynCmpEna.EngDT = dt.lgc;
MotRefMdlVltgModDynCmpEna.EngVal = 0;
MotRefMdlVltgModDynCmpEna.EngMin = 0;
MotRefMdlVltgModDynCmpEna.EngMax = 1;
MotRefMdlVltgModDynCmpEna.Cardinality = 'Cmn';
MotRefMdlVltgModDynCmpEna.CustomerVisible = false;
MotRefMdlVltgModDynCmpEna.Online = false;
MotRefMdlVltgModDynCmpEna.Impact = 'H';
MotRefMdlVltgModDynCmpEna.TuningOwner = 'FDD';
MotRefMdlVltgModDynCmpEna.GraphLink = {''};
MotRefMdlVltgModDynCmpEna.Monotony = 'None';
MotRefMdlVltgModDynCmpEna.MaxGrad = 999;
MotRefMdlVltgModDynCmpEna.PortName = 'MotRefMdlVltgModDynCmpEna';


MotRefMdlVltgOverRThdSca = DataDict.Calibration;
MotRefMdlVltgOverRThdSca.LongName = 'Voltage Over Resistance Threshold Scale';
MotRefMdlVltgOverRThdSca.Description = [...
  '	Voltage scale factor in Id boost function to change condition at whic' ...
  'h to boost Id'];
MotRefMdlVltgOverRThdSca.DocUnits = 'Uls';
MotRefMdlVltgOverRThdSca.EngDT = dt.float32;
MotRefMdlVltgOverRThdSca.EngVal = 0.25;
MotRefMdlVltgOverRThdSca.EngMin = 0;
MotRefMdlVltgOverRThdSca.EngMax = 1;
MotRefMdlVltgOverRThdSca.Cardinality = 'Cmn';
MotRefMdlVltgOverRThdSca.CustomerVisible = false;
MotRefMdlVltgOverRThdSca.Online = false;
MotRefMdlVltgOverRThdSca.Impact = 'H';
MotRefMdlVltgOverRThdSca.TuningOwner = 'FDD';
MotRefMdlVltgOverRThdSca.GraphLink = {''};
MotRefMdlVltgOverRThdSca.Monotony = 'None';
MotRefMdlVltgOverRThdSca.MaxGrad = 999;
MotRefMdlVltgOverRThdSca.PortName = 'MotRefMdlVltgOverRThdSca';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotRefMdlCurrDaxAtPeakTq = DataDict.Display;
dMotRefMdlCurrDaxAtPeakTq.LongName = 'D-Axis Current at Peak Torque';
dMotRefMdlCurrDaxAtPeakTq.Description = [...
  'Result of Find Peak Torque iterations.'];
dMotRefMdlCurrDaxAtPeakTq.DocUnits = 'Ampr';
dMotRefMdlCurrDaxAtPeakTq.EngDT = dt.float32;
dMotRefMdlCurrDaxAtPeakTq.EngMin = 0;
dMotRefMdlCurrDaxAtPeakTq.EngMax = 200;
dMotRefMdlCurrDaxAtPeakTq.InitRowCol = [1  1];


dMotRefMdlCurrDaxMin = DataDict.Display;
dMotRefMdlCurrDaxMin.LongName = 'Minimum D-Axis Current';
dMotRefMdlCurrDaxMin.Description = [...
  'Value of direct axis current that results in minimum motor current (Mi' ...
  'nimum copper loss). Found using an iterative parabolic interpolation.'];
dMotRefMdlCurrDaxMin.DocUnits = 'Ampr';
dMotRefMdlCurrDaxMin.EngDT = dt.float32;
dMotRefMdlCurrDaxMin.EngMin = 0;
dMotRefMdlCurrDaxMin.EngMax = 200;
dMotRefMdlCurrDaxMin.InitRowCol = [1  1];


dMotRefMdlCurrQaxMin = DataDict.Display;
dMotRefMdlCurrQaxMin.LongName = 'Minimum Q-Axis Current';
dMotRefMdlCurrQaxMin.Description = [...
  'Value of quadrature axis current that results in minimum motor current' ...
  ' (Minimum copper loss). Found using an iterative parabolic interpolati' ...
  'on.'];
dMotRefMdlCurrQaxMin.DocUnits = 'Ampr';
dMotRefMdlCurrQaxMin.EngDT = dt.float32;
dMotRefMdlCurrQaxMin.EngMin = -200;
dMotRefMdlCurrQaxMin.EngMax = 200;
dMotRefMdlCurrQaxMin.InitRowCol = [1  1];


dMotRefMdlCurrSqdMin = DataDict.Display;
dMotRefMdlCurrSqdMin.LongName = 'Minimum Squared Current';
dMotRefMdlCurrSqdMin.Description = [...
  'Minimum total squared current for minimum copper loss.'];
dMotRefMdlCurrSqdMin.DocUnits = 'AmprSqd';
dMotRefMdlCurrSqdMin.EngDT = dt.float32;
dMotRefMdlCurrSqdMin.EngMin = 0;
dMotRefMdlCurrSqdMin.EngMax = 40000;
dMotRefMdlCurrSqdMin.InitRowCol = [1  1];


dMotRefMdlInterCalcnCurrDaxMax = DataDict.Display;
dMotRefMdlInterCalcnCurrDaxMax.LongName = 'Intermediate Calculation Maximum D-Axis Current';
dMotRefMdlInterCalcnCurrDaxMax.Description = [...
  'Maximum direct axis current for direct axis flux linkage to be zero.'];
dMotRefMdlInterCalcnCurrDaxMax.DocUnits = 'Ampr';
dMotRefMdlInterCalcnCurrDaxMax.EngDT = dt.float32;
dMotRefMdlInterCalcnCurrDaxMax.EngMin = 0;
dMotRefMdlInterCalcnCurrDaxMax.EngMax = 200;
dMotRefMdlInterCalcnCurrDaxMax.InitRowCol = [1  1];


dMotRefMdlMinCurrNrItrn = DataDict.Display;
dMotRefMdlMinCurrNrItrn.LongName = 'Minimum Current Iteration Number';
dMotRefMdlMinCurrNrItrn.Description = [...
  'Numer of iterations used by solver to find value of direct axis curren' ...
  't that results in minimum motor current.'];
dMotRefMdlMinCurrNrItrn.DocUnits = 'Cnt';
dMotRefMdlMinCurrNrItrn.EngDT = dt.u08;
dMotRefMdlMinCurrNrItrn.EngMin = 0;
dMotRefMdlMinCurrNrItrn.EngMax = 255;
dMotRefMdlMinCurrNrItrn.InitRowCol = [1  1];


dMotRefMdlMotCurrDaxBoost = DataDict.Display;
dMotRefMdlMotCurrDaxBoost.LongName = 'Motor Current D-Axis Boost';
dMotRefMdlMotCurrDaxBoost.Description = [...
  'Boost amount added to base direct axis current command'];
dMotRefMdlMotCurrDaxBoost.DocUnits = 'Ampr';
dMotRefMdlMotCurrDaxBoost.EngDT = dt.float32;
dMotRefMdlMotCurrDaxBoost.EngMin = 0;
dMotRefMdlMotCurrDaxBoost.EngMax = 200;
dMotRefMdlMotCurrDaxBoost.InitRowCol = [1  1];


dMotRefMdlMotTqCmdLimd = DataDict.Display;
dMotRefMdlMotTqCmdLimd.LongName = 'Limited Motor Torque Command';
dMotRefMdlMotTqCmdLimd.Description = [...
  'The lesser of motor torque command input signal and the peak torque fo' ...
  'und by iteration.'];
dMotRefMdlMotTqCmdLimd.DocUnits = 'MotNwtMtr';
dMotRefMdlMotTqCmdLimd.EngDT = dt.float32;
dMotRefMdlMotTqCmdLimd.EngMin = -8.8;
dMotRefMdlMotTqCmdLimd.EngMax = 8.8;
dMotRefMdlMotTqCmdLimd.InitRowCol = [1  1];


dMotRefMdlMotVelFildFf = DataDict.Display;
dMotRefMdlMotVelFildFf.LongName = 'Filtered Feed Forward Motor Velocity';
dMotRefMdlMotVelFildFf.Description = [...
  'Motor velocity MRF after low-pass filtering.'];
dMotRefMdlMotVelFildFf.DocUnits = 'MotRadPerSec';
dMotRefMdlMotVelFildFf.EngDT = dt.float32;
dMotRefMdlMotVelFildFf.EngMin = -1350;
dMotRefMdlMotVelFildFf.EngMax = 1350;
dMotRefMdlMotVelFildFf.InitRowCol = [1  1];


dMotRefMdlMotVltgDaxFfDyn = DataDict.Display;
dMotRefMdlMotVltgDaxFfDyn.LongName = 'Dynamic Feedforward Motor D-Axis Voltage Dynamic';
dMotRefMdlMotVltgDaxFfDyn.Description = [...
  'After summation of static term and dynamic term.'];
dMotRefMdlMotVltgDaxFfDyn.DocUnits = 'Volt';
dMotRefMdlMotVltgDaxFfDyn.EngDT = dt.float32;
dMotRefMdlMotVltgDaxFfDyn.EngMin = -26.5;
dMotRefMdlMotVltgDaxFfDyn.EngMax = 26.5;
dMotRefMdlMotVltgDaxFfDyn.InitRowCol = [1  1];


dMotRefMdlMotVltgDaxFfDynTerm = DataDict.Display;
dMotRefMdlMotVltgDaxFfDynTerm.LongName = 'Dynamic Feedforward Motor D-Axis Voltage Dynamic Term';
dMotRefMdlMotVltgDaxFfDynTerm.Description = 'Before summation with static term.';
dMotRefMdlMotVltgDaxFfDynTerm.DocUnits = 'Volt';
dMotRefMdlMotVltgDaxFfDynTerm.EngDT = dt.float32;
dMotRefMdlMotVltgDaxFfDynTerm.EngMin = -26.5;
dMotRefMdlMotVltgDaxFfDynTerm.EngMax = 26.5;
dMotRefMdlMotVltgDaxFfDynTerm.InitRowCol = [1  1];


dMotRefMdlMotVltgDaxFfStat = DataDict.Display;
dMotRefMdlMotVltgDaxFfStat.LongName = 'Feedforward Static D-Axis Voltage';
dMotRefMdlMotVltgDaxFfStat.Description = [...
  'Display variable for feedforward static d-axis voltage'];
dMotRefMdlMotVltgDaxFfStat.DocUnits = 'Volt';
dMotRefMdlMotVltgDaxFfStat.EngDT = dt.float32;
dMotRefMdlMotVltgDaxFfStat.EngMin = -26.5;
dMotRefMdlMotVltgDaxFfStat.EngMax = 26.5;
dMotRefMdlMotVltgDaxFfStat.InitRowCol = [1  1];


dMotRefMdlMotVltgQaxFfDyn = DataDict.Display;
dMotRefMdlMotVltgQaxFfDyn.LongName = 'Dynamic Feedforward Motor Q-Axis Voltage Dynamic';
dMotRefMdlMotVltgQaxFfDyn.Description = [...
  'After summation of static term and dynamic term.'];
dMotRefMdlMotVltgQaxFfDyn.DocUnits = 'Volt';
dMotRefMdlMotVltgQaxFfDyn.EngDT = dt.float32;
dMotRefMdlMotVltgQaxFfDyn.EngMin = -26.5;
dMotRefMdlMotVltgQaxFfDyn.EngMax = 26.5;
dMotRefMdlMotVltgQaxFfDyn.InitRowCol = [1  1];


dMotRefMdlMotVltgQaxFfDynTerm = DataDict.Display;
dMotRefMdlMotVltgQaxFfDynTerm.LongName = 'Dynamic Feedforward Motor Q-Axis Voltage Dynamic Term';
dMotRefMdlMotVltgQaxFfDynTerm.Description = 'Before summation with static term.';
dMotRefMdlMotVltgQaxFfDynTerm.DocUnits = 'Volt';
dMotRefMdlMotVltgQaxFfDynTerm.EngDT = dt.float32;
dMotRefMdlMotVltgQaxFfDynTerm.EngMin = -26.5;
dMotRefMdlMotVltgQaxFfDynTerm.EngMax = 26.5;
dMotRefMdlMotVltgQaxFfDynTerm.InitRowCol = [1  1];


dMotRefMdlMotVltgQaxFfStat = DataDict.Display;
dMotRefMdlMotVltgQaxFfStat.LongName = 'Feedforward Static Q-Axis Voltage';
dMotRefMdlMotVltgQaxFfStat.Description = [...
  'Display variable for feedforward static q-axis voltage'];
dMotRefMdlMotVltgQaxFfStat.DocUnits = 'Volt';
dMotRefMdlMotVltgQaxFfStat.EngDT = dt.float32;
dMotRefMdlMotVltgQaxFfStat.EngMin = -26.5;
dMotRefMdlMotVltgQaxFfStat.EngMax = 26.5;
dMotRefMdlMotVltgQaxFfStat.InitRowCol = [1  1];


dMotRefMdlPeakTq = DataDict.Display;
dMotRefMdlPeakTq.LongName = 'Peak Torque';
dMotRefMdlPeakTq.Description = [...
  'Result of Find Peak Torque iterations.'];
dMotRefMdlPeakTq.DocUnits = 'MotNwtMtr';
dMotRefMdlPeakTq.EngDT = dt.float32;
dMotRefMdlPeakTq.EngMin = -8.8;
dMotRefMdlPeakTq.EngMax = 8.8;
dMotRefMdlPeakTq.InitRowCol = [1  1];


dMotRefMdlPeakTqNrItrn = DataDict.Display;
dMotRefMdlPeakTqNrItrn.LongName = 'Peak Torque Number of Iterations';
dMotRefMdlPeakTqNrItrn.Description = [...
  'Number of iterations used by solver when finding peak torque.'];
dMotRefMdlPeakTqNrItrn.DocUnits = 'Cnt';
dMotRefMdlPeakTqNrItrn.EngDT = dt.u08;
dMotRefMdlPeakTqNrItrn.EngMin = 0;
dMotRefMdlPeakTqNrItrn.EngMax = 255;
dMotRefMdlPeakTqNrItrn.InitRowCol = [1  1];


dMotRefMdlPhaAdvAtPeakTq = DataDict.Display;
dMotRefMdlPhaAdvAtPeakTq.LongName = 'Phase Advance at Peak Torque';
dMotRefMdlPhaAdvAtPeakTq.Description = [...
  'Result of Find Peak Torque iterations.'];
dMotRefMdlPhaAdvAtPeakTq.DocUnits = 'MotRad';
dMotRefMdlPhaAdvAtPeakTq.EngDT = dt.float32;
dMotRefMdlPhaAdvAtPeakTq.EngMin = 0;
dMotRefMdlPhaAdvAtPeakTq.EngMax = 6.2832;
dMotRefMdlPhaAdvAtPeakTq.InitRowCol = [1  1];


dMotRefMdlReacncDaxOverR = DataDict.Display;
dMotRefMdlReacncDaxOverR.LongName = 'D-Axis Reactance Over Resistance';
dMotRefMdlReacncDaxOverR.Description = [...
  'Motor direct axis reactance divided by resistance'];
dMotRefMdlReacncDaxOverR.DocUnits = 'Uls';
dMotRefMdlReacncDaxOverR.EngDT = dt.float32;
dMotRefMdlReacncDaxOverR.EngMin = -100;
dMotRefMdlReacncDaxOverR.EngMax = 100;
dMotRefMdlReacncDaxOverR.InitRowCol = [1  1];


dMotRefMdlReacncQaxOverR = DataDict.Display;
dMotRefMdlReacncQaxOverR.LongName = 'Q-Axis Reactance Over Resistance';
dMotRefMdlReacncQaxOverR.Description = [...
  'Motor quadrature axis reactance divided by resistance'];
dMotRefMdlReacncQaxOverR.DocUnits = 'Uls';
dMotRefMdlReacncQaxOverR.EngDT = dt.float32;
dMotRefMdlReacncQaxOverR.EngMin = -100;
dMotRefMdlReacncQaxOverR.EngMax = 100;
dMotRefMdlReacncQaxOverR.InitRowCol = [1  1];


dMotRefMdlRelncTqCoeff = DataDict.Display;
dMotRefMdlRelncTqCoeff.LongName = 'Reluctance Torque Coefficient';
dMotRefMdlRelncTqCoeff.Description = [...
  'A function of motor saliency and pole-pairs that is multiplied by the ' ...
  'direct and quadrature currents to compute the reluctance torque.  Max ' ...
  'value based on 12 poles / 2 * (max Ld - min Lq).'];
dMotRefMdlRelncTqCoeff.DocUnits = 'Henry';
dMotRefMdlRelncTqCoeff.EngDT = dt.float32;
dMotRefMdlRelncTqCoeff.EngMin = 0;
dMotRefMdlRelncTqCoeff.EngMax = 0.0023;
dMotRefMdlRelncTqCoeff.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CosDelta = DataDict.PIM;
CosDelta.LongName = 'Cosine of Delta';
CosDelta.Description = [...
  'Cosine of angles used in parabolic interpolations'];
CosDelta.DocUnits = 'Uls';
CosDelta.EngDT = dt.float32;
CosDelta.EngMin = -1;
CosDelta.EngMax = 1;
CosDelta.InitRowCol = [1  8];


MotCurrDaxCmdPrev = DataDict.PIM;
MotCurrDaxCmdPrev.LongName = 'Previous Motor Current D-Axis Command';
MotCurrDaxCmdPrev.Description = [...
  'Previous value of output, stored across execution cycles.'];
MotCurrDaxCmdPrev.DocUnits = 'Ampr';
MotCurrDaxCmdPrev.EngDT = dt.float32;
MotCurrDaxCmdPrev.EngMin = 0;
MotCurrDaxCmdPrev.EngMax = 200;
MotCurrDaxCmdPrev.InitRowCol = [1  1];


MotCurrQaxCmdPrev = DataDict.PIM;
MotCurrQaxCmdPrev.LongName = 'Previous Motor Current Q-Axis Command';
MotCurrQaxCmdPrev.Description = [...
  'Previous value of output, stored across execution cycles.'];
MotCurrQaxCmdPrev.DocUnits = 'Ampr';
MotCurrQaxCmdPrev.EngDT = dt.float32;
MotCurrQaxCmdPrev.EngMin = -200;
MotCurrQaxCmdPrev.EngMax = 200;
MotCurrQaxCmdPrev.InitRowCol = [1  1];


MotVelLpFil = DataDict.PIM;
MotVelLpFil.LongName = 'Motor Velocity Low-Pass Filter';
MotVelLpFil.Description = [...
  'Structure containing gain and state variable.'];
MotVelLpFil.DocUnits = 'Cnt';
MotVelLpFil.EngDT = struct.FilLpRec1;
MotVelLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotVelLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotVelLpFil.InitRowCol = [1  1];


SinDelta = DataDict.PIM;
SinDelta.LongName = 'Sine of Delta';
SinDelta.Description = [...
  'Sine of angles used in parabolic interpolation'];
SinDelta.DocUnits = 'Uls';
SinDelta.EngDT = dt.float32;
SinDelta.EngMin = -1;
SinDelta.EngMax = 1;
SinDelta.InitRowCol = [1  8];


VltgDaxFfTermPrev = DataDict.PIM;
VltgDaxFfTermPrev.LongName = 'Previous D-Axis Feedforward Voltage Term';
VltgDaxFfTermPrev.Description = [...
  'Previous value of output, stored across execution cycles.'];
VltgDaxFfTermPrev.DocUnits = 'Volt';
VltgDaxFfTermPrev.EngDT = dt.float32;
VltgDaxFfTermPrev.EngMin = -26.5;
VltgDaxFfTermPrev.EngMax = 26.5;
VltgDaxFfTermPrev.InitRowCol = [1  1];


VltgQaxFfTermPrev = DataDict.PIM;
VltgQaxFfTermPrev.LongName = 'Previous Q-Axis Feedforward Voltage Term';
VltgQaxFfTermPrev.Description = [...
  'Previous value of output, stored across execution cycles.'];
VltgQaxFfTermPrev.DocUnits = 'Volt';
VltgQaxFfTermPrev.EngDT = dt.float32;
VltgQaxFfTermPrev.EngMin = -26.5;
VltgQaxFfTermPrev.EngMax = 26.5;
VltgQaxFfTermPrev.InitRowCol = [1  1];



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


ARCHGLBPRM_2OVERSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.LongName = '2 Over Square Root of 3';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Description = '2 divided by (Square root of 3)';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngVal = 1.1547005;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_4OVERSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.LongName = '4 Over Square Root of 3';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.Description = '4 divided by (Square root of 3)';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_4OVERSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.EngVal = 2.309401;
ARCHGLBPRM_4OVERSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_5PIOVER4_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_5PIOVER4_ULS_F32.LongName = '5 Pi Over 4';
ARCHGLBPRM_5PIOVER4_ULS_F32.Description = '1.25 x PI';
ARCHGLBPRM_5PIOVER4_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_5PIOVER4_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_5PIOVER4_ULS_F32.EngVal = 3.926990817;
ARCHGLBPRM_5PIOVER4_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


ARCHGLBPRM_HALFSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_HALFSQRT3_ULS_F32.LongName = 'Half Square Root of 3';
ARCHGLBPRM_HALFSQRT3_ULS_F32.Description = '(Square root of 3) divided by 2';
ARCHGLBPRM_HALFSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_HALFSQRT3_ULS_F32.EngVal = 0.8660254;
ARCHGLBPRM_HALFSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PI_ULS_F32.LongName = 'Pi';
ARCHGLBPRM_PI_ULS_F32.Description = 'Value of Pi';
ARCHGLBPRM_PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PI_ULS_F32.EngVal = 3.1415927;
ARCHGLBPRM_PI_ULS_F32.Define = 'Global';


BRDGVLTGHILIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGHILIM_VOLT_F32.LongName = 'Motor Voltage High Limit';
BRDGVLTGHILIM_VOLT_F32.Description = [...
  'Defines Bridge voltage high limit saturation.'];
BRDGVLTGHILIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGHILIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGHILIM_VOLT_F32.EngVal = 26.5;
BRDGVLTGHILIM_VOLT_F32.Define = 'Local';


BRDGVLTGLOLIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGLOLIM_VOLT_F32.LongName = 'Bridge Voltage Low Limit';
BRDGVLTGLOLIM_VOLT_F32.Description = 'Used for input signal saturation.';
BRDGVLTGLOLIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGLOLIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGLOLIM_VOLT_F32.EngVal = 6;
BRDGVLTGLOLIM_VOLT_F32.Define = 'Local';


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


MOTBACKEMFVLTGHILIM_VOLT_F32 = DataDict.Constant;
MOTBACKEMFVLTGHILIM_VOLT_F32.LongName = 'Motor Back EMF Voltage High Limit';
MOTBACKEMFVLTGHILIM_VOLT_F32.Description = [...
  'Limit on upper value of motor back EMF'];
MOTBACKEMFVLTGHILIM_VOLT_F32.DocUnits = 'Volt';
MOTBACKEMFVLTGHILIM_VOLT_F32.EngDT = dt.float32;
MOTBACKEMFVLTGHILIM_VOLT_F32.EngVal = 101.25;
MOTBACKEMFVLTGHILIM_VOLT_F32.Define = 'Local';


MOTBACKEMFVLTGLOLIM_VOLT_F32 = DataDict.Constant;
MOTBACKEMFVLTGLOLIM_VOLT_F32.LongName = 'Motor Back EMF Voltage Low Limit';
MOTBACKEMFVLTGLOLIM_VOLT_F32.Description = [...
  'Limit on lower value of motor back EMF'];
MOTBACKEMFVLTGLOLIM_VOLT_F32.DocUnits = 'Volt';
MOTBACKEMFVLTGLOLIM_VOLT_F32.EngDT = dt.float32;
MOTBACKEMFVLTGLOLIM_VOLT_F32.EngVal = -101.25;
MOTBACKEMFVLTGLOLIM_VOLT_F32.Define = 'Local';


MOTCURRAGHILIM_MOTRAD_F32 = DataDict.Constant;
MOTCURRAGHILIM_MOTRAD_F32.LongName = 'Motor Current Angle High Limit';
MOTCURRAGHILIM_MOTRAD_F32.Description = [...
  'Upper saturation limit applied to output Motor Current Angle'];
MOTCURRAGHILIM_MOTRAD_F32.DocUnits = 'MotRad';
MOTCURRAGHILIM_MOTRAD_F32.EngDT = dt.float32;
MOTCURRAGHILIM_MOTRAD_F32.EngVal = 6.2832;
MOTCURRAGHILIM_MOTRAD_F32.Define = 'Local';


MOTCURRHILIM_AMPR_F32 = DataDict.Constant;
MOTCURRHILIM_AMPR_F32.LongName = 'Motor Current High Limit';
MOTCURRHILIM_AMPR_F32.Description = [...
  'Upper saturation limit applied to output motor current Dax and Qax'];
MOTCURRHILIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRHILIM_AMPR_F32.EngDT = dt.float32;
MOTCURRHILIM_AMPR_F32.EngVal = 200;
MOTCURRHILIM_AMPR_F32.Define = 'Local';


MOTCURRLOLIM_AMPR_F32 = DataDict.Constant;
MOTCURRLOLIM_AMPR_F32.LongName = 'Motor Current Low Limit';
MOTCURRLOLIM_AMPR_F32.Description = [...
  'Lower saturation limit applied to output motor current Dax and Qax'];
MOTCURRLOLIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRLOLIM_AMPR_F32.EngDT = dt.float32;
MOTCURRLOLIM_AMPR_F32.EngVal = -200;
MOTCURRLOLIM_AMPR_F32.Define = 'Local';


MOTINDUHILIM_HENRY_F32 = DataDict.Constant;
MOTINDUHILIM_HENRY_F32.LongName = 'Motor Inductance High Limit';
MOTINDUHILIM_HENRY_F32.Description = [...
  'Defensive programming saturation value applied to motor inductance'];
MOTINDUHILIM_HENRY_F32.DocUnits = 'Henry';
MOTINDUHILIM_HENRY_F32.EngDT = dt.float32;
MOTINDUHILIM_HENRY_F32.EngVal = 0.00041;
MOTINDUHILIM_HENRY_F32.Define = 'Local';


MOTINDULOLIM_HENRY_F32 = DataDict.Constant;
MOTINDULOLIM_HENRY_F32.LongName = 'Motor Inductance Low Limit';
MOTINDULOLIM_HENRY_F32.Description = [...
  'Defensive programming saturation value applied to motor inductance'];
MOTINDULOLIM_HENRY_F32.DocUnits = 'Henry';
MOTINDULOLIM_HENRY_F32.EngDT = dt.float32;
MOTINDULOLIM_HENRY_F32.EngVal = 3e-05;
MOTINDULOLIM_HENRY_F32.Define = 'Local';


MOTREACNCHILIM_OHM_F32 = DataDict.Constant;
MOTREACNCHILIM_OHM_F32.LongName = 'Motor Reactance High Limit';
MOTREACNCHILIM_OHM_F32.Description = [...
  'Upper saturation limit applied to output motor inductance dax and qax'];
MOTREACNCHILIM_OHM_F32.DocUnits = 'Ohm';
MOTREACNCHILIM_OHM_F32.EngDT = dt.float32;
MOTREACNCHILIM_OHM_F32.EngVal = 2.87607;
MOTREACNCHILIM_OHM_F32.Define = 'Local';


MOTREACNCLOLIM_OHM_F32 = DataDict.Constant;
MOTREACNCLOLIM_OHM_F32.LongName = 'Motor Reactance Low Limit';
MOTREACNCLOLIM_OHM_F32.Description = [...
  'Lower saturation limit applied to output motor inductance dax and qax'];
MOTREACNCLOLIM_OHM_F32.DocUnits = 'Ohm';
MOTREACNCLOLIM_OHM_F32.EngDT = dt.float32;
MOTREACNCLOLIM_OHM_F32.EngVal = -2.87607;
MOTREACNCLOLIM_OHM_F32.Define = 'Local';


MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32 = DataDict.Constant;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.LongName = 'Inverter Deadtime Bridge Voltage Scale High Limit';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.Description = [...
  'Defensive programming saturation value applied to calibration.'];
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.DocUnits = 'Uls';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.EngDT = dt.float32;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.EngVal = 1;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.Define = 'Global';


MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32 = DataDict.Constant;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.LongName = 'Inverter Deadtime Bridge Voltage Scale Low Limit';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.Description = [...
  'Defensive programming saturation value applied to calibration.'];
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.DocUnits = 'Uls';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.EngDT = dt.float32;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.EngVal = 0.98;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.Define = 'Global';


MOTRHILIM_OHM_F32 = DataDict.Constant;
MOTRHILIM_OHM_F32.LongName = 'Motor Resistance High Limit';
MOTRHILIM_OHM_F32.Description = [...
  'Defensive programming saturation value applied to estimated motor resi' ...
  'stance'];
MOTRHILIM_OHM_F32.DocUnits = 'Ohm';
MOTRHILIM_OHM_F32.EngDT = dt.float32;
MOTRHILIM_OHM_F32.EngVal = 0.125;
MOTRHILIM_OHM_F32.Define = 'Local';


MOTRLOLIM_OHM_F32 = DataDict.Constant;
MOTRLOLIM_OHM_F32.LongName = 'Motor Resistance Low Limit';
MOTRLOLIM_OHM_F32.Description = [...
  'Defensive programming saturation value applied to estimated motor resi' ...
  'stance input signal.  Necessary for divide-by-zero protection.'];
MOTRLOLIM_OHM_F32.DocUnits = 'Ohm';
MOTRLOLIM_OHM_F32.EngDT = dt.float32;
MOTRLOLIM_OHM_F32.EngVal = 0.005;
MOTRLOLIM_OHM_F32.Define = 'Local';


MOTVELMRFHILIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELMRFHILIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity Mrf High Limit';
MOTVELMRFHILIM_MOTRADPERSEC_F32.Description = [...
  'High saturation limit applied to Motor Velocity Mrf'];
MOTVELMRFHILIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELMRFHILIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELMRFHILIM_MOTRADPERSEC_F32.EngVal = 1350;
MOTVELMRFHILIM_MOTRADPERSEC_F32.Define = 'Local';


MOTVELMRFLOLIM_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELMRFLOLIM_MOTRADPERSEC_F32.LongName = 'Motor Velocity Mrf Low Limit';
MOTVELMRFLOLIM_MOTRADPERSEC_F32.Description = [...
  'Low saturation limit applied to Motor Velocity Mrf'];
MOTVELMRFLOLIM_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELMRFLOLIM_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELMRFLOLIM_MOTRADPERSEC_F32.EngVal = -1350;
MOTVELMRFLOLIM_MOTRADPERSEC_F32.Define = 'Local';


MOTVLTGDAXFFHILIM_VOLT_F32 = DataDict.Constant;
MOTVLTGDAXFFHILIM_VOLT_F32.LongName = 'Motor Voltage Dax High Limit';
MOTVLTGDAXFFHILIM_VOLT_F32.Description = [...
  'Upper saturation limit applied to outputs motor feedforward voltage da' ...
  'x'];
MOTVLTGDAXFFHILIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGDAXFFHILIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGDAXFFHILIM_VOLT_F32.EngVal = 26.5;
MOTVLTGDAXFFHILIM_VOLT_F32.Define = 'Local';


MOTVLTGDAXFFLOLIM_VOLT_F32 = DataDict.Constant;
MOTVLTGDAXFFLOLIM_VOLT_F32.LongName = 'Motor Voltage Dax Low Limit';
MOTVLTGDAXFFLOLIM_VOLT_F32.Description = [...
  'Lower saturation limit applied to outputs motor feedforward voltage da' ...
  'x'];
MOTVLTGDAXFFLOLIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGDAXFFLOLIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGDAXFFLOLIM_VOLT_F32.EngVal = -26.5;
MOTVLTGDAXFFLOLIM_VOLT_F32.Define = 'Local';


MOTVLTGQAXFFHILIM_VOLT_F32 = DataDict.Constant;
MOTVLTGQAXFFHILIM_VOLT_F32.LongName = 'Motor Voltage Qax High Limit';
MOTVLTGQAXFFHILIM_VOLT_F32.Description = [...
  'Upper saturation limit applied to outputs motor feedforward voltage qa' ...
  'x'];
MOTVLTGQAXFFHILIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGQAXFFHILIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGQAXFFHILIM_VOLT_F32.EngVal = 101.25;
MOTVLTGQAXFFHILIM_VOLT_F32.Define = 'Local';


MOTVLTGQAXFFLOLIM_VOLT_F32 = DataDict.Constant;
MOTVLTGQAXFFLOLIM_VOLT_F32.LongName = 'Motor Voltage Qax Low Limit';
MOTVLTGQAXFFLOLIM_VOLT_F32.Description = [...
  'Lower saturation limit applied to outputs motor feedforward voltage qa' ...
  'x'];
MOTVLTGQAXFFLOLIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGQAXFFLOLIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGQAXFFLOLIM_VOLT_F32.EngVal = -101.25;
MOTVLTGQAXFFLOLIM_VOLT_F32.Define = 'Local';


MOTVLTGSATNINDFFHILIM_ULS_F32 = DataDict.Constant;
MOTVLTGSATNINDFFHILIM_ULS_F32.LongName = 'Motor Voltage Saturation Index Feedfoward High Limit';
MOTVLTGSATNINDFFHILIM_ULS_F32.Description = [...
  'The output, MotVltgSatnIndFf, is limited by this value.'];
MOTVLTGSATNINDFFHILIM_ULS_F32.DocUnits = 'Uls';
MOTVLTGSATNINDFFHILIM_ULS_F32.EngDT = dt.float32;
MOTVLTGSATNINDFFHILIM_ULS_F32.EngVal = 1;
MOTVLTGSATNINDFFHILIM_ULS_F32.Define = 'Local';


MOTVLTGSATNINDFFLOLIM_ULS_F32 = DataDict.Constant;
MOTVLTGSATNINDFFLOLIM_ULS_F32.LongName = 'Motor Voltage Saturation Index Feedfoward Low Limit';
MOTVLTGSATNINDFFLOLIM_ULS_F32.Description = [...
  'The output, MotVltgSatnIndFf, is limited by this value.'];
MOTVLTGSATNINDFFLOLIM_ULS_F32.DocUnits = 'Uls';
MOTVLTGSATNINDFFLOLIM_ULS_F32.EngDT = dt.float32;
MOTVLTGSATNINDFFLOLIM_ULS_F32.EngVal = 0;
MOTVLTGSATNINDFFLOLIM_ULS_F32.Define = 'Local';


MOTVLTGSTATHILIM_VOLT_F32 = DataDict.Constant;
MOTVLTGSTATHILIM_VOLT_F32.LongName = 'Motor Voltage Stat High Limit';
MOTVLTGSTATHILIM_VOLT_F32.Description = [...
  'Lower saturation limit applied to outputs motor static feedforward vol' ...
  'tage qax and dax'];
MOTVLTGSTATHILIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGSTATHILIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGSTATHILIM_VOLT_F32.EngVal = 26.5;
MOTVLTGSTATHILIM_VOLT_F32.Define = 'Local';


MOTVLTGSTATLOLIM_VOLT_F32 = DataDict.Constant;
MOTVLTGSTATLOLIM_VOLT_F32.LongName = 'Motor Voltage Stat low Limit';
MOTVLTGSTATLOLIM_VOLT_F32.Description = [...
  'Lower saturation limit applied to outputs motor static feedforward vol' ...
  'tage qax and dax'];
MOTVLTGSTATLOLIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGSTATLOLIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGSTATLOLIM_VOLT_F32.EngVal = -26.5;
MOTVLTGSTATLOLIM_VOLT_F32.Define = 'Local';


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
