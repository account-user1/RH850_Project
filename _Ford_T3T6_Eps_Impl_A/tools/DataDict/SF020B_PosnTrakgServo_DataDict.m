%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 16-Mar-2017 14:53:27       %
%                                  Created with tool release: 2.54.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF020B = DataDict.FDD;
SF020B.Version = '1.1.X';
SF020B.LongName = 'Position Tracking Servo';
SF020B.ShoName  = 'PosnTrakgServo';
SF020B.DesignASIL = 'D';
SF020B.Description = [...
  'This function provides the ability for the EPS system to track a posit' ...
  'ion input command.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PosnTrakgServoInit1 = DataDict.Runnable;
PosnTrakgServoInit1.Context = 'Rte';
PosnTrakgServoInit1.TimeStep = 0;
PosnTrakgServoInit1.Description = 'Init runnable';

PosnTrakgServoPer1 = DataDict.Runnable;
PosnTrakgServoPer1.Context = 'Rte';
PosnTrakgServoPer1.TimeStep = 0.002;
PosnTrakgServoPer1.Description = 'Periodic1 Runnable at 0.002sec ';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Measurement of handwheel position';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'PosnTrakgServoPer1'};
HwAg.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Measurement of handwheel torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'PosnTrakgServoPer1'};
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
MotVelCrf.ReadIn = {'PosnTrakgServoPer1'};
MotVelCrf.ReadType = 'Rte';


PosnServoEna = DataDict.IpSignal;
PosnServoEna.LongName = 'Position Servo Enable';
PosnServoEna.Description = [...
  'Position tracking servo mode active status flag'];
PosnServoEna.DocUnits = 'Cnt';
PosnServoEna.EngDT = dt.lgc;
PosnServoEna.EngInit = 0;
PosnServoEna.EngMin = 0;
PosnServoEna.EngMax = 1;
PosnServoEna.ReadIn = {'PosnTrakgServoPer1'};
PosnServoEna.ReadType = 'Rte';


PosnServoHwAg = DataDict.IpSignal;
PosnServoHwAg.LongName = 'Position Servo Handwheel Angle';
PosnServoHwAg.Description = 'Requested handwheel angle';
PosnServoHwAg.DocUnits = 'HwDeg';
PosnServoHwAg.EngDT = dt.float32;
PosnServoHwAg.EngInit = 0;
PosnServoHwAg.EngMin = -1440;
PosnServoHwAg.EngMax = 1440;
PosnServoHwAg.ReadIn = {'PosnTrakgServoPer1'};
PosnServoHwAg.ReadType = 'Rte';


PosnServoHwVel = DataDict.IpSignal;
PosnServoHwVel.LongName = 'Position Servo Handwheel Velocity';
PosnServoHwVel.Description = 'Requested handwheel velocity';
PosnServoHwVel.DocUnits = 'HwDegPerSec';
PosnServoHwVel.EngDT = dt.float32;
PosnServoHwVel.EngInit = 0;
PosnServoHwVel.EngMin = -2406.4;
PosnServoHwVel.EngMax = 2406.4;
PosnServoHwVel.ReadIn = {'PosnTrakgServoPer1'};
PosnServoHwVel.ReadType = 'Rte';


PosnServoIntgtrOffs = DataDict.IpSignal;
PosnServoIntgtrOffs.LongName = 'Position Servo Integrator Offset';
PosnServoIntgtrOffs.Description = [...
  'The integrator state offset between dual controller to be corrected '];
PosnServoIntgtrOffs.DocUnits = 'HwNwtMtr';
PosnServoIntgtrOffs.EngDT = dt.float32;
PosnServoIntgtrOffs.EngInit = 0;
PosnServoIntgtrOffs.EngMin = -32767.5;
PosnServoIntgtrOffs.EngMax = 32767.5;
PosnServoIntgtrOffs.ReadIn = {'PosnTrakgServoPer1'};
PosnServoIntgtrOffs.ReadType = 'Rte';


PosnTrakgArbnFltMtgtnEna = DataDict.IpSignal;
PosnTrakgArbnFltMtgtnEna.LongName = 'Position Tracking Arbitration Fault Mitigation Enable';
PosnTrakgArbnFltMtgtnEna.Description = [...
  'Boolean to set position tracking Outputs to Zero'];
PosnTrakgArbnFltMtgtnEna.DocUnits = 'Cnt';
PosnTrakgArbnFltMtgtnEna.EngDT = dt.lgc;
PosnTrakgArbnFltMtgtnEna.EngInit = 0;
PosnTrakgArbnFltMtgtnEna.EngMin = 0;
PosnTrakgArbnFltMtgtnEna.EngMax = 1;
PosnTrakgArbnFltMtgtnEna.ReadIn = {'PosnTrakgServoPer1'};
PosnTrakgArbnFltMtgtnEna.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle speed signal';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'PosnTrakgServoPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PosnServoCmd = DataDict.OpSignal;
PosnServoCmd.LongName = 'Position Servo Command';
PosnServoCmd.Description = [...
  'Motor torque command requested by position servo'];
PosnServoCmd.DocUnits = 'MotNwtMtr';
PosnServoCmd.SwcShoName = 'PosnTrakgServo';
PosnServoCmd.EngDT = dt.float32;
PosnServoCmd.EngInit = 0;
PosnServoCmd.EngMin = -8.8;
PosnServoCmd.EngMax = 8.8;
PosnServoCmd.TestTolerance = 0.000488281;
PosnServoCmd.WrittenIn = {'PosnTrakgServoPer1'};
PosnServoCmd.WriteType = 'Rte';


PosnServoIntgtrSt = DataDict.OpSignal;
PosnServoIntgtrSt.LongName = 'Position Servo Integrator State';
PosnServoIntgtrSt.Description = 'Integrator state value';
PosnServoIntgtrSt.DocUnits = 'HwNwtMtr';
PosnServoIntgtrSt.SwcShoName = 'PosnTrakgServo';
PosnServoIntgtrSt.EngDT = dt.float32;
PosnServoIntgtrSt.EngInit = 0;
PosnServoIntgtrSt.EngMin = -32767.5;
PosnServoIntgtrSt.EngMax = 32767.5;
PosnServoIntgtrSt.TestTolerance = 0.000488281;
PosnServoIntgtrSt.WrittenIn = {'PosnTrakgServoPer1'};
PosnServoIntgtrSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq = DataDict.Calibration;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.LongName = 'Arbitration Fault Mitigation Lowpass Filter Cut Off Frequency';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.Description = [...
  'Lowpass filter cutoff frequency used to calculate the position servo c' ...
  'ommand when arbitration fault mitigation is enabled'];
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.DocUnits = 'Hz';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.EngDT = dt.float32;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.EngVal = 1;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.EngMin = 0.1;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.EngMax = 250;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.Cardinality = 'Inin';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.CustomerVisible = false;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.Online = false;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.Impact = 'H';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.TuningOwner = 'CSE';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.GraphLink = {''};
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.Monotony = 'None';
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.MaxGrad = 249.9;
PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq.PortName = 'PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq';


