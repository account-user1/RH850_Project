%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Jul-2015 10:11:18       %
%                                  Created with tool release: 2.15.0     %
%%-----------------------------------------------------------------------%

SF038A = DataDict.FDD;
SF038A.Version = '1.0.X';
SF038A.LongName = 'Limiter Conditioning';
SF038A.ShoName  = 'LimrCdng';
SF038A.DesignASIL = 'A';
SF038A.Description = [...
  'This function provides a layer of protection from erroneous signals fe' ...
  'eding into SF-04 Sum & Limit. It is applied primarily to limiting sign' ...
  'als that serve to reduce motor torque command under certain operating ' ...
  'conditions. This function can prevent step response or toggling behavi' ...
  'or that might cause undesirable vehicle feel. It includes capability o' ...
  'f fault injection at some inputs to facilitate tuning.'];
SF038A.Dependencies = ...
	{'SysGlbPrm', 'FltInj', 'ArchGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
LimrCdngPer1 = DataDict.Runnable;
LimrCdngPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'LimrCdngPer1'};
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EotAssiSca = DataDict.IpSignal;
EotAssiSca.LongName = 'Assist End of Travel Scale';
EotAssiSca.DocUnits = 'Uls';
EotAssiSca.EngDT = dt.float32;
EotAssiSca.EngInit = 1;
EotAssiSca.EngMin = 0;
EotAssiSca.EngMax = 1;
EotAssiSca.ReadIn = {'LimrCdngPer1'};
EotAssiSca.ReadType = 'Rte';


EotMotTqLim = DataDict.IpSignal;
EotMotTqLim.LongName = 'End of Travel Motor Torque Limit';
EotMotTqLim.DocUnits = 'MotNwtMtr';
EotMotTqLim.EngDT = dt.float32;
EotMotTqLim.EngInit = 8.8;
EotMotTqLim.EngMin = 0;
EotMotTqLim.EngMax = 8.8;
EotMotTqLim.ReadIn = {'LimrCdngPer1'};
EotMotTqLim.ReadType = 'Rte';


StallMotTqLim = DataDict.IpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.ReadIn = {'LimrCdngPer1'};
StallMotTqLim.ReadType = 'Rte';


SysMotTqCmdSca = DataDict.IpSignal;
SysMotTqCmdSca.LongName = 'System Motor Torque Command Scale';
SysMotTqCmdSca.DocUnits = 'Uls';
SysMotTqCmdSca.EngDT = dt.float32;
SysMotTqCmdSca.EngInit = 1;
SysMotTqCmdSca.EngMin = 0;
SysMotTqCmdSca.EngMax = 1;
SysMotTqCmdSca.ReadIn = {'LimrCdngPer1'};
SysMotTqCmdSca.ReadType = 'Rte';


ThermMotTqLim = DataDict.IpSignal;
ThermMotTqLim.LongName = 'Thermal Motor Torque Limit';
ThermMotTqLim.DocUnits = 'MotNwtMtr';
ThermMotTqLim.EngDT = dt.float32;
ThermMotTqLim.EngInit = 8.8;
ThermMotTqLim.EngMin = 0;
ThermMotTqLim.EngMax = 8.8;
ThermMotTqLim.ReadIn = {'LimrCdngPer1'};
ThermMotTqLim.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'LimrCdngPer1'};
VehSpd.ReadType = 'Rte';


VehSpdMotTqLim = DataDict.IpSignal;
VehSpdMotTqLim.LongName = 'Vehicle Speed Motor Torque Limit';
VehSpdMotTqLim.DocUnits = 'MotNwtMtr';
VehSpdMotTqLim.EngDT = dt.float32;
VehSpdMotTqLim.EngInit = 8.8;
VehSpdMotTqLim.EngMin = 0;
VehSpdMotTqLim.EngMax = 8.8;
VehSpdMotTqLim.ReadIn = {'LimrCdngPer1'};
VehSpdMotTqLim.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
EotAssiScaCdnd = DataDict.OpSignal;
EotAssiScaCdnd.LongName = 'Conditioned End of Travel Scale';
EotAssiScaCdnd.Description = [...
  'End of Travel Scale, after rate limiting for safety.'];
