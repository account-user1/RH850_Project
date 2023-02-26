%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 18-May-2017 14:13:10       %
%                                  Created with tool release: 2.56.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF004B = DataDict.FDD;
SF004B.Version = '2.2.X';
SF004B.LongName = 'Assist Summation and Limiting';
SF004B.ShoName  = 'AssiSumLim';
SF004B.DesignASIL = 'D';
SF004B.Description = [...
  'This function sums torque commands from various functions and then lim' ...
  'its the net command.  It serves as a focal point for safety crosscheck' ...
  's that may reside in Channel 2 memory.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiSumLimInit1 = DataDict.Runnable;
AssiSumLimInit1.Context = 'Rte';
AssiSumLimInit1.TimeStep = 0;
AssiSumLimInit1.Description = 'Initialization';

AssiSumLimPer1 = DataDict.Runnable;
AssiSumLimPer1.Context = 'Rte';
AssiSumLimPer1.TimeStep = 0.002;
AssiSumLimPer1.Description = 'Periodic 1';

SetManTqCmd = DataDict.SrvRunnable;
SetManTqCmd.Context = 'Rte';
SetManTqCmd.Description = [...
  'Manufacturing function call for setting manual torque command'];
SetManTqCmd.Return = DataDict.CSReturn;
SetManTqCmd.Return.Type = 'Standard';
SetManTqCmd.Return.Min = 0;
SetManTqCmd.Return.Max = 1;
SetManTqCmd.Return.TestTolerance = 0;
SetManTqCmd.Return.Description = 'Manual Torque Command';
SetManTqCmd.Arguments(1) = DataDict.CSArguments;
SetManTqCmd.Arguments(1).Name = 'ManTqCmd';
SetManTqCmd.Arguments(1).EngDT = dt.float32;
SetManTqCmd.Arguments(1).EngMin = -8.8;
SetManTqCmd.Arguments(1).EngMax = 8.8;
SetManTqCmd.Arguments(1).Units = 'MotNwtMtr';
SetManTqCmd.Arguments(1).Direction = 'In';
SetManTqCmd.Arguments(1).InitRowCol = [1  1];
SetManTqCmd.Arguments(1).Description = 'Manual Torque Command Enable';
SetManTqCmd.Arguments(2) = DataDict.CSArguments;
SetManTqCmd.Arguments(2).Name = 'ManTqCmdEna';
SetManTqCmd.Arguments(2).EngDT = dt.lgc;
SetManTqCmd.Arguments(2).EngMin = 0;
SetManTqCmd.Arguments(2).EngMax = 1;
SetManTqCmd.Arguments(2).Units = 'Cnt';
SetManTqCmd.Arguments(2).Direction = 'In';
SetManTqCmd.Arguments(2).InitRowCol = [1  1];
SetManTqCmd.Arguments(2).Description = '';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'AssiSumLimPer1'};
GetNtcQlfrSts.Description = 'TO get the NTC qualifier status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'Get NTC Qualifier';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = '';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = '';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'AssiSumLimPer1'};
SetNtcSts.Description = 'To set the NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Set NTC';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = '';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = '';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = '';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiCmd = DataDict.IpSignal;
AssiCmd.LongName = 'Assist Command';
AssiCmd.Description = 'Assist Command';
AssiCmd.DocUnits = 'MotNwtMtr';
AssiCmd.EngDT = dt.float32;
AssiCmd.EngInit = 0;
AssiCmd.EngMin = -8.8;
AssiCmd.EngMax = 8.8;
AssiCmd.ReadIn = {'AssiSumLimPer1'};
AssiCmd.ReadType = 'Rte';


DampgCmd = DataDict.IpSignal;
DampgCmd.LongName = 'Damping Command';
DampgCmd.Description = 'Damping Command';
DampgCmd.DocUnits = 'MotNwtMtr';
DampgCmd.EngDT = dt.float32;
DampgCmd.EngInit = 0;
DampgCmd.EngMin = -8.8;
DampgCmd.EngMax = 8.8;
DampgCmd.ReadIn = {'AssiSumLimPer1'};
DampgCmd.ReadType = 'Rte';


EotActvCmd = DataDict.IpSignal;
EotActvCmd.LongName = 'End of Travel Active Command';
EotActvCmd.Description = 'End of Travel Active Command';
EotActvCmd.DocUnits = 'MotNwtMtr';
EotActvCmd.EngDT = dt.float32;
EotActvCmd.EngInit = 0;
EotActvCmd.EngMin = -8.8;
EotActvCmd.EngMax = 8.8;
EotActvCmd.ReadIn = {'AssiSumLimPer1'};
EotActvCmd.ReadType = 'Rte';


EotAssiSca = DataDict.IpSignal;
EotAssiSca.LongName = 'End of Travel Assist Scale';
EotAssiSca.Description = 'End of Travel Assist Scale';
EotAssiSca.DocUnits = 'Uls';
EotAssiSca.EngDT = dt.float32;
EotAssiSca.EngInit = 1;
EotAssiSca.EngMin = 0;
EotAssiSca.EngMax = 1;
EotAssiSca.ReadIn = {'AssiSumLimPer1'};
EotAssiSca.ReadType = 'Rte';


EotDampgCmd = DataDict.IpSignal;
EotDampgCmd.LongName = 'End of Travel Damping Command';
EotDampgCmd.Description = 'End of Travel Damping Command';
EotDampgCmd.DocUnits = 'MotNwtMtr';
EotDampgCmd.EngDT = dt.float32;
EotDampgCmd.EngInit = 0;
EotDampgCmd.EngMin = -8.8;
EotDampgCmd.EngMax = 8.8;
EotDampgCmd.ReadIn = {'AssiSumLimPer1'};
EotDampgCmd.ReadType = 'Rte';


