%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Jun-2017 10:10:11       %
%                                  Created with tool release: 2.58.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF002A = DataDict.FDD;
SF002A.Version = '2.2.X';
SF002A.LongName = 'Return';
SF002A.ShoName  = 'Rtn';
SF002A.DesignASIL = 'QM';
SF002A.Description = [...
  'The Return function shall provide return to center capability to enhan' ...
  'ce vehicle returnability. This is achieved by applying output force to' ...
  'ward center as a function of output position and vehicle speed Thispos' ...
  'ition-based output is modified for the given driving situation basedon' ...
  ' Handwheel  Torque, Handwheel Velocity, and system temperature.Outputc' ...
  'an be defeated or reduced until Handwheel Position is known with fullc' ...
  'onfidence, which may occur at startup or upon completion of a learning' ...
  'procedure. Finally, output is directly scaled higher or lower byadditi' ...
  'onal inputs (e.g. customer signals, diagnostics).'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
RtnInit1 = DataDict.Runnable;
RtnInit1.Context = 'Rte';
RtnInit1.TimeStep = 0;
RtnInit1.Description = 'Return Init Runnable';

RtnPer1 = DataDict.Runnable;
RtnPer1.Context = 'Rte';
RtnPer1.TimeStep = 0.002;
RtnPer1.Description = [...
  'Return Periodic Runnable executing at two milliseconds'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'RtnPer1'};
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
AssiMechT = DataDict.IpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature';
AssiMechT.Description = 'Assist Mechanism Temperature';
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 0;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.ReadIn = {'RtnPer1'};
AssiMechT.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'RtnPer1'};
HwAg.ReadType = 'Rte';


HwAgAuthySca = DataDict.IpSignal;
HwAgAuthySca.LongName = 'Handwheel Angle Authority Scale';
HwAgAuthySca.Description = 'Handwheel Angle Authority Scale';
HwAgAuthySca.DocUnits = 'Uls';
HwAgAuthySca.EngDT = dt.float32;
HwAgAuthySca.EngInit = 0;
HwAgAuthySca.EngMin = 0;
HwAgAuthySca.EngMax = 1;
HwAgAuthySca.ReadIn = {'RtnPer1'};
HwAgAuthySca.ReadType = 'Rte';


HwAgRtnOffs = DataDict.IpSignal;
HwAgRtnOffs.LongName = 'Handwheel Angle Return Offset';
HwAgRtnOffs.Description = 'Handwheel Angle Return Offset';
HwAgRtnOffs.DocUnits = 'HwDeg';
HwAgRtnOffs.EngDT = dt.float32;
HwAgRtnOffs.EngInit = 0;
HwAgRtnOffs.EngMin = 0;
HwAgRtnOffs.EngMax = 20;
HwAgRtnOffs.ReadIn = {'RtnPer1'};
HwAgRtnOffs.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'RtnPer1'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'RtnPer1'};
HwVel.ReadType = 'Rte';


RtnCmdDi = DataDict.IpSignal;
RtnCmdDi.LongName = 'Return Command Disable';
RtnCmdDi.Description = 'Return Command Disable';
RtnCmdDi.DocUnits = 'Cnt';
RtnCmdDi.EngDT = dt.lgc;
RtnCmdDi.EngInit = 0;
RtnCmdDi.EngMin = 0;
RtnCmdDi.EngMax = 1;
RtnCmdDi.ReadIn = {'RtnPer1'};
RtnCmdDi.ReadType = 'Rte';


RtnCmdDiagcDi = DataDict.IpSignal;
RtnCmdDiagcDi.LongName = 'Return Command Diagnostic Disable';
RtnCmdDiagcDi.Description = 'Return Command Diagnostic Disable';
RtnCmdDiagcDi.DocUnits = 'Cnt';
RtnCmdDiagcDi.EngDT = dt.lgc;
RtnCmdDiagcDi.EngInit = 0;
RtnCmdDiagcDi.EngMin = 0;
RtnCmdDiagcDi.EngMax = 1;
RtnCmdDiagcDi.ReadIn = {'RtnPer1'};
RtnCmdDiagcDi.ReadType = 'Rte';


