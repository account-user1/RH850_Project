%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Feb-2017 13:06:32       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES229C = DataDict.FDD;
ES229C.Version = '1.0.X';
ES229C.LongName = 'Handwheel Torque Corrleation';
ES229C.ShoName  = 'HwTqCorrln';
ES229C.DesignASIL = 'D';
ES229C.Description = [...
  'Function is responsible for immediate and long term correlation checks' ...
  ' on the torque sensor signals.  This variant treats all of the input H' ...
  'wTq signals individually.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTqCorrlnInit1 = DataDict.Runnable;
HwTqCorrlnInit1.Context = 'Rte';
HwTqCorrlnInit1.TimeStep = 0;
HwTqCorrlnInit1.Description = 'Initialization function';

HwTqCorrlnPer1 = DataDict.Runnable;
HwTqCorrlnPer1.Context = 'Rte';
HwTqCorrlnPer1.TimeStep = 0.002;
HwTqCorrlnPer1.Description = [...
  'Performs signal availability and calculates correlation status and the' ...
  ' number of independent signals.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'HwTqCorrlnPer1'};
FltInj_u08.Description = 'Fault Injection function';
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


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTqCorrlnPer1'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = '';
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
SetNtcSts.CallLocation = {'HwTqCorrlnPer1'};
SetNtcSts.Description = 'NTC Client Call Diag Manager';
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
HwTqA = DataDict.IpSignal;
HwTqA.LongName = 'Handwheel Torque A';
HwTqA.Description = 'Handwheel Torque Sensor A Value';
HwTqA.DocUnits = 'HwNwtMtr';
HwTqA.EngDT = dt.float32;
HwTqA.EngInit = 0;
HwTqA.EngMin = -10;
HwTqA.EngMax = 10;
HwTqA.ReadIn = {'HwTqCorrlnPer1'};
HwTqA.ReadType = 'Rte';


HwTqAQlfr = DataDict.IpSignal;
HwTqAQlfr.LongName = 'Handwheel Torque A Qualifier';
HwTqAQlfr.Description = [...
  'Handwheel Torque Sensor A Qualifier'];
HwTqAQlfr.DocUnits = 'Cnt';
HwTqAQlfr.EngDT = enum.SigQlfr1;
HwTqAQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqAQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqAQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqAQlfr.ReadType = 'Rte';


HwTqARollgCntr = DataDict.IpSignal;
HwTqARollgCntr.LongName = 'Handwheel Torque Sensor A Rolling Counter';
HwTqARollgCntr.Description = 'Instantaneous Error Indicator';
HwTqARollgCntr.DocUnits = 'Cnt';
HwTqARollgCntr.EngDT = dt.u08;
HwTqARollgCntr.EngInit = 0;
HwTqARollgCntr.EngMin = 0;
HwTqARollgCntr.EngMax = 255;
HwTqARollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqARollgCntr.ReadType = 'Rte';


HwTqB = DataDict.IpSignal;
HwTqB.LongName = 'Handwheel Torque B';
HwTqB.Description = 'Handwheel Torque Sensor B Value';
HwTqB.DocUnits = 'HwNwtMtr';
HwTqB.EngDT = dt.float32;
HwTqB.EngInit = 0;
HwTqB.EngMin = -10;
HwTqB.EngMax = 10;
HwTqB.ReadIn = {'HwTqCorrlnPer1'};
HwTqB.ReadType = 'Rte';


HwTqBQlfr = DataDict.IpSignal;
HwTqBQlfr.LongName = 'Handwheel Torque B Qualifier';
HwTqBQlfr.Description = 'Qualified Error Indicator';
HwTqBQlfr.DocUnits = 'Cnt';
HwTqBQlfr.EngDT = enum.SigQlfr1;
HwTqBQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqBQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqBQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqBQlfr.ReadType = 'Rte';


HwTqBRollgCntr = DataDict.IpSignal;
HwTqBRollgCntr.LongName = 'Handwheel Torque B Rolling Counter';
HwTqBRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqBRollgCntr.DocUnits = 'Cnt';
HwTqBRollgCntr.EngDT = dt.u08;
HwTqBRollgCntr.EngInit = 0;
HwTqBRollgCntr.EngMin = 0;
HwTqBRollgCntr.EngMax = 255;
HwTqBRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqBRollgCntr.ReadType = 'Rte';


HwTqC = DataDict.IpSignal;
HwTqC.LongName = 'Handwheel Torque C';
HwTqC.Description = 'Handwheel Torque Sensor C Value';
HwTqC.DocUnits = 'HwNwtMtr';
HwTqC.EngDT = dt.float32;
HwTqC.EngInit = 0;
HwTqC.EngMin = -10;
HwTqC.EngMax = 10;
HwTqC.ReadIn = {'HwTqCorrlnPer1'};
HwTqC.ReadType = 'Rte';


HwTqCQlfr = DataDict.IpSignal;
HwTqCQlfr.LongName = 'Handwheel Torque C Qualifier';
HwTqCQlfr.Description = 'Qualified Error Indicator';
HwTqCQlfr.DocUnits = 'Cnt';
HwTqCQlfr.EngDT = enum.SigQlfr1;
HwTqCQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqCQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqCQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqCQlfr.ReadType = 'Rte';


HwTqCRollgCntr = DataDict.IpSignal;
HwTqCRollgCntr.LongName = 'Handwheel Torque C Rolling Counter';
HwTqCRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqCRollgCntr.DocUnits = 'Cnt';
HwTqCRollgCntr.EngDT = dt.u08;
HwTqCRollgCntr.EngInit = 0;
HwTqCRollgCntr.EngMin = 0;
HwTqCRollgCntr.EngMax = 255;
HwTqCRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqCRollgCntr.ReadType = 'Rte';


HwTqD = DataDict.IpSignal;
HwTqD.LongName = 'Handwheel Torque D';
HwTqD.Description = 'Handwheel Torque Sensor D Value';
HwTqD.DocUnits = 'HwNwtMtr';
HwTqD.EngDT = dt.float32;
HwTqD.EngInit = 0;
HwTqD.EngMin = -10;
HwTqD.EngMax = 10;
HwTqD.ReadIn = {'HwTqCorrlnPer1'};
HwTqD.ReadType = 'Rte';


HwTqDQlfr = DataDict.IpSignal;
HwTqDQlfr.LongName = 'Handwheel Torque D Qualifier';
HwTqDQlfr.Description = 'qualified Error Indicator';
HwTqDQlfr.DocUnits = 'Cnt';
HwTqDQlfr.EngDT = enum.SigQlfr1;
HwTqDQlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTqDQlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTqDQlfr.ReadIn = {'HwTqCorrlnPer1'};
HwTqDQlfr.ReadType = 'Rte';


HwTqDRollgCntr = DataDict.IpSignal;
HwTqDRollgCntr.LongName = 'Handwheel Torque Sensor D Rolling Counter';
HwTqDRollgCntr.Description = 'Instantaneous Error Indicator';
HwTqDRollgCntr.DocUnits = 'Cnt';
HwTqDRollgCntr.EngDT = dt.u08;
HwTqDRollgCntr.EngInit = 0;
HwTqDRollgCntr.EngMin = 0;
HwTqDRollgCntr.EngMax = 255;
HwTqDRollgCntr.ReadIn = {'HwTqCorrlnPer1'};
HwTqDRollgCntr.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTqCorrlnSts = DataDict.OpSignal;
HwTqCorrlnSts.LongName = 'Handwheel Torque Correlation Status';
HwTqCorrlnSts.Description = [...
  'Each bit corresponds to Signal N, indicating if immediate correlation ' ...
  'check passed / failed'];
HwTqCorrlnSts.DocUnits = 'Cnt';
HwTqCorrlnSts.SwcShoName = 'HwTqCorrln';
HwTqCorrlnSts.EngDT = dt.u08;
HwTqCorrlnSts.EngInit = 15;
HwTqCorrlnSts.EngMin = 0;
HwTqCorrlnSts.EngMax = 255;
HwTqCorrlnSts.TestTolerance = 0;
HwTqCorrlnSts.WrittenIn = {'HwTqCorrlnPer1'};
HwTqCorrlnSts.WriteType = 'Rte';


HwTqIdptSig = DataDict.OpSignal;
HwTqIdptSig.LongName = 'Handwheel Torque Independent Signals';
HwTqIdptSig.Description = [...
  'Number of independent signals available for LOA mgr'];
HwTqIdptSig.DocUnits = 'Cnt';
HwTqIdptSig.SwcShoName = 'HwTqCorrln';
HwTqIdptSig.EngDT = dt.u08;
HwTqIdptSig.EngInit = 4;
HwTqIdptSig.EngMin = 0;
HwTqIdptSig.EngMax = 4;
HwTqIdptSig.TestTolerance = 0;
HwTqIdptSig.WrittenIn = {'HwTqCorrlnPer1'};
HwTqIdptSig.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTqCorrlnImdtCorrlnChkFailThd = DataDict.Calibration;
HwTqCorrlnImdtCorrlnChkFailThd.LongName = 'Handwheel Torque Correlation Immediate Correlation Check Fail Threshold';
HwTqCorrlnImdtCorrlnChkFailThd.Description = [...
  'Handwheel Torque Correlation Immediate Correlation Check Fail Threshol' ...
  'd'];
HwTqCorrlnImdtCorrlnChkFailThd.DocUnits = 'HwNwtMtr';
HwTqCorrlnImdtCorrlnChkFailThd.EngDT = dt.float32;
HwTqCorrlnImdtCorrlnChkFailThd.EngVal = 2.85;
HwTqCorrlnImdtCorrlnChkFailThd.EngMin = 0;
HwTqCorrlnImdtCorrlnChkFailThd.EngMax = 20;
HwTqCorrlnImdtCorrlnChkFailThd.Cardinality = 'Cmn';
HwTqCorrlnImdtCorrlnChkFailThd.CustomerVisible = false;
HwTqCorrlnImdtCorrlnChkFailThd.Online = false;
HwTqCorrlnImdtCorrlnChkFailThd.Impact = 'H';
HwTqCorrlnImdtCorrlnChkFailThd.TuningOwner = 'Safety';
HwTqCorrlnImdtCorrlnChkFailThd.GraphLink = {''};
HwTqCorrlnImdtCorrlnChkFailThd.Monotony = 'None';
HwTqCorrlnImdtCorrlnChkFailThd.MaxGrad = 999;
HwTqCorrlnImdtCorrlnChkFailThd.PortName = 'HwTqCorrlnImdtCorrlnChkFailThd';


HwTqCorrlnNtcFailStep = DataDict.Calibration;
HwTqCorrlnNtcFailStep.LongName = 'Handwheel Torque Correlation NTC Fail Step';
HwTqCorrlnNtcFailStep.Description = [...
  'Fail step provided to DiagMgr for long term correlation NTC'];
HwTqCorrlnNtcFailStep.DocUnits = 'Cnt';
HwTqCorrlnNtcFailStep.EngDT = dt.u16;
HwTqCorrlnNtcFailStep.EngVal = 3277;
HwTqCorrlnNtcFailStep.EngMin = 0;
HwTqCorrlnNtcFailStep.EngMax = 65535;
HwTqCorrlnNtcFailStep.Cardinality = 'Cmn';
HwTqCorrlnNtcFailStep.CustomerVisible = false;
HwTqCorrlnNtcFailStep.Online = false;
HwTqCorrlnNtcFailStep.Impact = 'H';
HwTqCorrlnNtcFailStep.TuningOwner = 'Safety';
HwTqCorrlnNtcFailStep.GraphLink = {''};
HwTqCorrlnNtcFailStep.Monotony = 'None';
HwTqCorrlnNtcFailStep.MaxGrad = 0;
HwTqCorrlnNtcFailStep.PortName = 'HwTqCorrlnNtcFailStep';


HwTqCorrlnNtcPassStep = DataDict.Calibration;
HwTqCorrlnNtcPassStep.LongName = 'Handwheel Torque Correlation NTC Pass Step';
HwTqCorrlnNtcPassStep.Description = [...
  'Pass step provided to DiagMgr for long term correlation NTC'];
HwTqCorrlnNtcPassStep.DocUnits = 'Cnt';
HwTqCorrlnNtcPassStep.EngDT = dt.u16;
HwTqCorrlnNtcPassStep.EngVal = 819;
HwTqCorrlnNtcPassStep.EngMin = 0;
HwTqCorrlnNtcPassStep.EngMax = 65535;
HwTqCorrlnNtcPassStep.Cardinality = 'Cmn';
HwTqCorrlnNtcPassStep.CustomerVisible = false;
HwTqCorrlnNtcPassStep.Online = false;
HwTqCorrlnNtcPassStep.Impact = 'H';
HwTqCorrlnNtcPassStep.TuningOwner = 'Safety';
HwTqCorrlnNtcPassStep.GraphLink = {''};
HwTqCorrlnNtcPassStep.Monotony = 'None';
HwTqCorrlnNtcPassStep.MaxGrad = 0;
HwTqCorrlnNtcPassStep.PortName = 'HwTqCorrlnNtcPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
HwTqArbnHwTqMaxStallCnt = DataDict.ImprtdCal;
HwTqArbnHwTqMaxStallCnt.DocUnits = 'Cnt';
HwTqArbnHwTqMaxStallCnt.EngDT = dt.u08;
HwTqArbnHwTqMaxStallCnt.EngVal = 200;
HwTqArbnHwTqMaxStallCnt.EngMin = 1;
HwTqArbnHwTqMaxStallCnt.EngMax = 255;
HwTqArbnHwTqMaxStallCnt.PortName = 'HwTqArbnHwTqMaxStallCnt';
HwTqArbnHwTqMaxStallCnt.Description = [...
  'Maximum value reached by stall counter to indicate signal not availabl' ...
  'e.  This calibration is designed to be shared between arbitration and ' ...
  'correlation.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dHwTqCorrlnAvl = DataDict.Display;
dHwTqCorrlnAvl.LongName = 'Handwheel Torque Available';
dHwTqCorrlnAvl.Description = [...
  'Bit packed status of HwTq availability'];
dHwTqCorrlnAvl.DocUnits = 'Cnt';
dHwTqCorrlnAvl.EngDT = dt.u08;
dHwTqCorrlnAvl.EngMin = 0;
dHwTqCorrlnAvl.EngMax = 15;
dHwTqCorrlnAvl.InitRowCol = [1  1];


dHwTqCorrlnImdtCorrlnSts = DataDict.Display;
dHwTqCorrlnImdtCorrlnSts.LongName = 'Handwheel Torque Correlation Immediate Correlation Status';
dHwTqCorrlnImdtCorrlnSts.Description = [...
  'Bit packed status of individual comparisons'];
dHwTqCorrlnImdtCorrlnSts.DocUnits = 'Cnt';
dHwTqCorrlnImdtCorrlnSts.EngDT = dt.u08;
dHwTqCorrlnImdtCorrlnSts.EngMin = 0;
dHwTqCorrlnImdtCorrlnSts.EngMax = 63;
dHwTqCorrlnImdtCorrlnSts.InitRowCol = [1  1];



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



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
FLTINJ_HWTQCORRLN_HWTQIDPTSIG = DataDict.Constant;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.LongName = 'Fault Injection Handwheel Torque Correlation Handwheel Torque Independent Signal';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Description = [...
  'Output signal of Handwheel Torque Correlation function.'];
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.DocUnits = 'Cnt';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngDT = dt.u16;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngVal = 27;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Define = 'Global';


HWTQCORRLNSTSMAXLMT_CNT_U08 = DataDict.Constant;
HWTQCORRLNSTSMAXLMT_CNT_U08.LongName = 'Handwheel Torque Correlation Status Signal Maximum Limit';
HWTQCORRLNSTSMAXLMT_CNT_U08.Description = [...
  'Maximum legal range of the hw tq correlation status signal '];
HWTQCORRLNSTSMAXLMT_CNT_U08.DocUnits = 'Cnt';
HWTQCORRLNSTSMAXLMT_CNT_U08.EngDT = dt.u08;
HWTQCORRLNSTSMAXLMT_CNT_U08.EngVal = 15;
HWTQCORRLNSTSMAXLMT_CNT_U08.Define = 'Local';


HWTQCORRLNSTSMINLMT_CNT_U08 = DataDict.Constant;
HWTQCORRLNSTSMINLMT_CNT_U08.LongName = 'Handwheel Torque Correlation Status Signal Minimum Limit';
HWTQCORRLNSTSMINLMT_CNT_U08.Description = [...
  'Minimum legal range of the hw tq correlation status signal '];
HWTQCORRLNSTSMINLMT_CNT_U08.DocUnits = 'Cnt';
HWTQCORRLNSTSMINLMT_CNT_U08.EngDT = dt.u08;
HWTQCORRLNSTSMINLMT_CNT_U08.EngVal = 0;
HWTQCORRLNSTSMINLMT_CNT_U08.Define = 'Local';


HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque A Correlation Fault NTC Number';
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq A correlation'];
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque B Correlation Fault NTC Number';
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq B correlation'];
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X071;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque C Correlation Fault NTC Number';
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq C correlation'];
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X072;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM = DataDict.ConfigParam;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.LongName = 'Handwheel Torque D Correlation Fault NTC Number';
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.Description = [...
  'NTC number allocated to HwTq D correlation'];
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.IsBuildPrm = false;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.DocUnits = 'Cnt';
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngDT = enum.NtcNr1;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngVal = NtcNr1.NTCNR_0X073;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngMin = NtcNr1.NTCNR_0X070;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.EngMax = NtcNr1.NTCNR_0X07A;
HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM.Define = 'Global';


HWTQIDPDTSIGMAXLMT_CNT_U08 = DataDict.Constant;
HWTQIDPDTSIGMAXLMT_CNT_U08.LongName = 'Handwheel Torque Independent Signal Maximum Limit';
HWTQIDPDTSIGMAXLMT_CNT_U08.Description = [...
  'Maximum legal range of the hw tq independent signal '];
HWTQIDPDTSIGMAXLMT_CNT_U08.DocUnits = 'Cnt';
HWTQIDPDTSIGMAXLMT_CNT_U08.EngDT = dt.u08;
HWTQIDPDTSIGMAXLMT_CNT_U08.EngVal = 4;
HWTQIDPDTSIGMAXLMT_CNT_U08.Define = 'Local';


HWTQIDPDTSIGMINLMT_CNT_U08 = DataDict.Constant;
HWTQIDPDTSIGMINLMT_CNT_U08.LongName = 'Handwheel Torque Independent Signal Minimum Limit';
HWTQIDPDTSIGMINLMT_CNT_U08.Description = [...
  'Minimum legal range of the hw tq independent signal '];
HWTQIDPDTSIGMINLMT_CNT_U08.DocUnits = 'Cnt';
HWTQIDPDTSIGMINLMT_CNT_U08.EngDT = dt.u08;
HWTQIDPDTSIGMINLMT_CNT_U08.EngVal = 0;
HWTQIDPDTSIGMINLMT_CNT_U08.Define = 'Local';


HWTQIDPDTSIGVLDMINLMT_CNT_U08 = DataDict.Constant;
HWTQIDPDTSIGVLDMINLMT_CNT_U08.LongName = 'Handwheel Torque Independent Signal Valid Minimum Limit';
HWTQIDPDTSIGVLDMINLMT_CNT_U08.Description = [...
  'Represents the valid number of minimum signals.  For this FDD there ar' ...
  'e 4 input signals.  It requires 2 signals to be valid.  Used to force ' ...
  'IdptSig to 0 if less than this constant are present.'];
HWTQIDPDTSIGVLDMINLMT_CNT_U08.DocUnits = 'Cnt';
HWTQIDPDTSIGVLDMINLMT_CNT_U08.EngDT = dt.u08;
HWTQIDPDTSIGVLDMINLMT_CNT_U08.EngVal = 2;
HWTQIDPDTSIGVLDMINLMT_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTqACorrlnFlt = DataDict.NTC;
HwTqACorrlnFlt.NtcNr = 'HWTQCORRLN_HWTQACORRLNFLTNTCNR_CNT_ENUM';
HwTqACorrlnFlt.NtcTyp = 'Deb';
HwTqACorrlnFlt.LongName = 'Handwheel Torque A Correlation Fault';
HwTqACorrlnFlt.Description = 'Fault indicating that HwTq A is failing to correlate with the other HwTq sensors.';
HwTqACorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqACorrlnFlt.NtcStInfo.Bit0Descr = 'A v B Failed';
HwTqACorrlnFlt.NtcStInfo.Bit1Descr = 'A v C Failed';
HwTqACorrlnFlt.NtcStInfo.Bit2Descr = 'A v D Failed';
HwTqACorrlnFlt.NtcStInfo.Bit3Descr = 'B v C Failed';
HwTqACorrlnFlt.NtcStInfo.Bit4Descr = 'B v D Failed';
HwTqACorrlnFlt.NtcStInfo.Bit5Descr = 'C v D Failed';
HwTqACorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqACorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTqBCorrlnFlt = DataDict.NTC;
HwTqBCorrlnFlt.NtcNr = 'HWTQCORRLN_HWTQBCORRLNFLTNTCNR_CNT_ENUM';
HwTqBCorrlnFlt.NtcTyp = 'Deb';
HwTqBCorrlnFlt.LongName = 'Handwheel Torque B Correlation Fault';
HwTqBCorrlnFlt.Description = 'Fault indicating that HwTq B is failing to correlate with the other HwTq sensors.';
HwTqBCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqBCorrlnFlt.NtcStInfo.Bit0Descr = 'A v B Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit1Descr = 'A v C Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit2Descr = 'A v D Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit3Descr = 'B v C Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit4Descr = 'B v D Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit5Descr = 'C v D Failed';
HwTqBCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqBCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTqCCorrlnFlt = DataDict.NTC;
HwTqCCorrlnFlt.NtcNr = 'HWTQCORRLN_HWTQCCORRLNFLTNTCNR_CNT_ENUM';
HwTqCCorrlnFlt.NtcTyp = 'Deb';
HwTqCCorrlnFlt.LongName = 'Handwheel Torque C Correlation Fault';
HwTqCCorrlnFlt.Description = 'Fault indicating that HwTq C is failing to correlate with the other HwTq sensors.';
HwTqCCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqCCorrlnFlt.NtcStInfo.Bit0Descr = 'A v B Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit1Descr = 'A v C Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit2Descr = 'A v D Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit3Descr = 'B v C Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit4Descr = 'B v D Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit5Descr = 'C v D Failed';
HwTqCCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqCCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTqDCorrlnFlt = DataDict.NTC;
HwTqDCorrlnFlt.NtcNr = 'HWTQCORRLN_HWTQDCORRLNFLTNTCNR_CNT_ENUM';
HwTqDCorrlnFlt.NtcTyp = 'Deb';
HwTqDCorrlnFlt.LongName = 'Handwheel Torque D Correlation Fault';
HwTqDCorrlnFlt.Description = 'Fault indicating that HwTq D is failing to correlate with the other HwTq sensors.';
HwTqDCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTqDCorrlnFlt.NtcStInfo.Bit0Descr = 'A v B Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit1Descr = 'A v C Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit2Descr = 'A v D Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit3Descr = 'B v C Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit4Descr = 'B v D Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit5Descr = 'C v D Failed';
HwTqDCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTqDCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
