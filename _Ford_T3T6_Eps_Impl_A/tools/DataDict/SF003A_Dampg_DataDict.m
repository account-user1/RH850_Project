%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Feb-2017 12:18:35       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF003A = DataDict.FDD;
SF003A.Version = '1.4.X';
SF003A.LongName = 'Damping';
SF003A.ShoName  = 'Dampg';
SF003A.DesignASIL = 'QM';
SF003A.Description = [...
  'The damping function computes a motor damping torque derived primarily' ...
  ' from handwheel velocity and scaled by other factors such as temperatu' ...
  're and handwheel torque.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DampgInit1 = DataDict.Runnable;
DampgInit1.Context = 'Rte';
DampgInit1.TimeStep = 0;
DampgInit1.Description = 'Initialization runnable';

DampgPer1 = DataDict.Runnable;
DampgPer1.Context = 'Rte';
DampgPer1.TimeStep = 0.002;
DampgPer1.Description = 'Periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'DampgPer1'};
FltInj_f32.Description = 'Fault injection client';
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
AssiCmdBas.LongName = 'Assist Command Base';
AssiCmdBas.Description = 'Input signal Assist Command Base';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'DampgPer1'};
AssiCmdBas.ReadType = 'Rte';


AssiMechT = DataDict.IpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature';
AssiMechT.Description = [...
  'Input signal Assist Mechanism Temperature'];
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 0;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.ReadIn = {'DampgPer1'};
AssiMechT.ReadType = 'Rte';


DampgCmdBasDi = DataDict.IpSignal;
DampgCmdBasDi.LongName = 'Damping Command Base Disable';
DampgCmdBasDi.Description = [...
  'Input signal Damping Command Base Disable'];
DampgCmdBasDi.DocUnits = 'Cnt';
DampgCmdBasDi.EngDT = dt.lgc;
DampgCmdBasDi.EngInit = 0;
DampgCmdBasDi.EngMin = 0;
DampgCmdBasDi.EngMax = 1;
DampgCmdBasDi.ReadIn = {'DampgPer1'};
DampgCmdBasDi.ReadType = 'Rte';


DampgCmdOvrl = DataDict.IpSignal;
DampgCmdOvrl.LongName = 'Damping Command Overlay';
DampgCmdOvrl.Description = [...
  'Input signal Damping Commmand Overlay'];
DampgCmdOvrl.DocUnits = 'MotNwtMtr';
DampgCmdOvrl.EngDT = dt.float32;
DampgCmdOvrl.EngInit = 0;
DampgCmdOvrl.EngMin = -8.8;
DampgCmdOvrl.EngMax = 8.8;
DampgCmdOvrl.ReadIn = {'DampgPer1'};
DampgCmdOvrl.ReadType = 'Rte';


DampgCmdSca = DataDict.IpSignal;
DampgCmdSca.LongName = 'Damping Command Scale';
DampgCmdSca.Description = 'Input signal Damping Command Scale';
DampgCmdSca.DocUnits = 'Uls';
DampgCmdSca.EngDT = dt.float32;
DampgCmdSca.EngInit = 0;
DampgCmdSca.EngMin = 0;
DampgCmdSca.EngMax = 1;
DampgCmdSca.ReadIn = {'DampgPer1'};
DampgCmdSca.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Input signal Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'DampgPer1'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Core Reference Frame';
MotVelCrf.Description = [...
  'Input signal Motor Velocity Core Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'DampgPer1'};
MotVelCrf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Input signal Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'DampgPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
DampgCmdBas = DataDict.OpSignal;
DampgCmdBas.LongName = 'Damping Command Base';
DampgCmdBas.Description = [...
  'Damping component of overall torque command'];
DampgCmdBas.DocUnits = 'MotNwtMtr';
DampgCmdBas.SwcShoName = 'Dampg';
DampgCmdBas.EngDT = dt.float32;
DampgCmdBas.EngInit = 0;
DampgCmdBas.EngMin = -8.8;
DampgCmdBas.EngMax = 8.8;
DampgCmdBas.TestTolerance = 0.000488281;
DampgCmdBas.WrittenIn = {'DampgPer1'};
DampgCmdBas.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DampgHwTqX = DataDict.Calibration;
DampgHwTqX.LongName = 'Handwheel Torque X';
DampgHwTqX.Description = [...
  'Table used to provide damping as a function of handwheel torque'];
DampgHwTqX.DocUnits = 'HwNwtMtr';
DampgHwTqX.EngDT = dt.u8p8;
DampgHwTqX.EngVal =  ...
   [8               10];
DampgHwTqX.EngMin = 0;
DampgHwTqX.EngMax = 10;
DampgHwTqX.Cardinality = 'Rt';
DampgHwTqX.CustomerVisible = true;
DampgHwTqX.Online = true;
DampgHwTqX.Impact = 'H';
DampgHwTqX.TuningOwner = 'CSE';
DampgHwTqX.GraphLink = {''};
DampgHwTqX.Monotony = 'Strictly_Increasing';
DampgHwTqX.MaxGrad = 998;
DampgHwTqX.PortName = 'DampgHwTqX';


DampgHwTqY = DataDict.Calibration;
DampgHwTqY.LongName = 'Handwheel Torque Y';
DampgHwTqY.Description = [...
  'Table used to provide damping as a function of handwheel torque'];
DampgHwTqY.DocUnits = 'Uls';
DampgHwTqY.EngDT = dt.u1p15;
DampgHwTqY.EngVal =  ...
   [1                0];
DampgHwTqY.EngMin = 0;
DampgHwTqY.EngMax = 1;
DampgHwTqY.Cardinality = 'Rt';
DampgHwTqY.CustomerVisible = true;
DampgHwTqY.Online = true;
DampgHwTqY.Impact = 'H';
DampgHwTqY.TuningOwner = 'CSE';
DampgHwTqY.GraphLink = {'DampgHwTqX'};
DampgHwTqY.Monotony = 'None';
DampgHwTqY.MaxGrad = 998;
DampgHwTqY.PortName = 'DampgHwTqY';


DampgHydAssiLim = DataDict.Calibration;
DampgHydAssiLim.LongName = 'Hydraulic Assist Limit';
DampgHydAssiLim.Description = [...
  'Table used to limit the effect of assist as a function of vehicle spee' ...
  'd'];
DampgHydAssiLim.DocUnits = 'MotNwtMtr';
DampgHydAssiLim.EngDT = dt.u4p12;
DampgHydAssiLim.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8];
DampgHydAssiLim.EngMin = 0;
DampgHydAssiLim.EngMax = 8.8;
DampgHydAssiLim.Cardinality = 'Inin';
DampgHydAssiLim.CustomerVisible = false;
DampgHydAssiLim.Online = false;
DampgHydAssiLim.Impact = 'H';
DampgHydAssiLim.TuningOwner = 'CSE';
DampgHydAssiLim.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
DampgHydAssiLim.Monotony = 'Increasing';
DampgHydAssiLim.MaxGrad = 998;
DampgHydAssiLim.PortName = 'DampgHydAssiLim';