RtnCmdSca = DataDict.IpSignal;
RtnCmdSca.LongName = 'Return Command Scale';
RtnCmdSca.Description = 'Return Command Scale';
RtnCmdSca.DocUnits = 'Uls';
RtnCmdSca.EngDT = dt.float32;
RtnCmdSca.EngInit = 0;
RtnCmdSca.EngMin = 0;
RtnCmdSca.EngMax = 1;
RtnCmdSca.ReadIn = {'RtnPer1'};
RtnCmdSca.ReadType = 'Rte';


RtnCmdScaServo = DataDict.IpSignal;
RtnCmdScaServo.LongName = 'Return Command Scale Servo';
RtnCmdScaServo.Description = 'Return Command Scale Servo';
RtnCmdScaServo.DocUnits = 'Uls';
RtnCmdScaServo.EngDT = dt.float32;
RtnCmdScaServo.EngInit = 1;
RtnCmdScaServo.EngMin = 0;
RtnCmdScaServo.EngMax = 1;
RtnCmdScaServo.ReadIn = {'RtnPer1'};
RtnCmdScaServo.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'RtnPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle Speed Validity Bit';
VehSpdVld.DocUnits = 'Uls';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 1;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'RtnPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
RtnCmd = DataDict.OpSignal;
RtnCmd.LongName = 'Return Command';
RtnCmd.Description = [...
  'Return component of overall motor torque command computed'];
RtnCmd.DocUnits = 'MotNwtMtr';
RtnCmd.SwcShoName = 'Rtn';
RtnCmd.EngDT = dt.float32;
RtnCmd.EngInit = 0;
RtnCmd.EngMin = -8.8;
RtnCmd.EngMax = 8.8;
RtnCmd.TestTolerance = 0.000488281;
RtnCmd.WrittenIn = {'RtnPer1'};
RtnCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
RtnHwAgOffsCalcdX = DataDict.Calibration;
RtnHwAgOffsCalcdX.LongName = 'Return Handwheel Angle Offset Calculated X';
RtnHwAgOffsCalcdX.Description = [...
  'Table used to provide the return as a function of absolute handwheel a' ...
  'ngle. X-axis of table'];
RtnHwAgOffsCalcdX.DocUnits = 'HwDeg';
RtnHwAgOffsCalcdX.EngDT = dt.u12p4;
RtnHwAgOffsCalcdX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    1                1                1                1                1                1                1                1                1
    5                5                5                5                5                5                5                5                5
    10               10               10               10               10               10               10               10               10
    20               20               20               20               20               20               20               20               20
    30               30               30               30               30               30               30               30               30
    45               45               45               45               45               45               45               45               45
    60               60               60               60               60               60               60               60               60
    90               90               90               90               90               90               90               90               90
    120              120              120              120              120              120              120              120              120
    180              180              180              180              180              180              180              180              180
    270              270              270              270              270              270              270              270              270
    360              360              360              360              360              360              360              360              360
    450              450              450              450              450              450              450              450              450
    540              540              540              540              540              540              540              540              540];
RtnHwAgOffsCalcdX.EngMin = 0;
RtnHwAgOffsCalcdX.EngMax = 1440;
RtnHwAgOffsCalcdX.Cardinality = 'Rt';
RtnHwAgOffsCalcdX.CustomerVisible = true;
RtnHwAgOffsCalcdX.Online = true;
RtnHwAgOffsCalcdX.Impact = 'H';
RtnHwAgOffsCalcdX.TuningOwner = 'CSE';
RtnHwAgOffsCalcdX.GraphLink = {''};
RtnHwAgOffsCalcdX.Monotony = 'Strictly_Increasing';
RtnHwAgOffsCalcdX.MaxGrad = 998;
RtnHwAgOffsCalcdX.PortName = 'RtnHwAgOffsCalcdX';


