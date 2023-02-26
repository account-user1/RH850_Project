%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Jun-2016 18:08:59       %
%                                  Created with tool release: 2.39.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

NM100A = DataDict.FDD;
NM100A.Version = '1.4.X';
NM100A.LongName = 'Motor Velocity Control';
NM100A.ShoName  = 'MotVelCtrl';
NM100A.DesignASIL = 'QM';
NM100A.Description = [...
  'This function provides the capability to spin EPS motor at a specified' ...
  ' velocity.This is achieved by applying motor toque based on the differ' ...
  'ence between target motor velocity and measured motor velocity.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotVelCtrlInit1 = DataDict.Runnable;
MotVelCtrlInit1.Context = 'Rte';
MotVelCtrlInit1.TimeStep = 0;
MotVelCtrlInit1.Description = [...
  'Motor Velocity Control Initialization Runnable'];

MotVelCtrlPer1 = DataDict.Runnable;
MotVelCtrlPer1.Context = 'Rte';
MotVelCtrlPer1.TimeStep = 0.002;
MotVelCtrlPer1.Description = [...
  'Motor Velocity Control Periodic Runnable'];

GetCtrlPrm = DataDict.SrvRunnable;
GetCtrlPrm.Context = 'Rte';
GetCtrlPrm.Description = 'Get Control Server Runnable';
GetCtrlPrm.Return = DataDict.CSReturn;
GetCtrlPrm.Return.Type = 'None';
GetCtrlPrm.Return.Min = [];
GetCtrlPrm.Return.Max = [];
GetCtrlPrm.Return.TestTolerance = [];
GetCtrlPrm.Arguments(1) = DataDict.CSArguments;
GetCtrlPrm.Arguments(1).Name = 'MotVelCtrlPropGain';
GetCtrlPrm.Arguments(1).EngDT = dt.float32;
GetCtrlPrm.Arguments(1).EngMin = 0;
GetCtrlPrm.Arguments(1).EngMax = 10;
GetCtrlPrm.Arguments(1).Units = 'MotNwtMtrPerMotRadPerSec';
GetCtrlPrm.Arguments(1).Direction = 'Out';
GetCtrlPrm.Arguments(1).InitRowCol = [1  1];
GetCtrlPrm.Arguments(1).Description = '';
GetCtrlPrm.Arguments(2) = DataDict.CSArguments;
GetCtrlPrm.Arguments(2).Name = 'MotVelCtrlIntgtrGain';
GetCtrlPrm.Arguments(2).EngDT = dt.float32;
GetCtrlPrm.Arguments(2).EngMin = 0;
GetCtrlPrm.Arguments(2).EngMax = 10;
GetCtrlPrm.Arguments(2).Units = 'MotNwtMtrPerMotRad';
GetCtrlPrm.Arguments(2).Direction = 'Out';
GetCtrlPrm.Arguments(2).InitRowCol = [1  1];
GetCtrlPrm.Arguments(2).Description = '';
GetCtrlPrm.Arguments(3) = DataDict.CSArguments;
GetCtrlPrm.Arguments(3).Name = 'MotVelCtrlDerivtvGain';
GetCtrlPrm.Arguments(3).EngDT = dt.float32;
GetCtrlPrm.Arguments(3).EngMin = 0;
GetCtrlPrm.Arguments(3).EngMax = 10;
GetCtrlPrm.Arguments(3).Units = 'MotNwtMtrPerMotRadPerSecPerSec';
GetCtrlPrm.Arguments(3).Direction = 'Out';
GetCtrlPrm.Arguments(3).InitRowCol = [1  1];
GetCtrlPrm.Arguments(3).Description = '';
GetCtrlPrm.Arguments(4) = DataDict.CSArguments;
GetCtrlPrm.Arguments(4).Name = 'MotVelCtrlAntiWdupLim';
GetCtrlPrm.Arguments(4).EngDT = dt.float32;
GetCtrlPrm.Arguments(4).EngMin = 0;
GetCtrlPrm.Arguments(4).EngMax = 8.8;
GetCtrlPrm.Arguments(4).Units = 'MotNwtMtr';
GetCtrlPrm.Arguments(4).Direction = 'Out';
GetCtrlPrm.Arguments(4).InitRowCol = [1  1];
GetCtrlPrm.Arguments(4).Description = '';
GetCtrlPrm.Arguments(5) = DataDict.CSArguments;
GetCtrlPrm.Arguments(5).Name = 'MotVelCtrlAntiWdupGain';
GetCtrlPrm.Arguments(5).EngDT = dt.float32;
GetCtrlPrm.Arguments(5).EngMin = 0;
GetCtrlPrm.Arguments(5).EngMax = 5;
GetCtrlPrm.Arguments(5).Units = 'Uls';
GetCtrlPrm.Arguments(5).Direction = 'Out';
GetCtrlPrm.Arguments(5).InitRowCol = [1  1];
GetCtrlPrm.Arguments(5).Description = '';
GetCtrlPrm.Arguments(6) = DataDict.CSArguments;
GetCtrlPrm.Arguments(6).Name = 'MotVelCtrlDerivtvLpFilTiCon';
GetCtrlPrm.Arguments(6).EngDT = dt.float32;
GetCtrlPrm.Arguments(6).EngMin = 0.00063662;
GetCtrlPrm.Arguments(6).EngMax = 0.1592;
GetCtrlPrm.Arguments(6).Units = 'Sec';
GetCtrlPrm.Arguments(6).Direction = 'Out';
GetCtrlPrm.Arguments(6).InitRowCol = [1  1];
GetCtrlPrm.Arguments(6).Description = '';
GetCtrlPrm.Arguments(7) = DataDict.CSArguments;
GetCtrlPrm.Arguments(7).Name = 'MotVelCtrlTqCmdLim';
GetCtrlPrm.Arguments(7).EngDT = dt.float32;
GetCtrlPrm.Arguments(7).EngMin = 0;
GetCtrlPrm.Arguments(7).EngMax = 8.8;
GetCtrlPrm.Arguments(7).Units = 'MotNwtMtr';
GetCtrlPrm.Arguments(7).Direction = 'Out';
GetCtrlPrm.Arguments(7).InitRowCol = [1  1];
GetCtrlPrm.Arguments(7).Description = '';

SetCtrlPrm = DataDict.SrvRunnable;
SetCtrlPrm.Context = 'Rte';
SetCtrlPrm.Description = 'Set Control Server Runnable';
SetCtrlPrm.Return = DataDict.CSReturn;
SetCtrlPrm.Return.Type = 'None';
SetCtrlPrm.Return.Min = [];
SetCtrlPrm.Return.Max = [];
SetCtrlPrm.Return.TestTolerance = [];
SetCtrlPrm.Arguments(1) = DataDict.CSArguments;
SetCtrlPrm.Arguments(1).Name = 'MotVelCtrlPropGain';
SetCtrlPrm.Arguments(1).EngDT = dt.float32;
SetCtrlPrm.Arguments(1).EngMin = 0;
SetCtrlPrm.Arguments(1).EngMax = 10;
SetCtrlPrm.Arguments(1).Units = 'MotNwtMtrPerMotRadPerSec';
SetCtrlPrm.Arguments(1).Direction = 'In';
SetCtrlPrm.Arguments(1).InitRowCol = [1  1];
SetCtrlPrm.Arguments(1).Description = '';
SetCtrlPrm.Arguments(2) = DataDict.CSArguments;
SetCtrlPrm.Arguments(2).Name = 'MotVelCtrlIntgtrGain';
SetCtrlPrm.Arguments(2).EngDT = dt.float32;
SetCtrlPrm.Arguments(2).EngMin = 0;
SetCtrlPrm.Arguments(2).EngMax = 10;
SetCtrlPrm.Arguments(2).Units = 'MotNwtMtrPerMotRad';
SetCtrlPrm.Arguments(2).Direction = 'In';
SetCtrlPrm.Arguments(2).InitRowCol = [1  1];
SetCtrlPrm.Arguments(2).Description = '';
SetCtrlPrm.Arguments(3) = DataDict.CSArguments;
SetCtrlPrm.Arguments(3).Name = 'MotVelCtrlDerivtvGain';
SetCtrlPrm.Arguments(3).EngDT = dt.float32;
SetCtrlPrm.Arguments(3).EngMin = 0;
SetCtrlPrm.Arguments(3).EngMax = 10;
SetCtrlPrm.Arguments(3).Units = 'MotNwtMtrPerMotRadPerSecPerSec';
SetCtrlPrm.Arguments(3).Direction = 'In';
SetCtrlPrm.Arguments(3).InitRowCol = [1  1];
SetCtrlPrm.Arguments(3).Description = '';
SetCtrlPrm.Arguments(4) = DataDict.CSArguments;
SetCtrlPrm.Arguments(4).Name = 'MotVelCtrlAntiWdupLim';
SetCtrlPrm.Arguments(4).EngDT = dt.float32;
SetCtrlPrm.Arguments(4).EngMin = 0;
SetCtrlPrm.Arguments(4).EngMax = 8.8;
SetCtrlPrm.Arguments(4).Units = 'MotNwtMtr';
SetCtrlPrm.Arguments(4).Direction = 'In';
SetCtrlPrm.Arguments(4).InitRowCol = [1  1];
SetCtrlPrm.Arguments(4).Description = '';
SetCtrlPrm.Arguments(5) = DataDict.CSArguments;
SetCtrlPrm.Arguments(5).Name = 'MotVelCtrlAntiWdupGain';
SetCtrlPrm.Arguments(5).EngDT = dt.float32;
SetCtrlPrm.Arguments(5).EngMin = 0;
SetCtrlPrm.Arguments(5).EngMax = 5;
SetCtrlPrm.Arguments(5).Units = 'Uls';
SetCtrlPrm.Arguments(5).Direction = 'In';
SetCtrlPrm.Arguments(5).InitRowCol = [1  1];
SetCtrlPrm.Arguments(5).Description = '';
SetCtrlPrm.Arguments(6) = DataDict.CSArguments;
SetCtrlPrm.Arguments(6).Name = 'MotVelCtrlDerivtvLpFilTiCon';
SetCtrlPrm.Arguments(6).EngDT = dt.float32;
SetCtrlPrm.Arguments(6).EngMin = 0.00063662;
SetCtrlPrm.Arguments(6).EngMax = 0.1592;
SetCtrlPrm.Arguments(6).Units = 'Sec';
SetCtrlPrm.Arguments(6).Direction = 'In';
SetCtrlPrm.Arguments(6).InitRowCol = [1  1];
SetCtrlPrm.Arguments(6).Description = '';
SetCtrlPrm.Arguments(7) = DataDict.CSArguments;
SetCtrlPrm.Arguments(7).Name = 'MotVelCtrlTqCmdLim';
SetCtrlPrm.Arguments(7).EngDT = dt.float32;
SetCtrlPrm.Arguments(7).EngMin = 0;
SetCtrlPrm.Arguments(7).EngMax = 8.8;
SetCtrlPrm.Arguments(7).Units = 'MotNwtMtr';
SetCtrlPrm.Arguments(7).Direction = 'In';
SetCtrlPrm.Arguments(7).InitRowCol = [1  1];
SetCtrlPrm.Arguments(7).Description = '';

StopCtrl = DataDict.SrvRunnable;
StopCtrl.Context = 'Rte';
StopCtrl.Description = 'Stop Control Server Runnable';
StopCtrl.Return = DataDict.CSReturn;
StopCtrl.Return.Type = 'None';
StopCtrl.Return.Min = [];
StopCtrl.Return.Max = [];
StopCtrl.Return.TestTolerance = [];
StopCtrl.Arguments(1) = DataDict.CSArguments;
StopCtrl.Arguments(1).Name = 'MotVelCtrlVelSlewRate';
StopCtrl.Arguments(1).EngDT = dt.float32;
StopCtrl.Arguments(1).EngMin = 0;
StopCtrl.Arguments(1).EngMax = 183500;
StopCtrl.Arguments(1).Units = 'MotRadPerSecPerSec';
StopCtrl.Arguments(1).Direction = 'In';
StopCtrl.Arguments(1).InitRowCol = [1  1];
StopCtrl.Arguments(1).Description = '';

StrtCtrl = DataDict.SrvRunnable;
StrtCtrl.Context = 'Rte';
StrtCtrl.Description = 'Start Control Server Runnable';
StrtCtrl.Return = DataDict.CSReturn;
StrtCtrl.Return.Type = 'None';
StrtCtrl.Return.Min = [];
StrtCtrl.Return.Max = [];
StrtCtrl.Return.TestTolerance = [];
StrtCtrl.Arguments(1) = DataDict.CSArguments;
StrtCtrl.Arguments(1).Name = 'MotVelCtrlMotVelTar';
StrtCtrl.Arguments(1).EngDT = dt.float32;
StrtCtrl.Arguments(1).EngMin = -367;
StrtCtrl.Arguments(1).EngMax = 367;
StrtCtrl.Arguments(1).Units = 'MotRadPerSec';
StrtCtrl.Arguments(1).Direction = 'In';
StrtCtrl.Arguments(1).InitRowCol = [1  1];
StrtCtrl.Arguments(1).Description = '';
StrtCtrl.Arguments(2) = DataDict.CSArguments;
StrtCtrl.Arguments(2).Name = 'MotVelCtrlVelSlewRate';
StrtCtrl.Arguments(2).EngDT = dt.float32;
StrtCtrl.Arguments(2).EngMin = 0;
StrtCtrl.Arguments(2).EngMax = 183500;
StrtCtrl.Arguments(2).Units = 'MotRadPerSecPerSec';
StrtCtrl.Arguments(2).Direction = 'In';
StrtCtrl.Arguments(2).InitRowCol = [1  1];
StrtCtrl.Arguments(2).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'MotVelCtrlPer1'};
GetRefTmr100MicroSec32bit.Description = 'Client';
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 100000;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = '';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'MotVelCtrlPer1'};
GetTiSpan100MicroSec32bit.Description = 'Client';
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 100000;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 100000;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = '';


