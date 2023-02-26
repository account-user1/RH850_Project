%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Dec-2016 11:42:27       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %     %
%%-----------------------------------------------------------------------%

SF012A = DataDict.FDD;
SF012A.Version = '1.2.X';
SF012A.LongName = 'Hysteresis Compensation';
SF012A.ShoName  = 'HysCmp';
SF012A.DesignASIL = 'D';
SF012A.Description = [...
  'This function improves steering precision and feel by compensating for' ...
  ' physical friction and efficiency losses. Due to the vibratory nature ' ...
  'of a vehicle, the calibrations associated with these physical attribut' ...
  'es are allowed to vary according to vehicle speed and the magnitude of' ...
  ' Wheel Imbalance Rejection function command. The function includes a f' ...
  'eature to deal with changing physical system properties over temperatu' ...
  're operating range. It also incorporates calibration tables used to mo' ...
  'dify how the compensation is applied during transitions between operat' ...
  'ing quadrants and during periods of near-zero handwheel torque. Finall' ...
  'y, the function may be disabled for purposes of bench testing.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HysCmpInit1 = DataDict.Runnable;
HysCmpInit1.Context = 'Rte';
HysCmpInit1.TimeStep = 0;
HysCmpInit1.Description = [...
  'Runnable defined for initialization'];

HysCmpPer1 = DataDict.Runnable;
HysCmpPer1.Context = 'Rte';
HysCmpPer1.TimeStep = 0.002;
HysCmpPer1.Description = 'Periodic runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'HysCmpPer1'};
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
AssiCmdBas = DataDict.IpSignal;
AssiCmdBas.LongName = 'Base Assist Command';
AssiCmdBas.Description = 'Base Assist Command';
AssiCmdBas.DocUnits = 'MotNwtMtr';
AssiCmdBas.EngDT = dt.float32;
AssiCmdBas.EngInit = 0;
AssiCmdBas.EngMin = -8.8;
AssiCmdBas.EngMax = 8.8;
AssiCmdBas.ReadIn = {'HysCmpPer1'};
AssiCmdBas.ReadType = 'Rte';


AssiMechT = DataDict.IpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature Estimate';
AssiMechT.Description = [...
  'Assist Mechanism Temperature Estimate'];
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 0;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.ReadIn = {'HysCmpPer1'};
AssiMechT.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'HysCmpPer1'};
HwTq.ReadType = 'Rte';


HysCmpCmdDi = DataDict.IpSignal;
HysCmpCmdDi.LongName = 'Defeat Hysteresis Service';
HysCmpCmdDi.Description = 'Defeat Hysteresis Service';
HysCmpCmdDi.DocUnits = 'Cnt';
HysCmpCmdDi.EngDT = dt.lgc;
HysCmpCmdDi.EngInit = 0;
HysCmpCmdDi.EngMin = 0;
HysCmpCmdDi.EngMax = 1;
HysCmpCmdDi.ReadIn = {'HysCmpPer1'};
HysCmpCmdDi.ReadType = 'Rte';


SysFricOffs = DataDict.IpSignal;
SysFricOffs.LongName = 'Friction Offset';
SysFricOffs.Description = 'System Friction Offset';
SysFricOffs.DocUnits = 'HwNwtMtr';
SysFricOffs.EngDT = dt.float32;
SysFricOffs.EngInit = 0;
SysFricOffs.EngMin = -10;
SysFricOffs.EngMax = 10;
SysFricOffs.ReadIn = {'HysCmpPer1'};
SysFricOffs.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'HysCmpPer1'};
VehSpd.ReadType = 'Rte';


WhlImbRejctnAmp = DataDict.IpSignal;
WhlImbRejctnAmp.LongName = 'WIR Command Amplitude Blend';
WhlImbRejctnAmp.Description = 'WIR Command Amplitude Blend';
WhlImbRejctnAmp.DocUnits = 'MotNwtMtr';
WhlImbRejctnAmp.EngDT = dt.float32;
WhlImbRejctnAmp.EngInit = 0;
WhlImbRejctnAmp.EngMin = 0;
WhlImbRejctnAmp.EngMax = 8.8;
WhlImbRejctnAmp.ReadIn = {'HysCmpPer1'};
WhlImbRejctnAmp.ReadType = 'Rte';

HwTqOvrl = DataDict.IpSignal;
HwTqOvrl.LongName = 'Input Overlay';
HwTqOvrl.Description = 'Input Overlay';
HwTqOvrl.DocUnits = 'HwNwtMtr';
HwTqOvrl.EngDT = dt.float32;
HwTqOvrl.EngInit = 0;
HwTqOvrl.EngMin = -10;
HwTqOvrl.EngMax = 10;
HwTqOvrl.ReadIn = {'HysCmpPer1'};
HwTqOvrl.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HysCmpCmd = DataDict.OpSignal;
HysCmpCmd.LongName = 'Hysteresis Compensation';
HysCmpCmd.Description = [...
  'Assist modifier provided to Stability Compensation function.'];
HysCmpCmd.DocUnits = 'MotNwtMtr';
HysCmpCmd.SwcShoName = 'HysCmp';
HysCmpCmd.EngDT = dt.float32;
HysCmpCmd.EngInit = 0;
HysCmpCmd.EngMin = -8.8;
HysCmpCmd.EngMax = 8.8;
HysCmpCmd.TestTolerance = 0.000488281;
HysCmpCmd.WrittenIn = {'HysCmpPer1'};
HysCmpCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HysCmpAssiCmdLpFilFrq = DataDict.Calibration;
HysCmpAssiCmdLpFilFrq.LongName = 'Assist Command Lowpass Filter Frequency';
HysCmpAssiCmdLpFilFrq.Description = [...
  'Assist low pass filter cutoff frequency.'];
