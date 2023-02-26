%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Aug-2016 11:23:14       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF001A = DataDict.FDD;
SF001A.Version = '1.5.x';
SF001A.LongName = 'Assist';
SF001A.ShoName  = 'Assi';
SF001A.DesignASIL = 'QM';
SF001A.Description = [...
  'The Assist Function applies an appropriate level of motor torque based' ...
  ' on handwheel torque andvehicle speed. Its output is modified accordin' ...
  'g to several inputs from other functions. Theseother factors may modif' ...
  'y handwheel torque signal, provide blending to alternative calibration' ...
  ' tables,or add/subtract values from the calculated assist value.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiPer1 = DataDict.Runnable;
AssiPer1.Context = 'Rte';
AssiPer1.TimeStep = 0.002;
AssiPer1.Description = 'Runnable for Assist';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'AssiPer1'};
FltInj_f32.Description = 'Fault injection';
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
AssiCmdBasSca.Description = [...
  'This input determines how much we scale the Assist Command Base.'];
AssiCmdBasSca.DocUnits = 'Uls';
AssiCmdBasSca.EngDT = dt.float32;
AssiCmdBasSca.EngInit = 1;
AssiCmdBasSca.EngMin = 0;
AssiCmdBasSca.EngMax = 1;
AssiCmdBasSca.ReadIn = {'AssiPer1'};
AssiCmdBasSca.ReadType = 'Rte';


AssiLnrGain = DataDict.IpSignal;
AssiLnrGain.LongName = 'Assist Linear Gain';
AssiLnrGain.Description = [...
  'This input determines the Assist Linear Gain.'];
AssiLnrGain.DocUnits = 'Uls';
AssiLnrGain.EngDT = dt.float32;
AssiLnrGain.EngInit = 1;
AssiLnrGain.EngMin = 0;
AssiLnrGain.EngMax = 1;
AssiLnrGain.ReadIn = {'AssiPer1'};
AssiLnrGain.ReadType = 'Rte';


AssiLnrGainEna = DataDict.IpSignal;
AssiLnrGainEna.LongName = 'Assist Linear Gain Enable';
AssiLnrGainEna.Description = [...
  'This input determines whether or not the Assist Linear Gain is enabled' ...
  '.'];
AssiLnrGainEna.DocUnits = 'Cnt';
AssiLnrGainEna.EngDT = dt.lgc;
AssiLnrGainEna.EngInit = 0;
AssiLnrGainEna.EngMin = 0;
AssiLnrGainEna.EngMax = 1;
AssiLnrGainEna.ReadIn = {'AssiPer1'};
AssiLnrGainEna.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'This input reads in the Handwheel Torque.'];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'AssiPer1'};
HwTq.ReadType = 'Rte';


HwTqHysOvrl = DataDict.IpSignal;
HwTqHysOvrl.LongName = 'Handwheel Torque Hysteresis Overlay';
HwTqHysOvrl.Description = [...
  'This input reads in the Handwheel Torque Hysteresis Overlay.'];
HwTqHysOvrl.DocUnits = 'HwNwtMtr';
HwTqHysOvrl.EngDT = dt.float32;
HwTqHysOvrl.EngInit = 0;
HwTqHysOvrl.EngMin = -10;
HwTqHysOvrl.EngMax = 10;
HwTqHysOvrl.ReadIn = {'AssiPer1'};
HwTqHysOvrl.ReadType = 'Rte';


HwTqOvrl = DataDict.IpSignal;
HwTqOvrl.LongName = 'Handwheel Torque Overlay';
HwTqOvrl.Description = [...
  'This input reads in the Handwheel Torque Overlay.'];
HwTqOvrl.DocUnits = 'HwNwtMtr';
HwTqOvrl.EngDT = dt.float32;
HwTqOvrl.EngInit = 0;
HwTqOvrl.EngMin = -10;
HwTqOvrl.EngMax = 10;
HwTqOvrl.ReadIn = {'AssiPer1'};
HwTqOvrl.ReadType = 'Rte';