SetManTqCmd = DataDict.Client;
SetManTqCmd.CallLocation = {'MotVelCtrlPer1'};
SetManTqCmd.Description = 'Client';
SetManTqCmd.Return = DataDict.CSReturn;
SetManTqCmd.Return.Type = 'Standard';
SetManTqCmd.Return.Min = 0;
SetManTqCmd.Return.Max = 1;
SetManTqCmd.Return.TestTolerance = [];
SetManTqCmd.Return.Description = '';
SetManTqCmd.Arguments(1) = DataDict.CSArguments;
SetManTqCmd.Arguments(1).Name = 'ManTqCmd';
SetManTqCmd.Arguments(1).EngDT = dt.float32;
SetManTqCmd.Arguments(1).EngMin = -8.8;
SetManTqCmd.Arguments(1).EngMax = 8.8;
SetManTqCmd.Arguments(1).Units = 'MotNwtMtr';
SetManTqCmd.Arguments(1).Direction = 'Out';
SetManTqCmd.Arguments(1).InitRowCol = [1  1];
SetManTqCmd.Arguments(1).Description = '';
SetManTqCmd.Arguments(2) = DataDict.CSArguments;
SetManTqCmd.Arguments(2).Name = 'ManTqCmdEna';
SetManTqCmd.Arguments(2).EngDT = dt.lgc;
SetManTqCmd.Arguments(2).EngMin = 0;
SetManTqCmd.Arguments(2).EngMax = 1;
SetManTqCmd.Arguments(2).Units = 'Cnt';
SetManTqCmd.Arguments(2).Direction = 'Out';
SetManTqCmd.Arguments(2).InitRowCol = [1  1];
SetManTqCmd.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Column Reference Frame';
MotVelCrf.Description = [...
  'Motor Velocity in Column Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'MotVelCtrlPer1'};
MotVelCrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
AntiWdupGain = DataDict.IRV;
AntiWdupGain.LongName = 'Anti Windup Gain';
AntiWdupGain.Description = [...
  'The gain used on saturated and unsaturated integral command difference' ...
  ' in anti-windupschemes to prevent integration wind-up in PID controlle' ...
  'r when the actuators are saturated'];
AntiWdupGain.DocUnits = 'Uls';
AntiWdupGain.EngDT = dt.float32;
AntiWdupGain.EngInit = 1;
AntiWdupGain.EngMin = 0;
AntiWdupGain.EngMax = 5;
AntiWdupGain.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
AntiWdupGain.WrittenIn = {'SetCtrlPrm'};


AntiWdupLim = DataDict.IRV;
AntiWdupLim.LongName = 'Anti Windup Limit';
AntiWdupLim.Description = [...
  'Limit integral command in anti-windup schemes '];
AntiWdupLim.DocUnits = 'MotNwtMtr';
AntiWdupLim.EngDT = dt.float32;
AntiWdupLim.EngInit = 5;
AntiWdupLim.EngMin = 0;
AntiWdupLim.EngMax = 8.8;
AntiWdupLim.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
AntiWdupLim.WrittenIn = {'SetCtrlPrm'};


DerivtvGain = DataDict.IRV;
DerivtvGain.LongName = 'Derivative Gain';
DerivtvGain.Description = 'Derivative Gain in PID controller';
DerivtvGain.DocUnits = 'MotNwtMtrPerMotRadPerSecPerSec';
DerivtvGain.EngDT = dt.float32;
DerivtvGain.EngInit = 0.004;
DerivtvGain.EngMin = 0;
DerivtvGain.EngMax = 10;
DerivtvGain.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
DerivtvGain.WrittenIn = {'SetCtrlPrm'};


DerivtvLpFilTiCon = DataDict.IRV;
DerivtvLpFilTiCon.LongName = 'Derivative Lowpass Filter Time Constant';
DerivtvLpFilTiCon.Description = [...
  'Derivative Lowpass Filter Time Constant used to calculate derivative c' ...
  'ommand'];
DerivtvLpFilTiCon.DocUnits = 'Sec';
DerivtvLpFilTiCon.EngDT = dt.float32;
DerivtvLpFilTiCon.EngInit = 0.008;
DerivtvLpFilTiCon.EngMin = 0.00063662;
DerivtvLpFilTiCon.EngMax = 0.1592;
DerivtvLpFilTiCon.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
DerivtvLpFilTiCon.WrittenIn = {'SetCtrlPrm'};


IntgtrGain = DataDict.IRV;
IntgtrGain.LongName = 'Integrator Gain';
IntgtrGain.Description = 'Integrator Gain in PID controller';
IntgtrGain.DocUnits = 'MotNwtMtrPerMotRad';
IntgtrGain.EngDT = dt.float32;
IntgtrGain.EngInit = 0.15;
IntgtrGain.EngMin = 0;
IntgtrGain.EngMax = 10;
IntgtrGain.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
IntgtrGain.WrittenIn = {'SetCtrlPrm'};


PropGain = DataDict.IRV;
PropGain.LongName = 'Proportional Gain';
PropGain.Description = [...
  'Proportional Gain in PID controller'];
PropGain.DocUnits = 'MotNwtMtrPerMotRadPerSec';
PropGain.EngDT = dt.float32;
PropGain.EngInit = 0.2;
PropGain.EngMin = 0;
PropGain.EngMax = 10;
PropGain.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
PropGain.WrittenIn = {'SetCtrlPrm'};


TqCmdLim = DataDict.IRV;
TqCmdLim.LongName = 'Torque Command Limit';
TqCmdLim.Description = 'Limit PID command output';
TqCmdLim.DocUnits = 'MotNwtMtr';
TqCmdLim.EngDT = dt.float32;
TqCmdLim.EngInit = 8.8;
TqCmdLim.EngMin = 0;
TqCmdLim.EngMax = 8.8;
TqCmdLim.ReadIn = {'GetCtrlPrm','MotVelCtrlPer1'};
TqCmdLim.WrittenIn = {'SetCtrlPrm'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

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
EnaCtrl = DataDict.PIM;
EnaCtrl.LongName = 'Enable Control';
EnaCtrl.Description = 'To enable the function';
EnaCtrl.DocUnits = 'Cnt';
EnaCtrl.EngDT = dt.lgc;
EnaCtrl.EngMin = 0;
EnaCtrl.EngMax = 1;
EnaCtrl.InitRowCol = [1  1];


EnaCtrlStVari = DataDict.PIM;
EnaCtrlStVari.LongName = 'Enable Control State Variable';
EnaCtrlStVari.Description = [...
  'Record the status of enable control in the last loop'];
EnaCtrlStVari.DocUnits = 'Cnt';
EnaCtrlStVari.EngDT = dt.lgc;
EnaCtrlStVari.EngMin = 0;
EnaCtrlStVari.EngMax = 1;
EnaCtrlStVari.InitRowCol = [1  1];


FctActvSts = DataDict.PIM;
FctActvSts.LongName = 'Function Active Status';
FctActvSts.Description = [...
  'Determine if the function is active once ramp down is completed'];
FctActvSts.DocUnits = 'Cnt';
FctActvSts.EngDT = dt.lgc;
FctActvSts.EngMin = 0;
FctActvSts.EngMax = 1;
FctActvSts.InitRowCol = [1  1];


MotVelTar = DataDict.PIM;
MotVelTar.LongName = 'Motor Velocity Target';
MotVelTar.Description = 'Target motor velocity';
MotVelTar.DocUnits = 'MotRadPerSec';
MotVelTar.EngDT = dt.float32;
MotVelTar.EngMin = -367;
MotVelTar.EngMax = 367;
MotVelTar.InitRowCol = [1  1];


PrevAntiWdupCmd = DataDict.PIM;
PrevAntiWdupCmd.LongName = 'Previous Anti Windup Command';
PrevAntiWdupCmd.Description = [...
  'Anti windup command from previous loop'];
PrevAntiWdupCmd.DocUnits = 'MotNwtMtr';
PrevAntiWdupCmd.EngDT = dt.float32;
PrevAntiWdupCmd.EngMin = -260;
PrevAntiWdupCmd.EngMax = 260;
PrevAntiWdupCmd.InitRowCol = [1  1];


PrevDerivtvOutp = DataDict.PIM;
PrevDerivtvOutp.LongName = 'Previous Derivative Output';
PrevDerivtvOutp.Description = [...
  'Derivative output command from previous loop'];
PrevDerivtvOutp.DocUnits = 'MotNwtMtr';
PrevDerivtvOutp.EngDT = dt.float32;
PrevDerivtvOutp.EngMin = -100;
PrevDerivtvOutp.EngMax = 100;
PrevDerivtvOutp.InitRowCol = [1  1];


PrevIntgtrInp = DataDict.PIM;
PrevIntgtrInp.LongName = 'Previous Integrator Input';
PrevIntgtrInp.Description = [...
  'Integrator input command from the previous loop'];
PrevIntgtrInp.DocUnits = 'MotNwtMtrPerSec';
PrevIntgtrInp.EngDT = dt.float32;
PrevIntgtrInp.EngMin = -17430;
PrevIntgtrInp.EngMax = 17430;
PrevIntgtrInp.InitRowCol = [1  1];


PrevIntgtrOutp = DataDict.PIM;
PrevIntgtrOutp.LongName = 'Previous Integrator Output';
PrevIntgtrOutp.Description = [...
  'Integrator output command from previous loop'];
PrevIntgtrOutp.DocUnits = 'MotNwtMtr';
PrevIntgtrOutp.EngDT = dt.float32;
PrevIntgtrOutp.EngMin = -8.8;
PrevIntgtrOutp.EngMax = 8.8;
PrevIntgtrOutp.InitRowCol = [1  1];


PrevMotVelErr = DataDict.PIM;
PrevMotVelErr.LongName = 'Previous Motor Velocity Error';
PrevMotVelErr.Description = [...
  'Difference between target and actual motor velocity in the previous lo' ...
  'op'];
PrevMotVelErr.DocUnits = 'MotRadPerSec';
PrevMotVelErr.EngDT = dt.float32;
PrevMotVelErr.EngMin = -1717;
PrevMotVelErr.EngMax = 1717;
PrevMotVelErr.InitRowCol = [1  1];


PrevMotVelTar = DataDict.PIM;
PrevMotVelTar.LongName = 'Previous Motor Velocity Target';
PrevMotVelTar.Description = [...
  'Dynamic Rate limiter state variable to slew motor velocity target'];
PrevMotVelTar.DocUnits = 'MotRadPerSec';
PrevMotVelTar.EngDT = dt.float32;
PrevMotVelTar.EngMin = -367;
PrevMotVelTar.EngMax = 367;
PrevMotVelTar.InitRowCol = [1  1];


RampDwnCmpl = DataDict.PIM;
RampDwnCmpl.LongName = 'Ramp Down Complete';
RampDwnCmpl.Description = [...
  'Determine if ramp down process of motor velocity control is completed'];
RampDwnCmpl.DocUnits = 'Cnt';
RampDwnCmpl.EngDT = dt.lgc;
RampDwnCmpl.EngMin = 0;
RampDwnCmpl.EngMax = 1;
RampDwnCmpl.InitRowCol = [1  1];


RefTiRampDwn = DataDict.PIM;
RefTiRampDwn.LongName = 'Reference Time Ramp Down';
RefTiRampDwn.Description = [...
  'Update the reference time at the first loop when enable control flag t' ...
  'urns false'];
RefTiRampDwn.DocUnits = 'Cnt';
RefTiRampDwn.EngDT = dt.u32;
RefTiRampDwn.EngMin = 0;
RefTiRampDwn.EngMax = 100000;
RefTiRampDwn.InitRowCol = [1  1];


VelSlewRate = DataDict.PIM;
VelSlewRate.LongName = 'Velocity Slew Rate';
VelSlewRate.Description = [...
  'Slew Rate used to slew target motor velocity'];
VelSlewRate.DocUnits = 'MotRadPerSecPerSec';
VelSlewRate.EngDT = dt.float32;
VelSlewRate.EngMin = 0;
VelSlewRate.EngMax = 183500;
VelSlewRate.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32 = DataDict.Constant;
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.LongName = 'Anti Wind Up Command Lower Limit';
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.Description = [...
  'It defines the lower limit of anti wind up command.'];
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.EngDT = dt.float32;
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.EngVal = -260;
ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32.Define = 'Local';


ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32 = DataDict.Constant;
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.LongName = 'Anti Wind Up Command Upper Limit';
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.Description = [...
  'It defines the upper limit of anti wind up command.'];
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.EngDT = dt.float32;
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.EngVal = 260;
ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32.Define = 'Local';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


DERIVTVCMDLOWRLIM_MOTNWTMTR_F32 = DataDict.Constant;
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.LongName = 'Derivative Command Lower Limit';
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.Description = [...
  'It defines the lower limit of derivative command.'];
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.EngDT = dt.float32;
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.EngVal = -100;
DERIVTVCMDLOWRLIM_MOTNWTMTR_F32.Define = 'Local';


DERIVTVCMDUPPRLIM_MOTNWTMTR_F32 = DataDict.Constant;
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.LongName = 'Derivative Command Upper Command';
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.Description = [...
  'It defines the upper limit of derivative command.'];
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.EngDT = dt.float32;
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.EngVal = 100;
DERIVTVCMDUPPRLIM_MOTNWTMTR_F32.Define = 'Local';


DERIVTVLPFILTICONLOWRLIM_SEC_F32 = DataDict.Constant;
DERIVTVLPFILTICONLOWRLIM_SEC_F32.LongName = 'Derivative Low Pass Filter Time Constant Lower Limit';
DERIVTVLPFILTICONLOWRLIM_SEC_F32.Description = [...
  'To compare with the derivative low pass filter time constant from manu' ...
  'facturing service'];
DERIVTVLPFILTICONLOWRLIM_SEC_F32.DocUnits = 'Sec';
DERIVTVLPFILTICONLOWRLIM_SEC_F32.EngDT = dt.float32;
DERIVTVLPFILTICONLOWRLIM_SEC_F32.EngVal = 0.00063662;
DERIVTVLPFILTICONLOWRLIM_SEC_F32.Define = 'Local';


FALSE_CNT_LGC = DataDict.Constant;
FALSE_CNT_LGC.LongName = 'False';
FALSE_CNT_LGC.Description = 'It defines logic to be false';
FALSE_CNT_LGC.DocUnits = 'Cnt';
FALSE_CNT_LGC.EngDT = dt.lgc;
FALSE_CNT_LGC.EngVal = 0;
FALSE_CNT_LGC.Define = 'Local';


MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32 = DataDict.Constant;
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.LongName = 'Motor Velocity Threshold Ramp Down Complete';
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.Description = [...
  'Threshold used on the difference between target and actual motor veloc' ...
  'ity to determine if ramp down process is completed'];
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.EngDT = dt.float32;
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.EngVal = 2;
MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32.Define = 'Local';


ONEMILLISEC_SEC_F32 = DataDict.Constant;
ONEMILLISEC_SEC_F32.LongName = '1 Millisecond';
ONEMILLISEC_SEC_F32.Description = '1ms periodic loop time step';
ONEMILLISEC_SEC_F32.DocUnits = 'Sec';
ONEMILLISEC_SEC_F32.EngDT = dt.float32;
ONEMILLISEC_SEC_F32.EngVal = 0.001;
ONEMILLISEC_SEC_F32.Define = 'Local';


TITHDRAMPDWNCMPL_CNT_U16 = DataDict.Constant;
TITHDRAMPDWNCMPL_CNT_U16.LongName = 'Time Threshold Ramp Down Complete';
TITHDRAMPDWNCMPL_CNT_U16.Description = [...
  'Time threshold used to determine if ramp down process is completed'];
TITHDRAMPDWNCMPL_CNT_U16.DocUnits = 'Cnt';
TITHDRAMPDWNCMPL_CNT_U16.EngDT = dt.u16;
TITHDRAMPDWNCMPL_CNT_U16.EngVal = 10000;
TITHDRAMPDWNCMPL_CNT_U16.Define = 'Local';


TRUE_CNT_LGC = DataDict.Constant;
TRUE_CNT_LGC.LongName = 'True';
TRUE_CNT_LGC.Description = 'It defines logic to be true';
TRUE_CNT_LGC.DocUnits = 'Cnt';
TRUE_CNT_LGC.EngDT = dt.lgc;
TRUE_CNT_LGC.EngVal = 1;
TRUE_CNT_LGC.Define = 'Local';


ZEROMOTVELTAR_MOTRADPERSEC_F32 = DataDict.Constant;
ZEROMOTVELTAR_MOTRADPERSEC_F32.LongName = 'Zero Motor Velocity Target';
ZEROMOTVELTAR_MOTRADPERSEC_F32.Description = 'Zero target motor velocity';
ZEROMOTVELTAR_MOTRADPERSEC_F32.DocUnits = 'MotRadPerSec';
ZEROMOTVELTAR_MOTRADPERSEC_F32.EngDT = dt.float32;
ZEROMOTVELTAR_MOTRADPERSEC_F32.EngVal = 0;
ZEROMOTVELTAR_MOTRADPERSEC_F32.Define = 'Local';


ZEROTQCMD_MOTNWTMTR_F32 = DataDict.Constant;
ZEROTQCMD_MOTNWTMTR_F32.LongName = 'Zero Torque Command';
ZEROTQCMD_MOTNWTMTR_F32.Description = [...
  'It defines the Motor Torque Command with zero value.'];
ZEROTQCMD_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ZEROTQCMD_MOTNWTMTR_F32.EngDT = dt.float32;
ZEROTQCMD_MOTNWTMTR_F32.EngVal = 0;
ZEROTQCMD_MOTNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