HysCmpAssiCmdLpFilFrq.DocUnits = 'Hz';
HysCmpAssiCmdLpFilFrq.EngDT = dt.float32;
HysCmpAssiCmdLpFilFrq.EngVal = 50;
HysCmpAssiCmdLpFilFrq.EngMin = 1;
HysCmpAssiCmdLpFilFrq.EngMax = 50;
HysCmpAssiCmdLpFilFrq.Cardinality = 'Inin';
HysCmpAssiCmdLpFilFrq.CustomerVisible = false;
HysCmpAssiCmdLpFilFrq.Online = false;
HysCmpAssiCmdLpFilFrq.Impact = 'H';
HysCmpAssiCmdLpFilFrq.TuningOwner = 'CSE';
HysCmpAssiCmdLpFilFrq.GraphLink = {''};
HysCmpAssiCmdLpFilFrq.Monotony = 'None';
HysCmpAssiCmdLpFilFrq.MaxGrad = 998;
HysCmpAssiCmdLpFilFrq.PortName = 'HysCmpAssiCmdLpFilFrq';


HysCmpAssiInpLim = DataDict.Calibration;
HysCmpAssiInpLim.LongName = 'Assist Input Limit';
HysCmpAssiInpLim.Description = [...
  'Upper limit of incoming Assist magnitude (HwNm). Max Limit is calculat' ...
  'edbased on Assist Cmd limit * System Torque Ratio i.e., 8.8*40 = 352'];
HysCmpAssiInpLim.DocUnits = 'HwNwtMtr';
HysCmpAssiInpLim.EngDT = dt.u9p7;
HysCmpAssiInpLim.EngVal = 352;
HysCmpAssiInpLim.EngMin = 0;
HysCmpAssiInpLim.EngMax = 352;
HysCmpAssiInpLim.Cardinality = 'Inin';
HysCmpAssiInpLim.CustomerVisible = false;
HysCmpAssiInpLim.Online = false;
HysCmpAssiInpLim.Impact = 'H';
HysCmpAssiInpLim.TuningOwner = 'CSE';
HysCmpAssiInpLim.GraphLink = {''};
HysCmpAssiInpLim.Monotony = 'None';
HysCmpAssiInpLim.MaxGrad = 998;
HysCmpAssiInpLim.PortName = 'HysCmpAssiInpLim';


HysCmpEffLossY = DataDict.Calibration;
HysCmpEffLossY.LongName = 'Efficiency Loss Y';
HysCmpEffLossY.Description = [...
  'Table of load-dependent efficiency loss at various vehicle speeds'];
HysCmpEffLossY.DocUnits = 'Uls';
HysCmpEffLossY.EngDT = dt.u4p12;
HysCmpEffLossY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
HysCmpEffLossY.EngMin = 0;
HysCmpEffLossY.EngMax = 1;
HysCmpEffLossY.Cardinality = 'Rt';
HysCmpEffLossY.CustomerVisible = false;
HysCmpEffLossY.Online = false;
HysCmpEffLossY.Impact = 'H';
HysCmpEffLossY.TuningOwner = 'CSE';
HysCmpEffLossY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
HysCmpEffLossY.Monotony = 'None';
HysCmpEffLossY.MaxGrad = 998;
HysCmpEffLossY.PortName = 'HysCmpEffLossY';


HysCmpEffOffsY = DataDict.Calibration;
HysCmpEffOffsY.LongName = 'Efficiency Offset Y';
HysCmpEffOffsY.Description = [...
  'Table that offsets the efficiency loss values.  e.g. If offset = 1 HwN' ...
  'm, then efficiency loss would be zero from 0 to 1 HwNm, then increase ' ...
  'per the EffLossY calibration table.'];
HysCmpEffOffsY.DocUnits = 'HwNwtMtr';
HysCmpEffOffsY.EngDT = dt.u9p7;
HysCmpEffOffsY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
HysCmpEffOffsY.EngMin = 0;
HysCmpEffOffsY.EngMax = 10;
HysCmpEffOffsY.Cardinality = 'Rt';
HysCmpEffOffsY.CustomerVisible = false;
HysCmpEffOffsY.Online = false;
HysCmpEffOffsY.Impact = 'H';
HysCmpEffOffsY.TuningOwner = 'CSE';
HysCmpEffOffsY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
HysCmpEffOffsY.Monotony = 'None';
HysCmpEffOffsY.MaxGrad = 998;
HysCmpEffOffsY.PortName = 'HysCmpEffOffsY';


HysCmpFinalOutpLpFilFrq = DataDict.Calibration;
HysCmpFinalOutpLpFilFrq.LongName = 'Final Output Lowpass Filter Frequency';
HysCmpFinalOutpLpFilFrq.Description = [...
  'Cutoff frequency of low pass filter applied to function''s output.'];
HysCmpFinalOutpLpFilFrq.DocUnits = 'Hz';
HysCmpFinalOutpLpFilFrq.EngDT = dt.float32;
HysCmpFinalOutpLpFilFrq.EngVal = 50;
HysCmpFinalOutpLpFilFrq.EngMin = 1;
HysCmpFinalOutpLpFilFrq.EngMax = 50;
HysCmpFinalOutpLpFilFrq.Cardinality = 'Inin';
HysCmpFinalOutpLpFilFrq.CustomerVisible = false;
HysCmpFinalOutpLpFilFrq.Online = false;
HysCmpFinalOutpLpFilFrq.Impact = 'H';
HysCmpFinalOutpLpFilFrq.TuningOwner = 'CSE';
HysCmpFinalOutpLpFilFrq.GraphLink = {''};
HysCmpFinalOutpLpFilFrq.Monotony = 'None';
HysCmpFinalOutpLpFilFrq.MaxGrad = 998;
HysCmpFinalOutpLpFilFrq.PortName = 'HysCmpFinalOutpLpFilFrq';