PosnTrakgServoEnaBlndFacTblX = DataDict.Calibration;
PosnTrakgServoEnaBlndFacTblX.LongName = 'Enable Blend Factor Table X';
PosnTrakgServoEnaBlndFacTblX.Description = [...
  'X table for enable blending factor table'];
PosnTrakgServoEnaBlndFacTblX.DocUnits = 'Sec';
PosnTrakgServoEnaBlndFacTblX.EngDT = dt.u8p8;
PosnTrakgServoEnaBlndFacTblX.EngVal =  ...
   [0              0.1              0.2              0.3              0.5                1                2                3                4               10];
PosnTrakgServoEnaBlndFacTblX.EngMin = 0;
PosnTrakgServoEnaBlndFacTblX.EngMax = 20;
PosnTrakgServoEnaBlndFacTblX.Cardinality = 'Inin';
PosnTrakgServoEnaBlndFacTblX.CustomerVisible = false;
PosnTrakgServoEnaBlndFacTblX.Online = true;
PosnTrakgServoEnaBlndFacTblX.Impact = 'H';
PosnTrakgServoEnaBlndFacTblX.TuningOwner = 'CSE';
PosnTrakgServoEnaBlndFacTblX.GraphLink = {''};
PosnTrakgServoEnaBlndFacTblX.Monotony = 'Strictly_Increasing';
PosnTrakgServoEnaBlndFacTblX.MaxGrad = 20;
PosnTrakgServoEnaBlndFacTblX.PortName = 'PosnTrakgServoEnaBlndFacTblX';


PosnTrakgServoEnaBlndFacTblY = DataDict.Calibration;
PosnTrakgServoEnaBlndFacTblY.LongName = 'Enable Blend Factor Table Y';
PosnTrakgServoEnaBlndFacTblY.Description = [...
  'Y table for enable blending factor table'];
PosnTrakgServoEnaBlndFacTblY.DocUnits = 'Uls';
PosnTrakgServoEnaBlndFacTblY.EngDT = dt.u2p14;
PosnTrakgServoEnaBlndFacTblY.EngVal =  ...
   [0             0.01             0.02             0.05              0.1              0.2              0.5              0.7                1                1];
PosnTrakgServoEnaBlndFacTblY.EngMin = 0;
PosnTrakgServoEnaBlndFacTblY.EngMax = 1;
PosnTrakgServoEnaBlndFacTblY.Cardinality = 'Inin';
PosnTrakgServoEnaBlndFacTblY.CustomerVisible = false;
PosnTrakgServoEnaBlndFacTblY.Online = true;
PosnTrakgServoEnaBlndFacTblY.Impact = 'H';
PosnTrakgServoEnaBlndFacTblY.TuningOwner = 'CSE';
PosnTrakgServoEnaBlndFacTblY.GraphLink = {'PosnTrakgServoEnaBlndFacTblX'};
PosnTrakgServoEnaBlndFacTblY.Monotony = 'None';
PosnTrakgServoEnaBlndFacTblY.MaxGrad = 1;
PosnTrakgServoEnaBlndFacTblY.PortName = 'PosnTrakgServoEnaBlndFacTblY';


PosnTrakgServoFfGain = DataDict.Calibration;
PosnTrakgServoFfGain.LongName = 'Feedforward Gain';
PosnTrakgServoFfGain.Description = 'Feedforward gain for target angle';
PosnTrakgServoFfGain.DocUnits = 'HwNwtMtrPerHwRad';
PosnTrakgServoFfGain.EngDT = dt.u12p4;
PosnTrakgServoFfGain.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
PosnTrakgServoFfGain.EngMin = 0;
PosnTrakgServoFfGain.EngMax = 4095;
PosnTrakgServoFfGain.Cardinality = 'Inin';
PosnTrakgServoFfGain.CustomerVisible = false;
PosnTrakgServoFfGain.Online = true;
PosnTrakgServoFfGain.Impact = 'H';
PosnTrakgServoFfGain.TuningOwner = 'CSE';
PosnTrakgServoFfGain.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoFfGain.Monotony = 'None';
PosnTrakgServoFfGain.MaxGrad = 4095;
PosnTrakgServoFfGain.PortName = 'PosnTrakgServoFfGain';


PosnTrakgServoFfVelGain = DataDict.Calibration;
PosnTrakgServoFfVelGain.LongName = 'Feedforward Velocity Gain';
PosnTrakgServoFfVelGain.Description = [...
  'feedforward gain on the target velocity'];
PosnTrakgServoFfVelGain.DocUnits = 'HwNwtMtrPerHwRadPerSec';
PosnTrakgServoFfVelGain.EngDT = dt.u8p8;
PosnTrakgServoFfVelGain.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
PosnTrakgServoFfVelGain.EngMin = 0;
PosnTrakgServoFfVelGain.EngMax = 255;
PosnTrakgServoFfVelGain.Cardinality = 'Inin';
PosnTrakgServoFfVelGain.CustomerVisible = false;
PosnTrakgServoFfVelGain.Online = true;
PosnTrakgServoFfVelGain.Impact = 'H';
PosnTrakgServoFfVelGain.TuningOwner = 'CSE';
PosnTrakgServoFfVelGain.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoFfVelGain.Monotony = 'None';
PosnTrakgServoFfVelGain.MaxGrad = 255;
PosnTrakgServoFfVelGain.PortName = 'PosnTrakgServoFfVelGain';


PosnTrakgServoGain1 = DataDict.Calibration;
PosnTrakgServoGain1.LongName = 'Gain 1';
PosnTrakgServoGain1.Description = 'Feedback gain on the motor angle';
PosnTrakgServoGain1.DocUnits = 'HwNwtMtrPerHwRad';
PosnTrakgServoGain1.EngDT = dt.u12p4;
PosnTrakgServoGain1.EngVal =  ...
   [1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3           1016.3];
PosnTrakgServoGain1.EngMin = 0;
PosnTrakgServoGain1.EngMax = 4095;
PosnTrakgServoGain1.Cardinality = 'Inin';
PosnTrakgServoGain1.CustomerVisible = false;
PosnTrakgServoGain1.Online = true;
PosnTrakgServoGain1.Impact = 'H';
PosnTrakgServoGain1.TuningOwner = 'CSE';
PosnTrakgServoGain1.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoGain1.Monotony = 'None';
PosnTrakgServoGain1.MaxGrad = 4095;
PosnTrakgServoGain1.PortName = 'PosnTrakgServoGain1';