DampgHydBasCoeff1 = DataDict.Calibration;
DampgHydBasCoeff1.LongName = 'Hydraulic Base Coefficient 1';
DampgHydBasCoeff1.Description = [...
  'Y-intercept of Damping Coef vs. Velocity'];
DampgHydBasCoeff1.DocUnits = 'MotNwtMtrPerMotRadPerSec';
DampgHydBasCoeff1.EngDT = dt.float32;
DampgHydBasCoeff1.EngVal = 0.0005;
DampgHydBasCoeff1.EngMin = 0;
DampgHydBasCoeff1.EngMax = 0.1;
DampgHydBasCoeff1.Cardinality = 'Inin';
DampgHydBasCoeff1.CustomerVisible = false;
DampgHydBasCoeff1.Online = false;
DampgHydBasCoeff1.Impact = 'H';
DampgHydBasCoeff1.TuningOwner = 'CSE';
DampgHydBasCoeff1.GraphLink = {''};
DampgHydBasCoeff1.Monotony = 'None';
DampgHydBasCoeff1.MaxGrad = 998;
DampgHydBasCoeff1.PortName = 'DampgHydBasCoeff1';


DampgHydBasCoeff2 = DataDict.Calibration;
DampgHydBasCoeff2.LongName = 'Hydraulic Base Coefficient 2';
DampgHydBasCoeff2.Description = 'Slope of Damping Coef vs. Velocity';
DampgHydBasCoeff2.DocUnits = 'MotNwtMtrPerMotRadPerSec';
DampgHydBasCoeff2.EngDT = dt.float32;
DampgHydBasCoeff2.EngVal = 2e-05;
DampgHydBasCoeff2.EngMin = 0;
DampgHydBasCoeff2.EngMax = 0.1;
DampgHydBasCoeff2.Cardinality = 'Inin';
DampgHydBasCoeff2.CustomerVisible = false;
DampgHydBasCoeff2.Online = false;
DampgHydBasCoeff2.Impact = 'H';
DampgHydBasCoeff2.TuningOwner = 'CSE';
DampgHydBasCoeff2.GraphLink = {''};
DampgHydBasCoeff2.Monotony = 'None';
DampgHydBasCoeff2.MaxGrad = 998;
DampgHydBasCoeff2.PortName = 'DampgHydBasCoeff2';


DampgHydBasCoeff3 = DataDict.Calibration;
DampgHydBasCoeff3.LongName = 'Hydraulic Base Coefficient 3';
DampgHydBasCoeff3.Description = 'Slope of Damping Coef vs. Assist';
DampgHydBasCoeff3.DocUnits = 'MotNwtMtrPerMotRadPerSec';
DampgHydBasCoeff3.EngDT = dt.float32;
DampgHydBasCoeff3.EngVal = 0.006;
DampgHydBasCoeff3.EngMin = 0;
DampgHydBasCoeff3.EngMax = 0.1;
DampgHydBasCoeff3.Cardinality = 'Inin';
DampgHydBasCoeff3.CustomerVisible = false;
DampgHydBasCoeff3.Online = false;
DampgHydBasCoeff3.Impact = 'H';
DampgHydBasCoeff3.TuningOwner = 'CSE';
DampgHydBasCoeff3.GraphLink = {''};
DampgHydBasCoeff3.Monotony = 'None';
DampgHydBasCoeff3.MaxGrad = 998;
DampgHydBasCoeff3.PortName = 'DampgHydBasCoeff3';


DampgHydBasCoeff4 = DataDict.Calibration;
DampgHydBasCoeff4.LongName = 'Hydraulic Base Coefficient 4';
DampgHydBasCoeff4.Description = [...
  'Tilts the plot DampingCoef vs. Velocity clockwise (reduces effect of C' ...
  '3 in 1st quadrant, increases C3 effect in 2nd quadrant).'];