EotMotTqLim = DataDict.IpSignal;
EotMotTqLim.LongName = 'End of Travel Motor Torque Limit';
EotMotTqLim.Description = 'End of Travel Motor Torque Limit';
EotMotTqLim.DocUnits = 'MotNwtMtr';
EotMotTqLim.EngDT = dt.float32;
EotMotTqLim.EngInit = 8.8;
EotMotTqLim.EngMin = 0;
EotMotTqLim.EngMax = 8.8;
EotMotTqLim.ReadIn = {'AssiSumLimPer1'};
EotMotTqLim.ReadType = 'Rte';


HwTqLoaMtgtnEna = DataDict.IpSignal;
HwTqLoaMtgtnEna.LongName = 'Handwheel Torque Loss of Assist Mitigation Enable';
HwTqLoaMtgtnEna.Description = [...
  'Handwheel Torque Loss of Assist Mitigation Enable'];
HwTqLoaMtgtnEna.DocUnits = 'Cnt';
HwTqLoaMtgtnEna.EngDT = dt.lgc;
HwTqLoaMtgtnEna.EngInit = 0;
HwTqLoaMtgtnEna.EngMin = 0;
HwTqLoaMtgtnEna.EngMax = 1;
HwTqLoaMtgtnEna.ReadIn = {'AssiSumLimPer1'};
HwTqLoaMtgtnEna.ReadType = 'Rte';


MotTqCmdLimDi = DataDict.IpSignal;
MotTqCmdLimDi.LongName = 'Motor Torque Command Limit Disable';
MotTqCmdLimDi.Description = 'Motor Torque Command Limit Disable';
MotTqCmdLimDi.DocUnits = 'Cnt';
MotTqCmdLimDi.EngDT = dt.lgc;
MotTqCmdLimDi.EngInit = 0;
MotTqCmdLimDi.EngMin = 0;
MotTqCmdLimDi.EngMax = 1;
MotTqCmdLimDi.ReadIn = {'AssiSumLimPer1'};
MotTqCmdLimDi.ReadType = 'Rte';


MotTqCmdOvrl = DataDict.IpSignal;
MotTqCmdOvrl.LongName = 'Motor Torque Command Overlay';
MotTqCmdOvrl.Description = 'Motor Torque Command Overlay';
MotTqCmdOvrl.DocUnits = 'MotNwtMtr';
MotTqCmdOvrl.EngDT = dt.float32;
MotTqCmdOvrl.EngInit = 0;
MotTqCmdOvrl.EngMin = -8.8;
MotTqCmdOvrl.EngMax = 8.8;
MotTqCmdOvrl.ReadIn = {'AssiSumLimPer1'};
MotTqCmdOvrl.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity MRF';
MotVelMrf.Description = 'Motor Velocity MRF';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'AssiSumLimPer1'};
MotVelMrf.ReadType = 'Rte';


PinionCentrLrnCmd = DataDict.IpSignal;
PinionCentrLrnCmd.LongName = 'Pinion Center Learn Command';
PinionCentrLrnCmd.Description = 'Pinion Center Learn Command';
PinionCentrLrnCmd.DocUnits = 'MotNwtMtr';
PinionCentrLrnCmd.EngDT = dt.float32;
PinionCentrLrnCmd.EngInit = 0;
PinionCentrLrnCmd.EngMin = -8.8;
PinionCentrLrnCmd.EngMax = 8.8;
PinionCentrLrnCmd.ReadIn = {'AssiSumLimPer1'};
PinionCentrLrnCmd.ReadType = 'Rte';


PinionCentrLrnEna = DataDict.IpSignal;
PinionCentrLrnEna.LongName = 'Pinion Center Learn Enable';
PinionCentrLrnEna.Description = 'Pinion Center Learn Enable';
PinionCentrLrnEna.DocUnits = 'Cnt';
PinionCentrLrnEna.EngDT = dt.lgc;
PinionCentrLrnEna.EngInit = 0;
PinionCentrLrnEna.EngMin = 0;
PinionCentrLrnEna.EngMax = 1;
PinionCentrLrnEna.ReadIn = {'AssiSumLimPer1'};
PinionCentrLrnEna.ReadType = 'Rte';


PullCmpCmd = DataDict.IpSignal;
PullCmpCmd.LongName = 'Pull Compensation Command';
PullCmpCmd.Description = 'Pull Compensation Command';
PullCmpCmd.DocUnits = 'MotNwtMtr';
PullCmpCmd.EngDT = dt.float32;
PullCmpCmd.EngInit = 0;
PullCmpCmd.EngMin = -8.8;
PullCmpCmd.EngMax = 8.8;
PullCmpCmd.ReadIn = {'AssiSumLimPer1'};
PullCmpCmd.ReadType = 'Rte';


PwrLimrRednFac = DataDict.IpSignal;
PwrLimrRednFac.LongName = 'Power Limiter Reduction Factor';
PwrLimrRednFac.Description = 'Power Limiter Reduction Factor';
PwrLimrRednFac.DocUnits = 'Uls';
PwrLimrRednFac.EngDT = dt.float32;
PwrLimrRednFac.EngInit = 0;
PwrLimrRednFac.EngMin = 0;
PwrLimrRednFac.EngMax = 1;
PwrLimrRednFac.ReadIn = {'AssiSumLimPer1'};
PwrLimrRednFac.ReadType = 'Rte';