HysCmpFricTScaX = DataDict.Calibration;
HysCmpFricTScaX.LongName = 'Friction Temperature Scale X';
HysCmpFricTScaX.Description = [...
  'Table of temperature values for scaling sub-function output.'];
HysCmpFricTScaX.DocUnits = 'DegCgrd';
HysCmpFricTScaX.EngDT = dt.s14p1;
HysCmpFricTScaX.EngVal =  ...
   [-40              -30              -20              -10                0               25               50               80];
HysCmpFricTScaX.EngMin = -50;
HysCmpFricTScaX.EngMax = 150;
HysCmpFricTScaX.Cardinality = 'Inin';
HysCmpFricTScaX.CustomerVisible = false;
HysCmpFricTScaX.Online = false;
HysCmpFricTScaX.Impact = 'H';
HysCmpFricTScaX.TuningOwner = 'CSE';
HysCmpFricTScaX.GraphLink = {''};
HysCmpFricTScaX.Monotony = 'Strictly_Increasing';
HysCmpFricTScaX.MaxGrad = 998;
HysCmpFricTScaX.PortName = 'HysCmpFricTScaX';


HysCmpFricTScaY = DataDict.Calibration;
HysCmpFricTScaY.LongName = 'Friction Temperature Scale Y';
HysCmpFricTScaY.Description = [...
  'Table of scale factors over temperature.'];
HysCmpFricTScaY.DocUnits = 'Uls';
HysCmpFricTScaY.EngDT = dt.u9p7;
HysCmpFricTScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1];
HysCmpFricTScaY.EngMin = 0;
HysCmpFricTScaY.EngMax = 10;
HysCmpFricTScaY.Cardinality = 'Inin';
HysCmpFricTScaY.CustomerVisible = false;
HysCmpFricTScaY.Online = false;
HysCmpFricTScaY.Impact = 'H';
HysCmpFricTScaY.TuningOwner = 'CSE';
HysCmpFricTScaY.GraphLink = {'HysCmpFricTScaX'};
HysCmpFricTScaY.Monotony = 'None';
HysCmpFricTScaY.MaxGrad = 998;
HysCmpFricTScaY.PortName = 'HysCmpFricTScaY';


HysCmpFricWhlImbRejctnBlndX = DataDict.Calibration;
HysCmpFricWhlImbRejctnBlndX.LongName = 'Friction Wheel Imbalance Rejection Blend X';
HysCmpFricWhlImbRejctnBlndX.Description = [...
  'Table of WIR function command values to blend between CoulFricY tuning' ...
  's.'];
HysCmpFricWhlImbRejctnBlndX.DocUnits = 'MotNwtMtr';
HysCmpFricWhlImbRejctnBlndX.EngDT = dt.u8p8;
HysCmpFricWhlImbRejctnBlndX.EngVal =  ...
   [0              0.2              0.4              0.6              0.8                1];
HysCmpFricWhlImbRejctnBlndX.EngMin = 0;
HysCmpFricWhlImbRejctnBlndX.EngMax = 8.8;
HysCmpFricWhlImbRejctnBlndX.Cardinality = 'Rt';
HysCmpFricWhlImbRejctnBlndX.CustomerVisible = false;
HysCmpFricWhlImbRejctnBlndX.Online = false;
HysCmpFricWhlImbRejctnBlndX.Impact = 'H';
HysCmpFricWhlImbRejctnBlndX.TuningOwner = 'CSE';
HysCmpFricWhlImbRejctnBlndX.GraphLink = {''};
HysCmpFricWhlImbRejctnBlndX.Monotony = 'Strictly_Increasing';
HysCmpFricWhlImbRejctnBlndX.MaxGrad = 998;
HysCmpFricWhlImbRejctnBlndX.PortName = 'HysCmpFricWhlImbRejctnBlndX';


HysCmpFricWhlImbRejctnBlndY = DataDict.Calibration;
HysCmpFricWhlImbRejctnBlndY.LongName = 'Friction Wheel Imbalance Rejection Blend Y';
HysCmpFricWhlImbRejctnBlndY.Description = [...
  'Table of scale values to blend between CoulFricY tunings.'];
HysCmpFricWhlImbRejctnBlndY.DocUnits = 'Uls';
HysCmpFricWhlImbRejctnBlndY.EngDT = dt.u2p14;
HysCmpFricWhlImbRejctnBlndY.EngVal =  ...
   [0                0                0                0                0                0];
HysCmpFricWhlImbRejctnBlndY.EngMin = 0;
HysCmpFricWhlImbRejctnBlndY.EngMax = 1;
HysCmpFricWhlImbRejctnBlndY.Cardinality = 'Rt';
HysCmpFricWhlImbRejctnBlndY.CustomerVisible = false;
HysCmpFricWhlImbRejctnBlndY.Online = false;
HysCmpFricWhlImbRejctnBlndY.Impact = 'H';
HysCmpFricWhlImbRejctnBlndY.TuningOwner = 'CSE';
HysCmpFricWhlImbRejctnBlndY.GraphLink = {'HysCmpFricWhlImbRejctnBlndX'};
HysCmpFricWhlImbRejctnBlndY.Monotony = 'None';
HysCmpFricWhlImbRejctnBlndY.MaxGrad = 998;
HysCmpFricWhlImbRejctnBlndY.PortName = 'HysCmpFricWhlImbRejctnBlndY';


HysCmpFricWhlImbRejctnOffY = DataDict.Calibration;
HysCmpFricWhlImbRejctnOffY.LongName = 'Friction Wheel Imbalance Rejection Off X';
HysCmpFricWhlImbRejctnOffY.Description = [...
  'Friction values when operating with WIR inactive'];