RtnHwAgOffsCalcdY = DataDict.Calibration;
RtnHwAgOffsCalcdY.LongName = 'Return Handwheel Angle Offset Calculated Y';
RtnHwAgOffsCalcdY.Description = [...
  'Table used to provide the return as a function of absolute handwheel a' ...
  'ngle. Y-Axis of table'];
RtnHwAgOffsCalcdY.DocUnits = 'MotNwtMtr';
RtnHwAgOffsCalcdY.EngDT = dt.u5p11;
RtnHwAgOffsCalcdY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0];
RtnHwAgOffsCalcdY.EngMin = 0;
RtnHwAgOffsCalcdY.EngMax = 1.5;
RtnHwAgOffsCalcdY.Cardinality = 'Rt';
RtnHwAgOffsCalcdY.CustomerVisible = true;
RtnHwAgOffsCalcdY.Online = true;
RtnHwAgOffsCalcdY.Impact = 'H';
RtnHwAgOffsCalcdY.TuningOwner = 'CSE';
RtnHwAgOffsCalcdY.GraphLink = {'RtnHwAgOffsCalcdX',' RtnVehSpdSeln'};
RtnHwAgOffsCalcdY.Monotony = 'None';
RtnHwAgOffsCalcdY.MaxGrad = 998;
RtnHwAgOffsCalcdY.PortName = 'RtnHwAgOffsCalcdY';


RtnHwAuthyScaX = DataDict.Calibration;
RtnHwAuthyScaX.LongName = 'Handwheel Authority Scale X';
RtnHwAuthyScaX.Description = [...
  'Index Into Handwheel Authority Scaler Lookup Table'];
RtnHwAuthyScaX.DocUnits = 'Uls';
RtnHwAuthyScaX.EngDT = dt.u8p8;
RtnHwAuthyScaX.EngVal =  ...
   [0              0.5             0.75                1];
RtnHwAuthyScaX.EngMin = 0;
RtnHwAuthyScaX.EngMax = 1;
RtnHwAuthyScaX.Cardinality = 'Inin';
RtnHwAuthyScaX.CustomerVisible = false;
RtnHwAuthyScaX.Online = false;
RtnHwAuthyScaX.Impact = 'H';
RtnHwAuthyScaX.TuningOwner = 'CSE';
RtnHwAuthyScaX.GraphLink = {''};
RtnHwAuthyScaX.Monotony = 'Strictly_Increasing';
RtnHwAuthyScaX.MaxGrad = 998;
RtnHwAuthyScaX.PortName = 'RtnHwAuthyScaX';


RtnHwAuthyScaY = DataDict.Calibration;
RtnHwAuthyScaY.LongName = 'Handwheel Authority Scale Y';
RtnHwAuthyScaY.Description = [...
  'Output value from Handwheel Authority Scalar Lookup Table'];
RtnHwAuthyScaY.DocUnits = 'Uls';
RtnHwAuthyScaY.EngDT = dt.u9p7;
RtnHwAuthyScaY.EngVal =  ...
   [0                0                0                1];
RtnHwAuthyScaY.EngMin = 0;
RtnHwAuthyScaY.EngMax = 1;
RtnHwAuthyScaY.Cardinality = 'Inin';
RtnHwAuthyScaY.CustomerVisible = false;
RtnHwAuthyScaY.Online = false;
RtnHwAuthyScaY.Impact = 'H';
RtnHwAuthyScaY.TuningOwner = 'CSE';
RtnHwAuthyScaY.GraphLink = {'RtnHwAuthyScaX'};
RtnHwAuthyScaY.Monotony = 'Increasing';
RtnHwAuthyScaY.MaxGrad = 998;
RtnHwAuthyScaY.PortName = 'RtnHwAuthyScaY';