RtnCmd = DataDict.IpSignal;
RtnCmd.LongName = 'Return Command';
RtnCmd.Description = 'Return Command';
RtnCmd.DocUnits = 'MotNwtMtr';
RtnCmd.EngDT = dt.float32;
RtnCmd.EngInit = 0;
RtnCmd.EngMin = -8.8;
RtnCmd.EngMax = 8.8;
RtnCmd.ReadIn = {'AssiSumLimPer1'};
RtnCmd.ReadType = 'Rte';


StallMotTqLim = DataDict.IpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.Description = 'Stall Motor Torque Limit';
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.ReadIn = {'AssiSumLimPer1'};
StallMotTqLim.ReadType = 'Rte';


SysMotTqCmdSca = DataDict.IpSignal;
SysMotTqCmdSca.LongName = 'System Motor Torque Command Scale';
SysMotTqCmdSca.Description = 'System Motor Torque Command Scale';
SysMotTqCmdSca.DocUnits = 'Uls';
SysMotTqCmdSca.EngDT = dt.float32;
SysMotTqCmdSca.EngInit = 1;
SysMotTqCmdSca.EngMin = 0;
SysMotTqCmdSca.EngMax = 1;
SysMotTqCmdSca.ReadIn = {'AssiSumLimPer1'};
SysMotTqCmdSca.ReadType = 'Rte';


ThermMotTqLim = DataDict.IpSignal;
ThermMotTqLim.LongName = 'Thermal Motor Torque Limit';
ThermMotTqLim.Description = 'Thermal Motor Torque Limit';
ThermMotTqLim.DocUnits = 'MotNwtMtr';
ThermMotTqLim.EngDT = dt.float32;
ThermMotTqLim.EngInit = 8.8;
ThermMotTqLim.EngMin = 0;
ThermMotTqLim.EngMax = 8.8;
ThermMotTqLim.ReadIn = {'AssiSumLimPer1'};
ThermMotTqLim.ReadType = 'Rte';


ThermRednFac = DataDict.IpSignal;
ThermRednFac.LongName = 'Thermal Reduction Factor';
ThermRednFac.Description = 'Thermal Reduction Factor';
ThermRednFac.DocUnits = 'Uls';
ThermRednFac.EngDT = dt.float32;
ThermRednFac.EngInit = 0;
ThermRednFac.EngMin = 0;
ThermRednFac.EngMax = 1;
ThermRednFac.ReadIn = {'AssiSumLimPer1'};
ThermRednFac.ReadType = 'Rte';


TqLoaCmd = DataDict.IpSignal;
TqLoaCmd.LongName = 'Torque Loss of Assist Command';
TqLoaCmd.Description = 'Torque Loss of Assist Command';
TqLoaCmd.DocUnits = 'MotNwtMtr';
TqLoaCmd.EngDT = dt.float32;
TqLoaCmd.EngInit = 0;
TqLoaCmd.EngMin = -8.8;
TqLoaCmd.EngMax = 8.8;
TqLoaCmd.ReadIn = {'AssiSumLimPer1'};
TqLoaCmd.ReadType = 'Rte';


TqSteerMtgtnCmd = DataDict.IpSignal;
TqSteerMtgtnCmd.LongName = 'Torque Steer Mitigation Command';
TqSteerMtgtnCmd.Description = 'Torque Steer Mitigation Command';
TqSteerMtgtnCmd.DocUnits = 'MotNwtMtr';
TqSteerMtgtnCmd.EngDT = dt.float32;
TqSteerMtgtnCmd.EngInit = 0;
TqSteerMtgtnCmd.EngMin = -3;
TqSteerMtgtnCmd.EngMax = 3;
TqSteerMtgtnCmd.ReadIn = {'AssiSumLimPer1'};
TqSteerMtgtnCmd.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SetManTqCmd','AssiSumLimPer1'};
VehSpd.ReadType = 'Rte';


VehSpdMotTqLim = DataDict.IpSignal;
VehSpdMotTqLim.LongName = 'Vehicle Speed Motor Torque Limit';
VehSpdMotTqLim.Description = 'Vehicle Speed Motor Torque Limit';
VehSpdMotTqLim.DocUnits = 'MotNwtMtr';
VehSpdMotTqLim.EngDT = dt.float32;
VehSpdMotTqLim.EngInit = 8.8;
VehSpdMotTqLim.EngMin = 0;
VehSpdMotTqLim.EngMax = 8.8;
VehSpdMotTqLim.ReadIn = {'AssiSumLimPer1'};
VehSpdMotTqLim.ReadType = 'Rte';


WhlImbRejctnCmd = DataDict.IpSignal;
WhlImbRejctnCmd.LongName = 'Wheel Imbalance Rejection Command';
WhlImbRejctnCmd.Description = 'Wheel Imbalance Rejection Command';
WhlImbRejctnCmd.DocUnits = 'MotNwtMtr';
WhlImbRejctnCmd.EngDT = dt.float32;
WhlImbRejctnCmd.EngInit = 0;
WhlImbRejctnCmd.EngMin = -8;
WhlImbRejctnCmd.EngMax = 8;
WhlImbRejctnCmd.ReadIn = {'AssiSumLimPer1'};
WhlImbRejctnCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmd = DataDict.OpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.Description = [...
  'Signal with some limiting – used by SF19B - power limit function'];
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.SwcShoName = 'AssiSumLim';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.TestTolerance = 0.000488281;
MotTqCmd.WrittenIn = {'AssiSumLimPer1'};
MotTqCmd.WriteType = 'Rte';


MotTqCmdLimdPreStall = DataDict.OpSignal;
MotTqCmdLimdPreStall.LongName = 'Motor Torque Command Limited Pre-Stall';
MotTqCmdLimdPreStall.Description = [...
  'Signal with some limiting – used for stall algorithm'];