ThermLimSlowFilMax = DataDict.IpSignal;
ThermLimSlowFilMax.LongName = 'Thermal Limit Slow Filter Maximum';
ThermLimSlowFilMax.Description = [...
  'This input reads in the Termal Limit Slow Filter Maximum.'];
ThermLimSlowFilMax.DocUnits = 'Uls';
ThermLimSlowFilMax.EngDT = dt.float32;
ThermLimSlowFilMax.EngInit = 0;
ThermLimSlowFilMax.EngMin = 0;
ThermLimSlowFilMax.EngMax = 200;
ThermLimSlowFilMax.ReadIn = {'AssiPer1'};
ThermLimSlowFilMax.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'This input reads in the Vehicle Speed.'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'AssiPer1'};
VehSpd.ReadType = 'Rte';


WhlImbRejctnAmp = DataDict.IpSignal;
WhlImbRejctnAmp.LongName = 'Wheel Imbalance Rejection Amplitude';
WhlImbRejctnAmp.Description = [...
  'This input reads in the Wheel Imbalance Rejection Amplitude.'];
WhlImbRejctnAmp.DocUnits = 'MotNwtMtr';
WhlImbRejctnAmp.EngDT = dt.float32;
WhlImbRejctnAmp.EngInit = 0;
WhlImbRejctnAmp.EngMin = 0;
WhlImbRejctnAmp.EngMax = 8.8;
WhlImbRejctnAmp.ReadIn = {'AssiPer1'};
WhlImbRejctnAmp.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiCmdBas = DataDict.OpSignal;
AssiCmdBas.LongName = 'Assist Command Base';
AssiCmdBas.Description = 'Base Assist Command';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.SwcShoName = 'Assi';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.TestTolerance = 0.0005;
AssiCmdBas.WrittenIn = {'AssiPer1'};
AssiCmdBas.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiMotTqWhlImbRejctnMaxX = DataDict.Calibration;
AssiMotTqWhlImbRejctnMaxX.LongName = 'Handwheel Torque Wheel Imbalance Rejection Maximum';
AssiMotTqWhlImbRejctnMaxX.Description = [...
  'Handwheel Torque input for look-up table when WIR Command = MAXIMUM'];
AssiMotTqWhlImbRejctnMaxX.DocUnits = 'HwNwtMtr';
AssiMotTqWhlImbRejctnMaxX.EngDT = dt.u8p8;
AssiMotTqWhlImbRejctnMaxX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.1015625        0.1015625        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188
    0.2070313        0.3046875           0.3125           0.3125           0.3125        0.3085938           0.3125         0.390625         0.390625         0.390625         0.390625         0.390625
    0.2460938        0.3945313        0.4414063        0.4296875        0.4335938        0.4335938        0.4140625        0.5078125        0.5078125        0.5078125        0.5078125        0.5078125
    0.2890625        0.4804688        0.5664063        0.5703125        0.5585938        0.5429688        0.5546875        0.6367188         0.640625         0.640625         0.640625         0.640625
    0.3359375         0.578125           0.6875        0.6757813        0.6914063        0.6796875        0.6835938        0.7578125         0.765625         0.765625         0.765625         0.765625
    0.3828125        0.6679688        0.8007813        0.8007813        0.8085938        0.8046875        0.8007813        0.8945313          0.90625          0.90625          0.90625          0.90625
    0.4296875         0.765625        0.9296875        0.9257813        0.9296875         0.921875        0.9335938         1.019531         1.015625         1.015625         1.015625         1.015625
    0.4804688         0.859375         1.039063         1.039063         1.042969         1.042969         1.054688         1.136719         1.160156         1.160156         1.160156         1.160156
    0.5234375        0.9492188         1.160156         1.167969         1.171875         1.171875         1.171875         1.265625         1.277344         1.277344         1.277344         1.277344
    0.5703125         1.042969         1.289063         1.289063         1.289063         1.304688         1.296875         1.386719          1.40625          1.40625          1.40625          1.40625
    0.6210938         1.132813          1.40625          1.40625         1.402344         1.429688         1.429688         1.515625         1.546875         1.546875         1.546875         1.546875
    0.6640625         1.230469         1.527344          1.53125          1.53125         1.546875         1.554688         1.640625         1.679688         1.679688         1.679688         1.679688
    0.7109375         1.324219         1.648438         1.652344         1.648438         1.671875         1.675781         1.761719         1.804688         1.804688         1.804688         1.804688
    0.7578125         1.414063         1.765625         1.765625         1.769531         1.796875         1.804688         1.886719         1.925781         1.925781         1.925781         1.925781
    0.8007813              1.7              2.1         1.890625         1.886719         1.929688         1.929688         2.011719         2.058594         2.058594         2.058594         2.058594
    1              2.2              2.8              2.5              2.5              2.5              2.5              2.5              2.6              2.6              2.6              2.6
    1.453125         2.808594         3.578125         3.582031              3.2              3.2              3.2              3.2              3.2              3.2              3.2              3.2
    4.765625          6.34375          8.65625         3.699219         3.699219         3.796875         3.796875         3.898438                4                4                4                4
    10               10               10               10               10               10               10               10               10               10               10               10];