PosnTrakgServoGain2 = DataDict.Calibration;
PosnTrakgServoGain2.LongName = 'Gain 2';
PosnTrakgServoGain2.Description = [...
  'Feedback gain on the motor velocity'];
PosnTrakgServoGain2.DocUnits = 'HwNwtMtrPerHwRadPerSec';
PosnTrakgServoGain2.EngDT = dt.u8p8;
PosnTrakgServoGain2.EngVal =  ...
   [22.578           22.578           22.578           22.578           22.578           22.578           22.578           22.578           22.578           22.578           22.578           22.578];
PosnTrakgServoGain2.EngMin = 0;
PosnTrakgServoGain2.EngMax = 255;
PosnTrakgServoGain2.Cardinality = 'Inin';
PosnTrakgServoGain2.CustomerVisible = false;
PosnTrakgServoGain2.Online = true;
PosnTrakgServoGain2.Impact = 'H';
PosnTrakgServoGain2.TuningOwner = 'CSE';
PosnTrakgServoGain2.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoGain2.Monotony = 'None';
PosnTrakgServoGain2.MaxGrad = 255;
PosnTrakgServoGain2.PortName = 'PosnTrakgServoGain2';


PosnTrakgServoGain3 = DataDict.Calibration;
PosnTrakgServoGain3.LongName = 'Gain 3';
PosnTrakgServoGain3.Description = 'Feedback gain on the Tbar torque';
PosnTrakgServoGain3.DocUnits = 'Uls';
PosnTrakgServoGain3.EngDT = dt.s8p7;
PosnTrakgServoGain3.EngVal =  ...
   [-2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455          -2.5455];
PosnTrakgServoGain3.EngMin = -256;
PosnTrakgServoGain3.EngMax = 255.9;
PosnTrakgServoGain3.Cardinality = 'Inin';
PosnTrakgServoGain3.CustomerVisible = false;
PosnTrakgServoGain3.Online = true;
PosnTrakgServoGain3.Impact = 'H';
PosnTrakgServoGain3.TuningOwner = 'CSE';
PosnTrakgServoGain3.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoGain3.Monotony = 'None';
PosnTrakgServoGain3.MaxGrad = 511.9;
PosnTrakgServoGain3.PortName = 'PosnTrakgServoGain3';


PosnTrakgServoGain4 = DataDict.Calibration;
PosnTrakgServoGain4.LongName = 'Gain 4';
PosnTrakgServoGain4.Description = [...
  'Feedback gain on the derivative of Tbar torque'];
PosnTrakgServoGain4.DocUnits = 'Sec';
PosnTrakgServoGain4.EngDT = dt.s4p11;
PosnTrakgServoGain4.EngVal =  ...
   [0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841          0.10841];
PosnTrakgServoGain4.EngMin = -16;
PosnTrakgServoGain4.EngMax = 15.99;
PosnTrakgServoGain4.Cardinality = 'Inin';
PosnTrakgServoGain4.CustomerVisible = false;
PosnTrakgServoGain4.Online = true;
PosnTrakgServoGain4.Impact = 'H';
PosnTrakgServoGain4.TuningOwner = 'CSE';
PosnTrakgServoGain4.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoGain4.Monotony = 'None';
PosnTrakgServoGain4.MaxGrad = 31.99;
PosnTrakgServoGain4.PortName = 'PosnTrakgServoGain4';


PosnTrakgServoGainArbnFltMtgtn = DataDict.Calibration;
PosnTrakgServoGainArbnFltMtgtn.LongName = 'Gain Arbitration Fault Mitigation';
PosnTrakgServoGainArbnFltMtgtn.Description = [...
  'Feedforward gain to calculate the position servo command based on targ' ...
  'et angle when arbitration fault mitigation is enabled'];
PosnTrakgServoGainArbnFltMtgtn.DocUnits = 'HwNwtMtrPerHwRad';
PosnTrakgServoGainArbnFltMtgtn.EngDT = dt.u12p4;
PosnTrakgServoGainArbnFltMtgtn.EngVal =  ...
   [60               60               50               40               30               20               20               10               10               10               10               10];
PosnTrakgServoGainArbnFltMtgtn.EngMin = 0;
PosnTrakgServoGainArbnFltMtgtn.EngMax = 250;
PosnTrakgServoGainArbnFltMtgtn.Cardinality = 'Inin';
PosnTrakgServoGainArbnFltMtgtn.CustomerVisible = false;
PosnTrakgServoGainArbnFltMtgtn.Online = true;
PosnTrakgServoGainArbnFltMtgtn.Impact = 'H';
PosnTrakgServoGainArbnFltMtgtn.TuningOwner = 'CSE';
PosnTrakgServoGainArbnFltMtgtn.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoGainArbnFltMtgtn.Monotony = 'None';
PosnTrakgServoGainArbnFltMtgtn.MaxGrad = 250;
PosnTrakgServoGainArbnFltMtgtn.PortName = 'PosnTrakgServoGainArbnFltMtgtn';


PosnTrakgServoHwAgTarMgnLimTblY = DataDict.Calibration;
PosnTrakgServoHwAgTarMgnLimTblY.LongName = 'Handwheel Angle Target Magnitude Limit Table Y';
PosnTrakgServoHwAgTarMgnLimTblY.Description = [...
  'limit on magnitude of the target handwheel angle'];
PosnTrakgServoHwAgTarMgnLimTblY.DocUnits = 'HwDeg';
PosnTrakgServoHwAgTarMgnLimTblY.EngDT = dt.u11p5;
PosnTrakgServoHwAgTarMgnLimTblY.EngVal =  ...
   [140              450              360              180              180              180              180              180              180              180              180              180];
PosnTrakgServoHwAgTarMgnLimTblY.EngMin = 0;
PosnTrakgServoHwAgTarMgnLimTblY.EngMax = 1440;
PosnTrakgServoHwAgTarMgnLimTblY.Cardinality = 'Inin';
PosnTrakgServoHwAgTarMgnLimTblY.CustomerVisible = false;
PosnTrakgServoHwAgTarMgnLimTblY.Online = true;
PosnTrakgServoHwAgTarMgnLimTblY.Impact = 'H';
PosnTrakgServoHwAgTarMgnLimTblY.TuningOwner = 'Safety';
PosnTrakgServoHwAgTarMgnLimTblY.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoHwAgTarMgnLimTblY.Monotony = 'None';
PosnTrakgServoHwAgTarMgnLimTblY.MaxGrad = 1440;
PosnTrakgServoHwAgTarMgnLimTblY.PortName = 'PosnTrakgServoHwAgTarMgnLimTblY';