DampgHydBasCoeff4.DocUnits = 'MotNwtMtrPerMotRadPerSec';
DampgHydBasCoeff4.EngDT = dt.float32;
DampgHydBasCoeff4.EngVal = 9e-06;
DampgHydBasCoeff4.EngMin = 0;
DampgHydBasCoeff4.EngMax = 0.1;
DampgHydBasCoeff4.Cardinality = 'Inin';
DampgHydBasCoeff4.CustomerVisible = false;
DampgHydBasCoeff4.Online = false;
DampgHydBasCoeff4.Impact = 'H';
DampgHydBasCoeff4.TuningOwner = 'CSE';
DampgHydBasCoeff4.GraphLink = {''};
DampgHydBasCoeff4.Monotony = 'None';
DampgHydBasCoeff4.MaxGrad = 998;
DampgHydBasCoeff4.PortName = 'DampgHydBasCoeff4';


DampgHydCoeff1ScaY = DataDict.Calibration;
DampgHydCoeff1ScaY.LongName = 'Hydraulic Coefficient 1 Scale Y';
DampgHydCoeff1ScaY.Description = [...
  'Table used to provide scale as a function of vehicle speed'];
DampgHydCoeff1ScaY.DocUnits = 'Uls';
DampgHydCoeff1ScaY.EngDT = dt.u4p12;
DampgHydCoeff1ScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1];
DampgHydCoeff1ScaY.EngMin = 0;
DampgHydCoeff1ScaY.EngMax = 10;
DampgHydCoeff1ScaY.Cardinality = 'Rt';
DampgHydCoeff1ScaY.CustomerVisible = true;
DampgHydCoeff1ScaY.Online = true;
DampgHydCoeff1ScaY.Impact = 'H';
DampgHydCoeff1ScaY.TuningOwner = 'CSE';
DampgHydCoeff1ScaY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
DampgHydCoeff1ScaY.Monotony = 'Increasing';
DampgHydCoeff1ScaY.MaxGrad = 998;
DampgHydCoeff1ScaY.PortName = 'DampgHydCoeff1ScaY';


DampgHydCoeff2ScaY = DataDict.Calibration;
DampgHydCoeff2ScaY.LongName = 'Hydraulic Coefficient 2 Scale Y';
DampgHydCoeff2ScaY.Description = [...
  'Table used to provide scale as a function of vehicle speed'];
DampgHydCoeff2ScaY.DocUnits = 'Uls';
DampgHydCoeff2ScaY.EngDT = dt.u4p12;
DampgHydCoeff2ScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1];
DampgHydCoeff2ScaY.EngMin = 0;
DampgHydCoeff2ScaY.EngMax = 10;
DampgHydCoeff2ScaY.Cardinality = 'Rt';
DampgHydCoeff2ScaY.CustomerVisible = true;
DampgHydCoeff2ScaY.Online = true;
DampgHydCoeff2ScaY.Impact = 'H';
DampgHydCoeff2ScaY.TuningOwner = 'CSE';
DampgHydCoeff2ScaY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
DampgHydCoeff2ScaY.Monotony = 'Increasing';
DampgHydCoeff2ScaY.MaxGrad = 998;
DampgHydCoeff2ScaY.PortName = 'DampgHydCoeff2ScaY';


DampgHydCoeff3ScaY = DataDict.Calibration;
DampgHydCoeff3ScaY.LongName = 'Hydraulic Coefficient 3 Scale Y';
DampgHydCoeff3ScaY.Description = [...
  'Table used to provide scale as a function of vehicle speed'];
DampgHydCoeff3ScaY.DocUnits = 'Uls';
DampgHydCoeff3ScaY.EngDT = dt.u4p12;
DampgHydCoeff3ScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1];
DampgHydCoeff3ScaY.EngMin = 0;
DampgHydCoeff3ScaY.EngMax = 10;
DampgHydCoeff3ScaY.Cardinality = 'Rt';
DampgHydCoeff3ScaY.CustomerVisible = true;
DampgHydCoeff3ScaY.Online = true;
DampgHydCoeff3ScaY.Impact = 'H';
DampgHydCoeff3ScaY.TuningOwner = 'CSE';
DampgHydCoeff3ScaY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
DampgHydCoeff3ScaY.Monotony = 'Increasing';
DampgHydCoeff3ScaY.MaxGrad = 998;
DampgHydCoeff3ScaY.PortName = 'DampgHydCoeff3ScaY';


DampgHydCoeff4ScaY = DataDict.Calibration;
DampgHydCoeff4ScaY.LongName = 'Hydraulic Coefficient 4 Scale Y';
DampgHydCoeff4ScaY.Description = [...
  'Table used to provide scale as a function of vehicle speed'];
DampgHydCoeff4ScaY.DocUnits = 'Uls';
DampgHydCoeff4ScaY.EngDT = dt.u4p12;
DampgHydCoeff4ScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1];
DampgHydCoeff4ScaY.EngMin = 0;
DampgHydCoeff4ScaY.EngMax = 10;
DampgHydCoeff4ScaY.Cardinality = 'Rt';
DampgHydCoeff4ScaY.CustomerVisible = true;
DampgHydCoeff4ScaY.Online = true;
DampgHydCoeff4ScaY.Impact = 'H';
DampgHydCoeff4ScaY.TuningOwner = 'CSE';
DampgHydCoeff4ScaY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
DampgHydCoeff4ScaY.Monotony = 'Increasing';
DampgHydCoeff4ScaY.MaxGrad = 998;
DampgHydCoeff4ScaY.PortName = 'DampgHydCoeff4ScaY';


