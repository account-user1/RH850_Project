%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Feb-2017 11:27:12       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF027A = DataDict.FDD;
SF027A.Version = '1.3.X';
SF027A.LongName = 'EOT Protection Firewall';
SF027A.ShoName  = 'EotProtnFwl';
SF027A.DesignASIL = 'D';
SF027A.Description = [...
  'This function applies boundary limitations on motor torque commands fr' ...
  'om SF018A (EOT Protection)including the EOTDamping and EOTActive.   Th' ...
  'e motor torque commands are saturation limited toupper and lower bound' ...
  'aries.  Three criteria are tested to determine the firewall limit to b' ...
  'e applied:1) Determine if a command is within a statically dterined in' ...
  'tended active range for the EOT Protectionfunction.  This contrasts wi' ...
  'th the dynamically determined active range for SF018 based on the lear' ...
  'nedend of travel limits.  If determined to be within the active range ' ...
  'then apply an upper and lower boundary.2) If Handwheel Position is inb' ...
  'oard of the active region (eg between +/- X0) then apply simple satura' ...
  'tionlimit preventing a large command from being output.3) If Handwheel' ...
  ' Authority is below a  calibration threshold value, then apply a simpl' ...
  'e saturation limitpreventing a large command from being output.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EotProtnFwlInit1 = DataDict.Runnable;
EotProtnFwlInit1.Context = 'Rte';
EotProtnFwlInit1.TimeStep = 0;
EotProtnFwlInit1.Description = 'Initialize FDD';

EotProtnFwlPer1 = DataDict.Runnable;
EotProtnFwlPer1.Context = 'Rte';
EotProtnFwlPer1.TimeStep = 0.002;
EotProtnFwlPer1.Description = 'The FDD execution rate';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'EotProtnFwlInit1','EotProtnFwlPer1'};
SetNtcSts.Description = [...
  'The Set NTC Status for client server interface'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = '';
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
EotActvCmd = DataDict.IpSignal;
EotActvCmd.LongName = 'EOT Active Command';
EotActvCmd.Description = 'The EOT Active Command';
EotActvCmd.DocUnits = 'MotNwtMtr';
EotActvCmd.EngDT = dt.float32;
EotActvCmd.EngInit = 0;
EotActvCmd.EngMin = -8.8;
EotActvCmd.EngMax = 8.8;
EotActvCmd.ReadIn = {'EotProtnFwlPer1'};
EotActvCmd.ReadType = 'Rte';


EotDampgCmd = DataDict.IpSignal;
EotDampgCmd.LongName = 'EOT Damping Command';
EotDampgCmd.Description = 'The EOT Damping Command';
EotDampgCmd.DocUnits = 'MotNwtMtr';
EotDampgCmd.EngDT = dt.float32;
EotDampgCmd.EngInit = 0;
EotDampgCmd.EngMin = -8.8;
EotDampgCmd.EngMax = 8.8;
EotDampgCmd.ReadIn = {'EotProtnFwlPer1'};
EotDampgCmd.ReadType = 'Rte';


EotProtnDi = DataDict.IpSignal;
EotProtnDi.LongName = 'EOT Protection Disable';
EotProtnDi.Description = [...
  'Disable input for the EOT Protection firewall override'];
EotProtnDi.DocUnits = 'Cnt';
EotProtnDi.EngDT = dt.lgc;
EotProtnDi.EngInit = 0;
EotProtnDi.EngMin = 0;
EotProtnDi.EngMax = 1;
EotProtnDi.ReadIn = {'EotProtnFwlPer1'};
EotProtnDi.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'The Handwheel Angle Input';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'EotProtnFwlPer1'};
HwAg.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacturing Enable State';
MfgEnaSt.Description = [...
  'The Manufacturing Enable state input'];
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'EotProtnFwlPer1'};
MfgEnaSt.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = 'The motor velocity input';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1118;
MotVelCrf.EngMax = 1118;
MotVelCrf.ReadIn = {'EotProtnFwlPer1'};
MotVelCrf.ReadType = 'Rte';


PinionAgConf = DataDict.IpSignal;
PinionAgConf.LongName = 'Pinion Angle Confidence';
PinionAgConf.Description = [...
  'The confidence level of pinion angle'];