PosnTrakgServoHwAgTarRateLimTblY = DataDict.Calibration;
PosnTrakgServoHwAgTarRateLimTblY.LongName = 'Handwheel Angle Target Rate Limit Table Y';
PosnTrakgServoHwAgTarRateLimTblY.Description = [...
  'limit on the rate of change of the target handwheel angle'];
PosnTrakgServoHwAgTarRateLimTblY.DocUnits = 'HwDegPerSec';
PosnTrakgServoHwAgTarRateLimTblY.EngDT = dt.u15p1;
PosnTrakgServoHwAgTarRateLimTblY.EngVal =  ...
   [22500            22500            22500            22500            22500            22500            22500            22500            22500            22500            22500            22500];
PosnTrakgServoHwAgTarRateLimTblY.EngMin = 0;
PosnTrakgServoHwAgTarRateLimTblY.EngMax = 32767.5;
PosnTrakgServoHwAgTarRateLimTblY.Cardinality = 'Inin';
PosnTrakgServoHwAgTarRateLimTblY.CustomerVisible = false;
PosnTrakgServoHwAgTarRateLimTblY.Online = false;
PosnTrakgServoHwAgTarRateLimTblY.Impact = 'H';
PosnTrakgServoHwAgTarRateLimTblY.TuningOwner = 'Safety';
PosnTrakgServoHwAgTarRateLimTblY.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoHwAgTarRateLimTblY.Monotony = 'None';
PosnTrakgServoHwAgTarRateLimTblY.MaxGrad = 32767.5;
PosnTrakgServoHwAgTarRateLimTblY.PortName = 'PosnTrakgServoHwAgTarRateLimTblY';


PosnTrakgServoHwVelTarRateLimTblY = DataDict.Calibration;
PosnTrakgServoHwVelTarRateLimTblY.LongName = 'Handwheel Velocity Target Rate Limit Table Y';
PosnTrakgServoHwVelTarRateLimTblY.Description = [...
  'limit on the rate of change of the target handwheel velocity '];
PosnTrakgServoHwVelTarRateLimTblY.DocUnits = 'HwDegPerSecPerSec';
PosnTrakgServoHwVelTarRateLimTblY.EngDT = dt.u15p1;
PosnTrakgServoHwVelTarRateLimTblY.EngVal =  ...
   [22500            22500            22500            22500            22500            22500            22500            22500            22500            22500            22500            22500];
PosnTrakgServoHwVelTarRateLimTblY.EngMin = 0;
PosnTrakgServoHwVelTarRateLimTblY.EngMax = 32767.5;
PosnTrakgServoHwVelTarRateLimTblY.Cardinality = 'Inin';
PosnTrakgServoHwVelTarRateLimTblY.CustomerVisible = false;
PosnTrakgServoHwVelTarRateLimTblY.Online = false;
PosnTrakgServoHwVelTarRateLimTblY.Impact = 'H';
PosnTrakgServoHwVelTarRateLimTblY.TuningOwner = 'Safety';
PosnTrakgServoHwVelTarRateLimTblY.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoHwVelTarRateLimTblY.Monotony = 'None';
PosnTrakgServoHwVelTarRateLimTblY.MaxGrad = 32767.5;
PosnTrakgServoHwVelTarRateLimTblY.PortName = 'PosnTrakgServoHwVelTarRateLimTblY';


PosnTrakgServoIntglGain = DataDict.Calibration;
PosnTrakgServoIntglGain.LongName = 'Integral Gain';
PosnTrakgServoIntglGain.Description = 'Integral Gain on the angle error';
PosnTrakgServoIntglGain.DocUnits = 'HwNwtMtrPerHwRad';
PosnTrakgServoIntglGain.EngDT = dt.u15p1;
PosnTrakgServoIntglGain.EngVal =  ...
   [11732            11732            11732            11732            11732            11732            11732            11732            11732            11732            11732            11732];
PosnTrakgServoIntglGain.EngMin = 0;
PosnTrakgServoIntglGain.EngMax = 32767.5;
PosnTrakgServoIntglGain.Cardinality = 'Inin';
PosnTrakgServoIntglGain.CustomerVisible = false;
PosnTrakgServoIntglGain.Online = true;
PosnTrakgServoIntglGain.Impact = 'H';
PosnTrakgServoIntglGain.TuningOwner = 'CSE';
PosnTrakgServoIntglGain.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoIntglGain.Monotony = 'None';
PosnTrakgServoIntglGain.MaxGrad = 32767.5;
PosnTrakgServoIntglGain.PortName = 'PosnTrakgServoIntglGain';


PosnTrakgServoIntglLim = DataDict.Calibration;
PosnTrakgServoIntglLim.LongName = 'Integrator Limit';
PosnTrakgServoIntglLim.Description = 'limit on the integrator output';
PosnTrakgServoIntglLim.DocUnits = 'HwNwtMtr';
PosnTrakgServoIntglLim.EngDT = dt.u15p1;
PosnTrakgServoIntglLim.EngVal =  ...
   [12000            10000             8000             6000             4000             4000             4000             4000             4000             4000             4000             4000];
PosnTrakgServoIntglLim.EngMin = 0;
PosnTrakgServoIntglLim.EngMax = 32767.5;
PosnTrakgServoIntglLim.Cardinality = 'Inin';
PosnTrakgServoIntglLim.CustomerVisible = false;
PosnTrakgServoIntglLim.Online = false;
PosnTrakgServoIntglLim.Impact = 'H';
PosnTrakgServoIntglLim.TuningOwner = 'CSE';
PosnTrakgServoIntglLim.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoIntglLim.Monotony = 'None';
PosnTrakgServoIntglLim.MaxGrad = 32767.5;
PosnTrakgServoIntglLim.PortName = 'PosnTrakgServoIntglLim';


PosnTrakgServoIntgtrAntiWdupGain = DataDict.Calibration;
PosnTrakgServoIntgtrAntiWdupGain.LongName = 'Integrator Anti Windup Gain';
PosnTrakgServoIntgtrAntiWdupGain.Description = [...
  'Gain used for anti-windup in the integrator '];