MotTqCmdLimdPreStall.DocUnits = 'MotNwtMtr';
MotTqCmdLimdPreStall.SwcShoName = 'AssiSumLim';
MotTqCmdLimdPreStall.EngDT = dt.float32;
MotTqCmdLimdPreStall.EngInit = 0;
MotTqCmdLimdPreStall.EngMin = 0;
MotTqCmdLimdPreStall.EngMax = 8.8;
MotTqCmdLimdPreStall.TestTolerance = 0.000488281;
MotTqCmdLimdPreStall.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdLimdPreStall.WriteType = 'Rte';


MotTqCmdLimrMin = DataDict.OpSignal;
MotTqCmdLimrMin.LongName = 'Motor Torque Command Limiter Minimum';
MotTqCmdLimrMin.Description = [...
  'The overall minimum of limits applied by EOT Limit, Veh Spd Limit, Sta' ...
  'll Limit and Thermal Limit'];
MotTqCmdLimrMin.DocUnits = 'MotNwtMtr';
MotTqCmdLimrMin.SwcShoName = 'AssiSumLim';
MotTqCmdLimrMin.EngDT = dt.float32;
MotTqCmdLimrMin.EngInit = 8.8;
MotTqCmdLimrMin.EngMin = 0;
MotTqCmdLimrMin.EngMax = 8.8;
MotTqCmdLimrMin.TestTolerance = 0.000488281;
MotTqCmdLimrMin.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdLimrMin.WriteType = 'Rte';


MotTqCmdPreLim = DataDict.OpSignal;
MotTqCmdPreLim.LongName = 'Motor Torque Command Pre-Limit';
MotTqCmdPreLim.Description = [...
  'The final summation of all torque command signals prior to any limitin' ...
  'g being applied.'];
MotTqCmdPreLim.DocUnits = 'MotNwtMtr';
MotTqCmdPreLim.SwcShoName = 'AssiSumLim';
MotTqCmdPreLim.EngDT = dt.float32;
MotTqCmdPreLim.EngInit = 0;
MotTqCmdPreLim.EngMin = -8.8;
MotTqCmdPreLim.EngMax = 8.8;
MotTqCmdPreLim.TestTolerance = 0.000488281;
MotTqCmdPreLim.WrittenIn = {'AssiSumLimPer1'};
MotTqCmdPreLim.WriteType = 'Rte';


SysProtnRednFac = DataDict.OpSignal;
SysProtnRednFac.LongName = 'System Protection Reduction Factor';
SysProtnRednFac.Description = [...
  'This term identifies the amount of limiting (based on the thermal duty' ...
  ' cycle and power limiting terms) for diagnostic uses.  The algorithm p' ...
  'rovides out the maximum amount of limiting between the two algorithms.' ...
  ''];
SysProtnRednFac.DocUnits = 'Uls';
SysProtnRednFac.SwcShoName = 'AssiSumLim';
SysProtnRednFac.EngDT = dt.float32;
SysProtnRednFac.EngInit = 0;
SysProtnRednFac.EngMin = 0;
SysProtnRednFac.EngMax = 1;
SysProtnRednFac.TestTolerance = 0.00012207;
SysProtnRednFac.WrittenIn = {'AssiSumLimPer1'};
SysProtnRednFac.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
ProcdManTqCmd = DataDict.IRV;
ProcdManTqCmd.LongName = 'Processed Manual Torque Command';
ProcdManTqCmd.Description = [...
  'This is the final processed value of Manual Torque Command.'];
ProcdManTqCmd.DocUnits = 'MotNwtMtr';
ProcdManTqCmd.EngDT = dt.float32;
ProcdManTqCmd.EngInit = 0;
ProcdManTqCmd.EngMin = -8.8;
ProcdManTqCmd.EngMax = 8.8;
ProcdManTqCmd.ReadIn = {'AssiSumLimPer1'};
ProcdManTqCmd.WrittenIn = {'SetManTqCmd'};


ProcdManTqCmdEna = DataDict.IRV;
ProcdManTqCmdEna.LongName = 'Processed Manual Torque Command Enable';
ProcdManTqCmdEna.Description = [...
  'This is the final processed value of Manual Torque Command Enable.'];