PinionAgConf.DocUnits = 'Uls';
PinionAgConf.EngDT = dt.float32;
PinionAgConf.EngInit = 0;
PinionAgConf.EngMin = 0;
PinionAgConf.EngMax = 1;
PinionAgConf.ReadIn = {'EotProtnFwlPer1'};
PinionAgConf.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'The vehicle speed input';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'EotProtnFwlPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
EotActvCmdLimd = DataDict.OpSignal;
EotActvCmdLimd.LongName = 'Limited EOT Active Command';
EotActvCmdLimd.Description = [...
  'The safety boundary limited EOT Active Command'];
EotActvCmdLimd.DocUnits = 'MotNwtMtr';
EotActvCmdLimd.SwcShoName = 'EotProtnFwl';
EotActvCmdLimd.EngDT = dt.float32;
EotActvCmdLimd.EngInit = 0;
EotActvCmdLimd.EngMin = -8.8;
EotActvCmdLimd.EngMax = 8.8;
EotActvCmdLimd.TestTolerance = 0.0005;
EotActvCmdLimd.WrittenIn = {'EotProtnFwlPer1'};
EotActvCmdLimd.WriteType = 'Rte';


EotDampgCmdLimd = DataDict.OpSignal;
EotDampgCmdLimd.LongName = 'Limited EOT Damping Command';
EotDampgCmdLimd.Description = [...
  'The safety boundary limited EOT Damping Command'];
EotDampgCmdLimd.DocUnits = 'MotNwtMtr';
EotDampgCmdLimd.SwcShoName = 'EotProtnFwl';
EotDampgCmdLimd.EngDT = dt.float32;
EotDampgCmdLimd.EngInit = 0;
EotDampgCmdLimd.EngMin = -8.8;
EotDampgCmdLimd.EngMax = 8.8;
EotDampgCmdLimd.TestTolerance = 0.0005;
EotDampgCmdLimd.WrittenIn = {'EotProtnFwlPer1'};
EotDampgCmdLimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
EotProtnFwlActvCmdLowrBnd = DataDict.Calibration;
EotProtnFwlActvCmdLowrBnd.LongName = 'EOT Active Cmd Boundary 1 Y-Axis';
EotProtnFwlActvCmdLowrBnd.Description = [...
  'EOT Active Command Firewall Boundary 1 Y-axis'];
EotProtnFwlActvCmdLowrBnd.DocUnits = 'MotNwtMtr';
EotProtnFwlActvCmdLowrBnd.EngDT = dt.s4p11;
EotProtnFwlActvCmdLowrBnd.EngVal =  ...
   [-0.25            -0.25            -0.25            -0.25];
EotProtnFwlActvCmdLowrBnd.EngMin = -8.8;
EotProtnFwlActvCmdLowrBnd.EngMax = 8.8;
EotProtnFwlActvCmdLowrBnd.Cardinality = 'Inin';
EotProtnFwlActvCmdLowrBnd.CustomerVisible = false;
EotProtnFwlActvCmdLowrBnd.Online = true;
EotProtnFwlActvCmdLowrBnd.Impact = 'H';
EotProtnFwlActvCmdLowrBnd.TuningOwner = 'Safety';
EotProtnFwlActvCmdLowrBnd.GraphLink = {''};
EotProtnFwlActvCmdLowrBnd.Monotony = 'None';
EotProtnFwlActvCmdLowrBnd.MaxGrad = 17.6;
EotProtnFwlActvCmdLowrBnd.PortName = 'EotProtnFwlActvCmdLowrBnd';


EotProtnFwlActvCmdUpprBnd = DataDict.Calibration;
EotProtnFwlActvCmdUpprBnd.LongName = 'EOT Active Cmd Boundary 2 Y-Axis';
EotProtnFwlActvCmdUpprBnd.Description = [...
  'EOT Active Command Firewall Boundary 2 Y-axis'];
EotProtnFwlActvCmdUpprBnd.DocUnits = 'MotNwtMtr';
EotProtnFwlActvCmdUpprBnd.EngDT = dt.s4p11;
EotProtnFwlActvCmdUpprBnd.EngVal =  ...
   [8.8              8.8              8.8              8.8];