DampgHydOutpLim = DataDict.Calibration;
DampgHydOutpLim.LongName = 'Hydraulic Output Limit';
DampgHydOutpLim.Description = [...
  'Damping Hydraulic Power Steering Output limit cal'];
DampgHydOutpLim.DocUnits = 'MotNwtMtr';
DampgHydOutpLim.EngDT = dt.float32;
DampgHydOutpLim.EngVal = 0;
DampgHydOutpLim.EngMin = 0;
DampgHydOutpLim.EngMax = 8.8;
DampgHydOutpLim.Cardinality = 'Inin';
DampgHydOutpLim.CustomerVisible = false;
DampgHydOutpLim.Online = false;
DampgHydOutpLim.Impact = 'H';
DampgHydOutpLim.TuningOwner = 'CSE';
DampgHydOutpLim.GraphLink = {''};
DampgHydOutpLim.Monotony = 'None';
DampgHydOutpLim.MaxGrad = 998;
DampgHydOutpLim.PortName = 'DampgHydOutpLim';


DampgMotVelLpFilFrq = DataDict.Calibration;
DampgMotVelLpFilFrq.LongName = 'Motor Velocity Lowpass Filter Frequency';
DampgMotVelLpFilFrq.Description = [...
  'Motor velocity Lowpass Filter cutoff frequency'];
DampgMotVelLpFilFrq.DocUnits = 'Hz';
DampgMotVelLpFilFrq.EngDT = dt.float32;
DampgMotVelLpFilFrq.EngVal = 15;
DampgMotVelLpFilFrq.EngMin = 5;
DampgMotVelLpFilFrq.EngMax = 100;
DampgMotVelLpFilFrq.Cardinality = 'Inin';
DampgMotVelLpFilFrq.CustomerVisible = false;
DampgMotVelLpFilFrq.Online = false;
DampgMotVelLpFilFrq.Impact = 'H';
DampgMotVelLpFilFrq.TuningOwner = 'CSE';
DampgMotVelLpFilFrq.GraphLink = {''};
DampgMotVelLpFilFrq.Monotony = 'None';
DampgMotVelLpFilFrq.MaxGrad = 998;
DampgMotVelLpFilFrq.PortName = 'DampgMotVelLpFilFrq';


DampgMotVelX = DataDict.Calibration;
DampgMotVelX.LongName = 'Motor Velocity Column Reference Frame X';
DampgMotVelX.Description = [...
  'Table used to provide damping as a function of motor velocity'];
DampgMotVelX.DocUnits = 'MotRadPerSec';
DampgMotVelX.EngDT = dt.u12p4;
DampgMotVelX.EngVal =  ...
   [2.063            2.063            2.063            2.063            2.063            2.063            2.063            2.063            2.063            2.063            2.063            2.063
    10.188           10.188           10.188           10.188           10.188           10.188           10.188           10.188           10.188           10.188           10.188           10.188
    21.375           21.375           21.375           21.375           21.375           21.375           21.375           21.375           21.375           21.375           21.375           21.375
    34.625           34.625           34.625           34.625           34.625           34.625           34.625           34.625           34.625           34.625           34.625           34.625
    54.5             54.5             54.5             54.5             54.5             54.5             54.5             54.5             54.5             54.5             54.5             54.5
    78.75            78.75            78.75            78.75            78.75            78.75            78.75            78.75            78.75            78.75            78.75            78.75
    103.938          103.938          103.938          103.938          103.938          103.938          103.938          103.938          103.938          103.938          103.938          103.938
    127              127              127              127              127              127              127              127              127              127              127              127
    150.063          150.063          150.063          150.063          150.063          150.063          150.063          150.063          150.063          150.063          150.063          150.063
    173.188          173.188          173.188          173.188          173.188          173.188          173.188          173.188          173.188          173.188          173.188          173.188
    219.313          219.313          219.313          219.313          219.313          219.313          219.313          219.313          219.313          219.313          219.313          219.313
    277.063          277.063          277.063          277.063          277.063          277.063          277.063          277.063          277.063          277.063          277.063          277.063
    369.375          369.375          369.375          369.375          369.375          369.375          369.375          369.375          369.375          369.375          369.375          369.375];
DampgMotVelX.EngMin = 0;
DampgMotVelX.EngMax = 1350;
DampgMotVelX.Cardinality = 'Rt';
DampgMotVelX.CustomerVisible = true;
DampgMotVelX.Online = true;
DampgMotVelX.Impact = 'H';
DampgMotVelX.TuningOwner = 'CSE';
DampgMotVelX.GraphLink = {''};
DampgMotVelX.Monotony = 'Strictly_Increasing';
DampgMotVelX.MaxGrad = 998;
DampgMotVelX.PortName = 'DampgMotVelX';


DampgMotVelY = DataDict.Calibration;
DampgMotVelY.LongName = 'Motor Velocity Y';
DampgMotVelY.Description = [...
  'Table used to provide damping as a function of motor velocity'];