EotAssiScaCdnd.DocUnits = 'Uls';
EotAssiScaCdnd.SwcShoName = 'LimrCdng';
EotAssiScaCdnd.EngDT = dt.float32;
EotAssiScaCdnd.EngInit = 1;
EotAssiScaCdnd.EngMin = 0;
EotAssiScaCdnd.EngMax = 1;
EotAssiScaCdnd.TestTolerance = 3.05176e-05;
EotAssiScaCdnd.WrittenIn = {'LimrCdngPer1'};
EotAssiScaCdnd.WriteType = 'Rte';


EotMotTqLimCdnd = DataDict.OpSignal;
EotMotTqLimCdnd.LongName = 'Conditioned End of Travel Motor Torque Limit';
EotMotTqLimCdnd.Description = [...
  'End of Travel Limit, after rate limiting for safety.'];
EotMotTqLimCdnd.DocUnits = 'MotNwtMtr';
EotMotTqLimCdnd.SwcShoName = 'LimrCdng';
EotMotTqLimCdnd.EngDT = dt.float32;
EotMotTqLimCdnd.EngInit = 8.8;
EotMotTqLimCdnd.EngMin = 0;
EotMotTqLimCdnd.EngMax = 8.8;
EotMotTqLimCdnd.TestTolerance = 0.000488281;
EotMotTqLimCdnd.WrittenIn = {'LimrCdngPer1'};
EotMotTqLimCdnd.WriteType = 'Rte';


StallMotTqLimCdnd = DataDict.OpSignal;
StallMotTqLimCdnd.LongName = 'Conditioned Stall Motor Torque Limit';
StallMotTqLimCdnd.Description = [...
  'Stall Motor Torque Limit, after rate limiting for safety.'];
StallMotTqLimCdnd.DocUnits = 'MotNwtMtr';
StallMotTqLimCdnd.SwcShoName = 'LimrCdng';
StallMotTqLimCdnd.EngDT = dt.float32;
StallMotTqLimCdnd.EngInit = 8.8;
StallMotTqLimCdnd.EngMin = 0;
StallMotTqLimCdnd.EngMax = 8.8;
StallMotTqLimCdnd.TestTolerance = 0.000488281;
StallMotTqLimCdnd.WrittenIn = {'LimrCdngPer1'};
StallMotTqLimCdnd.WriteType = 'Rte';


SysMotTqCmdScaCdnd = DataDict.OpSignal;
SysMotTqCmdScaCdnd.LongName = 'Conditioned System Motor Torque Command Scale';
SysMotTqCmdScaCdnd.Description = [...
  'System Motor Torque Command Scale, after rate limiting for safety.'];
SysMotTqCmdScaCdnd.DocUnits = 'Uls';
SysMotTqCmdScaCdnd.SwcShoName = 'LimrCdng';
SysMotTqCmdScaCdnd.EngDT = dt.float32;
SysMotTqCmdScaCdnd.EngInit = 1;
SysMotTqCmdScaCdnd.EngMin = 0;
SysMotTqCmdScaCdnd.EngMax = 1;
SysMotTqCmdScaCdnd.TestTolerance = 0.00390625;
SysMotTqCmdScaCdnd.WrittenIn = {'LimrCdngPer1'};
SysMotTqCmdScaCdnd.WriteType = 'Rte';


ThermMotTqLimCdnd = DataDict.OpSignal;
ThermMotTqLimCdnd.LongName = 'Conditioned Thermal Motor Torque Limit';
ThermMotTqLimCdnd.Description = [...
  'Thermal Motor Torque Limit, after rate limiting for safety.'];
ThermMotTqLimCdnd.DocUnits = 'MotNwtMtr';
ThermMotTqLimCdnd.SwcShoName = 'LimrCdng';
ThermMotTqLimCdnd.EngDT = dt.float32;
ThermMotTqLimCdnd.EngInit = 8.8;
ThermMotTqLimCdnd.EngMin = 0;
ThermMotTqLimCdnd.EngMax = 8.8;
ThermMotTqLimCdnd.TestTolerance = 0.000488281;
ThermMotTqLimCdnd.WrittenIn = {'LimrCdngPer1'};
ThermMotTqLimCdnd.WriteType = 'Rte';


VehSpdMotTqLimCdnd = DataDict.OpSignal;
VehSpdMotTqLimCdnd.LongName = 'Conditioned Vehicle Speed Limit';
VehSpdMotTqLimCdnd.Description = [...
  'Vehicle Speed Motor Torque Limit, after rate limiting for safety.'];