HysCmpFricWhlImbRejctnOffY.DocUnits = 'HwNwtMtr';
HysCmpFricWhlImbRejctnOffY.EngDT = dt.u9p7;
HysCmpFricWhlImbRejctnOffY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
HysCmpFricWhlImbRejctnOffY.EngMin = 0;
HysCmpFricWhlImbRejctnOffY.EngMax = 10;
HysCmpFricWhlImbRejctnOffY.Cardinality = 'Rt';
HysCmpFricWhlImbRejctnOffY.CustomerVisible = false;
HysCmpFricWhlImbRejctnOffY.Online = false;
HysCmpFricWhlImbRejctnOffY.Impact = 'H';
HysCmpFricWhlImbRejctnOffY.TuningOwner = 'CSE';
HysCmpFricWhlImbRejctnOffY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
HysCmpFricWhlImbRejctnOffY.Monotony = 'None';
HysCmpFricWhlImbRejctnOffY.MaxGrad = 998;
HysCmpFricWhlImbRejctnOffY.PortName = 'HysCmpFricWhlImbRejctnOffY';


HysCmpFricWhlImbRejctnOnY = DataDict.Calibration;
HysCmpFricWhlImbRejctnOnY.LongName = 'Friction Wheel Imbalance Rejection on X';
HysCmpFricWhlImbRejctnOnY.Description = [...
  'Friction values when operating with WIR active.'];
HysCmpFricWhlImbRejctnOnY.DocUnits = 'HwNwtMtr';
HysCmpFricWhlImbRejctnOnY.EngDT = dt.u9p7;
HysCmpFricWhlImbRejctnOnY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0];
HysCmpFricWhlImbRejctnOnY.EngMin = 0;
HysCmpFricWhlImbRejctnOnY.EngMax = 10;
HysCmpFricWhlImbRejctnOnY.Cardinality = 'Rt';
HysCmpFricWhlImbRejctnOnY.CustomerVisible = false;
HysCmpFricWhlImbRejctnOnY.Online = false;
HysCmpFricWhlImbRejctnOnY.Impact = 'H';
HysCmpFricWhlImbRejctnOnY.TuningOwner = 'CSE';
HysCmpFricWhlImbRejctnOnY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
HysCmpFricWhlImbRejctnOnY.Monotony = 'None';
HysCmpFricWhlImbRejctnOnY.MaxGrad = 998;
HysCmpFricWhlImbRejctnOnY.PortName = 'HysCmpFricWhlImbRejctnOnY';


HysCmpHwTqLpFilFrq = DataDict.Calibration;
HysCmpHwTqLpFilFrq.LongName = 'Handwheel Torque Lowpass Filter Frequency';
HysCmpHwTqLpFilFrq.Description = [...
  'Handwheel torque low pass filter cutoff frequency.'];
HysCmpHwTqLpFilFrq.DocUnits = 'Hz';
HysCmpHwTqLpFilFrq.EngDT = dt.float32;
HysCmpHwTqLpFilFrq.EngVal = 50;
HysCmpHwTqLpFilFrq.EngMin = 1;
HysCmpHwTqLpFilFrq.EngMax = 50;
HysCmpHwTqLpFilFrq.Cardinality = 'Inin';
HysCmpHwTqLpFilFrq.CustomerVisible = false;
HysCmpHwTqLpFilFrq.Online = false;
HysCmpHwTqLpFilFrq.Impact = 'H';
HysCmpHwTqLpFilFrq.TuningOwner = 'CSE';
HysCmpHwTqLpFilFrq.GraphLink = {''};
HysCmpHwTqLpFilFrq.Monotony = 'None';
HysCmpHwTqLpFilFrq.MaxGrad = 998;
HysCmpHwTqLpFilFrq.PortName = 'HysCmpHwTqLpFilFrq';


HysCmpHwTqScaX = DataDict.Calibration;
HysCmpHwTqScaX.LongName = 'Handwheel Torque Scale X';
HysCmpHwTqScaX.Description = [...
  '2-D table of handwheel torque values, varying across vehicle speeds.'];
HysCmpHwTqScaX.DocUnits = 'HwNwtMtr';
HysCmpHwTqScaX.EngDT = dt.u4p12;
HysCmpHwTqScaX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.199            0.199            0.199            0.199            0.199            0.199            0.199            0.199            0.199            0.199            0.199            0.199
    0.399            0.399            0.399            0.399            0.399            0.399            0.399            0.399            0.399            0.399            0.399            0.399
    0.6              0.6              0.6              0.6              0.6              0.6              0.6              0.6              0.6              0.6              0.6              0.6
    1                1                1                1                1                1                1                1                1                1                1                1
    1.399            1.399            1.399            1.399            1.399            1.399            1.399            1.399            1.399            1.399            1.399            1.399
    2                2                2                2                2                2                2                2                2                2                2                2
    10               10               10               10               10               10               10               10               10               10               10               10];
HysCmpHwTqScaX.EngMin = 0;
HysCmpHwTqScaX.EngMax = 10;
HysCmpHwTqScaX.Cardinality = 'Rt';
HysCmpHwTqScaX.CustomerVisible = false;
HysCmpHwTqScaX.Online = false;
HysCmpHwTqScaX.Impact = 'H';
HysCmpHwTqScaX.TuningOwner = 'CSE';
HysCmpHwTqScaX.GraphLink = {''};
HysCmpHwTqScaX.Monotony = 'Strictly_Increasing';
HysCmpHwTqScaX.MaxGrad = 998;
HysCmpHwTqScaX.PortName = 'HysCmpHwTqScaX';


HysCmpHwTqScaY = DataDict.Calibration;
HysCmpHwTqScaY.LongName = 'Handwheel Torque Scale X';
HysCmpHwTqScaY.Description = [...
  '2-D table of scale factors applied to CompAvail calculation. Varies ac' ...
  'ross vehicle speed.'];