DampgMotVelY.DocUnits = 'MotNwtMtr';
DampgMotVelY.EngDT = dt.u5p11;
DampgMotVelY.EngVal =  ...
   [0                0                0                0                0           0.0005           0.0024           0.0049           0.0049           0.0049           0.0049           0.0049
    0                0                0                0                0           0.0024           0.0122           0.0239           0.0239           0.0239           0.0239           0.0239
    0                0                0                0           0.0005           0.0063           0.0264           0.0518           0.0518           0.0518           0.0518           0.0518
    0                0                0                0           0.0015           0.0122           0.0454           0.0879           0.0879           0.0879           0.0879           0.0879
    0                0                0                0           0.0034           0.0234           0.0776            0.147            0.147            0.147            0.147            0.147
    0                0                0                0           0.0068           0.0415           0.1226            0.228            0.228            0.228            0.228            0.228
    0                0                0                0           0.0117           0.0645           0.1758           0.3218           0.3218           0.3218           0.3218           0.3218
    0                0                0                0           0.0176           0.0898           0.2305           0.4175           0.4175           0.4175           0.4175           0.4175
    0                0                0                0           0.0244           0.1196           0.2915           0.5215           0.5215           0.5215           0.5215           0.5215
    0                0                0                0           0.0327           0.1528           0.3579           0.6343           0.6343           0.6343           0.6343           0.6343
    0                0                0                0           0.0522           0.2324           0.5083           0.8857           0.8857           0.8857           0.8857           0.8857
    0                0                0                0           0.0835            0.354            0.729           1.2495           1.2495           1.2495           1.2495           1.2495
    0                0                0                0           0.1484           0.6021           1.1572           1.9438           1.9438           1.9438           1.9438           1.9438];
DampgMotVelY.EngMin = 0;
DampgMotVelY.EngMax = 8.8;
DampgMotVelY.Cardinality = 'Rt';
DampgMotVelY.CustomerVisible = true;
DampgMotVelY.Online = true;
DampgMotVelY.Impact = 'H';
DampgMotVelY.TuningOwner = 'CSE';
DampgMotVelY.GraphLink = {'DampgMotVelX',' SysGlbPrmVehSpdBilnrSeln'};
DampgMotVelY.Monotony = 'None';
DampgMotVelY.MaxGrad = 998;
DampgMotVelY.PortName = 'DampgMotVelY';


DampgQuad13Mplr = DataDict.Calibration;
DampgQuad13Mplr.LongName = 'Quadrant 1 3 Multiplier';
DampgQuad13Mplr.Description = [...
  'Scaling Used in Quad 1 & 3 for the Damping Command'];
DampgQuad13Mplr.DocUnits = 'Uls';
DampgQuad13Mplr.EngDT = dt.float32;
DampgQuad13Mplr.EngVal = 1;
DampgQuad13Mplr.EngMin = 0;
DampgQuad13Mplr.EngMax = 2;
DampgQuad13Mplr.Cardinality = 'Inin';
DampgQuad13Mplr.CustomerVisible = false;
DampgQuad13Mplr.Online = false;
DampgQuad13Mplr.Impact = 'H';
DampgQuad13Mplr.TuningOwner = 'CSE';
DampgQuad13Mplr.GraphLink = {''};
DampgQuad13Mplr.Monotony = 'None';
DampgQuad13Mplr.MaxGrad = 998;
DampgQuad13Mplr.PortName = 'DampgQuad13Mplr';


DampgQuad24Mplr = DataDict.Calibration;
DampgQuad24Mplr.LongName = 'Quadrant 2 4 Multiplier';
DampgQuad24Mplr.Description = [...
  'Scaling Used in Quad 2 & 4 for the Damping Command'];
DampgQuad24Mplr.DocUnits = 'Uls';
DampgQuad24Mplr.EngDT = dt.float32;
DampgQuad24Mplr.EngVal = 1;
DampgQuad24Mplr.EngMin = 0;
DampgQuad24Mplr.EngMax = 2;
DampgQuad24Mplr.Cardinality = 'Inin';
DampgQuad24Mplr.CustomerVisible = false;
DampgQuad24Mplr.Online = false;
DampgQuad24Mplr.Impact = 'H';
DampgQuad24Mplr.TuningOwner = 'CSE';
DampgQuad24Mplr.GraphLink = {''};
DampgQuad24Mplr.Monotony = 'None';
DampgQuad24Mplr.MaxGrad = 998;
DampgQuad24Mplr.PortName = 'DampgQuad24Mplr';


DampgQuadHwTqBacklsh = DataDict.Calibration;
DampgQuadHwTqBacklsh.LongName = 'Quadrant Handwheel Torque Backlash';
DampgQuadHwTqBacklsh.Description = [...
  'Backlash deadband width defined for Quadrant dependent Handwheel Torqu' ...
  'e damping'];
DampgQuadHwTqBacklsh.DocUnits = 'HwNwtMtr';
DampgQuadHwTqBacklsh.EngDT = dt.float32;
DampgQuadHwTqBacklsh.EngVal = 0;
DampgQuadHwTqBacklsh.EngMin = 0;
DampgQuadHwTqBacklsh.EngMax = 10;
DampgQuadHwTqBacklsh.Cardinality = 'Cmn';
DampgQuadHwTqBacklsh.CustomerVisible = false;
DampgQuadHwTqBacklsh.Online = false;
DampgQuadHwTqBacklsh.Impact = 'H';
DampgQuadHwTqBacklsh.TuningOwner = 'CSE';
DampgQuadHwTqBacklsh.GraphLink = {''};
DampgQuadHwTqBacklsh.Monotony = 'None';
DampgQuadHwTqBacklsh.MaxGrad = 998;
DampgQuadHwTqBacklsh.PortName = 'DampgQuadHwTqBacklsh';