VehSpdMotTqLimCdnd.DocUnits = 'MotNwtMtr';
VehSpdMotTqLimCdnd.SwcShoName = 'LimrCdng';
VehSpdMotTqLimCdnd.EngDT = dt.float32;
VehSpdMotTqLimCdnd.EngInit = 8.8;
VehSpdMotTqLimCdnd.EngMin = 0;
VehSpdMotTqLimCdnd.EngMax = 8.8;
VehSpdMotTqLimCdnd.TestTolerance = 0.000488281;
VehSpdMotTqLimCdnd.WrittenIn = {'LimrCdngPer1'};
VehSpdMotTqLimCdnd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
LimrCdngGainDecSlew = DataDict.Calibration;
LimrCdngGainDecSlew.LongName = 'Gain Decreasing Slew';
LimrCdngGainDecSlew.Description = [...
  'Slew rate of Gain signals, decreasing direction'];
LimrCdngGainDecSlew.DocUnits = 'UlsPerSec';
LimrCdngGainDecSlew.EngDT = dt.float32;
LimrCdngGainDecSlew.EngVal = 500;
LimrCdngGainDecSlew.EngMin = 0.5;
LimrCdngGainDecSlew.EngMax = 500;
LimrCdngGainDecSlew.ProgrammedBy = 'Nexteer';
LimrCdngGainDecSlew.Cardinality = 'I';
LimrCdngGainDecSlew.CustomerVisible = false;
LimrCdngGainDecSlew.Online = false;
LimrCdngGainDecSlew.Impact = 'H';
LimrCdngGainDecSlew.TuningOwner = 'CSE';
LimrCdngGainDecSlew.GraphLink = '';
LimrCdngGainDecSlew.Monotony = 'None';
LimrCdngGainDecSlew.MaxGrad = 998;
LimrCdngGainDecSlew.PortName = 'LimrCdngGainDecSlew';
LimrCdngGainDecSlew.CoderInfo.CustomAttributes.PortName = '';


LimrCdngGainIncSlewX = DataDict.Calibration;
LimrCdngGainIncSlewX.LongName = 'Gain Increasing Slew X';
LimrCdngGainIncSlewX.Description = [...
  'Vehicle speed table applied to the slew rate of Gain signals.'];
LimrCdngGainIncSlewX.DocUnits = 'Kph';
LimrCdngGainIncSlewX.EngDT = dt.u9p7;
LimrCdngGainIncSlewX.EngVal =  ...
   [10               20];
LimrCdngGainIncSlewX.EngMin = 0;
LimrCdngGainIncSlewX.EngMax = 511;
LimrCdngGainIncSlewX.ProgrammedBy = 'Nexteer';
LimrCdngGainIncSlewX.Cardinality = 'I';
LimrCdngGainIncSlewX.CustomerVisible = false;
LimrCdngGainIncSlewX.Online = false;
LimrCdngGainIncSlewX.Impact = 'H';
LimrCdngGainIncSlewX.TuningOwner = 'CSE';
LimrCdngGainIncSlewX.GraphLink = '';
LimrCdngGainIncSlewX.Monotony = 'Strictly_Increasing';
LimrCdngGainIncSlewX.MaxGrad = 998;
LimrCdngGainIncSlewX.PortName = 'LimrCdngGainIncSlewX';
LimrCdngGainIncSlewX.CoderInfo.CustomAttributes.PortName = '';


LimrCdngGainIncSlewY = DataDict.Calibration;
LimrCdngGainIncSlewY.LongName = 'Gain Increasing Slew Y';
LimrCdngGainIncSlewY.Description = [...
  'Slew rate of Gain signals, increasing direction'];
LimrCdngGainIncSlewY.DocUnits = 'UlsPerSec';
LimrCdngGainIncSlewY.EngDT = dt.u9p7;
LimrCdngGainIncSlewY.EngVal =  ...
   [500              500];
