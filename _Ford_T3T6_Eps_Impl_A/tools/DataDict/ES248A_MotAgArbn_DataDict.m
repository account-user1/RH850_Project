%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 13-Sep-2017 09:57:31       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES248A = DataDict.FDD;
ES248A.Version = '1.3.X';
ES248A.LongName = 'Motor Angle Arbitration';
ES248A.ShoName  = 'MotAgArbn';
ES248A.DesignASIL = 'D';
ES248A.Description = [...
  'This function will arbitrate between to motor angle measurements in th' ...
  'e motor control loop.  This design assumes that motor angle A is the p' ...
  'rimary sensor and will use it when possible.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAgArbnInit1 = DataDict.Runnable;
MotAgArbnInit1.Context = 'Rte';
MotAgArbnInit1.TimeStep = 0;
MotAgArbnInit1.Description = 'Intialization';

MotAgArbnPer1 = DataDict.Runnable;
MotAgArbnPer1.Context = 'NonRte';
MotAgArbnPer1.TimeStep = 'MotorControl';
MotAgArbnPer1.Description = 'Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlMotAgAMecl = DataDict.IpSignal;
MotCtrlMotAgAMecl.LongName = 'Motor Control Motor Angle A  Mechanical';
MotCtrlMotAgAMecl.Description = [...
  'Motor angle A in mechanical degrees.'];
MotCtrlMotAgAMecl.DocUnits = 'MotRev';
MotCtrlMotAgAMecl.EngDT = dt.u0p16;
MotCtrlMotAgAMecl.EngInit = 0;
MotCtrlMotAgAMecl.EngMin = 0;
MotCtrlMotAgAMecl.EngMax = 0.9999847412;
MotCtrlMotAgAMecl.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMecl.ReadType = 'NonRte';


MotCtrlMotAgAMeclQlfr = DataDict.IpSignal;
MotCtrlMotAgAMeclQlfr.LongName = 'Motor Control Motor Angle A Mechanical Qualifier';
MotCtrlMotAgAMeclQlfr.Description = 'Motor angle A qualifier. ';
MotCtrlMotAgAMeclQlfr.DocUnits = 'Cnt';
MotCtrlMotAgAMeclQlfr.EngDT = enum.SigQlfr1;
MotCtrlMotAgAMeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgAMeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgAMeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotAgAMeclQlfr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMeclQlfr.ReadType = 'NonRte';


MotCtrlMotAgAMeclRollgCntr = DataDict.IpSignal;
MotCtrlMotAgAMeclRollgCntr.LongName = 'Motor Control Motor Angle A Mechanical Rolling Counter';
MotCtrlMotAgAMeclRollgCntr.Description = 'Motor angle A rolling counter';
MotCtrlMotAgAMeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAgAMeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAgAMeclRollgCntr.EngInit = 0;
MotCtrlMotAgAMeclRollgCntr.EngMin = 0;
MotCtrlMotAgAMeclRollgCntr.EngMax = 255;
MotCtrlMotAgAMeclRollgCntr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgAMeclRollgCntr.ReadType = 'NonRte';


MotCtrlMotAgBMecl = DataDict.IpSignal;
MotCtrlMotAgBMecl.LongName = 'Motor Control Motor Angle B Mechanical';
MotCtrlMotAgBMecl.Description = [...
  'Motor angle B in mechanical degrees.'];
MotCtrlMotAgBMecl.DocUnits = 'MotRev';
MotCtrlMotAgBMecl.EngDT = dt.u0p16;
MotCtrlMotAgBMecl.EngInit = 0;
MotCtrlMotAgBMecl.EngMin = 0;
MotCtrlMotAgBMecl.EngMax = 0.9999847412;
MotCtrlMotAgBMecl.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMecl.ReadType = 'NonRte';


MotCtrlMotAgBMeclQlfr = DataDict.IpSignal;
MotCtrlMotAgBMeclQlfr.LongName = 'Motor Control Motor Angle B Mechanical Qualifier';
MotCtrlMotAgBMeclQlfr.Description = 'Motor angle B qualifier.';
MotCtrlMotAgBMeclQlfr.DocUnits = 'Cnt';
MotCtrlMotAgBMeclQlfr.EngDT = enum.SigQlfr1;
MotCtrlMotAgBMeclQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgBMeclQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCtrlMotAgBMeclQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCtrlMotAgBMeclQlfr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMeclQlfr.ReadType = 'NonRte';


MotCtrlMotAgBMeclRollgCntr = DataDict.IpSignal;
MotCtrlMotAgBMeclRollgCntr.LongName = 'Motor Control Motor Angle B Mechanical Rolling Counter';
MotCtrlMotAgBMeclRollgCntr.Description = 'Motor angle B rolling counter';
MotCtrlMotAgBMeclRollgCntr.DocUnits = 'Cnt';
MotCtrlMotAgBMeclRollgCntr.EngDT = dt.u08;
MotCtrlMotAgBMeclRollgCntr.EngInit = 0;
MotCtrlMotAgBMeclRollgCntr.EngMin = 0;
MotCtrlMotAgBMeclRollgCntr.EngMax = 255;
MotCtrlMotAgBMeclRollgCntr.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgBMeclRollgCntr.ReadType = 'NonRte';


MotCtrlMotAgMeclCorrlnSts = DataDict.IpSignal;
MotCtrlMotAgMeclCorrlnSts.LongName = 'Motor Control Motor Angle Mechanical Correlation Status';
MotCtrlMotAgMeclCorrlnSts.Description = 'Motor angle correlation status';
MotCtrlMotAgMeclCorrlnSts.DocUnits = 'Cnt';
MotCtrlMotAgMeclCorrlnSts.EngDT = dt.b08;
MotCtrlMotAgMeclCorrlnSts.EngInit = 7;
MotCtrlMotAgMeclCorrlnSts.EngMin = 0;
MotCtrlMotAgMeclCorrlnSts.EngMax = 7;
MotCtrlMotAgMeclCorrlnSts.ReadIn = {'MotAgArbnPer1'};
MotCtrlMotAgMeclCorrlnSts.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotAgMecl = DataDict.OpSignal;
MotCtrlMotAgMecl.LongName = 'Motor Control Motor Angle Mechanical';
MotCtrlMotAgMecl.Description = [...
  'Arbitrated motor angle in mechanical degrees'];
MotCtrlMotAgMecl.DocUnits = 'MotRev';
MotCtrlMotAgMecl.SwcShoName = 'MotAgArbn';
MotCtrlMotAgMecl.EngDT = dt.u0p16;
MotCtrlMotAgMecl.EngInit = 0;
MotCtrlMotAgMecl.EngMin = 0;
MotCtrlMotAgMecl.EngMax = 0.9999847412;
MotCtrlMotAgMecl.TestTolerance = 0.0001220703125;
MotCtrlMotAgMecl.WrittenIn = {'MotAgArbnPer1'};
MotCtrlMotAgMecl.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

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
dMotAgArbnAAvl = DataDict.Display;
dMotAgArbnAAvl.LongName = 'Motor Angle Arbitration A  Available';
dMotAgArbnAAvl.Description = 'Availability status of MotAgA';
dMotAgArbnAAvl.DocUnits = 'Cnt';
dMotAgArbnAAvl.EngDT = dt.lgc;
dMotAgArbnAAvl.EngMin = 0;
dMotAgArbnAAvl.EngMax = 1;
dMotAgArbnAAvl.InitRowCol = [1  1];


dMotAgArbnBAvl = DataDict.Display;
dMotAgArbnBAvl.LongName = 'Motor Angle Arbitration B Available';
dMotAgArbnBAvl.Description = 'Availability status of MotAgB';
dMotAgArbnBAvl.DocUnits = 'Cnt';
dMotAgArbnBAvl.EngDT = dt.lgc;
dMotAgArbnBAvl.EngMin = 0;
dMotAgArbnBAvl.EngMax = 1;
dMotAgArbnBAvl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MotAgARollgCntPrev = DataDict.PIM;
MotAgARollgCntPrev.LongName = 'Motor Angle A Rolling Counter Previous';
MotAgARollgCntPrev.Description = [...
  'Previous instance of motor angle A rolling count'];
MotAgARollgCntPrev.DocUnits = 'Cnt';
MotAgARollgCntPrev.EngDT = dt.u08;
MotAgARollgCntPrev.EngMin = 0;
MotAgARollgCntPrev.EngMax = 255;
MotAgARollgCntPrev.InitRowCol = [1  1];


MotAgAStallCntPrev = DataDict.PIM;
MotAgAStallCntPrev.LongName = 'Motor Angle A Stall Counter Previous';
MotAgAStallCntPrev.Description = [...
  'Previous instance of motor angle A stall count'];
MotAgAStallCntPrev.DocUnits = 'Cnt';
MotAgAStallCntPrev.EngDT = dt.u08;
MotAgAStallCntPrev.EngMin = 0;
MotAgAStallCntPrev.EngMax = 10;
MotAgAStallCntPrev.InitRowCol = [1  1];


MotAgBRollgCntPrev = DataDict.PIM;
MotAgBRollgCntPrev.LongName = 'Motor Angle B Rolling Counter Previous';
MotAgBRollgCntPrev.Description = [...
  'Previous instance of motor angle B rolling count'];
MotAgBRollgCntPrev.DocUnits = 'Cnt';
MotAgBRollgCntPrev.EngDT = dt.u08;
MotAgBRollgCntPrev.EngMin = 0;
MotAgBRollgCntPrev.EngMax = 255;
MotAgBRollgCntPrev.InitRowCol = [1  1];


MotAgBStallCntPrev = DataDict.PIM;
MotAgBStallCntPrev.LongName = 'Motor Angle B Stall Counter Previous';
MotAgBStallCntPrev.Description = [...
  'Previous instance of motor angle B stall count'];
MotAgBStallCntPrev.DocUnits = 'Cnt';
MotAgBStallCntPrev.EngDT = dt.u08;
MotAgBStallCntPrev.EngMin = 0;
MotAgBStallCntPrev.EngMax = 10;
MotAgBStallCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
MAXSTALL_CNT_U08 = DataDict.Constant;
MAXSTALL_CNT_U08.LongName = 'Maximum Stall';
MAXSTALL_CNT_U08.Description = [...
  'Maximum stall count before deemed not available,Control Stall Cnt Prev Range to'];
MAXSTALL_CNT_U08.DocUnits = 'Cnt';
MAXSTALL_CNT_U08.EngDT = dt.u08;
MAXSTALL_CNT_U08.EngVal = 10;
MAXSTALL_CNT_U08.Define = 'Local';

MOTAGACORRLNSTSMASK_CNT_U08 = DataDict.Constant;
MOTAGACORRLNSTSMASK_CNT_U08.LongName = 'Motor Angle A Correlation Status Mask';
MOTAGACORRLNSTSMASK_CNT_U08.Description = [...
  'Mask used to check Motor Angle A on correlation status input'];
MOTAGACORRLNSTSMASK_CNT_U08.DocUnits = 'Cnt';
MOTAGACORRLNSTSMASK_CNT_U08.EngDT = dt.u08;
MOTAGACORRLNSTSMASK_CNT_U08.EngVal = 1;
MOTAGACORRLNSTSMASK_CNT_U08.Define = 'Local';

MOTAGBCORRLNSTSMASK_CNT_U08 = DataDict.Constant;
MOTAGBCORRLNSTSMASK_CNT_U08.LongName = 'Motor Angle B Correlation Status Mask';
MOTAGBCORRLNSTSMASK_CNT_U08.Description = [...
  'Mask used to check Motor Angle B on correlation status input'];
MOTAGBCORRLNSTSMASK_CNT_U08.DocUnits = 'Cnt';
MOTAGBCORRLNSTSMASK_CNT_U08.EngDT = dt.u08;
MOTAGBCORRLNSTSMASK_CNT_U08.EngVal = 2;
MOTAGBCORRLNSTSMASK_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
