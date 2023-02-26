%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Jun-2017 09:58:29       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF018A = DataDict.FDD;
SF018A.Version = '1.9.X';
SF018A.LongName = 'End of Travel Protection';
SF018A.ShoName  = 'EotProtn';
SF018A.DesignASIL = 'D';
SF018A.Description = [...
  'The End of Travel Protection function specifies performance attributes' ...
  ' as the steering system approaches the mechanical end of travel of the' ...
  ' steering gear. There are three primary functions: Velocity Impact (VI' ...
  '), Soft Stops (SS), and Software Rack Limiter (SRL). The purpose of VI' ...
  ' is to limit the assist for high steering velocity. The purpose of SS ' ...
  'is to scale down the assist and provide damping. The SRL is intended t' ...
  'o simulate a hardware rack limiter.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EotProtnInit1 = DataDict.Runnable;
EotProtnInit1.Context = 'Rte';
EotProtnInit1.TimeStep = 0;
EotProtnInit1.Description = [...
  'End of Travel Protection Initialization Runnable'];

EotProtnPer1 = DataDict.Runnable;
EotProtnPer1.Context = 'Rte';
EotProtnPer1.TimeStep = 0.002;
EotProtnPer1.Description = [...
  'End of Travel Protection Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EotProtnDi = DataDict.IpSignal;
EotProtnDi.LongName = 'End of Travel Protection Disable';
EotProtnDi.Description = 'End of Travel Protection Disable';
EotProtnDi.DocUnits = 'Cnt';
EotProtnDi.EngDT = dt.lgc;
EotProtnDi.EngInit = 0;
EotProtnDi.EngMin = 0;
EotProtnDi.EngMax = 1;
EotProtnDi.ReadIn = {'EotProtnPer1'};
EotProtnDi.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'EotProtnPer1'};
HwAg.ReadType = 'Rte';


HwAgAuthy = DataDict.IpSignal;
HwAgAuthy.LongName = 'Handwheel Angle Authority';
HwAgAuthy.Description = 'Handwheel Angle Authority';
HwAgAuthy.DocUnits = 'Uls';
HwAgAuthy.EngDT = dt.float32;
HwAgAuthy.EngInit = 0;
HwAgAuthy.EngMin = 0;
HwAgAuthy.EngMax = 1;
HwAgAuthy.ReadIn = {'EotProtnPer1'};
HwAgAuthy.ReadType = 'Rte';


HwAgCcwDetd = DataDict.IpSignal;
HwAgCcwDetd.LongName = 'Handwheel Angle Counter Clockwise Detected';
HwAgCcwDetd.Description = [...
  'Handwheel Angle Counter Clockwise Detected'];
HwAgCcwDetd.DocUnits = 'Cnt';
HwAgCcwDetd.EngDT = dt.lgc;
HwAgCcwDetd.EngInit = 0;
HwAgCcwDetd.EngMin = 0;
HwAgCcwDetd.EngMax = 1;
HwAgCcwDetd.ReadIn = {'EotProtnPer1'};
HwAgCcwDetd.ReadType = 'Rte';


HwAgCwDetd = DataDict.IpSignal;
HwAgCwDetd.LongName = 'Handwheel Angle Clockwise Detected';
HwAgCwDetd.Description = 'Handwheel Angle Clockwise Detected';
HwAgCwDetd.DocUnits = 'Cnt';
HwAgCwDetd.EngDT = dt.lgc;
HwAgCwDetd.EngInit = 0;
HwAgCwDetd.EngMin = 0;
HwAgCwDetd.EngMax = 1;
HwAgCwDetd.ReadIn = {'EotProtnPer1'};
HwAgCwDetd.ReadType = 'Rte';


HwAgEotCcw = DataDict.IpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle Counter Clockwise End of Travel';
HwAgEotCcw.Description = [...
  'Handwheel Angle Counter Clockwise End of Travel'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.ReadIn = {'EotProtnPer1'};
HwAgEotCcw.ReadType = 'Rte';


HwAgEotCw = DataDict.IpSignal;
HwAgEotCw.LongName = 'Handwheel Angle Clockwise End of Travel';
HwAgEotCw.Description = [...
  'Handwheel Angle Clockwise End of Travel'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.ReadIn = {'EotProtnPer1'};
HwAgEotCw.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'EotProtnPer1'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = 'Motor Velocity CRF';
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'EotProtnPer1'};
MotVelCrf.ReadType = 'Rte';


SysMotTqCmdSca = DataDict.IpSignal;
SysMotTqCmdSca.LongName = 'System Motor Torque Command Scale';
SysMotTqCmdSca.Description = 'System Motor Torque Command Scale';
SysMotTqCmdSca.DocUnits = 'Uls';
SysMotTqCmdSca.EngDT = dt.float32;
SysMotTqCmdSca.EngInit = 0;
SysMotTqCmdSca.EngMin = 0;
SysMotTqCmdSca.EngMax = 1;
SysMotTqCmdSca.ReadIn = {'EotProtnPer1'};
SysMotTqCmdSca.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'EotProtnPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
EotActvCmd = DataDict.OpSignal;
EotActvCmd.LongName = 'End of Travel Active Command';
EotActvCmd.Description = [...
  'It is the output torque when the SRL intends to simulate a hardware ra' ...
  'ck limiter.'];
EotActvCmd.DocUnits = 'MotNwtMtr';
EotActvCmd.SwcShoName = 'EotProtn';
EotActvCmd.EngDT = dt.float32;
EotActvCmd.EngInit = 0;
EotActvCmd.EngMin = -8.8;
EotActvCmd.EngMax = 8.8;
EotActvCmd.TestTolerance = 0.000488281;
EotActvCmd.WrittenIn = {'EotProtnPer1'};
EotActvCmd.WriteType = 'Rte';


EotAssiSca = DataDict.OpSignal;
EotAssiSca.LongName = 'End of Travel Assist Scale';
EotAssiSca.Description = [...
  'Gain multiplier for assist from End of Travel Soft Stop algorithm.'];
EotAssiSca.DocUnits = 'Uls';
EotAssiSca.SwcShoName = 'EotProtn';
EotAssiSca.EngDT = dt.float32;
EotAssiSca.EngInit = 0;
EotAssiSca.EngMin = 0;
EotAssiSca.EngMax = 1;
EotAssiSca.TestTolerance = 3.05176e-05;
EotAssiSca.WrittenIn = {'EotProtnPer1'};
EotAssiSca.WriteType = 'Rte';


EotDampgCmd = DataDict.OpSignal;
EotDampgCmd.LongName = 'End of Travel Damping Command';
EotDampgCmd.Description = [...
  'Damping command from End of Travel Soft Stop algorithm.'];
EotDampgCmd.DocUnits = 'MotNwtMtr';
EotDampgCmd.SwcShoName = 'EotProtn';
EotDampgCmd.EngDT = dt.float32;
EotDampgCmd.EngInit = 0;
EotDampgCmd.EngMin = -8.8;
EotDampgCmd.EngMax = 8.8;
EotDampgCmd.TestTolerance = 0.000488281;
EotDampgCmd.WrittenIn = {'EotProtnPer1'};
EotDampgCmd.WriteType = 'Rte';


EotMotTqLim = DataDict.OpSignal;
EotMotTqLim.LongName = 'End of Travel Motor Torque Limit';
EotMotTqLim.Description = [...
  'It limits the assist for high steering velocity.'];
EotMotTqLim.DocUnits = 'MotNwtMtr';
EotMotTqLim.SwcShoName = 'EotProtn';
EotMotTqLim.EngDT = dt.float32;
EotMotTqLim.EngInit = 0;
EotMotTqLim.EngMin = 0;
EotMotTqLim.EngMax = 8.8;
EotMotTqLim.TestTolerance = 0.000488281;
EotMotTqLim.WrittenIn = {'EotProtnPer1'};
EotMotTqLim.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
EotProtnActvRegnBypMaxThd = DataDict.Calibration;
EotProtnActvRegnBypMaxThd.LongName = 'Active Region Bypass Maximum Threshold';
EotProtnActvRegnBypMaxThd.Description = [...
  'When SysMotCmdSca is less or equal to this value, the Soft End Stop St' ...
  'ate still has chance to be Normal(2).'];
EotProtnActvRegnBypMaxThd.DocUnits = 'Uls';
EotProtnActvRegnBypMaxThd.EngDT = dt.float32;
EotProtnActvRegnBypMaxThd.EngVal = 0.5;
EotProtnActvRegnBypMaxThd.EngMin = 0;
EotProtnActvRegnBypMaxThd.EngMax = 1;
EotProtnActvRegnBypMaxThd.Cardinality = 'Cmn';
EotProtnActvRegnBypMaxThd.CustomerVisible = false;
EotProtnActvRegnBypMaxThd.Online = false;
EotProtnActvRegnBypMaxThd.Impact = 'M';
EotProtnActvRegnBypMaxThd.TuningOwner = 'CSE';
EotProtnActvRegnBypMaxThd.GraphLink = {''};
EotProtnActvRegnBypMaxThd.Monotony = 'None';
EotProtnActvRegnBypMaxThd.MaxGrad = 999;
EotProtnActvRegnBypMaxThd.PortName = 'EotProtnActvRegnBypMaxThd';


EotProtnDampgSlew = DataDict.Calibration;
EotProtnDampgSlew.LongName = 'End of Travel Damping Slew';
EotProtnDampgSlew.Description = [...
  'Slew for the changing damping to help with transition from changing st' ...
  'ates.'];
EotProtnDampgSlew.DocUnits = 'MotNwtMtrPerSec';
EotProtnDampgSlew.EngDT = dt.float32;
EotProtnDampgSlew.EngVal = 400;
EotProtnDampgSlew.EngMin = 0;
EotProtnDampgSlew.EngMax = 1200;
EotProtnDampgSlew.Cardinality = 'Inin';
EotProtnDampgSlew.CustomerVisible = false;
EotProtnDampgSlew.Online = false;
EotProtnDampgSlew.Impact = 'H';
EotProtnDampgSlew.TuningOwner = 'CSE';
EotProtnDampgSlew.GraphLink = {''};
EotProtnDampgSlew.Monotony = 'None';
EotProtnDampgSlew.MaxGrad = 998;
EotProtnDampgSlew.PortName = 'EotProtnDampgSlew';


EotProtnDampgVehSpdTbl = DataDict.Calibration;
EotProtnDampgVehSpdTbl.LongName = 'Damping Vehicle Speed Table';
EotProtnDampgVehSpdTbl.Description = [...
  '4 point table to determine the Vehicle Speed axis of lookup table for ' ...
  'damping.'];
EotProtnDampgVehSpdTbl.DocUnits = 'Kph';
EotProtnDampgVehSpdTbl.EngDT = dt.u9p7;
EotProtnDampgVehSpdTbl.EngVal =  ...
   [0                5               10               20];
EotProtnDampgVehSpdTbl.EngMin = 0;
EotProtnDampgVehSpdTbl.EngMax = 511;
EotProtnDampgVehSpdTbl.Cardinality = 'Rt';
EotProtnDampgVehSpdTbl.CustomerVisible = false;
EotProtnDampgVehSpdTbl.Online = false;
EotProtnDampgVehSpdTbl.Impact = 'H';
EotProtnDampgVehSpdTbl.TuningOwner = 'CSE';
EotProtnDampgVehSpdTbl.GraphLink = {''};
EotProtnDampgVehSpdTbl.Monotony = 'None';
EotProtnDampgVehSpdTbl.MaxGrad = 998;
EotProtnDampgVehSpdTbl.PortName = 'EotProtnDampgVehSpdTbl';


EotProtnDeltaTqThd = DataDict.Calibration;
EotProtnDeltaTqThd.LongName = 'Delta Torque Threshold';
EotProtnDeltaTqThd.Description = [...
  'Calibration to define the torque needed to get into the exiting state.' ...
  'The direction of this torque is towards center. It is typical to set t' ...
  'his torque near 0.'];
EotProtnDeltaTqThd.DocUnits = 'HwNwtMtr';
EotProtnDeltaTqThd.EngDT = dt.float32;
EotProtnDeltaTqThd.EngVal = 0;
EotProtnDeltaTqThd.EngMin = 0;
EotProtnDeltaTqThd.EngMax = 10;
EotProtnDeltaTqThd.Cardinality = 'Rt';
EotProtnDeltaTqThd.CustomerVisible = false;
EotProtnDeltaTqThd.Online = false;
EotProtnDeltaTqThd.Impact = 'H';
EotProtnDeltaTqThd.TuningOwner = 'CSE';
EotProtnDeltaTqThd.GraphLink = {''};
EotProtnDeltaTqThd.Monotony = 'None';
EotProtnDeltaTqThd.MaxGrad = 998;
EotProtnDeltaTqThd.PortName = 'EotProtnDeltaTqThd';


EotProtnDftPosn = DataDict.Calibration;
EotProtnDftPosn.LongName = 'Default Position';
EotProtnDftPosn.Description = [...
  'Calibration for default handwheel position if handwheel position autho' ...
  'rity confidence is not met.'];
EotProtnDftPosn.DocUnits = 'HwDeg';
EotProtnDftPosn.EngDT = dt.float32;
EotProtnDftPosn.EngVal = 100;
EotProtnDftPosn.EngMin = 0;
EotProtnDftPosn.EngMax = 900;
EotProtnDftPosn.Cardinality = 'Inin';
EotProtnDftPosn.CustomerVisible = false;
EotProtnDftPosn.Online = false;
EotProtnDftPosn.Impact = 'H';
EotProtnDftPosn.TuningOwner = 'CSE';
EotProtnDftPosn.GraphLink = {''};
EotProtnDftPosn.Monotony = 'None';
EotProtnDftPosn.MaxGrad = 998;
EotProtnDftPosn.PortName = 'EotProtnDftPosn';


EotProtnEntrGainAuthyThd = DataDict.Calibration;
EotProtnEntrGainAuthyThd.LongName = 'Enter Gain Authority Threshold';
EotProtnEntrGainAuthyThd.Description = [...
  'Handwheel authority below which the enter gain is tuned in a different' ...
  ' way'];
EotProtnEntrGainAuthyThd.DocUnits = 'Uls';
EotProtnEntrGainAuthyThd.EngDT = dt.float32;
EotProtnEntrGainAuthyThd.EngVal = 0.5;
EotProtnEntrGainAuthyThd.EngMin = 0;
EotProtnEntrGainAuthyThd.EngMax = 1;
EotProtnEntrGainAuthyThd.Cardinality = 'Inin';
EotProtnEntrGainAuthyThd.CustomerVisible = false;
EotProtnEntrGainAuthyThd.Online = false;
EotProtnEntrGainAuthyThd.Impact = 'H';
EotProtnEntrGainAuthyThd.TuningOwner = 'CSE';
EotProtnEntrGainAuthyThd.GraphLink = {''};
EotProtnEntrGainAuthyThd.Monotony = 'None';
EotProtnEntrGainAuthyThd.MaxGrad = 999;
EotProtnEntrGainAuthyThd.PortName = 'EotProtnEntrGainAuthyThd';


EotProtnEntrGainVehSpdTbl = DataDict.Calibration;
EotProtnEntrGainVehSpdTbl.LongName = 'Enter Gain Vehicle Speed Table';
EotProtnEntrGainVehSpdTbl.Description = [...
  '5 point table to determine the Vehicle Speed axis of Enter Gain Curve ' ...
  'lookup table.'];
EotProtnEntrGainVehSpdTbl.DocUnits = 'Kph';
EotProtnEntrGainVehSpdTbl.EngDT = dt.u9p7;
EotProtnEntrGainVehSpdTbl.EngVal =  ...
   [0                5               10               15               20];
EotProtnEntrGainVehSpdTbl.EngMin = 0;
EotProtnEntrGainVehSpdTbl.EngMax = 511;
EotProtnEntrGainVehSpdTbl.Cardinality = 'Rt';
EotProtnEntrGainVehSpdTbl.CustomerVisible = false;
EotProtnEntrGainVehSpdTbl.Online = false;
EotProtnEntrGainVehSpdTbl.Impact = 'H';
EotProtnEntrGainVehSpdTbl.TuningOwner = 'CSE';
EotProtnEntrGainVehSpdTbl.GraphLink = {''};
EotProtnEntrGainVehSpdTbl.Monotony = 'Increasing';
EotProtnEntrGainVehSpdTbl.MaxGrad = 998;
EotProtnEntrGainVehSpdTbl.PortName = 'EotProtnEntrGainVehSpdTbl';


EotProtnEntrGainX = DataDict.Calibration;
EotProtnEntrGainX.LongName = 'Entering Gain X';
EotProtnEntrGainX.Description = [...
  '5 speed, 4 points at each speed to determine X-Axis of Entering Gain C' ...
  'urve 2-D lookup table. Angle values are relative to learned End of Tra' ...
  'vel.'];
EotProtnEntrGainX.DocUnits = 'HwDeg';
EotProtnEntrGainX.EngDT = dt.u12p4;
EotProtnEntrGainX.EngVal =  ...
   [0               30               60               90
    0               30               60               90
    0               30               60               90
    0               30               60               90
    0               30               60               90];
EotProtnEntrGainX.EngMin = 0;
EotProtnEntrGainX.EngMax = 900;
EotProtnEntrGainX.Cardinality = 'Inin';
EotProtnEntrGainX.CustomerVisible = false;
EotProtnEntrGainX.Online = false;
EotProtnEntrGainX.Impact = 'H';
EotProtnEntrGainX.TuningOwner = 'CSE';
EotProtnEntrGainX.GraphLink = {''};
EotProtnEntrGainX.Monotony = 'Strictly_Increasing';
EotProtnEntrGainX.MaxGrad = 998;
EotProtnEntrGainX.PortName = 'EotProtnEntrGainX';


EotProtnEntrGainY = DataDict.Calibration;
EotProtnEntrGainY.LongName = 'Entering Gain Y';
EotProtnEntrGainY.Description = [...
  '5 speed, 4 points at each speed to determine Y-Axis of Enter Gain Curv' ...
  'e 2-D lookup table.'];
EotProtnEntrGainY.DocUnits = 'Uls';
EotProtnEntrGainY.EngDT = dt.u1p15;
EotProtnEntrGainY.EngVal =  ...
   [0             0.33             0.66                1
    0             0.33             0.66                1
    0             0.33             0.66                1
    0             0.33             0.66                1
    0             0.33             0.66                1];
EotProtnEntrGainY.EngMin = 0;
EotProtnEntrGainY.EngMax = 1;
EotProtnEntrGainY.Cardinality = 'Rt';
EotProtnEntrGainY.CustomerVisible = false;
EotProtnEntrGainY.Online = false;
EotProtnEntrGainY.Impact = 'H';
EotProtnEntrGainY.TuningOwner = 'CSE';
EotProtnEntrGainY.GraphLink = {'EotProtnEntrGainX',' EotProtnEntrGainVehSpdTbl'};
EotProtnEntrGainY.Monotony = 'None';
EotProtnEntrGainY.MaxGrad = 998;
EotProtnEntrGainY.PortName = 'EotProtnEntrGainY';


EotProtnEntrStLpFilFrq = DataDict.Calibration;
EotProtnEntrStLpFilFrq.LongName = 'Entering State Lowpass Filter Frequency';
EotProtnEntrStLpFilFrq.Description = [...
  'Calibration to set cutoff frequency of the low pass filter for the gai' ...
  'n when in Entering/Normal state.'];
EotProtnEntrStLpFilFrq.DocUnits = 'Hz';
EotProtnEntrStLpFilFrq.EngDT = dt.float32;
EotProtnEntrStLpFilFrq.EngVal = 30;
EotProtnEntrStLpFilFrq.EngMin = 0.1;
EotProtnEntrStLpFilFrq.EngMax = 100;
EotProtnEntrStLpFilFrq.Cardinality = 'Inin';
EotProtnEntrStLpFilFrq.CustomerVisible = false;
EotProtnEntrStLpFilFrq.Online = false;
EotProtnEntrStLpFilFrq.Impact = 'H';
EotProtnEntrStLpFilFrq.TuningOwner = 'CSE';
EotProtnEntrStLpFilFrq.GraphLink = {''};
EotProtnEntrStLpFilFrq.Monotony = 'None';
EotProtnEntrStLpFilFrq.MaxGrad = 998;
EotProtnEntrStLpFilFrq.PortName = 'EotProtnEntrStLpFilFrq';


EotProtnExitDampgY = DataDict.Calibration;
EotProtnExitDampgY.LongName = 'Exiting Damping Y';
EotProtnExitDampgY.Description = [...
  '4 speed, 2 points at each speed. Table used to determine the damping f' ...
  'or the end of travel algorithm in the exiting state. Point 0 is the da' ...
  'mping at point 0 of the Handwheel Torque Damping X. It is highly recom' ...
  'mend that this point be 0.  Point 1 is the damping closest to the end ' ...
  'of travel defined by point 1 in End of Travel Protection Damping X tab' ...
  'le. The damping is linearly interpolated between point 0 and point 1. ' ...
  'Typically the damping in the exiting state will be close to 0 to preve' ...
  'nt a sticky feeling when exiting.'];
EotProtnExitDampgY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
EotProtnExitDampgY.EngDT = dt.u0p16;
EotProtnExitDampgY.EngVal =  ...
   [0            0.004
    0            0.004
    0            0.004
    0            0.004];
EotProtnExitDampgY.EngMin = 0;
EotProtnExitDampgY.EngMax = 0.015;
EotProtnExitDampgY.Cardinality = 'Inin';
EotProtnExitDampgY.CustomerVisible = false;
EotProtnExitDampgY.Online = false;
EotProtnExitDampgY.Impact = 'H';
EotProtnExitDampgY.TuningOwner = 'CSE';
EotProtnExitDampgY.GraphLink = {'EotProtnHwDegDampgX',' EotProtnDampgVehSpdTbl'};
EotProtnExitDampgY.Monotony = 'None';
EotProtnExitDampgY.MaxGrad = 998;
EotProtnExitDampgY.PortName = 'EotProtnExitDampgY';


EotProtnExitStLpFilFrq = DataDict.Calibration;
EotProtnExitStLpFilFrq.LongName = 'Exiting State Lowpass Filter Frequency';
EotProtnExitStLpFilFrq.Description = [...
  'Calibration to set cutoff frequency of the lowpass filter for the gain' ...
  ' when in Exiting state.'];
EotProtnExitStLpFilFrq.DocUnits = 'Hz';
EotProtnExitStLpFilFrq.EngDT = dt.float32;
EotProtnExitStLpFilFrq.EngVal = 5;
EotProtnExitStLpFilFrq.EngMin = 0.1;
EotProtnExitStLpFilFrq.EngMax = 100;
EotProtnExitStLpFilFrq.Cardinality = 'Inin';
EotProtnExitStLpFilFrq.CustomerVisible = false;
EotProtnExitStLpFilFrq.Online = false;
EotProtnExitStLpFilFrq.Impact = 'H';
EotProtnExitStLpFilFrq.TuningOwner = 'CSE';
EotProtnExitStLpFilFrq.GraphLink = {''};
EotProtnExitStLpFilFrq.Monotony = 'None';
EotProtnExitStLpFilFrq.MaxGrad = 998;
EotProtnExitStLpFilFrq.PortName = 'EotProtnExitStLpFilFrq';


EotProtnHwAgGain = DataDict.Calibration;
EotProtnHwAgGain.LongName = 'Handwheel Angle Gain';
EotProtnHwAgGain.Description = [...
  'Calibration for the spring constant of Rack Travel Limiter. In this ca' ...
  'se, the value is converted to MotNwtMtrPerHwDeg by divided by the syst' ...
  'em torque ratio, eliminating the dividing in the Simulink model.'];
EotProtnHwAgGain.DocUnits = 'MotNwtMtrPerHwDeg';
EotProtnHwAgGain.EngDT = dt.float32;
EotProtnHwAgGain.EngVal = 0.15;
EotProtnHwAgGain.EngMin = 0;
EotProtnHwAgGain.EngMax = 0.5;
EotProtnHwAgGain.Cardinality = 'Inin';
EotProtnHwAgGain.CustomerVisible = false;
EotProtnHwAgGain.Online = false;
EotProtnHwAgGain.Impact = 'H';
EotProtnHwAgGain.TuningOwner = 'CSE';
EotProtnHwAgGain.GraphLink = {''};
EotProtnHwAgGain.Monotony = 'None';
EotProtnHwAgGain.MaxGrad = 999;
EotProtnHwAgGain.PortName = 'EotProtnHwAgGain';


EotProtnHwAgMax = DataDict.Calibration;
EotProtnHwAgMax.LongName = 'Maximum Handwheel Angle';
EotProtnHwAgMax.Description = [...
  'Calibration to determine whether End of Travel is above the maximum ex' ...
  'pected rack travel.'];
EotProtnHwAgMax.DocUnits = 'HwDeg';
EotProtnHwAgMax.EngDT = dt.float32;
EotProtnHwAgMax.EngVal = 600;
EotProtnHwAgMax.EngMin = 0;
EotProtnHwAgMax.EngMax = 900;
EotProtnHwAgMax.Cardinality = 'Inin';
EotProtnHwAgMax.CustomerVisible = false;
EotProtnHwAgMax.Online = false;
EotProtnHwAgMax.Impact = 'H';
EotProtnHwAgMax.TuningOwner = 'CSE';
EotProtnHwAgMax.GraphLink = {''};
EotProtnHwAgMax.Monotony = 'None';
EotProtnHwAgMax.MaxGrad = 998;
EotProtnHwAgMax.PortName = 'EotProtnHwAgMax';


EotProtnHwAgMin = DataDict.Calibration;
EotProtnHwAgMin.LongName = 'Minimum Handwheel Angle';
EotProtnHwAgMin.Description = [...
  'Calibration for determining whether End of Travel is below the minimum' ...
  ' expected rack travel.'];
EotProtnHwAgMin.DocUnits = 'HwDeg';
EotProtnHwAgMin.EngDT = dt.float32;
EotProtnHwAgMin.EngVal = 550;
EotProtnHwAgMin.EngMin = 0;
EotProtnHwAgMin.EngMax = 900;
EotProtnHwAgMin.Cardinality = 'Inin';
EotProtnHwAgMin.CustomerVisible = false;
EotProtnHwAgMin.Online = false;
EotProtnHwAgMin.Impact = 'H';
EotProtnHwAgMin.TuningOwner = 'CSE';
EotProtnHwAgMin.GraphLink = {''};
EotProtnHwAgMin.Monotony = 'None';
EotProtnHwAgMin.MaxGrad = 998;
EotProtnHwAgMin.PortName = 'EotProtnHwAgMin';


EotProtnHwDegDampgX = DataDict.Calibration;
EotProtnHwDegDampgX.LongName = 'Handwheel Degree Damping X';
EotProtnHwDegDampgX.Description = [...
  '4 speed, 2 points at each speed. Table used to determine the location ' ...
  'from the end of travel for the damping command. This table is used for' ...
  ' location of Motor Torque Damping Y and  Exiting Damping Y. Point 0 is' ...
  ' the location from the End of Travel where damping should start changi' ...
  'ng. Point 1 in this table is the location from End of Travel where dam' ...
  'ping changing should stop. Point 1 should be a smaller number than Poi' ...
  'nt 0.'];
EotProtnHwDegDampgX.DocUnits = 'HwDeg';
EotProtnHwDegDampgX.EngDT = dt.u12p4;
EotProtnHwDegDampgX.EngVal =  ...
   [120                0
    120                0
    120                0
    120                0];
EotProtnHwDegDampgX.EngMin = 0;
EotProtnHwDegDampgX.EngMax = 360;
EotProtnHwDegDampgX.Cardinality = 'Inin';
EotProtnHwDegDampgX.CustomerVisible = false;
EotProtnHwDegDampgX.Online = false;
EotProtnHwDegDampgX.Impact = 'H';
EotProtnHwDegDampgX.TuningOwner = 'CSE';
EotProtnHwDegDampgX.GraphLink = {''};
EotProtnHwDegDampgX.Monotony = 'Strictly_Decreasing';
EotProtnHwDegDampgX.MaxGrad = 998;
EotProtnHwDegDampgX.PortName = 'EotProtnHwDegDampgX';


EotProtnHwTqLpFilFrq = DataDict.Calibration;
EotProtnHwTqLpFilFrq.LongName = 'State Handwheel Torque Low Pass Filter Frequency';
EotProtnHwTqLpFilFrq.Description = [...
  'Calibration for filter cutoff frequency.'];
EotProtnHwTqLpFilFrq.DocUnits = 'Hz';
EotProtnHwTqLpFilFrq.EngDT = dt.float32;
EotProtnHwTqLpFilFrq.EngVal = 30;
EotProtnHwTqLpFilFrq.EngMin = 0.1;
EotProtnHwTqLpFilFrq.EngMax = 100;
EotProtnHwTqLpFilFrq.Cardinality = 'Inin';
EotProtnHwTqLpFilFrq.CustomerVisible = false;
EotProtnHwTqLpFilFrq.Online = false;
EotProtnHwTqLpFilFrq.Impact = 'H';
EotProtnHwTqLpFilFrq.TuningOwner = 'CSE';
EotProtnHwTqLpFilFrq.GraphLink = {''};
EotProtnHwTqLpFilFrq.Monotony = 'None';
EotProtnHwTqLpFilFrq.MaxGrad = 998;
EotProtnHwTqLpFilFrq.PortName = 'EotProtnHwTqLpFilFrq';


EotProtnHwTqScaX = DataDict.Calibration;
EotProtnHwTqScaX.LongName = 'Handwheel Torque Scale X';
EotProtnHwTqScaX.Description = [...
  'Calibration to define the handwheel torque gain in the exiting state. ' ...
  'Point 0 in this table is the handwheel torque point where the torque b' ...
  'ased gain is 0. Point 1 is where the torque based gain is 1. This mean' ...
  's the Y table has a fixed value of [0,1]. Anything between these value' ...
  's will be linearly interpolated and held at the ends. This calibration' ...
  ' also effects how sticky the gear feels when coming back to center. Sp' ...
  'ecial care should be taken when setting this cal and EotProtnDeltaTqTh' ...
  'd since there is an interaction. In addition, the final gain calculate' ...
  'd is run through a filter.'];
EotProtnHwTqScaX.DocUnits = 'HwNwtMtr';
EotProtnHwTqScaX.EngDT = dt.u4p12;
EotProtnHwTqScaX.EngVal =  ...
   [0                1];
EotProtnHwTqScaX.EngMin = 0;
EotProtnHwTqScaX.EngMax = 10;
EotProtnHwTqScaX.Cardinality = 'Inin';
EotProtnHwTqScaX.CustomerVisible = false;
EotProtnHwTqScaX.Online = false;
EotProtnHwTqScaX.Impact = 'H';
EotProtnHwTqScaX.TuningOwner = 'CSE';
EotProtnHwTqScaX.GraphLink = {''};
EotProtnHwTqScaX.Monotony = 'Strictly_Increasing';
EotProtnHwTqScaX.MaxGrad = 998;
EotProtnHwTqScaX.PortName = 'EotProtnHwTqScaX';


EotProtnLoAuthyEntrGainY = DataDict.Calibration;
EotProtnLoAuthyEntrGainY.LongName = 'Low Authority Entering Gain Y';
EotProtnLoAuthyEntrGainY.Description = [...
  '5 speed, 4 points at each speed to determine Y-Axis of Enter Gain Curv' ...
  'e 2-D lookup table, when the handwheel authority is lower than a thres' ...
  'hold.'];
EotProtnLoAuthyEntrGainY.DocUnits = 'Uls';
EotProtnLoAuthyEntrGainY.EngDT = dt.u1p15;
EotProtnLoAuthyEntrGainY.EngVal =  ...
   [0              0.3              0.7                1
    0              0.3              0.7                1
    0              0.3              0.7                1
    0              0.3              0.7                1
    0              0.3              0.7                1];
EotProtnLoAuthyEntrGainY.EngMin = 0;
EotProtnLoAuthyEntrGainY.EngMax = 1;
EotProtnLoAuthyEntrGainY.Cardinality = 'Rt';
EotProtnLoAuthyEntrGainY.CustomerVisible = false;
EotProtnLoAuthyEntrGainY.Online = false;
EotProtnLoAuthyEntrGainY.Impact = 'H';
EotProtnLoAuthyEntrGainY.TuningOwner = 'CSE';
EotProtnLoAuthyEntrGainY.GraphLink = {'EotProtnEntrGainX',' EotProtnEntrGainVehSpdTbl'};
EotProtnLoAuthyEntrGainY.Monotony = 'None';
EotProtnLoAuthyEntrGainY.MaxGrad = 998;
EotProtnLoAuthyEntrGainY.PortName = 'EotProtnLoAuthyEntrGainY';


EotProtnMotSpdIncptSca = DataDict.Calibration;
EotProtnMotSpdIncptSca.LongName = 'Motor Speed Intercept Scale';
EotProtnMotSpdIncptSca.Description = [...
  'Calibration for slope limit of Speed Intercept Table.'];
EotProtnMotSpdIncptSca.DocUnits = 'MotNwtMtrPerMotRadPerSec';
EotProtnMotSpdIncptSca.EngDT = dt.float32;
EotProtnMotSpdIncptSca.EngVal = 0.02;
EotProtnMotSpdIncptSca.EngMin = 0;
EotProtnMotSpdIncptSca.EngMax = 0.25;
EotProtnMotSpdIncptSca.Cardinality = 'Inin';
EotProtnMotSpdIncptSca.CustomerVisible = false;
EotProtnMotSpdIncptSca.Online = false;
EotProtnMotSpdIncptSca.Impact = 'H';
EotProtnMotSpdIncptSca.TuningOwner = 'CSE';
EotProtnMotSpdIncptSca.GraphLink = {''};
EotProtnMotSpdIncptSca.Monotony = 'None';
EotProtnMotSpdIncptSca.MaxGrad = 998;
EotProtnMotSpdIncptSca.PortName = 'EotProtnMotSpdIncptSca';


EotProtnMotSpdIncptX = DataDict.Calibration;
EotProtnMotSpdIncptX.LongName = 'Motor Speed Intercept X';
EotProtnMotSpdIncptX.Description = [...
  'Table to determine X-axis of the Speed Intercept Table. It is the dist' ...
  'ance from Learned End of Travel.'];
EotProtnMotSpdIncptX.DocUnits = 'HwDeg';
EotProtnMotSpdIncptX.EngDT = dt.u12p4;
EotProtnMotSpdIncptX.EngVal =  ...
   [50               25];
EotProtnMotSpdIncptX.EngMin = 0;
EotProtnMotSpdIncptX.EngMax = 180;
EotProtnMotSpdIncptX.Cardinality = 'Inin';
EotProtnMotSpdIncptX.CustomerVisible = false;
EotProtnMotSpdIncptX.Online = false;
EotProtnMotSpdIncptX.Impact = 'H';
EotProtnMotSpdIncptX.TuningOwner = 'CSE';
EotProtnMotSpdIncptX.GraphLink = {''};
EotProtnMotSpdIncptX.Monotony = 'Strictly_Decreasing';
EotProtnMotSpdIncptX.MaxGrad = 998;
EotProtnMotSpdIncptX.PortName = 'EotProtnMotSpdIncptX';


EotProtnMotSpdIncptY = DataDict.Calibration;
EotProtnMotSpdIncptY.LongName = 'Motor Speed Intercept Y';
EotProtnMotSpdIncptY.Description = [...
  'Table to determine Y-axis of the Motor Speed Intercept Table.'];
EotProtnMotSpdIncptY.DocUnits = 'MotRadPerSec';
EotProtnMotSpdIncptY.EngDT = dt.u12p4;
EotProtnMotSpdIncptY.EngVal =  ...
   [650              650];
EotProtnMotSpdIncptY.EngMin = 0;
EotProtnMotSpdIncptY.EngMax = 1350;
EotProtnMotSpdIncptY.Cardinality = 'Rt';
EotProtnMotSpdIncptY.CustomerVisible = false;
EotProtnMotSpdIncptY.Online = false;
EotProtnMotSpdIncptY.Impact = 'H';
EotProtnMotSpdIncptY.TuningOwner = 'CSE';
EotProtnMotSpdIncptY.GraphLink = {'EotProtnMotSpdIncptX'};
EotProtnMotSpdIncptY.Monotony = 'Strictly_Decreasing';
EotProtnMotSpdIncptY.MaxGrad = 998;
EotProtnMotSpdIncptY.PortName = 'EotProtnMotSpdIncptY';


EotProtnMotVelGain = DataDict.Calibration;
EotProtnMotVelGain.LongName = 'Motor Velocity Gain';
EotProtnMotVelGain.Description = [...
  'Calibration for the damping constant of Rack Travel Limiter'];
EotProtnMotVelGain.DocUnits = 'MotNwtMtrPerMotRadPerSec';
EotProtnMotVelGain.EngDT = dt.float32;
EotProtnMotVelGain.EngVal = 0.29;
EotProtnMotVelGain.EngMin = 0;
EotProtnMotVelGain.EngMax = 2;
EotProtnMotVelGain.Cardinality = 'Inin';
EotProtnMotVelGain.CustomerVisible = false;
EotProtnMotVelGain.Online = false;
EotProtnMotVelGain.Impact = 'H';
EotProtnMotVelGain.TuningOwner = 'CSE';
EotProtnMotVelGain.GraphLink = {''};
EotProtnMotVelGain.Monotony = 'None';
EotProtnMotVelGain.MaxGrad = 999;
EotProtnMotVelGain.PortName = 'EotProtnMotVelGain';


EotProtnNormDampgY = DataDict.Calibration;
EotProtnNormDampgY.LongName = 'Normal Damping Y';
EotProtnNormDampgY.Description = [...
  '4 tables, 2 points per table. Table to determine damping for the end o' ...
  'f travel algorithm in the entering and normal states. Point 0 is the d' ...
  'amping at point 0 of theHandwheel Torque Damping X. It is highly recom' ...
  'mend that this point be 0 so that damping is not applied on center.  P' ...
  'oint 1 is the damping closest to the end of travel defined by point 1 ' ...
  'in Motor Torque Damping X. Damping is linearly interpolated between po' ...
  'int 0 and point 1 with the end values being used before and after Poin' ...
  't 0 and Point 1. Damping can be used in this state to help with slowin' ...
  'g the gear down and may also help with kick back from tire wind-up. Si' ...
  'nce the damping is applied after the gain, take care to use only the n' ...
  'ecessary amount of damping. If the gain is 0 and the damping is high, ' ...
  'greater steering efforts than manual steer could be achieved at higher' ...
  ' hand wheel speeds.'];
EotProtnNormDampgY.DocUnits = 'MotNwtMtrPerMotRadPerSec';
EotProtnNormDampgY.EngDT = dt.u0p16;
EotProtnNormDampgY.EngVal =  ...
   [0            0.004
    0            0.004
    0            0.004
    0            0.004];
EotProtnNormDampgY.EngMin = 0;
EotProtnNormDampgY.EngMax = 0.015;
EotProtnNormDampgY.Cardinality = 'Rt';
EotProtnNormDampgY.CustomerVisible = false;
EotProtnNormDampgY.Online = false;
EotProtnNormDampgY.Impact = 'H';
EotProtnNormDampgY.TuningOwner = 'CSE';
EotProtnNormDampgY.GraphLink = {'EotProtnHwDegDampgX',' EotProtnDampgVehSpdTbl'};
EotProtnNormDampgY.Monotony = 'None';
EotProtnNormDampgY.MaxGrad = 998;
EotProtnNormDampgY.PortName = 'EotProtnNormDampgY';


EotProtnPosnRampStep = DataDict.Calibration;
EotProtnPosnRampStep.LongName = 'Position Ramp Step';
EotProtnPosnRampStep.Description = [...
  'Ramp step for End of Travel impact position transitioning from End of ' ...
  'Travel default position to actual handwheel position. Avoids sudden ch' ...
  'ange in assist limit. Cal reflects handwheel degree change per loop ti' ...
  'me (2ms).'];
EotProtnPosnRampStep.DocUnits = 'HwDeg';
EotProtnPosnRampStep.EngDT = dt.float32;
EotProtnPosnRampStep.EngVal = 3;
EotProtnPosnRampStep.EngMin = 0;
EotProtnPosnRampStep.EngMax = 900;
EotProtnPosnRampStep.Cardinality = 'Inin';
EotProtnPosnRampStep.CustomerVisible = false;
EotProtnPosnRampStep.Online = false;
EotProtnPosnRampStep.Impact = 'H';
EotProtnPosnRampStep.TuningOwner = 'CSE';
EotProtnPosnRampStep.GraphLink = {''};
EotProtnPosnRampStep.Monotony = 'None';
EotProtnPosnRampStep.MaxGrad = 998;
EotProtnPosnRampStep.PortName = 'EotProtnPosnRampStep';


EotProtnRackTrvlLimrAuthyThd = DataDict.Calibration;
EotProtnRackTrvlLimrAuthyThd.LongName = 'Rack Travel Limiter Authority Threshold';
EotProtnRackTrvlLimrAuthyThd.Description = [...
  'Calibration to increase the threshold for End of Travel Active Command' ...
  ' below this handwheel position authority confidence.'];
EotProtnRackTrvlLimrAuthyThd.DocUnits = 'Uls';
EotProtnRackTrvlLimrAuthyThd.EngDT = dt.float32;
EotProtnRackTrvlLimrAuthyThd.EngVal = 1;
EotProtnRackTrvlLimrAuthyThd.EngMin = 0;
EotProtnRackTrvlLimrAuthyThd.EngMax = 1;
EotProtnRackTrvlLimrAuthyThd.Cardinality = 'Inin';
EotProtnRackTrvlLimrAuthyThd.CustomerVisible = false;
EotProtnRackTrvlLimrAuthyThd.Online = false;
EotProtnRackTrvlLimrAuthyThd.Impact = 'H';
EotProtnRackTrvlLimrAuthyThd.TuningOwner = 'CSE';
EotProtnRackTrvlLimrAuthyThd.GraphLink = {''};
EotProtnRackTrvlLimrAuthyThd.Monotony = 'None';
EotProtnRackTrvlLimrAuthyThd.MaxGrad = 999;
EotProtnRackTrvlLimrAuthyThd.PortName = 'EotProtnRackTrvlLimrAuthyThd';


EotProtnRackTrvlLimrAuthyThdLimd = DataDict.Calibration;
EotProtnRackTrvlLimrAuthyThdLimd.LongName = 'Rack Travel Limiter Authority Threshold Limited';
EotProtnRackTrvlLimrAuthyThdLimd.Description = [...
  'Calibration to apply the range of End of Travel Active Command above t' ...
  'his handwheel position authority confidence (Normal threshold).'];
EotProtnRackTrvlLimrAuthyThdLimd.DocUnits = 'Uls';
EotProtnRackTrvlLimrAuthyThdLimd.EngDT = dt.float32;
EotProtnRackTrvlLimrAuthyThdLimd.EngVal = 1;
EotProtnRackTrvlLimrAuthyThdLimd.EngMin = 0;
EotProtnRackTrvlLimrAuthyThdLimd.EngMax = 1;
EotProtnRackTrvlLimrAuthyThdLimd.Cardinality = 'Inin';
EotProtnRackTrvlLimrAuthyThdLimd.CustomerVisible = false;
EotProtnRackTrvlLimrAuthyThdLimd.Online = false;
EotProtnRackTrvlLimrAuthyThdLimd.Impact = 'H';
EotProtnRackTrvlLimrAuthyThdLimd.TuningOwner = 'CSE';
EotProtnRackTrvlLimrAuthyThdLimd.GraphLink = {''};
EotProtnRackTrvlLimrAuthyThdLimd.Monotony = 'None';
EotProtnRackTrvlLimrAuthyThdLimd.MaxGrad = 999;
EotProtnRackTrvlLimrAuthyThdLimd.PortName = 'EotProtnRackTrvlLimrAuthyThdLimd';


EotProtnRackTrvlLimrEna = DataDict.Calibration;
EotProtnRackTrvlLimrEna.LongName = 'Rack Travel Limiter Enable';
EotProtnRackTrvlLimrEna.Description = [...
  'Boolean Calibration for running Rack Travel Limiter'];
EotProtnRackTrvlLimrEna.DocUnits = 'Cnt';
EotProtnRackTrvlLimrEna.EngDT = dt.lgc;
EotProtnRackTrvlLimrEna.EngVal = 0;
EotProtnRackTrvlLimrEna.EngMin = 0;
EotProtnRackTrvlLimrEna.EngMax = 1;
EotProtnRackTrvlLimrEna.Cardinality = 'Inin';
EotProtnRackTrvlLimrEna.CustomerVisible = false;
EotProtnRackTrvlLimrEna.Online = false;
EotProtnRackTrvlLimrEna.Impact = 'H';
EotProtnRackTrvlLimrEna.TuningOwner = 'CSE';
EotProtnRackTrvlLimrEna.GraphLink = {''};
EotProtnRackTrvlLimrEna.Monotony = 'None';
EotProtnRackTrvlLimrEna.MaxGrad = 999;
EotProtnRackTrvlLimrEna.PortName = 'EotProtnRackTrvlLimrEna';


EotProtnRackTrvlLimrRng = DataDict.Calibration;
EotProtnRackTrvlLimrRng.LongName = 'Rack Travel Limiter Range';
EotProtnRackTrvlLimrRng.Description = [...
  'The range is used to calculate the angle where soft stop begins.'];
EotProtnRackTrvlLimrRng.DocUnits = 'HwDeg';
EotProtnRackTrvlLimrRng.EngDT = dt.float32;
EotProtnRackTrvlLimrRng.EngVal = 90;
EotProtnRackTrvlLimrRng.EngMin = 0;
EotProtnRackTrvlLimrRng.EngMax = 200;
EotProtnRackTrvlLimrRng.Cardinality = 'Inin';
EotProtnRackTrvlLimrRng.CustomerVisible = false;
EotProtnRackTrvlLimrRng.Online = false;
EotProtnRackTrvlLimrRng.Impact = 'H';
EotProtnRackTrvlLimrRng.TuningOwner = 'CSE';
EotProtnRackTrvlLimrRng.GraphLink = {''};
EotProtnRackTrvlLimrRng.Monotony = 'None';
EotProtnRackTrvlLimrRng.MaxGrad = 999;
EotProtnRackTrvlLimrRng.PortName = 'EotProtnRackTrvlLimrRng';


EotProtnRackTrvlLimrRngLimd = DataDict.Calibration;
EotProtnRackTrvlLimrRngLimd.LongName = 'Rack Travel Limiter Range Limited';
EotProtnRackTrvlLimrRngLimd.Description = [...
  'The range is used to calculate the angle where soft stop begins when H' ...
  'andwheel Authority is greater than Rack Travel Limiter Authority Thres' ...
  'hold Limited (Normal range).'];
EotProtnRackTrvlLimrRngLimd.DocUnits = 'HwDeg';
EotProtnRackTrvlLimrRngLimd.EngDT = dt.float32;
EotProtnRackTrvlLimrRngLimd.EngVal = 20;
EotProtnRackTrvlLimrRngLimd.EngMin = 0;
EotProtnRackTrvlLimrRngLimd.EngMax = 50;
EotProtnRackTrvlLimrRngLimd.Cardinality = 'Inin';
EotProtnRackTrvlLimrRngLimd.CustomerVisible = false;
EotProtnRackTrvlLimrRngLimd.Online = false;
EotProtnRackTrvlLimrRngLimd.Impact = 'H';
EotProtnRackTrvlLimrRngLimd.TuningOwner = 'CSE';
EotProtnRackTrvlLimrRngLimd.GraphLink = {''};
EotProtnRackTrvlLimrRngLimd.Monotony = 'None';
EotProtnRackTrvlLimrRngLimd.MaxGrad = 999;
EotProtnRackTrvlLimrRngLimd.PortName = 'EotProtnRackTrvlLimrRngLimd';


EotProtnRackTrvlLimrVehSpdThd = DataDict.Calibration;
EotProtnRackTrvlLimrVehSpdThd.LongName = 'Rack Travel Limiter Vehicle Speed Threshold';
EotProtnRackTrvlLimrVehSpdThd.Description = [...
  'Calibration to turn off End of Travel Active Command above this vehicl' ...
  'e speed.'];
EotProtnRackTrvlLimrVehSpdThd.DocUnits = 'Kph';
EotProtnRackTrvlLimrVehSpdThd.EngDT = dt.float32;
EotProtnRackTrvlLimrVehSpdThd.EngVal = 20;
EotProtnRackTrvlLimrVehSpdThd.EngMin = 0;
EotProtnRackTrvlLimrVehSpdThd.EngMax = 511;
EotProtnRackTrvlLimrVehSpdThd.Cardinality = 'Inin';
EotProtnRackTrvlLimrVehSpdThd.CustomerVisible = false;
EotProtnRackTrvlLimrVehSpdThd.Online = false;
EotProtnRackTrvlLimrVehSpdThd.Impact = 'H';
EotProtnRackTrvlLimrVehSpdThd.TuningOwner = 'CSE';
EotProtnRackTrvlLimrVehSpdThd.GraphLink = {''};
EotProtnRackTrvlLimrVehSpdThd.Monotony = 'None';
EotProtnRackTrvlLimrVehSpdThd.MaxGrad = 999;
EotProtnRackTrvlLimrVehSpdThd.PortName = 'EotProtnRackTrvlLimrVehSpdThd';


EotProtnRunEotVelImpctAndSoftEndStop = DataDict.Calibration;
EotProtnRunEotVelImpctAndSoftEndStop.LongName = 'Run End of Travel Velocity Impact and Soft End Stop';
EotProtnRunEotVelImpctAndSoftEndStop.Description = [...
  'Boolean Calibration for running End of Travel Original Impact and Soft' ...
  ' End Stop at the same time.'];
EotProtnRunEotVelImpctAndSoftEndStop.DocUnits = 'Cnt';
EotProtnRunEotVelImpctAndSoftEndStop.EngDT = dt.lgc;
EotProtnRunEotVelImpctAndSoftEndStop.EngVal = 0;
EotProtnRunEotVelImpctAndSoftEndStop.EngMin = 0;
EotProtnRunEotVelImpctAndSoftEndStop.EngMax = 1;
EotProtnRunEotVelImpctAndSoftEndStop.Cardinality = 'Inin';
EotProtnRunEotVelImpctAndSoftEndStop.CustomerVisible = false;
EotProtnRunEotVelImpctAndSoftEndStop.Online = false;
EotProtnRunEotVelImpctAndSoftEndStop.Impact = 'H';
EotProtnRunEotVelImpctAndSoftEndStop.TuningOwner = 'CSE';
EotProtnRunEotVelImpctAndSoftEndStop.GraphLink = {''};
EotProtnRunEotVelImpctAndSoftEndStop.Monotony = 'None';
EotProtnRunEotVelImpctAndSoftEndStop.MaxGrad = 998;
EotProtnRunEotVelImpctAndSoftEndStop.PortName = 'EotProtnRunEotVelImpctAndSoftEndStop';


EotProtnSoftEndStopAuthyThd = DataDict.Calibration;
EotProtnSoftEndStopAuthyThd.LongName = 'Soft End Stop Authority Threshold';
EotProtnSoftEndStopAuthyThd.Description = [...
  'Calibration to disable the Soft End Stop State below this handwheel po' ...
  'sition authority confidence.'];
EotProtnSoftEndStopAuthyThd.DocUnits = 'Uls';
EotProtnSoftEndStopAuthyThd.EngDT = dt.float32;
EotProtnSoftEndStopAuthyThd.EngVal = 0.9;
EotProtnSoftEndStopAuthyThd.EngMin = 0;
EotProtnSoftEndStopAuthyThd.EngMax = 1;
EotProtnSoftEndStopAuthyThd.Cardinality = 'Rt';
EotProtnSoftEndStopAuthyThd.CustomerVisible = false;
EotProtnSoftEndStopAuthyThd.Online = false;
EotProtnSoftEndStopAuthyThd.Impact = 'H';
EotProtnSoftEndStopAuthyThd.TuningOwner = 'CSE';
EotProtnSoftEndStopAuthyThd.GraphLink = {''};
EotProtnSoftEndStopAuthyThd.Monotony = 'None';
EotProtnSoftEndStopAuthyThd.MaxGrad = 998;
EotProtnSoftEndStopAuthyThd.PortName = 'EotProtnSoftEndStopAuthyThd';


EotProtnSoftEndStopEna = DataDict.Calibration;
EotProtnSoftEndStopEna.LongName = 'Soft End Stop Enable';
EotProtnSoftEndStopEna.Description = [...
  'Boolean indicating whether or not the soft end stops algorithm is desi' ...
  'red to be enabled.'];
EotProtnSoftEndStopEna.DocUnits = 'Cnt';
EotProtnSoftEndStopEna.EngDT = dt.lgc;
EotProtnSoftEndStopEna.EngVal = 0;
EotProtnSoftEndStopEna.EngMin = 0;
EotProtnSoftEndStopEna.EngMax = 1;
EotProtnSoftEndStopEna.Cardinality = 'Inin';
EotProtnSoftEndStopEna.CustomerVisible = false;
EotProtnSoftEndStopEna.Online = false;
EotProtnSoftEndStopEna.Impact = 'H';
EotProtnSoftEndStopEna.TuningOwner = 'CSE';
EotProtnSoftEndStopEna.GraphLink = {''};
EotProtnSoftEndStopEna.Monotony = 'None';
EotProtnSoftEndStopEna.MaxGrad = 998;
EotProtnSoftEndStopEna.PortName = 'EotProtnSoftEndStopEna';


EotProtnSoftEndStopVehSpdThd = DataDict.Calibration;
EotProtnSoftEndStopVehSpdThd.LongName = 'Soft End Stop Vehicle Speed Enable';
EotProtnSoftEndStopVehSpdThd.Description = [...
  'Calibration to disable the Soft End Stop above this vehicle speed.'];
EotProtnSoftEndStopVehSpdThd.DocUnits = 'Kph';
EotProtnSoftEndStopVehSpdThd.EngDT = dt.float32;
EotProtnSoftEndStopVehSpdThd.EngVal = 30;
EotProtnSoftEndStopVehSpdThd.EngMin = 0;
EotProtnSoftEndStopVehSpdThd.EngMax = 511;
EotProtnSoftEndStopVehSpdThd.Cardinality = 'Inin';
EotProtnSoftEndStopVehSpdThd.CustomerVisible = false;
EotProtnSoftEndStopVehSpdThd.Online = false;
EotProtnSoftEndStopVehSpdThd.Impact = 'H';
EotProtnSoftEndStopVehSpdThd.TuningOwner = 'CSE';
EotProtnSoftEndStopVehSpdThd.GraphLink = {''};
EotProtnSoftEndStopVehSpdThd.Monotony = 'None';
EotProtnSoftEndStopVehSpdThd.MaxGrad = 998;
EotProtnSoftEndStopVehSpdThd.PortName = 'EotProtnSoftEndStopVehSpdThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dEotProtnDampg = DataDict.Display;
dEotProtnDampg.LongName = 'Damping';
dEotProtnDampg.Description = [...
  'It is the same with End of Travel Damping before the Rate Limiter.'];
dEotProtnDampg.DocUnits = 'MotNwtMtr';
dEotProtnDampg.EngDT = dt.float32;
dEotProtnDampg.EngMin = -20.25;
dEotProtnDampg.EngMax = 20.25;
dEotProtnDampg.InitRowCol = [1  1];


dEotProtnDetd = DataDict.Display;
dEotProtnDetd.LongName = 'Detected';
dEotProtnDetd.Description = [...
  'Soft Stop algorithm only active when this flag is true.'];
dEotProtnDetd.DocUnits = 'Cnt';
dEotProtnDetd.EngDT = dt.lgc;
dEotProtnDetd.EngMin = 0;
dEotProtnDetd.EngMax = 1;
dEotProtnDetd.InitRowCol = [1  1];


dEotProtnEntrGain = DataDict.Display;
dEotProtnEntrGain.LongName = 'Enter Gain';
dEotProtnEntrGain.Description = [...
  'It is the same with End of Travel Gain when Soft End Stop State is in ' ...
  'Default case. '];
dEotProtnEntrGain.DocUnits = 'Uls';
dEotProtnEntrGain.EngDT = dt.float32;
dEotProtnEntrGain.EngMin = 0;
dEotProtnEntrGain.EngMax = 1;
dEotProtnEntrGain.InitRowCol = [1  1];


dEotProtnEotAssiSca = DataDict.Display;
dEotProtnEotAssiSca.LongName = 'Gain Filter';
dEotProtnEotAssiSca.Description = [...
  'It is the End of Travel Assist Scale and used to calculate the exit ga' ...
  'in.'];
dEotProtnEotAssiSca.DocUnits = 'Uls';
dEotProtnEotAssiSca.EngDT = dt.float32;
dEotProtnEotAssiSca.EngMin = 0;
dEotProtnEotAssiSca.EngMax = 1;
dEotProtnEotAssiSca.InitRowCol = [1  1];


dEotProtnEotGain = DataDict.Display;
dEotProtnEotGain.LongName = 'Gain';
dEotProtnEotGain.Description = [...
  'Generating FildEotGain under certain cutoff frequency by the LowpassFi' ...
  'lter'];
dEotProtnEotGain.DocUnits = 'Uls';
dEotProtnEotGain.EngDT = dt.float32;
dEotProtnEotGain.EngMin = 0;
dEotProtnEotGain.EngMax = 1;
dEotProtnEotGain.InitRowCol = [1  1];


dEotProtnExitGain = DataDict.Display;
dEotProtnExitGain.LongName = 'Exit Gain';
dEotProtnExitGain.Description = [...
  'It is the same with End of Travel Gain when Soft End Stop State is in ' ...
  'Exiting case.'];
dEotProtnExitGain.DocUnits = 'Uls';
dEotProtnExitGain.EngDT = dt.float32;
dEotProtnExitGain.EngMin = 0;
dEotProtnExitGain.EngMax = 1;
dEotProtnExitGain.InitRowCol = [1  1];


dEotProtnLimPosn = DataDict.Display;
dEotProtnLimPosn.LongName = 'Limit Position';
dEotProtnLimPosn.Description = [...
  'It is used with Handwheel Position in the Bilinear intropolation gener' ...
  'ating End of Travel Enter Gain.'];
dEotProtnLimPosn.DocUnits = 'HwDeg';
dEotProtnLimPosn.EngDT = dt.float32;
dEotProtnLimPosn.EngMin = -1440;
dEotProtnLimPosn.EngMax = 1440;
dEotProtnLimPosn.InitRowCol = [1  1];


dEotProtnRackTrvlLimrDi = DataDict.Display;
dEotProtnRackTrvlLimrDi.LongName = 'Rack Travel Limiter Disable';
dEotProtnRackTrvlLimrDi.Description = [...
  'It shows the state of the Rack Travel Limiter disable state, which ind' ...
  'icates whether the Rack Travel Limiter is enabled or disabled.'];
dEotProtnRackTrvlLimrDi.DocUnits = 'Cnt';
dEotProtnRackTrvlLimrDi.EngDT = dt.lgc;
dEotProtnRackTrvlLimrDi.EngMin = 0;
dEotProtnRackTrvlLimrDi.EngMax = 1;
dEotProtnRackTrvlLimrDi.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
EotAssiScaLpFil = DataDict.PIM;
EotAssiScaLpFil.LongName = 'EOT Assist Scale Lowpass Filter';
EotAssiScaLpFil.Description = [...
  'It is a state variable used for filtered End of Travel Scale.'];
EotAssiScaLpFil.DocUnits = 'Cnt';
EotAssiScaLpFil.EngDT = struct.FilLpRec1;
EotAssiScaLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
EotAssiScaLpFil.EngMax = [struct('FilSt',1,'FilGain',0.0609)];
EotAssiScaLpFil.InitRowCol = [1  1];


HwTqLpFil = DataDict.PIM;
HwTqLpFil.LongName = 'Handwheel Torque Lowpass Filter';
HwTqLpFil.Description = [...
  'It is a state variable used for filtered Handwheel Torque.'];
HwTqLpFil.DocUnits = 'Cnt';
HwTqLpFil.EngDT = struct.FilLpRec1;
HwTqLpFil.EngMin = [struct('FilSt',-8.8,'FilGain',0)];
HwTqLpFil.EngMax = [struct('FilSt',8.8,'FilGain',0.7154)];
HwTqLpFil.InitRowCol = [1  1];


NewSoftEndStopSt = DataDict.PIM;
NewSoftEndStopSt.LongName = 'New Soft Stop State State';
NewSoftEndStopSt.Description = [...
  'It is a state variable used to determined the next Soft Stop State if ' ...
  'all 4 vector priorities are false. It keeps the same data type with th' ...
  'e enumerations as u08.'];
NewSoftEndStopSt.DocUnits = 'Uls';
NewSoftEndStopSt.EngDT = dt.u08;
NewSoftEndStopSt.EngMin = 1;
NewSoftEndStopSt.EngMax = 4;
NewSoftEndStopSt.InitRowCol = [1  1];


PrevEotAssiSca = DataDict.PIM;
PrevEotAssiSca.LongName = 'Previous End of Travel Assist Scale';
PrevEotAssiSca.Description = [...
  'It shows the previous End of Travel Assisst Scale and is involved in E' ...
  'nd of Travel Exit Assist Scale.'];
PrevEotAssiSca.DocUnits = 'Uls';
PrevEotAssiSca.EngDT = dt.float32;
PrevEotAssiSca.EngMin = 0;
PrevEotAssiSca.EngMax = 1;
PrevEotAssiSca.InitRowCol = [1  1];


PrevEotDampg = DataDict.PIM;
PrevEotDampg.LongName = 'Previous End of Travel Damping';
PrevEotDampg.Description = [...
  ' It is used in the dynamic rate limiter for the End of Travel Damping.' ...
  ''];
PrevEotDampg.DocUnits = 'MotNwtMtr';
PrevEotDampg.EngDT = dt.float32;
PrevEotDampg.EngMin = -20.25;
PrevEotDampg.EngMax = 20.25;
PrevEotDampg.InitRowCol = [1  1];


PrevImpctPosn = DataDict.PIM;
PrevImpctPosn.LongName = 'Previous Impact Position';
PrevImpctPosn.Description = [...
  'It is a state variable used in Ramp algorithm generating Impact Positi' ...
  'on.'];
PrevImpctPosn.DocUnits = 'HwDeg';
PrevImpctPosn.EngDT = dt.float32;
PrevImpctPosn.EngMin = -1440;
PrevImpctPosn.EngMax = 1440;
PrevImpctPosn.InitRowCol = [1  1];


PrevRackTrvlLimrEna = DataDict.PIM;
PrevRackTrvlLimrEna.LongName = 'Previous Rack Travel Limiter Enable';
PrevRackTrvlLimrEna.Description = [...
  'It shows the previous state of the Rack Travel Limiter enable state, w' ...
  'hich indicates whether the Rack Travel Limiter is enabled or disabled ' ...
  'and affects the Velocity Impact.'];
PrevRackTrvlLimrEna.DocUnits = 'Cnt';
PrevRackTrvlLimrEna.EngDT = dt.lgc;
PrevRackTrvlLimrEna.EngMin = 0;
PrevRackTrvlLimrEna.EngMax = 1;
PrevRackTrvlLimrEna.InitRowCol = [1  1];


PrevRackTrvlLimrInin = DataDict.PIM;
PrevRackTrvlLimrInin.LongName = 'Previous Rack Travel Limiter Initialization';
PrevRackTrvlLimrInin.Description = [...
  'It shows the previous state of the Rack Travel Limiter Initialization,' ...
  ' which reflects whether the Handwheel Position reaches or passes the L' ...
  'imit Position.'];
PrevRackTrvlLimrInin.DocUnits = 'Cnt';
PrevRackTrvlLimrInin.EngDT = dt.lgc;
PrevRackTrvlLimrInin.EngMin = 0;
PrevRackTrvlLimrInin.EngMax = 1;
PrevRackTrvlLimrInin.InitRowCol = [1  1];


PrevSoftEndStopSt = DataDict.PIM;
PrevSoftEndStopSt.LongName = 'Previous Soft End State State';
PrevSoftEndStopSt.Description = [...
  'It is a state variable used in Soft End Stop algorithm generating Assi' ...
  'st Scale, Damping Command and Active Command. '];
PrevSoftEndStopSt.DocUnits = 'Cnt';
PrevSoftEndStopSt.EngDT = dt.u08;
PrevSoftEndStopSt.EngMin = 1;
PrevSoftEndStopSt.EngMax = 4;
PrevSoftEndStopSt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ALLSPDDAMPG_CNT_U08 = DataDict.Constant;
ALLSPDDAMPG_CNT_U08.LongName = 'All Speed Damping';
ALLSPDDAMPG_CNT_U08.Description = [...
  'It is from the first speed to the last speed, which are only used in t' ...
  'he selector to get all the element in certain column. When EotProtnHwD' ...
  'egDampgX matrix changed, this should also be changed.'];
ALLSPDDAMPG_CNT_U08.DocUnits = 'Cnt';
ALLSPDDAMPG_CNT_U08.EngDT = dt.u08;
ALLSPDDAMPG_CNT_U08.EngVal =  ...
   [0                1                2                3];
ALLSPDDAMPG_CNT_U08.Define = 'Local';


ALLSPDGAIN_CNT_U08 = DataDict.Constant;
ALLSPDGAIN_CNT_U08.LongName = 'All Speed Gain';
ALLSPDGAIN_CNT_U08.Description = [...
  'It is from the first speed to the last speed, which are only used in t' ...
  'he selector to get all the element in certain column. When EotProtnEtr' ...
  'GainX matrix changed, this should also be changed.'];
ALLSPDGAIN_CNT_U08.DocUnits = 'Cnt';
ALLSPDGAIN_CNT_U08.EngDT = dt.u08;
ALLSPDGAIN_CNT_U08.EngVal =  ...
   [0                1                2                3                4];
ALLSPDGAIN_CNT_U08.Define = 'Local';


ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


DISTLPFILFRQ_HZ_F32 = DataDict.Constant;
DISTLPFILFRQ_HZ_F32.LongName = 'Disable State Lowpass Filter Frequency';
DISTLPFILFRQ_HZ_F32.Description = [...
  '5 Hz cutoff frequency is used in the Filter generating End of Travel A' ...
  'ssist Scale when the Soft End Stop State is Disabled case.'];
DISTLPFILFRQ_HZ_F32.DocUnits = 'Hz';
DISTLPFILFRQ_HZ_F32.EngDT = dt.float32;
DISTLPFILFRQ_HZ_F32.EngVal = 5;
DISTLPFILFRQ_HZ_F32.Define = 'Local';


EOTDAMPGLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
EOTDAMPGLOLIM_MOTNWTMTR_F32.LongName = 'End of Travel Damping Low Limit';
EOTDAMPGLOLIM_MOTNWTMTR_F32.Description = [...
  'Minimum allowable output damping command.'];
EOTDAMPGLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
EOTDAMPGLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
EOTDAMPGLOLIM_MOTNWTMTR_F32.EngVal = 0;
EOTDAMPGLOLIM_MOTNWTMTR_F32.Define = 'Local';


EOTGAINHILIM_ULS_F32 = DataDict.Constant;
EOTGAINHILIM_ULS_F32.LongName = 'End of Travel Gain High Limit';
EOTGAINHILIM_ULS_F32.Description = [...
  'Maximum allowable output gain value.'];
EOTGAINHILIM_ULS_F32.DocUnits = 'Uls';
EOTGAINHILIM_ULS_F32.EngDT = dt.float32;
EOTGAINHILIM_ULS_F32.EngVal = 1;
EOTGAINHILIM_ULS_F32.Define = 'Local';


EOTGAINLOLIM_ULS_F32 = DataDict.Constant;
EOTGAINLOLIM_ULS_F32.LongName = 'End of Travel Gain Low Limit';
EOTGAINLOLIM_ULS_F32.Description = [...
  'Minimum allowable output gain value.'];
EOTGAINLOLIM_ULS_F32.DocUnits = 'Uls';
EOTGAINLOLIM_ULS_F32.EngDT = dt.float32;
EOTGAINLOLIM_ULS_F32.EngVal = 0;
EOTGAINLOLIM_ULS_F32.Define = 'Local';


FIRSTPTDAMPG_CNT_U08 = DataDict.Constant;
FIRSTPTDAMPG_CNT_U08.LongName = 'First Point Damping';
FIRSTPTDAMPG_CNT_U08.Description = [...
  'It is used only for the index of the first point in the selector. When' ...
  ' EotProtnHwDegDampgX matrix changed, this should also be changed.'];
FIRSTPTDAMPG_CNT_U08.DocUnits = 'Cnt';
FIRSTPTDAMPG_CNT_U08.EngDT = dt.u08;
FIRSTPTDAMPG_CNT_U08.EngVal = 0;
FIRSTPTDAMPG_CNT_U08.Define = 'Local';


HWTQSCAY_ULS_U8P8 = DataDict.Constant;
HWTQSCAY_ULS_U8P8.LongName = 'Handwheel Torque Scale Y';
HWTQSCAY_ULS_U8P8.Description = [...
  'It is the Y table of Torque Gain Interpolation. It was hard codedbefor' ...
  'e and converted to a constant in this version.'];
HWTQSCAY_ULS_U8P8.DocUnits = 'Uls';
HWTQSCAY_ULS_U8P8.EngDT = dt.u8p8;
HWTQSCAY_ULS_U8P8.EngVal =  ...
   [0                1];
HWTQSCAY_ULS_U8P8.Define = 'Local';


LASTPTGAIN_CNT_U08 = DataDict.Constant;
LASTPTGAIN_CNT_U08.LongName = 'Last Point Gain';
LASTPTGAIN_CNT_U08.Description = [...
  'It is used only for the index of the last point, which is the 4th in t' ...
  'his case, in the selector. When EotProtnEntrGainX matrix changed, this' ...
  ' should also be changed.'];
LASTPTGAIN_CNT_U08.DocUnits = 'Cnt';
LASTPTGAIN_CNT_U08.EngDT = dt.u08;
LASTPTGAIN_CNT_U08.EngVal = 3;
LASTPTGAIN_CNT_U08.Define = 'Local';


SOFTENDSTOPSTDI_CNT_U08 = DataDict.Constant;
SOFTENDSTOPSTDI_CNT_U08.LongName = 'Disabled Soft End Stop State';
SOFTENDSTOPSTDI_CNT_U08.Description = 'State machine first priority.';
SOFTENDSTOPSTDI_CNT_U08.DocUnits = 'Cnt';
SOFTENDSTOPSTDI_CNT_U08.EngDT = dt.u08;
SOFTENDSTOPSTDI_CNT_U08.EngVal = 1;
SOFTENDSTOPSTDI_CNT_U08.Define = 'Local';


SOFTENDSTOPSTENTR_CNT_U08 = DataDict.Constant;
SOFTENDSTOPSTENTR_CNT_U08.LongName = 'Entering Soft End Stop State';
SOFTENDSTOPSTENTR_CNT_U08.Description = 'State machine third priority.';
SOFTENDSTOPSTENTR_CNT_U08.DocUnits = 'Cnt';
SOFTENDSTOPSTENTR_CNT_U08.EngDT = dt.u08;
SOFTENDSTOPSTENTR_CNT_U08.EngVal = 3;
SOFTENDSTOPSTENTR_CNT_U08.Define = 'Local';


SOFTENDSTOPSTEXIT_CNT_U08 = DataDict.Constant;
SOFTENDSTOPSTEXIT_CNT_U08.LongName = 'Exiting Soft End Stop State';
SOFTENDSTOPSTEXIT_CNT_U08.Description = 'State machine fourth priority.';
SOFTENDSTOPSTEXIT_CNT_U08.DocUnits = 'Cnt';
SOFTENDSTOPSTEXIT_CNT_U08.EngDT = dt.u08;
SOFTENDSTOPSTEXIT_CNT_U08.EngVal = 4;
SOFTENDSTOPSTEXIT_CNT_U08.Define = 'Local';


SOFTENDSTOPSTNORM_CNT_U08 = DataDict.Constant;
SOFTENDSTOPSTNORM_CNT_U08.LongName = 'Normal Soft End Stop State';
SOFTENDSTOPSTNORM_CNT_U08.Description = 'State machine second priority.';
SOFTENDSTOPSTNORM_CNT_U08.DocUnits = 'Cnt';
SOFTENDSTOPSTNORM_CNT_U08.EngDT = dt.u08;
SOFTENDSTOPSTNORM_CNT_U08.EngVal = 2;
SOFTENDSTOPSTNORM_CNT_U08.Define = 'Local';


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


ZEROMOTTQCMD_MOTNWTMTR_F32 = DataDict.Constant;
ZEROMOTTQCMD_MOTNWTMTR_F32.LongName = 'Zero Motor Torque Command';
ZEROMOTTQCMD_MOTNWTMTR_F32.Description = [...
  'It defines the Motor Torque Command with zero value.'];
ZEROMOTTQCMD_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
ZEROMOTTQCMD_MOTNWTMTR_F32.EngDT = dt.float32;
ZEROMOTTQCMD_MOTNWTMTR_F32.EngVal = 0;
ZEROMOTTQCMD_MOTNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