RtnHwAuthySlew = DataDict.Calibration;
RtnHwAuthySlew.LongName = 'Handwheel Authority Slew';
RtnHwAuthySlew.Description = 'Slew rate limit cal';
RtnHwAuthySlew.DocUnits = 'UlsPerSec';
RtnHwAuthySlew.EngDT = dt.float32;
RtnHwAuthySlew.EngVal = 0.5;
RtnHwAuthySlew.EngMin = 0.1;
RtnHwAuthySlew.EngMax = 10;
RtnHwAuthySlew.Cardinality = 'Inin';
RtnHwAuthySlew.CustomerVisible = false;
RtnHwAuthySlew.Online = false;
RtnHwAuthySlew.Impact = 'H';
RtnHwAuthySlew.TuningOwner = 'CSE';
RtnHwAuthySlew.GraphLink = {''};
RtnHwAuthySlew.Monotony = 'None';
RtnHwAuthySlew.MaxGrad = 998;
RtnHwAuthySlew.PortName = 'RtnHwAuthySlew';


RtnOffsRng = DataDict.Calibration;
RtnOffsRng.LongName = 'Offset Range';
RtnOffsRng.Description = 'Valid offset range cal';
RtnOffsRng.DocUnits = 'HwDeg';
RtnOffsRng.EngDT = dt.float32;
RtnOffsRng.EngVal = 17;
RtnOffsRng.EngMin = 0;
RtnOffsRng.EngMax = 20;
RtnOffsRng.Cardinality = 'Inin';
RtnOffsRng.CustomerVisible = false;
RtnOffsRng.Online = false;
RtnOffsRng.Impact = 'H';
RtnOffsRng.TuningOwner = 'CSE';
RtnOffsRng.GraphLink = {''};
RtnOffsRng.Monotony = 'None';
RtnOffsRng.MaxGrad = 998;
RtnOffsRng.PortName = 'RtnOffsRng';


RtnOffsSlew = DataDict.Calibration;
RtnOffsSlew.LongName = 'Offset Slew';
RtnOffsSlew.Description = 'Slew rate limit cal';
RtnOffsSlew.DocUnits = 'HwDegPerSec';
RtnOffsSlew.EngDT = dt.float32;
RtnOffsSlew.EngVal = 0.04;
RtnOffsSlew.EngMin = 0;
RtnOffsSlew.EngMax = 0.5;
RtnOffsSlew.Cardinality = 'Inin';
RtnOffsSlew.CustomerVisible = false;
RtnOffsSlew.Online = false;
RtnOffsSlew.Impact = 'M';
RtnOffsSlew.TuningOwner = 'CSE';
RtnOffsSlew.GraphLink = {''};
RtnOffsSlew.Monotony = 'None';
RtnOffsSlew.MaxGrad = 998;
RtnOffsSlew.PortName = 'RtnOffsSlew';


RtnScaTqX = DataDict.Calibration;
RtnScaTqX.LongName = 'Scale Torque X';
RtnScaTqX.Description = [...
  'Table used to provide the return as a function of handwheel torque'];
RtnScaTqX.DocUnits = 'HwNwtMtr';
RtnScaTqX.EngDT = dt.u8p8;
RtnScaTqX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    1                1                1                1                1                1                1                1                1
    2                2                2                2                2                2                2                2                2
    3                3                3                3                3                3                3                3                3
    4                4                4                4                4                4                4                4                4
    5                5                5                5                5                5                5                5                5
    10               10               10               10               10               10               10               10               10];
RtnScaTqX.EngMin = 0;
RtnScaTqX.EngMax = 10;
RtnScaTqX.Cardinality = 'Rt';
RtnScaTqX.CustomerVisible = true;
RtnScaTqX.Online = true;
RtnScaTqX.Impact = 'H';
RtnScaTqX.TuningOwner = 'CSE';
RtnScaTqX.GraphLink = {''};
RtnScaTqX.Monotony = 'Strictly_Increasing';
RtnScaTqX.MaxGrad = 998;
RtnScaTqX.PortName = 'RtnScaTqX';