PosnTrakgServoIntgtrAntiWdupGain.DocUnits = 'Uls';
PosnTrakgServoIntgtrAntiWdupGain.EngDT = dt.float32;
PosnTrakgServoIntgtrAntiWdupGain.EngVal = 0;
PosnTrakgServoIntgtrAntiWdupGain.EngMin = -10000;
PosnTrakgServoIntgtrAntiWdupGain.EngMax = 10000;
PosnTrakgServoIntgtrAntiWdupGain.Cardinality = 'Inin';
PosnTrakgServoIntgtrAntiWdupGain.CustomerVisible = false;
PosnTrakgServoIntgtrAntiWdupGain.Online = false;
PosnTrakgServoIntgtrAntiWdupGain.Impact = 'H';
PosnTrakgServoIntgtrAntiWdupGain.TuningOwner = 'CSE';
PosnTrakgServoIntgtrAntiWdupGain.GraphLink = {''};
PosnTrakgServoIntgtrAntiWdupGain.Monotony = 'None';
PosnTrakgServoIntgtrAntiWdupGain.MaxGrad = 20000;
PosnTrakgServoIntgtrAntiWdupGain.PortName = 'PosnTrakgServoIntgtrAntiWdupGain';


PosnTrakgServoIntgtrStCorrnGain = DataDict.Calibration;
PosnTrakgServoIntgtrStCorrnGain.LongName = 'Integrator State Correction Gain';
PosnTrakgServoIntgtrStCorrnGain.Description = [...
  'Gain used to correct the intergrator state offest between two controll' ...
  'ers '];
PosnTrakgServoIntgtrStCorrnGain.DocUnits = 'Uls';
PosnTrakgServoIntgtrStCorrnGain.EngDT = dt.float32;
PosnTrakgServoIntgtrStCorrnGain.EngVal = 0.1;
PosnTrakgServoIntgtrStCorrnGain.EngMin = 0;
PosnTrakgServoIntgtrStCorrnGain.EngMax = 1;
PosnTrakgServoIntgtrStCorrnGain.Cardinality = 'Inin';
PosnTrakgServoIntgtrStCorrnGain.CustomerVisible = false;
PosnTrakgServoIntgtrStCorrnGain.Online = false;
PosnTrakgServoIntgtrStCorrnGain.Impact = 'H';
PosnTrakgServoIntgtrStCorrnGain.TuningOwner = 'CSE';
PosnTrakgServoIntgtrStCorrnGain.GraphLink = {''};
PosnTrakgServoIntgtrStCorrnGain.Monotony = 'None';
PosnTrakgServoIntgtrStCorrnGain.MaxGrad = 1;
PosnTrakgServoIntgtrStCorrnGain.PortName = 'PosnTrakgServoIntgtrStCorrnGain';


PosnTrakgServoLpFilCutOffFrq = DataDict.Calibration;
PosnTrakgServoLpFilCutOffFrq.LongName = 'Lowpass Filter Cut Off Frequency';
PosnTrakgServoLpFilCutOffFrq.Description = [...
  'Lowpass filter cutoff frequency used to calculate the derivative  of T' ...
  'bar Torque'];
PosnTrakgServoLpFilCutOffFrq.DocUnits = 'Hz';
PosnTrakgServoLpFilCutOffFrq.EngDT = dt.float32;
PosnTrakgServoLpFilCutOffFrq.EngVal = 250;
PosnTrakgServoLpFilCutOffFrq.EngMin = 0.1;
PosnTrakgServoLpFilCutOffFrq.EngMax = 250;
PosnTrakgServoLpFilCutOffFrq.Cardinality = 'Inin';
PosnTrakgServoLpFilCutOffFrq.CustomerVisible = false;
PosnTrakgServoLpFilCutOffFrq.Online = false;
PosnTrakgServoLpFilCutOffFrq.Impact = 'H';
PosnTrakgServoLpFilCutOffFrq.TuningOwner = 'CSE';
PosnTrakgServoLpFilCutOffFrq.GraphLink = {''};
PosnTrakgServoLpFilCutOffFrq.Monotony = 'None';
PosnTrakgServoLpFilCutOffFrq.MaxGrad = 249.9;
PosnTrakgServoLpFilCutOffFrq.PortName = 'PosnTrakgServoLpFilCutOffFrq';


PosnTrakgServoOutpAntiWdupGain = DataDict.Calibration;
PosnTrakgServoOutpAntiWdupGain.LongName = 'Output Anti Windup Gain';
PosnTrakgServoOutpAntiWdupGain.Description = [...
  'Gain used for anti-windup on the output command'];
PosnTrakgServoOutpAntiWdupGain.DocUnits = 'Uls';
PosnTrakgServoOutpAntiWdupGain.EngDT = dt.float32;
PosnTrakgServoOutpAntiWdupGain.EngVal = 0;
PosnTrakgServoOutpAntiWdupGain.EngMin = -10000;
PosnTrakgServoOutpAntiWdupGain.EngMax = 10000;
PosnTrakgServoOutpAntiWdupGain.Cardinality = 'Inin';
PosnTrakgServoOutpAntiWdupGain.CustomerVisible = false;
PosnTrakgServoOutpAntiWdupGain.Online = false;
PosnTrakgServoOutpAntiWdupGain.Impact = 'H';
PosnTrakgServoOutpAntiWdupGain.TuningOwner = 'CSE';
PosnTrakgServoOutpAntiWdupGain.GraphLink = {''};
PosnTrakgServoOutpAntiWdupGain.Monotony = 'None';
PosnTrakgServoOutpAntiWdupGain.MaxGrad = 20000;
PosnTrakgServoOutpAntiWdupGain.PortName = 'PosnTrakgServoOutpAntiWdupGain';


PosnTrakgServoOutpLim = DataDict.Calibration;
PosnTrakgServoOutpLim.LongName = 'Output Limit';
PosnTrakgServoOutpLim.Description = 'limit on the output command';
PosnTrakgServoOutpLim.DocUnits = 'HwNwtMtr';
PosnTrakgServoOutpLim.EngDT = dt.u8p8;
PosnTrakgServoOutpLim.EngVal =  ...
   [125              125              125              125              125              125              125              125              125              125              125              125];
PosnTrakgServoOutpLim.EngMin = 0;
PosnTrakgServoOutpLim.EngMax = 255;
PosnTrakgServoOutpLim.Cardinality = 'Inin';
PosnTrakgServoOutpLim.CustomerVisible = false;
PosnTrakgServoOutpLim.Online = false;
PosnTrakgServoOutpLim.Impact = 'H';
PosnTrakgServoOutpLim.TuningOwner = 'CSE';
PosnTrakgServoOutpLim.GraphLink = {'PosnTrakgServoVehSpdTbl'};
PosnTrakgServoOutpLim.Monotony = 'None';
PosnTrakgServoOutpLim.MaxGrad = 255;
PosnTrakgServoOutpLim.PortName = 'PosnTrakgServoOutpLim';