HysCmpHwTqScaY.DocUnits = 'Uls';
HysCmpHwTqScaY.EngDT = dt.u4p12;
HysCmpHwTqScaY.EngVal =  ...
   [1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1
    1                1                1                1                1                1                1                1                1                1                1                1];
HysCmpHwTqScaY.EngMin = 0;
HysCmpHwTqScaY.EngMax = 1;
HysCmpHwTqScaY.Cardinality = 'Rt';
HysCmpHwTqScaY.CustomerVisible = false;
HysCmpHwTqScaY.Online = false;
HysCmpHwTqScaY.Impact = 'H';
HysCmpHwTqScaY.TuningOwner = 'CSE';
HysCmpHwTqScaY.GraphLink = {'HysCmpHwTqScaX'};
HysCmpHwTqScaY.Monotony = 'None';
HysCmpHwTqScaY.MaxGrad = 998;
HysCmpHwTqScaY.PortName = 'HysCmpHwTqScaY';


HysCmpHysSatnY = DataDict.Calibration;
HysCmpHysSatnY.LongName = 'Hysteresis Saturation Y';
HysCmpHysSatnY.Description = [...
  'Table of saturation values for the total available hysteresis compensa' ...
  'tion'];
HysCmpHysSatnY.DocUnits = 'HwNwtMtr';
HysCmpHysSatnY.EngDT = dt.u9p7;
HysCmpHysSatnY.EngVal =  ...
   [10               10               10               10               10               10               10               10               10               10               10               10];
HysCmpHysSatnY.EngMin = 0;
HysCmpHysSatnY.EngMax = 10;
HysCmpHysSatnY.Cardinality = 'Rt';
HysCmpHysSatnY.CustomerVisible = false;
HysCmpHysSatnY.Online = false;
HysCmpHysSatnY.Impact = 'H';
HysCmpHysSatnY.TuningOwner = 'CSE';
HysCmpHysSatnY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
HysCmpHysSatnY.Monotony = 'None';
HysCmpHysSatnY.MaxGrad = 998;
HysCmpHysSatnY.PortName = 'HysCmpHysSatnY';


HysCmpNegHysCmpScaX = DataDict.Calibration;
HysCmpNegHysCmpScaX.LongName = 'Negative Hysteresis Compensation Scale X';
HysCmpNegHysCmpScaX.Description = [...
  'Table of assist values (HwNm) to blend out the negative compensation f' ...
  'actor.'];
HysCmpNegHysCmpScaX.DocUnits = 'HwNwtMtr';
HysCmpNegHysCmpScaX.EngDT = dt.u9p7;
HysCmpNegHysCmpScaX.EngVal =  ...
   [0                1                2                3                4];
HysCmpNegHysCmpScaX.EngMin = 0;
HysCmpNegHysCmpScaX.EngMax = 10;
HysCmpNegHysCmpScaX.Cardinality = 'Rt';
HysCmpNegHysCmpScaX.CustomerVisible = false;
HysCmpNegHysCmpScaX.Online = false;
HysCmpNegHysCmpScaX.Impact = 'H';
HysCmpNegHysCmpScaX.TuningOwner = 'CSE';
HysCmpNegHysCmpScaX.GraphLink = {''};
HysCmpNegHysCmpScaX.Monotony = 'Strictly_Increasing';
HysCmpNegHysCmpScaX.MaxGrad = 998;
HysCmpNegHysCmpScaX.PortName = 'HysCmpNegHysCmpScaX';


HysCmpNegHysCmpScaY = DataDict.Calibration;
HysCmpNegHysCmpScaY.LongName = 'Negative Hysteresis Compensation Scale Y';
HysCmpNegHysCmpScaY.Description = [...
  'Table of scale values to blend out the negative compensation factor'];
HysCmpNegHysCmpScaY.DocUnits = 'Uls';
HysCmpNegHysCmpScaY.EngDT = dt.u2p14;
HysCmpNegHysCmpScaY.EngVal =  ...
   [1                1                1                1                1];
HysCmpNegHysCmpScaY.EngMin = 0;
HysCmpNegHysCmpScaY.EngMax = 1;
HysCmpNegHysCmpScaY.Cardinality = 'Rt';
HysCmpNegHysCmpScaY.CustomerVisible = false;
HysCmpNegHysCmpScaY.Online = false;
HysCmpNegHysCmpScaY.Impact = 'H';
HysCmpNegHysCmpScaY.TuningOwner = 'CSE';
HysCmpNegHysCmpScaY.GraphLink = {'HysCmpNegHysCmpScaX'};
HysCmpNegHysCmpScaY.Monotony = 'None';
HysCmpNegHysCmpScaY.MaxGrad = 998;
HysCmpNegHysCmpScaY.PortName = 'HysCmpNegHysCmpScaY';


HysCmpNegHysCmpX = DataDict.Calibration;
HysCmpNegHysCmpX.LongName = 'Negative Hysteresis Compensation X';
HysCmpNegHysCmpX.Description = [...
  'Table of WIR command amplitude values for generating negative hysteres' ...
  'is compensation'];
HysCmpNegHysCmpX.DocUnits = 'MotNwtMtr';
HysCmpNegHysCmpX.EngDT = dt.u8p8;
HysCmpNegHysCmpX.EngVal =  ...
   [0            0.101            0.199            0.398            0.602            0.801            0.898                1];
