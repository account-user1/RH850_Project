%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Feb-2017 11:03:04       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES228C = DataDict.FDD;
ES228C.Version = '1.0.x';
ES228C.LongName = 'Handwheel Torque Arbitration';
ES228C.ShoName  = 'HwTqArbn';
ES228C.DesignASIL = 'D';
ES228C.Description = [...
  'Arbitration between multiple trq sensors and calculation of handwheel ' ...
  'torque.  This version is unique in that is works with up to 4 unique H' ...
  'wTq signals.  There is no channel or pairs of torque signals concept.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTqArbnInit1 = DataDict.Runnable;
HwTqArbnInit1.Context = 'Rte';
HwTqArbnInit1.TimeStep = 0;
HwTqArbnInit1.Description = [...
  'Init function needed by SW team, no functional use here'];

HwTqArbnPer1 = DataDict.Runnable;
HwTqArbnPer1.Context = 'Rte';
HwTqArbnPer1.TimeStep = 0.002;
HwTqArbnPer1.Description = 'Only periodic of HwTq arbitration';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTqA = DataDict.IpSignal;
HwTqA.LongName = 'Handwheel Torque Sensor A Value';
HwTqA.Description = [...
  'HwTq Signal A.  Polarity aligned with other other input HwTq signals.'];
HwTqA.DocUnits = 'HwNwtMtr';
HwTqA.EngDT = dt.float32;
HwTqA.EngInit = 0;
HwTqA.EngMin = -10;
HwTqA.EngMax = 10;
HwTqA.ReadIn = {'HwTqArbnPer1'};
HwTqA.ReadType = 'Rte';


HwTqAQlfr = DataDict.IpSignal;
HwTqAQlfr.LongName = 'Handwheel Torque Sensor A Qualifier';
HwTqAQlfr.Description = 'Qualifier status of HwTqA';
HwTqAQlfr.DocUnits = 'Cnt';
HwTqAQlfr.EngDT = enum.SigQlfr1;
HwTqAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqAQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqAQlfr.ReadType = 'Rte';


HwTqARollgCntr = DataDict.IpSignal;
HwTqARollgCntr.LongName = 'Handwheel Torque Sensor A Rolling Counter';
HwTqARollgCntr.Description = 'Rolling counter of HwTqA';
HwTqARollgCntr.DocUnits = 'Cnt';
HwTqARollgCntr.EngDT = dt.u08;
HwTqARollgCntr.EngInit = 0;
HwTqARollgCntr.EngMin = 0;
HwTqARollgCntr.EngMax = 255;
HwTqARollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqARollgCntr.ReadType = 'Rte';


HwTqB = DataDict.IpSignal;
HwTqB.LongName = 'Handwheel Torque Sensor B Value';
HwTqB.Description = [...
  'HwTq Signal B.  Polarity aligned with other other input HwTq signals.'];
HwTqB.DocUnits = 'HwNwtMtr';
HwTqB.EngDT = dt.float32;
HwTqB.EngInit = 0;
HwTqB.EngMin = -10;
HwTqB.EngMax = 10;
HwTqB.ReadIn = {'HwTqArbnPer1'};
HwTqB.ReadType = 'Rte';


HwTqBQlfr = DataDict.IpSignal;
HwTqBQlfr.LongName = 'Handwheel Torque Sensor B Qualifier';
HwTqBQlfr.Description = 'Qualifier status of HwTqB';
HwTqBQlfr.DocUnits = 'Cnt';
HwTqBQlfr.EngDT = enum.SigQlfr1;
HwTqBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqBQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqBQlfr.ReadType = 'Rte';


HwTqBRollgCntr = DataDict.IpSignal;
HwTqBRollgCntr.LongName = 'Handwheel Torque Sensor 2 Rolling Counter';
HwTqBRollgCntr.Description = 'Rolling counter of HwTqB';
HwTqBRollgCntr.DocUnits = 'Cnt';
HwTqBRollgCntr.EngDT = dt.u08;
HwTqBRollgCntr.EngInit = 0;
HwTqBRollgCntr.EngMin = 0;
HwTqBRollgCntr.EngMax = 255;
HwTqBRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqBRollgCntr.ReadType = 'Rte';


HwTqC = DataDict.IpSignal;
HwTqC.LongName = 'Handwheel Torque Sensor C Value';
HwTqC.Description = [...
  'HwTq Signal C.  Polarity aligned with other other input HwTq signals.'];
HwTqC.DocUnits = 'HwNwtMtr';
HwTqC.EngDT = dt.float32;
HwTqC.EngInit = 0;
HwTqC.EngMin = -10;
HwTqC.EngMax = 10;
HwTqC.ReadIn = {'HwTqArbnPer1'};
HwTqC.ReadType = 'Rte';


HwTqCQlfr = DataDict.IpSignal;
HwTqCQlfr.LongName = 'Handwheel Torque Sensor C Qualifier';
HwTqCQlfr.Description = 'Qualifier status of HwTqC';
HwTqCQlfr.DocUnits = 'Cnt';
HwTqCQlfr.EngDT = enum.SigQlfr1;
HwTqCQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqCQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqCQlfr.ReadType = 'Rte';


HwTqCRollgCntr = DataDict.IpSignal;
HwTqCRollgCntr.LongName = 'Handwheel Torque Sensor C Rolling Counter';
HwTqCRollgCntr.Description = 'Rolling counter of HwTqC';
HwTqCRollgCntr.DocUnits = 'Cnt';
HwTqCRollgCntr.EngDT = dt.u08;
HwTqCRollgCntr.EngInit = 0;
HwTqCRollgCntr.EngMin = 0;
HwTqCRollgCntr.EngMax = 255;
HwTqCRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqCRollgCntr.ReadType = 'Rte';


HwTqCorrlnSts = DataDict.IpSignal;
HwTqCorrlnSts.LongName = 'Handwheel Torque Correlation Status';
HwTqCorrlnSts.Description = [...
  'Bit packed correlation status of input HwTq signals.'];
HwTqCorrlnSts.DocUnits = 'Cnt';
HwTqCorrlnSts.EngDT = dt.u08;
HwTqCorrlnSts.EngInit = 15;
HwTqCorrlnSts.EngMin = 0;
HwTqCorrlnSts.EngMax = 255;
HwTqCorrlnSts.ReadIn = {'HwTqArbnPer1'};
HwTqCorrlnSts.ReadType = 'Rte';


HwTqD = DataDict.IpSignal;
HwTqD.LongName = 'Handwheel Torque Sensor D Value';
HwTqD.Description = [...
  'HwTq Signal D.  Polarity aligned with other other input HwTq signals.'];
HwTqD.DocUnits = 'HwNwtMtr';
HwTqD.EngDT = dt.float32;
HwTqD.EngInit = 0;
HwTqD.EngMin = -10;
HwTqD.EngMax = 10;
HwTqD.ReadIn = {'HwTqArbnPer1'};
HwTqD.ReadType = 'Rte';


HwTqDQlfr = DataDict.IpSignal;
HwTqDQlfr.LongName = 'Handwheel Torque Sensor D Qualifier';
HwTqDQlfr.Description = 'Qualifier status of HwTqD';
HwTqDQlfr.DocUnits = 'Cnt';
HwTqDQlfr.EngDT = enum.SigQlfr1;
HwTqDQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqDQlfr.ReadIn = {'HwTqArbnPer1'};
HwTqDQlfr.ReadType = 'Rte';


HwTqDRollgCntr = DataDict.IpSignal;
HwTqDRollgCntr.LongName = 'Handwheel Torque Sensor D Rolling Counter';
HwTqDRollgCntr.Description = 'Rolling counter of HwTqD';
HwTqDRollgCntr.DocUnits = 'Cnt';
HwTqDRollgCntr.EngDT = dt.u08;
HwTqDRollgCntr.EngInit = 0;
HwTqDRollgCntr.EngMin = 0;
HwTqDRollgCntr.EngMax = 255;
HwTqDRollgCntr.ReadIn = {'HwTqArbnPer1'};
HwTqDRollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq = DataDict.OpSignal;
HwTq.LongName = 'Handwheel Torque Value';
HwTq.Description = [...
  'Value of the Handwheel Torque output '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.SwcShoName = 'HwTqArbn';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.TestTolerance = 0.0024414;
HwTq.WrittenIn = {'HwTqArbnPer1'};
HwTq.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTqArbnHwTqMaxStallCnt = DataDict.Calibration;
HwTqArbnHwTqMaxStallCnt.LongName = 'Handwheel Torque Maximum Stall Count';
HwTqArbnHwTqMaxStallCnt.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e.  This calibration is designed to be shared between arbitration and ' ...
  'correlation.'];
HwTqArbnHwTqMaxStallCnt.DocUnits = 'Cnt';
HwTqArbnHwTqMaxStallCnt.EngDT = dt.u08;
HwTqArbnHwTqMaxStallCnt.EngVal = 200;
HwTqArbnHwTqMaxStallCnt.EngMin = 1;
HwTqArbnHwTqMaxStallCnt.EngMax = 255;
HwTqArbnHwTqMaxStallCnt.Cardinality = 'Cmn';
HwTqArbnHwTqMaxStallCnt.CustomerVisible = false;
HwTqArbnHwTqMaxStallCnt.Online = false;
HwTqArbnHwTqMaxStallCnt.Impact = 'L';
HwTqArbnHwTqMaxStallCnt.TuningOwner = 'FDD';
HwTqArbnHwTqMaxStallCnt.GraphLink = {''};
HwTqArbnHwTqMaxStallCnt.Monotony = 'None';
HwTqArbnHwTqMaxStallCnt.MaxGrad = 0;
HwTqArbnHwTqMaxStallCnt.PortName = 'HwTqArbnHwTqMaxStallCnt';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwTqArbnAAvl = DataDict.Display;
dHwTqArbnAAvl.LongName = 'Handwheel Torque A Available';
dHwTqArbnAAvl.Description = 'Availability status of HwTqA';
dHwTqArbnAAvl.DocUnits = 'Cnt';
dHwTqArbnAAvl.EngDT = dt.lgc;
dHwTqArbnAAvl.EngMin = 0;
dHwTqArbnAAvl.EngMax = 1;
dHwTqArbnAAvl.InitRowCol = [1  1];


dHwTqArbnBAvl = DataDict.Display;
dHwTqArbnBAvl.LongName = 'Handwheel Torque B Available';
dHwTqArbnBAvl.Description = 'Availability status of HwTqB';
dHwTqArbnBAvl.DocUnits = 'Cnt';
dHwTqArbnBAvl.EngDT = dt.lgc;
dHwTqArbnBAvl.EngMin = 0;
dHwTqArbnBAvl.EngMax = 1;
dHwTqArbnBAvl.InitRowCol = [1  1];


dHwTqArbnCAvl = DataDict.Display;
dHwTqArbnCAvl.LongName = 'Handwheel Torque C Available';
dHwTqArbnCAvl.Description = 'Availability status of HwTqC';
dHwTqArbnCAvl.DocUnits = 'Cnt';
dHwTqArbnCAvl.EngDT = dt.lgc;
dHwTqArbnCAvl.EngMin = 0;
dHwTqArbnCAvl.EngMax = 1;
dHwTqArbnCAvl.InitRowCol = [1  1];


dHwTqArbnDAvl = DataDict.Display;
dHwTqArbnDAvl.LongName = 'Handwheel Torque D Available';
dHwTqArbnDAvl.Description = 'Availability status of HwTqD';
dHwTqArbnDAvl.DocUnits = 'Cnt';
dHwTqArbnDAvl.EngDT = dt.lgc;
dHwTqArbnDAvl.EngMin = 0;
dHwTqArbnDAvl.EngMax = 1;
dHwTqArbnDAvl.InitRowCol = [1  1];


dHwTqArbnHwTqDenom = DataDict.Display;
dHwTqArbnHwTqDenom.LongName = 'Handwheel Torque Denominator';
dHwTqArbnHwTqDenom.Description = [...
  'Display of the denominator where HwTq = dHwTqNumer/dHwTqDenom'];
dHwTqArbnHwTqDenom.DocUnits = 'Uls';
dHwTqArbnHwTqDenom.EngDT = dt.float32;
dHwTqArbnHwTqDenom.EngMin = 0;
dHwTqArbnHwTqDenom.EngMax = 4;
dHwTqArbnHwTqDenom.InitRowCol = [1  1];


dHwTqArbnHwTqNumer = DataDict.Display;
dHwTqArbnHwTqNumer.LongName = 'Handwheel Torque Numerator';
dHwTqArbnHwTqNumer.Description = [...
  'Display of the numerator where HwTq = dHwTqNumer/dHwTqDenom'];
dHwTqArbnHwTqNumer.DocUnits = 'HwNwtMtr';
dHwTqArbnHwTqNumer.EngDT = dt.float32;
dHwTqArbnHwTqNumer.EngMin = -40;
dHwTqArbnHwTqNumer.EngMax = 40;
dHwTqArbnHwTqNumer.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTqARollgCntrPrev = DataDict.PIM;
HwTqARollgCntrPrev.LongName = 'Handwheel Torque A Rolling Counter Previous';
HwTqARollgCntrPrev.Description = [...
  'Previous value of Hw trq A rolling counter'];
HwTqARollgCntrPrev.DocUnits = 'Cnt';
HwTqARollgCntrPrev.EngDT = dt.u08;
HwTqARollgCntrPrev.EngMin = 0;
HwTqARollgCntrPrev.EngMax = 255;
HwTqARollgCntrPrev.InitRowCol = [1  1];


HwTqAStallCntrPrev = DataDict.PIM;
HwTqAStallCntrPrev.LongName = 'Handwheel Torque A Stall Counter Previous';
HwTqAStallCntrPrev.Description = [...
  'Previous value of Hw trq A Stall counter'];
HwTqAStallCntrPrev.DocUnits = 'Cnt';
HwTqAStallCntrPrev.EngDT = dt.u08;
HwTqAStallCntrPrev.EngMin = 0;
HwTqAStallCntrPrev.EngMax = 255;
HwTqAStallCntrPrev.InitRowCol = [1  1];


HwTqBRollgCntrPrev = DataDict.PIM;
HwTqBRollgCntrPrev.LongName = 'Handwheel Torque B Rolling Counter Previous';
HwTqBRollgCntrPrev.Description = [...
  'Previous value of Hw trq B rolling counter'];
HwTqBRollgCntrPrev.DocUnits = 'Cnt';
HwTqBRollgCntrPrev.EngDT = dt.u08;
HwTqBRollgCntrPrev.EngMin = 0;
HwTqBRollgCntrPrev.EngMax = 255;
HwTqBRollgCntrPrev.InitRowCol = [1  1];


HwTqBStallCntrPrev = DataDict.PIM;
HwTqBStallCntrPrev.LongName = 'Handwheel Torque B Stall Counter Previous';
HwTqBStallCntrPrev.Description = [...
  'Previous value of Hw trq B Stall counter'];
HwTqBStallCntrPrev.DocUnits = 'Cnt';
HwTqBStallCntrPrev.EngDT = dt.u08;
HwTqBStallCntrPrev.EngMin = 0;
HwTqBStallCntrPrev.EngMax = 255;
HwTqBStallCntrPrev.InitRowCol = [1  1];


HwTqCRollgCntrPrev = DataDict.PIM;
HwTqCRollgCntrPrev.LongName = 'Handwheel Torque C Rolling Counter Previous';
HwTqCRollgCntrPrev.Description = [...
  'Previous value of Hw trq C rolling counter'];
HwTqCRollgCntrPrev.DocUnits = 'Cnt';
HwTqCRollgCntrPrev.EngDT = dt.u08;
HwTqCRollgCntrPrev.EngMin = 0;
HwTqCRollgCntrPrev.EngMax = 255;
HwTqCRollgCntrPrev.InitRowCol = [1  1];


HwTqCStallCntrPrev = DataDict.PIM;
HwTqCStallCntrPrev.LongName = 'Handwheel Torque C Stall Counter Previous';
HwTqCStallCntrPrev.Description = [...
  'Previous value of Hw trq C stall counter'];
HwTqCStallCntrPrev.DocUnits = 'Cnt';
HwTqCStallCntrPrev.EngDT = dt.u08;
HwTqCStallCntrPrev.EngMin = 0;
HwTqCStallCntrPrev.EngMax = 255;
HwTqCStallCntrPrev.InitRowCol = [1  1];


HwTqDRollgCntrPrev = DataDict.PIM;
HwTqDRollgCntrPrev.LongName = 'Handwheel Torque D Rolling Counter Previous';
HwTqDRollgCntrPrev.Description = [...
  'Previous value of Hw trq D rolling counter'];
HwTqDRollgCntrPrev.DocUnits = 'Cnt';
HwTqDRollgCntrPrev.EngDT = dt.u08;
HwTqDRollgCntrPrev.EngMin = 0;
HwTqDRollgCntrPrev.EngMax = 255;
HwTqDRollgCntrPrev.InitRowCol = [1  1];


HwTqDStallCntrPrev = DataDict.PIM;
HwTqDStallCntrPrev.LongName = 'Handwheel Torque D Stall Counter Previous';
HwTqDStallCntrPrev.Description = [...
  'Previous value of Hw trq D stall counter'];
HwTqDStallCntrPrev.DocUnits = 'Cnt';
HwTqDStallCntrPrev.EngDT = dt.u08;
HwTqDStallCntrPrev.EngMin = 0;
HwTqDStallCntrPrev.EngMax = 255;
HwTqDStallCntrPrev.InitRowCol = [1  1];


HwTqPrev = DataDict.PIM;
HwTqPrev.LongName = 'Handwheel Torque Previous';
HwTqPrev.Description = [...
  'Last instance of the HwTq output.  Used to hold on to last value when ' ...
  'insufficient number of signals are present to compute HwTq.'];
HwTqPrev.DocUnits = 'HwNwtMtr';
HwTqPrev.EngDT = dt.float32;
HwTqPrev.EngMin = -10;
HwTqPrev.EngMax = 10;
HwTqPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Maximum Range';
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.Description = [...
  'Max Range Limit for Hw Trq function output'];
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Minimum Range';
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.Description = [...
  'Min Range Limit for Hw Trq function output'];
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32.Define = 'Global';


MINHWTQDENOM_ULS_F32 = DataDict.Constant;
MINHWTQDENOM_ULS_F32.LongName = 'Minimum Handwheel Torque Denominator';
MINHWTQDENOM_ULS_F32.Description = [...
  'Minimum allowed denominator used in calculating handwheel torque.  The' ...
  ' desired value is 2.  Since the data type is a float 32 the value set ' ...
  'here will be between 1 and 2.  Will be used to compare against what sh' ...
  'ould be an integer value.  This value is also inherent in making sure ' ...
  'that a divide by 0 doesnt happen.  .EngVal must absolutely be greater ' ...
  'than FltEps'];
MINHWTQDENOM_ULS_F32.DocUnits = 'Uls';
MINHWTQDENOM_ULS_F32.EngDT = dt.float32;
MINHWTQDENOM_ULS_F32.EngVal = 1.5;
MINHWTQDENOM_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