AssiMotTqWhlImbRejctnMaxX.EngMin = 0;
AssiMotTqWhlImbRejctnMaxX.EngMax = 10;
AssiMotTqWhlImbRejctnMaxX.Cardinality = 'Rt';
AssiMotTqWhlImbRejctnMaxX.CustomerVisible = true;
AssiMotTqWhlImbRejctnMaxX.Online = true;
AssiMotTqWhlImbRejctnMaxX.Impact = 'L';
AssiMotTqWhlImbRejctnMaxX.TuningOwner = 'CSE';
AssiMotTqWhlImbRejctnMaxX.GraphLink = {''};
AssiMotTqWhlImbRejctnMaxX.Monotony = 'Strictly_Increasing';
AssiMotTqWhlImbRejctnMaxX.MaxGrad = 10;
AssiMotTqWhlImbRejctnMaxX.PortName = 'AssiMotTqWhlImbRejctnMaxX';


AssiMotTqWhlImbRejctnMaxY = DataDict.Calibration;
AssiMotTqWhlImbRejctnMaxY.LongName = 'Motor Torque Wheel Imbalance Rejection Maximum';
AssiMotTqWhlImbRejctnMaxY.Description = [...
  'Assist input for look-up table when WIR Command = MAXIMUM'];
AssiMotTqWhlImbRejctnMaxY.DocUnits = 'MotNwtMtr';
AssiMotTqWhlImbRejctnMaxY.EngDT = dt.s4p11;
AssiMotTqWhlImbRejctnMaxY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0.0234375          0.03125         0.015625         0.015625         0.015625         0.015625         0.015625        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375
    0.03515625       0.05078125        0.0390625       0.03515625       0.03515625       0.03515625          0.03125        0.0390625        0.0390625        0.0390625        0.0390625        0.0390625
    0.05078125       0.07421875       0.06640625           0.0625       0.05859375        0.0546875        0.0546875       0.05859375       0.05859375       0.05859375       0.05859375       0.05859375
    0.0703125        0.1054688       0.09765625        0.0859375        0.0859375       0.08203125         0.078125         0.078125         0.078125         0.078125         0.078125         0.078125
    0.09375         0.140625        0.1328125        0.1171875        0.1132813         0.109375        0.1015625        0.1015625        0.1015625        0.1015625        0.1015625        0.1015625
    0.1210938        0.1835938        0.1757813        0.1523438        0.1445313        0.1367188        0.1289063            0.125        0.1210937        0.1210937        0.1210937        0.1210937
    0.1523438        0.2304688          0.21875           0.1875        0.1757813        0.1679688          0.15625        0.1484375        0.1484375        0.1484375        0.1484375        0.1484375
    0.1835938          0.28125        0.2695313        0.2304688        0.2148438         0.203125        0.1835938        0.1757813         0.171875         0.171875         0.171875         0.171875
    0.21875        0.3398438         0.328125        0.2734375        0.2539063        0.2421875        0.2148438         0.203125        0.1992187        0.1992187        0.1992187        0.1992187
    0.2617188        0.4023438        0.3867188        0.3203125        0.2929688          0.28125             0.25         0.234375        0.2304687        0.2304687        0.2304687        0.2304687
    0.3007813        0.4726563         0.453125        0.3710938        0.3398438        0.3203125        0.2851563         0.265625        0.2617187        0.2617187        0.2617187        0.2617187
    0.3476563         0.546875        0.5234375        0.4257813        0.3867188        0.3632813        0.3203125         0.296875        0.2929687        0.2929687        0.2929687        0.2929687
    0.3984375            0.625        0.5976563        0.4804688           0.4375        0.4101563         0.359375        0.3320313        0.3242187        0.3242187        0.3242187        0.3242187
    0.4492188             0.86             0.85        0.5429688        0.4882813        0.4609375        0.3984375        0.3671875         0.359375         0.359375         0.359375         0.359375
    0.75              1.5             1.48                1             0.85             0.75             0.64             0.55              0.5              0.5              0.5              0.5
    1.527344              2.5         2.308594         1.742188             1.29             1.13             0.94             0.84             0.75             0.75             0.75             0.75
    8.742188         8.742188         8.742188         1.851563         1.621094         1.476563         1.199219         1.105469         1.054687         1.054687         1.054687         1.054687
    8.742188         8.742188         8.742188         7.632813         6.578125         5.679688         4.453125         4.039063         3.675781         3.675781         3.675781         3.675781];