HysCmpNegHysCmpX.EngMin = 0;
HysCmpNegHysCmpX.EngMax = 8.8;
HysCmpNegHysCmpX.Cardinality = 'Rt';
HysCmpNegHysCmpX.CustomerVisible = false;
HysCmpNegHysCmpX.Online = false;
HysCmpNegHysCmpX.Impact = 'H';
HysCmpNegHysCmpX.TuningOwner = 'CSE';
HysCmpNegHysCmpX.GraphLink = {''};
HysCmpNegHysCmpX.Monotony = 'Strictly_Increasing';
HysCmpNegHysCmpX.MaxGrad = 998;
HysCmpNegHysCmpX.PortName = 'HysCmpNegHysCmpX';


HysCmpNegHysCmpY = DataDict.Calibration;
HysCmpNegHysCmpY.LongName = 'Negative Hysteresis Compensation Y';
HysCmpNegHysCmpY.Description = [...
  'Table of values to subtract from available compensation, sometimes mak' ...
  'ing the sub-function’s output negative.'];
HysCmpNegHysCmpY.DocUnits = 'HwNwtMtr';
HysCmpNegHysCmpY.EngDT = dt.u9p7;
HysCmpNegHysCmpY.EngVal =  ...
   [0                0                0                0                0                0                0                0];
HysCmpNegHysCmpY.EngMin = 0;
HysCmpNegHysCmpY.EngMax = 10;
HysCmpNegHysCmpY.Cardinality = 'Rt';
HysCmpNegHysCmpY.CustomerVisible = false;
HysCmpNegHysCmpY.Online = false;
HysCmpNegHysCmpY.Impact = 'H';
HysCmpNegHysCmpY.TuningOwner = 'CSE';
HysCmpNegHysCmpY.GraphLink = {'HysCmpNegHysCmpX'};
HysCmpNegHysCmpY.Monotony = 'None';
HysCmpNegHysCmpY.MaxGrad = 998;
HysCmpNegHysCmpY.PortName = 'HysCmpNegHysCmpY';


HysCmpOutpLim = DataDict.Calibration;
HysCmpOutpLim.LongName = 'Output Limit';
HysCmpOutpLim.Description = 'Function output saturation limit.';
HysCmpOutpLim.DocUnits = 'HwNwtMtr';
HysCmpOutpLim.EngDT = dt.float32;
HysCmpOutpLim.EngVal = 16;
HysCmpOutpLim.EngMin = 0;
HysCmpOutpLim.EngMax = 20;
HysCmpOutpLim.Cardinality = 'Rt';
HysCmpOutpLim.CustomerVisible = false;
HysCmpOutpLim.Online = false;
HysCmpOutpLim.Impact = 'H';
HysCmpOutpLim.TuningOwner = 'CSE';
HysCmpOutpLim.GraphLink = {''};
HysCmpOutpLim.Monotony = 'None';
HysCmpOutpLim.MaxGrad = 998;
HysCmpOutpLim.PortName = 'HysCmpOutpLim';


HysCmpRevGain = DataDict.Calibration;
HysCmpRevGain.LongName = 'Revolution Gain';
HysCmpRevGain.Description = [...
  'Magnifies delta handwheel torque during directional changes.  Provides' ...
  ' a tuning method affecting transition feel.  Transition “rise” is tune' ...
  'd via RiseX and RiseY tables.  The “fall” is tuned by this one gain va' ...
  'lue.'];
HysCmpRevGain.DocUnits = 'IvsHwNwtMtr';
HysCmpRevGain.EngDT = dt.float32;
HysCmpRevGain.EngVal = 6;
HysCmpRevGain.EngMin = 0.1;
HysCmpRevGain.EngMax = 15;
HysCmpRevGain.Cardinality = 'Rt';
HysCmpRevGain.CustomerVisible = false;
HysCmpRevGain.Online = false;
HysCmpRevGain.Impact = 'H';
HysCmpRevGain.TuningOwner = 'CSE';
HysCmpRevGain.GraphLink = {''};
HysCmpRevGain.Monotony = 'None';
HysCmpRevGain.MaxGrad = 998;
HysCmpRevGain.PortName = 'HysCmpRevGain';


HysCmpRiseX = DataDict.Calibration;
HysCmpRiseX.LongName = 'Rise X';
HysCmpRiseX.Description = [...
  'Table of handwheel torque values that track a driver’s transition towa' ...
  'rd or away from cornering.'];
HysCmpRiseX.DocUnits = 'HwNwtMtr';
HysCmpRiseX.EngDT = dt.u2p14;
HysCmpRiseX.EngVal =  ...
   [0            0.095            0.128            0.155            0.182              0.2];
HysCmpRiseX.EngMin = 0;
HysCmpRiseX.EngMax = 1;
HysCmpRiseX.Cardinality = 'Rt';
HysCmpRiseX.CustomerVisible = false;
HysCmpRiseX.Online = false;
HysCmpRiseX.Impact = 'H';
HysCmpRiseX.TuningOwner = 'CSE';
HysCmpRiseX.GraphLink = {''};
HysCmpRiseX.Monotony = 'Strictly_Increasing';
HysCmpRiseX.MaxGrad = 998;
HysCmpRiseX.PortName = 'HysCmpRiseX';


HysCmpRiseY = DataDict.Calibration;
HysCmpRiseY.LongName = 'Rise Y';
HysCmpRiseY.Description = [...
  'Table of scale factors representing the fraction of available compensa' ...
  'tion to actually apply.'];
HysCmpRiseY.DocUnits = 'Uls';
HysCmpRiseY.EngDT = dt.u2p14;
HysCmpRiseY.EngVal =  ...
   [0            0.602            0.786            0.904            0.975                1];