DampgQuadHwTqLpFilFrq = DataDict.Calibration;
DampgQuadHwTqLpFilFrq.LongName = 'Quadrant Handwheel Torque Lowpass Filter Frequency';
DampgQuadHwTqLpFilFrq.Description = [...
  'Lowpass Filter cutoff frequency for Quadrant dependent Handwheel Torqu' ...
  'e damping'];
DampgQuadHwTqLpFilFrq.DocUnits = 'Hz';
DampgQuadHwTqLpFilFrq.EngDT = dt.float32;
DampgQuadHwTqLpFilFrq.EngVal = 15;
DampgQuadHwTqLpFilFrq.EngMin = 5;
DampgQuadHwTqLpFilFrq.EngMax = 31.25;
DampgQuadHwTqLpFilFrq.Cardinality = 'Inin';
DampgQuadHwTqLpFilFrq.CustomerVisible = false;
DampgQuadHwTqLpFilFrq.Online = false;
DampgQuadHwTqLpFilFrq.Impact = 'H';
DampgQuadHwTqLpFilFrq.TuningOwner = 'CSE';
DampgQuadHwTqLpFilFrq.GraphLink = {''};
DampgQuadHwTqLpFilFrq.Monotony = 'None';
DampgQuadHwTqLpFilFrq.MaxGrad = 998;
DampgQuadHwTqLpFilFrq.PortName = 'DampgQuadHwTqLpFilFrq';


DampgQuadMotVelBacklsh = DataDict.Calibration;
DampgQuadMotVelBacklsh.LongName = 'Quadrant Motor Velocity Backlash';
DampgQuadMotVelBacklsh.Description = [...
  'Backlash deadband width defined for Quadrant dependent Motor Velocity ' ...
  'damping'];
DampgQuadMotVelBacklsh.DocUnits = 'MotRadPerSec';
DampgQuadMotVelBacklsh.EngDT = dt.float32;
DampgQuadMotVelBacklsh.EngVal = 0;
DampgQuadMotVelBacklsh.EngMin = 0;
DampgQuadMotVelBacklsh.EngMax = 128;
DampgQuadMotVelBacklsh.Cardinality = 'Cmn';
DampgQuadMotVelBacklsh.CustomerVisible = false;
DampgQuadMotVelBacklsh.Online = false;
DampgQuadMotVelBacklsh.Impact = 'H';
DampgQuadMotVelBacklsh.TuningOwner = 'CSE';
DampgQuadMotVelBacklsh.GraphLink = {''};
DampgQuadMotVelBacklsh.Monotony = 'None';
DampgQuadMotVelBacklsh.MaxGrad = 998;
DampgQuadMotVelBacklsh.PortName = 'DampgQuadMotVelBacklsh';


DampgQuadMotVelLpFilFrq = DataDict.Calibration;
DampgQuadMotVelLpFilFrq.LongName = 'Quadrant Motor Velocity Lowpass Filter Frequency';
DampgQuadMotVelLpFilFrq.Description = [...
  'Lowpass Filter cutoff frequency for Quadrant dependent motor velocity ' ...
  'damping'];
DampgQuadMotVelLpFilFrq.DocUnits = 'Hz';
DampgQuadMotVelLpFilFrq.EngDT = dt.float32;
DampgQuadMotVelLpFilFrq.EngVal = 15;
DampgQuadMotVelLpFilFrq.EngMin = 5;
DampgQuadMotVelLpFilFrq.EngMax = 31.25;
DampgQuadMotVelLpFilFrq.Cardinality = 'Inin';
DampgQuadMotVelLpFilFrq.CustomerVisible = false;
DampgQuadMotVelLpFilFrq.Online = false;
DampgQuadMotVelLpFilFrq.Impact = 'H';
DampgQuadMotVelLpFilFrq.TuningOwner = 'CSE';
DampgQuadMotVelLpFilFrq.GraphLink = {''};
DampgQuadMotVelLpFilFrq.Monotony = 'None';
DampgQuadMotVelLpFilFrq.MaxGrad = 998;
DampgQuadMotVelLpFilFrq.PortName = 'DampgQuadMotVelLpFilFrq';


DampgQuadScaLpFilFrq = DataDict.Calibration;
DampgQuadScaLpFilFrq.LongName = 'Quadrant Scale Lowpass Filter Frequency';
DampgQuadScaLpFilFrq.Description = [...
  'Lowpass Filter cutoff frequency defined for Quadrant Damping Command f' ...
  'ilter'];
DampgQuadScaLpFilFrq.DocUnits = 'Hz';
DampgQuadScaLpFilFrq.EngDT = dt.float32;
DampgQuadScaLpFilFrq.EngVal = 15;
DampgQuadScaLpFilFrq.EngMin = 0.0039;
DampgQuadScaLpFilFrq.EngMax = 100;
DampgQuadScaLpFilFrq.Cardinality = 'Inin';
DampgQuadScaLpFilFrq.CustomerVisible = false;
DampgQuadScaLpFilFrq.Online = false;
DampgQuadScaLpFilFrq.Impact = 'H';
DampgQuadScaLpFilFrq.TuningOwner = 'CSE';
DampgQuadScaLpFilFrq.GraphLink = {''};
DampgQuadScaLpFilFrq.Monotony = 'None';
DampgQuadScaLpFilFrq.MaxGrad = 998;
DampgQuadScaLpFilFrq.PortName = 'DampgQuadScaLpFilFrq';