AssiMotTqWhlImbRejctnMaxY.EngMin = -1;
AssiMotTqWhlImbRejctnMaxY.EngMax = 15.99;
AssiMotTqWhlImbRejctnMaxY.Cardinality = 'Rt';
AssiMotTqWhlImbRejctnMaxY.CustomerVisible = true;
AssiMotTqWhlImbRejctnMaxY.Online = true;
AssiMotTqWhlImbRejctnMaxY.Impact = 'L';
AssiMotTqWhlImbRejctnMaxY.TuningOwner = 'CSE';
AssiMotTqWhlImbRejctnMaxY.GraphLink = {'AssiMotTqWhlImbRejctnMaxX',' SysGlbPrmVehSpdBilnrSeln'};
AssiMotTqWhlImbRejctnMaxY.Monotony = 'None';
AssiMotTqWhlImbRejctnMaxY.MaxGrad = 17;
AssiMotTqWhlImbRejctnMaxY.PortName = 'AssiMotTqWhlImbRejctnMaxY';


AssiMotTqWhlImbRejctnMinX = DataDict.Calibration;
AssiMotTqWhlImbRejctnMinX.LongName = 'Handwheel Torque Wheel Imbalance Rejection Minimum';
AssiMotTqWhlImbRejctnMinX.Description = [...
  'Handwheel Torque input for look-up table when WIR Command = ZERO'];