PosnTrakgServoVehSpdTbl = DataDict.Calibration;
PosnTrakgServoVehSpdTbl.LongName = 'Vehicle Speed Table';
PosnTrakgServoVehSpdTbl.Description = 'vehicle speed table';
PosnTrakgServoVehSpdTbl.DocUnits = 'Kph';
PosnTrakgServoVehSpdTbl.EngDT = dt.u9p7;
PosnTrakgServoVehSpdTbl.EngVal =  ...
   [0               10               20               30               40               50               60               70               80               90              100              110];
PosnTrakgServoVehSpdTbl.EngMin = 0;
PosnTrakgServoVehSpdTbl.EngMax = 511;
PosnTrakgServoVehSpdTbl.Cardinality = 'Inin';
PosnTrakgServoVehSpdTbl.CustomerVisible = false;
PosnTrakgServoVehSpdTbl.Online = true;
PosnTrakgServoVehSpdTbl.Impact = 'H';
PosnTrakgServoVehSpdTbl.TuningOwner = 'CSE';
PosnTrakgServoVehSpdTbl.GraphLink = {''};
PosnTrakgServoVehSpdTbl.Monotony = 'Strictly_Increasing';
PosnTrakgServoVehSpdTbl.MaxGrad = 511;
PosnTrakgServoVehSpdTbl.PortName = 'PosnTrakgServoVehSpdTbl';



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
SysGlbPrmSysKineRat.Description = [...
  'Kinematic ratio between handwheel and motor.'];


SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = [...
  'Ratio between handwheel torque and motor torque.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dPosnTrakgServoCmdPreLimd = DataDict.Display;
dPosnTrakgServoCmdPreLimd.LongName = 'Position Tracking Servo Command pre Limited';
dPosnTrakgServoCmdPreLimd.Description = [...
  'Position servo command before the saturation limit'];
dPosnTrakgServoCmdPreLimd.DocUnits = 'HwNwtMtr';
dPosnTrakgServoCmdPreLimd.EngDT = dt.float32;
dPosnTrakgServoCmdPreLimd.EngMin = -1000000;
dPosnTrakgServoCmdPreLimd.EngMax = 1000000;
dPosnTrakgServoCmdPreLimd.InitRowCol = [1  1];


dPosnTrakgServoEnaBlndFac = DataDict.Display;
dPosnTrakgServoEnaBlndFac.LongName = 'Position Tracking Servo Enable Blend Factor';
dPosnTrakgServoEnaBlndFac.Description = [...
  'Position servo command for enabling blend'];
dPosnTrakgServoEnaBlndFac.DocUnits = 'Uls';
dPosnTrakgServoEnaBlndFac.EngDT = dt.float32;
dPosnTrakgServoEnaBlndFac.EngMin = 0;
dPosnTrakgServoEnaBlndFac.EngMax = 1;
dPosnTrakgServoEnaBlndFac.InitRowCol = [1  1];


dPosnTrakgServoFfCmd = DataDict.Display;
dPosnTrakgServoFfCmd.LongName = 'Feedforward Command';
dPosnTrakgServoFfCmd.Description = [...
  'feedforward command based on target handwheel angle and target handwhe' ...
  'el velocity'];
dPosnTrakgServoFfCmd.DocUnits = 'HwNwtMtr';
dPosnTrakgServoFfCmd.EngDT = dt.float32;
dPosnTrakgServoFfCmd.EngMin = -100000;
dPosnTrakgServoFfCmd.EngMax = 100000;
dPosnTrakgServoFfCmd.InitRowCol = [1  1];


dPosnTrakgServoHwAg = DataDict.Display;
dPosnTrakgServoHwAg.LongName = 'Handwheel Angle';
dPosnTrakgServoHwAg.Description = 'Measured handwheel angle';
dPosnTrakgServoHwAg.DocUnits = 'HwDeg';
dPosnTrakgServoHwAg.EngDT = dt.float32;
dPosnTrakgServoHwAg.EngMin = -1440;
dPosnTrakgServoHwAg.EngMax = 1440;
dPosnTrakgServoHwAg.InitRowCol = [1  1];


dPosnTrakgServoHwAgErr = DataDict.Display;
dPosnTrakgServoHwAgErr.LongName = 'Handwheel Angle Error';
dPosnTrakgServoHwAgErr.Description = [...
  'The difference between limited target handwheel angle and actual handw' ...
  'heel angle'];
dPosnTrakgServoHwAgErr.DocUnits = 'HwRad';
dPosnTrakgServoHwAgErr.EngDT = dt.float32;
dPosnTrakgServoHwAgErr.EngMin = -50.2655;
dPosnTrakgServoHwAgErr.EngMax = 50.2655;
dPosnTrakgServoHwAgErr.InitRowCol = [1  1];


dPosnTrakgServoHwAgTarLimd = DataDict.Display;
dPosnTrakgServoHwAgTarLimd.LongName = 'Handwheel Angle Target Limited';
dPosnTrakgServoHwAgTarLimd.Description = 'The limited target handwheel angle';
dPosnTrakgServoHwAgTarLimd.DocUnits = 'HwDeg';
dPosnTrakgServoHwAgTarLimd.EngDT = dt.float32;
dPosnTrakgServoHwAgTarLimd.EngMin = -1440;
dPosnTrakgServoHwAgTarLimd.EngMax = 1440;
dPosnTrakgServoHwAgTarLimd.InitRowCol = [1  1];


dPosnTrakgServoHwVelTarLimd = DataDict.Display;
dPosnTrakgServoHwVelTarLimd.LongName = 'Handwheel Velocity Target Limited';
dPosnTrakgServoHwVelTarLimd.Description = [...
  'The limited target handwheel velocity'];
dPosnTrakgServoHwVelTarLimd.DocUnits = 'HwDegPerSec';
dPosnTrakgServoHwVelTarLimd.EngDT = dt.float32;
dPosnTrakgServoHwVelTarLimd.EngMin = -32767.5;
dPosnTrakgServoHwVelTarLimd.EngMax = 32767.5;
dPosnTrakgServoHwVelTarLimd.InitRowCol = [1  1];


dPosnTrakgServoIntgtrCmdLimd = DataDict.Display;
dPosnTrakgServoIntgtrCmdLimd.LongName = 'Integrator Command Limited';
dPosnTrakgServoIntgtrCmdLimd.Description = 'The limited integrator command';
dPosnTrakgServoIntgtrCmdLimd.DocUnits = 'HwNwtMtr';
dPosnTrakgServoIntgtrCmdLimd.EngDT = dt.float32;
dPosnTrakgServoIntgtrCmdLimd.EngMin = -200000;
dPosnTrakgServoIntgtrCmdLimd.EngMax = 200000;
dPosnTrakgServoIntgtrCmdLimd.InitRowCol = [1  1];


dPosnTrakgServoPtlStFbCmd = DataDict.Display;
dPosnTrakgServoPtlStFbCmd.LongName = 'Partial State Feedback Command';
dPosnTrakgServoPtlStFbCmd.Description = 'Partial State Feedback Command';
dPosnTrakgServoPtlStFbCmd.DocUnits = 'HwNwtMtr';
dPosnTrakgServoPtlStFbCmd.EngDT = dt.float32;
dPosnTrakgServoPtlStFbCmd.EngMin = -200000;
dPosnTrakgServoPtlStFbCmd.EngMax = 200000;
dPosnTrakgServoPtlStFbCmd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AntiWdupCmdPrev = DataDict.PIM;
AntiWdupCmdPrev.LongName = 'Anti WindUp Command Previous';
AntiWdupCmdPrev.Description = [...
  'Previous value of Anti WindUp Command'];
AntiWdupCmdPrev.DocUnits = 'HwNwtMtr';
AntiWdupCmdPrev.EngDT = dt.float32;
AntiWdupCmdPrev.EngMin = -100000;
AntiWdupCmdPrev.EngMax = 100000;
AntiWdupCmdPrev.InitRowCol = [1  1];


HwTqDerivtvPrev = DataDict.PIM;
HwTqDerivtvPrev.LongName = 'Handwheel Torque derivative Previous';
HwTqDerivtvPrev.Description = [...
  'Previous value of Handwheel Torque derivative'];
HwTqDerivtvPrev.DocUnits = 'HwNwtMtrPerSec';
HwTqDerivtvPrev.EngDT = dt.float32;
HwTqDerivtvPrev.EngMin = -10000;
HwTqDerivtvPrev.EngMax = 10000;
HwTqDerivtvPrev.InitRowCol = [1  1];


HwTqPrev = DataDict.PIM;
HwTqPrev.LongName = 'Handwheel Torque Previous';
HwTqPrev.Description = 'Previous value of Handwheel Torque';
HwTqPrev.DocUnits = 'HwNwtMtr';
HwTqPrev.EngDT = dt.float32;
HwTqPrev.EngMin = -10;
HwTqPrev.EngMax = 10;
HwTqPrev.InitRowCol = [1  1];


IntgtrInpPrev = DataDict.PIM;
IntgtrInpPrev.LongName = 'Integrator Input Previous';
IntgtrInpPrev.Description = 'Previous value of Integrator Input';
IntgtrInpPrev.DocUnits = 'HwNwtMtr';
IntgtrInpPrev.EngDT = dt.float32;
IntgtrInpPrev.EngMin = -4000000;
IntgtrInpPrev.EngMax = 4000000;
IntgtrInpPrev.InitRowCol = [1  1];


IntgtrOutpPrev = DataDict.PIM;
IntgtrOutpPrev.LongName = 'Integrator Output Previous';
IntgtrOutpPrev.Description = [...
  'Previous value of Integrator Output'];
IntgtrOutpPrev.DocUnits = 'HwNwtMtr';
IntgtrOutpPrev.EngDT = dt.float32;
IntgtrOutpPrev.EngMin = -65535;
IntgtrOutpPrev.EngMax = 65535;
IntgtrOutpPrev.InitRowCol = [1  1];


OutpAntiWdupCmdPrev = DataDict.PIM;
OutpAntiWdupCmdPrev.LongName = 'Output Anti WindUp Command Previous';
OutpAntiWdupCmdPrev.Description = [...
  'Previous value of Output Anti WindUp Command'];
OutpAntiWdupCmdPrev.DocUnits = 'HwNwtMtr';
OutpAntiWdupCmdPrev.EngDT = dt.float32;
OutpAntiWdupCmdPrev.EngMin = -2000000;
OutpAntiWdupCmdPrev.EngMax = 2000000;
OutpAntiWdupCmdPrev.InitRowCol = [1  1];


PosnServoCmdInpArbnFltMtgtnPrev = DataDict.PIM;
PosnServoCmdInpArbnFltMtgtnPrev.LongName = 'Position Servo Command Input Arbitration Fault Mitigation Previous';
PosnServoCmdInpArbnFltMtgtnPrev.Description = [...
  'Previous value of Position servo command input For Fault Mitigation'];
PosnServoCmdInpArbnFltMtgtnPrev.DocUnits = 'HwNwtMtr';
PosnServoCmdInpArbnFltMtgtnPrev.EngDT = dt.float32;
PosnServoCmdInpArbnFltMtgtnPrev.EngMin = -6500;
PosnServoCmdInpArbnFltMtgtnPrev.EngMax = 6500;
PosnServoCmdInpArbnFltMtgtnPrev.InitRowCol = [1  1];


PosnServoCmdOutpArbnFltMtgtnPrev = DataDict.PIM;
PosnServoCmdOutpArbnFltMtgtnPrev.LongName = 'Position Servo Command Output Arbitration Fault Mitigation Previous';
PosnServoCmdOutpArbnFltMtgtnPrev.Description = [...
  'Previous value of Position servo command output For Fault Mitigation'];
PosnServoCmdOutpArbnFltMtgtnPrev.DocUnits = 'HwNwtMtr';
PosnServoCmdOutpArbnFltMtgtnPrev.EngDT = dt.float32;
PosnServoCmdOutpArbnFltMtgtnPrev.EngMin = -6500;
PosnServoCmdOutpArbnFltMtgtnPrev.EngMax = 6500;
PosnServoCmdOutpArbnFltMtgtnPrev.InitRowCol = [1  1];


PosnServoEnaTiPrev = DataDict.PIM;
PosnServoEnaTiPrev.LongName = 'Position Servo Enable Time Previous';
PosnServoEnaTiPrev.Description = [...
  'Previous value of Position Servo Enable Time'];
PosnServoEnaTiPrev.DocUnits = 'Sec';
PosnServoEnaTiPrev.EngDT = dt.float32;
PosnServoEnaTiPrev.EngMin = 0;
PosnServoEnaTiPrev.EngMax = 20;
PosnServoEnaTiPrev.InitRowCol = [1  1];


PosnServoHwAgValRateLim = DataDict.PIM;
PosnServoHwAgValRateLim.LongName = 'Position Servo Handwheel Angle Value Rate Limit ';
PosnServoHwAgValRateLim.Description = [...
  'Rate Limit Value Of Position Servo Handwheel Angle'];
PosnServoHwAgValRateLim.DocUnits = 'HwNwtMtr';
PosnServoHwAgValRateLim.EngDT = dt.float32;
PosnServoHwAgValRateLim.EngMin = -1440000;
PosnServoHwAgValRateLim.EngMax = 1440000;
PosnServoHwAgValRateLim.InitRowCol = [1  1];


PosnServoHwVelValRateLim = DataDict.PIM;
PosnServoHwVelValRateLim.LongName = 'Position Servo Handwheel Velocity Value Rate Limit ';
PosnServoHwVelValRateLim.Description = [...
  'Rate Limit Value Of Position Servo Handwheel Velocity'];
PosnServoHwVelValRateLim.DocUnits = 'HwNwtMtr';
PosnServoHwVelValRateLim.EngDT = dt.float32;
PosnServoHwVelValRateLim.EngMin = -32767500;
PosnServoHwVelValRateLim.EngMax = 32767500;
PosnServoHwVelValRateLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.LongName = 'Anti Windup Command Lower Limit';
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.Description = [...
  'Lower limit of the anti-wind up command of the integrator'];
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.EngVal = -100000;
ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.Define = 'Local';


ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.LongName = 'Anti Windup Command Upper Limit';
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.Description = [...
  'Upper limit of the anti-wind up command of the integrator'];
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.EngVal = 100000;
ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.Define = 'Local';


ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.LongName = 'Arbitration Fault Mitigation Command Lower Limit';
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.Description = [...
  'Lower limit of the arbitration fault mitigation command'];
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.EngVal = -6500;
ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32.Define = 'Local';


ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.LongName = 'Arbitration Fault Mitigation Command Upper Limit';
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.Description = [...
  'Upper limit of the arbitration fault mitigation command '];
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.EngVal = 6500;
ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32.Define = 'Local';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_ONEOVER2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.LongName = 'One Over 2 Pi';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.Description = 'One Over 2 times Value of Pi';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_ONEOVER2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.EngVal = 0.15915494;
ARCHGLBPRM_ONEOVER2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


CUTOFFFRQLOWRLIM_HZ_F32 = DataDict.Constant;
CUTOFFFRQLOWRLIM_HZ_F32.LongName = 'Cut Off Frequency Lower Limit';
CUTOFFFRQLOWRLIM_HZ_F32.Description = [...
  'The lower bound for cut off frequency to prevent dividing by zero'];
CUTOFFFRQLOWRLIM_HZ_F32.DocUnits = 'Hz';
CUTOFFFRQLOWRLIM_HZ_F32.EngDT = dt.float32;
CUTOFFFRQLOWRLIM_HZ_F32.EngVal = 0.1;
CUTOFFFRQLOWRLIM_HZ_F32.Define = 'Local';


GAINFAC_ULS_F32 = DataDict.Constant;
GAINFAC_ULS_F32.LongName = 'Gain Factor';
GAINFAC_ULS_F32.Description = 'Gain Factor';
GAINFAC_ULS_F32.DocUnits = 'Uls';
GAINFAC_ULS_F32.EngDT = dt.float32;
GAINFAC_ULS_F32.EngVal = 0.5;
GAINFAC_ULS_F32.Define = 'Local';


HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32 = DataDict.Constant;
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.LongName = 'Handwheel Torque Derivative Lower Limit';
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.Description = [...
  'Lower limit of the derivative of the handwheel torque'];
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.DocUnits = 'HwNwtMtrPerSec';
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.EngDT = dt.float32;
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.EngVal = -10000;
HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32.Define = 'Local';


HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32 = DataDict.Constant;
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.LongName = 'Handwheel Torque Derivative Upper Limit';
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.Description = [...
  'Upper limit of the derivative of the handwheel torque'];
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.DocUnits = 'HwNwtMtrPerSec';
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.EngDT = dt.float32;
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.EngVal = 10000;
HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32.Define = 'Local';


INTGTRSTLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
INTGTRSTLOWRLIM_HWNWTMTR_F32.LongName = 'Integrator State Lower Limit';
INTGTRSTLOWRLIM_HWNWTMTR_F32.Description = [...
  'Lower limit of Integrator State Variable'];
INTGTRSTLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
INTGTRSTLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
INTGTRSTLOWRLIM_HWNWTMTR_F32.EngVal = -32767.5;
INTGTRSTLOWRLIM_HWNWTMTR_F32.Define = 'Local';


INTGTRSTUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
INTGTRSTUPPRLIM_HWNWTMTR_F32.LongName = 'Integrator State Upper Limit';
INTGTRSTUPPRLIM_HWNWTMTR_F32.Description = [...
  'Upper limit of Integrator State Variable'];
INTGTRSTUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
INTGTRSTUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
INTGTRSTUPPRLIM_HWNWTMTR_F32.EngVal = 32767.5;
INTGTRSTUPPRLIM_HWNWTMTR_F32.Define = 'Local';


OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.LongName = 'Output Anti Windup Command Lower Limit';
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.Description = [...
  'Lower limit of the anti-wind up command of the outer loop'];
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.EngVal = -2000000;
OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32.Define = 'Local';


OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.LongName = 'Output Anti Windup Command Upper Limit';
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.Description = [...
  'Upper limit of the anti-wind up command of the outer loop'];
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.EngVal = 2000000;
OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32.Define = 'Local';


POSNSERVOENATILOWRLIM_SEC_F32 = DataDict.Constant;
POSNSERVOENATILOWRLIM_SEC_F32.LongName = 'Position Servo Enable Time Lower Limit';
POSNSERVOENATILOWRLIM_SEC_F32.Description = 'Lower limit of the enable time';
POSNSERVOENATILOWRLIM_SEC_F32.DocUnits = 'Sec';
POSNSERVOENATILOWRLIM_SEC_F32.EngDT = dt.float32;
POSNSERVOENATILOWRLIM_SEC_F32.EngVal = 0;
POSNSERVOENATILOWRLIM_SEC_F32.Define = 'Local';


POSNSERVOENATIUPPRLIM_SEC_F32 = DataDict.Constant;
POSNSERVOENATIUPPRLIM_SEC_F32.LongName = 'Position Servo Enable Time Upper Limit';
POSNSERVOENATIUPPRLIM_SEC_F32.Description = 'Upper limit of the enable time';
POSNSERVOENATIUPPRLIM_SEC_F32.DocUnits = 'Sec';
POSNSERVOENATIUPPRLIM_SEC_F32.EngDT = dt.float32;
POSNSERVOENATIUPPRLIM_SEC_F32.EngVal = 20;
POSNSERVOENATIUPPRLIM_SEC_F32.Define = 'Local';


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