ProcdManTqCmdEna.DocUnits = 'Cnt';
ProcdManTqCmdEna.EngDT = dt.lgc;
ProcdManTqCmdEna.EngInit = 0;
ProcdManTqCmdEna.EngMin = 0;
ProcdManTqCmdEna.EngMax = 1;
ProcdManTqCmdEna.ReadIn = {'AssiSumLimPer1'};
ProcdManTqCmdEna.WrittenIn = {'SetManTqCmd'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiSumLimBlndCmdSumFrqLimX = DataDict.Calibration;
AssiSumLimBlndCmdSumFrqLimX.LongName = 'Assist Sum Limit Blend Command Sum Frequency Limit X';
AssiSumLimBlndCmdSumFrqLimX.Description = 'Independent axis vehicle speed';
AssiSumLimBlndCmdSumFrqLimX.DocUnits = 'Kph';
AssiSumLimBlndCmdSumFrqLimX.EngDT = dt.u10p6;
AssiSumLimBlndCmdSumFrqLimX.EngVal =  ...
   [0              511];
AssiSumLimBlndCmdSumFrqLimX.EngMin = 0;
AssiSumLimBlndCmdSumFrqLimX.EngMax = 511;
AssiSumLimBlndCmdSumFrqLimX.Cardinality = 'Inin';
AssiSumLimBlndCmdSumFrqLimX.CustomerVisible = false;
AssiSumLimBlndCmdSumFrqLimX.Online = false;
AssiSumLimBlndCmdSumFrqLimX.Impact = 'H';
AssiSumLimBlndCmdSumFrqLimX.TuningOwner = 'CSE';
AssiSumLimBlndCmdSumFrqLimX.GraphLink = {''};
AssiSumLimBlndCmdSumFrqLimX.Monotony = 'Strictly_Increasing';
AssiSumLimBlndCmdSumFrqLimX.MaxGrad = Inf;
AssiSumLimBlndCmdSumFrqLimX.PortName = 'AssiSumLimBlndCmdSumFrqLimX';


AssiSumLimBlndCmdSumFrqLimY = DataDict.Calibration;
AssiSumLimBlndCmdSumFrqLimY.LongName = 'Assist Sum Limit Blend Command Sum Frequency Limit Y';
AssiSumLimBlndCmdSumFrqLimY.Description = 'Blend Scaling';
AssiSumLimBlndCmdSumFrqLimY.DocUnits = 'Cnt';
AssiSumLimBlndCmdSumFrqLimY.EngDT = dt.u10p6;
AssiSumLimBlndCmdSumFrqLimY.EngVal =  ...
   [1                0];
AssiSumLimBlndCmdSumFrqLimY.EngMin = 0;
AssiSumLimBlndCmdSumFrqLimY.EngMax = 1;
AssiSumLimBlndCmdSumFrqLimY.Cardinality = 'Inin';
AssiSumLimBlndCmdSumFrqLimY.CustomerVisible = false;
AssiSumLimBlndCmdSumFrqLimY.Online = false;
AssiSumLimBlndCmdSumFrqLimY.Impact = 'H';
AssiSumLimBlndCmdSumFrqLimY.TuningOwner = 'CSE';
AssiSumLimBlndCmdSumFrqLimY.GraphLink = {''};
AssiSumLimBlndCmdSumFrqLimY.Monotony = 'None';
AssiSumLimBlndCmdSumFrqLimY.MaxGrad = Inf;
AssiSumLimBlndCmdSumFrqLimY.PortName = 'AssiSumLimBlndCmdSumFrqLimY';


AssiSumLimCmdSumFilActv = DataDict.Calibration;
AssiSumLimCmdSumFilActv.LongName = 'Assist Sum Limit Command Sum Filter Active';
AssiSumLimCmdSumFilActv.Description = [...
  'To switch on and off Brazzel noise filtering'];
AssiSumLimCmdSumFilActv.DocUnits = 'Cnt';
AssiSumLimCmdSumFilActv.EngDT = dt.lgc;
AssiSumLimCmdSumFilActv.EngVal = 1;
AssiSumLimCmdSumFilActv.EngMin = 0;
AssiSumLimCmdSumFilActv.EngMax = 1;
AssiSumLimCmdSumFilActv.Cardinality = 'Cmn';
AssiSumLimCmdSumFilActv.CustomerVisible = false;
AssiSumLimCmdSumFilActv.Online = false;
AssiSumLimCmdSumFilActv.Impact = 'H';
AssiSumLimCmdSumFilActv.TuningOwner = 'CSE';
AssiSumLimCmdSumFilActv.GraphLink = {''};
AssiSumLimCmdSumFilActv.Monotony = 'None';
AssiSumLimCmdSumFilActv.MaxGrad = Inf;
AssiSumLimCmdSumFilActv.PortName = 'AssiSumLimCmdSumFilActv';


AssiSumLimHiSpdCmdSumFrqLimX = DataDict.Calibration;
AssiSumLimHiSpdCmdSumFrqLimX.LongName = 'Assist Sum Limit High Speed Command Sum Frequency Limit X';
AssiSumLimHiSpdCmdSumFrqLimX.Description = [...
  'Independent axis being Motor Velocity'];
AssiSumLimHiSpdCmdSumFrqLimX.DocUnits = 'MotRadPerSec';
AssiSumLimHiSpdCmdSumFrqLimX.EngDT = dt.u11p5;
AssiSumLimHiSpdCmdSumFrqLimX.EngVal =  ...
   [0              100              250              300              500              750             1000             1350];
AssiSumLimHiSpdCmdSumFrqLimX.EngMin = 0;
AssiSumLimHiSpdCmdSumFrqLimX.EngMax = 1350;
AssiSumLimHiSpdCmdSumFrqLimX.Cardinality = 'Inin';
AssiSumLimHiSpdCmdSumFrqLimX.CustomerVisible = false;
AssiSumLimHiSpdCmdSumFrqLimX.Online = false;
AssiSumLimHiSpdCmdSumFrqLimX.Impact = 'H';
AssiSumLimHiSpdCmdSumFrqLimX.TuningOwner = 'CSE';
AssiSumLimHiSpdCmdSumFrqLimX.GraphLink = {''};
AssiSumLimHiSpdCmdSumFrqLimX.Monotony = 'Strictly_Increasing';
AssiSumLimHiSpdCmdSumFrqLimX.MaxGrad = Inf;
AssiSumLimHiSpdCmdSumFrqLimX.PortName = 'AssiSumLimHiSpdCmdSumFrqLimX';


AssiSumLimHiSpdCmdSumFrqLimY = DataDict.Calibration;
AssiSumLimHiSpdCmdSumFrqLimY.LongName = 'Assist Sum Limit High Speed Command Sum Frequency Limit Y';
AssiSumLimHiSpdCmdSumFrqLimY.Description = [...
  'Cut off frequency for Brazzel noise filter during high vehicle speed'];
AssiSumLimHiSpdCmdSumFrqLimY.DocUnits = 'Hz';
AssiSumLimHiSpdCmdSumFrqLimY.EngDT = dt.u10p6;
AssiSumLimHiSpdCmdSumFrqLimY.EngVal =  ...
   [500              500              500              500              500              500              500              500];
AssiSumLimHiSpdCmdSumFrqLimY.EngMin = 0;
AssiSumLimHiSpdCmdSumFrqLimY.EngMax = 1000;
AssiSumLimHiSpdCmdSumFrqLimY.Cardinality = 'Inin';
AssiSumLimHiSpdCmdSumFrqLimY.CustomerVisible = false;
AssiSumLimHiSpdCmdSumFrqLimY.Online = false;
AssiSumLimHiSpdCmdSumFrqLimY.Impact = 'H';
AssiSumLimHiSpdCmdSumFrqLimY.TuningOwner = 'CSE';
AssiSumLimHiSpdCmdSumFrqLimY.GraphLink = {''};
AssiSumLimHiSpdCmdSumFrqLimY.Monotony = 'None';
AssiSumLimHiSpdCmdSumFrqLimY.MaxGrad = Inf;
AssiSumLimHiSpdCmdSumFrqLimY.PortName = 'AssiSumLimHiSpdCmdSumFrqLimY';


AssiSumLimLoSpdCmdSumFrqLimX = DataDict.Calibration;
AssiSumLimLoSpdCmdSumFrqLimX.LongName = 'Assist Sum Limit Low Speed Command Sum Frequency Limit X';
AssiSumLimLoSpdCmdSumFrqLimX.Description = [...
  'Independent axis being Motor Velocity'];
AssiSumLimLoSpdCmdSumFrqLimX.DocUnits = 'MotRadPerSec';
AssiSumLimLoSpdCmdSumFrqLimX.EngDT = dt.u11p5;
AssiSumLimLoSpdCmdSumFrqLimX.EngVal =  ...
   [0              100              250              300              500              750             1000             1350];
AssiSumLimLoSpdCmdSumFrqLimX.EngMin = 0;
AssiSumLimLoSpdCmdSumFrqLimX.EngMax = 1350;
AssiSumLimLoSpdCmdSumFrqLimX.Cardinality = 'Inin';
AssiSumLimLoSpdCmdSumFrqLimX.CustomerVisible = false;
AssiSumLimLoSpdCmdSumFrqLimX.Online = false;
AssiSumLimLoSpdCmdSumFrqLimX.Impact = 'H';
AssiSumLimLoSpdCmdSumFrqLimX.TuningOwner = 'CSE';
AssiSumLimLoSpdCmdSumFrqLimX.GraphLink = {''};
AssiSumLimLoSpdCmdSumFrqLimX.Monotony = 'Strictly_Increasing';
AssiSumLimLoSpdCmdSumFrqLimX.MaxGrad = Inf;
AssiSumLimLoSpdCmdSumFrqLimX.PortName = 'AssiSumLimLoSpdCmdSumFrqLimX';


AssiSumLimLoSpdCmdSumFrqLimY = DataDict.Calibration;
AssiSumLimLoSpdCmdSumFrqLimY.LongName = 'Assist Sum Limit Low Speed Command Sum Frequency Limit Y';
AssiSumLimLoSpdCmdSumFrqLimY.Description = [...
  'Cut off frequency for Brazzel noise filter during low vehicle speed'];
AssiSumLimLoSpdCmdSumFrqLimY.DocUnits = 'Hz';
AssiSumLimLoSpdCmdSumFrqLimY.EngDT = dt.u10p6;
AssiSumLimLoSpdCmdSumFrqLimY.EngVal =  ...
   [500              500              500              500              500              500              500              500];
AssiSumLimLoSpdCmdSumFrqLimY.EngMin = 0;
AssiSumLimLoSpdCmdSumFrqLimY.EngMax = 1000;
AssiSumLimLoSpdCmdSumFrqLimY.Cardinality = 'Inin';
AssiSumLimLoSpdCmdSumFrqLimY.CustomerVisible = false;
AssiSumLimLoSpdCmdSumFrqLimY.Online = false;
AssiSumLimLoSpdCmdSumFrqLimY.Impact = 'H';
AssiSumLimLoSpdCmdSumFrqLimY.TuningOwner = 'CSE';
AssiSumLimLoSpdCmdSumFrqLimY.GraphLink = {''};
AssiSumLimLoSpdCmdSumFrqLimY.Monotony = 'None';
AssiSumLimLoSpdCmdSumFrqLimY.MaxGrad = Inf;
AssiSumLimLoSpdCmdSumFrqLimY.PortName = 'AssiSumLimLoSpdCmdSumFrqLimY';


AssiSumLimMotVelLpFilFrq = DataDict.Calibration;
AssiSumLimMotVelLpFilFrq.LongName = 'Assist Sum Limit Motor Velocity Lowpass Filter Frequency';
AssiSumLimMotVelLpFilFrq.Description = [...
  'To smoothen the motor velocity for cut off frequenct calculation for B' ...
  'razzel noise Filtering'];
AssiSumLimMotVelLpFilFrq.DocUnits = 'Hz';
AssiSumLimMotVelLpFilFrq.EngDT = dt.float32;
AssiSumLimMotVelLpFilFrq.EngVal = 100;
AssiSumLimMotVelLpFilFrq.EngMin = 1;
AssiSumLimMotVelLpFilFrq.EngMax = 250;
AssiSumLimMotVelLpFilFrq.Cardinality = 'Inin';
AssiSumLimMotVelLpFilFrq.CustomerVisible = false;
AssiSumLimMotVelLpFilFrq.Online = false;
AssiSumLimMotVelLpFilFrq.Impact = 'H';
AssiSumLimMotVelLpFilFrq.TuningOwner = 'ThermMngt';
AssiSumLimMotVelLpFilFrq.GraphLink = {''};
AssiSumLimMotVelLpFilFrq.Monotony = 'None';
AssiSumLimMotVelLpFilFrq.MaxGrad = 998;
AssiSumLimMotVelLpFilFrq.PortName = 'AssiSumLimMotVelLpFilFrq';


AssiSumLimNtc0x0C4FailStep = DataDict.Calibration;
AssiSumLimNtc0x0C4FailStep.LongName = 'Assist Sum Limit Nexteer Trouble Code 0x0C4 Fail Step';
AssiSumLimNtc0x0C4FailStep.Description = 'Pinion counter Debounce Value';
AssiSumLimNtc0x0C4FailStep.DocUnits = 'Cnt';
AssiSumLimNtc0x0C4FailStep.EngDT = dt.u16;
AssiSumLimNtc0x0C4FailStep.EngVal = 65535;
AssiSumLimNtc0x0C4FailStep.EngMin = 0;
AssiSumLimNtc0x0C4FailStep.EngMax = 65535;
AssiSumLimNtc0x0C4FailStep.Cardinality = 'Cmn';
AssiSumLimNtc0x0C4FailStep.CustomerVisible = false;
AssiSumLimNtc0x0C4FailStep.Online = false;
AssiSumLimNtc0x0C4FailStep.Impact = 'M';
AssiSumLimNtc0x0C4FailStep.TuningOwner = 'Safety';
AssiSumLimNtc0x0C4FailStep.GraphLink = {''};
AssiSumLimNtc0x0C4FailStep.Monotony = 'None';
AssiSumLimNtc0x0C4FailStep.MaxGrad = 999;
AssiSumLimNtc0x0C4FailStep.PortName = 'AssiSumLimNtc0x0C4FailStep';


AssiSumLimNtc0x0C4PassStep = DataDict.Calibration;
AssiSumLimNtc0x0C4PassStep.LongName = 'Assist Sum Limit Nexteer Trouble Code 0x0C4 Pass Step';
AssiSumLimNtc0x0C4PassStep.Description = 'Pinion counter Debounce Value';
AssiSumLimNtc0x0C4PassStep.DocUnits = 'Cnt';
AssiSumLimNtc0x0C4PassStep.EngDT = dt.u16;
AssiSumLimNtc0x0C4PassStep.EngVal = 65535;
AssiSumLimNtc0x0C4PassStep.EngMin = 0;
AssiSumLimNtc0x0C4PassStep.EngMax = 65535;
AssiSumLimNtc0x0C4PassStep.Cardinality = 'Cmn';
AssiSumLimNtc0x0C4PassStep.CustomerVisible = false;
AssiSumLimNtc0x0C4PassStep.Online = false;
AssiSumLimNtc0x0C4PassStep.Impact = 'M';
AssiSumLimNtc0x0C4PassStep.TuningOwner = 'CSE';
AssiSumLimNtc0x0C4PassStep.GraphLink = {''};
AssiSumLimNtc0x0C4PassStep.Monotony = 'None';
AssiSumLimNtc0x0C4PassStep.MaxGrad = 999;
AssiSumLimNtc0x0C4PassStep.PortName = 'AssiSumLimNtc0x0C4PassStep';


AssiSumLimPullCmpLim = DataDict.Calibration;
AssiSumLimPullCmpLim.LongName = 'Assist Sum Limit Pull Compensation Limit';
AssiSumLimPullCmpLim.Description = [...
  'SF-13 is not inherently ASIL-D, so using a firewall in this function.'];
AssiSumLimPullCmpLim.DocUnits = 'MotNwtMtr';
AssiSumLimPullCmpLim.EngDT = dt.float32;
AssiSumLimPullCmpLim.EngVal = 8.8;
AssiSumLimPullCmpLim.EngMin = 0;
AssiSumLimPullCmpLim.EngMax = 8.8;
AssiSumLimPullCmpLim.Cardinality = 'Cmn';
AssiSumLimPullCmpLim.CustomerVisible = false;
AssiSumLimPullCmpLim.Online = false;
AssiSumLimPullCmpLim.Impact = 'M';
AssiSumLimPullCmpLim.TuningOwner = 'CSE';
AssiSumLimPullCmpLim.GraphLink = {''};
AssiSumLimPullCmpLim.Monotony = 'None';
AssiSumLimPullCmpLim.MaxGrad = 999;
AssiSumLimPullCmpLim.PortName = 'AssiSumLimPullCmpLim';



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
CmdSumInpPrev = DataDict.PIM;
CmdSumInpPrev.LongName = 'Command Sum Input Previous';
CmdSumInpPrev.Description = 'Command Sum Input Previous';
CmdSumInpPrev.DocUnits = 'MotNwtMtr';
CmdSumInpPrev.EngDT = dt.float32;
CmdSumInpPrev.EngMin = -8.8;
CmdSumInpPrev.EngMax = 8.8;
CmdSumInpPrev.InitRowCol = [1  1];


CmdSumOutpPrev = DataDict.PIM;
CmdSumOutpPrev.LongName = 'Command Sum Output Previous';
CmdSumOutpPrev.Description = 'Command Sum Output Previous';
CmdSumOutpPrev.DocUnits = 'MotNwtMtr';
CmdSumOutpPrev.EngDT = dt.float32;
CmdSumOutpPrev.EngMin = -8.8;
CmdSumOutpPrev.EngMax = 8.8;
CmdSumOutpPrev.InitRowCol = [1  1];


MotVelFilLp = DataDict.PIM;
MotVelFilLp.LongName = 'Motor Velocity Filter Lowpass';
MotVelFilLp.Description = [...
  'Low pass filter to smoothen the signals of Motor Velocity'];
MotVelFilLp.DocUnits = 'Uls';
MotVelFilLp.EngDT = struct.FilLpRec1;
MotVelFilLp.EngMin = [struct('FilSt',0,'FilGain',6.2831655e-06)];
MotVelFilLp.EngMax = [struct('FilSt',62500,'FilGain',0.060898632)];
MotVelFilLp.InitRowCol = [1  1];



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


CMDTHD_MOTNWTMTR_F32 = DataDict.Constant;
CMDTHD_MOTNWTMTR_F32.LongName = 'Command Threshold';
CMDTHD_MOTNWTMTR_F32.Description = [...
  'Safety threshold for features like Learn Pinion Center and Manual Torq' ...
  'ue Cmd.'];
CMDTHD_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
CMDTHD_MOTNWTMTR_F32.EngDT = dt.float32;
CMDTHD_MOTNWTMTR_F32.EngVal = 0.01;
CMDTHD_MOTNWTMTR_F32.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


FILTERCONSTANTNUMER_RADPERSEC_F32 = DataDict.Constant;
FILTERCONSTANTNUMER_RADPERSEC_F32.LongName = 'Filter Constant Numerator';
FILTERCONSTANTNUMER_RADPERSEC_F32.Description = 'Constant Thousand';
FILTERCONSTANTNUMER_RADPERSEC_F32.DocUnits = 'RadPerSec';
FILTERCONSTANTNUMER_RADPERSEC_F32.EngDT = dt.float32;
FILTERCONSTANTNUMER_RADPERSEC_F32.EngVal = 1000;
FILTERCONSTANTNUMER_RADPERSEC_F32.Define = 'Local';


FRQHILIM_HZ_F32 = DataDict.Constant;
FRQHILIM_HZ_F32.LongName = 'Frequency High Limit';
FRQHILIM_HZ_F32.Description = [...
  'Safety threshold Upeer Limit for filter cutoff frequency'];
FRQHILIM_HZ_F32.DocUnits = 'Hz';
FRQHILIM_HZ_F32.EngDT = dt.float32;
FRQHILIM_HZ_F32.EngVal = 1000;
FRQHILIM_HZ_F32.Define = 'Local';


FRQLOLIM_HZ_F32 = DataDict.Constant;
FRQLOLIM_HZ_F32.LongName = 'Frequency Low Limit';
FRQLOLIM_HZ_F32.Description = [...
  'Safety threshold Lower Limit for filter cutoff frequency'];
FRQLOLIM_HZ_F32.DocUnits = 'Hz';
FRQLOLIM_HZ_F32.EngDT = dt.float32;
FRQLOLIM_HZ_F32.EngVal = 1;
FRQLOLIM_HZ_F32.Define = 'Local';


LIMPERCCMPLHILIM_ULS_F32 = DataDict.Constant;
LIMPERCCMPLHILIM_ULS_F32.LongName = 'Limit Percent Complete High Limit';
LIMPERCCMPLHILIM_ULS_F32.Description = [...
  'Upper limit applied to LimitPercentFiltered_Uls_f32'];
LIMPERCCMPLHILIM_ULS_F32.DocUnits = 'Uls';
LIMPERCCMPLHILIM_ULS_F32.EngDT = dt.float32;
LIMPERCCMPLHILIM_ULS_F32.EngVal = 1;
LIMPERCCMPLHILIM_ULS_F32.Define = 'Local';


LIMPERCCMPLLOLIM_ULS_F32 = DataDict.Constant;
LIMPERCCMPLLOLIM_ULS_F32.LongName = 'Limit Percent Complete Low Limit';
LIMPERCCMPLLOLIM_ULS_F32.Description = [...
  'Lower limit applied to LimitPercentFiltered_Uls_f32'];
LIMPERCCMPLLOLIM_ULS_F32.DocUnits = 'Uls';
LIMPERCCMPLLOLIM_ULS_F32.EngDT = dt.float32;
LIMPERCCMPLLOLIM_ULS_F32.EngVal = 0;
LIMPERCCMPLLOLIM_ULS_F32.Define = 'Local';


MOTTQZERO_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQZERO_MOTNWTMTR_F32.LongName = 'Motor Torque Zero';
MOTTQZERO_MOTNWTMTR_F32.Description = [...
  'A way to set or limit motor torque command to zero.'];
MOTTQZERO_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQZERO_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQZERO_MOTNWTMTR_F32.EngVal = 0;
MOTTQZERO_MOTNWTMTR_F32.Define = 'Local';


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


VEHSPDTHD_KPH_F32 = DataDict.Constant;
VEHSPDTHD_KPH_F32.LongName = 'Vehicle Speed Threshold';
VEHSPDTHD_KPH_F32.Description = [...
  'Safety threshold for features like Learn Pinion Center and Manual Torq' ...
  'ue Cmd.'];
VEHSPDTHD_KPH_F32.DocUnits = 'Kph';
VEHSPDTHD_KPH_F32.EngDT = dt.float32;
VEHSPDTHD_KPH_F32.EngVal = 3;
VEHSPDTHD_KPH_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
SigPahCrossChk = DataDict.NTC;
SigPahCrossChk.NtcNr = NtcNr1.NTCNR_0X0C4;
SigPahCrossChk.NtcTyp = 'Deb';
SigPahCrossChk.LongName = 'Nexteer Trouble Code Number 0X0C4';
SigPahCrossChk.Description = ' HwAg to Motor Angle Corrrelation';
SigPahCrossChk.NtcStInfo = DataDict.NtcStInfoBitPacked;
SigPahCrossChk.NtcStInfo.Bit0Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit1Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit2Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit3Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit4Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit5Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit6Descr = 'Unused';
SigPahCrossChk.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