AssiMotTqWhlImbRejctnMinX.DocUnits = 'HwNwtMtr';
AssiMotTqWhlImbRejctnMinX.EngDT = dt.u8p8;
AssiMotTqWhlImbRejctnMinX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.1015625        0.1015625        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188        0.1992188
    0.2070313        0.3046875           0.3125           0.3125           0.3125        0.3085938           0.3125         0.390625         0.390625         0.390625         0.390625         0.390625
    0.2460938        0.3945313        0.4414063        0.4296875        0.4335938        0.4335938        0.4140625        0.5078125        0.5078125        0.5078125        0.5078125        0.5078125
    0.2890625        0.4804688        0.5664063        0.5703125        0.5585938        0.5429688        0.5546875        0.6367188         0.640625         0.640625         0.640625         0.640625
    0.3359375         0.578125           0.6875        0.6757813        0.6914063        0.6796875        0.6835938        0.7578125         0.765625         0.765625         0.765625         0.765625
    0.3828125        0.6679688        0.8007813        0.8007813        0.8085938        0.8046875        0.8007813        0.8945313          0.90625          0.90625          0.90625          0.90625
    0.4296875         0.765625        0.9296875        0.9257813        0.9296875         0.921875        0.9335938         1.019531         1.015625         1.015625         1.015625         1.015625
    0.4804688         0.859375         1.039063         1.039063         1.042969         1.042969         1.054688         1.136719         1.160156         1.160156         1.160156         1.160156
    0.5234375        0.9492188         1.160156         1.167969         1.171875         1.171875         1.171875         1.265625         1.277344         1.277344         1.277344         1.277344
    0.5703125         1.042969         1.289063         1.289063         1.289063         1.304688         1.296875         1.386719          1.40625          1.40625          1.40625          1.40625
    0.6210938         1.132813          1.40625          1.40625         1.402344         1.429688         1.429688         1.515625         1.546875         1.546875         1.546875         1.546875
    0.6640625         1.230469         1.527344          1.53125          1.53125         1.546875         1.554688         1.640625         1.679688         1.679688         1.679688         1.679688
    0.7109375         1.324219         1.648438         1.652344         1.648438         1.671875         1.675781         1.761719         1.804688         1.804688         1.804688         1.804688
    0.7578125         1.414063         1.765625         1.765625         1.769531         1.796875         1.804688         1.886719         1.925781         1.925781         1.925781         1.925781
    0.8007813              1.7              2.1         1.890625         1.886719         1.929688         1.929688         2.011719         2.058594         2.058594         2.058594         2.058594
    1              2.2              2.8              2.5              2.5              2.5              2.5              2.5              2.6              2.6              2.6              2.6
    1.453125         2.808594         3.578125         3.582031              3.2              3.2              3.2              3.2              3.2              3.2              3.2              3.2
    4.765625          6.34375          8.65625         3.699219         3.699219         3.796875         3.796875         3.898438                4                4                4                4
    10               10               10               10               10               10               10               10               10               10               10               10];
AssiMotTqWhlImbRejctnMinX.EngMin = 0;
AssiMotTqWhlImbRejctnMinX.EngMax = 10;
AssiMotTqWhlImbRejctnMinX.Cardinality = 'Rt';
AssiMotTqWhlImbRejctnMinX.CustomerVisible = true;
AssiMotTqWhlImbRejctnMinX.Online = true;
AssiMotTqWhlImbRejctnMinX.Impact = 'L';
AssiMotTqWhlImbRejctnMinX.TuningOwner = 'CSE';
AssiMotTqWhlImbRejctnMinX.GraphLink = {''};
AssiMotTqWhlImbRejctnMinX.Monotony = 'Strictly_Increasing';
AssiMotTqWhlImbRejctnMinX.MaxGrad = 10;
AssiMotTqWhlImbRejctnMinX.PortName = 'AssiMotTqWhlImbRejctnMinX';


AssiMotTqWhlImbRejctnMinY = DataDict.Calibration;
AssiMotTqWhlImbRejctnMinY.LongName = 'Motor Torque Wheel Imbalance Rejection Minimum';
AssiMotTqWhlImbRejctnMinY.Description = [...
  'Assist input for look-up table when WIR Command = ZERO'];