EotProtnFwlActvCmdUpprBnd.EngMin = -8.8;
EotProtnFwlActvCmdUpprBnd.EngMax = 8.8;
EotProtnFwlActvCmdUpprBnd.Cardinality = 'Inin';
EotProtnFwlActvCmdUpprBnd.CustomerVisible = false;
EotProtnFwlActvCmdUpprBnd.Online = true;
EotProtnFwlActvCmdUpprBnd.Impact = 'H';
EotProtnFwlActvCmdUpprBnd.TuningOwner = 'Safety';
EotProtnFwlActvCmdUpprBnd.GraphLink = {''};
EotProtnFwlActvCmdUpprBnd.Monotony = 'None';
EotProtnFwlActvCmdUpprBnd.MaxGrad = 17.6;
EotProtnFwlActvCmdUpprBnd.PortName = 'EotProtnFwlActvCmdUpprBnd';


EotProtnFwlEotDampgActvBndX = DataDict.Calibration;
EotProtnFwlEotDampgActvBndX.LongName = 'EOT Damping Active Boundary X-Axis';
EotProtnFwlEotDampgActvBndX.Description = [...
  'EOT Damping Active Region Firewall Boundary X-axis'];
EotProtnFwlEotDampgActvBndX.DocUnits = 'MotRadPerSec';
EotProtnFwlEotDampgActvBndX.EngDT = dt.s11p4;
EotProtnFwlEotDampgActvBndX.EngVal =  ...
   [-700               -5               10               50              700];
EotProtnFwlEotDampgActvBndX.EngMin = -1118;
EotProtnFwlEotDampgActvBndX.EngMax = 1118;
EotProtnFwlEotDampgActvBndX.Cardinality = 'Cmn';
EotProtnFwlEotDampgActvBndX.CustomerVisible = false;
EotProtnFwlEotDampgActvBndX.Online = false;
EotProtnFwlEotDampgActvBndX.Impact = 'H';
EotProtnFwlEotDampgActvBndX.TuningOwner = 'Safety';
EotProtnFwlEotDampgActvBndX.GraphLink = {''};
EotProtnFwlEotDampgActvBndX.Monotony = 'Strictly_Increasing';
EotProtnFwlEotDampgActvBndX.MaxGrad = 2236;
EotProtnFwlEotDampgActvBndX.PortName = 'EotProtnFwlEotDampgActvBndX';


EotProtnFwlEotDampgActvBndY = DataDict.Calibration;
EotProtnFwlEotDampgActvBndY.LongName = 'EOT Damping Active Boundary Y-axis';
EotProtnFwlEotDampgActvBndY.Description = [...
  'EOT Damping Active Region firewall boundary.  Vehicle speed dependent,' ...
  ' and motor velocity(X) vs motor torque(Y).'];
EotProtnFwlEotDampgActvBndY.DocUnits = 'MotNwtMtr';
EotProtnFwlEotDampgActvBndY.EngDT = dt.s7p8;
EotProtnFwlEotDampgActvBndY.EngVal =  ...
   [8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8];
EotProtnFwlEotDampgActvBndY.EngMin = -8.8;
EotProtnFwlEotDampgActvBndY.EngMax = 8.8;
EotProtnFwlEotDampgActvBndY.Cardinality = 'Inin';
EotProtnFwlEotDampgActvBndY.CustomerVisible = true;
EotProtnFwlEotDampgActvBndY.Online = true;
EotProtnFwlEotDampgActvBndY.Impact = 'H';
EotProtnFwlEotDampgActvBndY.TuningOwner = 'Safety';
EotProtnFwlEotDampgActvBndY.GraphLink = {''};
EotProtnFwlEotDampgActvBndY.Monotony = 'None';
EotProtnFwlEotDampgActvBndY.MaxGrad = 17.6;
EotProtnFwlEotDampgActvBndY.PortName = 'EotProtnFwlEotDampgActvBndY';


EotProtnFwlInactvLim = DataDict.Calibration;
EotProtnFwlInactvLim.LongName = 'EOT Inactive Region Saturation Limit';
EotProtnFwlInactvLim.Description = [...
  'Safety saturation limit applied to the command when the system is with' ...
  'in theinactive travel region'];
EotProtnFwlInactvLim.DocUnits = 'MotNwtMtr';
EotProtnFwlInactvLim.EngDT = dt.float32;
EotProtnFwlInactvLim.EngVal = 0.1;
EotProtnFwlInactvLim.EngMin = 0;
EotProtnFwlInactvLim.EngMax = 8.8;
EotProtnFwlInactvLim.Cardinality = 'Cmn';
EotProtnFwlInactvLim.CustomerVisible = false;
EotProtnFwlInactvLim.Online = false;
EotProtnFwlInactvLim.Impact = 'H';
EotProtnFwlInactvLim.TuningOwner = 'Safety';
EotProtnFwlInactvLim.GraphLink = {''};
EotProtnFwlInactvLim.Monotony = 'None';
EotProtnFwlInactvLim.MaxGrad = 8.8;
EotProtnFwlInactvLim.PortName = 'EotProtnFwlInactvLim';


EotProtnFwlVehSpd = DataDict.Calibration;
EotProtnFwlVehSpd.LongName = 'EOT Protection Firewall Vehicle Speed';
EotProtnFwlVehSpd.Description = [...
  'EOT Firewall Vehicle Speed Table for Boundary Lookup'];
EotProtnFwlVehSpd.DocUnits = 'Kph';
EotProtnFwlVehSpd.EngDT = dt.u9p7;
EotProtnFwlVehSpd.EngVal =  ...
   [0               20               40               60];
EotProtnFwlVehSpd.EngMin = 0;
EotProtnFwlVehSpd.EngMax = 511;
EotProtnFwlVehSpd.Cardinality = 'Cmn';
EotProtnFwlVehSpd.CustomerVisible = false;
EotProtnFwlVehSpd.Online = false;
EotProtnFwlVehSpd.Impact = 'H';
EotProtnFwlVehSpd.TuningOwner = 'Safety';
EotProtnFwlVehSpd.GraphLink = {''};
EotProtnFwlVehSpd.Monotony = 'Increasing';
EotProtnFwlVehSpd.MaxGrad = 511;
EotProtnFwlVehSpd.PortName = 'EotProtnFwlVehSpd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
EotProtnHwAgMin = DataDict.ImprtdCal;
EotProtnHwAgMin.DocUnits = 'HwDeg';
EotProtnHwAgMin.EngDT = dt.float32;
EotProtnHwAgMin.EngVal = 550;
EotProtnHwAgMin.EngMin = 0;
EotProtnHwAgMin.EngMax = 900;
EotProtnHwAgMin.PortName = 'EotProtnHwAgMin';
EotProtnHwAgMin.Description = '';


EotProtnHwDegDampgX = DataDict.ImprtdCal;
EotProtnHwDegDampgX.DocUnits = 'HwDeg';
EotProtnHwDegDampgX.EngDT = dt.u12p4;
EotProtnHwDegDampgX.EngVal =  ...
   [120              120              120              120
    0                0                0                0];
EotProtnHwDegDampgX.EngMin = 0;
EotProtnHwDegDampgX.EngMax = 900;
EotProtnHwDegDampgX.PortName = 'EotProtnHwDegDampgX';
EotProtnHwDegDampgX.Description = '';


EotProtnRackTrvlLimrRng = DataDict.ImprtdCal;
EotProtnRackTrvlLimrRng.DocUnits = 'HwDeg';
EotProtnRackTrvlLimrRng.EngDT = dt.float32;
EotProtnRackTrvlLimrRng.EngVal = 20;
EotProtnRackTrvlLimrRng.EngMin = 0;
EotProtnRackTrvlLimrRng.EngMax = 50;
EotProtnRackTrvlLimrRng.PortName = 'EotProtnRackTrvlLimrRng';
EotProtnRackTrvlLimrRng.Description = '';


EotProtnSoftEndStopAuthyThd = DataDict.ImprtdCal;
EotProtnSoftEndStopAuthyThd.DocUnits = 'Uls';
EotProtnSoftEndStopAuthyThd.EngDT = dt.float32;
EotProtnSoftEndStopAuthyThd.EngVal = 0.9;
EotProtnSoftEndStopAuthyThd.EngMin = 0;
EotProtnSoftEndStopAuthyThd.EngMax = 1;
EotProtnSoftEndStopAuthyThd.PortName = 'EotProtnSoftEndStopAuthyThd';
EotProtnSoftEndStopAuthyThd.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dEotProtnFwlEotActvCmdActvLowrBnd = DataDict.Display;
dEotProtnFwlEotActvCmdActvLowrBnd.LongName = 'EotProtn FW EotActive Cmd Active Lower Boundary';
dEotProtnFwlEotActvCmdActvLowrBnd.Description = [...
  'Dynamically displaying CW Lower Boundary Limit'];
dEotProtnFwlEotActvCmdActvLowrBnd.DocUnits = 'MotNwtMtr';
dEotProtnFwlEotActvCmdActvLowrBnd.EngDT = dt.float32;
dEotProtnFwlEotActvCmdActvLowrBnd.EngMin = -8.8;
dEotProtnFwlEotActvCmdActvLowrBnd.EngMax = 8.8;
dEotProtnFwlEotActvCmdActvLowrBnd.InitRowCol = [1  1];


dEotProtnFwlEotActvCmdActvUpprBnd = DataDict.Display;
dEotProtnFwlEotActvCmdActvUpprBnd.LongName = 'EotProtn FW EotActive Cmd Active Upper Boundary';
dEotProtnFwlEotActvCmdActvUpprBnd.Description = [...
  'Dynamically displaying CCW Upper Boundary Limit'];
dEotProtnFwlEotActvCmdActvUpprBnd.DocUnits = 'MotNwtMtr';
dEotProtnFwlEotActvCmdActvUpprBnd.EngDT = dt.float32;
dEotProtnFwlEotActvCmdActvUpprBnd.EngMin = -8.8;
dEotProtnFwlEotActvCmdActvUpprBnd.EngMax = 8.8;
dEotProtnFwlEotActvCmdActvUpprBnd.InitRowCol = [1  1];


dEotProtnFwlEotActvCmdMod = DataDict.Display;
dEotProtnFwlEotActvCmdMod.LongName = 'EotProtn FW EotActive Command Mode';
dEotProtnFwlEotActvCmdMod.Description = [...
  'It displays EotActive command mode: 2-Disable firewall 1-active and 0-' ...
  'Inactive '];
dEotProtnFwlEotActvCmdMod.DocUnits = 'Cnt';
dEotProtnFwlEotActvCmdMod.EngDT = dt.u08;
dEotProtnFwlEotActvCmdMod.EngMin = 0;
dEotProtnFwlEotActvCmdMod.EngMax = 2;
dEotProtnFwlEotActvCmdMod.InitRowCol = [1  1];


dEotProtnFwlEotActvCmdOverActvLim = DataDict.Display;
dEotProtnFwlEotActvCmdOverActvLim.LongName = 'EotProtn FW EotActive Command Over Active Limit';
dEotProtnFwlEotActvCmdOverActvLim.Description = [...
  'The flag of EotProtn Firewall for EOT Active Command in Active regionw' ...
  'hich tells about the NTC status'];
dEotProtnFwlEotActvCmdOverActvLim.DocUnits = 'Cnt';
dEotProtnFwlEotActvCmdOverActvLim.EngDT = dt.lgc;
dEotProtnFwlEotActvCmdOverActvLim.EngMin = 0;
dEotProtnFwlEotActvCmdOverActvLim.EngMax = 1;
dEotProtnFwlEotActvCmdOverActvLim.InitRowCol = [1  1];


dEotProtnFwlEotActvCmdOverInactvLim = DataDict.Display;
dEotProtnFwlEotActvCmdOverInactvLim.LongName = 'EotProtn FW EotActive Command Over Inactive Limit';
dEotProtnFwlEotActvCmdOverInactvLim.Description = [...
  'The flag of EotProtn Firewall for EOT Active Command in Inactive regio' ...
  'n,which tells about the NTC status'];
dEotProtnFwlEotActvCmdOverInactvLim.DocUnits = 'Cnt';
dEotProtnFwlEotActvCmdOverInactvLim.EngDT = dt.lgc;
dEotProtnFwlEotActvCmdOverInactvLim.EngMin = 0;
dEotProtnFwlEotActvCmdOverInactvLim.EngMax = 1;
dEotProtnFwlEotActvCmdOverInactvLim.InitRowCol = [1  1];


dEotProtnFwlEotDampgActvLowrBnd = DataDict.Display;
dEotProtnFwlEotDampgActvLowrBnd.LongName = 'EotProtn FW EotDamping Cmd Active Lower Boundary';
dEotProtnFwlEotDampgActvLowrBnd.Description = [...
  'Dynamically Displaying Lower Boundary in Active Region of EOT Damping'];
dEotProtnFwlEotDampgActvLowrBnd.DocUnits = 'MotNwtMtr';
dEotProtnFwlEotDampgActvLowrBnd.EngDT = dt.float32;
dEotProtnFwlEotDampgActvLowrBnd.EngMin = -8.8;
dEotProtnFwlEotDampgActvLowrBnd.EngMax = 8.8;
dEotProtnFwlEotDampgActvLowrBnd.InitRowCol = [1  1];


dEotProtnFwlEotDampgActvUpprBnd = DataDict.Display;
dEotProtnFwlEotDampgActvUpprBnd.LongName = 'EotProtn FW EotDamping Cmd Active Upper Boundary';
dEotProtnFwlEotDampgActvUpprBnd.Description = [...
  'Dynamically Displaying Upper Boundary in Active Region of EOT damping'];
dEotProtnFwlEotDampgActvUpprBnd.DocUnits = 'MotNwtMtr';
dEotProtnFwlEotDampgActvUpprBnd.EngDT = dt.float32;
dEotProtnFwlEotDampgActvUpprBnd.EngMin = -8.8;
dEotProtnFwlEotDampgActvUpprBnd.EngMax = 8.8;
dEotProtnFwlEotDampgActvUpprBnd.InitRowCol = [1  1];


dEotProtnFwlEotDampgFwX0 = DataDict.Display;
dEotProtnFwlEotDampgFwX0.LongName = 'EotProtn Damping for X0 Handwheel Degree';
dEotProtnFwlEotDampgFwX0.Description = [...
  'The innermost (closest to steering angle center) for the start of the ' ...
  'EOT active range is computed '];
dEotProtnFwlEotDampgFwX0.DocUnits = 'HwDeg';
dEotProtnFwlEotDampgFwX0.EngDT = dt.float32;
dEotProtnFwlEotDampgFwX0.EngMin = -900;
dEotProtnFwlEotDampgFwX0.EngMax = 900;
dEotProtnFwlEotDampgFwX0.InitRowCol = [1  1];


dEotProtnFwlEotDampgMod = DataDict.Display;
dEotProtnFwlEotDampgMod.LongName = 'EotProtn FW Eot Damping Mode';
dEotProtnFwlEotDampgMod.Description = [...
  'The Eot Damping command mode: 2-Disable firewall, 1-active and 0-Inact' ...
  'ive'];
dEotProtnFwlEotDampgMod.DocUnits = 'Cnt';
dEotProtnFwlEotDampgMod.EngDT = dt.u08;
dEotProtnFwlEotDampgMod.EngMin = 0;
dEotProtnFwlEotDampgMod.EngMax = 2;
dEotProtnFwlEotDampgMod.InitRowCol = [1  1];


dEotProtnFwlEotDampgOverActvLim = DataDict.Display;
dEotProtnFwlEotDampgOverActvLim.LongName = 'EotProtn FW EOTDamping Command Over Active Limit';
dEotProtnFwlEotDampgOverActvLim.Description = [...
  'Dispalying The Flag of EotProtn Firewall for Eotdamping Command inacti' ...
  've region,Which tells about the NTC Status'];
dEotProtnFwlEotDampgOverActvLim.DocUnits = 'Cnt';
dEotProtnFwlEotDampgOverActvLim.EngDT = dt.lgc;
dEotProtnFwlEotDampgOverActvLim.EngMin = 0;
dEotProtnFwlEotDampgOverActvLim.EngMax = 1;
dEotProtnFwlEotDampgOverActvLim.InitRowCol = [1  1];


dEotProtnFwlEotDampgOverInactvLim = DataDict.Display;
dEotProtnFwlEotDampgOverInactvLim.LongName = 'EotProtn FW EOTDamping Command Over Inactive Limit';
dEotProtnFwlEotDampgOverInactvLim.Description = [...
  'The Flag of EotProtn Firewall for Eotdamping Command in Inactive regio' ...
  'n,Which Tells About NTC status'];
dEotProtnFwlEotDampgOverInactvLim.DocUnits = 'Cnt';
dEotProtnFwlEotDampgOverInactvLim.EngDT = dt.lgc;
dEotProtnFwlEotDampgOverInactvLim.EngMin = 0;
dEotProtnFwlEotDampgOverInactvLim.EngMax = 1;
dEotProtnFwlEotDampgOverInactvLim.InitRowCol = [1  1];


dEotProtnFwlPinionAgConfSts = DataDict.Display;
dEotProtnFwlPinionAgConfSts.LongName = 'EotProtn Firewall Pinion Angle confidence Status';
dEotProtnFwlPinionAgConfSts.Description = [...
  'It checks the pinion Angle status after comparing pinion angle confide' ...
  'nce with Threshold '];
dEotProtnFwlPinionAgConfSts.DocUnits = 'Cnt';
dEotProtnFwlPinionAgConfSts.EngDT = dt.lgc;
dEotProtnFwlPinionAgConfSts.EngMin = 0;
dEotProtnFwlPinionAgConfSts.EngMax = 1;
dEotProtnFwlPinionAgConfSts.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ACTVREGN_CNT_U08 = DataDict.Constant;
ACTVREGN_CNT_U08.LongName = 'Active Region';
ACTVREGN_CNT_U08.Description = [...
  'Value of Active Region state used for EOT damping mode and EOT active ' ...
  'command mode'];
ACTVREGN_CNT_U08.DocUnits = 'Cnt';
ACTVREGN_CNT_U08.EngDT = dt.u08;
ACTVREGN_CNT_U08.EngVal = 1;
ACTVREGN_CNT_U08.Define = 'Local';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


EOTACTVCMDFWLREACHED_CNT_U08 = DataDict.Constant;
EOTACTVCMDFWLREACHED_CNT_U08.LongName = 'Eot Active Command Firewall Reached';
EOTACTVCMDFWLREACHED_CNT_U08.Description = [...
  'Bit Location of Eot Active Command Firewall Reached'];
EOTACTVCMDFWLREACHED_CNT_U08.DocUnits = 'Cnt';
EOTACTVCMDFWLREACHED_CNT_U08.EngDT = dt.u08;
EOTACTVCMDFWLREACHED_CNT_U08.EngVal = 2;
EOTACTVCMDFWLREACHED_CNT_U08.Define = 'Local';


EOTDMPGFWLREACHED_CNT_U08 = DataDict.Constant;
EOTDMPGFWLREACHED_CNT_U08.LongName = 'Eot Damping Firewall Reached';
EOTDMPGFWLREACHED_CNT_U08.Description = [...
  'Bit Location of Eot Damping Firewall Reached'];
EOTDMPGFWLREACHED_CNT_U08.DocUnits = 'Cnt';
EOTDMPGFWLREACHED_CNT_U08.EngDT = dt.u08;
EOTDMPGFWLREACHED_CNT_U08.EngVal = 1;
EOTDMPGFWLREACHED_CNT_U08.Define = 'Local';


FWLDISAD_CNT_U08 = DataDict.Constant;
FWLDISAD_CNT_U08.LongName = 'Firewall Disabled';
FWLDISAD_CNT_U08.Description = [...
  'Value of Firewall Disabled state used for EOT damping mode and EOT act' ...
  'ive command mode'];
FWLDISAD_CNT_U08.DocUnits = 'Cnt';
FWLDISAD_CNT_U08.EngDT = dt.u08;
FWLDISAD_CNT_U08.EngVal = 2;
FWLDISAD_CNT_U08.Define = 'Local';


INACTVREGN_CNT_U08 = DataDict.Constant;
INACTVREGN_CNT_U08.LongName = 'Inactive Region';
INACTVREGN_CNT_U08.Description = [...
  'Value of Inactive Region state used for EOT damping mode and EOT activ' ...
  'e command mode'];
INACTVREGN_CNT_U08.DocUnits = 'Cnt';
INACTVREGN_CNT_U08.EngDT = dt.u08;
INACTVREGN_CNT_U08.EngVal = 0;
INACTVREGN_CNT_U08.Define = 'Local';


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
EotFwlBndFlt = DataDict.NTC;
EotFwlBndFlt.NtcNr = NtcNr1.NTCNR_0X0C6;
EotFwlBndFlt.NtcTyp = 'None';
EotFwlBndFlt.LongName = 'EOT Firewall Bound Fault';
EotFwlBndFlt.Description = 'Update the status of NTC Eot Protection Firewall Fault in all states while the operating system is available including Warm Init, Operate, and Disable.';
EotFwlBndFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
EotFwlBndFlt.NtcStInfo.Bit0Descr = 'Eot Damping Firewall Bound Fault';
EotFwlBndFlt.NtcStInfo.Bit1Descr = 'Eot Active Command Firewall Bound Fault';
EotFwlBndFlt.NtcStInfo.Bit2Descr = 'Unused';
EotFwlBndFlt.NtcStInfo.Bit3Descr = 'Unused';
EotFwlBndFlt.NtcStInfo.Bit4Descr = 'Unused';
EotFwlBndFlt.NtcStInfo.Bit5Descr = 'Unused';
EotFwlBndFlt.NtcStInfo.Bit6Descr = 'Unused';
EotFwlBndFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