LimrCdngGainIncSlewY.EngMin = 0.5;
LimrCdngGainIncSlewY.EngMax = 500;
LimrCdngGainIncSlewY.ProgrammedBy = 'Nexteer';
LimrCdngGainIncSlewY.Cardinality = 'I';
LimrCdngGainIncSlewY.CustomerVisible = false;
LimrCdngGainIncSlewY.Online = false;
LimrCdngGainIncSlewY.Impact = 'H';
LimrCdngGainIncSlewY.TuningOwner = 'CSE';
LimrCdngGainIncSlewY.GraphLink = 'LimrCdngGainIncSlewX';
LimrCdngGainIncSlewY.Monotony = 'None';
LimrCdngGainIncSlewY.MaxGrad = 500;
LimrCdngGainIncSlewY.PortName = 'LimrCdngGainIncSlewY';
LimrCdngGainIncSlewY.CoderInfo.CustomAttributes.PortName = '';


LimrCdngTqDecSlew = DataDict.Calibration;
LimrCdngTqDecSlew.LongName = 'Torque Decrease Slew';
LimrCdngTqDecSlew.Description = [...
  'Slew rate of torque-limiting signals, decreasing direction.  4400 = 8.' ...
  '8/.002'];
LimrCdngTqDecSlew.DocUnits = 'MotNwtMtrPerSec';
LimrCdngTqDecSlew.EngDT = dt.float32;
LimrCdngTqDecSlew.EngVal = 4400;
LimrCdngTqDecSlew.EngMin = 1;
LimrCdngTqDecSlew.EngMax = 4400;
LimrCdngTqDecSlew.ProgrammedBy = 'Nexteer';
LimrCdngTqDecSlew.Cardinality = 'I';
LimrCdngTqDecSlew.CustomerVisible = false;
LimrCdngTqDecSlew.Online = false;
LimrCdngTqDecSlew.Impact = 'H';
LimrCdngTqDecSlew.TuningOwner = 'CSE';
LimrCdngTqDecSlew.GraphLink = '';
LimrCdngTqDecSlew.Monotony = 'None';
LimrCdngTqDecSlew.MaxGrad = 998;
LimrCdngTqDecSlew.PortName = 'LimrCdngTqDecSlew';
LimrCdngTqDecSlew.CoderInfo.CustomAttributes.PortName = '';


LimrCdngTqIncSlewX = DataDict.Calibration;
LimrCdngTqIncSlewX.LongName = 'Torque Increasing Slew X';
LimrCdngTqIncSlewX.Description = [...
  'Vehicle speed table applied to the slew rate of torque-limiting signal' ...
  's.'];
LimrCdngTqIncSlewX.DocUnits = 'Kph';
LimrCdngTqIncSlewX.EngDT = dt.u9p7;
LimrCdngTqIncSlewX.EngVal =  ...
   [10               20];
LimrCdngTqIncSlewX.EngMin = 0;
LimrCdngTqIncSlewX.EngMax = 511;
LimrCdngTqIncSlewX.ProgrammedBy = 'Nexteer';
LimrCdngTqIncSlewX.Cardinality = 'I';
LimrCdngTqIncSlewX.CustomerVisible = false;
LimrCdngTqIncSlewX.Online = false;
LimrCdngTqIncSlewX.Impact = 'H';
LimrCdngTqIncSlewX.TuningOwner = 'CSE';
LimrCdngTqIncSlewX.GraphLink = '';
LimrCdngTqIncSlewX.Monotony = 'Strictly_Increasing';
LimrCdngTqIncSlewX.MaxGrad = 511;
LimrCdngTqIncSlewX.PortName = 'LimrCdngTqIncSlewX';
LimrCdngTqIncSlewX.CoderInfo.CustomAttributes.PortName = '';


LimrCdngTqIncSlewY = DataDict.Calibration;
LimrCdngTqIncSlewY.LongName = 'Torque Increase Slew Y';
LimrCdngTqIncSlewY.Description = [...
  'Slew rate of torque-limiting signals, increasing direction.  4400 = 8.' ...
  '8/.002'];
LimrCdngTqIncSlewY.DocUnits = 'MotNwtMtrPerSec';
LimrCdngTqIncSlewY.EngDT = dt.u13p3;
LimrCdngTqIncSlewY.EngVal =  ...
   [4400             4400];