AssiMotTqWhlImbRejctnMinY.DocUnits = 'MotNwtMtr';
AssiMotTqWhlImbRejctnMinY.EngDT = dt.s4p11;
AssiMotTqWhlImbRejctnMinY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0.0234375          0.03125         0.015625         0.015625         0.015625         0.015625         0.015625        0.0234375        0.0234375        0.0234375        0.0234375        0.0234375
    0.03515625       0.05078125        0.0390625       0.03515625       0.03515625       0.03515625          0.03125        0.0390625        0.0390625        0.0390625        0.0390625        0.0390625
    0.05078125       0.07421875       0.06640625           0.0625       0.05859375        0.0546875        0.0546875       0.05859375       0.05859375       0.05859375       0.05859375       0.05859375
    0.0703125        0.1054688       0.09765625        0.0859375        0.0859375       0.08203125         0.078125         0.078125         0.078125         0.078125         0.078125         0.078125
    0.09375         0.140625        0.1328125        0.1171875        0.1132813         0.109375        0.1015625        0.1015625        0.1015625        0.1015625        0.1015625        0.1015625
    0.1210938        0.1835938        0.1757813        0.1523438        0.1445313        0.1367188        0.1289063            0.125        0.1210937        0.1210937        0.1210937        0.1210937
    0.1523438        0.2304688          0.21875           0.1875        0.1757813        0.1679688          0.15625        0.1484375        0.1484375        0.1484375        0.1484375        0.1484375
    0.1835938          0.28125        0.2695313        0.2304688        0.2148438         0.203125        0.1835938        0.1757813         0.171875         0.171875         0.171875         0.171875
    0.21875        0.3398438         0.328125        0.2734375        0.2539063        0.2421875        0.2148438         0.203125        0.1992187        0.1992187        0.1992187        0.1992187
    0.2617188        0.4023438        0.3867188        0.3203125        0.2929688          0.28125             0.25         0.234375        0.2304687        0.2304687        0.2304687        0.2304687
    0.3007813        0.4726563         0.453125        0.3710938        0.3398438        0.3203125        0.2851563         0.265625        0.2617187        0.2617187        0.2617187        0.2617187
    0.3476563         0.546875        0.5234375        0.4257813        0.3867188        0.3632813        0.3203125         0.296875        0.2929687        0.2929687        0.2929687        0.2929687
    0.3984375            0.625        0.5976563        0.4804688           0.4375        0.4101563         0.359375        0.3320313        0.3242187        0.3242187        0.3242187        0.3242187
    0.4492188             0.86             0.85        0.5429688        0.4882813        0.4609375        0.3984375        0.3671875         0.359375         0.359375         0.359375         0.359375
    0.75              1.5             1.48                1             0.85             0.75             0.64             0.55              0.5              0.5              0.5              0.5
    1.527344              2.5         2.308594         1.742188             1.29             1.13             0.94             0.84             0.75             0.75             0.75             0.75
    8.742188         8.742188         8.742188         1.851563         1.621094         1.476563         1.199219         1.105469         1.054687         1.054687         1.054687         1.054687
    8.742188         8.742188         8.742188         7.632813         6.578125         5.679688         4.453125         4.039063         3.675781         3.675781         3.675781         3.675781];
AssiMotTqWhlImbRejctnMinY.EngMin = -1;
AssiMotTqWhlImbRejctnMinY.EngMax = 15.99;
AssiMotTqWhlImbRejctnMinY.Cardinality = 'Rt';
AssiMotTqWhlImbRejctnMinY.CustomerVisible = true;
AssiMotTqWhlImbRejctnMinY.Online = true;
AssiMotTqWhlImbRejctnMinY.Impact = 'L';
AssiMotTqWhlImbRejctnMinY.TuningOwner = 'CSE';
AssiMotTqWhlImbRejctnMinY.GraphLink = {'AssiMotTqWhlImbRejctnMinX',' SysGlbPrmVehSpdBilnrSeln'};
AssiMotTqWhlImbRejctnMinY.Monotony = 'None';
AssiMotTqWhlImbRejctnMinY.MaxGrad = 17;
AssiMotTqWhlImbRejctnMinY.PortName = 'AssiMotTqWhlImbRejctnMinY';