DampgTScaX = DataDict.Calibration;
DampgTScaX.LongName = 'Temperature Scale X';
DampgTScaX.Description = 'Table of temperature values';
DampgTScaX.DocUnits = 'DegCgrd';
DampgTScaX.EngDT = dt.s8p7;
DampgTScaX.EngVal =  ...
   [-40              -35              -30              -20              -10                0               10               20               30               40               50               60               70               90];
DampgTScaX.EngMin = -50;
DampgTScaX.EngMax = 150;
DampgTScaX.Cardinality = 'Inin';
DampgTScaX.CustomerVisible = true;
DampgTScaX.Online = true;
DampgTScaX.Impact = 'H';
DampgTScaX.TuningOwner = 'CSE';
DampgTScaX.GraphLink = {''};
DampgTScaX.Monotony = 'Strictly_Increasing';
DampgTScaX.MaxGrad = 998;
DampgTScaX.PortName = 'DampgTScaX';


DampgTScaY = DataDict.Calibration;
DampgTScaY.LongName = 'Temperature Scale Y';
DampgTScaY.Description = 'Table of scale values, 0 to 10';
DampgTScaY.DocUnits = 'Uls';
DampgTScaY.EngDT = dt.u4p12;
DampgTScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1                1                1];
DampgTScaY.EngMin = 0;
DampgTScaY.EngMax = 10;
DampgTScaY.Cardinality = 'Inin';
DampgTScaY.CustomerVisible = true;
DampgTScaY.Online = true;
DampgTScaY.Impact = 'H';
DampgTScaY.TuningOwner = 'CSE';
DampgTScaY.GraphLink = {'DampgTScaX'};
DampgTScaY.Monotony = 'None';
DampgTScaY.MaxGrad = 998;
DampgTScaY.PortName = 'DampgTScaY';



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
SysGlbPrmVehSpdBilnrSeln.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dDampgAssiMechTSca = DataDict.Display;
dDampgAssiMechTSca.LongName = 'Damping Assist Mechanism Temperature Scale';
dDampgAssiMechTSca.Description = [...
  'Scale factor applied to Damping, based on temperature.'];
dDampgAssiMechTSca.DocUnits = 'DegCgrd';
dDampgAssiMechTSca.EngDT = dt.float32;
dDampgAssiMechTSca.EngMin = 0;
dDampgAssiMechTSca.EngMax = 10;
dDampgAssiMechTSca.InitRowCol = [1  1];


dDampgCoeff1Term = DataDict.Display;
dDampgCoeff1Term.LongName = 'Damping Coefficient 1 Term';
dDampgCoeff1Term.Description = 'Damping C1 Term';
dDampgCoeff1Term.DocUnits = 'Uls';
dDampgCoeff1Term.EngDT = dt.float32;
dDampgCoeff1Term.EngMin = 0;
dDampgCoeff1Term.EngMax = 10;
dDampgCoeff1Term.InitRowCol = [1  1];


dDampgCoeff2Term = DataDict.Display;
dDampgCoeff2Term.LongName = 'Damping Coefficient 2 Term';
dDampgCoeff2Term.Description = 'Damping C2 Term';
dDampgCoeff2Term.DocUnits = 'Uls';
dDampgCoeff2Term.EngDT = dt.float32;
dDampgCoeff2Term.EngMin = 0;
dDampgCoeff2Term.EngMax = 10;
dDampgCoeff2Term.InitRowCol = [1  1];


dDampgCoeff3Term = DataDict.Display;
dDampgCoeff3Term.LongName = 'Damping Coefficient 3 Term';
dDampgCoeff3Term.Description = 'Damping C3 Term';
dDampgCoeff3Term.DocUnits = 'Uls';
dDampgCoeff3Term.EngDT = dt.float32;
dDampgCoeff3Term.EngMin = 0;
dDampgCoeff3Term.EngMax = 10;
dDampgCoeff3Term.InitRowCol = [1  1];


dDampgCoeff4Term = DataDict.Display;
dDampgCoeff4Term.LongName = 'Damping Coefficient 4 Term';
dDampgCoeff4Term.Description = 'Damping C4 Term';
dDampgCoeff4Term.DocUnits = 'Uls';
dDampgCoeff4Term.EngDT = dt.float32;
dDampgCoeff4Term.EngMin = 0;
dDampgCoeff4Term.EngMax = 10;
dDampgCoeff4Term.InitRowCol = [1  1];


dDampgHwTqSca = DataDict.Display;
dDampgHwTqSca.LongName = 'Damping HandWheel Torque Scale';
dDampgHwTqSca.Description = [...
  'Scale factor applied to Damping, based on HandWheel Torque.'];
dDampgHwTqSca.DocUnits = 'Uls';
dDampgHwTqSca.EngDT = dt.float32;
dDampgHwTqSca.EngMin = 0;
dDampgHwTqSca.EngMax = 1;
dDampgHwTqSca.InitRowCol = [1  1];


dDampgMotVelDampgCmd = DataDict.Display;
dDampgMotVelDampgCmd.LongName = 'Damping Motor Velocity Damping Command';
dDampgMotVelDampgCmd.Description = [...
  'Motor Velocity Column Reference Frame Damping Command'];
dDampgMotVelDampgCmd.DocUnits = 'MotNwtMtr';
dDampgMotVelDampgCmd.EngDT = dt.float32;
dDampgMotVelDampgCmd.EngMin = -8.8;
dDampgMotVelDampgCmd.EngMax = 8.8;
dDampgMotVelDampgCmd.InitRowCol = [1  1];


