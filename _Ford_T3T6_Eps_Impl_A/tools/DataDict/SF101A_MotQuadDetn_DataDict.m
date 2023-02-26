%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-May-2017 13:37:46       %
%                                  Created with tool release: 2.56.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF101A = DataDict.FDD;
SF101A.Version = '1.2.X';
SF101A.LongName = 'Motor Quadrant Detection';
SF101A.ShoName  = 'MotQuadDetn';
SF101A.DesignASIL = 'D';
SF101A.Description = [...
  'The Motor Quadrant Detection function generates an estimate of the mot' ...
  'or operating quadrant based on the sign of the Limited Motor Torque Co' ...
  'mmand and the direction of motor shaft motion.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotQuadDetnInit1 = DataDict.Runnable;
MotQuadDetnInit1.Context = 'Rte';
MotQuadDetnInit1.TimeStep = 0;
MotQuadDetnInit1.Description = 'Initialization function';

MotQuadDetnPer1 = DataDict.Runnable;
MotQuadDetnPer1.Context = 'Rte';
MotQuadDetnPer1.TimeStep = 0.002;
MotQuadDetnPer1.Description = 'Function run periodicaly';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotAgCumvAlgndMrf = DataDict.IpSignal;
MotAgCumvAlgndMrf.LongName = 'Motor Angle Cumulative Aligned MRF';
MotAgCumvAlgndMrf.Description = [...
  'Aligned Motor Angle Mechanical Degrees in MRF'];
MotAgCumvAlgndMrf.DocUnits = 'MotDeg';
MotAgCumvAlgndMrf.EngDT = dt.s18p13;
MotAgCumvAlgndMrf.EngInit = 0;
MotAgCumvAlgndMrf.EngMin = -262144;
MotAgCumvAlgndMrf.EngMax = 262143.9998;
MotAgCumvAlgndMrf.ReadIn = {'MotQuadDetnPer1'};
MotAgCumvAlgndMrf.ReadType = 'Rte';


MotTqCmd = DataDict.IpSignal;
MotTqCmd.LongName = 'Motor Torque Command';
MotTqCmd.Description = 'Torque Command';
MotTqCmd.DocUnits = 'MotNwtMtr';
MotTqCmd.EngDT = dt.float32;
MotTqCmd.EngInit = 0;
MotTqCmd.EngMin = -8.8;
MotTqCmd.EngMax = 8.8;
MotTqCmd.ReadIn = {'MotQuadDetnPer1'};
MotTqCmd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotDirInsts = DataDict.OpSignal;
MotDirInsts.LongName = 'Motor Direction Instantaneous';
MotDirInsts.Description = [...
  'Current calculated motor direction.'];
MotDirInsts.DocUnits = 'Cnt';
MotDirInsts.SwcShoName = 'MotQuadDetn';
MotDirInsts.EngDT = dt.s08;
MotDirInsts.EngInit = 1;
MotDirInsts.EngMin = -1;
MotDirInsts.EngMax = 1;
MotDirInsts.TestTolerance = 0;
MotDirInsts.WrittenIn = {'MotQuadDetnPer1'};
MotDirInsts.WriteType = 'Rte';


MotQuad = DataDict.OpSignal;
MotQuad.LongName = 'Motor Quadrant';
MotQuad.Description = [...
  'Current calculated quadrant of motor operation.'];
MotQuad.DocUnits = 'Cnt';
MotQuad.SwcShoName = 'MotQuadDetn';
MotQuad.EngDT = enum.MotQuad1;
MotQuad.EngInit = MotQuad1.MOTQUAD_QUAD1;
MotQuad.EngMin = MotQuad1.MOTQUAD_QUAD1;
MotQuad.EngMax = MotQuad1.MOTQUAD_QUAD4;
MotQuad.TestTolerance = 0;
MotQuad.WrittenIn = {'MotQuadDetnPer1'};
MotQuad.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotQuadDetnMotDirHysInsts = DataDict.Calibration;
MotQuadDetnMotDirHysInsts.LongName = 'Motor Direction Hysteresis Instantaneous';
MotQuadDetnMotDirHysInsts.Description = [...
  'Calibration used to determine if the change motor torque magnitude is ' ...
  'big enough to determine the sign of the motor torque.'];
MotQuadDetnMotDirHysInsts.DocUnits = 'MotDeg';
MotQuadDetnMotDirHysInsts.EngDT = dt.s18p13;
MotQuadDetnMotDirHysInsts.EngVal = 2.5;
MotQuadDetnMotDirHysInsts.EngMin = 0;
MotQuadDetnMotDirHysInsts.EngMax = 6.25;
MotQuadDetnMotDirHysInsts.Cardinality = 'Cmn';
MotQuadDetnMotDirHysInsts.CustomerVisible = false;
MotQuadDetnMotDirHysInsts.Online = false;
MotQuadDetnMotDirHysInsts.Impact = 'H';
MotQuadDetnMotDirHysInsts.TuningOwner = 'TqCtrl';
MotQuadDetnMotDirHysInsts.GraphLink = {''};
MotQuadDetnMotDirHysInsts.Monotony = 'None';
MotQuadDetnMotDirHysInsts.MaxGrad = 0;
MotQuadDetnMotDirHysInsts.PortName = 'MotQuadDetnMotDirHysInsts';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotQuadDetnMotAgCumvDelta = DataDict.Display;
dMotQuadDetnMotAgCumvDelta.LongName = 'Change in Cumulative Motor Angle';
dMotQuadDetnMotAgCumvDelta.Description = [...
  'Display variable for the Change in Cumulative Motor Angle '];
dMotQuadDetnMotAgCumvDelta.DocUnits = 'MotDeg';
dMotQuadDetnMotAgCumvDelta.EngDT = dt.s18p13;
dMotQuadDetnMotAgCumvDelta.EngMin = -262144;
dMotQuadDetnMotAgCumvDelta.EngMax = 262143.9998;
dMotQuadDetnMotAgCumvDelta.InitRowCol = [1  1];


dMotQuadDetnTqCmdSign = DataDict.Display;
dMotQuadDetnTqCmdSign.LongName = 'Motor Torque Command Sign';
dMotQuadDetnTqCmdSign.Description = [...
  'Display variable for Motor Torque Command Sign '];
dMotQuadDetnTqCmdSign.DocUnits = 'Cnt';
dMotQuadDetnTqCmdSign.EngDT = dt.s08;
dMotQuadDetnTqCmdSign.EngMin = -1;
dMotQuadDetnTqCmdSign.EngMax = 1;
dMotQuadDetnTqCmdSign.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAgCumvPrev = DataDict.PIM;
MotAgCumvPrev.LongName = 'Motor Position Cummulative Previous';
MotAgCumvPrev.Description = [...
  'State variable to hold the previously read Cummulative Motor Position.' ...
  ''];
MotAgCumvPrev.DocUnits = 'MotDeg';
MotAgCumvPrev.EngDT = dt.s18p13;
MotAgCumvPrev.EngMin = -262144;
MotAgCumvPrev.EngMax = 262143.9998;
MotAgCumvPrev.InitRowCol = [1  1];


MotDirInstsPrev = DataDict.PIM;
MotDirInstsPrev.LongName = 'Motor Direction Instantaneous Previous';
MotDirInstsPrev.Description = [...
  'State variable to hold the previously calculated Motor Direction.'];
MotDirInstsPrev.DocUnits = 'Cnt';
MotDirInstsPrev.EngDT = dt.s08;
MotDirInstsPrev.EngMin = -1;
MotDirInstsPrev.EngMax = 1;
MotDirInstsPrev.InitRowCol = [1  1];


MotTqCmdSignPrev = DataDict.PIM;
MotTqCmdSignPrev.LongName = 'Motor Torque Command Sign Previous';
MotTqCmdSignPrev.Description = [...
  'State variable to hold the previously calculated Motor Torque Command ' ...
  'Sign.'];
MotTqCmdSignPrev.DocUnits = 'Cnt';
MotTqCmdSignPrev.EngDT = dt.s08;
MotTqCmdSignPrev.EngMin = -1;
MotTqCmdSignPrev.EngMax = 1;
MotTqCmdSignPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
MOTTQCMDTOLR_MOTNWTMTR_F32 = DataDict.Constant;
MOTTQCMDTOLR_MOTNWTMTR_F32.LongName = 'Motor Torque Command Tolerance';
MOTTQCMDTOLR_MOTNWTMTR_F32.Description = [...
  'Value used to decide if Torque Command has changed enough to calculate' ...
  ' a the torque sign.'];
MOTTQCMDTOLR_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
MOTTQCMDTOLR_MOTNWTMTR_F32.EngDT = dt.float32;
MOTTQCMDTOLR_MOTNWTMTR_F32.EngVal = 0.00390625;
MOTTQCMDTOLR_MOTNWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