AssiThermScaX = DataDict.Calibration;
AssiThermScaX.LongName = 'Thermal Scale X';
AssiThermScaX.Description = 'Assist Thermal Scalar X input';
AssiThermScaX.DocUnits = 'Cnt';
AssiThermScaX.EngDT = dt.u16p0;
AssiThermScaX.EngVal =  ...
   [75              100];
AssiThermScaX.EngMin = 0;
AssiThermScaX.EngMax = 200;
AssiThermScaX.Cardinality = 'Cmn';
AssiThermScaX.CustomerVisible = true;
AssiThermScaX.Online = true;
AssiThermScaX.Impact = 'L';
AssiThermScaX.TuningOwner = 'CSE';
AssiThermScaX.GraphLink = {''};
AssiThermScaX.Monotony = 'Strictly_Increasing';
AssiThermScaX.MaxGrad = 100;
AssiThermScaX.PortName = 'AssiThermScaX';


AssiThermScaY = DataDict.Calibration;
AssiThermScaY.LongName = 'Thermal Scale Y';
AssiThermScaY.Description = 'Assist Thermal Scalar Y input';
AssiThermScaY.DocUnits = 'Uls';
AssiThermScaY.EngDT = dt.u2p14;
AssiThermScaY.EngVal =  ...
   [1              0.8];
AssiThermScaY.EngMin = 0;
AssiThermScaY.EngMax = 1;
AssiThermScaY.Cardinality = 'Cmn';
AssiThermScaY.CustomerVisible = true;
AssiThermScaY.Online = true;
AssiThermScaY.Impact = 'L';
AssiThermScaY.TuningOwner = 'CSE';
AssiThermScaY.GraphLink = {'AssiThermScaX'};
AssiThermScaY.Monotony = 'None';
AssiThermScaY.MaxGrad = 1;
AssiThermScaY.PortName = 'AssiThermScaY';


AssiWhlImbRejctnBlndScaX = DataDict.Calibration;
AssiWhlImbRejctnBlndScaX.LongName = 'Wheel Imbalance Rejection Blend';
AssiWhlImbRejctnBlndScaX.Description = 'Assist WIR Blend X input';
AssiWhlImbRejctnBlndScaX.DocUnits = 'MotNwtMtr';
AssiWhlImbRejctnBlndScaX.EngDT = dt.u5p11;
AssiWhlImbRejctnBlndScaX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75
    1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1];
AssiWhlImbRejctnBlndScaX.EngMin = 0;
AssiWhlImbRejctnBlndScaX.EngMax = 8.8;
AssiWhlImbRejctnBlndScaX.Cardinality = 'Rt';
AssiWhlImbRejctnBlndScaX.CustomerVisible = true;
AssiWhlImbRejctnBlndScaX.Online = true;
AssiWhlImbRejctnBlndScaX.Impact = 'L';
AssiWhlImbRejctnBlndScaX.TuningOwner = 'CSE';
AssiWhlImbRejctnBlndScaX.GraphLink = {''};
AssiWhlImbRejctnBlndScaX.Monotony = 'Strictly_Increasing';
AssiWhlImbRejctnBlndScaX.MaxGrad = 10;
AssiWhlImbRejctnBlndScaX.PortName = 'AssiWhlImbRejctnBlndScaX';