RtnScaTqY = DataDict.Calibration;
RtnScaTqY.LongName = 'Scale Troque Y';
RtnScaTqY.Description = [...
  'Table used to provide the return scaled as a function of handwheel tor' ...
  'que and vehicle speed'];
RtnScaTqY.DocUnits = 'Uls';
RtnScaTqY.EngDT = dt.u8p8;
RtnScaTqY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1];
RtnScaTqY.EngMin = 0;
RtnScaTqY.EngMax = 1;
RtnScaTqY.Cardinality = 'Rt';
RtnScaTqY.CustomerVisible = true;
RtnScaTqY.Online = true;
RtnScaTqY.Impact = 'H';
RtnScaTqY.TuningOwner = 'CSE';
RtnScaTqY.GraphLink = {'RtnScaTqX',' RtnVehSpdSeln'};
RtnScaTqY.Monotony = 'None';
RtnScaTqY.MaxGrad = 998;
RtnScaTqY.PortName = 'RtnScaTqY';


RtnScaVelX = DataDict.Calibration;
RtnScaVelX.LongName = 'Scale Velocity X';
RtnScaVelX.Description = [...
  'Table used to provide the return as a function of handwheel velocity'];
RtnScaVelX.DocUnits = 'HwRadPerSec';
RtnScaVelX.EngDT = dt.u7p9;
RtnScaVelX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0
    40               40               40               40               40               40               40               40               40
    42               42               42               42               42               42               42               42               42
    42               42               42               42               42               42               42               42               42];
RtnScaVelX.EngMin = 0;
RtnScaVelX.EngMax = 42;
RtnScaVelX.Cardinality = 'Rt';
RtnScaVelX.CustomerVisible = true;
RtnScaVelX.Online = true;
RtnScaVelX.Impact = 'H';
RtnScaVelX.TuningOwner = 'CSE';
RtnScaVelX.GraphLink = {''};
RtnScaVelX.Monotony = 'Strictly_Increasing';
RtnScaVelX.MaxGrad = 998;
RtnScaVelX.PortName = 'RtnScaVelX';


RtnScaVelY = DataDict.Calibration;
RtnScaVelY.LongName = 'Scale Velocity Y';
RtnScaVelY.Description = [...
  'Table used to provide the return scaled as a function of handwheel vel' ...
  'ocity and vehicle speed'];
RtnScaVelY.DocUnits = 'Uls';
RtnScaVelY.EngDT = dt.u8p8;
RtnScaVelY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1];
RtnScaVelY.EngMin = 0;
RtnScaVelY.EngMax = 2.5;
RtnScaVelY.Cardinality = 'Rt';
RtnScaVelY.CustomerVisible = true;
RtnScaVelY.Online = true;
RtnScaVelY.Impact = 'H';
RtnScaVelY.TuningOwner = 'CSE';
RtnScaVelY.GraphLink = {'RtnScaVelX',' RtnVehSpdSeln'};
RtnScaVelY.Monotony = 'None';
RtnScaVelY.MaxGrad = 998;
RtnScaVelY.PortName = 'RtnScaVelY';


RtnTScaX = DataDict.Calibration;
RtnTScaX.LongName = 'Temperature Scale X';
RtnTScaX.Description = 'Table of temperature values';
RtnTScaX.DocUnits = 'DegCgrd';
RtnTScaX.EngDT = dt.s11p4;
RtnTScaX.EngVal =  ...
   [-40              -35              -30              -20              -10                0               10               20               30               40               50               60               70               90];
RtnTScaX.EngMin = -50;
RtnTScaX.EngMax = 150;
RtnTScaX.Cardinality = 'Inin';
RtnTScaX.CustomerVisible = false;
RtnTScaX.Online = false;
RtnTScaX.Impact = 'H';
RtnTScaX.TuningOwner = 'CSE';
RtnTScaX.GraphLink = {''};
RtnTScaX.Monotony = 'Strictly_Increasing';
RtnTScaX.MaxGrad = 998;
RtnTScaX.PortName = 'RtnTScaX';