HysCmpRiseY.EngMin = 0;
HysCmpRiseY.EngMax = 1;
HysCmpRiseY.Cardinality = 'Rt';
HysCmpRiseY.CustomerVisible = false;
HysCmpRiseY.Online = false;
HysCmpRiseY.Impact = 'H';
HysCmpRiseY.TuningOwner = 'CSE';
HysCmpRiseY.GraphLink = {'HysCmpRiseX'};
HysCmpRiseY.Monotony = 'None';
HysCmpRiseY.MaxGrad = 998;
HysCmpRiseY.PortName = 'HysCmpRiseY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmSysTqRat = DataDict.ImprtdCal;
SysGlbPrmSysTqRat.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysGlbPrmSysTqRat.EngDT = dt.float32;
SysGlbPrmSysTqRat.EngVal = 20;
SysGlbPrmSysTqRat.EngMin = 10;
SysGlbPrmSysTqRat.EngMax = 40;
SysGlbPrmSysTqRat.PortName = 'SysGlbPrmSysTqRat';
SysGlbPrmSysTqRat.Description = '';


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
dHysCmpAssiCmdFild = DataDict.Display;
dHysCmpAssiCmdFild.LongName = 'Assist Command Filtered';
dHysCmpAssiCmdFild.Description = [...
  'Motor torque command used in calculation of Available Hysteresis.  It ' ...
  'has been scaled into HwNm and then filtered.'];
dHysCmpAssiCmdFild.DocUnits = 'HwNwtMtr';
dHysCmpAssiCmdFild.EngDT = dt.float32;
dHysCmpAssiCmdFild.EngMin = -352;
dHysCmpAssiCmdFild.EngMax = 352;
dHysCmpAssiCmdFild.InitRowCol = [1  1];


dHysCmpAvl = DataDict.Display;
dHysCmpAvl.LongName = 'Compensation Available';
dHysCmpAvl.Description = [...
  'Total available hysteresis compensation.  Some fraction of this total ' ...
  'becomes the raw function output, prior to any final filtering, limitin' ...
  'g, etc.'];
dHysCmpAvl.DocUnits = 'HwNwtMtr';
dHysCmpAvl.EngDT = dt.float32;
dHysCmpAvl.EngMin = -10;
dHysCmpAvl.EngMax = 10;
dHysCmpAvl.InitRowCol = [1  1];


dHysCmpEffCmpTq = DataDict.Display;
dHysCmpEffCmpTq.LongName = 'Efficiency Compensation Torque';
dHysCmpEffCmpTq.Description = [...
  'Total available compensation accounts for friction losses and for effi' ...
  'ciency losses.  This display variable represents the efficiency loss p' ...
  'ortion.'];
dHysCmpEffCmpTq.DocUnits = 'HwNwtMtr';
dHysCmpEffCmpTq.EngDT = dt.float32;
dHysCmpEffCmpTq.EngMin = -362;
dHysCmpEffCmpTq.EngMax = 362;
dHysCmpEffCmpTq.InitRowCol = [1  1];


dHysCmpFric = DataDict.Display;
dHysCmpFric.LongName = 'Friction';
dHysCmpFric.Description = [...
  'Total available compensation accounts for friction losses and for effi' ...
  'ciency losses.  This display variable represents the Coulomb friction ' ...
  'portion.'];
dHysCmpFric.DocUnits = 'HwNwtMtr';
dHysCmpFric.EngDT = dt.float32;
dHysCmpFric.EngMin = -110;
dHysCmpFric.EngMax = 110;
dHysCmpFric.InitRowCol = [1  1];


dHysCmpHwTqFild = DataDict.Display;
dHysCmpHwTqFild.LongName = 'Handwheel Torque Filtered';
dHysCmpHwTqFild.Description = [...
  'Filtered handwheel torque (or a saturated value thereof).'];
dHysCmpHwTqFild.DocUnits = 'HwNwtMtr';
dHysCmpHwTqFild.EngDT = dt.float32;
dHysCmpHwTqFild.EngMin = -10;
dHysCmpHwTqFild.EngMax = 10;
dHysCmpHwTqFild.InitRowCol = [1  1];


dHysCmpNegAvl = DataDict.Display;
dHysCmpNegAvl.LongName = 'Negative Available';
dHysCmpNegAvl.Description = [...
  'Available hysteresis compensation is generally positivefriction + posi' ...
  'tive efficiency loss - negative compensation.  This display variable r' ...
  'epresents the desired available negative compensation.'];
dHysCmpNegAvl.DocUnits = 'HwNwtMtr';
dHysCmpNegAvl.EngDT = dt.float32;
dHysCmpNegAvl.EngMin = 0;
dHysCmpNegAvl.EngMax = 10;
dHysCmpNegAvl.InitRowCol = [1  1];


dHysCmpPosAvl = DataDict.Display;
dHysCmpPosAvl.LongName = 'Positive Available';
dHysCmpPosAvl.Description = [...
  'Available hysteresis compensation is generally positive friction + pos' ...
  'itive efficiency loss - negative compensation.  This display variable ' ...
  'represents the desired available positive compensation.'];
dHysCmpPosAvl.DocUnits = 'HwNwtMtr';
dHysCmpPosAvl.EngDT = dt.float32;
dHysCmpPosAvl.EngMin = 0;
dHysCmpPosAvl.EngMax = 10;
dHysCmpPosAvl.InitRowCol = [1  1];


dHysCmpRawVal = DataDict.Display;
dHysCmpRawVal.LongName = 'Raw Value';
dHysCmpRawVal.Description = [...
  'Display variable represents unfiltered and not limited Hysteresis Comp' ...
  'ensation '];
dHysCmpRawVal.DocUnits = 'HwNwtMtr';
dHysCmpRawVal.EngDT = dt.float32;
dHysCmpRawVal.EngMin = -20;
dHysCmpRawVal.EngMax = 20;
dHysCmpRawVal.InitRowCol = [1  1];


dHysCmpRiseYFac = DataDict.Display;
dHysCmpRiseYFac.LongName = 'Rise Y Factor';
dHysCmpRiseYFac.Description = [...
  'Display variable represents Rise Y Factor'];