AssiWhlImbRejctnBlndScaY = DataDict.Calibration;
AssiWhlImbRejctnBlndScaY.LongName = 'Wheel Imbalance Rejection Blend';
AssiWhlImbRejctnBlndScaY.Description = 'Assist WIR Blend Y input';
AssiWhlImbRejctnBlndScaY.DocUnits = 'Uls';
AssiWhlImbRejctnBlndScaY.EngDT = dt.u2p14;
AssiWhlImbRejctnBlndScaY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0];
AssiWhlImbRejctnBlndScaY.EngMin = 0;
AssiWhlImbRejctnBlndScaY.EngMax = 1;
AssiWhlImbRejctnBlndScaY.Cardinality = 'Rt';
AssiWhlImbRejctnBlndScaY.CustomerVisible = true;
AssiWhlImbRejctnBlndScaY.Online = true;
AssiWhlImbRejctnBlndScaY.Impact = 'L';
AssiWhlImbRejctnBlndScaY.TuningOwner = 'CSE';
AssiWhlImbRejctnBlndScaY.GraphLink = {'AssiWhlImbRejctnBlndScaX',' SysGlbPrmVehSpdBilnrSeln'};
AssiWhlImbRejctnBlndScaY.Monotony = 'None';
AssiWhlImbRejctnBlndScaY.MaxGrad = 17;
AssiWhlImbRejctnBlndScaY.PortName = 'AssiWhlImbRejctnBlndScaY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmVehSpdBilnrSeln = DataDict.ImprtdCal;
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';
SysGlbPrmVehSpdBilnrSeln.Description = [...
  '1-D vehicle speed table.  12 tuning points, common to multiple functio' ...
  'ns. This cal is imported from SF999A.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dAssiThermAssiSca = DataDict.Display;
dAssiThermAssiSca.LongName = 'Thermal Assist Scale';
dAssiThermAssiSca.Description = [...
  'Scale factor applied to base assist to reduce output as duty cycle fil' ...
  'ter count increases.'];
dAssiThermAssiSca.DocUnits = 'Uls';
dAssiThermAssiSca.EngDT = dt.float32;
dAssiThermAssiSca.EngMin = 0;
dAssiThermAssiSca.EngMax = 1;
dAssiThermAssiSca.InitRowCol = [1  1];


dAssiWhlImbRejctnBlnd = DataDict.Display;
dAssiWhlImbRejctnBlnd.LongName = 'Wheel Imbalance Rejection Blend';
dAssiWhlImbRejctnBlnd.Description = [...
  'The fraction of WIR-on tuning used in base assist output.'];
dAssiWhlImbRejctnBlnd.DocUnits = 'Uls';
dAssiWhlImbRejctnBlnd.EngDT = dt.float32;
dAssiWhlImbRejctnBlnd.EngMin = 0;
dAssiWhlImbRejctnBlnd.EngMax = 1;
dAssiWhlImbRejctnBlnd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ASSITQSFTYLIM_MOTNWTMTR_F32 = DataDict.Constant;
ASSITQSFTYLIM_MOTNWTMTR_F32.LongName = 'Assist Torque Safety Limit';
ASSITQSFTYLIM_MOTNWTMTR_F32.Description = [...
  'Base assist is allowed to be slightly negative for "reverse boost" per' ...
  'formance, but with a hardcoded limit for safety.'];
ASSITQSFTYLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ASSITQSFTYLIM_MOTNWTMTR_F32.EngDT = dt.float32;
ASSITQSFTYLIM_MOTNWTMTR_F32.EngVal = -0.1;
ASSITQSFTYLIM_MOTNWTMTR_F32.Define = 'Local';


FLTINJ_ASSI_ASSICMDBAS = DataDict.Constant;
FLTINJ_ASSI_ASSICMDBAS.LongName = 'Fault Injection Assist Command Base';
FLTINJ_ASSI_ASSICMDBAS.Description = [...
  'Fault Injection Assist Command Base Constant'];
FLTINJ_ASSI_ASSICMDBAS.DocUnits = 'Uls';
FLTINJ_ASSI_ASSICMDBAS.EngDT = dt.u16;
FLTINJ_ASSI_ASSICMDBAS.EngVal = 1;
FLTINJ_ASSI_ASSICMDBAS.Define = 'Global';


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