RtnTScaY = DataDict.Calibration;
RtnTScaY.LongName = 'Temperature Scale Y';
RtnTScaY.Description = 'Table of scale values, 0 to 10';
RtnTScaY.DocUnits = 'Uls';
RtnTScaY.EngDT = dt.u8p8;
RtnTScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1                1];
RtnTScaY.EngMin = 0;
RtnTScaY.EngMax = 10;
RtnTScaY.Cardinality = 'Inin';
RtnTScaY.CustomerVisible = false;
RtnTScaY.Online = false;
RtnTScaY.Impact = 'H';
RtnTScaY.TuningOwner = 'CSE';
RtnTScaY.GraphLink = {'RtnTScaX'};
RtnTScaY.Monotony = 'None';
RtnTScaY.MaxGrad = 998;
RtnTScaY.PortName = 'RtnTScaY';


RtnVehSpdSeln = DataDict.Calibration;
RtnVehSpdSeln.LongName = 'Vehicle Speed Selection Table';
RtnVehSpdSeln.Description = [...
  'Table of Vehicle Speed Points corresponding to Return Tables'];
RtnVehSpdSeln.DocUnits = 'Kph';
RtnVehSpdSeln.EngDT = dt.u9p7;
RtnVehSpdSeln.EngVal =  ...
   [0                3                7               12               20               30               45               60               80];
RtnVehSpdSeln.EngMin = 0;
RtnVehSpdSeln.EngMax = 511;
RtnVehSpdSeln.Cardinality = 'Rt';
RtnVehSpdSeln.CustomerVisible = true;
RtnVehSpdSeln.Online = true;
RtnVehSpdSeln.Impact = 'H';
RtnVehSpdSeln.TuningOwner = 'CSE';
RtnVehSpdSeln.GraphLink = {''};
RtnVehSpdSeln.Monotony = 'Increasing';
RtnVehSpdSeln.MaxGrad = 998;
RtnVehSpdSeln.PortName = 'RtnVehSpdSeln';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dRtnAbsltHwAg = DataDict.Display;
dRtnAbsltHwAg.LongName = 'Absolute Handwheel Angle';
dRtnAbsltHwAg.Description = [...
  'Absolute value of handwheel position used in active return lookup tabl' ...
  'e.  May differ from normal HwPos by an offset.'];
dRtnAbsltHwAg.DocUnits = 'HwDeg';
dRtnAbsltHwAg.EngDT = dt.float32;
dRtnAbsltHwAg.EngMin = 0;
dRtnAbsltHwAg.EngMax = 1440;
dRtnAbsltHwAg.InitRowCol = [1  1];


dRtnAssiMechTRtnSca = DataDict.Display;
dRtnAssiMechTRtnSca.LongName = 'Assist Mechanism Temperature Return Scale';
dRtnAssiMechTRtnSca.Description = [...
  'Scale factor applied to active return, based on temperature.'];
dRtnAssiMechTRtnSca.DocUnits = 'Uls';
dRtnAssiMechTRtnSca.EngDT = dt.float32;
dRtnAssiMechTRtnSca.EngMin = 0;
dRtnAssiMechTRtnSca.EngMax = 1;
dRtnAssiMechTRtnSca.InitRowCol = [1  1];


dRtnBascRtn = DataDict.Display;
dRtnBascRtn.LongName = 'Basic Return';
dRtnBascRtn.Description = [...
  'Raw active return, after internally scaling for torque, velocity, and ' ...
  'temperature but before the effects of externally-determined scale fact' ...
  'ors and defeats.'];
dRtnBascRtn.DocUnits = 'MotNwtMtr';
dRtnBascRtn.EngDT = dt.float32;
dRtnBascRtn.EngMin = -8.8;
dRtnBascRtn.EngMax = 8.8;
dRtnBascRtn.InitRowCol = [1  1];


dRtnHwAgAuthySca = DataDict.Display;
dRtnHwAgAuthySca.LongName = 'HandWheel Angle Authority Scale';
dRtnHwAgAuthySca.Description = [...
  'Scale factor applied to active return, based on HandWheel Authority.'];