LimrCdngTqIncSlewY.EngMin = 1;
LimrCdngTqIncSlewY.EngMax = 4400;
LimrCdngTqIncSlewY.ProgrammedBy = 'Nexteer';
LimrCdngTqIncSlewY.Cardinality = 'I';
LimrCdngTqIncSlewY.CustomerVisible = false;
LimrCdngTqIncSlewY.Online = false;
LimrCdngTqIncSlewY.Impact = 'H';
LimrCdngTqIncSlewY.TuningOwner = 'CSE';
LimrCdngTqIncSlewY.GraphLink = 'LimrCdngTqIncSlewX';
LimrCdngTqIncSlewY.Monotony = 'None';
LimrCdngTqIncSlewY.MaxGrad = 4400;
LimrCdngTqIncSlewY.PortName = 'LimrCdngTqIncSlewY';
LimrCdngTqIncSlewY.CoderInfo.CustomAttributes.PortName = '';



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
PrevEotAssiScaCdnd = DataDict.PIM;
PrevEotAssiScaCdnd.LongName = 'Previous Conditioned End of Travel Assist Scale';
PrevEotAssiScaCdnd.Description = [...
  'It stores previous Conditioned End of Travel Assist Scale and is used ' ...
  'in the dynamic rate limiter.'];
PrevEotAssiScaCdnd.DocUnits = 'Uls';
PrevEotAssiScaCdnd.EngDT = dt.float32;
PrevEotAssiScaCdnd.EngMin = 0;
PrevEotAssiScaCdnd.EngMax = 1;
PrevEotAssiScaCdnd.InitRowCol = [1  1];


PrevEotMotTqLimCdnd = DataDict.PIM;
PrevEotMotTqLimCdnd.LongName = 'Previous Conditioned End of Travel Motor Torque Limit';
PrevEotMotTqLimCdnd.Description = [...
  'It stores previous Conditioned End of Travel Motor Torque Limit and is' ...
  ' used in the dynamic rate limiter.'];
PrevEotMotTqLimCdnd.DocUnits = 'MotNwtMtr';
PrevEotMotTqLimCdnd.EngDT = dt.float32;
PrevEotMotTqLimCdnd.EngMin = 0;
PrevEotMotTqLimCdnd.EngMax = 8.8;
PrevEotMotTqLimCdnd.InitRowCol = [1  1];


PrevStallMotTqLimCdnd = DataDict.PIM;
PrevStallMotTqLimCdnd.LongName = 'Previous Conditioned Stall Motor Torque Limit';
PrevStallMotTqLimCdnd.Description = [...
  'It stores previous Conditioned Stall Motor Torque Limit and is used in' ...
  ' the dynamic rate limiter.'];
PrevStallMotTqLimCdnd.DocUnits = 'MotNwtMtr';
PrevStallMotTqLimCdnd.EngDT = dt.float32;
PrevStallMotTqLimCdnd.EngMin = 0;
PrevStallMotTqLimCdnd.EngMax = 8.8;
PrevStallMotTqLimCdnd.InitRowCol = [1  1];


PrevSysMotTqCmdScaCdnd = DataDict.PIM;
PrevSysMotTqCmdScaCdnd.LongName = 'Previous Conditioned System Motor Torque Command Scale';
PrevSysMotTqCmdScaCdnd.Description = [...
  'It stores previous Conditioned System Motor Torque Command Scale and i' ...
  's used in the dynamic rate limiter.'];
PrevSysMotTqCmdScaCdnd.DocUnits = 'Uls';
PrevSysMotTqCmdScaCdnd.EngDT = dt.float32;
PrevSysMotTqCmdScaCdnd.EngMin = 0;
PrevSysMotTqCmdScaCdnd.EngMax = 1;
PrevSysMotTqCmdScaCdnd.InitRowCol = [1  1];


PrevThermMotTqLimCdnd = DataDict.PIM;
PrevThermMotTqLimCdnd.LongName = 'Previous Conditioned Thermal Motor Torque Limit';
PrevThermMotTqLimCdnd.Description = [...
  'It stores previous Conditioned Thermal Motor Torque Limit and is used ' ...
  'in the dynamic rate limiter.'];
PrevThermMotTqLimCdnd.DocUnits = 'MotNwtMtr';
PrevThermMotTqLimCdnd.EngDT = dt.float32;
PrevThermMotTqLimCdnd.EngMin = 0;
PrevThermMotTqLimCdnd.EngMax = 8.8;
PrevThermMotTqLimCdnd.InitRowCol = [1  1];


PrevVehSpdMotTqLimCdnd = DataDict.PIM;
PrevVehSpdMotTqLimCdnd.LongName = 'Previous Conditioned Vehicle Speed Motor Torque Limit';
PrevVehSpdMotTqLimCdnd.Description = [...
  'It stores previous Conditioned Vehicle Speed Motor Torque Limit and is' ...
  ' used in the dynamic rate limiter.'];
