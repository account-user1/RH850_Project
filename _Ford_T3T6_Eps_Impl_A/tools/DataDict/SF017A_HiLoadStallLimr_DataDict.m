%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Mar-2018 14:41:02       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF017A = DataDict.FDD;
SF017A.Version = '3.1.X';
SF017A.LongName = 'High Load Stall Limiter';
SF017A.ShoName  = 'HiLoadStallLimr';
SF017A.DesignASIL = 'QM';
SF017A.Description = [...
  'This function protects the system from prolonged intervals of high ass' ...
  'ist torque at near-stall conditions.  In other words, it quickly limit' ...
  's large torque commands if the motor velocity is below a calibratable ' ...
  'threshold. The High Load Stall Limiter function uses a low-pass filter' ...
  ' (LPF) and a torque limit table to reduce the maximum allowed torque c' ...
  'ommand under certain operating conditions.  When motor velocity is equ' ...
  'al to or falls below the calibratable threshold, the torque command is' ...
  ' applied to the input of the low-pass filter.  The output of the filte' ...
  'r ramps up and indexes into the torque limit table.  The output of thi' ...
  's table is the maximum allowed torque command.  A slew limit calibrati' ...
  'on governs the transition rate of the table output.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HiLoadStallLimrInit1 = DataDict.Runnable;
HiLoadStallLimrInit1.Context = 'Rte';
HiLoadStallLimrInit1.TimeStep = 0;
HiLoadStallLimrInit1.Description = 'Initialization';

HiLoadStallLimrPer1 = DataDict.Runnable;
HiLoadStallLimrPer1.Context = 'Rte';
HiLoadStallLimrPer1.TimeStep = 0.002;
HiLoadStallLimrPer1.Description = '2 msec execution';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DualEcuFltMtgtnEna = DataDict.IpSignal;
DualEcuFltMtgtnEna.LongName = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.Description = 'Dual ECU Fault Mitigation Enable';
DualEcuFltMtgtnEna.DocUnits = 'Cnt';
DualEcuFltMtgtnEna.EngDT = dt.lgc;
DualEcuFltMtgtnEna.EngInit = 0;
DualEcuFltMtgtnEna.EngMin = 0;
DualEcuFltMtgtnEna.EngMax = 1;
DualEcuFltMtgtnEna.ReadIn = {'HiLoadStallLimrPer1'};
DualEcuFltMtgtnEna.ReadType = 'Rte';


MotAndThermProtnLoaMod = DataDict.IpSignal;
MotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss Of Assist Mode';
MotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function'];
MotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotAndThermProtnLoaMod.EngDT = dt.u08;
MotAndThermProtnLoaMod.EngInit = 0;
MotAndThermProtnLoaMod.EngMin = 0;
MotAndThermProtnLoaMod.EngMax = 255;
MotAndThermProtnLoaMod.ReadIn = {'HiLoadStallLimrInit1','HiLoadStallLimrPer1'};
MotAndThermProtnLoaMod.ReadType = 'Rte';


MotTqCmdLimdPreStall = DataDict.IpSignal;
MotTqCmdLimdPreStall.LongName = 'Motor Torque Command Limited Pre-Stall';
MotTqCmdLimdPreStall.Description = [...
  'Motor Torque Command Limited Pre-Stall'];
MotTqCmdLimdPreStall.DocUnits = 'MotNwtMtr';
MotTqCmdLimdPreStall.EngDT = dt.float32;
MotTqCmdLimdPreStall.EngInit = 0;
MotTqCmdLimdPreStall.EngMin = 0;
MotTqCmdLimdPreStall.EngMax = 8.8;
MotTqCmdLimdPreStall.ReadIn = {'HiLoadStallLimrPer1'};
MotTqCmdLimdPreStall.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Core Reference Frame';
MotVelCrf.Description = [...
  'Motor Velocity Core Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'HiLoadStallLimrPer1'};
MotVelCrf.ReadType = 'Rte';


StallMotTqLimDi = DataDict.IpSignal;
StallMotTqLimDi.LongName = 'Stall Motor Torque Limit Disable';
StallMotTqLimDi.Description = 'Motor Torque Stall Limit Disable';
StallMotTqLimDi.DocUnits = 'Cnt';
StallMotTqLimDi.EngDT = dt.lgc;
StallMotTqLimDi.EngInit = 0;
StallMotTqLimDi.EngMin = 0;
StallMotTqLimDi.EngMax = 1;
StallMotTqLimDi.ReadIn = {'HiLoadStallLimrPer1'};
StallMotTqLimDi.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
StallMotTqLim = DataDict.OpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.Description = [...
  'Limited assist torque command based on high torque levels at low motor' ...
  ' speeds.'];
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.SwcShoName = 'HiLoadStallLimr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.TestTolerance = 0.000488281;
StallMotTqLim.WrittenIn = {'HiLoadStallLimrPer1'};
StallMotTqLim.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq = DataDict.Calibration;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.LongName = 'FET Mitigation Enable High Load Stall Limiter Motor Torque Command Filter Frequency';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.Description = [...
  '(Calibration value to set cutoff frequency of the low pass filter.'];
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.DocUnits = 'Hz';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.EngDT = dt.float32;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.EngVal = 2;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.EngMin = 0.01;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.EngMax = 10;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.Cardinality = 'Inin';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.CustomerVisible = false;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.Online = false;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.Impact = 'H';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.TuningOwner = 'ThermMngt';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.GraphLink = {''};
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.Monotony = 'None';
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.MaxGrad = 0;
HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq.PortName = 'HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq';


HiLoadStallLimrMotTqCmdFilFrq = DataDict.Calibration;
HiLoadStallLimrMotTqCmdFilFrq.LongName = 'End of Travel Thermal Part Low Pass Filter';
HiLoadStallLimrMotTqCmdFilFrq.Description = [...
  '(Calibration value to set cutoff frequency of the low pass filter.'];
HiLoadStallLimrMotTqCmdFilFrq.DocUnits = 'Hz';
HiLoadStallLimrMotTqCmdFilFrq.EngDT = dt.float32;
HiLoadStallLimrMotTqCmdFilFrq.EngVal = 2;
HiLoadStallLimrMotTqCmdFilFrq.EngMin = 0.01;
HiLoadStallLimrMotTqCmdFilFrq.EngMax = 10;
HiLoadStallLimrMotTqCmdFilFrq.Cardinality = 'Inin';
HiLoadStallLimrMotTqCmdFilFrq.CustomerVisible = false;
HiLoadStallLimrMotTqCmdFilFrq.Online = false;
HiLoadStallLimrMotTqCmdFilFrq.Impact = 'H';
HiLoadStallLimrMotTqCmdFilFrq.TuningOwner = 'ThermMngt';
HiLoadStallLimrMotTqCmdFilFrq.GraphLink = {''};
HiLoadStallLimrMotTqCmdFilFrq.Monotony = 'None';
HiLoadStallLimrMotTqCmdFilFrq.MaxGrad = 0;
HiLoadStallLimrMotTqCmdFilFrq.PortName = 'HiLoadStallLimrMotTqCmdFilFrq';


HiLoadStallLimrMotVelMgnThd = DataDict.Calibration;
HiLoadStallLimrMotVelMgnThd.LongName = 'High Load Stall Limiter Motor Velocity Magnitude Threshold';
HiLoadStallLimrMotVelMgnThd.Description = [...
  'Calibration used to define a breakpoint motor velocity to determine to' ...
  'rque input into low pass filter.'];
HiLoadStallLimrMotVelMgnThd.DocUnits = 'MotRadPerSec';
HiLoadStallLimrMotVelMgnThd.EngDT = dt.float32;
HiLoadStallLimrMotVelMgnThd.EngVal =  ...
   [1.375            1.375];
HiLoadStallLimrMotVelMgnThd.EngMin = -1350;
HiLoadStallLimrMotVelMgnThd.EngMax = 1350;
HiLoadStallLimrMotVelMgnThd.Cardinality = 'Inin';
HiLoadStallLimrMotVelMgnThd.CustomerVisible = false;
HiLoadStallLimrMotVelMgnThd.Online = false;
HiLoadStallLimrMotVelMgnThd.Impact = 'H';
HiLoadStallLimrMotVelMgnThd.TuningOwner = 'ThermMngt';
HiLoadStallLimrMotVelMgnThd.GraphLink = {''};
HiLoadStallLimrMotVelMgnThd.Monotony = 'None';
HiLoadStallLimrMotVelMgnThd.MaxGrad = 0;
HiLoadStallLimrMotVelMgnThd.PortName = 'HiLoadStallLimrMotVelMgnThd';


HiLoadStallLimrStallMotTqCmdFetMtgtnLimX = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.LongName = 'Motor Torque Stall Fet Mitigation Limit X';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.Description = [...
  'Table to determine Y-axis of EOT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.EngVal =  ...
   [0              2.2              2.5              2.8                3                3];
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.EngMin = 0;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.Cardinality = 'Inin';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.Online = false;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.Impact = 'H';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.GraphLink = {''};
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.Monotony = 'Increasing';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimX.PortName = 'HiLoadStallLimrStallMotTqCmdFetMtgtnLimX';


HiLoadStallLimrStallMotTqCmdFetMtgtnLimY = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.LongName = 'Motor Torque Stall Fet Mitigation Limit Y';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.Description = [...
  'Table to determine X-axis (Filtered Modified PreLimit Torque) of the E' ...
  'OT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.EngVal =  ...
   [3                3                2                1                0                0];
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.EngMin = 0;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.Cardinality = 'Inin';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.Online = false;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.Impact = 'H';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.GraphLink = {'HiLoadStallLimrStallMotTqCmdFetMtgtnLimX'};
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.Monotony = 'Decreasing';
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdFetMtgtnLimY.PortName = 'HiLoadStallLimrStallMotTqCmdFetMtgtnLimY';


HiLoadStallLimrStallMotTqCmdLimX = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdLimX.LongName = 'Motor Torque Stall Limit X';
HiLoadStallLimrStallMotTqCmdLimX.Description = [...
  'Table to determine Y-axis of EOT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdLimX.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdLimX.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdLimX.EngVal =  ...
   [0              2.2              2.5              2.8                3                3];
HiLoadStallLimrStallMotTqCmdLimX.EngMin = 0;
HiLoadStallLimrStallMotTqCmdLimX.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdLimX.Cardinality = 'Inin';
HiLoadStallLimrStallMotTqCmdLimX.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdLimX.Online = false;
HiLoadStallLimrStallMotTqCmdLimX.Impact = 'H';
HiLoadStallLimrStallMotTqCmdLimX.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdLimX.GraphLink = {''};
HiLoadStallLimrStallMotTqCmdLimX.Monotony = 'Increasing';
HiLoadStallLimrStallMotTqCmdLimX.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdLimX.PortName = 'HiLoadStallLimrStallMotTqCmdLimX';


HiLoadStallLimrStallMotTqCmdLimY = DataDict.Calibration;
HiLoadStallLimrStallMotTqCmdLimY.LongName = 'Motor Torque Stall Limit Y';
HiLoadStallLimrStallMotTqCmdLimY.Description = [...
  'Table to determine X-axis (Filtered Modified PreLimit Torque) of the E' ...
  'OT Thermal Protection Limit Table.'];
HiLoadStallLimrStallMotTqCmdLimY.DocUnits = 'MotNwtMtr';
HiLoadStallLimrStallMotTqCmdLimY.EngDT = dt.u8p8;
HiLoadStallLimrStallMotTqCmdLimY.EngVal =  ...
   [3                3                2                1                0                0];
HiLoadStallLimrStallMotTqCmdLimY.EngMin = 0;
HiLoadStallLimrStallMotTqCmdLimY.EngMax = 8.8;
HiLoadStallLimrStallMotTqCmdLimY.Cardinality = 'Inin';
HiLoadStallLimrStallMotTqCmdLimY.CustomerVisible = false;
HiLoadStallLimrStallMotTqCmdLimY.Online = false;
HiLoadStallLimrStallMotTqCmdLimY.Impact = 'H';
HiLoadStallLimrStallMotTqCmdLimY.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqCmdLimY.GraphLink = {'HiLoadStallLimrStallMotTqCmdLimX'};
HiLoadStallLimrStallMotTqCmdLimY.Monotony = 'Decreasing';
HiLoadStallLimrStallMotTqCmdLimY.MaxGrad = 8.8;
HiLoadStallLimrStallMotTqCmdLimY.PortName = 'HiLoadStallLimrStallMotTqCmdLimY';


HiLoadStallLimrStallMotTqLimSlewRate = DataDict.Calibration;
HiLoadStallLimrStallMotTqLimSlewRate.LongName = 'Motor Torque Stall Limit Slew Rate';
HiLoadStallLimrStallMotTqLimSlewRate.Description = [...
  'Calibration to determine slew rate.'];
HiLoadStallLimrStallMotTqLimSlewRate.DocUnits = 'MotNwtMtrPerSec';
HiLoadStallLimrStallMotTqLimSlewRate.EngDT = dt.float32;
HiLoadStallLimrStallMotTqLimSlewRate.EngVal =  ...
   [0.101563         0.101563];
HiLoadStallLimrStallMotTqLimSlewRate.EngMin = 0.008;
HiLoadStallLimrStallMotTqLimSlewRate.EngMax = 8;
HiLoadStallLimrStallMotTqLimSlewRate.Cardinality = 'Inin';
HiLoadStallLimrStallMotTqLimSlewRate.CustomerVisible = false;
HiLoadStallLimrStallMotTqLimSlewRate.Online = false;
HiLoadStallLimrStallMotTqLimSlewRate.Impact = 'H';
HiLoadStallLimrStallMotTqLimSlewRate.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallMotTqLimSlewRate.GraphLink = {''};
HiLoadStallLimrStallMotTqLimSlewRate.Monotony = 'None';
HiLoadStallLimrStallMotTqLimSlewRate.MaxGrad = 0;
HiLoadStallLimrStallMotTqLimSlewRate.PortName = 'HiLoadStallLimrStallMotTqLimSlewRate';


HiLoadStallLimrStallThermLimSca = DataDict.Calibration;
HiLoadStallLimrStallThermLimSca.LongName = 'Thermal Limit Scaling duting Inverter LoA or Dual ECU Fault';
HiLoadStallLimrStallThermLimSca.Description = [...
  'Thermal Limit Scaling duting Inverter LoA or Dual ECU Fault'];
HiLoadStallLimrStallThermLimSca.DocUnits = 'Uls';
HiLoadStallLimrStallThermLimSca.EngDT = dt.float32;
HiLoadStallLimrStallThermLimSca.EngVal = 0.5;
HiLoadStallLimrStallThermLimSca.EngMin = 0;
HiLoadStallLimrStallThermLimSca.EngMax = 1;
HiLoadStallLimrStallThermLimSca.Cardinality = 'Inin';
HiLoadStallLimrStallThermLimSca.CustomerVisible = false;
HiLoadStallLimrStallThermLimSca.Online = false;
HiLoadStallLimrStallThermLimSca.Impact = 'H';
HiLoadStallLimrStallThermLimSca.TuningOwner = 'ThermMngt';
HiLoadStallLimrStallThermLimSca.GraphLink = {''};
HiLoadStallLimrStallThermLimSca.Monotony = 'None';
HiLoadStallLimrStallThermLimSca.MaxGrad = 0;
HiLoadStallLimrStallThermLimSca.PortName = 'HiLoadStallLimrStallThermLimSca';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHiLoadStallLimrStallMotTqCmd = DataDict.Display;
dHiLoadStallLimrStallMotTqCmd.LongName = 'Stall Motor Torque Command';
dHiLoadStallLimrStallMotTqCmd.Description = [...
  'Modified Prelimit Torque,  the input to low pass filter.  Value equals' ...
  ' either PreLimitForStall or Zero, depending on motor velocity.'];
dHiLoadStallLimrStallMotTqCmd.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqCmd.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqCmd.EngMin = 0;
dHiLoadStallLimrStallMotTqCmd.EngMax = 8.8;
dHiLoadStallLimrStallMotTqCmd.InitRowCol = [1  1];


dHiLoadStallLimrStallMotTqCmdFild = DataDict.Display;
dHiLoadStallLimrStallMotTqCmdFild.LongName = 'Stall Motor Torque Command Filtered';
dHiLoadStallLimrStallMotTqCmdFild.Description = [...
  'Modified Prelimit Torque, after filtering.'];
dHiLoadStallLimrStallMotTqCmdFild.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqCmdFild.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqCmdFild.EngMin = 0;
dHiLoadStallLimrStallMotTqCmdFild.EngMax = 8.8;
dHiLoadStallLimrStallMotTqCmdFild.InitRowCol = [1  1];


dHiLoadStallLimrStallMotTqLim = DataDict.Display;
dHiLoadStallLimrStallMotTqLim.LongName = 'Stall Motor Torque Limit';
dHiLoadStallLimrStallMotTqLim.Description = [...
  'Torque command limit, prior to rate-limiting.'];
dHiLoadStallLimrStallMotTqLim.DocUnits = 'MotNwtMtr';
dHiLoadStallLimrStallMotTqLim.EngDT = dt.float32;
dHiLoadStallLimrStallMotTqLim.EngMin = 0;
dHiLoadStallLimrStallMotTqLim.EngMax = 8.8;
dHiLoadStallLimrStallMotTqLim.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
FetLoaMtgtnCalIdx = DataDict.PIM;
FetLoaMtgtnCalIdx.LongName = 'FET Loss Of Assist Mitigation Calibration Index';
FetLoaMtgtnCalIdx.Description = [...
  'Index being used to select the appropriate calibrations based on healt' ...
  'hy or faulty state'];
FetLoaMtgtnCalIdx.DocUnits = 'Cnt';
FetLoaMtgtnCalIdx.EngDT = dt.u08;
FetLoaMtgtnCalIdx.EngMin = 0;
FetLoaMtgtnCalIdx.EngMax = 1;
FetLoaMtgtnCalIdx.InitRowCol = [1  1];


StallMotTqCmdFetMtgtnFil = DataDict.PIM;
StallMotTqCmdFetMtgtnFil.LongName = 'Stall Motor Torque Command FET Mitigation Filter';
StallMotTqCmdFetMtgtnFil.Description = [...
  'Filter state variable structure for the Stall Motor Torque Command FET' ...
  ' Mitigation.'];
StallMotTqCmdFetMtgtnFil.DocUnits = 'Cnt';
StallMotTqCmdFetMtgtnFil.EngDT = struct.FilLpRec1;
StallMotTqCmdFetMtgtnFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
StallMotTqCmdFetMtgtnFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
StallMotTqCmdFetMtgtnFil.InitRowCol = [1  1];


StallMotTqCmdFil = DataDict.PIM;
StallMotTqCmdFil.LongName = 'Stall Motor Torque Command Filter';
StallMotTqCmdFil.Description = [...
  'Filter state variable structure for the Stall Motor Torque Command.'];
StallMotTqCmdFil.DocUnits = 'Cnt';
StallMotTqCmdFil.EngDT = struct.FilLpRec1;
StallMotTqCmdFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
StallMotTqCmdFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
StallMotTqCmdFil.InitRowCol = [1  1];


StallMotTqLimFetMtgtnPrev = DataDict.PIM;
StallMotTqLimFetMtgtnPrev.LongName = 'Motor Torque Stall Limit FET Mitigation Previous';
StallMotTqLimFetMtgtnPrev.Description = [...
  'State variable used to rate limit the Motor Torque Stall Limit.'];
StallMotTqLimFetMtgtnPrev.DocUnits = 'MotNwtMtr';
StallMotTqLimFetMtgtnPrev.EngDT = dt.float32;
StallMotTqLimFetMtgtnPrev.EngMin = 0;
StallMotTqLimFetMtgtnPrev.EngMax = 8.8;
StallMotTqLimFetMtgtnPrev.InitRowCol = [1  1];


StallMotTqLimPrev = DataDict.PIM;
StallMotTqLimPrev.LongName = 'Motor Torque Stall Limit Previous';
StallMotTqLimPrev.Description = [...
  'State variable used to rate limit the Motor Torque Stall Limit.'];
StallMotTqLimPrev.DocUnits = 'MotNwtMtr';
StallMotTqLimPrev.EngDT = dt.float32;
StallMotTqLimPrev.EngMin = 0;
StallMotTqLimPrev.EngMax = 8.8;
StallMotTqLimPrev.InitRowCol = [1  1];



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


FETMTGTNFLTSTSDISIDX_CNT_U08 = DataDict.Constant;
FETMTGTNFLTSTSDISIDX_CNT_U08.LongName = 'FET Mitigation Fault States Disable Index ';
FETMTGTNFLTSTSDISIDX_CNT_U08.Description = [...
  'Index value to be used when FET mitigation is disabled'];
FETMTGTNFLTSTSDISIDX_CNT_U08.DocUnits = 'Cnt';
FETMTGTNFLTSTSDISIDX_CNT_U08.EngDT = dt.u08;
FETMTGTNFLTSTSDISIDX_CNT_U08.EngVal = 0;
FETMTGTNFLTSTSDISIDX_CNT_U08.Define = 'Local';


FETMTGTNFLTSTSENAIDX_CNT_U08 = DataDict.Constant;
FETMTGTNFLTSTSENAIDX_CNT_U08.LongName = 'FET Mitigation Fault States Enable Index ';
FETMTGTNFLTSTSENAIDX_CNT_U08.Description = [...
  'Index value to be used when FET mitigation is enabled'];
FETMTGTNFLTSTSENAIDX_CNT_U08.DocUnits = 'Cnt';
FETMTGTNFLTSTSENAIDX_CNT_U08.EngDT = dt.u08;
FETMTGTNFLTSTSENAIDX_CNT_U08.EngVal = 1;
FETMTGTNFLTSTSENAIDX_CNT_U08.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