dRtnHwAgAuthySca.DocUnits = 'Uls';
dRtnHwAgAuthySca.EngDT = dt.float32;
dRtnHwAgAuthySca.EngMin = 0;
dRtnHwAgAuthySca.EngMax = 1;
dRtnHwAgAuthySca.InitRowCol = [1  1];


dRtnHwAgRtnCmd = DataDict.Display;
dRtnHwAgRtnCmd.LongName = 'Handwheel Angle Return Command';
dRtnHwAgRtnCmd.Description = [...
  'Active return value based only on handwheel position, before all scali' ...
  'ng.'];
dRtnHwAgRtnCmd.DocUnits = 'MotNwtMtr';
dRtnHwAgRtnCmd.EngDT = dt.float32;
dRtnHwAgRtnCmd.EngMin = -8.8;
dRtnHwAgRtnCmd.EngMax = 8.8;
dRtnHwAgRtnCmd.InitRowCol = [1  1];


dRtnHwTqRtnSca = DataDict.Display;
dRtnHwTqRtnSca.LongName = 'Handwheel Torque Return Scale';
dRtnHwTqRtnSca.Description = [...
  'Scale factor applied to active return, based on HwTorque and VehSpd.'];
dRtnHwTqRtnSca.DocUnits = 'Uls';
dRtnHwTqRtnSca.EngDT = dt.float32;
dRtnHwTqRtnSca.EngMin = 0;
dRtnHwTqRtnSca.EngMax = 1;
dRtnHwTqRtnSca.InitRowCol = [1  1];


dRtnHwVelRtnSca = DataDict.Display;
dRtnHwVelRtnSca.LongName = 'Handwheel Velocity Return Scale';
dRtnHwVelRtnSca.Description = [...
  'Scale factor applied to active return, based on HwVelocity and VehSpd.' ...
  ''];
dRtnHwVelRtnSca.DocUnits = 'Uls';
dRtnHwVelRtnSca.EngDT = dt.float32;
dRtnHwVelRtnSca.EngMin = 0;
dRtnHwVelRtnSca.EngMax = 1;
dRtnHwVelRtnSca.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PrevHwAgAuthy = DataDict.PIM;
PrevHwAgAuthy.LongName = 'Previous HandWheel Angle Authority';
PrevHwAgAuthy.Description = [...
  'Data Store Previous Return HandWheel Angle Authority Limited value'];
PrevHwAgAuthy.DocUnits = 'Uls';
PrevHwAgAuthy.EngDT = dt.float32;
PrevHwAgAuthy.EngMin = 0;
PrevHwAgAuthy.EngMax = 1;
PrevHwAgAuthy.InitRowCol = [1  1];


PrevHwAgOffsLimd = DataDict.PIM;
PrevHwAgOffsLimd.LongName = 'Previous HandWheel Angle Offset Limited';
PrevHwAgOffsLimd.Description = [...
  'Data Store Previous Return HandWheel Angle Offset value'];
PrevHwAgOffsLimd.DocUnits = 'HwDeg';
PrevHwAgOffsLimd.EngDT = dt.float32;
PrevHwAgOffsLimd.EngMin = 0;
PrevHwAgOffsLimd.EngMax = 20;
PrevHwAgOffsLimd.InitRowCol = [1  1];



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


FLTINJ_RTN_RTNCMD = DataDict.Constant;
FLTINJ_RTN_RTNCMD.LongName = 'Fault Injection Return Command';
FLTINJ_RTN_RTNCMD.Description = [...
  'Fault Injection Return Command Constant'];
FLTINJ_RTN_RTNCMD.DocUnits = 'Uls';
FLTINJ_RTN_RTNCMD.EngDT = dt.u16;
FLTINJ_RTN_RTNCMD.EngVal = 2;
FLTINJ_RTN_RTNCMD.Define = 'Global';


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