PrevVehSpdMotTqLimCdnd.DocUnits = 'MotNwtMtr';
PrevVehSpdMotTqLimCdnd.EngDT = dt.float32;
PrevVehSpdMotTqLimCdnd.EngMin = 0;
PrevVehSpdMotTqLimCdnd.EngMax = 8.8;
PrevVehSpdMotTqLimCdnd.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


FLTINJ_LIMRCDNG_EOTGAIN = DataDict.Constant;
FLTINJ_LIMRCDNG_EOTGAIN.LongName = 'Fault Injection Limiter Conditioning End of Travel Gain';
FLTINJ_LIMRCDNG_EOTGAIN.Description = [...
  'Fault Injection Limiter Conditioning End of Travel Gain'];
FLTINJ_LIMRCDNG_EOTGAIN.DocUnits = 'Uls';
FLTINJ_LIMRCDNG_EOTGAIN.EngDT = dt.u16;
FLTINJ_LIMRCDNG_EOTGAIN.EngVal = 20;
FLTINJ_LIMRCDNG_EOTGAIN.Header = 'FltInj.h';
FLTINJ_LIMRCDNG_EOTGAIN.Define = 'Global';


FLTINJ_LIMRCDNG_EOTLIM = DataDict.Constant;
FLTINJ_LIMRCDNG_EOTLIM.LongName = 'Fault Injection Limiter Conditioning End of Travel Limit';
FLTINJ_LIMRCDNG_EOTLIM.Description = [...
  'Fault Injection Limiter Conditioning End of Travel Limit Constant'];
FLTINJ_LIMRCDNG_EOTLIM.DocUnits = 'Uls';
FLTINJ_LIMRCDNG_EOTLIM.EngDT = dt.u16;
FLTINJ_LIMRCDNG_EOTLIM.EngVal = 21;
FLTINJ_LIMRCDNG_EOTLIM.Header = 'FltInj.h';
FLTINJ_LIMRCDNG_EOTLIM.Define = 'Global';


FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA = DataDict.Constant;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.LongName = 'Fault Injection Limiter Conditioning System Motor Torque Command Scale';
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.Description = [...
  'Fault Injection Limiter Conditioning System Motor Torque Command Scale' ...
  ' Constant'];
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.DocUnits = 'Uls';
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.EngDT = dt.u16;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.EngVal = 19;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.Header = 'FltInj.h';
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.Define = 'Global';


GAINHILIM_ULS_F32 = DataDict.Constant;
GAINHILIM_ULS_F32.LongName = 'Gain High Limit';
GAINHILIM_ULS_F32.Description = [...
  'Upper limit for unitless scale factors'];
GAINHILIM_ULS_F32.DocUnits = 'Uls';
GAINHILIM_ULS_F32.EngDT = dt.float32;
GAINHILIM_ULS_F32.EngVal = 1;
GAINHILIM_ULS_F32.Header = '';
GAINHILIM_ULS_F32.Define = 'Local';


GAINLOLIM_ULS_F32 = DataDict.Constant;
GAINLOLIM_ULS_F32.LongName = 'Gain Low Limit';
GAINLOLIM_ULS_F32.Description = [...
  'Lower limit for unitless scale factors'];
GAINLOLIM_ULS_F32.DocUnits = 'Uls';
GAINLOLIM_ULS_F32.EngDT = dt.float32;
GAINLOLIM_ULS_F32.EngVal = 0;
GAINLOLIM_ULS_F32.Header = '';
GAINLOLIM_ULS_F32.Define = 'Local';


MOTTQLOLIMCDNG_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQLOLIMCDNG_MOTNWTMTR_F32.LongName = 'Motor Torque Low Limit Conditioned';
MOTTQLOLIMCDNG_MOTNWTMTR_F32.Description = [...
  'Lower limit for motor torque limiting signals'];
MOTTQLOLIMCDNG_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQLOLIMCDNG_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQLOLIMCDNG_MOTNWTMTR_F32.EngVal = 0;
MOTTQLOLIMCDNG_MOTNWTMTR_F32.Header = '';
MOTTQLOLIMCDNG_MOTNWTMTR_F32.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary