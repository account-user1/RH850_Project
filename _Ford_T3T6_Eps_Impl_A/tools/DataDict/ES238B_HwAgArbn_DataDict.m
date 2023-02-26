%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 24-Aug-2016 09:28:54       %
%                                  Created with tool release: 2.45.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES238B = DataDict.FDD;
ES238B.Version = '1.0.X';
ES238B.LongName = 'Handwheel Angle Arbitration';
ES238B.ShoName  = 'HwAgArbn';
ES238B.DesignASIL = 'D';
ES238B.Description = [...
  'Arbitrates handwheel angle channels and provides handwheel angle to th' ...
  'e application'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwAgArbnPer1 = DataDict.Runnable;
HwAgArbnPer1.Context = 'Rte';
HwAgArbnPer1.TimeStep = 0.004;
HwAgArbnPer1.Description = 'Computer HwAg';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAgA = DataDict.IpSignal;
HwAgA.LongName = 'Handwheel Angle A';
HwAgA.Description = 'HwAg A source from HaAg0 Measurement';
HwAgA.DocUnits = 'HwDeg';
HwAgA.EngDT = dt.float32;
HwAgA.EngInit = 0;
HwAgA.EngMin = -900;
HwAgA.EngMax = 900;
HwAgA.ReadIn = {'HwAgArbnPer1'};
HwAgA.ReadType = 'Rte';


HwAgAQlfr = DataDict.IpSignal;
HwAgAQlfr.LongName = 'Handwheel Angle a Qualifier';
HwAgAQlfr.Description = 'Qualified Fault Status';
HwAgAQlfr.DocUnits = 'Cnt';
HwAgAQlfr.EngDT = enum.SigQlfr1;
HwAgAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwAgAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwAgAQlfr.ReadIn = {'HwAgArbnPer1'};
HwAgAQlfr.ReadType = 'Rte';


HwAgARollgCntr = DataDict.IpSignal;
HwAgARollgCntr.LongName = 'Handwheel Angle a Rolling Counter';
HwAgARollgCntr.Description = 'Instantaneous Fault Status';
HwAgARollgCntr.DocUnits = 'Cnt';
HwAgARollgCntr.EngDT = dt.u08;
HwAgARollgCntr.EngInit = 0;
HwAgARollgCntr.EngMin = 0;
HwAgARollgCntr.EngMax = 255;
HwAgARollgCntr.ReadIn = {'HwAgArbnPer1'};
HwAgARollgCntr.ReadType = 'Rte';


HwAgCorrlnSt = DataDict.IpSignal;
HwAgCorrlnSt.LongName = 'Handwheel Angle Correlation Status';
HwAgCorrlnSt.Description = 'Correlation Status';
HwAgCorrlnSt.DocUnits = 'Cnt';
HwAgCorrlnSt.EngDT = dt.b08;
HwAgCorrlnSt.EngInit = 1;
HwAgCorrlnSt.EngMin = 0;
HwAgCorrlnSt.EngMax = 1;
HwAgCorrlnSt.ReadIn = {'HwAgArbnPer1'};
HwAgCorrlnSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAg = DataDict.OpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = [...
  'Handwheel Angle for use by the application'];
HwAg.DocUnits = 'HwDeg';
HwAg.SwcShoName = 'HwAgArbn';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -900;
HwAg.EngMax = 900;
HwAg.TestTolerance = 0.1;
HwAg.WrittenIn = {'HwAgArbnPer1'};
HwAg.WriteType = 'Rte';



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
dHwAgArbnAgAAvl = DataDict.Display;
dHwAgArbnAgAAvl.LongName = 'Handwheel Angle Arbitration Channel a Available';
dHwAgArbnAgAAvl.Description = [...
  'Handwheel Angle Arbitration Channel A Available'];
dHwAgArbnAgAAvl.DocUnits = 'Cnt';
dHwAgArbnAgAAvl.EngDT = dt.lgc;
dHwAgArbnAgAAvl.EngMin = 0;
dHwAgArbnAgAAvl.EngMax = 1;
dHwAgArbnAgAAvl.InitRowCol = [1  1];


%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwAgARollgCntrPrev = DataDict.PIM;
HwAgARollgCntrPrev.LongName = 'Handwheel Angle a Rolling Counter Previous';
HwAgARollgCntrPrev.Description = 'HwAgArbnHwAgARollgCntPrev';
HwAgARollgCntrPrev.DocUnits = 'Cnt';
HwAgARollgCntrPrev.EngDT = dt.u08;
HwAgARollgCntrPrev.EngMin = 0;
HwAgARollgCntrPrev.EngMax = 255;
HwAgARollgCntrPrev.InitRowCol = [1  1];


HwAgAStallCntrPrev = DataDict.PIM;
HwAgAStallCntrPrev.LongName = 'Handwheel Angle a Stall Counter Previous';
HwAgAStallCntrPrev.Description = 'HwAgArbnHwAgAStallCntPrev';
HwAgAStallCntrPrev.DocUnits = 'Cnt';
HwAgAStallCntrPrev.EngDT = dt.u08;
HwAgAStallCntrPrev.EngMin = 0;
HwAgAStallCntrPrev.EngMax = 255;
HwAgAStallCntrPrev.InitRowCol = [1  1];


HwAgPrev = DataDict.PIM;
HwAgPrev.LongName = 'Handwheel Angle Previous';
HwAgPrev.Description = 'HwAgArbnHwAgPrev';
HwAgPrev.DocUnits = 'Cnt';
HwAgPrev.EngDT = dt.float32;
HwAgPrev.EngMin = -900;
HwAgPrev.EngMax = 900;
HwAgPrev.InitRowCol = [1  1];

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
HWAGARBNMAXSTALL_CNT_U08 = DataDict.Constant;
HWAGARBNMAXSTALL_CNT_U08.LongName = 'Handwheel Angle Arbitration Maximum Stall';
HWAGARBNMAXSTALL_CNT_U08.Description = 'Stall Count';
HWAGARBNMAXSTALL_CNT_U08.DocUnits = 'Cnt';
HWAGARBNMAXSTALL_CNT_U08.EngDT = dt.u08;
HWAGARBNMAXSTALL_CNT_U08.EngVal = 200;
HWAGARBNMAXSTALL_CNT_U08.Define = 'Local';

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
