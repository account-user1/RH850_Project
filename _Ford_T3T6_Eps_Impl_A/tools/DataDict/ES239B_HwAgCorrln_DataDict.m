%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Mar-2017 10:32:55       %
%                                  Created with tool release: 2.52.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES239B = DataDict.FDD;
ES239B.Version = '2.0.X';
ES239B.LongName = 'Handwheel Angle Correlation';
ES239B.ShoName  = 'HwAgCorrln';
ES239B.DesignASIL = 'D';
ES239B.Description = [...
  'Provides signal correlation for handwheel angle per the SSI design.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgCorrlnInit1 = DataDict.Runnable;
HwAgCorrlnInit1.Context = 'Rte';
HwAgCorrlnInit1.TimeStep = 0;
HwAgCorrlnInit1.Description = [...
  'Handwheel Angle Correlation Initialization'];

HwAgCorrlnPer1 = DataDict.Runnable;
HwAgCorrlnPer1.Context = 'Rte';
HwAgCorrlnPer1.TimeStep = 0.004;
HwAgCorrlnPer1.Description = [...
  'Compute Final Number of Independant Signal'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwAgCorrlnPer1'};
FltInj_u08.Description = [...
  'Fault injection on Independant Signal'];
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).TestTolerance = 999;
FltInj_u08.Arguments(1).Units = 'Cnt';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = '';
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAgAQlfr = DataDict.IpSignal;
HwAgAQlfr.LongName = 'Handwheel Angle a Qualifier';
HwAgAQlfr.Description = 'Qualified Fault Status';
HwAgAQlfr.DocUnits = 'Cnt';
HwAgAQlfr.EngDT = enum.SigQlfr1;
HwAgAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgAQlfr.ReadIn = {'HwAgCorrlnPer1'};
HwAgAQlfr.ReadType = 'Rte';


HwAgARollgCntr = DataDict.IpSignal;
HwAgARollgCntr.LongName = 'Handwheel Angle a Rolling Counter';
HwAgARollgCntr.Description = 'Instantaneous Fault Status';
HwAgARollgCntr.DocUnits = 'Cnt';
HwAgARollgCntr.EngDT = dt.u08;
HwAgARollgCntr.EngInit = 0;
HwAgARollgCntr.EngMin = 0;
HwAgARollgCntr.EngMax = 255;
HwAgARollgCntr.ReadIn = {'HwAgCorrlnPer1'};
HwAgARollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgCorrlnSt = DataDict.OpSignal;
HwAgCorrlnSt.LongName = 'Handwheel Angle Correlation Status';
HwAgCorrlnSt.Description = [...
  'Indicates the correlation status of handwheel angle'];
HwAgCorrlnSt.DocUnits = 'Cnt';
HwAgCorrlnSt.SwcShoName = 'HwAgCorrln';
HwAgCorrlnSt.EngDT = dt.b08;
HwAgCorrlnSt.EngInit = 1;
HwAgCorrlnSt.EngMin = 0;
HwAgCorrlnSt.EngMax = 1;
HwAgCorrlnSt.TestTolerance = 0;
HwAgCorrlnSt.WrittenIn = {'HwAgCorrlnPer1'};
HwAgCorrlnSt.WriteType = 'Rte';


HwAgIdptSig = DataDict.OpSignal;
HwAgIdptSig.LongName = 'Handwheel Angle Independent Signals';
HwAgIdptSig.Description = [...
  'Number of valid independent signals'];
HwAgIdptSig.DocUnits = 'Cnt';
HwAgIdptSig.SwcShoName = 'HwAgCorrln';
HwAgIdptSig.EngDT = dt.u08;
HwAgIdptSig.EngInit = 2;
HwAgIdptSig.EngMin = 0;
HwAgIdptSig.EngMax = 2;
HwAgIdptSig.TestTolerance = 0;
HwAgIdptSig.WrittenIn = {'HwAgCorrlnPer1'};
HwAgIdptSig.WriteType = 'Rte';



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
dHwAgCorrlnAgAAvl = DataDict.Display;
dHwAgCorrlnAgAAvl.LongName = 'Handwheel Angle Correlation Channel a Available';
dHwAgCorrlnAgAAvl.Description = [...
  'Handwheel Angle Correlation Channel A Available'];
dHwAgCorrlnAgAAvl.DocUnits = 'Cnt';
dHwAgCorrlnAgAAvl.EngDT = dt.lgc;
dHwAgCorrlnAgAAvl.EngMin = 0;
dHwAgCorrlnAgAAvl.EngMax = 1;
dHwAgCorrlnAgAAvl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgARollgCntPrev = DataDict.PIM;
HwAgARollgCntPrev.LongName = 'Handwheel Angle Correlation Handwheel Angle a Rolling Counter Previous';
HwAgARollgCntPrev.Description = [...
  'Previous value of rolling counter for sensor A'];
HwAgARollgCntPrev.DocUnits = 'Cnt';
HwAgARollgCntPrev.EngDT = dt.u08;
HwAgARollgCntPrev.EngMin = 0;
HwAgARollgCntPrev.EngMax = 255;
HwAgARollgCntPrev.InitRowCol = [1  1];


HwAgAStallCntPrev = DataDict.PIM;
HwAgAStallCntPrev.LongName = 'Handwheel Angle a Stall Counter Previous';
HwAgAStallCntPrev.Description = [...
  'Handwheel Angle a Stall Counter Previous'];
HwAgAStallCntPrev.DocUnits = 'Cnt';
HwAgAStallCntPrev.EngDT = dt.u08;
HwAgAStallCntPrev.EngMin = 0;
HwAgAStallCntPrev.EngMax = 255;
HwAgAStallCntPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
FLTINJ_HWAGCORRLN_HWAGIDPTSIG = DataDict.Constant;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.LongName = 'Handwheel Angle Correlation Handhweel Angle Independent Signals';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Description = [...
  'Output signal of Handwheel Angle Correlation function.'];
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.DocUnits = 'Uls';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngDT = dt.u16;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngVal = 35;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Define = 'Global';


HWAGCORRLNMAXSTALL_CNT_U08 = DataDict.Constant;
HWAGCORRLNMAXSTALL_CNT_U08.LongName = 'Handwheel Angle Correlation Maximum Stall';
HWAGCORRLNMAXSTALL_CNT_U08.Description = 'Stall Count';
HWAGCORRLNMAXSTALL_CNT_U08.DocUnits = 'Cnt';
HWAGCORRLNMAXSTALL_CNT_U08.EngDT = dt.u08;
HWAGCORRLNMAXSTALL_CNT_U08.EngVal = 200;
HWAGCORRLNMAXSTALL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
