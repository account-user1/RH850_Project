%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Sep-2016 16:03:29       %
%                                  Created with tool release: 2.46.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF029A = DataDict.FDD;
SF029A.Version = '1.3.X';
SF029A.LongName = 'Stability Compensation';
SF029A.ShoName  = 'StabyCmp';
SF029A.DesignASIL = 'D';
SF029A.Description = [...
  'This function provides in-vehicle stability of EPS behavior. To maximi' ...
  'ze steering feel, the function blends between two different tunings ba' ...
  'sed on vehicle speed and low frequency handwheel torque. Because syste' ...
  'm gains may get multiplied by various scale factors, either from seria' ...
  'l communications or from other software functions, this function provi' ...
  'des a second blending feature. This model is designed using the best-k' ...
  'nown implementation at this time.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
StabyCmpInit1 = DataDict.Runnable;
StabyCmpInit1.Context = 'Rte';
StabyCmpInit1.TimeStep = 0;
StabyCmpInit1.Description = [...
  'Stability Compensation Initialization Runnable'];

StabyCmpPer1 = DataDict.Runnable;
StabyCmpPer1.Context = 'Rte';
StabyCmpPer1.TimeStep = 0.002;
StabyCmpPer1.Description = [...
  'Stability Compensation Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'StabyCmpPer1'};
FltInj_f32.Description = [...
  'Fault Injection Module for Stability Compensation'];
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
AssiCmdBasSca = DataDict.IpSignal;
AssiCmdBasSca.LongName = 'Assist Command Base Scale';
AssiCmdBasSca.Description = 'Assist Command Base Scale';
AssiCmdBasSca.DocUnits = 'Uls';
AssiCmdBasSca.EngDT = dt.float32;
AssiCmdBasSca.EngInit = 0;
AssiCmdBasSca.EngMin = 0;
AssiCmdBasSca.EngMax = 2;
AssiCmdBasSca.ReadIn = {'StabyCmpPer1'};
AssiCmdBasSca.ReadType = 'Rte';


AssiCmdSum = DataDict.IpSignal;
AssiCmdSum.LongName = 'Assist Command Sum';
AssiCmdSum.Description = 'Assist Command Sum';
AssiCmdSum.DocUnits = 'MotNwtMtr';
AssiCmdSum.EngDT = dt.float32;
AssiCmdSum.EngInit = 0;
AssiCmdSum.EngMin = -8.8;
AssiCmdSum.EngMax = 8.8;
AssiCmdSum.ReadIn = {'StabyCmpPer1'};
AssiCmdSum.ReadType = 'Rte';


AssiPahLimrActv = DataDict.IpSignal;
AssiPahLimrActv.LongName = 'Assist Path Limiter Active';
AssiPahLimrActv.Description = 'Assist Path Limiter Active';
AssiPahLimrActv.DocUnits = 'Uls';
AssiPahLimrActv.EngDT = dt.float32;
AssiPahLimrActv.EngInit = 0;
AssiPahLimrActv.EngMin = 0;
AssiPahLimrActv.EngMax = 1;
AssiPahLimrActv.ReadIn = {'StabyCmpPer1'};
AssiPahLimrActv.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'StabyCmpPer1'};
HwTq.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'StabyCmpPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiCmd = DataDict.OpSignal;
AssiCmd.LongName = 'Assist Command';
AssiCmd.Description = [...
  'Assist component of computed overall motor torque command'];
AssiCmd.DocUnits = 'MotNwtMtr';
AssiCmd.SwcShoName = 'StabyCmp';
AssiCmd.EngDT = dt.float32;
AssiCmd.EngInit = 0;
AssiCmd.EngMin = -8.8;
AssiCmd.EngMax = 8.8;
AssiCmd.TestTolerance = 0.000488281;
AssiCmd.WrittenIn = {'StabyCmpPer1'};
AssiCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
StabyCmpAssiScaBlndX = DataDict.Calibration;
StabyCmpAssiScaBlndX.LongName = 'Assist Scale Blend X';
StabyCmpAssiScaBlndX.Description = [...
  'Lookup table to determine X-axis of Assist Factor Compensation Blend T' ...
  'able'];
StabyCmpAssiScaBlndX.DocUnits = 'Uls';
StabyCmpAssiScaBlndX.EngDT = dt.u2p14;
StabyCmpAssiScaBlndX.EngVal =  ...
   [1                2];
StabyCmpAssiScaBlndX.EngMin = 0;
StabyCmpAssiScaBlndX.EngMax = 2;
StabyCmpAssiScaBlndX.Cardinality = 'Inin';
StabyCmpAssiScaBlndX.CustomerVisible = false;
StabyCmpAssiScaBlndX.Online = false;
StabyCmpAssiScaBlndX.Impact = 'H';
StabyCmpAssiScaBlndX.TuningOwner = 'CSE';
StabyCmpAssiScaBlndX.GraphLink = {''};
StabyCmpAssiScaBlndX.Monotony = 'Strictly_Increasing';
StabyCmpAssiScaBlndX.MaxGrad = 998;
StabyCmpAssiScaBlndX.PortName = 'StabyCmpAssiScaBlndX';


StabyCmpAssiScaBlndY = DataDict.Calibration;
StabyCmpAssiScaBlndY.LongName = 'Assist Scale Blend Y';
StabyCmpAssiScaBlndY.Description = [...
  'Lookup table to determine Y-axis of Assist Factor Compensation Blend T' ...
  'able'];
StabyCmpAssiScaBlndY.DocUnits = 'Uls';
StabyCmpAssiScaBlndY.EngDT = dt.u2p14;
StabyCmpAssiScaBlndY.EngVal =  ...
   [0                0];
StabyCmpAssiScaBlndY.EngMin = 0;
StabyCmpAssiScaBlndY.EngMax = 1;
StabyCmpAssiScaBlndY.Cardinality = 'Inin';
StabyCmpAssiScaBlndY.CustomerVisible = false;
StabyCmpAssiScaBlndY.Online = false;
StabyCmpAssiScaBlndY.Impact = 'H';
StabyCmpAssiScaBlndY.TuningOwner = 'CSE';
StabyCmpAssiScaBlndY.GraphLink = {'StabyCmpAssiScaBlndX'};
StabyCmpAssiScaBlndY.Monotony = 'Increasing';
StabyCmpAssiScaBlndY.MaxGrad = 998;
StabyCmpAssiScaBlndY.PortName = 'StabyCmpAssiScaBlndY';


StabyCmpHwTqLpFilFrq = DataDict.Calibration;
StabyCmpHwTqLpFilFrq.LongName = 'Handwheel Torque Low Pass Filter Frequency';
StabyCmpHwTqLpFilFrq.Description = [...
  'Low pass filter cutoff frequency for filtered handwheel torque into co' ...
  'mpensator blending lookup table'];
StabyCmpHwTqLpFilFrq.DocUnits = 'Hz';
StabyCmpHwTqLpFilFrq.EngDT = dt.float32;
StabyCmpHwTqLpFilFrq.EngVal = 30;
StabyCmpHwTqLpFilFrq.EngMin = 0.01;
StabyCmpHwTqLpFilFrq.EngMax = 50;
StabyCmpHwTqLpFilFrq.Cardinality = 'Inin';
StabyCmpHwTqLpFilFrq.CustomerVisible = false;
StabyCmpHwTqLpFilFrq.Online = false;
StabyCmpHwTqLpFilFrq.Impact = 'H';
StabyCmpHwTqLpFilFrq.TuningOwner = 'CSE';
StabyCmpHwTqLpFilFrq.GraphLink = {''};
StabyCmpHwTqLpFilFrq.Monotony = 'None';
StabyCmpHwTqLpFilFrq.MaxGrad = 0;
StabyCmpHwTqLpFilFrq.PortName = 'StabyCmpHwTqLpFilFrq';


StabyCmpNotchFil1Struct = DataDict.Calibration;
StabyCmpNotchFil1Struct.LongName = 'Notch Filter 1 Structure';
StabyCmpNotchFil1Struct.Description = [...
  'Notch filter 1 structure with all gains B0,B1,B2,A1 and A2'];
StabyCmpNotchFil1Struct.DocUnits = 'Uls';
StabyCmpNotchFil1Struct.EngDT = struct.FilNotchGainRec1;
StabyCmpNotchFil1Struct.EngVal = [struct('FilGainB0',1,'FilGainB1',0,'FilGainB2',0,'FilGainA1',0,'FilGainA2',0)];
StabyCmpNotchFil1Struct.EngMin = [struct('FilGainB0',0,'FilGainB1',-4500,'FilGainB2',-4,'FilGainA1',-2,'FilGainA2',-1)];
StabyCmpNotchFil1Struct.EngMax = [struct('FilGainB0',2300,'FilGainB1',0,'FilGainB2',2300,'FilGainA1',0,'FilGainA2',1)];
StabyCmpNotchFil1Struct.Cardinality = 'Inin';
StabyCmpNotchFil1Struct.CustomerVisible = false;
StabyCmpNotchFil1Struct.Online = false;
StabyCmpNotchFil1Struct.Impact = 'H';
StabyCmpNotchFil1Struct.TuningOwner = 'CSE';
StabyCmpNotchFil1Struct.GraphLink = {''};
StabyCmpNotchFil1Struct.Monotony = 'None';
StabyCmpNotchFil1Struct.MaxGrad = 0;
StabyCmpNotchFil1Struct.PortName = 'StabyCmpNotchFil1Struct';


StabyCmpNotchFil2Struct = DataDict.Calibration;
StabyCmpNotchFil2Struct.LongName = 'Notch Filter 2 Structure';
StabyCmpNotchFil2Struct.Description = [...
  'Notch filter 2 structure with all gains B0,B1,B2,A1 and A2'];
StabyCmpNotchFil2Struct.DocUnits = 'Uls';
StabyCmpNotchFil2Struct.EngDT = struct.FilNotchGainRec1;
StabyCmpNotchFil2Struct.EngVal = [struct('FilGainB0',1,'FilGainB1',0,'FilGainB2',0,'FilGainA1',0,'FilGainA2',0)];
StabyCmpNotchFil2Struct.EngMin = [struct('FilGainB0',0,'FilGainB1',-4500,'FilGainB2',-4,'FilGainA1',-2,'FilGainA2',-1)];
StabyCmpNotchFil2Struct.EngMax = [struct('FilGainB0',2300,'FilGainB1',0,'FilGainB2',2300,'FilGainA1',0,'FilGainA2',1)];
StabyCmpNotchFil2Struct.Cardinality = 'Inin';
StabyCmpNotchFil2Struct.CustomerVisible = false;
StabyCmpNotchFil2Struct.Online = false;
StabyCmpNotchFil2Struct.Impact = 'H';
StabyCmpNotchFil2Struct.TuningOwner = 'CSE';
StabyCmpNotchFil2Struct.GraphLink = {''};
StabyCmpNotchFil2Struct.Monotony = 'None';
StabyCmpNotchFil2Struct.MaxGrad = 0;
StabyCmpNotchFil2Struct.PortName = 'StabyCmpNotchFil2Struct';


StabyCmpNotchFil3Struct = DataDict.Calibration;
StabyCmpNotchFil3Struct.LongName = 'Notch Filter 3 Structure';
StabyCmpNotchFil3Struct.Description = [...
  'Notch filter 3 struture with all gains B0,B1,B2,A1 and A2'];
StabyCmpNotchFil3Struct.DocUnits = 'Uls';
StabyCmpNotchFil3Struct.EngDT = struct.FilNotchGainRec1;
StabyCmpNotchFil3Struct.EngVal = [struct('FilGainB0',1,'FilGainB1',0,'FilGainB2',0,'FilGainA1',0,'FilGainA2',0)];
StabyCmpNotchFil3Struct.EngMin = [struct('FilGainB0',0,'FilGainB1',-4500,'FilGainB2',-4,'FilGainA1',-2,'FilGainA2',-1)];
StabyCmpNotchFil3Struct.EngMax = [struct('FilGainB0',2300,'FilGainB1',0,'FilGainB2',2300,'FilGainA1',0,'FilGainA2',1)];
StabyCmpNotchFil3Struct.Cardinality = 'Inin';
StabyCmpNotchFil3Struct.CustomerVisible = false;
StabyCmpNotchFil3Struct.Online = false;
StabyCmpNotchFil3Struct.Impact = 'H';
StabyCmpNotchFil3Struct.TuningOwner = 'CSE';
StabyCmpNotchFil3Struct.GraphLink = {''};
StabyCmpNotchFil3Struct.Monotony = 'None';
StabyCmpNotchFil3Struct.MaxGrad = 0;
StabyCmpNotchFil3Struct.PortName = 'StabyCmpNotchFil3Struct';


StabyCmpNotchFil4Struct = DataDict.Calibration;
StabyCmpNotchFil4Struct.LongName = 'Notch Filter 4 Structure';
StabyCmpNotchFil4Struct.Description = [...
  'Notch filter 4 structure with all gains B0,B1,B2,A1 and A2'];
StabyCmpNotchFil4Struct.DocUnits = 'Uls';
StabyCmpNotchFil4Struct.EngDT = struct.FilNotchGainRec1;
StabyCmpNotchFil4Struct.EngVal = [struct('FilGainB0',1,'FilGainB1',0,'FilGainB2',0,'FilGainA1',0,'FilGainA2',0)];
StabyCmpNotchFil4Struct.EngMin = [struct('FilGainB0',0,'FilGainB1',-4500,'FilGainB2',-4,'FilGainA1',-2,'FilGainA2',-1)];
StabyCmpNotchFil4Struct.EngMax = [struct('FilGainB0',2300,'FilGainB1',0,'FilGainB2',2300,'FilGainA1',0,'FilGainA2',1)];
StabyCmpNotchFil4Struct.Cardinality = 'Inin';
StabyCmpNotchFil4Struct.CustomerVisible = false;
StabyCmpNotchFil4Struct.Online = false;
StabyCmpNotchFil4Struct.Impact = 'H';
StabyCmpNotchFil4Struct.TuningOwner = 'CSE';
StabyCmpNotchFil4Struct.GraphLink = {''};
StabyCmpNotchFil4Struct.Monotony = 'None';
StabyCmpNotchFil4Struct.MaxGrad = 0;
StabyCmpNotchFil4Struct.PortName = 'StabyCmpNotchFil4Struct';


StabyCmpNotchFilBilnrBlndVehSpd = DataDict.Calibration;
StabyCmpNotchFilBilnrBlndVehSpd.LongName = 'Notch Filter Bilinear Blend Vehicle Speed';
StabyCmpNotchFilBilnrBlndVehSpd.Description = [...
  'Compensator Blend table as a function of vehicle speed'];
StabyCmpNotchFilBilnrBlndVehSpd.DocUnits = 'Kph';
StabyCmpNotchFilBilnrBlndVehSpd.EngDT = dt.u9p7;
StabyCmpNotchFilBilnrBlndVehSpd.EngVal =  ...
   [0               10               30               45               60               80];
StabyCmpNotchFilBilnrBlndVehSpd.EngMin = 0;
StabyCmpNotchFilBilnrBlndVehSpd.EngMax = 511;
StabyCmpNotchFilBilnrBlndVehSpd.Cardinality = 'Inin';
StabyCmpNotchFilBilnrBlndVehSpd.CustomerVisible = false;
StabyCmpNotchFilBilnrBlndVehSpd.Online = false;
StabyCmpNotchFilBilnrBlndVehSpd.Impact = 'H';
StabyCmpNotchFilBilnrBlndVehSpd.TuningOwner = 'CSE';
StabyCmpNotchFilBilnrBlndVehSpd.GraphLink = {''};
StabyCmpNotchFilBilnrBlndVehSpd.Monotony = 'Strictly_Increasing';
StabyCmpNotchFilBilnrBlndVehSpd.MaxGrad = 998;
StabyCmpNotchFilBilnrBlndVehSpd.PortName = 'StabyCmpNotchFilBilnrBlndVehSpd';


StabyCmpNotchFilBlnd02Y = DataDict.Calibration;
StabyCmpNotchFilBlnd02Y.LongName = 'Notch Filter Blend 02 Y';
StabyCmpNotchFilBlnd02Y.Description = [...
  'Compensator Blend 02 table y-variable'];
StabyCmpNotchFilBlnd02Y.DocUnits = 'Uls';
StabyCmpNotchFilBlnd02Y.EngDT = dt.u2p14;
StabyCmpNotchFilBlnd02Y.EngVal =  ...
   [1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1];
StabyCmpNotchFilBlnd02Y.EngMin = 0;
StabyCmpNotchFilBlnd02Y.EngMax = 1;
StabyCmpNotchFilBlnd02Y.Cardinality = 'Inin';
StabyCmpNotchFilBlnd02Y.CustomerVisible = false;
StabyCmpNotchFilBlnd02Y.Online = false;
StabyCmpNotchFilBlnd02Y.Impact = 'H';
StabyCmpNotchFilBlnd02Y.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd02Y.GraphLink = {'StabyCmpNotchFilBlnd12TqX',' StabyCmpNotchFilBilnrBlndVehSpd'};
StabyCmpNotchFilBlnd02Y.Monotony = 'None';
StabyCmpNotchFilBlnd02Y.MaxGrad = 998;
StabyCmpNotchFilBlnd02Y.PortName = 'StabyCmpNotchFilBlnd02Y';


StabyCmpNotchFilBlnd04Y = DataDict.Calibration;
StabyCmpNotchFilBlnd04Y.LongName = 'Notch Filter Blend 04 Y';
StabyCmpNotchFilBlnd04Y.Description = [...
  'Compensator Blend 04 table y-variable'];
StabyCmpNotchFilBlnd04Y.DocUnits = 'Uls';
StabyCmpNotchFilBlnd04Y.EngDT = dt.u2p14;
StabyCmpNotchFilBlnd04Y.EngVal =  ...
   [1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1
    1                1                1                1                1                1];
StabyCmpNotchFilBlnd04Y.EngMin = 0;
StabyCmpNotchFilBlnd04Y.EngMax = 1;
StabyCmpNotchFilBlnd04Y.Cardinality = 'Inin';
StabyCmpNotchFilBlnd04Y.CustomerVisible = false;
StabyCmpNotchFilBlnd04Y.Online = false;
StabyCmpNotchFilBlnd04Y.Impact = 'H';
StabyCmpNotchFilBlnd04Y.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd04Y.GraphLink = {'StabyCmpNotchFilBlnd34TqX',' StabyCmpNotchFilBilnrBlndVehSpd'};
StabyCmpNotchFilBlnd04Y.Monotony = 'None';
StabyCmpNotchFilBlnd04Y.MaxGrad = 998;
StabyCmpNotchFilBlnd04Y.PortName = 'StabyCmpNotchFilBlnd04Y';


StabyCmpNotchFilBlnd12TqX = DataDict.Calibration;
StabyCmpNotchFilBlnd12TqX.LongName = 'Notch Filter Blend 12 Torque X';
StabyCmpNotchFilBlnd12TqX.Description = [...
  'Compensator Blend 12 table x-variable'];
StabyCmpNotchFilBlnd12TqX.DocUnits = 'HwNwtMtr';
StabyCmpNotchFilBlnd12TqX.EngDT = dt.u8p8;
StabyCmpNotchFilBlnd12TqX.EngVal =  ...
   [0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8];
StabyCmpNotchFilBlnd12TqX.EngMin = 0;
StabyCmpNotchFilBlnd12TqX.EngMax = 10;
StabyCmpNotchFilBlnd12TqX.Cardinality = 'Inin';
StabyCmpNotchFilBlnd12TqX.CustomerVisible = false;
StabyCmpNotchFilBlnd12TqX.Online = true;
StabyCmpNotchFilBlnd12TqX.Impact = 'H';
StabyCmpNotchFilBlnd12TqX.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd12TqX.GraphLink = {''};
StabyCmpNotchFilBlnd12TqX.Monotony = 'Strictly_Increasing';
StabyCmpNotchFilBlnd12TqX.MaxGrad = 998;
StabyCmpNotchFilBlnd12TqX.PortName = 'StabyCmpNotchFilBlnd12TqX';


StabyCmpNotchFilBlnd12Y = DataDict.Calibration;
StabyCmpNotchFilBlnd12Y.LongName = 'Notch Filter Blend 12 Y';
StabyCmpNotchFilBlnd12Y.Description = [...
  'Compensator Blend 12 table y-variable'];
StabyCmpNotchFilBlnd12Y.DocUnits = 'Uls';
StabyCmpNotchFilBlnd12Y.EngDT = dt.u2p14;
StabyCmpNotchFilBlnd12Y.EngVal =  ...
   [0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0];
StabyCmpNotchFilBlnd12Y.EngMin = 0;
StabyCmpNotchFilBlnd12Y.EngMax = 1;
StabyCmpNotchFilBlnd12Y.Cardinality = 'Inin';
StabyCmpNotchFilBlnd12Y.CustomerVisible = false;
StabyCmpNotchFilBlnd12Y.Online = true;
StabyCmpNotchFilBlnd12Y.Impact = 'H';
StabyCmpNotchFilBlnd12Y.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd12Y.GraphLink = {'StabyCmpNotchFilBlnd12TqX',' StabyCmpNotchFilBilnrBlndVehSpd'};
StabyCmpNotchFilBlnd12Y.Monotony = 'None';
StabyCmpNotchFilBlnd12Y.MaxGrad = 998;
StabyCmpNotchFilBlnd12Y.PortName = 'StabyCmpNotchFilBlnd12Y';


StabyCmpNotchFilBlnd34TqX = DataDict.Calibration;
StabyCmpNotchFilBlnd34TqX.LongName = 'Notch Filter Blend 34 Torque X';
StabyCmpNotchFilBlnd34TqX.Description = [...
  'Handwheel torque table applied to blending of Compensators 3 and 4.'];
StabyCmpNotchFilBlnd34TqX.DocUnits = 'HwNwtMtr';
StabyCmpNotchFilBlnd34TqX.EngDT = dt.u8p8;
StabyCmpNotchFilBlnd34TqX.EngVal =  ...
   [0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8
    0                2                3                4                6                8];
StabyCmpNotchFilBlnd34TqX.EngMin = 0;
StabyCmpNotchFilBlnd34TqX.EngMax = 10;
StabyCmpNotchFilBlnd34TqX.Cardinality = 'Inin';
StabyCmpNotchFilBlnd34TqX.CustomerVisible = false;
StabyCmpNotchFilBlnd34TqX.Online = false;
StabyCmpNotchFilBlnd34TqX.Impact = 'H';
StabyCmpNotchFilBlnd34TqX.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd34TqX.GraphLink = {''};
StabyCmpNotchFilBlnd34TqX.Monotony = 'Strictly_Increasing';
StabyCmpNotchFilBlnd34TqX.MaxGrad = 998;
StabyCmpNotchFilBlnd34TqX.PortName = 'StabyCmpNotchFilBlnd34TqX';


StabyCmpNotchFilBlnd34Y = DataDict.Calibration;
StabyCmpNotchFilBlnd34Y.LongName = 'Notch Filter Blend 34 Y';
StabyCmpNotchFilBlnd34Y.Description = [...
  'Compensator Blend 34 table y-variable'];
StabyCmpNotchFilBlnd34Y.DocUnits = 'Uls';
StabyCmpNotchFilBlnd34Y.EngDT = dt.u2p14;
StabyCmpNotchFilBlnd34Y.EngVal =  ...
   [0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0
    0                0                0                0                0                0];
StabyCmpNotchFilBlnd34Y.EngMin = 0;
StabyCmpNotchFilBlnd34Y.EngMax = 1;
StabyCmpNotchFilBlnd34Y.Cardinality = 'Inin';
StabyCmpNotchFilBlnd34Y.CustomerVisible = false;
StabyCmpNotchFilBlnd34Y.Online = false;
StabyCmpNotchFilBlnd34Y.Impact = 'H';
StabyCmpNotchFilBlnd34Y.TuningOwner = 'CSE';
StabyCmpNotchFilBlnd34Y.GraphLink = {'StabyCmpNotchFilBlnd34TqX',' StabyCmpNotchFilBilnrBlndVehSpd'};
StabyCmpNotchFilBlnd34Y.Monotony = 'None';
StabyCmpNotchFilBlnd34Y.MaxGrad = 998;
StabyCmpNotchFilBlnd34Y.PortName = 'StabyCmpNotchFilBlnd34Y';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dStabyCmpAssiScaCmpBlnd = DataDict.Display;
dStabyCmpAssiScaCmpBlnd.LongName = 'Assist Scale Compensation Blend';
dStabyCmpAssiScaCmpBlnd.Description = [...
  'Blend factor between compensators 1,2 (val=0) and compensators 3,4 (va' ...
  'l=1).'];
dStabyCmpAssiScaCmpBlnd.DocUnits = 'Uls';
dStabyCmpAssiScaCmpBlnd.EngDT = dt.float32;
dStabyCmpAssiScaCmpBlnd.EngMin = 0;
dStabyCmpAssiScaCmpBlnd.EngMax = 1;
dStabyCmpAssiScaCmpBlnd.InitRowCol = [1  1];


dStabyCmpNotchFil02Blnd = DataDict.Display;
dStabyCmpNotchFil02Blnd.LongName = 'Notch Filter Zero Two Blend';
dStabyCmpNotchFil02Blnd.Description = [...
  'Blend factor between zero compensation (val = 0) and compensator #2 (v' ...
  'al = 1).'];
dStabyCmpNotchFil02Blnd.DocUnits = 'Uls';
dStabyCmpNotchFil02Blnd.EngDT = dt.float32;
dStabyCmpNotchFil02Blnd.EngMin = 0;
dStabyCmpNotchFil02Blnd.EngMax = 1;
dStabyCmpNotchFil02Blnd.InitRowCol = [1  1];


dStabyCmpNotchFil04Blnd = DataDict.Display;
dStabyCmpNotchFil04Blnd.LongName = 'Notch Filter Zero Four Blend';
dStabyCmpNotchFil04Blnd.Description = [...
  'Blend factor between zero compensation (val = 0) and compensator #4 (v' ...
  'al = 1).'];
dStabyCmpNotchFil04Blnd.DocUnits = 'Uls';
dStabyCmpNotchFil04Blnd.EngDT = dt.float32;
dStabyCmpNotchFil04Blnd.EngMin = 0;
dStabyCmpNotchFil04Blnd.EngMax = 1;
dStabyCmpNotchFil04Blnd.InitRowCol = [1  1];


dStabyCmpNotchFil12Blnd = DataDict.Display;
dStabyCmpNotchFil12Blnd.LongName = 'Notch Filter One Two Blend';
dStabyCmpNotchFil12Blnd.Description = [...
  'Blend factor between compensator #1 (val = 0) and compensator #2 (val ' ...
  '= 1).'];
dStabyCmpNotchFil12Blnd.DocUnits = 'Uls';
dStabyCmpNotchFil12Blnd.EngDT = dt.float32;
dStabyCmpNotchFil12Blnd.EngMin = 0;
dStabyCmpNotchFil12Blnd.EngMax = 1;
dStabyCmpNotchFil12Blnd.InitRowCol = [1  1];


dStabyCmpNotchFil12Outp = DataDict.Display;
dStabyCmpNotchFil12Outp.LongName = 'Notch Filter One Two Output';
dStabyCmpNotchFil12Outp.Description = [...
  'Otuput command from blending compensators 1 and 2.'];
dStabyCmpNotchFil12Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil12Outp.EngDT = dt.float32;
dStabyCmpNotchFil12Outp.EngMin = -8.8;
dStabyCmpNotchFil12Outp.EngMax = 8.8;
dStabyCmpNotchFil12Outp.InitRowCol = [1  1];


dStabyCmpNotchFil1Outp = DataDict.Display;
dStabyCmpNotchFil1Outp.LongName = 'Notch Filter One Output';
dStabyCmpNotchFil1Outp.Description = 'Output from compensator #1.';
dStabyCmpNotchFil1Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil1Outp.EngDT = dt.float32;
dStabyCmpNotchFil1Outp.EngMin = -8.8;
dStabyCmpNotchFil1Outp.EngMax = 8.8;
dStabyCmpNotchFil1Outp.InitRowCol = [1  1];


dStabyCmpNotchFil2Outp = DataDict.Display;
dStabyCmpNotchFil2Outp.LongName = 'Notch Filter Two Output';
dStabyCmpNotchFil2Outp.Description = 'Output from compensator #2.';
dStabyCmpNotchFil2Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil2Outp.EngDT = dt.float32;
dStabyCmpNotchFil2Outp.EngMin = -8.8;
dStabyCmpNotchFil2Outp.EngMax = 8.8;
dStabyCmpNotchFil2Outp.InitRowCol = [1  1];


dStabyCmpNotchFil34Blnd = DataDict.Display;
dStabyCmpNotchFil34Blnd.LongName = 'Notch Filter Three Four Blend';
dStabyCmpNotchFil34Blnd.Description = [...
  'Blend factor between compensator #3 (val = 0) and compensator #4 (val ' ...
  '= 1).'];
dStabyCmpNotchFil34Blnd.DocUnits = 'Uls';
dStabyCmpNotchFil34Blnd.EngDT = dt.float32;
dStabyCmpNotchFil34Blnd.EngMin = 0;
dStabyCmpNotchFil34Blnd.EngMax = 1;
dStabyCmpNotchFil34Blnd.InitRowCol = [1  1];


dStabyCmpNotchFil34Outp = DataDict.Display;
dStabyCmpNotchFil34Outp.LongName = 'Filter Three Four Output';
dStabyCmpNotchFil34Outp.Description = 'Output from compensator #4.';
dStabyCmpNotchFil34Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil34Outp.EngDT = dt.float32;
dStabyCmpNotchFil34Outp.EngMin = -8.8;
dStabyCmpNotchFil34Outp.EngMax = 8.8;
dStabyCmpNotchFil34Outp.InitRowCol = [1  1];


dStabyCmpNotchFil3Outp = DataDict.Display;
dStabyCmpNotchFil3Outp.LongName = 'Notch Filter Three Output';
dStabyCmpNotchFil3Outp.Description = 'Output from compensator #3.';
dStabyCmpNotchFil3Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil3Outp.EngDT = dt.float32;
dStabyCmpNotchFil3Outp.EngMin = -8.8;
dStabyCmpNotchFil3Outp.EngMax = 8.8;
dStabyCmpNotchFil3Outp.InitRowCol = [1  1];


dStabyCmpNotchFil4Outp = DataDict.Display;
dStabyCmpNotchFil4Outp.LongName = 'Notch Filter Four Output';
dStabyCmpNotchFil4Outp.Description = 'Output from compensator #4.';
dStabyCmpNotchFil4Outp.DocUnits = 'MotNwtMtr';
dStabyCmpNotchFil4Outp.EngDT = dt.float32;
dStabyCmpNotchFil4Outp.EngMin = -8.8;
dStabyCmpNotchFil4Outp.EngMax = 8.8;
dStabyCmpNotchFil4Outp.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AssiNotch1Fil1 = DataDict.PIM;
AssiNotch1Fil1.LongName = 'Assist Notch 1 Filter';
AssiNotch1Fil1.Description = [...
  'Structure for Notch filter 1 on assist containing state variables.'];
AssiNotch1Fil1.DocUnits = 'HwNwtMtr';
AssiNotch1Fil1.EngDT = dt.float32;
AssiNotch1Fil1.EngMin = -1000000000;
AssiNotch1Fil1.EngMax = 1000000000;
AssiNotch1Fil1.InitRowCol = [1  1];


AssiNotch1Fil2 = DataDict.PIM;
AssiNotch1Fil2.LongName = 'Assist Notch 1 Filter';
AssiNotch1Fil2.Description = [...
  'Structure for Notch filter 1 on assist containing state variables.'];
AssiNotch1Fil2.DocUnits = 'HwNwtMtr';
AssiNotch1Fil2.EngDT = dt.float32;
AssiNotch1Fil2.EngMin = -1000000000;
AssiNotch1Fil2.EngMax = 1000000000;
AssiNotch1Fil2.InitRowCol = [1  1];


AssiNotch2Fil1 = DataDict.PIM;
AssiNotch2Fil1.LongName = 'Assist Notch 2 Filter';
AssiNotch2Fil1.Description = [...
  'Structure for Notch filter 2 on assist containing state variables.'];
AssiNotch2Fil1.DocUnits = 'HwNwtMtr';
AssiNotch2Fil1.EngDT = dt.float32;
AssiNotch2Fil1.EngMin = -1000000000;
AssiNotch2Fil1.EngMax = 1000000000;
AssiNotch2Fil1.InitRowCol = [1  1];


AssiNotch2Fil2 = DataDict.PIM;
AssiNotch2Fil2.LongName = 'Assist Notch 2 Filter';
AssiNotch2Fil2.Description = [...
  'Structure for Notch filter 2 on assist containing state variables.'];
AssiNotch2Fil2.DocUnits = 'HwNwtMtr';
AssiNotch2Fil2.EngDT = dt.float32;
AssiNotch2Fil2.EngMin = -1000000000;
AssiNotch2Fil2.EngMax = 1000000000;
AssiNotch2Fil2.InitRowCol = [1  1];


AssiNotch3Fil1 = DataDict.PIM;
AssiNotch3Fil1.LongName = 'Assist Notch 3 Filter';
AssiNotch3Fil1.Description = [...
  'Structure for Notch filter 3 on assist containing state variables.'];
AssiNotch3Fil1.DocUnits = 'HwNwtMtr';
AssiNotch3Fil1.EngDT = dt.float32;
AssiNotch3Fil1.EngMin = -1000000000;
AssiNotch3Fil1.EngMax = 1000000000;
AssiNotch3Fil1.InitRowCol = [1  1];


AssiNotch3Fil2 = DataDict.PIM;
AssiNotch3Fil2.LongName = 'Assist Notch 3 Filter';
AssiNotch3Fil2.Description = [...
  'Structure for Notch filter 3 on assist containing state variables.'];
AssiNotch3Fil2.DocUnits = 'HwNwtMtr';
AssiNotch3Fil2.EngDT = dt.float32;
AssiNotch3Fil2.EngMin = -1000000000;
AssiNotch3Fil2.EngMax = 1000000000;
AssiNotch3Fil2.InitRowCol = [1  1];


AssiNotch4Fil1 = DataDict.PIM;
AssiNotch4Fil1.LongName = 'Assist Notch 4 Filter';
AssiNotch4Fil1.Description = [...
  'Structure for Notch filter 4 on assist containing state variables.'];
AssiNotch4Fil1.DocUnits = 'HwNwtMtr';
AssiNotch4Fil1.EngDT = dt.float32;
AssiNotch4Fil1.EngMin = -1000000000;
AssiNotch4Fil1.EngMax = 1000000000;
AssiNotch4Fil1.InitRowCol = [1  1];


AssiNotch4Fil2 = DataDict.PIM;
AssiNotch4Fil2.LongName = 'Assist Notch 4 Filter';
AssiNotch4Fil2.Description = [...
  'Structure for Notch filter 4 on assist containing state variables.'];
AssiNotch4Fil2.DocUnits = 'HwNwtMtr';
AssiNotch4Fil2.EngDT = dt.float32;
AssiNotch4Fil2.EngMin = -1000000000;
AssiNotch4Fil2.EngMax = 1000000000;
AssiNotch4Fil2.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Low Pass Filter';
HwTqLpFil.Description = [...
  'Structure for a low pass filter on Handwheel Torque containing state v' ...
  'ariable.'];
HwTqLpFil.DocUnits = 'HwNwtMtr';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFil.InitRowCol = [1  1];



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


CMPINPLIM_MOTNWTMTR_F32 = DataDict.Constant;
CMPINPLIM_MOTNWTMTR_F32.LongName = 'Compensation Input Limit';
CMPINPLIM_MOTNWTMTR_F32.Description = [...
  'Maximum allowable value of CombinedAssist input.'];
CMPINPLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
CMPINPLIM_MOTNWTMTR_F32.EngDT = dt.float32;
CMPINPLIM_MOTNWTMTR_F32.EngVal = 10.275;
CMPINPLIM_MOTNWTMTR_F32.Define = 'Local';


FLTINJ_STABYCMP_ASSICMD = DataDict.Constant;
FLTINJ_STABYCMP_ASSICMD.LongName = 'Fault Injection Stability Compensation Assist Command';
FLTINJ_STABYCMP_ASSICMD.Description = [...
  'Fault Injection Stability Compensation Assist Command Constant'];
FLTINJ_STABYCMP_ASSICMD.DocUnits = 'Uls';
FLTINJ_STABYCMP_ASSICMD.EngDT = dt.u16;
FLTINJ_STABYCMP_ASSICMD.EngVal = 7;
FLTINJ_STABYCMP_ASSICMD.Define = 'Global';


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