dDampgQuadHwTqBacklsh = DataDict.Display;
dDampgQuadHwTqBacklsh.LongName = 'Damping Quadrant Handwheel Torque Backlash';
dDampgQuadHwTqBacklsh.Description = [...
  'Lashed Quadrant dependent damping Handwheel Torque'];
dDampgQuadHwTqBacklsh.DocUnits = 'HwNwtMtr';
dDampgQuadHwTqBacklsh.EngDT = dt.float32;
dDampgQuadHwTqBacklsh.EngMin = 0;
dDampgQuadHwTqBacklsh.EngMax = 10;
dDampgQuadHwTqBacklsh.InitRowCol = [1  1];


dDampgQuadMotVelBacklsh = DataDict.Display;
dDampgQuadMotVelBacklsh.LongName = 'Damping Quadrant Motor Velocity Backlash';
dDampgQuadMotVelBacklsh.Description = [...
  'Lashed Quadrant dependent damping Motor Velocity'];
dDampgQuadMotVelBacklsh.DocUnits = 'MotRadPerSec';
dDampgQuadMotVelBacklsh.EngDT = dt.float32;
dDampgQuadMotVelBacklsh.EngMin = 0;
dDampgQuadMotVelBacklsh.EngMax = 128;
dDampgQuadMotVelBacklsh.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotVelDampgLpFil = DataDict.PIM;
MotVelDampgLpFil.LongName = 'Motor Velocity Damping Lowpass Filter';
MotVelDampgLpFil.Description = [...
  'Motor Velocity Column Reference Frame Damping Lowpass Filter'];
MotVelDampgLpFil.DocUnits = 'MotNwtMtr';
MotVelDampgLpFil.EngDT = struct.FilLpRec1;
MotVelDampgLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
MotVelDampgLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
MotVelDampgLpFil.InitRowCol = [1  1];


PrevHwTqBacklshOutp = DataDict.PIM;
PrevHwTqBacklshOutp.LongName = 'Previous HandWheel Torque Backlash Output';
PrevHwTqBacklshOutp.Description = [...
  'Pervious value of Handwheel Torque Backlash Output'];
PrevHwTqBacklshOutp.DocUnits = 'HwNwtMtr';
PrevHwTqBacklshOutp.EngDT = dt.float32;
PrevHwTqBacklshOutp.EngMin = -10;
PrevHwTqBacklshOutp.EngMax = 10;
PrevHwTqBacklshOutp.InitRowCol = [1  1];


PrevMotVelBacklshOutp = DataDict.PIM;
PrevMotVelBacklshOutp.LongName = 'Previous Motor Vehicle Backlash Output';
PrevMotVelBacklshOutp.Description = [...
  'Pervious value of Velocity Column Reference Frame Backlash Output'];
PrevMotVelBacklshOutp.DocUnits = 'MotRadPerSec';
PrevMotVelBacklshOutp.EngDT = dt.float32;
PrevMotVelBacklshOutp.EngMin = -1350;
PrevMotVelBacklshOutp.EngMax = 1350;
PrevMotVelBacklshOutp.InitRowCol = [1  1];


QuadDampgHwTqLpFil = DataDict.PIM;
QuadDampgHwTqLpFil.LongName = 'Quadrant Damping Handwheel Torque Lowpass Filter';
QuadDampgHwTqLpFil.Description = [...
  'Quadrant Damping Handwheel Torque Lowpass Filter'];
QuadDampgHwTqLpFil.DocUnits = 'HwNwtMtr';
QuadDampgHwTqLpFil.EngDT = struct.FilLpRec1;
QuadDampgHwTqLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
QuadDampgHwTqLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
QuadDampgHwTqLpFil.InitRowCol = [1  1];


QuadDampgMotVelLpFil = DataDict.PIM;
QuadDampgMotVelLpFil.LongName = 'Quadrant Damping Motor Velocity Lowpass Filter';
QuadDampgMotVelLpFil.Description = [...
  'Quadrant Damping Motor Velocity Column Reference Frame Lowpass Filter'];
QuadDampgMotVelLpFil.DocUnits = 'MotRadPerSec';
QuadDampgMotVelLpFil.EngDT = struct.FilLpRec1;
QuadDampgMotVelLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
QuadDampgMotVelLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
QuadDampgMotVelLpFil.InitRowCol = [1  1];


QuadDampgScaLpFil = DataDict.PIM;
QuadDampgScaLpFil.LongName = 'Quadrant Damping Scale Lowpass Filter';
QuadDampgScaLpFil.Description = [...
  'Quadrant Damping Command Lowpass Filter'];
QuadDampgScaLpFil.DocUnits = 'Uls';
QuadDampgScaLpFil.EngDT = struct.FilLpRec1;
QuadDampgScaLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
QuadDampgScaLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
QuadDampgScaLpFil.InitRowCol = [1  1];



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


FLTINJ_DAMPG_DAMPGCMDBAS = DataDict.Constant;
FLTINJ_DAMPG_DAMPGCMDBAS.LongName = 'Fault Injection Damping Command Base';
FLTINJ_DAMPG_DAMPGCMDBAS.Description = [...
  'Fault Injection Damping Command Base Constant'];
FLTINJ_DAMPG_DAMPGCMDBAS.DocUnits = 'Uls';
FLTINJ_DAMPG_DAMPGCMDBAS.EngDT = dt.u16;
FLTINJ_DAMPG_DAMPGCMDBAS.EngVal = 3;
FLTINJ_DAMPG_DAMPGCMDBAS.Define = 'Global';


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
