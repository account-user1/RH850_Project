%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 22-Apr-2016 15:39:29       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF016A = DataDict.FDD;
SF016A.Version = '2.0.X';
SF016A.LongName = 'Vehicle Speed Limiter';
SF016A.ShoName  = 'VehSpdLimr';
SF016A.DesignASIL = 'QM';
SF016A.Description = [...
  'The Vehicle Speed Limiting Function determines a limited assist torque' ...
  ' command value as a function of vehicle speed and handwheel position t' ...
  'o manage mechanical fatigue near end-of-travel positions.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
VehSpdLimrPer1 = DataDict.Runnable;
VehSpdLimrPer1.Context = 'Rte';
VehSpdLimrPer1.TimeStep = 0.002;
VehSpdLimrPer1.Description = [...
  'In the periodic, a limited assist torque command value is calculated a' ...
  's a function of vehicle speed and handwheel position.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Position';
HwAg.Description = 'Handwheel angle final output.';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'VehSpdLimrPer1'};
HwAg.ReadType = 'Rte';


HwAgAuthy = DataDict.IpSignal;
HwAgAuthy.LongName = 'Handwheel Authority';
HwAgAuthy.Description = 'Pinion angle confidence output.';
HwAgAuthy.DocUnits = 'Uls';
HwAgAuthy.EngDT = dt.float32;
HwAgAuthy.EngInit = 0;
HwAgAuthy.EngMin = 0;
HwAgAuthy.EngMax = 1;
HwAgAuthy.ReadIn = {'VehSpdLimrPer1'};
HwAgAuthy.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Counter Clockwise Position';
HwAgEotCcw.Description = [...
  'End of travel learned position in the counter-clockwise direction.'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'VehSpdLimrPer1'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Clockwise Position';
HwAgEotCw.Description = [...
  'End of travel learned position in the clockwise direction.'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.ReadIn = {'VehSpdLimrPer1'};
HwAgEotCw.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'Conditioned value for system-wide usage.'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'VehSpdLimrPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
VehSpdMotTqLim = DataDict.OpSignal;
VehSpdMotTqLim.LongName = 'Vehicle Speed Motor Torque Limit';
VehSpdMotTqLim.Description = 'Limited motor torque commands.';
VehSpdMotTqLim.DocUnits = 'MotNwtMtr';
VehSpdMotTqLim.SwcShoName = 'VehSpdLimr';
VehSpdMotTqLim.EngDT = dt.float32;
VehSpdMotTqLim.EngInit = 0;
VehSpdMotTqLim.EngMin = 0;
VehSpdMotTqLim.EngMax = 8.8;
VehSpdMotTqLim.TestTolerance = 0.000488281;
VehSpdMotTqLim.WrittenIn = {'VehSpdLimrPer1'};
VehSpdMotTqLim.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
VehSpdLimrMaxAssiX = DataDict.Calibration;
VehSpdLimrMaxAssiX.LongName = 'Maximum Assist Table X';
VehSpdLimrMaxAssiX.Description = [...
  'X-axis table of speed-dependent limiting.'];
VehSpdLimrMaxAssiX.DocUnits = 'Kph';
VehSpdLimrMaxAssiX.EngDT = dt.u9p7;
VehSpdLimrMaxAssiX.EngVal =  ...
   [0               25               50               65               75];
VehSpdLimrMaxAssiX.EngMin = 0;
VehSpdLimrMaxAssiX.EngMax = 511;
VehSpdLimrMaxAssiX.Cardinality = 'Cmn';
VehSpdLimrMaxAssiX.CustomerVisible = false;
VehSpdLimrMaxAssiX.Online = false;
VehSpdLimrMaxAssiX.Impact = 'H';
VehSpdLimrMaxAssiX.TuningOwner = 'CSE';
VehSpdLimrMaxAssiX.GraphLink = {''};
VehSpdLimrMaxAssiX.Monotony = 'Strictly_Increasing';
VehSpdLimrMaxAssiX.MaxGrad = 511;
VehSpdLimrMaxAssiX.PortName = 'VehSpdLimrMaxAssiX';


VehSpdLimrMaxAssiY = DataDict.Calibration;
VehSpdLimrMaxAssiY.LongName = 'Maximum Assist Table Y';
VehSpdLimrMaxAssiY.Description = [...
  'Y-axis table of speed-dependent limiting.'];
VehSpdLimrMaxAssiY.DocUnits = 'MotNwtMtr';
VehSpdLimrMaxAssiY.EngDT = dt.u5p11;
VehSpdLimrMaxAssiY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8];
VehSpdLimrMaxAssiY.EngMin = 0;
VehSpdLimrMaxAssiY.EngMax = 8.8;
VehSpdLimrMaxAssiY.Cardinality = 'Cmn';
VehSpdLimrMaxAssiY.CustomerVisible = false;
VehSpdLimrMaxAssiY.Online = false;
VehSpdLimrMaxAssiY.Impact = 'H';
VehSpdLimrMaxAssiY.TuningOwner = 'CSE';
VehSpdLimrMaxAssiY.GraphLink = {'VehSpdLimrMaxAssiX'};
VehSpdLimrMaxAssiY.Monotony = 'Decreasing';
VehSpdLimrMaxAssiY.MaxGrad = 998;
VehSpdLimrMaxAssiY.PortName = 'VehSpdLimrMaxAssiY';


VehSpdLimrPosMaxOffs1 = DataDict.Calibration;
VehSpdLimrPosMaxOffs1.LongName = 'Position Maximum Offset 1';
VehSpdLimrPosMaxOffs1.Description = 'First offset from EOT.';
VehSpdLimrPosMaxOffs1.DocUnits = 'HwDeg';
VehSpdLimrPosMaxOffs1.EngDT = dt.float32;
VehSpdLimrPosMaxOffs1.EngVal = 140;
VehSpdLimrPosMaxOffs1.EngMin = 0;
VehSpdLimrPosMaxOffs1.EngMax = 900;
VehSpdLimrPosMaxOffs1.Cardinality = 'Cmn';
VehSpdLimrPosMaxOffs1.CustomerVisible = false;
VehSpdLimrPosMaxOffs1.Online = false;
VehSpdLimrPosMaxOffs1.Impact = 'H';
VehSpdLimrPosMaxOffs1.TuningOwner = 'CSE';
VehSpdLimrPosMaxOffs1.GraphLink = {''};
VehSpdLimrPosMaxOffs1.Monotony = 'None';
VehSpdLimrPosMaxOffs1.MaxGrad = 998;
VehSpdLimrPosMaxOffs1.PortName = 'VehSpdLimrPosMaxOffs1';


VehSpdLimrPosMaxOffs2 = DataDict.Calibration;
VehSpdLimrPosMaxOffs2.LongName = 'Position Maximum Offset 2';
VehSpdLimrPosMaxOffs2.Description = 'Second offset from EOT.';
VehSpdLimrPosMaxOffs2.DocUnits = 'HwDeg';
VehSpdLimrPosMaxOffs2.EngDT = dt.float32;
VehSpdLimrPosMaxOffs2.EngVal = 120;
VehSpdLimrPosMaxOffs2.EngMin = 0;
VehSpdLimrPosMaxOffs2.EngMax = 900;
VehSpdLimrPosMaxOffs2.Cardinality = 'Cmn';
VehSpdLimrPosMaxOffs2.CustomerVisible = false;
VehSpdLimrPosMaxOffs2.Online = false;
VehSpdLimrPosMaxOffs2.Impact = 'H';
VehSpdLimrPosMaxOffs2.TuningOwner = 'CSE';
VehSpdLimrPosMaxOffs2.GraphLink = {''};
VehSpdLimrPosMaxOffs2.Monotony = 'None';
VehSpdLimrPosMaxOffs2.MaxGrad = 998;
VehSpdLimrPosMaxOffs2.PortName = 'VehSpdLimrPosMaxOffs2';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dVehSpdLimrBreakPt1 = DataDict.Display;
dVehSpdLimrBreakPt1.LongName = 'Break Point 1';
dVehSpdLimrBreakPt1.Description = [...
  'Break point number one, closest to center'];
dVehSpdLimrBreakPt1.DocUnits = 'HwDeg';
dVehSpdLimrBreakPt1.EngDT = dt.float32;
dVehSpdLimrBreakPt1.EngMin = 0;
dVehSpdLimrBreakPt1.EngMax = 1800;
dVehSpdLimrBreakPt1.InitRowCol = [1  1];


dVehSpdLimrBreakPt2 = DataDict.Display;
dVehSpdLimrBreakPt2.LongName = 'Break Point 2';
dVehSpdLimrBreakPt2.Description = [...
  'Break point number 2, closest to end of travel'];
dVehSpdLimrBreakPt2.DocUnits = 'HwDeg';
dVehSpdLimrBreakPt2.EngDT = dt.float32;
dVehSpdLimrBreakPt2.EngMin = 0;
dVehSpdLimrBreakPt2.EngMax = 1800;
dVehSpdLimrBreakPt2.InitRowCol = [1  1];


dVehSpdLimrLimTerm = DataDict.Display;
dVehSpdLimrLimTerm.LongName = 'Limit Term';
dVehSpdLimrLimTerm.Description = [...
  'Torque command limit at breakpoint 2, chosen from output of lookup tab' ...
  'le based on vehicle speed.'];
dVehSpdLimrLimTerm.DocUnits = 'MotNwtMtr';
dVehSpdLimrLimTerm.EngDT = dt.u5p11;
dVehSpdLimrLimTerm.EngMin = 0;
dVehSpdLimrLimTerm.EngMax = 8.8;
dVehSpdLimrLimTerm.InitRowCol = [1  1];


dVehSpdLimrZeroVehSpd = DataDict.Display;
dVehSpdLimrZeroVehSpd.LongName = 'Zero Vehicle Speed';
dVehSpdLimrZeroVehSpd.Description = [...
  'Maximum torque command limit from calibration table, assumed to occur ' ...
  'at zero vehicle speed'];
dVehSpdLimrZeroVehSpd.DocUnits = 'MotNwtMtr';
dVehSpdLimrZeroVehSpd.EngDT = dt.u5p11;
dVehSpdLimrZeroVehSpd.EngMin = 0;
dVehSpdLimrZeroVehSpd.EngMax = 8.8;
dVehSpdLimrZeroVehSpd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
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