dHysCmpRiseYFac.DocUnits = 'Uls';
dHysCmpRiseYFac.EngDT = dt.float32;
dHysCmpRiseYFac.EngMin = -1;
dHysCmpRiseYFac.EngMax = 1;
dHysCmpRiseYFac.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AssiCmdLpFil = DataDict.PIM;
AssiCmdLpFil.LongName = 'Assit Command Lowpass Filter';
AssiCmdLpFil.Description = 'Assist Command Base Lowpass Filter';
AssiCmdLpFil.DocUnits = 'MotNwtMtr';
AssiCmdLpFil.EngDT = struct.FilLpRec1;
AssiCmdLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
AssiCmdLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
AssiCmdLpFil.InitRowCol = [1  1];


FinalOutpLpFil = DataDict.PIM;
FinalOutpLpFil.LongName = 'Final Output Lowpass Filter';
FinalOutpLpFil.Description = 'Final Output Lowpass Filter';
FinalOutpLpFil.DocUnits = 'MotNwtMtr';
FinalOutpLpFil.EngDT = struct.FilLpRec1;
FinalOutpLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
FinalOutpLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
FinalOutpLpFil.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.Description = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.DocUnits = 'HwNwtMtr';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
HwTqLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
HwTqLpFil.InitRowCol = [1  1];


PrevAssiCmdFildVal = DataDict.PIM;
PrevAssiCmdFildVal.LongName = 'Previous Assist Command Filtered Value';
PrevAssiCmdFildVal.Description = [...
  'Previous Assist Command Filtered Value'];
PrevAssiCmdFildVal.DocUnits = 'HwNwtMtr';
PrevAssiCmdFildVal.EngDT = dt.float32;
PrevAssiCmdFildVal.EngMin = -352;
PrevAssiCmdFildVal.EngMax = 352;
PrevAssiCmdFildVal.InitRowCol = [1  1];


PrevHwTqFildVal = DataDict.PIM;
PrevHwTqFildVal.LongName = 'Previous Handwheel Torque Filtered Value';
PrevHwTqFildVal.Description = [...
  'Previous Handwheel Torque Filtered Value'];
PrevHwTqFildVal.DocUnits = 'HwNwtMtr';
PrevHwTqFildVal.EngDT = dt.float32;
PrevHwTqFildVal.EngMin = -10;
PrevHwTqFildVal.EngMax = 10;
PrevHwTqFildVal.InitRowCol = [1  1];


PrevRiseX = DataDict.PIM;
PrevRiseX.LongName = 'Previous Rise X';
PrevRiseX.Description = 'Previous Rise X';
PrevRiseX.DocUnits = 'HwNwtMtr';
PrevRiseX.EngDT = dt.float32;
PrevRiseX.EngMin = 0;
PrevRiseX.EngMax = 1;
PrevRiseX.InitRowCol = [1  1];


PrevRiseY = DataDict.PIM;
PrevRiseY.LongName = 'Previous Rise Y';
PrevRiseY.Description = 'Previous Rise Y';
PrevRiseY.DocUnits = 'Uls';
PrevRiseY.EngDT = dt.float32;
PrevRiseY.EngMin = 0;
PrevRiseY.EngMax = 1;
PrevRiseY.InitRowCol = [1  1];



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


EPSILON_ULS_F32 = DataDict.Constant;
EPSILON_ULS_F32.LongName = 'Epsilon';
EPSILON_ULS_F32.Description = 'Nearly Zero';
EPSILON_ULS_F32.DocUnits = 'Uls';
EPSILON_ULS_F32.EngDT = dt.float32;
EPSILON_ULS_F32.EngVal = 1.19209e-07;
EPSILON_ULS_F32.Define = 'Local';


FLTINJ_HYSCMP_HYSCMPCMD = DataDict.Constant;
FLTINJ_HYSCMP_HYSCMPCMD.LongName = 'Fault Injection Hysteresis Compensation Command Constant';
FLTINJ_HYSCMP_HYSCMPCMD.Description = [...
  'Fault Injection Hysteresis Compensation Command Constant'];
FLTINJ_HYSCMP_HYSCMPCMD.DocUnits = 'Uls';
FLTINJ_HYSCMP_HYSCMPCMD.EngDT = dt.u16;
FLTINJ_HYSCMP_HYSCMPCMD.EngVal = 12;
FLTINJ_HYSCMP_HYSCMPCMD.Define = 'Global';


HYSRISEYLIM_ULS_F32 = DataDict.Constant;
HYSRISEYLIM_ULS_F32.LongName = 'Hysteresis Rise Y Limit';
HYSRISEYLIM_ULS_F32.Description = [...
  'Magnitude of maximum allowable value for Fraction of Available Hystere' ...
  'sis.'];
HYSRISEYLIM_ULS_F32.DocUnits = 'Uls';
HYSRISEYLIM_ULS_F32.EngDT = dt.float32;
HYSRISEYLIM_ULS_F32.EngVal = 1;
HYSRISEYLIM_ULS_F32.Define = 'Local';


HYSSATNLOWLIM_HWNWTMTR_F32 = DataDict.Constant;
HYSSATNLOWLIM_HWNWTMTR_F32.LongName = 'Hysteresis Saturation Low Limit';
HYSSATNLOWLIM_HWNWTMTR_F32.Description = [...
  'Minimum allowable value of Coulomb friction.'];
HYSSATNLOWLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
HYSSATNLOWLIM_HWNWTMTR_F32.EngDT = dt.float32;
HYSSATNLOWLIM_HWNWTMTR_F32.EngVal = 0;
HYSSATNLOWLIM_HWNWTMTR_F32.Define = 'Local';


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
